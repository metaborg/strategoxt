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
ATerm term_r_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_p_43;
ATerm term_m_43;
ATerm term_h_43;
ATerm term_b_43;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_k_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_p_40;
ATerm term_k_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_z_39;
ATerm term_x_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_c_39;
ATerm term_x_38;
ATerm term_w_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_k_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_x_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_b_36;
ATerm term_y_35;
ATerm term_u_35;
ATerm term_m_34;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_u_29;
ATerm term_o_29;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_z_28;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_l_23;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_Sort_2, term_d_29, (ATerm) ATempty);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_ConstType_1, term_e_29);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_l_37);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_l_29);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_29);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__2, term_x_37, term_e_17);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_38));
  term_w_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_g_39);
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_c_40);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym__2, term_k_38, term_p_38);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym__2, term_y_40, term_e_17);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(sym__2, term_b_41, term_e_17);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym__2, term_c_40, term_e_17);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym__2, term_k_37, term_y_40);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym__2, term_x_43, term_e_17);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym_stdin_0);
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
ATerm spaste_1_0 (ATerm s_108 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm a_8 (ATerm s_32, ATerm r_32, ATerm t);
ATerm SVar_1_0 (ATerm m_90 (ATerm), ATerm t);
static ATerm b_8 (ATerm m_129 (ATerm), ATerm n_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_58, ATerm b_58, ATerm a_58, ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm c_8 (ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm), ATerm u_57, ATerm x_57, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm u_129 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm b_129 (ATerm (ATerm), ATerm), ATerm c_129 (ATerm), ATerm d_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_129 (ATerm (ATerm), ATerm), ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm tpaste_1_0 (ATerm o_108 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm b_87 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm g_9 (ATerm o_81, ATerm n_81, ATerm t);
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
ATerm oncetd_1_0 (ATerm s_110 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm simple_strategy_0_0 (ATerm t);
static ATerm h_8 (ATerm j_124 (ATerm), ATerm r_54, ATerm q_54, ATerm t);
ATerm tvars_matrix_boundin_3_0 (ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm t);
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
ATerm tboundin_3_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm m_8 (ATerm l_124 (ATerm), ATerm t_54, ATerm s_54, ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm o_8 (ATerm t_695, ATerm y_695, ATerm k_70, ATerm t);
ATerm while_not_2_0 (ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm t);
ATerm for_3_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm v_90 (ATerm o_89, ATerm p_89, ATerm q_89, ATerm t);
static ATerm k_6 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm free_vars_3_0 (ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm RowLet_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm q_8 (ATerm k_85, ATerm j_85, ATerm t);
static ATerm r_8 (ATerm h_121 (ATerm), ATerm p_48, ATerm n_48, ATerm t);
static ATerm p_8 (ATerm t);
ATerm default_state_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
ATerm MatchCons_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm t_8 (ATerm f_141 (ATerm), ATerm x_83, ATerm u_83, ATerm v_83, ATerm w_83, ATerm t);
static ATerm u_8 (ATerm q_83, ATerm r_83, ATerm s_83, ATerm t);
ATerm filter_1_0 (ATerm p_128 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm g_123 (ATerm), ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
ATerm ConsArgs_0_0 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm outedges_0_0 (ATerm t);
static ATerm x_103 (ATerm e_102, ATerm t);
ATerm get_path_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm y_8 (ATerm d_85, ATerm t);
static ATerm k_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm a_9 (ATerm t_84, ATerm t);
static ATerm o_10 (ATerm t);
static ATerm c_9 (ATerm r_84, ATerm t);
ATerm repeat_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t);
static ATerm e_9 (ATerm y_49, ATerm z_49, ATerm t);
ATerm end_scope_1_0 (ATerm e_121 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_121 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm f_121 (ATerm), ATerm g_121 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm n_122 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_109 (ATerm q_109, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm MatrixMerge_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm p_109 (ATerm), ATerm t);
static ATerm l_10 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm z_54, ATerm y_54, ATerm t);
static ATerm m_10 (ATerm q_124 (ATerm), ATerm v_54, ATerm u_54, ATerm t);
ATerm foldr_3_0 (ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm p_127 (ATerm), ATerm t);
static ATerm t_11 (ATerm t);
ATerm collect_om_2_0 (ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm t);
ATerm CollectSubst_0_0 (ATerm t);
ATerm IgnoreVar_0_0 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm CollectSplit_2_0 (ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm nzip0_1_0 (ATerm l_114 (ATerm), ATerm t);
ATerm Propagate_0_0 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
ATerm term_to_matrix_0_0 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
ATerm match_to_matrix_0_0 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm i_13 (ATerm t);
ATerm match_to_dfa_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm o_109 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_121 (ATerm), ATerm t);
static ATerm x_10 (ATerm l_40, ATerm m_40, ATerm t);
static ATerm y_10 (ATerm d_39, ATerm e_39, ATerm t);
static ATerm a_11 (ATerm y_116 (ATerm), ATerm y_273, ATerm j_39, ATerm t);
static ATerm z_10 (ATerm z_38, ATerm a_39, ATerm t);
static ATerm m_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm t_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm l_136 (ATerm), ATerm t);
static ATerm l_128 (ATerm f_128, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm b_11 (ATerm f_39, ATerm t);
static ATerm c_11 (ATerm y_63, ATerm z_63, ATerm t);
static ATerm d_11 (ATerm n_40, ATerm o_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_130 (ATerm w_128, ATerm t);
static ATerm j_130 (ATerm a_129, ATerm i_129, ATerm j_129, ATerm t);
static ATerm k_130 (ATerm t_129, ATerm w_129, ATerm x_129, ATerm t);
static ATerm e_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_122 (ATerm), ATerm t);
static ATerm h_11 (ATerm k_51, ATerm l_51, ATerm t);
ATerm if_verbose2_1_0 (ATerm p_118 (ATerm), ATerm t);
static ATerm v_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_11 (ATerm j_44, ATerm k_44, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_11 (ATerm t_49, ATerm u_49, ATerm s_49, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm f_11 (ATerm b_47, ATerm c_47, ATerm t);
ATerm foldr_2_0 (ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm o_118 (ATerm), ATerm t);
static ATerm x_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm need_help_1_0 (ATerm j_137 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm r_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm m_139 (ATerm), ATerm t);
static ATerm t_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm parse_options_1_0 (ATerm l_139 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm l_137 (ATerm), ATerm m_137 (ATerm), ATerm n_137 (ATerm), ATerm o_137 (ATerm), ATerm t);
static ATerm e_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm q_16 (ATerm t);
ATerm iowrap_3_0 (ATerm u_136 (ATerm), ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm t);
static ATerm x_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
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
  t = term_e_17;
  t = whoami_0_0(t);
  m_0 = t;
  t = term_f_17;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_17), m_0), term_g_17);
  t_0 = t;
  t = SSL_printnl(s_0, t_0);
  t = term_k_17;
  q_0 = t;
  t = SSL_exit(q_0);
  t = j_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_17 = ATgetArgument(t, 0);
      if(((ATgetType(l_17) != AT_LIST) || !(ATisEmpty(l_17))))
        _fail(t);
      {
        ATerm n_17 = ATgetArgument(t, 1);
        if(((ATgetType(n_17) != AT_LIST) || !(ATisEmpty(n_17))))
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
      ATerm s_17 = ATgetArgument(t, 0);
      if(((ATgetType(s_17) == AT_LIST) && !(ATisEmpty(s_17))))
        {
          a_1 = ATgetFirst((ATermList) s_17);
          b_1 = (ATerm) ATgetNext((ATermList) s_17);
        }
      else
        _fail(t);
      {
        ATerm u_17 = ATgetArgument(t, 1);
        if(((ATgetType(u_17) == AT_LIST) && !(ATisEmpty(u_17))))
          {
            c_1 = ATgetFirst((ATermList) u_17);
            d_1 = (ATerm) ATgetNext((ATermList) u_17);
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
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm x_17 = ATgetArgument(t, 0);
            j_1 = ATgetArgument(t, 1);
            k_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(w_17);
        t = (ATerm) ATmakeAppl(sym_SDef_3, m_1, j_1, k_1);
      }
    else
      {
        t = v_17;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm y_17 = ATgetArgument(t, 0);
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
      ATerm z_17 = ATgetArgument(t, 0);
      if(((ATgetType(z_17) != AT_LIST) || !(ATisEmpty(z_17))))
        _fail(t);
      {
        ATerm a_18 = ATgetArgument(t, 1);
        if(((ATgetType(a_18) != AT_LIST) || !(ATisEmpty(a_18))))
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
      ATerm b_18 = ATgetArgument(t, 0);
      if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
        {
          v_4 = ATgetFirst((ATermList) b_18);
          w_4 = (ATerm) ATgetNext((ATermList) b_18);
        }
      else
        _fail(t);
      {
        ATerm c_18 = ATgetArgument(t, 1);
        if(((ATgetType(c_18) == AT_LIST) && !(ATisEmpty(c_18))))
          {
            x_4 = ATgetFirst((ATermList) c_18);
            z_4 = (ATerm) ATgetNext((ATermList) c_18);
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
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_5);
      }
    else
      {
        t = d_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_18 = ATgetArgument(t, 0);
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
      ATerm h_18 = ATgetArgument(t, 0);
      if(((ATgetType(h_18) != AT_LIST) || !(ATisEmpty(h_18))))
        _fail(t);
      {
        ATerm i_18 = ATgetArgument(t, 1);
        if(((ATgetType(i_18) != AT_LIST) || !(ATisEmpty(i_18))))
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
  ATerm g_7 = NULL,h_7 = NULL,k_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_18 = ATgetArgument(t, 0);
      if(((ATgetType(j_18) == AT_LIST) && !(ATisEmpty(j_18))))
        {
          g_7 = ATgetFirst((ATermList) j_18);
          h_7 = (ATerm) ATgetNext((ATermList) j_18);
        }
      else
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
          {
            k_7 = ATgetFirst((ATermList) n_18);
            n_7 = (ATerm) ATgetNext((ATermList) n_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_7, k_7), (ATerm) ATmakeAppl(sym__2, h_7, n_7));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL;
  if(match_cons(t, sym__2))
    {
      p_7 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_7), p_7);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm s_7 = NULL,w_7 = NULL,n_8 = NULL;
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_7;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_8);
      }
    else
      {
        t = o_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_18 = ATgetArgument(t, 0);
            w_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_8, w_7);
      }
  }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(((ATgetType(s_18) != AT_LIST) || !(ATisEmpty(s_18))))
        _fail(t);
      {
        ATerm t_18 = ATgetArgument(t, 1);
        if(((ATgetType(t_18) != AT_LIST) || !(ATisEmpty(t_18))))
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
  ATerm v_9 = NULL,w_9 = NULL,y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
        {
          v_9 = ATgetFirst((ATermList) u_18);
          w_9 = (ATerm) ATgetNext((ATermList) u_18);
        }
      else
        _fail(t);
      {
        ATerm v_18 = ATgetArgument(t, 1);
        if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
          {
            y_9 = ATgetFirst((ATermList) v_18);
            z_9 = (ATerm) ATgetNext((ATermList) v_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_9, y_9), (ATerm) ATmakeAppl(sym__2, w_9, z_9));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_10), a_10);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm d_10 = NULL,p_10 = NULL,q_10 = NULL;
  if(match_cons(t, sym__2))
    {
      d_10 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_10;
  {
    ATerm w_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_10);
      }
    else
      {
        t = w_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            p_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_10, p_10);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm m_9 = NULL,x_9 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_10 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
      {
        ATerm u_0 = NULL,x_0 = NULL,y_0 = NULL,s_1 = NULL;
        t = SSLgetAnnotations(e_10);
        u_0 = t;
        t = f_10;
        t = s_108(t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_10, y_0);
        t = genzip_4_0(a_0, b_0, f_0, v_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_0, g_10);
        s_1 = t;
        t = SSLsetAnnotations(s_1, u_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_10 = ATgetArgument(t, 0);
          g_10 = ATgetArgument(t, 1);
          m_9 = ATgetArgument(t, 2);
          {
            ATerm d_4 = NULL,r_4 = NULL,s_4 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(e_10);
            d_4 = t;
            t = g_10;
            t = s_108(t);
            s_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_10, s_4);
            t = genzip_4_0(w_0, z_0, g_1, i_1, t);
            r_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, f_10, r_4, m_9);
            t_1 = t;
            t = SSLsetAnnotations(t_1, d_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_10 = ATgetArgument(t, 0);
              g_10 = ATgetArgument(t, 1);
              m_9 = ATgetArgument(t, 2);
              x_9 = ATgetArgument(t, 3);
              {
                ATerm h_6 = NULL,t_6 = NULL,z_6 = NULL,u_1 = NULL;
                t = SSLgetAnnotations(e_10);
                h_6 = t;
                t = g_10;
                t = s_108(t);
                z_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_10, z_6);
                t = genzip_4_0(n_1, o_1, p_1, q_1, t);
                t_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_10, t_6, m_9, x_9);
                u_1 = t;
                t = SSLsetAnnotations(u_1, h_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_10 = ATgetArgument(t, 0);
                  g_10 = ATgetArgument(t, 1);
                  m_9 = ATgetArgument(t, 2);
                  x_9 = ATgetArgument(t, 3);
                  {
                    ATerm n_9 = NULL,s_9 = NULL,t_9 = NULL,w_1 = NULL;
                    t = SSLgetAnnotations(e_10);
                    n_9 = t;
                    t = g_10;
                    t = s_108(t);
                    t_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_10, t_9);
                    t = genzip_4_0(r_1, v_1, y_1, z_1, t);
                    s_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, f_10, s_9, m_9, x_9);
                    w_1 = t;
                    t = SSLsetAnnotations(w_1, n_9);
                  }
                }
              else
                {
                  ATerm p_11 = NULL,s_11 = NULL,x_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      f_10 = ATgetArgument(t, 0);
                      g_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_10);
                  p_11 = t;
                  t = f_10;
                  t = s_108(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_11 = ATgetFirst((ATermList) t);
                      {
                        ATerm b_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, s_11, g_10);
                  x_1 = t;
                  t = SSLsetAnnotations(x_1, p_11);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_15 = ATgetArgument(t, 0);
      c_15 = ATgetArgument(t, 1);
      {
        ATerm g_12 = NULL,j_12 = NULL,k_12 = NULL,e_2 = NULL;
        t = SSLgetAnnotations(a_15);
        g_12 = t;
        t = b_15;
        t = t_108(t);
        j_12 = t;
        t = c_15;
        t = t_108(t);
        k_12 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_12, k_12);
        e_2 = t;
        t = SSLsetAnnotations(e_2, g_12);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_15 = ATgetArgument(t, 0);
          c_15 = ATgetArgument(t, 1);
          y_14 = ATgetArgument(t, 2);
          {
            ATerm j_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(a_15);
            j_13 = t;
            t = b_15;
            t = v_108(t);
            n_13 = t;
            t = c_15;
            t = v_108(t);
            o_13 = t;
            t = y_14;
            t = t_108(t);
            p_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, n_13, o_13, p_13);
            h_2 = t;
            t = SSLsetAnnotations(h_2, j_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              b_15 = ATgetArgument(t, 0);
              c_15 = ATgetArgument(t, 1);
              y_14 = ATgetArgument(t, 2);
              z_14 = ATgetArgument(t, 3);
              {
                ATerm w_14 = NULL,n_15 = NULL,p_15 = NULL,q_15 = NULL,w_15 = NULL,i_2 = NULL;
                t = SSLgetAnnotations(a_15);
                w_14 = t;
                t = b_15;
                t = v_108(t);
                n_15 = t;
                t = c_15;
                t = v_108(t);
                p_15 = t;
                t = y_14;
                t = v_108(t);
                q_15 = t;
                t = z_14;
                t = t_108(t);
                w_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, n_15, p_15, q_15, w_15);
                i_2 = t;
                t = SSLsetAnnotations(i_2, w_14);
              }
            }
          else
            {
              ATerm p_16 = NULL,y_16 = NULL,z_16 = NULL,j_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  b_15 = ATgetArgument(t, 0);
                  c_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_15);
              p_16 = t;
              t = b_15;
              t = v_108(t);
              y_16 = t;
              t = c_15;
              t = t_108(t);
              z_16 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, y_16, z_16);
              j_2 = t;
              t = SSLsetAnnotations(j_2, p_16);
            }
        }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm l_15 = NULL;
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_15 = ATgetArgument(t, 0);
          {
            ATerm j_19 = ATgetArgument(t, 1);
          }
          {
            ATerm k_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_19);
      t = l_15;
    }
  else
    {
      t = c_19;
      if(match_cons(t, sym_SDefT_4))
        {
          l_15 = ATgetArgument(t, 0);
          {
            ATerm l_19 = ATgetArgument(t, 1);
          }
          {
            ATerm m_19 = ATgetArgument(t, 2);
          }
          {
            ATerm n_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_15;
    }
  return(t);
}
static ATerm a_8 (ATerm s_32, ATerm r_32, ATerm t)
{
  t = s_32;
  t = map_1_0(a_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm m_90 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,x_15 = NULL,y_15 = NULL,r_2 = NULL;
  y_15 = t;
  if(match_cons(t, sym_SVar_1))
    {
      v_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_15);
  u_15 = t;
  t = v_15;
  t = m_90(t);
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, x_15);
  r_2 = t;
  t = SSLsetAnnotations(r_2, u_15);
  return(t);
}
static ATerm b_8 (ATerm m_129 (ATerm), ATerm n_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_58, ATerm b_58, ATerm a_58, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm g_16 = NULL;
    g_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_16, a_58);
    t = m_129(t);
    return(t);
  }
  static ATerm c_2 (ATerm t)
  {
    ATerm h_16 = NULL;
    h_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_16, b_58);
    t = m_129(t);
    return(t);
  }
  t = c_58;
  t = n_129(b_2, c_2, _id, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_19 = ATgetArgument(t, 0);
      if(((ATgetType(o_19) != AT_LIST) || !(ATisEmpty(o_19))))
        _fail(t);
      {
        ATerm p_19 = ATgetArgument(t, 1);
        if(((ATgetType(p_19) != AT_LIST) || !(ATisEmpty(p_19))))
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
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_19 = ATgetArgument(t, 0);
      if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
        {
          s_16 = ATgetFirst((ATermList) q_19);
          t_16 = (ATerm) ATgetNext((ATermList) q_19);
        }
      else
        _fail(t);
      {
        ATerm r_19 = ATgetArgument(t, 1);
        if(((ATgetType(r_19) == AT_LIST) && !(ATisEmpty(r_19))))
          {
            u_16 = ATgetFirst((ATermList) r_19);
            w_16 = (ATerm) ATgetNext((ATermList) r_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_16, u_16), (ATerm) ATmakeAppl(sym__2, t_16, w_16));
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL;
  if(match_cons(t, sym__2))
    {
      c_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_17), c_17);
  return(t);
}
static ATerm c_8 (ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm), ATerm u_57, ATerm x_57, ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,r_16 = NULL;
  t = u_57;
  t = g_129(t);
  k_16 = t;
  t = map_1_0(new_0_0, t);
  l_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_16, l_16);
  t = genzip_4_0(d_2, f_2, g_2, _id, t);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_16, x_57);
  t = conc_0_0(t);
  m_16 = t;
  t = u_57;
  {
    static ATerm k_2 (ATerm t)
    {
      t = l_16;
      return(t);
    }
    t = h_129(k_2, t);
  }
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_16, x_57, m_16);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,m_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  m_17 = t;
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      p_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_17 = ATgetFirst((ATermList) t);
      r_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_17;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_17;
            if((o_17 != t))
              {
                _fail(t);
              }
            t = j_17;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            t = (ATerm) ATmakeAppl(sym__2, o_17, r_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, o_17, r_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm u_129 (ATerm), ATerm t)
{
  static ATerm i_19 (ATerm t)
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_129(t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        {
          ATerm e_19 = NULL,f_19 = NULL,h_19 = NULL;
          static ATerm l_2 (ATerm t)
          {
            ATerm t_17 = NULL;
            t_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_17, not_null(h_19));
            t = i_19(t);
            return(t);
          }
          e_19 = t;
          if(match_cons(t, sym__2))
            {
              f_19 = ATgetArgument(t, 0);
              if(((h_19 != NULL) && (h_19 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                h_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_19;
          t = SRTS_all(l_2, t);
        }
      }
    return(t);
  }
  t = i_19(t);
  return(t);
}
ATerm rename_4_0 (ATerm b_129 (ATerm (ATerm), ATerm), ATerm c_129 (ATerm), ATerm d_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_129 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_19 = NULL;
  static ATerm t_20 (ATerm t)
  {
    static ATerm m_2 (ATerm t)
    {
      ATerm i_20 = NULL,j_20 = NULL,l_20 = NULL;
      i_20 = t;
      if(match_cons(t, sym__2))
        {
          j_20 = ATgetArgument(t, 0);
          l_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_2 (ATerm t)
            {
              ATerm r_20 = NULL;
              r_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_20, l_20);
              t = lookup_0_0(t);
              return(t);
            }
            t = j_20;
            t = b_129(n_2, t);
            LocalPopChoice(y_19);
          }
        else
          {
            t = x_19;
            {
              ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
              t = i_20;
              t = c_8(c_129, e_129, j_20, l_20, t);
              if(match_cons(t, sym__3))
                {
                  k_18 = ATgetArgument(t, 0);
                  l_18 = ATgetArgument(t, 1);
                  m_18 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = b_8(t_20, d_129, k_18, l_18, m_18, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(m_2, t);
    return(t);
  }
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_19, (ATerm) ATempty);
  t = t_20(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_20 = ATgetArgument(t, 0);
      if(((ATgetType(a_20) != AT_LIST) || !(ATisEmpty(a_20))))
        _fail(t);
      {
        ATerm b_20 = ATgetArgument(t, 1);
        if(((ATgetType(b_20) != AT_LIST) || !(ATisEmpty(b_20))))
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
  ATerm o_20 = NULL,p_20 = NULL,s_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_20 = ATgetArgument(t, 0);
      if(((ATgetType(c_20) == AT_LIST) && !(ATisEmpty(c_20))))
        {
          o_20 = ATgetFirst((ATermList) c_20);
          p_20 = (ATerm) ATgetNext((ATermList) c_20);
        }
      else
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
          {
            s_20 = ATgetFirst((ATermList) d_20);
            v_20 = (ATerm) ATgetNext((ATermList) d_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_20, s_20), (ATerm) ATmakeAppl(sym__2, p_20, v_20));
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
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_21);
      }
    else
      {
        t = e_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_20 = ATgetArgument(t, 0);
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
      ATerm n_20 = ATgetArgument(t, 0);
      if(((ATgetType(n_20) != AT_LIST) || !(ATisEmpty(n_20))))
        _fail(t);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(((ATgetType(q_20) != AT_LIST) || !(ATisEmpty(q_20))))
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
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      if(((ATgetType(u_20) == AT_LIST) && !(ATisEmpty(u_20))))
        {
          c_22 = ATgetFirst((ATermList) u_20);
          d_22 = (ATerm) ATgetNext((ATermList) u_20);
        }
      else
        _fail(t);
      {
        ATerm y_20 = ATgetArgument(t, 1);
        if(((ATgetType(y_20) == AT_LIST) && !(ATisEmpty(y_20))))
          {
            e_22 = ATgetFirst((ATermList) y_20);
            f_22 = (ATerm) ATgetNext((ATermList) y_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_22, e_22), (ATerm) ATmakeAppl(sym__2, d_22, f_22));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm g_22 = NULL,h_22 = NULL;
  if(match_cons(t, sym__2))
    {
      g_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_22), g_22);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm j_22 = NULL,l_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_22;
  {
    ATerm a_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_22);
      }
    else
      {
        t = a_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm f_21 = ATgetArgument(t, 0);
            l_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_22, l_22);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  m_27 = t;
  if(match_cons(t, sym_Scope_2))
    {
      n_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
      {
        ATerm x_18 = NULL,g_19 = NULL,v_2 = NULL;
        t = SSLgetAnnotations(m_27);
        x_18 = t;
        t = n_27;
        t = o_108(t);
        g_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_19, o_27);
        v_2 = t;
        t = SSLsetAnnotations(v_2, x_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          n_27 = ATgetArgument(t, 0);
          o_27 = ATgetArgument(t, 1);
          p_27 = ATgetArgument(t, 2);
          q_27 = ATgetArgument(t, 3);
          {
            ATerm z_19 = NULL,h_20 = NULL,k_20 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(m_27);
            z_19 = t;
            t = p_27;
            t = o_108(t);
            k_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_27, k_20);
            t = genzip_4_0(o_2, p_2, q_2, s_2, t);
            h_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, n_27, o_27, h_20, q_27);
            w_2 = t;
            t = SSLsetAnnotations(w_2, z_19);
          }
        }
      else
        {
          ATerm q_21 = NULL,y_21 = NULL,z_21 = NULL,x_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              n_27 = ATgetArgument(t, 0);
              o_27 = ATgetArgument(t, 1);
              p_27 = ATgetArgument(t, 2);
              q_27 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_27);
          q_21 = t;
          t = p_27;
          t = o_108(t);
          z_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_27, z_21);
          t = genzip_4_0(t_2, u_2, y_2, z_2, t);
          y_21 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, n_27, o_27, y_21, q_27);
          x_2 = t;
          t = SSLsetAnnotations(x_2, q_21);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,y_27 = NULL,b_28 = NULL,c_28 = NULL,b_3 = NULL;
  c_28 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_28);
  w_27 = t;
  t = y_27;
  t = b_87(t);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_28);
  b_3 = t;
  t = SSLsetAnnotations(b_3, w_27);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
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
  ATerm a_29 = NULL;
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_29 = ATgetArgument(t, 0);
          {
            ATerm k_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_21);
      t = a_29;
    }
  else
    {
      t = i_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_29;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm r_29 = NULL;
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_29 = ATgetArgument(t, 0);
          {
            ATerm n_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_21);
      t = r_29;
    }
  else
    {
      t = l_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_29;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  x_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
      t = x_29;
      t = a_8(y_29, z_29, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_29 = ATgetArgument(t, 0);
          z_29 = ATgetArgument(t, 1);
          a_30 = ATgetArgument(t, 2);
          t = z_29;
          t = map_1_0(v_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              y_29 = ATgetArgument(t, 0);
              z_29 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, y_29);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  y_29 = ATgetArgument(t, 0);
                  z_29 = ATgetArgument(t, 1);
                  a_30 = ATgetArgument(t, 2);
                  b_30 = ATgetArgument(t, 3);
                  t = z_29;
                  t = map_1_0(w_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_29 = ATgetArgument(t, 0);
                      z_29 = ATgetArgument(t, 1);
                      a_30 = ATgetArgument(t, 2);
                      b_30 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_29;
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
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_31 = ATgetArgument(t, 0);
          {
            ATerm r_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_21);
      t = h_31;
    }
  else
    {
      t = o_21;
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
  ATerm s_33 = NULL;
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_33 = ATgetArgument(t, 0);
          {
            ATerm u_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_21);
      t = s_33;
    }
  else
    {
      t = s_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_33;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm b_34 = NULL;
  ATerm v_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_34 = ATgetArgument(t, 0);
          {
            ATerm x_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_21);
      t = b_34;
    }
  else
    {
      t = v_21;
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
  ATerm a_22 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm i_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(b_22);
      {
        ATerm i_34 = NULL,l_34 = NULL;
        i_34 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm k_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        l_34 = t;
        t = SSLgetAnnotations(i_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_22 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) n_22) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_22 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(o_22) != AT_LIST) || !(ATisEmpty(o_22))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = l_34;
      }
    }
  else
    {
      t = a_22;
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm r_22 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_22) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm s_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_22);
            _fail(t);
          }
        else
          {
            t = p_22;
          }
      }
    }
  return(t);
}
static ATerm g_9 (ATerm o_81, ATerm n_81, ATerm t)
{
  t = o_81;
  t = topdown_1_0(y_3, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, o_81);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,b_35 = NULL,c_35 = NULL,e_35 = NULL,f_35 = NULL,m_35 = NULL,n_35 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_35 = ATgetArgument(t, 0);
      f_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_35;
  if(match_cons(t, sym_Match_1))
    {
      c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_35;
  if(match_cons(t, sym_Var_1))
    {
      e_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_35;
  if(match_cons(t, sym_Seq_2))
    {
      m_35 = ATgetArgument(t, 0);
      z_34 = ATgetArgument(t, 1);
      t = m_35;
      if(match_cons(t, sym_Build_1))
        {
          n_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_35;
      if(match_cons(t, sym_Var_1))
        {
          y_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_34;
      if((e_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_35)), z_34);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          m_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_35;
      if(match_cons(t, sym_Var_1))
        {
          n_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_35;
      if((e_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_35));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm v_35 = NULL,e_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,l_36 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_36;
  if(match_cons(t, sym_Build_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_36;
  if(match_cons(t, sym_Seq_2))
    {
      l_36 = ATgetArgument(t, 0);
      e_36 = ATgetArgument(t, 1);
      t = l_36;
      if(match_cons(t, sym_Match_1))
        {
          v_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_35;
      if((h_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_36), e_36);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          l_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_36;
      if((h_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, h_36);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,c_37 = NULL,d_37 = NULL,g_37 = NULL,h_37 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_37;
  if(match_cons(t, sym_Match_1))
    {
      d_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_37;
  if(match_cons(t, sym_Seq_2))
    {
      h_37 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
      t = h_37;
      if(match_cons(t, sym_Match_1))
        {
          z_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_36;
      if((d_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_37), a_37);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          h_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_37;
      if((d_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, d_37);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,h_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      h_38 = ATgetArgument(t, 0);
      l_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_38;
  if(match_cons(t, sym_Build_1))
    {
      ATerm t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_38;
  if(match_cons(t, sym_Seq_2))
    {
      m_38 = ATgetArgument(t, 0);
      n_38 = ATgetArgument(t, 1);
      t = m_38;
      if(match_cons(t, sym_PrimT_3))
        {
          y_37 = ATgetArgument(t, 0);
          z_37 = ATgetArgument(t, 1);
          a_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, y_37, z_37, a_38), n_38);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          m_38 = ATgetArgument(t, 0);
          n_38 = ATgetArgument(t, 1);
          o_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, m_38, n_38, o_38);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm t_39 = NULL,w_39 = NULL,y_39 = NULL,h_40 = NULL,j_40 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_39 = ATgetArgument(t, 0);
      h_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_39;
  if(match_cons(t, sym_Build_1))
    {
      ATerm u_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_40;
  if(match_cons(t, sym_Seq_2))
    {
      j_40 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
      t = j_40;
      if(match_cons(t, sym_Build_1))
        {
          t_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_39), w_39);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, j_40);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      if(((ATgetType(v_22) != AT_LIST) || !(ATisEmpty(v_22))))
        _fail(t);
      {
        ATerm w_22 = ATgetArgument(t, 1);
        if(((ATgetType(w_22) != AT_LIST) || !(ATisEmpty(w_22))))
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
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,s_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_22 = ATgetArgument(t, 0);
      if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
        {
          n_42 = ATgetFirst((ATermList) x_22);
          o_42 = (ATerm) ATgetNext((ATermList) x_22);
        }
      else
        _fail(t);
      {
        ATerm y_22 = ATgetArgument(t, 1);
        if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
          {
            p_42 = ATgetFirst((ATermList) y_22);
            s_42 = (ATerm) ATgetNext((ATermList) y_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_42, p_42), (ATerm) ATmakeAppl(sym__2, o_42, s_42));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  if(match_cons(t, sym__2))
    {
      t_42 = ATgetArgument(t, 0);
      u_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_42), t_42);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm v_42 = NULL,a_43 = NULL;
  if(match_cons(t, sym__2))
    {
      v_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_42), (ATerm) ATmakeAppl(sym_Match_1, a_43));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      if(((ATgetType(z_22) != AT_LIST) || !(ATisEmpty(z_22))))
        _fail(t);
      {
        ATerm b_23 = ATgetArgument(t, 1);
        if(((ATgetType(b_23) != AT_LIST) || !(ATisEmpty(b_23))))
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
  ATerm f_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if(((ATgetType(c_23) == AT_LIST) && !(ATisEmpty(c_23))))
        {
          f_43 = ATgetFirst((ATermList) c_23);
          i_43 = (ATerm) ATgetNext((ATermList) c_23);
        }
      else
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(((ATgetType(d_23) == AT_LIST) && !(ATisEmpty(d_23))))
          {
            j_43 = ATgetFirst((ATermList) d_23);
            k_43 = (ATerm) ATgetNext((ATermList) d_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_43, j_43), (ATerm) ATmakeAppl(sym__2, i_43, k_43));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm l_43 = NULL,n_43 = NULL;
  if(match_cons(t, sym__2))
    {
      l_43 = ATgetArgument(t, 0);
      n_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_43), l_43);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_43 = NULL,t_43 = NULL;
  if(match_cons(t, sym__2))
    {
      o_43 = ATgetArgument(t, 0);
      t_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_43), (ATerm) ATmakeAppl(sym_Match_1, t_43));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm l_41 = NULL,r_41 = NULL,s_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_41;
  if(match_cons(t, sym_Build_1))
    {
      w_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_41;
  if(match_cons(t, sym_Op_2))
    {
      x_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_41;
  if(match_cons(t, sym_Seq_2))
    {
      a_42 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
      {
        ATerm m_42 = NULL;
        t = a_42;
        if(match_cons(t, sym_Match_1))
          {
            b_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_42;
        if(match_cons(t, sym_Op_2))
          {
            l_41 = ATgetArgument(t, 0);
            r_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_41;
        if((x_41 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, y_41, r_41);
        t = genzip_4_0(z_3, a_4, b_4, c_4, t);
        m_42 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, x_41, y_41)), s_41));
      }
    }
  else
    {
      ATerm e_43 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          a_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_42;
      if(match_cons(t, sym_Op_2))
        {
          b_42 = ATgetArgument(t, 0);
          c_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_42;
      if((x_41 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, y_41, c_42);
      t = genzip_4_0(e_4, f_4, g_4, h_4, t);
      e_43 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_43), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, x_41, y_41)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm a_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
  h_45 = t;
  if(match_cons(t, sym_Seq_2))
    {
      i_45 = ATgetArgument(t, 0);
      o_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_45;
  if(match_cons(t, sym_Build_1))
    {
      j_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_45;
  if(match_cons(t, sym_Op_2))
    {
      k_45 = ATgetArgument(t, 0);
      {
        ATerm e_23 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_45;
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            p_45 = ATgetArgument(t, 0);
            {
              ATerm h_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_23);
        t = p_45;
        if(match_cons(t, sym_Match_1))
          {
            q_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_45;
        if(match_cons(t, sym_Op_2))
          {
            a_45 = ATgetArgument(t, 0);
            {
              ATerm i_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_45, a_45);
        {
          ATerm j_23 = t;
          if((PushChoice() == 0))
            {
              ATerm a_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  a_23 = ATgetArgument(t, 0);
                  if((a_23 != ATgetArgument(t, 1)))
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
              t = j_23;
            }
        }
        t = term_l_23;
      }
    else
      {
        t = f_23;
        if(match_cons(t, sym_Match_1))
          {
            p_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_45;
        if(match_cons(t, sym_Op_2))
          {
            q_45 = ATgetArgument(t, 0);
            {
              ATerm m_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_45, q_45);
        {
          ATerm n_23 = t;
          if((PushChoice() == 0))
            {
              ATerm k_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  k_23 = ATgetArgument(t, 0);
                  if((k_23 != ATgetArgument(t, 1)))
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
              t = n_23;
            }
        }
        t = term_l_23;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm s_110 (ATerm), ATerm t)
{
  static ATerm y_45 (ATerm t)
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_110(t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = SRTS_one(y_45, t);
      }
    return(t);
  }
  t = y_45(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm a_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,w_47 = NULL,x_47 = NULL;
  a_47 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_47 = ATgetArgument(t, 0);
      q_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_47;
  if(match_cons(t, sym_Let_2))
    {
      r_47 = ATgetArgument(t, 0);
      w_47 = ATgetArgument(t, 1);
      {
        ATerm f_48 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, h_47, r_47);
        t = conc_0_0(t);
        f_48 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, f_48, w_47);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          r_47 = ATgetArgument(t, 0);
          w_47 = ATgetArgument(t, 1);
          x_47 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_47 = ATgetFirst((ATermList) t);
          p_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_47;
      if(match_cons(t, sym_SDefT_4))
        {
          j_47 = ATgetArgument(t, 0);
          k_47 = ATgetArgument(t, 1);
          l_47 = ATgetArgument(t, 2);
          m_47 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = k_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_47;
      if(match_cons(t, sym_SVar_1))
        {
          s_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_47;
      if((j_47 != t))
        {
          _fail(t);
        }
      t = m_47;
      {
        ATerm q_23 = t;
        if((PushChoice() == 0))
          {
            static ATerm i_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm r_23 = ATgetArgument(t, 0);
                  if(match_cons(r_23, sym_SVar_1))
                    {
                      if((j_47 != ATgetArgument(r_23, 0)))
                        {
                          _fail(ATgetArgument(r_23, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm s_23 = ATgetArgument(t, 1);
                    if(((ATgetType(s_23) != AT_LIST) || !(ATisEmpty(s_23))))
                      _fail(t);
                  }
                  {
                    ATerm t_23 = ATgetArgument(t, 2);
                    if(((ATgetType(t_23) != AT_LIST) || !(ATisEmpty(t_23))))
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
            t = q_23;
          }
      }
      t = m_47;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,k_49 = NULL,n_49 = NULL,o_49 = NULL,w_49 = NULL,c_50 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      w_49 = ATgetArgument(t, 0);
      t = w_49;
      if(match_cons(t, sym_Seq_2))
        {
          o_49 = ATgetArgument(t, 0);
          f_49 = ATgetArgument(t, 1);
          t = o_49;
          if(match_cons(t, sym_Where_1))
            {
              e_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_49;
          if(match_cons(t, sym_Seq_2))
            {
              g_49 = ATgetArgument(t, 0);
              n_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_49;
          if(match_cons(t, sym_Build_1))
            {
              k_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, e_49, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_49), n_49)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              o_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, o_49);
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
              o_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, o_49);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              w_49 = ATgetArgument(t, 0);
              t = w_49;
              if(match_cons(t, sym_Not_1))
                {
                  o_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, o_49);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  w_49 = ATgetArgument(t, 0);
                  c_50 = ATgetArgument(t, 1);
                  t = c_50;
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
                      c_50 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_50;
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
  ATerm b_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      b_51 = ATgetArgument(t, 0);
      j_51 = ATgetArgument(t, 1);
      t = b_51;
      if(match_cons(t, sym_LChoice_2))
        {
          h_51 = ATgetArgument(t, 0);
          i_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, h_51, (ATerm) ATmakeAppl(sym_LChoice_2, i_51, j_51));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          b_51 = ATgetArgument(t, 0);
          j_51 = ATgetArgument(t, 1);
          t = b_51;
          if(match_cons(t, sym_Seq_2))
            {
              h_51 = ATgetArgument(t, 0);
              i_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, h_51, (ATerm) ATmakeAppl(sym_Seq_2, i_51, j_51));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              b_51 = ATgetArgument(t, 0);
              j_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_51;
          if(match_cons(t, sym_Choice_2))
            {
              h_51 = ATgetArgument(t, 0);
              i_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, h_51, (ATerm) ATmakeAppl(sym_Choice_2, i_51, j_51));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,p_52 = NULL,r_52 = NULL,s_52 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      r_52 = ATgetArgument(t, 0);
      s_52 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, r_52, s_52);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          r_52 = ATgetArgument(t, 0);
          t = r_52;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_52 = ATgetFirst((ATermList) t);
              i_52 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, h_52, (ATerm) ATmakeAppl(sym_LChoices_1, i_52));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_l_23;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              r_52 = ATgetArgument(t, 0);
              t = r_52;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_52 = ATgetFirst((ATermList) t);
                  i_52 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, h_52, (ATerm) ATmakeAppl(sym_Choices_1, i_52));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_l_23;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  r_52 = ATgetArgument(t, 0);
                  t = r_52;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_52 = ATgetFirst((ATermList) t);
                      i_52 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_52, (ATerm) ATmakeAppl(sym_Seqs_1, i_52));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_u_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      r_52 = ATgetArgument(t, 0);
                      s_52 = ATgetArgument(t, 1);
                      p_52 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, s_52, (ATerm) ATmakeAppl(sym_Op_2, term_v_23, (ATerm) ATinsert(ATinsert(ATempty, p_52), r_52)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          r_52 = ATgetArgument(t, 0);
                          s_52 = ATgetArgument(t, 1);
                          p_52 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_52)), r_52), (ATerm) ATmakeAppl(sym_Build_1, s_52)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              r_52 = ATgetArgument(t, 0);
                              s_52 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_52, (ATerm) ATmakeAppl(sym_Match_1, s_52));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  r_52 = ATgetArgument(t, 0);
                                  s_52 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_52), s_52);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      r_52 = ATgetArgument(t, 0);
                                      s_52 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_52), r_52);
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
  ATerm d_57 = NULL,e_57 = NULL,f_57 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      d_57 = ATgetArgument(t, 0);
      t = d_57;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_l_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          d_57 = ATgetArgument(t, 0);
          t = d_57;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_u_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              d_57 = ATgetArgument(t, 0);
              e_57 = ATgetArgument(t, 1);
              t = d_57;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_l_23;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  d_57 = ATgetArgument(t, 0);
                  e_57 = ATgetArgument(t, 1);
                  t = e_57;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_l_23;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      d_57 = ATgetArgument(t, 0);
                      e_57 = ATgetArgument(t, 1);
                      t = e_57;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_l_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          d_57 = ATgetArgument(t, 0);
                          t = d_57;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_l_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              d_57 = ATgetArgument(t, 0);
                              t = d_57;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_l_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  d_57 = ATgetArgument(t, 0);
                                  e_57 = ATgetArgument(t, 1);
                                  t = e_57;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_l_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      d_57 = ATgetArgument(t, 0);
                                      e_57 = ATgetArgument(t, 1);
                                      t = e_57;
                                      t = fetch_1_0(j_4, t);
                                      t = term_l_23;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          d_57 = ATgetArgument(t, 0);
                                          e_57 = ATgetArgument(t, 1);
                                          t = e_57;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = d_57;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = e_57;
                                                }
                                              else
                                                {
                                                  t = d_57;
                                                }
                                            }
                                          else
                                            {
                                              t = d_57;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = e_57;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              d_57 = ATgetArgument(t, 0);
                                              e_57 = ATgetArgument(t, 1);
                                              t = e_57;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = d_57;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = e_57;
                                                    }
                                                  else
                                                    {
                                                      t = d_57;
                                                    }
                                                }
                                              else
                                                {
                                                  t = d_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = e_57;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  d_57 = ATgetArgument(t, 0);
                                                  t = d_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_l_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      d_57 = ATgetArgument(t, 0);
                                                      e_57 = ATgetArgument(t, 1);
                                                      f_57 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = f_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_57, e_57);
                                                }
                                            }
                                        }
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
  ATerm x_59 = NULL,b_60 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_60 = ATgetArgument(t, 0);
      t = b_60;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_u_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_60 = ATgetArgument(t, 0);
          t = b_60;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_l_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              b_60 = ATgetArgument(t, 0);
              x_59 = ATgetArgument(t, 1);
              t = x_59;
              if(match_cons(t, sym_Id_0))
                {
                  t = b_60;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = x_59;
                    }
                  else
                    {
                      t = b_60;
                    }
                }
              else
                {
                  t = b_60;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = x_59;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  b_60 = ATgetArgument(t, 0);
                  x_59 = ATgetArgument(t, 1);
                  t = b_60;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_u_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      b_60 = ATgetArgument(t, 0);
                      x_59 = ATgetArgument(t, 1);
                      t = x_59;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_u_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          b_60 = ATgetArgument(t, 0);
                          x_59 = ATgetArgument(t, 1);
                          t = x_59;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_u_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              b_60 = ATgetArgument(t, 0);
                              t = b_60;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_u_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  b_60 = ATgetArgument(t, 0);
                                  t = b_60;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_u_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      b_60 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_60;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_u_23;
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
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm a_24 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
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
                              t = Idempotency_0_0(t);
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
                                    ATerm y_60 = NULL,z_60 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        y_60 = ATgetArgument(t, 0);
                                        z_60 = ATgetArgument(t, 1);
                                        t = y_60;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_60;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            y_60 = ATgetArgument(t, 0);
                                            z_60 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = y_60;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_60;
                                      }
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
                                          t = LetHoist_0_0(t);
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
                                                t = MisMatch_0_0(t);
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
                                                      t = BuildMatchFusion_0_0(t);
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
                                                            t = BuildBuild_0_0(t);
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
                                                                  t = BuildPrim_0_0(t);
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
                                                                        t = MatchIdem_0_0(t);
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
                                                                              t = BuildMatchIdem_0_0(t);
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
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(x_24);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_24;
                                                                                    {
                                                                                      ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL;
                                                                                      h_61 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          i_61 = ATgetArgument(t, 0);
                                                                                          j_61 = ATgetArgument(t, 1);
                                                                                          t = i_61;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              g_61 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = h_61;
                                                                                          t = g_9(g_61, j_61, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              i_61 = ATgetArgument(t, 0);
                                                                                              j_61 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = i_61;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = j_61;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm y_69 = NULL,d_70 = NULL,f_70 = NULL,g_70 = NULL;
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
              f_70 = ATgetArgument(t, 0);
              {
                ATerm e_28 = NULL,g_28 = NULL,i_3 = NULL;
                t = SSLgetAnnotations(d_70);
                e_28 = t;
                t = f_70;
                {
                  static ATerm w_30 (ATerm t)
                  {
                    ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
                    t_30 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        u_30 = ATgetArgument(t, 0);
                        {
                          ATerm g_31 = NULL,d_3 = NULL;
                          t = SSLgetAnnotations(t_30);
                          g_31 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, u_30);
                          d_3 = t;
                          t = SSLsetAnnotations(d_3, g_31);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            u_30 = ATgetArgument(t, 0);
                            {
                              ATerm o_31 = NULL,e_3 = NULL;
                              t = SSLgetAnnotations(t_30);
                              o_31 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, u_30);
                              e_3 = t;
                              t = SSLsetAnnotations(e_3, o_31);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                u_30 = ATgetArgument(t, 0);
                                {
                                  ATerm v_31 = NULL,f_3 = NULL;
                                  t = SSLgetAnnotations(t_30);
                                  v_31 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, u_30);
                                  f_3 = t;
                                  t = SSLsetAnnotations(f_3, v_31);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    u_30 = ATgetArgument(t, 0);
                                    {
                                      ATerm d_32 = NULL,g_3 = NULL;
                                      t = SSLgetAnnotations(t_30);
                                      d_32 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, u_30);
                                      g_3 = t;
                                      t = SSLsetAnnotations(g_3, d_32);
                                    }
                                  }
                                else
                                  {
                                    ATerm n_32 = NULL,u_32 = NULL,h_3 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        u_30 = ATgetArgument(t, 0);
                                        v_30 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(t_30);
                                    n_32 = t;
                                    t = v_30;
                                    t = map_1_0(w_30, t);
                                    u_32 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, u_30, u_32);
                                    h_3 = t;
                                    t = SSLsetAnnotations(h_3, n_32);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = w_30(t);
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
                  f_70 = ATgetArgument(t, 0);
                  g_70 = ATgetArgument(t, 1);
                  {
                    ATerm d_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,m_33 = NULL,n_33 = NULL,l_3 = NULL,k_3 = NULL,j_3 = NULL;
                    t = SSLgetAnnotations(d_70);
                    d_33 = t;
                    t = f_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        m_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(f_70);
                    k_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, m_33);
                    j_3 = t;
                    t = SSLsetAnnotations(j_3, k_33);
                    n_33 = t;
                    t = g_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        i_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(g_70);
                    h_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_33);
                    k_3 = t;
                    t = SSLsetAnnotations(k_3, h_33);
                    j_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, n_33, j_33);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, d_33);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      f_70 = ATgetArgument(t, 0);
                      {
                        ATerm j_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,n_3 = NULL,m_3 = NULL;
                        t = SSLgetAnnotations(d_70);
                        j_34 = t;
                        t = f_70;
                        if(match_cons(t, sym_Var_1))
                          {
                            o_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_70);
                        n_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, o_34);
                        m_3 = t;
                        t = SSLsetAnnotations(m_3, n_34);
                        p_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, p_34);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, j_34);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          f_70 = ATgetArgument(t, 0);
                          g_70 = ATgetArgument(t, 1);
                          {
                            ATerm w_34 = NULL,o_3 = NULL;
                            t = SSLgetAnnotations(d_70);
                            w_34 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, f_70, g_70);
                            o_3 = t;
                            t = SSLsetAnnotations(o_3, w_34);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              f_70 = ATgetArgument(t, 0);
                              g_70 = ATgetArgument(t, 1);
                              y_69 = ATgetArgument(t, 2);
                              {
                                ATerm t_35 = NULL,p_3 = NULL;
                                t = SSLgetAnnotations(d_70);
                                t_35 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, f_70, g_70, y_69);
                                p_3 = t;
                                t = SSLsetAnnotations(p_3, t_35);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  f_70 = ATgetArgument(t, 0);
                                  g_70 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_36 = NULL,s_36 = NULL,t_36 = NULL,q_3 = NULL;
                                    t = SSLgetAnnotations(d_70);
                                    o_36 = t;
                                    t = f_70;
                                    t = simple_strategy_0_0(t);
                                    s_36 = t;
                                    t = g_70;
                                    t = simple_strategy_0_0(t);
                                    t_36 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, s_36, t_36);
                                    q_3 = t;
                                    t = SSLsetAnnotations(q_3, o_36);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      f_70 = ATgetArgument(t, 0);
                                      {
                                        ATerm f_37 = NULL,m_37 = NULL,r_3 = NULL;
                                        t = SSLgetAnnotations(d_70);
                                        f_37 = t;
                                        t = f_70;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        m_37 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, m_37);
                                        r_3 = t;
                                        t = SSLsetAnnotations(r_3, f_37);
                                      }
                                    }
                                  else
                                    {
                                      ATerm t_37 = NULL,w_37 = NULL,s_3 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          f_70 = ATgetArgument(t, 0);
                                          g_70 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(d_70);
                                      t_37 = t;
                                      t = g_70;
                                      t = simple_strategy_0_0(t);
                                      w_37 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, f_70, w_37);
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
static ATerm h_8 (ATerm j_124 (ATerm), ATerm r_54, ATerm q_54, ATerm t)
{
  static ATerm f_72 (ATerm t)
  {
    static ATerm g_72 (ATerm j_71, ATerm t)
    {
      ATerm m_71 = NULL,p_71 = NULL,s_71 = NULL,t_71 = NULL,y_71 = NULL,z_71 = NULL,l_4 = NULL;
      t = j_71;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_71 = ATgetFirst((ATermList) t);
          p_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm k_4 (ATerm t)
        {
          t = q_54;
          return(t);
        }
        t = l_10(j_124, k_4, m_71, p_71, t);
      }
      t = j_71;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_71 = ATgetFirst((ATermList) t);
          y_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_71);
      s_71 = t;
      t = y_71;
      t = f_72(t);
      z_71 = t;
      t = (ATerm) ATinsert(CheckATermList(z_71), t_71);
      l_4 = t;
      t = SSLsetAnnotations(l_4, s_71);
      return(t);
    }
    ATerm b_72 = NULL,d_72 = NULL;
    b_72 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_72;
      }
    else
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_25 = ATgetFirst((ATermList) t);
                d_72 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(z_24);
            {
              ATerm b_25 = t;
              int c_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_72(b_72, t);
                  LocalPopChoice(c_25);
                }
              else
                {
                  t = b_25;
                  t = d_72;
                  t = f_72(t);
                }
            }
          }
        else
          {
            t = y_24;
            t = g_72(b_72, t);
          }
      }
    return(t);
  }
  t = r_54;
  t = f_72(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm u_141 (ATerm), ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(u_141, v_141, w_141, t);
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,j_38 = NULL,y_38 = NULL,b_39 = NULL,o_4 = NULL;
        s_72 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            t_72 = ATgetArgument(t, 0);
            u_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_72);
        j_38 = t;
        t = t_72;
        t = w_141(t);
        y_38 = t;
        t = u_72;
        t = u_141(t);
        b_39 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, y_38, b_39);
        o_4 = t;
        t = SSLsetAnnotations(o_4, j_38);
      }
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm s_73 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_73);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            {
              ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_73 = ATgetArgument(t, 0);
                  v_73 = ATgetArgument(t, 1);
                  w_73 = ATgetArgument(t, 2);
                  x_73 = ATgetArgument(t, 3);
                  t = w_73;
                  t = map_1_0(p_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_73 = ATgetArgument(t, 0);
                      v_73 = ATgetArgument(t, 1);
                      w_73 = ATgetArgument(t, 2);
                      x_73 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_73;
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
  ATerm g_74 = NULL;
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_74 = ATgetArgument(t, 0);
          {
            ATerm l_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_25);
      t = g_74;
    }
  else
    {
      t = j_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_74;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm m_75 = NULL;
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_75 = ATgetArgument(t, 0);
          {
            ATerm o_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_25);
      t = m_75;
    }
  else
    {
      t = m_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_75;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm s_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_75);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            {
              ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  w_75 = ATgetArgument(t, 0);
                  x_75 = ATgetArgument(t, 1);
                  y_75 = ATgetArgument(t, 2);
                  z_75 = ATgetArgument(t, 3);
                  t = y_75;
                  t = map_1_0(f_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_75 = ATgetArgument(t, 0);
                      x_75 = ATgetArgument(t, 1);
                      y_75 = ATgetArgument(t, 2);
                      z_75 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_75;
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
  ATerm g_76 = NULL;
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_76 = ATgetArgument(t, 0);
          {
            ATerm v_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_25);
      t = g_76;
    }
  else
    {
      t = t_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_76;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm p_76 = NULL;
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_76 = ATgetArgument(t, 0);
          {
            ATerm y_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_25);
      t = p_76;
    }
  else
    {
      t = w_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_76;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm t_76 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_76);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            {
              ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  v_76 = ATgetArgument(t, 0);
                  w_76 = ATgetArgument(t, 1);
                  x_76 = ATgetArgument(t, 2);
                  y_76 = ATgetArgument(t, 3);
                  t = x_76;
                  t = map_1_0(l_5, t);
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
  ATerm i_77 = NULL;
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_77 = ATgetArgument(t, 0);
          {
            ATerm f_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_26);
      t = i_77;
    }
  else
    {
      t = d_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_77;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm v_77 = NULL;
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_77 = ATgetArgument(t, 0);
          {
            ATerm i_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_26);
      t = v_77;
    }
  else
    {
      t = g_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_77;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm b_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_78);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm j_26 = t;
  int k_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_26);
    }
  else
    {
      t = j_26;
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm e_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  e_78 = ATgetArgument(t, 0);
                  h_78 = ATgetArgument(t, 1);
                  i_78 = ATgetArgument(t, 2);
                  j_78 = ATgetArgument(t, 3);
                  t = i_78;
                  t = map_1_0(r_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_78 = ATgetArgument(t, 0);
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
static ATerm r_5 (ATerm t)
{
  ATerm q_78 = NULL;
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_78 = ATgetArgument(t, 0);
          {
            ATerm p_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_26);
      t = q_78;
    }
  else
    {
      t = n_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_78;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm c_79 = NULL;
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_79 = ATgetArgument(t, 0);
          {
            ATerm s_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_26);
      t = c_79;
    }
  else
    {
      t = q_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_79;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm k_73 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      k_73 = ATgetArgument(t, 0);
      t = k_73;
      t = free_vars_3_0(m_4, n_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          k_73 = ATgetArgument(t, 0);
          t = k_73;
          t = free_vars_3_0(u_4, c_5, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              k_73 = ATgetArgument(t, 0);
              t = k_73;
              t = free_vars_3_0(j_5, k_5, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  k_73 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_73;
              t = free_vars_3_0(o_5, p_5, tboundin_3_0, t);
            }
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL,f_85 = NULL,g_85 = NULL;
  f_85 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_85 = ATgetArgument(t, 0);
      w_84 = ATgetArgument(t, 1);
      {
        ATerm n_39 = NULL,q_39 = NULL,r_39 = NULL,t_4 = NULL;
        t = SSLgetAnnotations(f_85);
        n_39 = t;
        t = g_85;
        t = r_108(t);
        q_39 = t;
        t = w_84;
        t = p_108(t);
        r_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, q_39, r_39);
        t_4 = t;
        t = SSLsetAnnotations(t_4, n_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          g_85 = ATgetArgument(t, 0);
          w_84 = ATgetArgument(t, 1);
          x_84 = ATgetArgument(t, 2);
          y_84 = ATgetArgument(t, 3);
          {
            ATerm g_40 = NULL,s_40 = NULL,t_40 = NULL,w_40 = NULL,x_40 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(f_85);
            g_40 = t;
            t = g_85;
            t = r_108(t);
            s_40 = t;
            t = w_84;
            t = r_108(t);
            t_40 = t;
            t = x_84;
            t = r_108(t);
            w_40 = t;
            t = y_84;
            t = p_108(t);
            x_40 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_40, t_40, w_40, x_40);
            y_4 = t;
            t = SSLsetAnnotations(y_4, g_40);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              g_85 = ATgetArgument(t, 0);
              w_84 = ATgetArgument(t, 1);
              x_84 = ATgetArgument(t, 2);
              y_84 = ATgetArgument(t, 3);
              {
                ATerm j_41 = NULL,p_41 = NULL,q_41 = NULL,u_41 = NULL,d_42 = NULL,d_5 = NULL;
                t = SSLgetAnnotations(f_85);
                j_41 = t;
                t = g_85;
                t = r_108(t);
                p_41 = t;
                t = w_84;
                t = r_108(t);
                q_41 = t;
                t = x_84;
                t = r_108(t);
                u_41 = t;
                t = y_84;
                t = p_108(t);
                d_42 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, p_41, q_41, u_41, d_42);
                d_5 = t;
                t = SSLsetAnnotations(d_5, j_41);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  g_85 = ATgetArgument(t, 0);
                  {
                    ATerm y_42 = NULL,g_43 = NULL,m_5 = NULL;
                    t = SSLgetAnnotations(f_85);
                    y_42 = t;
                    t = g_85;
                    t = p_108(t);
                    g_43 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, g_43);
                    m_5 = t;
                    t = SSLsetAnnotations(m_5, y_42);
                  }
                }
              else
                {
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      g_85 = ATgetArgument(t, 0);
                      {
                        ATerm s_43 = NULL,v_43 = NULL,q_5 = NULL;
                        t = SSLgetAnnotations(f_85);
                        s_43 = t;
                        t = g_85;
                        t = p_108(t);
                        v_43 = t;
                        t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, v_43);
                        q_5 = t;
                        t = SSLsetAnnotations(q_5, s_43);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_ExtendDynamicRules_1))
                        {
                          g_85 = ATgetArgument(t, 0);
                          {
                            ATerm b_44 = NULL,d_44 = NULL,s_5 = NULL;
                            t = SSLgetAnnotations(f_85);
                            b_44 = t;
                            t = g_85;
                            t = p_108(t);
                            d_44 = t;
                            t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, d_44);
                            s_5 = t;
                            t = SSLsetAnnotations(s_5, b_44);
                          }
                        }
                      else
                        {
                          ATerm s_44 = NULL,y_44 = NULL,t_5 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              g_85 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(f_85);
                          s_44 = t;
                          t = g_85;
                          t = p_108(t);
                          y_44 = t;
                          t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, y_44);
                          t_5 = t;
                          t = SSLsetAnnotations(t_5, s_44);
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
  ATerm o_86 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_86);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_86 = ATgetArgument(t, 0);
                  r_86 = ATgetArgument(t, 1);
                  s_86 = ATgetArgument(t, 2);
                  t_86 = ATgetArgument(t, 3);
                  t = s_86;
                  t = map_1_0(x_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_86 = ATgetArgument(t, 0);
                      r_86 = ATgetArgument(t, 1);
                      s_86 = ATgetArgument(t, 2);
                      t_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_86;
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
  ATerm a_87 = NULL;
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_87 = ATgetArgument(t, 0);
          {
            ATerm z_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_26);
      t = a_87;
    }
  else
    {
      t = x_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_87;
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm k_87 = NULL;
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_87 = ATgetArgument(t, 0);
          {
            ATerm c_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_27);
      t = k_87;
    }
  else
    {
      t = a_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_87;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm f_86 = NULL,j_86 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_86 = ATgetArgument(t, 0);
      t = j_86;
      if(match_cons(t, sym_Rule_3))
        {
          f_86 = ATgetArgument(t, 0);
          {
            ATerm d_27 = ATgetArgument(t, 1);
          }
          {
            ATerm e_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_86;
      t = free_vars_3_0(v_5, w_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_86 = ATgetArgument(t, 0);
          {
            ATerm f_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_86;
    }
  return(t);
}
static ATerm m_8 (ATerm l_124 (ATerm), ATerm t_54, ATerm s_54, ATerm t)
{
  static ATerm d_88 (ATerm t)
  {
    ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
    y_87 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_87;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_87 = ATgetFirst((ATermList) t);
            a_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_87;
              {
                static ATerm z_5 (ATerm t)
                {
                  t = s_54;
                  return(t);
                }
                t = l_10(l_124, z_5, z_87, a_88, t);
              }
              t = d_88(t);
              LocalPopChoice(h_27);
            }
          else
            {
              t = g_27;
              {
                ATerm r_45 = NULL,u_45 = NULL,f_6 = NULL;
                t = SSLgetAnnotations(y_87);
                r_45 = t;
                t = a_88;
                t = d_88(t);
                u_45 = t;
                t = (ATerm) ATinsert(CheckATermList(u_45), z_87);
                f_6 = t;
                t = SSLsetAnnotations(f_6, r_45);
              }
            }
        }
      }
    return(t);
  }
  t = t_54;
  t = d_88(t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_27 = ATgetArgument(t, 0);
      if(((ATgetType(i_27) != AT_LIST) || !(ATisEmpty(i_27))))
        _fail(t);
      {
        ATerm j_27 = ATgetArgument(t, 1);
        if(((ATgetType(j_27) != AT_LIST) || !(ATisEmpty(j_27))))
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
  ATerm n_88 = NULL,o_88 = NULL,p_88 = NULL,q_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(((ATgetType(k_27) == AT_LIST) && !(ATisEmpty(k_27))))
        {
          n_88 = ATgetFirst((ATermList) k_27);
          o_88 = (ATerm) ATgetNext((ATermList) k_27);
        }
      else
        _fail(t);
      {
        ATerm l_27 = ATgetArgument(t, 1);
        if(((ATgetType(l_27) == AT_LIST) && !(ATisEmpty(l_27))))
          {
            p_88 = ATgetFirst((ATermList) l_27);
            q_88 = (ATerm) ATgetNext((ATermList) l_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_88, p_88), (ATerm) ATmakeAppl(sym__2, o_88, q_88));
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
static ATerm o_8 (ATerm t_695, ATerm y_695, ATerm k_70, ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL;
  t = SSL_explode_term(y_695);
  if(match_cons(t, sym__2))
    {
      g_88 = ATgetArgument(t, 0);
      i_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_695);
  if(match_cons(t, sym__2))
    {
      if((g_88 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_88, i_88);
  t = genzip_4_0(a_6, b_6, c_6, _id, t);
  j_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_88, k_70);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_116 (ATerm), ATerm b_116 (ATerm), ATerm t)
{
  static ATerm y_88 (ATerm t)
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_116(t);
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        t = b_116(t);
        t = y_88(t);
      }
    return(t);
  }
  t = y_88(t);
  return(t);
}
ATerm for_3_0 (ATerm d_116 (ATerm), ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t)
{
  t = d_116(t);
  t = while_not_2_0(e_116, f_116, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm j_89 = NULL;
  j_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_89);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL,i_6 = NULL;
  n_89 = t;
  if(match_cons(t, sym__2))
    {
      l_89 = ATgetArgument(t, 0);
      m_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_89);
  k_89 = t;
  t = m_89;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_89, m_89);
  i_6 = t;
  t = SSLsetAnnotations(i_6, k_89);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm g_90 = NULL,h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL;
  g_90 = t;
  if(match_cons(t, sym__2))
    {
      h_90 = ATgetArgument(t, 0);
      i_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_90 = ATgetFirst((ATermList) t);
      k_90 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_90(h_90, i_90, g_90, t);
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_90), j_90), k_90);
          }
      }
    }
  else
    {
      t = v_90(h_90, i_90, g_90, t);
    }
  return(t);
}
static ATerm v_90 (ATerm o_89, ATerm p_89, ATerm q_89, ATerm t)
{
  ATerm r_89 = NULL,u_89 = NULL,j_6 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL;
  t = SSLgetAnnotations(q_89);
  r_89 = t;
  t = p_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_89 = ATgetFirst((ATermList) t);
      a_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_89;
  if(match_cons(t, sym__2))
    {
      y_89 = ATgetArgument(t, 0);
      z_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_89;
        if((y_89 != t))
          {
            _fail(t);
          }
        t = a_90;
        LocalPopChoice(x_27);
      }
    else
      {
        t = v_27;
        t = p_89;
        t = o_8(y_89, z_89, a_90, t);
      }
  }
  u_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_89, u_89);
  j_6 = t;
  t = SSLsetAnnotations(j_6, r_89);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm u_90 = NULL;
  if(match_cons(t, sym__2))
    {
      u_90 = ATgetArgument(t, 0);
      if((u_90 != ATgetArgument(t, 1)))
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
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(d_6, e_6, g_6, t);
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      {
        ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
        p_90 = t;
        if(match_cons(t, sym__2))
          {
            q_90 = ATgetArgument(t, 0);
            r_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_90;
        t = m_8(k_6, q_90, r_90, t);
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
  ATerm i_46 = NULL,j_46 = NULL;
  if(match_cons(t, sym__2))
    {
      i_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(q_6, i_46, j_46, t);
  return(t);
}
static ATerm q_6 (ATerm t)
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
static ATerm r_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm r_46 = NULL,u_46 = NULL;
  if(match_cons(t, sym__2))
    {
      r_46 = ATgetArgument(t, 0);
      u_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(w_6, r_46, u_46, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm v_46 = NULL;
  if(match_cons(t, sym__2))
    {
      v_46 = ATgetArgument(t, 0);
      if((v_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm k_91 (ATerm t)
  {
    ATerm d_28 = t;
    int f_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_131(t);
        LocalPopChoice(f_28);
      }
    else
      {
        t = d_28;
        {
          ATerm h_28 = t;
          int i_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_90 = NULL,y_90 = NULL,d_46 = NULL,e_46 = NULL;
              x_90 = t;
              t = f_131(t);
              y_90 = t;
              t = x_90;
              {
                static ATerm l_6 (ATerm t)
                {
                  ATerm a_91 = NULL;
                  t = k_91(t);
                  a_91 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_91, y_90);
                  t = diff_0_0(t);
                  return(t);
                }
                t = g_131(l_6, k_91, n_6, t);
              }
              e_46 = t;
              t = SSL_explode_term(e_46);
              if(match_cons(t, sym__2))
                {
                  ATerm j_28 = ATgetArgument(t, 0);
                  d_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_46;
              t = foldr_3_0(o_6, p_6, _id, t);
              LocalPopChoice(i_28);
            }
          else
            {
              t = h_28;
              {
                ATerm m_46 = NULL,n_46 = NULL;
                n_46 = t;
                t = SSL_explode_term(n_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_28 = ATgetArgument(t, 0);
                    m_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_46;
                t = foldr_3_0(r_6, u_6, k_91, t);
              }
            }
        }
      }
    return(t);
  }
  t = k_91(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm a_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_48);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm l_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_28);
    }
  else
    {
      t = l_28;
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
              ATerm b_48 = NULL,c_48 = NULL,i_48 = NULL,j_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_48 = ATgetArgument(t, 0);
                  j_48 = ATgetArgument(t, 1);
                  b_48 = ATgetArgument(t, 2);
                  c_48 = ATgetArgument(t, 3);
                  t = b_48;
                  t = map_1_0(d_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_48 = ATgetArgument(t, 0);
                      j_48 = ATgetArgument(t, 1);
                      b_48 = ATgetArgument(t, 2);
                      c_48 = ATgetArgument(t, 3);
                      t = b_48;
                      t = map_1_0(i_7, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Matrix_2))
                        {
                          i_48 = ATgetArgument(t, 0);
                          j_48 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = i_48;
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm s_48 = NULL;
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_48 = ATgetArgument(t, 0);
          {
            ATerm v_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_28);
      t = s_48;
    }
  else
    {
      t = t_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_48;
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm b_49 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_49 = ATgetArgument(t, 0);
          {
            ATerm y_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_28);
      t = b_49;
    }
  else
    {
      t = w_28;
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
static ATerm j_7 (ATerm t)
{
  ATerm j_49 = NULL;
  if(match_cons(t, sym__2))
    {
      j_49 = ATgetArgument(t, 0);
      if((j_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_28;
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
  ATerm q_49 = NULL,r_49 = NULL,v_49 = NULL,x_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_29 = ATgetArgument(t, 0);
      if(match_cons(b_29, sym__2))
        {
          q_49 = ATgetArgument(b_29, 0);
          r_49 = ATgetArgument(b_29, 1);
        }
      else
        _fail(t);
      {
        ATerm c_29 = ATgetArgument(t, 1);
        if(match_cons(c_29, sym__2))
          {
            v_49 = ATgetArgument(c_29, 0);
            x_49 = ATgetArgument(c_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_49), q_49), (ATerm) ATinsert(CheckATermList(x_49), r_49));
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm a_50 = NULL;
  a_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, a_50, term_f_29), (ATerm) ATmakeAppl(sym_Var_1, a_50));
  return(t);
}
ATerm RowLet_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL;
  x_93 = t;
  if(match_cons(t, sym_Row_2))
    {
      y_93 = ATgetArgument(t, 0);
      z_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,z_47 = NULL;
        t = z_93;
        {
          ATerm i_29 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_29;
            }
        }
        t = new_0_0(t);
        n_47 = t;
        t = z_93;
        t = free_vars_3_0(a_7, b_7, tvars_matrix_boundin_3_0, t);
        z_47 = t;
        t = r_0(t);
        v_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_47, v_47);
        t = h_8(j_7, z_47, v_47, t);
        t = genzip_4_0(l_7, r_7, t_7, v_7, t);
        if(match_cons(t, sym__2))
          {
            t_47 = ATgetArgument(t, 0);
            u_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, n_47, (ATerm)ATempty, t_47, z_93)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, y_93, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_47), (ATerm)ATempty, u_47)));
        LocalPopChoice(h_29);
      }
    else
      {
        t = g_29;
        t = z_93;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, y_93, z_93));
      }
  }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_28;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_94 = ATgetFirst((ATermList) t);
      n_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_94, n_94);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm o_94 = NULL,q_94 = NULL,s_94 = NULL,u_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      if(match_cons(j_29, sym__2))
        {
          o_94 = ATgetArgument(j_29, 0);
          q_94 = ATgetArgument(j_29, 1);
        }
      else
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
        if(match_cons(k_29, sym__2))
          {
            s_94 = ATgetArgument(k_29, 0);
            u_94 = ATgetArgument(k_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_94), o_94), (ATerm) ATinsert(CheckATermList(u_94), q_94));
  return(t);
}
static ATerm q_8 (ATerm k_85, ATerm j_85, ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,m_6 = NULL;
  t = j_85;
  {
    static ATerm f_8 (ATerm t)
    {
      static ATerm i_8 (ATerm t)
      {
        t = k_85;
        return(t);
      }
      t = RowLet_1_0(i_8, t);
      return(t);
    }
    t = genzip_4_0(x_7, y_7, d_8, f_8, t);
  }
  k_94 = t;
  if(match_cons(t, sym__2))
    {
      h_94 = ATgetArgument(t, 0);
      i_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_94);
  g_94 = t;
  t = h_94;
  t = concat_0_0(t);
  j_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_94, i_94);
  m_6 = t;
  t = SSLsetAnnotations(m_6, g_94);
  if(match_cons(t, sym__2))
    {
      d_94 = ATgetArgument(t, 0);
      e_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Let_2, d_94, (ATerm) ATmakeAppl(sym_Scope_2, k_85, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_l_29))), (ATerm) ATmakeAppl(sym_Matrix_1, e_94))));
  return(t);
}
static ATerm r_8 (ATerm h_121 (ATerm), ATerm p_48, ATerm n_48, ATerm t)
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL;
  d_95 = t;
  t = h_121(t);
  a_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_95, p_48, n_48);
  t = i_11(a_95, p_48, n_48, t);
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_95 = NULL;
        t = term_o_29;
        i_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_95, term_o_29);
        t = h_11(a_95, i_95, t);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_95 = ATgetFirst((ATermList) t);
      c_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_o_29;
  e_95 = t;
  t = (ATerm) ATinsert(CheckATermList(c_95), (ATerm) ATinsert(CheckATermList(b_95), p_48));
  f_95 = t;
  t = SSL_table_put(a_95, e_95, f_95);
  t = d_95;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm p_29 = ATgetArgument(t, 0);
      if(((ATgetType(p_29) == AT_LIST) && !(ATisEmpty(p_29))))
        {
          ATerm q_29 = ATgetFirst((ATermList) p_29);
          if(match_cons(q_29, sym_As_2))
            {
              ATerm s_29 = ATgetArgument(q_29, 0);
              ATerm t_29 = ATgetArgument(q_29, 1);
              if(!(match_cons(t_29, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          k_95 = (ATerm) ATgetNext((ATermList) p_29);
        }
      else
        _fail(t);
      l_95 = ATgetArgument(t, 1);
      m_95 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, k_95, l_95, m_95);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm j_95 = NULL;
  t = filter_1_0(p_8, t);
  j_95 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, j_95);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm v_96 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, v_96), term_u_29);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_l_29;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL;
  if(match_cons(t, sym__2))
    {
      z_51 = ATgetArgument(t, 0);
      a_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(z_51, a_52, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_k_17;
  return(t);
}
ATerm MatchCons_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
  s_96 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = s_96;
      t = p_0(t);
      t = map_1_0(s_8, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          t_96 = ATgetArgument(t, 0);
          t = s_96;
          t = o_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((t_96 != ATgetArgument(t, 0)))
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
              t_96 = ATgetArgument(t, 0);
              t = s_96;
              t = o_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((t_96 != ATgetArgument(t, 0)))
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
                  t_96 = ATgetArgument(t, 0);
                  t = s_96;
                  t = o_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((t_96 != ATgetArgument(t, 0)))
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
                  ATerm w_51 = NULL,y_51 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      t_96 = ATgetArgument(t, 0);
                      u_96 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_96;
                  t = o_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((t_96 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      w_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_96;
                  t = foldr_3_0(v_8, w_8, x_8, t);
                  y_51 = t;
                  t = w_51;
                  if((y_51 != t))
                    {
                      _fail(t);
                    }
                  t = u_96;
                }
            }
        }
    }
  return(t);
}
static ATerm t_8 (ATerm f_141 (ATerm), ATerm x_83, ATerm u_83, ATerm v_83, ATerm w_83, ATerm t)
{
  ATerm a_97 = NULL,b_97 = NULL;
  t = x_83;
  t = f_141(t);
  a_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_97, v_83);
  t = conc_0_0(t);
  b_97 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, u_83, b_97, w_83);
  return(t);
}
static ATerm u_8 (ATerm q_83, ATerm r_83, ATerm s_83, ATerm t)
{
  ATerm d_97 = NULL;
  t = q_83;
  {
    static ATerm b_9 (ATerm t)
    {
      ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL;
      static ATerm d_9 (ATerm t)
      {
        static ATerm f_9 (ATerm t)
        {
          t = r_83;
          return(t);
        }
        static ATerm h_9 (ATerm t)
        {
          t = s_83;
          return(t);
        }
        t = MatchCons_2_0(f_9, h_9, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm v_29 = ATgetArgument(t, 0);
          if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
            {
              ATerm w_29 = ATgetFirst((ATermList) v_29);
              if(match_cons(w_29, sym_As_2))
                {
                  ATerm c_30 = ATgetArgument(w_29, 0);
                  e_97 = ATgetArgument(w_29, 1);
                }
              else
                _fail(t);
              f_97 = (ATerm) ATgetNext((ATermList) v_29);
            }
          else
            _fail(t);
          g_97 = ATgetArgument(t, 1);
          h_97 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_8(d_9, e_97, f_97, g_97, h_97, t);
      return(t);
    }
    t = filter_1_0(b_9, t);
  }
  d_97 = t;
  t = (ATerm) ATmakeAppl(sym_Alt_3, r_83, s_83, (ATerm) ATmakeAppl(sym_Matrix_1, d_97));
  return(t);
}
ATerm filter_1_0 (ATerm p_128 (ATerm), ATerm t)
{
  ATerm z_97 = NULL,a_98 = NULL,g_98 = NULL;
  z_97 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_97;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_98 = ATgetFirst((ATermList) t);
          g_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_52 = NULL,m_52 = NULL,n_52 = NULL,s_6 = NULL;
            t = SSLgetAnnotations(z_97);
            j_52 = t;
            t = a_98;
            t = p_128(t);
            m_52 = t;
            t = g_98;
            t = filter_1_0(p_128, t);
            n_52 = t;
            t = (ATerm) ATinsert(CheckATermList(n_52), m_52);
            s_6 = t;
            t = SSLsetAnnotations(s_6, j_52);
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            t = g_98;
            t = filter_1_0(p_128, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm g_123 (ATerm), ATerm t)
{
  static ATerm g_99 (ATerm t)
  {
    ATerm d_99 = NULL,e_99 = NULL,f_99 = NULL;
    t = g_123(t);
    d_99 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_99;
      }
    else
      {
        ATerm e_53 = NULL,m_53 = NULL,v_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_99 = ATgetFirst((ATermList) t);
            f_99 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_99);
        e_53 = t;
        t = f_99;
        t = g_99(t);
        m_53 = t;
        t = (ATerm) ATinsert(CheckATermList(m_53), e_99);
        v_6 = t;
        t = SSLsetAnnotations(v_6, e_53);
      }
    return(t);
  }
  t = g_99(t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_l_29;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm x_100 = NULL,y_100 = NULL;
  if(match_cons(t, sym__2))
    {
      x_100 = ATgetArgument(t, 0);
      y_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(x_100, y_100, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_k_17;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm z_100 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm f_30 = ATgetArgument(t, 0);
      if(match_cons(f_30, sym_Off_1))
        {
          z_100 = ATgetArgument(f_30, 0);
        }
      else
        _fail(t);
      {
        ATerm g_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, z_100);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL,v_99 = NULL,y_99 = NULL,b_100 = NULL,d_100 = NULL;
  t_99 = t;
  if(match_cons(t, sym_Row_3))
    {
      u_99 = ATgetArgument(t, 0);
      {
        ATerm h_30 = ATgetArgument(t, 1);
      }
      {
        ATerm i_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = u_99;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_99 = ATgetFirst((ATermList) t);
      {
        ATerm j_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_99;
  if(match_cons(t, sym_As_2))
    {
      ATerm k_30 = ATgetArgument(t, 0);
      y_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_99;
  if(match_cons(t, sym_Str_1))
    {
      b_100 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, b_100), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          b_100 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, b_100), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              b_100 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, b_100), (ATerm) ATempty);
            }
          else
            {
              ATerm p_100 = NULL,q_100 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  b_100 = ATgetArgument(t, 0);
                  d_100 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_100;
              t = foldr_3_0(i_9, j_9, k_9, t);
              p_100 = t;
              t = d_100;
              t = map_1_0(l_9, t);
              q_100 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, b_100, p_100), q_100);
            }
        }
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL;
  g_101 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_101 = ATgetFirst((ATermList) t);
      f_101 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_101 = NULL;
            t = f_101;
            {
              static ATerm p_9 (ATerm t)
              {
                ATerm n_30 = t;
                if((PushChoice() == 0))
                  {
                    if((e_101 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_30;
                  }
                return(t);
              }
              t = filter_1_0(p_9, t);
            }
            l_101 = t;
            t = (ATerm) ATinsert(CheckATermList(l_101), e_101);
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            t = g_101;
          }
      }
    }
  else
    {
      t = g_101;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(o_9, t);
  return(t);
}
static ATerm x_103 (ATerm e_102, ATerm t)
{
  ATerm f_102 = NULL;
  t = SSL_explode_string(e_102);
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_103 (ATerm t)
        {
          ATerm z_102 = NULL,a_103 = NULL,b_103 = NULL;
          z_102 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_103 = ATgetFirst((ATermList) t);
              b_103 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm q_30 = t;
            int r_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_54 = NULL,e_54 = NULL,x_6 = NULL;
                t = SSLgetAnnotations(z_102);
                a_54 = t;
                t = b_103;
                t = z_103(t);
                e_54 = t;
                t = (ATerm) ATinsert(CheckATermList(e_54), a_103);
                x_6 = t;
                t = SSLsetAnnotations(x_6, a_54);
                LocalPopChoice(r_30);
              }
            else
              {
                t = q_30;
                {
                  ATerm o_54 = NULL,y_6 = NULL;
                  t = SSLgetAnnotations(z_102);
                  o_54 = t;
                  t = a_103;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, a_103);
                  y_6 = t;
                  t = SSLsetAnnotations(y_6, o_54);
                }
              }
          }
          return(t);
        }
        t = z_103(t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = (ATerm) ATempty;
      }
  }
  f_102 = t;
  t = SSL_implode_string(f_102);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,g_103 = NULL,h_103 = NULL,v_103 = NULL;
  v_103 = t;
  {
    ATerm s_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_103 = ATgetFirst((ATermList) t);
            {
              ATerm y_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(x_30);
        t = c_103;
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  d_103 = ATgetArgument(t, 0);
                  {
                    ATerm b_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm c_31 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(a_31);
              t = d_103;
              {
                ATerm d_31 = t;
                int e_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        e_103 = ATgetFirst((ATermList) t);
                        {
                          ATerm f_31 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_31);
                    t = e_103;
                    {
                      ATerm i_31 = t;
                      int j_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              g_103 = ATgetArgument(t, 0);
                              {
                                ATerm k_31 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_31);
                          t = g_103;
                          if(match_cons(t, sym_Off_1))
                            {
                              h_103 = ATgetArgument(t, 0);
                              t = h_103;
                            }
                          else
                            {
                              t = x_103(v_103, t);
                            }
                        }
                      else
                        {
                          t = i_31;
                          t = x_103(v_103, t);
                        }
                    }
                  }
                else
                  {
                    t = d_31;
                    t = x_103(v_103, t);
                  }
              }
            }
          else
            {
              t = z_30;
              t = x_103(v_103, t);
            }
        }
      }
    else
      {
        t = s_30;
        t = x_103(v_103, t);
      }
  }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_31 = ATgetArgument(t, 0);
      ATerm m_31 = ATgetArgument(t, 1);
      if(((ATgetType(m_31) != AT_LIST) || !(ATisEmpty(m_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm m_104 = NULL,n_104 = NULL,o_104 = NULL;
  if(match_cons(t, sym__2))
    {
      m_104 = ATgetArgument(t, 0);
      {
        ATerm n_31 = ATgetArgument(t, 1);
        if(((ATgetType(n_31) == AT_LIST) && !(ATisEmpty(n_31))))
          {
            n_104 = ATgetFirst((ATermList) n_31);
            o_104 = (ATerm) ATgetNext((ATermList) n_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_104, n_104), (ATerm) ATmakeAppl(sym__2, m_104, o_104));
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm q_104 = NULL,r_104 = NULL;
  if(match_cons(t, sym__2))
    {
      q_104 = ATgetArgument(t, 0);
      r_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_104), q_104);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm s_104 = NULL,t_104 = NULL,u_104 = NULL;
  if(match_cons(t, sym__2))
    {
      s_104 = ATgetArgument(t, 0);
      {
        ATerm p_31 = ATgetArgument(t, 1);
        if(match_cons(p_31, sym__2))
          {
            t_104 = ATgetArgument(p_31, 0);
            u_104 = ATgetArgument(p_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_8(s_104, t_104, u_104, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_q_31;
  return(t);
}
static ATerm y_8 (ATerm d_85, ATerm t)
{
  ATerm c_104 = NULL,e_104 = NULL,f_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL,l_104 = NULL;
  t = d_85;
  t = get_path_0_0(t);
  c_104 = t;
  t = d_85;
  t = outedges_0_0(t);
  e_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_85, e_104);
  t = genzip_4_0(q_9, r_9, u_9, c_10, t);
  f_104 = t;
  t = d_85;
  t = default_state_0_0(t);
  i_104 = t;
  t = new_0_0(t);
  j_104 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, d_85);
  k_104 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_31, j_104);
  l_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, d_85), (ATerm) ATmakeAppl(sym_Defined_2, term_r_31, j_104));
  t = r_8(j_10, k_104, l_104, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, j_104, (ATerm)ATmakeAppl(sym_Var_1, c_104), f_104, i_104);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm w_104 = NULL,x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL,d_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL,j_105 = NULL,n_105 = NULL,q_105 = NULL,t_105 = NULL,u_105 = NULL,f_7 = NULL,e_7 = NULL,c_7 = NULL;
  u_105 = t;
  if(match_cons(t, sym_Row_3))
    {
      x_104 = ATgetArgument(t, 0);
      y_104 = ATgetArgument(t, 1);
      z_104 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_105);
  w_104 = t;
  t = x_104;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_105 = ATgetFirst((ATermList) t);
      g_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_104);
  a_105 = t;
  t = d_105;
  if(match_cons(t, sym_As_2))
    {
      j_105 = ATgetArgument(t, 0);
      n_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_105);
  i_105 = t;
  t = n_105;
  {
    ATerm s_31 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_31;
      }
  }
  q_105 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, j_105, q_105);
  c_7 = t;
  t = SSLsetAnnotations(c_7, i_105);
  t_105 = t;
  t = (ATerm) ATinsert(CheckATermList(g_105), t_105);
  e_7 = t;
  t = SSLsetAnnotations(e_7, a_105);
  h_105 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, h_105, y_104, z_104);
  f_7 = t;
  t = SSLsetAnnotations(f_7, w_104);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm x_105 = NULL,z_105 = NULL,a_106 = NULL,e_106 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      x_105 = ATgetArgument(t, 0);
      {
        ATerm t_31 = ATgetArgument(t, 1);
        if(((ATgetType(t_31) == AT_LIST) && !(ATisEmpty(t_31))))
          {
            z_105 = ATgetFirst((ATermList) t_31);
            a_106 = (ATerm) ATgetNext((ATermList) t_31);
          }
        else
          _fail(t);
      }
      e_106 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(x_105), z_105), a_106, e_106);
  return(t);
}
static ATerm a_9 (ATerm t_84, ATerm t)
{
  ATerm v_104 = NULL;
  t = t_84;
  {
    ATerm u_31 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(k_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_31;
      }
  }
  t = t_84;
  t = map_1_0(n_10, t);
  v_104 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, v_104);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,q_106 = NULL,u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL,a_107 = NULL,u_7 = NULL,o_7 = NULL,m_7 = NULL;
  a_107 = t;
  if(match_cons(t, sym_Row_3))
    {
      h_106 = ATgetArgument(t, 0);
      k_106 = ATgetArgument(t, 1);
      l_106 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_107);
  g_106 = t;
  t = k_106;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_106 = ATgetFirst((ATermList) t);
      v_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_106);
  q_106 = t;
  t = u_106;
  if(match_cons(t, sym_As_2))
    {
      x_106 = ATgetArgument(t, 0);
      y_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_106);
  w_106 = t;
  t = y_106;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, x_106, y_106);
  m_7 = t;
  t = SSLsetAnnotations(m_7, w_106);
  z_106 = t;
  t = (ATerm) ATinsert(CheckATermList(v_106), z_106);
  o_7 = t;
  t = SSLsetAnnotations(o_7, q_106);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_31 = ATgetFirst((ATermList) t);
      m_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, h_106, m_106, l_106);
  u_7 = t;
  t = SSLsetAnnotations(u_7, g_106);
  return(t);
}
static ATerm c_9 (ATerm r_84, ATerm t)
{
  ATerm f_106 = NULL;
  t = r_84;
  t = map_1_0(o_10, t);
  f_106 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, f_106);
  return(t);
}
ATerm repeat_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t)
{
  static ATerm b_107 (ATerm t)
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_115(t);
        t = b_107(t);
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = k_115(t);
      }
    return(t);
  }
  t = b_107(t);
  return(t);
}
static ATerm e_9 (ATerm y_49, ATerm z_49, ATerm t)
{
  ATerm c_107 = NULL,d_107 = NULL;
  d_107 = t;
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_49, z_49);
        t = h_11(y_49, z_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_32 = ATgetFirst((ATermList) t);
            c_107 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_32);
        t = SSL_table_put(y_49, z_49, c_107);
        t = (ATerm) ATmakeAppl(sym__3, y_49, z_49, c_107);
      }
    else
      {
        t = z_31;
        t = SSL_table_remove(y_49, z_49);
        t = (ATerm) ATmakeAppl(sym__2, y_49, z_49);
      }
  }
  t = d_107;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_121 (ATerm), ATerm t)
{
  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL;
  h_107 = t;
  t = e_121(t);
  g_107 = t;
  {
    ATerm c_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_107 = NULL;
        t = term_o_29;
        j_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_107, term_o_29);
        t = h_11(g_107, j_107, t);
        LocalPopChoice(e_32);
      }
    else
      {
        t = c_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_107 = ATgetFirst((ATermList) t);
      e_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_o_29;
  i_107 = t;
  t = SSL_table_put(g_107, i_107, e_107);
  t = f_107;
  {
    static ATerm r_10 (ATerm t)
    {
      ATerm k_107 = NULL;
      k_107 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_107, k_107);
      t = e_9(g_107, k_107, t);
      return(t);
    }
    t = map_1_0(r_10, t);
  }
  t = h_107;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_112 (ATerm), ATerm w_112 (ATerm), ATerm t)
{
  ATerm f_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_112(t);
      t = w_112(t);
      LocalPopChoice(g_32);
    }
  else
    {
      t = f_32;
      t = w_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  ATerm m_107 = NULL,n_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL;
  n_107 = t;
  t = d_121(t);
  m_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_107, term_o_29);
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_108 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_32 = ATgetArgument(t, 0);
            ATerm k_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_29;
        c_108 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_107, term_o_29);
        t = h_11(m_107, c_108, t);
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATempty;
      }
  }
  s_107 = t;
  t = term_o_29;
  t_107 = t;
  t = (ATerm) ATinsert(CheckATermList(s_107), (ATerm) ATempty);
  u_107 = t;
  t = SSL_table_put(m_107, t_107, u_107);
  t = n_107;
  return(t);
}
ATerm scope_2_0 (ATerm f_121 (ATerm), ATerm g_121 (ATerm), ATerm t)
{
  static ATerm s_10 (ATerm t)
  {
    t = end_scope_1_0(f_121, t);
    return(t);
  }
  t = begin_scope_1_0(f_121, t);
  t = restore_always_2_0(g_121, s_10, t);
  return(t);
}
ATerm at_end_1_0 (ATerm n_122 (ATerm), ATerm t)
{
  static ATerm k_109 (ATerm t)
  {
    ATerm h_109 = NULL,i_109 = NULL,j_109 = NULL;
    j_109 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_109 = ATgetFirst((ATermList) t);
        i_109 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_55 = NULL,i_55 = NULL,z_7 = NULL;
          t = SSLgetAnnotations(j_109);
          f_55 = t;
          t = i_109;
          t = k_109(t);
          i_55 = t;
          t = (ATerm) ATinsert(CheckATermList(i_55), h_109);
          z_7 = t;
          t = SSLsetAnnotations(z_7, f_55);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_109;
        t = n_122(t);
      }
    return(t);
  }
  t = k_109(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm g_108 = NULL,h_108 = NULL,k_108 = NULL;
  g_108 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_108;
    }
  else
    {
      static ATerm t_10 (ATerm t)
      {
        t = not_null(k_108);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_108 = ATgetFirst((ATermList) t);
          if(((k_108 != NULL) && (k_108 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            k_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_108;
      t = at_end_1_0(t_10, t);
    }
  return(t);
}
static ATerm z_109 (ATerm q_109, ATerm t)
{
  ATerm s_109 = NULL;
  t = SSL_explode_term(q_109);
  if(match_cons(t, sym__2))
    {
      ATerm l_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_109;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL;
  w_109 = t;
  if(match_cons(t, sym__2))
    {
      u_109 = ATgetArgument(t, 0);
      v_109 = ATgetArgument(t, 1);
      {
        ATerm m_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_10 (ATerm t)
            {
              t = v_109;
              return(t);
            }
            t = u_109;
            t = at_end_1_0(u_10, t);
            LocalPopChoice(o_32);
          }
        else
          {
            t = m_32;
            t = z_109(w_109, t);
          }
      }
    }
  else
    {
      t = z_109(w_109, t);
    }
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm k_111 = NULL;
  if(match_cons(t, sym__2))
    {
      k_111 = ATgetArgument(t, 0);
      if((k_111 != ATgetArgument(t, 1)))
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
static ATerm g_11 (ATerm t)
{
  ATerm z_111 = NULL;
  if(match_cons(t, sym__2))
    {
      z_111 = ATgetArgument(t, 0);
      if((z_111 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm h_112 = NULL;
  if(match_cons(t, sym__2))
    {
      h_112 = ATgetArgument(t, 0);
      if((h_112 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm p_112 = NULL;
  if(match_cons(t, sym__2))
    {
      p_112 = ATgetArgument(t, 0);
      if((p_112 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm y_112 = NULL;
  if(match_cons(t, sym__2))
    {
      y_112 = ATgetArgument(t, 0);
      if((y_112 != ATgetArgument(t, 1)))
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
  ATerm o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL,v_110 = NULL,w_110 = NULL,x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      v_110 = ATgetArgument(t, 0);
      c_111 = ATgetArgument(t, 1);
      t = v_110;
      if(match_cons(t, sym_Matrix_2))
        {
          w_110 = ATgetArgument(t, 0);
          x_110 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_111;
      if(match_cons(t, sym_Choice_2))
        {
          q_110 = ATgetArgument(t, 0);
          r_110 = ATgetArgument(t, 1);
          {
            ATerm i_111 = NULL,j_111 = NULL;
            t = q_110;
            if(match_cons(t, sym_Matrix_2))
              {
                o_110 = ATgetArgument(t, 0);
                p_110 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, w_110, o_110);
            t = m_10(v_10, w_110, o_110, t);
            i_111 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_110, p_110);
            t = conc_0_0(t);
            j_111 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, i_111, j_111), r_110);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              q_110 = ATgetArgument(t, 0);
              r_110 = ATgetArgument(t, 1);
              {
                ATerm q_111 = NULL,r_111 = NULL;
                t = q_110;
                if(match_cons(t, sym_Matrix_2))
                  {
                    o_110 = ATgetArgument(t, 0);
                    p_110 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, w_110, o_110);
                t = m_10(w_10, w_110, o_110, t);
                q_111 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_110, p_110);
                t = conc_0_0(t);
                r_111 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, q_111, r_111), r_110);
              }
            }
          else
            {
              ATerm x_111 = NULL,y_111 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  q_110 = ATgetArgument(t, 0);
                  r_110 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, w_110, q_110);
              t = m_10(g_11, w_110, q_110, t);
              x_111 = t;
              t = (ATerm) ATmakeAppl(sym__2, x_110, r_110);
              t = conc_0_0(t);
              y_111 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, x_111, y_111);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          v_110 = ATgetArgument(t, 0);
          c_111 = ATgetArgument(t, 1);
          t = v_110;
          if(match_cons(t, sym_Matrix_2))
            {
              w_110 = ATgetArgument(t, 0);
              x_110 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_111;
          if(match_cons(t, sym_LChoice_2))
            {
              q_110 = ATgetArgument(t, 0);
              r_110 = ATgetArgument(t, 1);
              {
                ATerm f_112 = NULL,g_112 = NULL;
                t = q_110;
                if(match_cons(t, sym_Matrix_2))
                  {
                    o_110 = ATgetArgument(t, 0);
                    p_110 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, w_110, o_110);
                t = m_10(j_11, w_110, o_110, t);
                f_112 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_110, p_110);
                t = conc_0_0(t);
                g_112 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, f_112, g_112), r_110);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  q_110 = ATgetArgument(t, 0);
                  r_110 = ATgetArgument(t, 1);
                  {
                    ATerm n_112 = NULL,o_112 = NULL;
                    t = q_110;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        o_110 = ATgetArgument(t, 0);
                        p_110 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, w_110, o_110);
                    t = m_10(l_11, w_110, o_110, t);
                    n_112 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_110, p_110);
                    t = conc_0_0(t);
                    o_112 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, n_112, o_112), r_110);
                  }
                }
              else
                {
                  ATerm u_112 = NULL,x_112 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      q_110 = ATgetArgument(t, 0);
                      r_110 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, w_110, q_110);
                  t = m_10(m_11, w_110, q_110, t);
                  u_112 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_110, r_110);
                  t = conc_0_0(t);
                  x_112 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, u_112, x_112);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              v_110 = ATgetArgument(t, 0);
              c_111 = ATgetArgument(t, 1);
              {
                ATerm c_113 = NULL;
                t = c_111;
                if(match_cons(t, sym_Matrix_2))
                  {
                    q_110 = ATgetArgument(t, 0);
                    r_110 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_110;
                {
                  static ATerm n_11 (ATerm t)
                  {
                    ATerm d_113 = NULL,e_113 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        d_113 = ATgetArgument(t, 0);
                        e_113 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, d_113, (ATerm) ATmakeAppl(sym_Scope_2, v_110, e_113));
                    return(t);
                  }
                  t = map_1_0(n_11, t);
                }
                c_113 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, q_110, c_113);
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  v_110 = ATgetArgument(t, 0);
                  c_111 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_110;
              if(match_cons(t, sym_Matrix_2))
                {
                  w_110 = ATgetArgument(t, 0);
                  x_110 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_110;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_110 = ATgetFirst((ATermList) t);
                  b_111 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_110;
              if(match_cons(t, sym_Row_2))
                {
                  z_110 = ATgetArgument(t, 0);
                  a_111 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_111;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, w_110, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, z_110, (ATerm) ATmakeAppl(sym_Seq_2, a_111, c_111))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  static ATerm o_11 (ATerm t)
  {
    t = bottomup_1_0(p_109, t);
    return(t);
  }
  t = SRTS_all(o_11, t);
  t = p_109(t);
  return(t);
}
static ATerm l_10 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm z_54, ATerm y_54, ATerm t)
{
  t = u_124(t);
  {
    static ATerm q_11 (ATerm t)
    {
      ATerm j_113 = NULL;
      j_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_54, j_113);
      t = t_124(t);
      return(t);
    }
    t = fetch_1_0(q_11, t);
  }
  t = y_54;
  return(t);
}
static ATerm m_10 (ATerm q_124 (ATerm), ATerm v_54, ATerm u_54, ATerm t)
{
  static ATerm z_113 (ATerm t)
  {
    ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL;
    u_113 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_54;
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
          ATerm p_32 = t;
          int q_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_113;
              {
                static ATerm r_11 (ATerm t)
                {
                  t = u_54;
                  return(t);
                }
                t = l_10(q_124, r_11, v_113, w_113, t);
              }
              t = z_113(t);
              LocalPopChoice(q_32);
            }
          else
            {
              t = p_32;
              {
                ATerm q_55 = NULL,t_55 = NULL,e_8 = NULL;
                t = SSLgetAnnotations(u_113);
                q_55 = t;
                t = w_113;
                t = z_113(t);
                t_55 = t;
                t = (ATerm) ATinsert(CheckATermList(t_55), v_113);
                e_8 = t;
                t = SSLsetAnnotations(e_8, q_55);
              }
            }
        }
      }
    return(t);
  }
  t = v_54;
  t = z_113(t);
  return(t);
}
ATerm foldr_3_0 (ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm p_127 (ATerm), ATerm t)
{
  ATerm h_114 = NULL,i_114 = NULL,j_114 = NULL;
  h_114 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_114;
      t = n_127(t);
    }
  else
    {
      ATerm n_114 = NULL,o_114 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_114 = ATgetFirst((ATermList) t);
          j_114 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_114;
      t = p_127(t);
      n_114 = t;
      t = j_114;
      t = foldr_3_0(n_127, o_127, p_127, t);
      o_114 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_114, o_114);
      t = o_127(t);
    }
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm t)
{
  ATerm t_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_114 = NULL;
      t = k_126(t);
      r_114 = t;
      t = (ATerm) ATinsert(ATempty, r_114);
      LocalPopChoice(v_32);
    }
  else
    {
      t = t_32;
      {
        ATerm y_55 = NULL,z_55 = NULL;
        static ATerm u_11 (ATerm t)
        {
          t = collect_om_2_0(k_126, l_126, t);
          return(t);
        }
        z_55 = t;
        t = SSL_explode_term(z_55);
        if(match_cons(t, sym__2))
          {
            ATerm w_32 = ATgetArgument(t, 0);
            y_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_55;
        t = foldr_3_0(t_11, l_126, u_11, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm x_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL;
  if(match_cons(t, sym_As_2))
    {
      a_115 = ATgetArgument(t, 0);
      c_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_115;
  if(match_cons(t, sym_Var_1))
    {
      b_115 = ATgetArgument(t, 0);
      t = c_115;
      if(match_cons(t, sym_As_2))
        {
          d_115 = ATgetArgument(t, 0);
          {
            ATerm x_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_115;
      if(match_cons(t, sym_Off_1))
        {
          x_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, b_115), (ATerm) ATmakeAppl(sym_Var_1, x_114)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          b_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_115;
      if(match_cons(t, sym_Var_1))
        {
          d_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, d_115), (ATerm) ATmakeAppl(sym_Var_1, b_115)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm y_115 = NULL,z_115 = NULL,g_116 = NULL,h_116 = NULL,i_116 = NULL,j_116 = NULL,k_116 = NULL;
  g_116 = t;
  if(match_cons(t, sym_As_2))
    {
      h_116 = ATgetArgument(t, 0);
      j_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_116;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm a_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_32);
        t = j_116;
        if(match_cons(t, sym_As_2))
          {
            k_116 = ATgetArgument(t, 0);
            z_115 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_116;
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
        t = y_32;
        if(match_cons(t, sym_Off_1))
          {
            i_116 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_116;
        if(match_cons(t, sym_Var_1))
          {
            ATerm b_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_116;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_116;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_33 = ATgetFirst((ATermList) t);
                ATerm e_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_116;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, i_116), term_u_29);
      }
  }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_28;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm c_117 = NULL,d_117 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_117 = ATgetFirst((ATermList) t);
      d_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_117, d_117);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm e_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_33 = ATgetArgument(t, 0);
      if(match_cons(f_33, sym__2))
        {
          e_117 = ATgetArgument(f_33, 0);
          f_117 = ATgetArgument(f_33, 1);
        }
      else
        _fail(t);
      {
        ATerm g_33 = ATgetArgument(t, 1);
        if(match_cons(g_33, sym__2))
          {
            g_117 = ATgetArgument(g_33, 0);
            h_117 = ATgetArgument(g_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_117), e_117), (ATerm) ATinsert(CheckATermList(h_117), f_117));
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm i_117 = NULL,j_117 = NULL;
  if(match_cons(t, sym__2))
    {
      i_117 = ATgetArgument(t, 0);
      j_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(d_12, i_117, j_117, t);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm k_117 = NULL;
  if(match_cons(t, sym__2))
    {
      k_117 = ATgetArgument(t, 0);
      if((k_117 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm m_117 = NULL;
  if(match_cons(t, sym__2))
    {
      m_117 = ATgetArgument(t, 0);
      if((m_117 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm t)
{
  ATerm o_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL,z_116 = NULL,a_117 = NULL;
  z_116 = t;
  a_117 = t;
  t = SSL_explode_term(a_117);
  if(match_cons(t, sym__2))
    {
      q_116 = ATgetArgument(t, 0);
      o_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_116);
  s_116 = t;
  t = o_116;
  t = genzip_4_0(v_11, x_11, y_11, n_125, t);
  if(match_cons(t, sym__2))
    {
      r_116 = ATgetArgument(t, 0);
      p_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(q_116, r_116);
  x_116 = t;
  t = SSLsetAnnotations(x_116, s_116);
  t = o_125(t);
  if(match_cons(t, sym__2))
    {
      t_116 = ATgetArgument(t, 0);
      u_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_116;
  t = foldr_2_0(a_12, c_12, t);
  w_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_116, w_116);
  t = m_10(e_12, u_116, w_116, t);
  v_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_116, v_116);
  return(t);
}
ATerm collect_split_2_0 (ATerm e_126 (ATerm), ATerm f_126 (ATerm), ATerm t)
{
  static ATerm t_117 (ATerm t)
  {
    static ATerm f_12 (ATerm t)
    {
      ATerm o_117 = NULL,p_117 = NULL,q_117 = NULL;
      q_117 = t;
      {
        ATerm l_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_126(t);
            LocalPopChoice(o_33);
          }
        else
          {
            t = l_33;
          }
      }
      o_117 = t;
      t = q_117;
      {
        ATerm p_33 = t;
        int q_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_126(t);
            LocalPopChoice(q_33);
          }
        else
          {
            t = p_33;
            t = (ATerm) ATempty;
          }
      }
      p_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_117, p_117);
      return(t);
    }
    t = CollectSplit_2_0(t_117, f_12, t);
    return(t);
  }
  t = t_117(t);
  return(t);
}
ATerm genzip_4_0 (ATerm a_114 (ATerm), ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm d_114 (ATerm), ATerm t)
{
  static ATerm a_118 (ATerm t)
  {
    ATerm r_33 = t;
    int t_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_114(t);
        LocalPopChoice(t_33);
      }
    else
      {
        t = r_33;
        {
          ATerm u_117 = NULL,v_117 = NULL,w_117 = NULL,x_117 = NULL,y_117 = NULL,z_117 = NULL,g_8 = NULL;
          t = b_114(t);
          z_117 = t;
          if(match_cons(t, sym__2))
            {
              v_117 = ATgetArgument(t, 0);
              w_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_117);
          u_117 = t;
          t = v_117;
          t = d_114(t);
          x_117 = t;
          t = w_117;
          t = a_118(t);
          y_117 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_117, y_117);
          g_8 = t;
          t = SSLsetAnnotations(g_8, u_117);
          t = c_114(t);
        }
      }
    return(t);
  }
  t = a_118(t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_33 = ATgetArgument(t, 0);
      ATerm v_33 = ATgetArgument(t, 1);
      if(((ATgetType(v_33) != AT_LIST) || !(ATisEmpty(v_33))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm d_118 = NULL,e_118 = NULL,f_118 = NULL,g_118 = NULL,h_118 = NULL;
  if(match_cons(t, sym__2))
    {
      d_118 = ATgetArgument(t, 0);
      {
        ATerm w_33 = ATgetArgument(t, 1);
        if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
          {
            e_118 = ATgetFirst((ATermList) w_33);
            f_118 = (ATerm) ATgetNext((ATermList) w_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_k_17;
  h_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_118, term_k_17);
  t = f_11(d_118, h_118, t);
  g_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_118, e_118), (ATerm) ATmakeAppl(sym__2, g_118, f_118));
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm i_118 = NULL,j_118 = NULL;
  if(match_cons(t, sym__2))
    {
      i_118 = ATgetArgument(t, 0);
      j_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_118), i_118);
  return(t);
}
ATerm nzip0_1_0 (ATerm l_114 (ATerm), ATerm t)
{
  ATerm b_118 = NULL;
  b_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, b_118);
  t = genzip_4_0(h_12, i_12, l_12, l_114, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm q_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL;
  if(match_cons(t, sym_As_2))
    {
      s_118 = ATgetArgument(t, 0);
      u_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_118;
  if(match_cons(t, sym_Off_1))
    {
      t_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_118;
  {
    ATerm x_33 = t;
    int y_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm z_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_33);
        {
          ATerm a_34 = t;
          int c_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm m_12 (ATerm t)
              {
                ATerm z_118 = NULL,a_119 = NULL;
                if(match_cons(t, sym__2))
                  {
                    z_118 = ATgetArgument(t, 0);
                    a_119 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(t_118), z_118)), a_119);
                return(t);
              }
              t = u_118;
              t = nzip0_1_0(m_12, t);
              LocalPopChoice(c_34);
            }
          else
            {
              t = a_34;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, t_118), term_u_29);
            }
        }
      }
    else
      {
        t = x_33;
        if(match_cons(t, sym_As_2))
          {
            v_118 = ATgetArgument(t, 0);
            w_118 = ATgetArgument(t, 1);
            t = v_118;
            if(match_cons(t, sym_Var_1))
              {
                q_118 = ATgetArgument(t, 0);
                {
                  ATerm d_34 = t;
                  int e_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm n_12 (ATerm t)
                      {
                        ATerm e_119 = NULL,f_119 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            e_119 = ATgetArgument(t, 0);
                            f_119 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(t_118), e_119)), f_119);
                        return(t);
                      }
                      t = u_118;
                      t = nzip0_1_0(n_12, t);
                      LocalPopChoice(e_34);
                    }
                  else
                    {
                      t = d_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_118), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, t_118), w_118));
                    }
                }
              }
            else
              {
                static ATerm q_12 (ATerm t)
                {
                  ATerm l_119 = NULL,m_119 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      l_119 = ATgetArgument(t, 0);
                      m_119 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(t_118), l_119)), m_119);
                  return(t);
                }
                t = u_118;
                t = nzip0_1_0(q_12, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                v_118 = ATgetArgument(t, 0);
                w_118 = ATgetArgument(t, 1);
                {
                  ATerm f_34 = t;
                  int g_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm r_12 (ATerm t)
                      {
                        ATerm p_119 = NULL,q_119 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            p_119 = ATgetArgument(t, 0);
                            q_119 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(t_118), p_119)), q_119);
                        return(t);
                      }
                      t = u_118;
                      t = nzip0_1_0(r_12, t);
                      LocalPopChoice(g_34);
                    }
                  else
                    {
                      t = f_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, t_118), (ATerm) ATmakeAppl(sym_Op_2, v_118, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, t_118), w_118)));
                    }
                }
              }
            else
              {
                static ATerm s_12 (ATerm t)
                {
                  ATerm w_119 = NULL,x_119 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      w_119 = ATgetArgument(t, 0);
                      x_119 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(t_118), w_119)), x_119);
                  return(t);
                }
                t = u_118;
                t = nzip0_1_0(s_12, t);
              }
          }
      }
  }
  return(t);
}
static ATerm t_12 (ATerm t)
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
  ATerm h_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      LocalPopChoice(k_34);
    }
  else
    {
      t = h_34;
    }
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm p_120 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      p_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_120;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm q_120 = NULL,r_120 = NULL;
  if(match_cons(t, sym__2))
    {
      q_120 = ATgetArgument(t, 0);
      r_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_10(z_12, q_120, r_120, t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm s_120 = NULL;
  if(match_cons(t, sym__2))
    {
      s_120 = ATgetArgument(t, 0);
      if((s_120 != ATgetArgument(t, 1)))
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
  t = (ATerm) ATmakeAppl(sym_As_2, term_m_34, (ATerm) ATinsert(ATempty, f_120));
  t = topdown_1_0(t_12, t);
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
  t = collect_om_2_0(x_12, y_12, t);
  e_120 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, e_120, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, c_120, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_120), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_l_29)))))));
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = repeat_2_0(d_13, _id, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm s_34 = t;
  int t_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm n_123 (ATerm t)
      {
        ATerm u_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_122 = NULL,l_122 = NULL,m_122 = NULL;
            k_122 = t;
            if(match_cons(t, sym_Choice_2))
              {
                l_122 = ATgetArgument(t, 0);
                m_122 = ATgetArgument(t, 1);
                {
                  ATerm o_56 = NULL,r_56 = NULL,s_56 = NULL,l_8 = NULL;
                  t = SSLgetAnnotations(k_122);
                  o_56 = t;
                  t = l_122;
                  t = n_123(t);
                  r_56 = t;
                  t = m_122;
                  t = n_123(t);
                  s_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, r_56, s_56);
                  l_8 = t;
                  t = SSLsetAnnotations(l_8, o_56);
                }
              }
            else
              {
                ATerm a_57 = NULL,l_57 = NULL,m_57 = NULL,z_8 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    l_122 = ATgetArgument(t, 0);
                    m_122 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_122);
                a_57 = t;
                t = l_122;
                t = n_123(t);
                l_57 = t;
                t = m_122;
                t = n_123(t);
                m_57 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, l_57, m_57);
                z_8 = t;
                t = SSLsetAnnotations(z_8, a_57);
              }
            LocalPopChoice(v_34);
          }
        else
          {
            t = u_34;
            {
              static ATerm q_123 (ATerm t)
              {
                ATerm x_34 = t;
                int a_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL;
                    j_123 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        k_123 = ATgetArgument(t, 0);
                        i_123 = ATgetArgument(t, 1);
                        {
                          ATerm z_57 = NULL,f_58 = NULL,g_58 = NULL,h_10 = NULL;
                          t = SSLgetAnnotations(j_123);
                          z_57 = t;
                          t = k_123;
                          t = q_123(t);
                          f_58 = t;
                          t = i_123;
                          t = match_to_matrix_0_0(t);
                          g_58 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_58, g_58);
                          h_10 = t;
                          t = SSLsetAnnotations(h_10, z_57);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            k_123 = ATgetArgument(t, 0);
                            i_123 = ATgetArgument(t, 1);
                            {
                              ATerm t_58 = NULL,y_58 = NULL,i_10 = NULL;
                              t = SSLgetAnnotations(j_123);
                              t_58 = t;
                              t = i_123;
                              t = q_123(t);
                              y_58 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, k_123, y_58);
                              i_10 = t;
                              t = SSLsetAnnotations(i_10, t_58);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                k_123 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = k_123;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    LocalPopChoice(a_35);
                  }
                else
                  {
                    t = x_34;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = q_123(t);
            }
          }
        return(t);
      }
      ATerm d_35 = t;
      int g_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL,i_121 = NULL,j_8 = NULL;
          i_121 = t;
          if(match_cons(t, sym_Choice_2))
            {
              b_121 = ATgetArgument(t, 0);
              c_121 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_121);
          a_121 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, b_121, c_121);
          j_8 = t;
          t = SSLsetAnnotations(j_8, a_121);
          LocalPopChoice(g_35);
        }
      else
        {
          t = d_35;
          {
            ATerm j_121 = NULL,k_121 = NULL,l_121 = NULL,m_121 = NULL,k_8 = NULL;
            m_121 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                k_121 = ATgetArgument(t, 0);
                l_121 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_121);
            j_121 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, k_121, l_121);
            k_8 = t;
            t = SSLsetAnnotations(k_8, j_121);
          }
        }
      t = n_123(t);
      LocalPopChoice(t_34);
    }
  else
    {
      t = s_34;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(c_13, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = term_q_31;
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_123 = NULL,w_123 = NULL,x_123 = NULL;
      v_123 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          w_123 = ATgetArgument(t, 0);
          {
            ATerm j_35 = t;
            int k_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_123 = NULL;
                t = w_123;
                t = map_1_0(i_13, t);
                z_123 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, z_123);
                LocalPopChoice(k_35);
              }
            else
              {
                t = j_35;
                {
                  ATerm l_35 = t;
                  int o_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_123;
                      t = c_9(w_123, t);
                      LocalPopChoice(o_35);
                    }
                  else
                    {
                      t = l_35;
                      {
                        ATerm p_35 = t;
                        int q_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = v_123;
                            t = a_9(w_123, t);
                            LocalPopChoice(q_35);
                          }
                        else
                          {
                            t = p_35;
                            t = v_123;
                            t = y_8(w_123, t);
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
              w_123 = ATgetArgument(t, 0);
              x_123 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_123;
          t = q_8(w_123, x_123, t);
        }
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      t = Simplify_0_0(t);
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm a_124 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm r_35 = ATgetArgument(t, 0);
      if(((ATgetType(r_35) != AT_LIST) || !(ATisEmpty(r_35))))
        _fail(t);
      {
        ATerm s_35 = ATgetArgument(t, 1);
        if(((ATgetType(s_35) != AT_LIST) || !(ATisEmpty(s_35))))
          _fail(t);
      }
      a_124 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_124;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    static ATerm f_13 (ATerm t)
    {
      t = repeat_2_0(g_13, _id, t);
      t = SRTS_all(f_13, t);
      return(t);
    }
    t = scope_2_0(e_13, f_13, t);
  }
  t = strename_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm o_109 (ATerm), ATerm t)
{
  static ATerm k_13 (ATerm t)
  {
    t = topdown_1_0(o_109, t);
    return(t);
  }
  t = o_109(t);
  t = SRTS_all(k_13, t);
  return(t);
}
ATerm map_1_0 (ATerm w_121 (ATerm), ATerm t)
{
  static ATerm j_125 (ATerm t)
  {
    ATerm g_125 = NULL,h_125 = NULL,i_125 = NULL;
    g_125 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_125;
      }
    else
      {
        ATerm i_59 = NULL,l_59 = NULL,m_59 = NULL,w_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_125 = ATgetFirst((ATermList) t);
            i_125 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_125);
        i_59 = t;
        t = h_125;
        t = w_121(t);
        l_59 = t;
        t = i_125;
        t = j_125(t);
        m_59 = t;
        t = (ATerm) ATinsert(CheckATermList(m_59), l_59);
        w_11 = t;
        t = SSLsetAnnotations(w_11, i_59);
      }
    return(t);
  }
  t = j_125(t);
  return(t);
}
static ATerm x_10 (ATerm l_40, ATerm m_40, ATerm t)
{
  ATerm l_125 = NULL;
  t = SSL_fputc(l_40, m_40);
  l_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_125);
  return(t);
}
static ATerm y_10 (ATerm d_39, ATerm e_39, ATerm t)
{
  ATerm m_125 = NULL;
  t = SSL_write_term_to_stream_text(d_39, e_39);
  m_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_125);
  return(t);
}
static ATerm a_11 (ATerm y_116 (ATerm), ATerm y_273, ATerm j_39, ATerm t)
{
  ATerm p_125 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_273, term_u_35);
  t = e_11(t);
  p_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_125, j_39);
  t = y_116(t);
  t = fclose_0_0(t);
  t = j_39;
  return(t);
}
static ATerm z_10 (ATerm z_38, ATerm a_39, ATerm t)
{
  ATerm q_125 = NULL;
  t = SSL_write_term_to_stream_baf(z_38, a_39);
  q_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_125);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm g_60 = NULL,l_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(match_cons(w_35, sym_Stream_1))
        {
          g_60 = ATgetArgument(w_35, 0);
        }
      else
        _fail(t);
      l_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(g_60, l_60, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm x_60 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL,f_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      if(match_cons(x_35, sym_Stream_1))
        {
          e_61 = ATgetArgument(x_35, 0);
        }
      else
        _fail(t);
      f_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(e_61, f_61, t);
  x_60 = t;
  t = term_y_35;
  c_61 = t;
  t = x_60;
  if(match_cons(t, sym_Stream_1))
    {
      d_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_35, x_60);
  t = x_10(c_61, d_61, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_125 = NULL,v_125 = NULL,w_125 = NULL,x_125 = NULL,y_125 = NULL,a_126 = NULL,b_126 = NULL,c_126 = NULL,d_126 = NULL,h_126 = NULL,k_127 = NULL,q_127 = NULL,b_12 = NULL,z_11 = NULL;
  v_125 = t;
  if(match_cons(t, sym__2))
    {
      c_126 = ATgetArgument(t, 0);
      d_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_125);
  b_126 = t;
  t = c_126;
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm l_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_125 != NULL) && (u_125 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_125 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(l_13, t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = term_b_36;
        u_125 = t;
      }
  }
  h_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_126, d_126);
  z_11 = t;
  t = SSLsetAnnotations(z_11, b_126);
  t = v_125;
  if(match_cons(t, sym__2))
    {
      x_125 = ATgetArgument(t, 0);
      y_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_125);
  w_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_125, (ATerm) ATmakeAppl(sym__2, not_null(u_125), y_125));
  b_12 = t;
  t = SSLsetAnnotations(b_12, w_125);
  a_126 = t;
  if(match_cons(t, sym__2))
    {
      k_127 = ATgetArgument(t, 0);
      q_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_59 = NULL,w_59 = NULL,z_59 = NULL,a_60 = NULL,f_60 = NULL,o_12 = NULL;
        t = SSLgetAnnotations(a_126);
        t_59 = t;
        t = k_127;
        t = fetch_1_0(m_13, t);
        w_59 = t;
        t = q_127;
        if(match_cons(t, sym__2))
          {
            a_60 = ATgetArgument(t, 0);
            f_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_11(r_13, a_60, f_60, t);
        z_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_59, z_59);
        o_12 = t;
        t = SSLsetAnnotations(o_12, t_59);
        LocalPopChoice(d_36);
      }
    else
      {
        t = c_36;
        {
          ATerm q_60 = NULL,t_60 = NULL,v_60 = NULL,w_60 = NULL,p_12 = NULL;
          t = SSLgetAnnotations(a_126);
          q_60 = t;
          t = q_127;
          if(match_cons(t, sym__2))
            {
              v_60 = ATgetArgument(t, 0);
              w_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_11(t_13, v_60, w_60, t);
          t_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_127, t_60);
          p_12 = t;
          t = SSLsetAnnotations(p_12, q_60);
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
ATerm apply_strategy_1_0 (ATerm l_136 (ATerm), ATerm t)
{
  ATerm t_127 = NULL,u_127 = NULL,v_127 = NULL,w_127 = NULL,x_127 = NULL;
  x_127 = t;
  t = dtime_0_0(t);
  t = x_127;
  t = l_136(t);
  w_127 = t;
  t = dtime_0_0(t);
  t_127 = t;
  t = w_127;
  if(match_cons(t, sym__2))
    {
      u_127 = ATgetArgument(t, 0);
      v_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_127), (ATerm) ATmakeAppl(sym_Runtime_1, t_127)), v_127);
  return(t);
}
static ATerm l_128 (ATerm f_128, ATerm t)
{
  t = SSL_fclose(f_128);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_128 = NULL,j_128 = NULL;
  j_128 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_128 = ATgetArgument(t, 0);
      {
        ATerm f_36 = t;
        int j_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_128);
            LocalPopChoice(j_36);
          }
        else
          {
            t = f_36;
            t = l_128(j_128, t);
          }
      }
    }
  else
    {
      t = l_128(j_128, t);
    }
  return(t);
}
static ATerm b_11 (ATerm f_39, ATerm t)
{
  t = SSL_read_term_from_stream(f_39);
  return(t);
}
static ATerm c_11 (ATerm y_63, ATerm z_63, ATerm t)
{
  t = SSL_strcat(y_63, z_63);
  return(t);
}
static ATerm d_11 (ATerm n_40, ATerm o_40, ATerm t)
{
  ATerm m_128 = NULL;
  t = SSL_fopen(n_40, o_40);
  m_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_128);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_128 = NULL;
  t = SSL_stdin_stream();
  n_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_128);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_128 = NULL;
  t = SSL_stdout_stream();
  o_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_128);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_128 = NULL;
  t = SSL_stderr_stream();
  q_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_128);
  return(t);
}
static ATerm i_130 (ATerm w_128, ATerm t)
{
  ATerm x_128 = NULL;
  t = SSL_explode_term(w_128);
  if(match_cons(t, sym__2))
    {
      ATerm k_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_36 = ATgetArgument(t, 1);
        if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
          {
            x_128 = ATgetFirst((ATermList) m_36);
            {
              ATerm n_36 = (ATerm) ATgetNext((ATermList) m_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_128;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_128;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_128;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_128;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_130 (ATerm a_129, ATerm i_129, ATerm j_129, ATerm t)
{
  ATerm k_129 = NULL,l_129 = NULL,o_129 = NULL,r_129 = NULL,u_12 = NULL;
  t = SSLgetAnnotations(j_129);
  o_129 = t;
  t = a_129;
  if(match_cons(t, sym_Path_1))
    {
      r_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_129, i_129);
  u_12 = t;
  t = SSLsetAnnotations(u_12, o_129);
  if(match_cons(t, sym__2))
    {
      k_129 = ATgetArgument(t, 0);
      l_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(k_129, l_129, t);
  return(t);
}
static ATerm k_130 (ATerm t_129, ATerm w_129, ATerm x_129, ATerm t)
{
  ATerm y_129 = NULL,z_129 = NULL,a_130 = NULL,d_130 = NULL,v_12 = NULL;
  t = SSLgetAnnotations(x_129);
  a_130 = t;
  t = SSL_is_string(t_129);
  d_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_130, w_129);
  v_12 = t;
  t = SSLsetAnnotations(v_12, a_130);
  if(match_cons(t, sym__2))
    {
      y_129 = ATgetArgument(t, 0);
      z_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(y_129, z_129, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm f_130 = NULL,g_130 = NULL,h_130 = NULL;
  f_130 = t;
  if(match_cons(t, sym__2))
    {
      g_130 = ATgetArgument(t, 0);
      h_130 = ATgetArgument(t, 1);
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_130(f_130, t);
            LocalPopChoice(q_36);
          }
        else
          {
            t = p_36;
            {
              ATerm r_36 = t;
              int u_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_130(g_130, h_130, f_130, t);
                  LocalPopChoice(u_36);
                }
              else
                {
                  t = r_36;
                  t = k_130(g_130, h_130, f_130, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_130(f_130, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL,t_130 = NULL;
  t_130 = t;
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_130, term_x_36);
        t = e_11(t);
        LocalPopChoice(w_36);
      }
    else
      {
        t = v_36;
        {
          ATerm x_61 = NULL,y_61 = NULL;
          t = term_y_36;
          y_61 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_36, t_130);
          t = c_11(y_61, t_130, t);
          x_61 = t;
          t = SSL_perror(x_61);
          _fail(t);
        }
      }
  }
  n_130 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_11(o_130, t);
  m_130 = t;
  t = n_130;
  t = fclose_0_0(t);
  t = m_130;
  return(t);
}
ATerm fetch_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  static ATerm w_131 (ATerm t)
  {
    ATerm t_131 = NULL,u_131 = NULL,v_131 = NULL;
    t_131 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_131 = ATgetFirst((ATermList) t);
        v_131 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_62 = NULL,g_62 = NULL,a_13 = NULL;
          t = SSLgetAnnotations(t_131);
          d_62 = t;
          t = u_131;
          t = g_122(t);
          g_62 = t;
          t = (ATerm) ATinsert(CheckATermList(v_131), g_62);
          a_13 = t;
          t = SSLsetAnnotations(a_13, d_62);
          LocalPopChoice(e_37);
        }
      else
        {
          t = b_37;
          {
            ATerm t_62 = NULL,a_63 = NULL,b_13 = NULL;
            t = SSLgetAnnotations(t_131);
            t_62 = t;
            t = v_131;
            t = w_131(t);
            a_63 = t;
            t = (ATerm) ATinsert(CheckATermList(a_63), u_131);
            b_13 = t;
            t = SSLsetAnnotations(b_13, t_62);
          }
        }
    }
    return(t);
  }
  t = w_131(t);
  return(t);
}
static ATerm h_11 (ATerm k_51, ATerm l_51, ATerm t)
{
  t = SSL_table_get(k_51, l_51);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm p_118 (ATerm), ATerm t)
{
  ATerm a_132 = NULL;
  a_132 = t;
  {
    ATerm i_37 = t;
    int j_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_132 = NULL,d_132 = NULL,e_132 = NULL;
        t = term_k_37;
        d_132 = t;
        t = term_l_37;
        e_132 = t;
        t = term_n_37;
        t = h_11(d_132, e_132, t);
        c_132 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_132, term_o_37);
        t = geq_0_0(t);
        t = a_132;
        t = p_118(t);
        LocalPopChoice(j_37);
      }
    else
      {
        t = i_37;
        t = a_132;
      }
  }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm h_132 = NULL;
  h_132 = t;
  if(match_string(t, "-k"))
    {
      t = h_132;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_132;
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm i_132 = NULL,j_132 = NULL,k_132 = NULL;
  i_132 = t;
  t = SSL_string_to_int(i_132);
  j_132 = t;
  t = term_p_37;
  k_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_37, j_132);
  t = k_11(k_132, j_132, t);
  t = i_132;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_q_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_13, x_13, y_13, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm m_132 = NULL;
  m_132 = t;
  if(match_string(t, "-S"))
    {
      t = m_132;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_132;
    }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm n_132 = NULL,o_132 = NULL;
  t = term_l_37;
  n_132 = t;
  t = term_l_29;
  o_132 = t;
  t = term_r_37;
  t = k_11(n_132, o_132, t);
  t = term_s_37;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  t = term_u_37;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm p_132 = NULL,q_132 = NULL,r_132 = NULL;
  p_132 = t;
  t = SSL_string_to_int(p_132);
  q_132 = t;
  t = term_l_37;
  r_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_37, q_132);
  t = k_11(r_132, q_132, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_132);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  t = term_v_37;
  return(t);
}
static ATerm l_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm s_132 = NULL,t_132 = NULL;
  t = term_x_37;
  s_132 = t;
  t = term_e_17;
  t_132 = t;
  t = term_b_38;
  t = k_11(s_132, t_132, t);
  t = term_c_38;
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_d_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_13, f_14, h_14, t);
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      {
        ATerm g_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_14, j_14, k_14, t);
            LocalPopChoice(i_38);
          }
        else
          {
            t = g_38;
            t = Option_3_0(l_14, m_14, n_14, t);
          }
      }
    }
  return(t);
}
static ATerm k_11 (ATerm j_44, ATerm k_44, ATerm t)
{
  ATerm u_132 = NULL;
  t = term_k_37;
  u_132 = t;
  t = SSL_table_put(u_132, j_44, k_44);
  t = (ATerm) ATmakeAppl(sym__3, term_k_37, j_44, k_44);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm x_132 = NULL,y_132 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_132 = NULL,a_133 = NULL,b_133 = NULL;
      t = term_e_17;
      t = e_0(t);
      z_132 = t;
      t = term_k_38;
      a_133 = t;
      t = term_p_38;
      b_133 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_38, term_p_38, z_132);
      t = i_11(a_133, b_133, z_132, t);
      _fail(t);
    }
  else
    {
      ATerm e_133 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_132 = ATgetFirst((ATermList) t);
          y_132 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_132;
      t = c_0(t);
      t = term_e_17;
      t = d_0(t);
      e_133 = t;
      t = (ATerm) ATinsert(CheckATermList(y_132), e_133);
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm g_133 = NULL;
  g_133 = t;
  if(match_string(t, "-o"))
    {
      t = g_133;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_133;
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm h_133 = NULL,i_133 = NULL;
  h_133 = t;
  t = term_q_38;
  i_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_38, h_133);
  t = k_11(i_133, h_133, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_133);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_r_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_14, p_14, q_14, t);
  return(t);
}
static ATerm i_11 (ATerm t_49, ATerm u_49, ATerm s_49, ATerm t)
{
  ATerm k_133 = NULL,l_133 = NULL,m_133 = NULL;
  k_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_49, u_49);
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_38 = ATgetArgument(t, 0);
            ATerm v_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_49, u_49);
        t = h_11(t_49, u_49, t);
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        t = (ATerm) ATempty;
      }
  }
  l_133 = t;
  t = (ATerm) ATinsert(CheckATermList(l_133), s_49);
  m_133 = t;
  t = SSL_table_put(t_49, u_49, m_133);
  t = k_133;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm t_133 = NULL,u_133 = NULL,v_133 = NULL,w_133 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_133 = NULL,y_133 = NULL,z_133 = NULL;
      t = term_e_17;
      t = n_0(t);
      x_133 = t;
      t = term_k_38;
      y_133 = t;
      t = term_p_38;
      z_133 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_38, term_p_38, x_133);
      t = i_11(y_133, z_133, x_133, t);
      _fail(t);
    }
  else
    {
      ATerm d_134 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_133 = ATgetFirst((ATermList) t);
          u_133 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_133;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_133 = ATgetFirst((ATermList) t);
          w_133 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_133;
      t = k_0(t);
      t = v_133;
      t = l_0(t);
      d_134 = t;
      t = (ATerm) ATinsert(CheckATermList(w_133), d_134);
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm f_134 = NULL;
  f_134 = t;
  if(match_string(t, "-i"))
    {
      t = f_134;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_134;
    }
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm g_134 = NULL,h_134 = NULL;
  g_134 = t;
  t = term_w_38;
  h_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_38, g_134);
  t = k_11(h_134, g_134, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_134);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = term_x_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_14, s_14, t_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_134 = NULL,j_134 = NULL,k_134 = NULL,l_134 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_17;
  t = whoami_0_0(t);
  i_134 = t;
  t = term_f_17;
  k_134 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_39), i_134);
  l_134 = t;
  t = SSL_printnl(k_134, l_134);
  t = term_k_17;
  j_134 = t;
  t = SSL_exit(j_134);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_134 = NULL,n_134 = NULL;
  t = term_k_37;
  m_134 = t;
  t = term_g_39;
  n_134 = t;
  t = term_h_39;
  t = h_11(m_134, n_134, t);
  return(t);
}
static ATerm f_11 (ATerm b_47, ATerm c_47, ATerm t)
{
  ATerm i_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_47, c_47);
      LocalPopChoice(k_39);
    }
  else
    {
      t = i_39;
      t = SSL_addr(b_47, c_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm t)
{
  ATerm p_134 = NULL,q_134 = NULL,r_134 = NULL;
  p_134 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_134;
      t = l_127(t);
    }
  else
    {
      ATerm u_134 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_134 = ATgetFirst((ATermList) t);
          r_134 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_134;
      t = foldr_2_0(l_127, m_127, t);
      u_134 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_134, u_134);
      t = m_127(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = term_l_29;
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL;
  if(match_cons(t, sym__2))
    {
      v_63 = ATgetArgument(t, 0);
      w_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(v_63, w_63, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_134 = NULL,l_63 = NULL,m_63 = NULL;
  t = times_0_0(t);
  m_63 = t;
  t = SSL_explode_term(m_63);
  if(match_cons(t, sym__2))
    {
      ATerm l_39 = ATgetArgument(t, 0);
      l_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_63;
  t = foldr_2_0(u_14, v_14, t);
  x_134 = t;
  t = SSL_TicksToSeconds(x_134);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_135 = NULL,j_135 = NULL,k_135 = NULL;
  i_135 = t;
  if(match_cons(t, sym__2))
    {
      j_135 = ATgetArgument(t, 0);
      k_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_135;
        if((j_135 != t))
          {
            _fail(t);
          }
        t = i_135;
        LocalPopChoice(o_39);
      }
    else
      {
        t = m_39;
        t = (ATerm) ATmakeAppl(sym__2, j_135, k_135);
        {
          ATerm p_39 = t;
          int s_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_135, k_135);
              LocalPopChoice(s_39);
            }
          else
            {
              t = p_39;
              t = SSL_gtr(j_135, k_135);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_135, k_135);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm o_118 (ATerm), ATerm t)
{
  ATerm o_135 = NULL;
  o_135 = t;
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_135 = NULL,r_135 = NULL,s_135 = NULL;
        t = term_k_37;
        r_135 = t;
        t = term_l_37;
        s_135 = t;
        t = term_n_37;
        t = h_11(r_135, s_135, t);
        q_135 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_135, term_k_17);
        t = geq_0_0(t);
        t = o_135;
        t = o_118(t);
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
        t = o_135;
      }
  }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm u_135 = NULL,v_135 = NULL,x_135 = NULL,y_135 = NULL;
  t = run_time_0_0(t);
  u_135 = t;
  t = term_e_17;
  t = whoami_0_0(t);
  v_135 = t;
  t = term_f_17;
  x_135 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_39), u_135), term_x_39), v_135);
  y_135 = t;
  t = SSL_printnl(x_135, y_135);
  t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_39), u_135), term_x_39), v_135));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_135 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_29;
  z_135 = t;
  t = SSL_exit(z_135);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm j_136 = NULL,k_136 = NULL;
  k_136 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_136;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_136 = ATgetArgument(t, 0);
          {
            ATerm v_64 = NULL,h_13 = NULL;
            t = SSLgetAnnotations(k_136);
            v_64 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_136);
            h_13 = t;
            t = SSLsetAnnotations(h_13, v_64);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_136;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_137 (ATerm), ATerm t)
{
  ATerm a_40 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_136 = NULL,d_136 = NULL;
      t = term_k_37;
      c_136 = t;
      t = term_c_40;
      d_136 = t;
      t = term_d_40;
      t = h_11(c_136, d_136, t);
      LocalPopChoice(b_40);
    }
  else
    {
      t = a_40;
      t = fetch_1_0(d_15, t);
    }
  t = j_137(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm o_136 = NULL,p_136 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_136 = ATgetFirst((ATermList) t);
      p_136 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_136 = NULL,x_136 = NULL;
        static ATerm e_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_136)), not_null(x_136));
          return(t);
        }
        t = p_136;
        t = i_0(t);
        if(((t_136 != NULL) && (t_136 != t)))
          _fail(t);
        else
          t_136 = t;
        t = o_136;
        t = g_0(t);
        if(((x_136 != NULL) && (x_136 != t)))
          _fail(t);
        else
          x_136 = t;
        t = p_136;
        t = reverse_acc_2_0(g_0, e_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm d_137 = NULL,e_137 = NULL,f_137 = NULL,q_13 = NULL;
  f_137 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_137);
  d_137 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_137);
  q_13 = t;
  t = SSLsetAnnotations(q_13, d_137);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm h_137 = NULL;
  h_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_137), term_e_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_136 = NULL,a_137 = NULL;
  ATerm f_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_137 = NULL,c_137 = NULL;
      t = term_k_37;
      b_137 = t;
      t = term_g_39;
      c_137 = t;
      t = term_h_39;
      t = h_11(b_137, c_137, t);
      LocalPopChoice(i_40);
    }
  else
    {
      t = f_40;
      t = fetch_1_0(f_15, t);
    }
  t = term_k_40;
  t = echo_0_0(t);
  t = term_k_38;
  z_136 = t;
  t = term_p_38;
  a_137 = t;
  t = term_p_40;
  t = h_11(z_136, a_137, t);
  t = reverse_acc_2_0(_id, g_15, t);
  t = map_1_0(h_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_137 = NULL,p_137 = NULL,q_137 = NULL;
  k_137 = t;
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_137;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_40 = ATgetFirst((ATermList) t);
                ATerm v_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_137;
          }
        LocalPopChoice(r_40);
      }
    else
      {
        t = q_40;
        t = (ATerm) ATinsert(ATempty, k_137);
      }
  }
  p_137 = t;
  t = term_b_36;
  q_137 = t;
  t = SSL_printnl(q_137, p_137);
  t = k_137;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_137 = NULL,v_137 = NULL;
  t = term_k_37;
  u_137 = t;
  t = term_g_39;
  v_137 = t;
  t = term_h_39;
  t = h_11(u_137, v_137, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm w_137 = NULL,x_137 = NULL;
  t = term_y_40;
  w_137 = t;
  t = term_e_17;
  x_137 = t;
  t = term_z_40;
  t = k_11(w_137, x_137, t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_a_41;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm y_137 = NULL,z_137 = NULL,a_138 = NULL,b_138 = NULL;
  t = term_y_40;
  a_138 = t;
  t = term_e_17;
  b_138 = t;
  t = term_z_40;
  t = k_11(a_138, b_138, t);
  t = term_b_41;
  y_137 = t;
  t = term_e_17;
  z_137 = t;
  t = term_c_41;
  t = k_11(y_137, z_137, t);
  t = term_d_41;
  return(t);
}
static ATerm r_15 (ATerm t)
{
  t = term_e_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_41 = t;
  int g_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_15, j_15, k_15, t);
      LocalPopChoice(g_41);
    }
  else
    {
      t = f_41;
      t = Option_3_0(m_15, o_15, r_15, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_95 (ATerm), ATerm h_95 (ATerm), ATerm t)
{
  ATerm c_138 = NULL,d_138 = NULL,e_138 = NULL,f_138 = NULL,g_138 = NULL,h_138 = NULL,s_13 = NULL;
  h_138 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_138 = ATgetFirst((ATermList) t);
      e_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_138);
  c_138 = t;
  t = d_138;
  t = g_95(t);
  f_138 = t;
  t = e_138;
  t = h_95(t);
  g_138 = t;
  t = (ATerm) ATinsert(CheckATermList(g_138), f_138);
  s_13 = t;
  t = SSLsetAnnotations(s_13, c_138);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_139 (ATerm), ATerm t)
{
  ATerm m_138 = NULL,n_138 = NULL,o_138 = NULL,p_138 = NULL,r_138 = NULL,s_138 = NULL,u_13 = NULL;
  m_138 = t;
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_41;
        t = m_139(t);
        LocalPopChoice(i_41);
      }
    else
      {
        t = h_41;
      }
  }
  t = m_138;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_138 = ATgetFirst((ATermList) t);
      p_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_138);
  n_138 = t;
  t = term_g_39;
  s_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_39, o_138);
  t = k_11(s_138, o_138, t);
  t = p_138;
  {
    static ATerm c_139 (ATerm t)
    {
      ATerm m_41 = t;
      int n_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_41 = t;
          int t_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_138 = NULL;
              v_138 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_138;
              LocalPopChoice(t_41);
            }
          else
            {
              t = o_41;
              t = m_139(t);
              t = Cons_2_0(_id, c_139, t);
            }
          LocalPopChoice(n_41);
        }
      else
        {
          t = m_41;
          {
            ATerm y_138 = NULL,z_138 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_138 = ATgetFirst((ATermList) t);
                z_138 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_138), (ATerm) ATmakeAppl(sym_Undefined_1, y_138));
          }
        }
      return(t);
    }
    t = c_139(t);
  }
  r_138 = t;
  t = (ATerm) ATinsert(CheckATermList(r_138), (ATerm) ATmakeAppl(sym_Program_1, o_138));
  u_13 = t;
  t = SSLsetAnnotations(u_13, n_138);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm q_139 = NULL;
  q_139 = t;
  if(match_string(t, "--help"))
    {
      t = q_139;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_139;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_139;
        }
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm r_139 = NULL,s_139 = NULL;
  t = term_c_40;
  r_139 = t;
  t = term_e_17;
  s_139 = t;
  t = term_e_42;
  t = k_11(r_139, s_139, t);
  t = term_f_42;
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = term_g_42;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_139 (ATerm), ATerm t)
{
  ATerm h_139 = NULL,i_139 = NULL,j_139 = NULL,k_139 = NULL,n_139 = NULL,o_139 = NULL,p_139 = NULL;
  j_139 = t;
  t = term_k_38;
  n_139 = t;
  t = term_p_38;
  o_139 = t;
  t = (ATerm) ATempty;
  p_139 = t;
  t = SSL_table_put(n_139, o_139, p_139);
  t = j_139;
  {
    static ATerm s_15 (ATerm t)
    {
      ATerm h_42 = t;
      int i_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_139(t);
          LocalPopChoice(i_42);
        }
      else
        {
          t = h_42;
          {
            ATerm j_42 = t;
            int k_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_15, z_15, a_16, t);
                LocalPopChoice(k_42);
              }
            else
              {
                t = j_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_15, t);
  }
  {
    ATerm l_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_140 = NULL;
        d_140 = t;
        {
          ATerm r_42 = t;
          int w_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_65 = NULL;
              t = d_140;
              {
                ATerm x_42 = t;
                int z_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_65 = NULL,u_65 = NULL;
                    t = term_k_37;
                    t_65 = t;
                    t = term_c_40;
                    u_65 = t;
                    t = term_d_40;
                    t = h_11(t_65, u_65, t);
                    LocalPopChoice(z_42);
                  }
                else
                  {
                    t = x_42;
                    t = fetch_1_0(b_16, t);
                  }
              }
              t = d_140;
              t = default_system_usage_0_0(t);
              t = term_l_29;
              m_65 = t;
              t = SSL_exit(m_65);
              LocalPopChoice(w_42);
            }
          else
            {
              t = r_42;
              {
                ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
                t = term_k_37;
                d_66 = t;
                t = term_y_40;
                e_66 = t;
                t = term_b_43;
                t = h_11(d_66, e_66, t);
                t = d_140;
                t = default_system_about_0_0(t);
                t = term_l_29;
                c_66 = t;
                t = SSL_exit(c_66);
              }
            }
        }
        LocalPopChoice(q_42);
      }
    else
      {
        t = l_42;
        {
          ATerm c_43 = t;
          int d_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_140 = NULL,f_140 = NULL,g_140 = NULL;
              static ATerm c_16 (ATerm t)
              {
                ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL,w_13 = NULL;
                j_140 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_140 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_140);
                h_140 = t;
                t = i_140;
                if(((h_139 != NULL) && (h_139 != t)))
                  _fail(t);
                else
                  h_139 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_140);
                w_13 = t;
                t = SSLsetAnnotations(w_13, h_140);
                return(t);
              }
              t = fetch_1_0(c_16, t);
              t = term_f_17;
              f_140 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_139)), term_h_43);
              g_140 = t;
              t = SSL_printnl(f_140, g_140);
              t = (ATerm) ATmakeAppl(sym__2, term_f_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_139)), term_h_43));
              t = default_system_usage_0_0(t);
              t = term_k_17;
              e_140 = t;
              t = SSL_exit(e_140);
              LocalPopChoice(d_43);
            }
          else
            {
              t = c_43;
            }
        }
      }
  }
  i_139 = t;
  t = term_k_38;
  k_139 = t;
  t = SSL_table_destroy(k_139);
  t = i_139;
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_137 (ATerm), ATerm m_137 (ATerm), ATerm n_137 (ATerm), ATerm o_137 (ATerm), ATerm t)
{
  ATerm o_140 = NULL,p_140 = NULL,q_140 = NULL,r_140 = NULL;
  t = parse_options_1_0(l_137, t);
  o_140 = t;
  t = term_m_43;
  r_140 = t;
  t = SSL_table_create(r_140);
  t = term_m_43;
  p_140 = t;
  t = term_p_43;
  q_140 = t;
  t = SSL_table_put(p_140, q_140, o_140);
  t = o_140;
  t = n_137(t);
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_137, t);
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        {
          ATerm u_43 = t;
          int w_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_137(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_43);
            }
          else
            {
              t = u_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = if_verbose2_1_0(q_16, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm s_140 = NULL,t_140 = NULL;
  t = term_x_43;
  s_140 = t;
  t = term_e_17;
  t_140 = t;
  t = term_y_43;
  t = k_11(s_140, t_140, t);
  t = term_z_43;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_a_44;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm u_140 = NULL,v_140 = NULL,w_140 = NULL,x_140 = NULL,y_140 = NULL,z_140 = NULL;
  u_140 = t;
  t = term_k_37;
  y_140 = t;
  t = term_g_39;
  z_140 = t;
  t = term_h_39;
  t = h_11(y_140, z_140, t);
  v_140 = t;
  t = term_f_17;
  w_140 = t;
  t = (ATerm) ATinsert(ATempty, v_140);
  x_140 = t;
  t = SSL_printnl(w_140, x_140);
  t = u_140;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_136 (ATerm), ATerm v_136 (ATerm), ATerm w_136 (ATerm), ATerm t)
{
  static ATerm d_16 (ATerm t)
  {
    ATerm c_44 = t;
    int e_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_136(t);
        LocalPopChoice(e_44);
      }
    else
      {
        t = c_44;
        {
          ATerm f_44 = t;
          int g_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(g_44);
            }
          else
            {
              t = f_44;
              {
                ATerm h_44 = t;
                int i_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(i_44);
                  }
                else
                  {
                    t = h_44;
                    {
                      ATerm l_44 = t;
                      int m_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_16, j_16, o_16, t);
                          LocalPopChoice(m_44);
                        }
                      else
                        {
                          t = l_44;
                          {
                            ATerm n_44 = t;
                            int o_44 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(o_44);
                              }
                            else
                              {
                                t = n_44;
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
  static ATerm f_16 (ATerm t)
  {
    ATerm a_141 = NULL,b_141 = NULL,c_141 = NULL;
    b_141 = t;
    {
      ATerm p_44 = t;
      int q_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm v_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((a_141 != NULL) && (a_141 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_141 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(v_16, t);
          LocalPopChoice(q_44);
        }
      else
        {
          t = p_44;
          t = term_r_44;
          a_141 = t;
        }
    }
    t = not_null(a_141);
    t = ReadFromFile_0_0(t);
    c_141 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_141, c_141);
    t = apply_strategy_1_0(u_136, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(d_16, w_136, e_16, f_16, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm j_141 = NULL,k_141 = NULL,l_141 = NULL,m_141 = NULL,n_141 = NULL,o_141 = NULL,p_141 = NULL,r_141 = NULL,s_141 = NULL,t_141 = NULL,x_141 = NULL,y_141 = NULL,z_141 = NULL,a_142 = NULL,b_142 = NULL,d_142 = NULL,e_142 = NULL,f_142 = NULL,g_142 = NULL,g_14 = NULL,e_14 = NULL,d_14 = NULL,c_14 = NULL,b_14 = NULL;
  g_142 = t;
  if(match_cons(t, sym__2))
    {
      k_141 = ATgetArgument(t, 0);
      l_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_142);
  j_141 = t;
  t = l_141;
  if(match_cons(t, sym_Specification_1))
    {
      n_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_141);
  m_141 = t;
  t = n_141;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_141 = ATgetFirst((ATermList) t);
      s_141 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_141);
  p_141 = t;
  t = s_141;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_141 = ATgetFirst((ATermList) t);
      z_141 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_141);
  x_141 = t;
  t = y_141;
  if(match_cons(t, sym_Strategies_1))
    {
      d_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_141);
  b_142 = t;
  t = d_142;
  t = map_1_0(a_17, t);
  e_142 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, e_142);
  b_14 = t;
  t = SSLsetAnnotations(b_14, b_142);
  f_142 = t;
  t = z_141;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_141), f_142);
  c_14 = t;
  t = SSLsetAnnotations(c_14, x_141);
  a_142 = t;
  t = (ATerm) ATinsert(CheckATermList(a_142), r_141);
  d_14 = t;
  t = SSLsetAnnotations(d_14, p_141);
  t_141 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_141);
  e_14 = t;
  t = SSLsetAnnotations(e_14, m_141);
  o_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_141, o_141);
  g_14 = t;
  t = SSLsetAnnotations(g_14, j_141);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm y_142 = NULL,z_142 = NULL,a_143 = NULL,b_143 = NULL,c_143 = NULL;
  c_143 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_142 = ATgetArgument(t, 0);
      z_142 = ATgetArgument(t, 1);
      a_143 = ATgetArgument(t, 2);
      b_143 = ATgetArgument(t, 3);
      {
        ATerm t_44 = t;
        int u_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_66 = NULL,x_66 = NULL,a_14 = NULL;
            t = SSLgetAnnotations(c_143);
            m_66 = t;
            t = b_143;
            t = topdown_1_0(b_17, t);
            t = match_to_dfa_0_0(t);
            x_66 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_142, z_142, a_143, x_66);
            a_14 = t;
            t = SSLsetAnnotations(a_14, m_66);
            LocalPopChoice(u_44);
          }
        else
          {
            t = t_44;
            t = c_143;
          }
      }
    }
  else
    {
      t = c_143;
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm b_67 = NULL;
  b_67 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm v_44 = t;
      int w_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_67 = NULL;
          t = b_67;
          t = new_0_0(t);
          c_67 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_67), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_67)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_67))));
          LocalPopChoice(w_44);
        }
      else
        {
          t = v_44;
          t = b_67;
        }
    }
  else
    {
      t = b_67;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(x_16, _fail, default_usage_0_0, t);
  return(t);
}
