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
ATerm term_t_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_l_42;
ATerm term_d_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_l_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_e_39;
ATerm term_c_39;
ATerm term_z_38;
ATerm term_y_38;
ATerm term_d_38;
ATerm term_b_38;
ATerm term_x_37;
ATerm term_v_37;
ATerm term_p_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_b_37;
ATerm term_z_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_r_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_l_36;
ATerm term_g_36;
ATerm term_s_35;
ATerm term_n_35;
ATerm term_k_35;
ATerm term_m_34;
ATerm term_i_34;
ATerm term_f_34;
ATerm term_z_32;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_r_28;
ATerm term_i_28;
ATerm term_d_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_j_27;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_d_23;
ATerm term_z_16;
ATerm term_u_16;
ATerm term_p_16;
ATerm term_k_16;
ATerm term_j_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Sort_2, term_r_27, (ATerm) ATempty);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_27);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym__2, term_l_36, term_d_28);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_28);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym__2, term_z_36, term_j_16);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym__2, term_m_37, term_n_37);
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_r_39, term_j_16);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(sym__2, term_b_40, term_j_16);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, term_c_39, term_j_16);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(sym__2, term_d_42, term_j_16);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym_stdin_0);
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
static ATerm t_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm spaste_1_0 (ATerm j_102 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm f_8 (ATerm d_32, ATerm c_32, ATerm t);
ATerm SVar_1_0 (ATerm f_84 (ATerm), ATerm t);
static ATerm g_8 (ATerm k_122 (ATerm), ATerm l_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_55, ATerm x_55, ATerm w_55, ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_8 (ATerm e_122 (ATerm), ATerm f_122 (ATerm (ATerm), ATerm), ATerm q_55, ATerm t_55, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm s_122 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm z_121 (ATerm (ATerm), ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_122 (ATerm (ATerm), ATerm), ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm tpaste_1_0 (ATerm f_102 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm w_80 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm l_9 (ATerm j_75, ATerm i_75, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm j_104 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm simple_strategy_0_0 (ATerm t);
static ATerm m_8 (ATerm o_117 (ATerm), ATerm n_52, ATerm m_52, ATerm t);
ATerm tvars_matrix_boundin_3_0 (ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm r_8 (ATerm q_117 (ATerm), ATerm p_52, ATerm o_52, ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_8 (ATerm w_674, ATerm b_675, ATerm g_68, ATerm t);
ATerm while_not_2_0 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t);
ATerm for_3_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm m_86 (ATerm g_85, ATerm h_85, ATerm i_85, ATerm t);
static ATerm w_5 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm free_vars_3_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm RowLet_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm v_8 (ATerm f_79, ATerm e_79, ATerm t);
static ATerm w_8 (ATerm y_114 (ATerm), ATerm b_48, ATerm z_47, ATerm t);
static ATerm m_7 (ATerm t);
ATerm default_state_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
ATerm MatchCons_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm y_8 (ATerm w_133 (ATerm), ATerm s_77, ATerm p_77, ATerm q_77, ATerm r_77, ATerm t);
static ATerm z_8 (ATerm l_77, ATerm m_77, ATerm n_77, ATerm t);
ATerm filter_1_0 (ATerm n_121 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm r_116 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
ATerm ConsArgs_0_0 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm outedges_0_0 (ATerm t);
static ATerm e_99 (ATerm d_97, ATerm t);
ATerm get_path_0_0 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm d_9 (ATerm y_78, ATerm t);
static ATerm p_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm f_9 (ATerm o_78, ATerm t);
static ATerm t_9 (ATerm t);
static ATerm h_9 (ATerm m_78, ATerm t);
ATerm repeat_2_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t);
static ATerm j_9 (ATerm o_48, ATerm p_48, ATerm t);
ATerm end_scope_1_0 (ATerm v_114 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm u_114 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm y_115 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_105 (ATerm w_104, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm MatrixMerge_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm g_103 (ATerm), ATerm t);
static ATerm q_10 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm v_52, ATerm u_52, ATerm t);
static ATerm r_10 (ATerm v_117 (ATerm), ATerm r_52, ATerm q_52, ATerm t);
ATerm foldr_3_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t);
static ATerm w_10 (ATerm t);
ATerm collect_om_2_0 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm t);
ATerm CollectSubst_0_0 (ATerm t);
ATerm IgnoreVar_0_0 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm v_11 (ATerm t);
ATerm CollectSplit_2_0 (ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm nzip0_1_0 (ATerm c_108 (ATerm), ATerm t);
ATerm Propagate_0_0 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
ATerm term_to_matrix_0_0 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
ATerm match_to_matrix_0_0 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm match_to_dfa_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm f_103 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_115 (ATerm), ATerm t);
static ATerm d_11 (ATerm v_39, ATerm w_39, ATerm t);
static ATerm e_11 (ATerm m_38, ATerm n_38, ATerm t);
static ATerm g_11 (ATerm p_110 (ATerm), ATerm o_262, ATerm q_38, ATerm t);
static ATerm f_11 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm f_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_129 (ATerm), ATerm t);
static ATerm p_124 (ATerm j_124, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_11 (ATerm o_38, ATerm t);
static ATerm i_11 (ATerm x_39, ATerm y_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_126 (ATerm z_124, ATerm t);
static ATerm b_126 (ATerm d_125, ATerm e_125, ATerm f_125, ATerm t);
static ATerm c_126 (ATerm n_125, ATerm o_125, ATerm p_125, ATerm t);
static ATerm j_11 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_115 (ATerm), ATerm t);
static ATerm c_11 (ATerm u_61, ATerm v_61, ATerm t);
ATerm debug_1_0 (ATerm n_110 (ATerm), ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm g_112 (ATerm), ATerm t);
static ATerm k_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_11 (ATerm q_43, ATerm r_43, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_11 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_11 (ATerm n_46, ATerm o_46, ATerm t);
ATerm foldr_2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_112 (ATerm), ATerm t);
static ATerm p_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm need_help_1_0 (ATerm h_130 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm m_11 (ATerm a_50, ATerm b_50, ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm z_14 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_132 (ATerm), ATerm t);
static ATerm i_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
ATerm parse_options_1_0 (ATerm j_132 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm t);
static ATerm p_15 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
ATerm iowrap_3_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
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
  t = term_j_16;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_k_16;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_16), f_0), term_p_16);
  q_0 = t;
  t = SSL_printnl(m_0, q_0);
  t = term_z_16;
  j_0 = t;
  t = SSL_exit(j_0);
  t = e_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_17 = ATgetArgument(t, 0);
      if(((ATgetType(a_17) != AT_LIST) || !(ATisEmpty(a_17))))
        _fail(t);
      {
        ATerm d_17 = ATgetArgument(t, 1);
        if(((ATgetType(d_17) != AT_LIST) || !(ATisEmpty(d_17))))
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
      ATerm e_17 = ATgetArgument(t, 0);
      if(((ATgetType(e_17) == AT_LIST) && !(ATisEmpty(e_17))))
        {
          a_1 = ATgetFirst((ATermList) e_17);
          b_1 = (ATerm) ATgetNext((ATermList) e_17);
        }
      else
        _fail(t);
      {
        ATerm f_17 = ATgetArgument(t, 1);
        if(((ATgetType(f_17) == AT_LIST) && !(ATisEmpty(f_17))))
          {
            c_1 = ATgetFirst((ATermList) f_17);
            d_1 = (ATerm) ATgetNext((ATermList) f_17);
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
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm o_17 = ATgetArgument(t, 0);
            j_1 = ATgetArgument(t, 1);
            k_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(h_17);
        t = (ATerm) ATmakeAppl(sym_SDef_3, m_1, j_1, k_1);
      }
    else
      {
        t = g_17;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm p_17 = ATgetArgument(t, 0);
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
      ATerm r_17 = ATgetArgument(t, 0);
      if(((ATgetType(r_17) != AT_LIST) || !(ATisEmpty(r_17))))
        _fail(t);
      {
        ATerm s_17 = ATgetArgument(t, 1);
        if(((ATgetType(s_17) != AT_LIST) || !(ATisEmpty(s_17))))
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
  ATerm t_4 = NULL,y_4 = NULL,z_4 = NULL,b_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_17 = ATgetArgument(t, 0);
      if(((ATgetType(t_17) == AT_LIST) && !(ATisEmpty(t_17))))
        {
          t_4 = ATgetFirst((ATermList) t_17);
          y_4 = (ATerm) ATgetNext((ATermList) t_17);
        }
      else
        _fail(t);
      {
        ATerm u_17 = ATgetArgument(t, 1);
        if(((ATgetType(u_17) == AT_LIST) && !(ATisEmpty(u_17))))
          {
            z_4 = ATgetFirst((ATermList) u_17);
            b_5 = (ATerm) ATgetNext((ATermList) u_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_4, z_4), (ATerm) ATmakeAppl(sym__2, y_4, b_5));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_5), c_5);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm h_5 = NULL,j_5 = NULL,k_5 = NULL;
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5;
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_17 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_17);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_5);
      }
    else
      {
        t = v_17;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_17 = ATgetArgument(t, 0);
            j_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_5, j_5);
      }
  }
  return(t);
}
static ATerm n_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      if(((ATgetType(a_18) != AT_LIST) || !(ATisEmpty(a_18))))
        _fail(t);
      {
        ATerm b_18 = ATgetArgument(t, 1);
        if(((ATgetType(b_18) != AT_LIST) || !(ATisEmpty(b_18))))
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
  ATerm i_7 = NULL,l_7 = NULL,p_7 = NULL,r_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_18 = ATgetArgument(t, 0);
      if(((ATgetType(c_18) == AT_LIST) && !(ATisEmpty(c_18))))
        {
          i_7 = ATgetFirst((ATermList) c_18);
          l_7 = (ATerm) ATgetNext((ATermList) c_18);
        }
      else
        _fail(t);
      {
        ATerm d_18 = ATgetArgument(t, 1);
        if(((ATgetType(d_18) == AT_LIST) && !(ATisEmpty(d_18))))
          {
            p_7 = ATgetFirst((ATermList) d_18);
            r_7 = (ATerm) ATgetNext((ATermList) d_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_7, p_7), (ATerm) ATmakeAppl(sym__2, l_7, r_7));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL;
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_7), t_7);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_7 = NULL,a_8 = NULL,q_8 = NULL;
  if(match_cons(t, sym__2))
    {
      w_7 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_7;
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_8);
      }
    else
      {
        t = e_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_18 = ATgetArgument(t, 0);
            a_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_8, a_8);
      }
  }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_18 = ATgetArgument(t, 0);
      if(((ATgetType(i_18) != AT_LIST) || !(ATisEmpty(i_18))))
        _fail(t);
      {
        ATerm j_18 = ATgetArgument(t, 1);
        if(((ATgetType(j_18) != AT_LIST) || !(ATisEmpty(j_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm z_9 = NULL,a_10 = NULL,c_10 = NULL,d_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
        {
          z_9 = ATgetFirst((ATermList) k_18);
          a_10 = (ATerm) ATgetNext((ATermList) k_18);
        }
      else
        _fail(t);
      {
        ATerm l_18 = ATgetArgument(t, 1);
        if(((ATgetType(l_18) == AT_LIST) && !(ATisEmpty(l_18))))
          {
            c_10 = ATgetFirst((ATermList) l_18);
            d_10 = (ATerm) ATgetNext((ATermList) l_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_9, c_10), (ATerm) ATmakeAppl(sym__2, a_10, d_10));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_10), e_10);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm h_10 = NULL,n_10 = NULL,o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      h_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10;
  {
    ATerm o_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_10);
      }
    else
      {
        t = o_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_18 = ATgetArgument(t, 0);
            n_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_10, n_10);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,c_9 = NULL,q_9 = NULL;
  p_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_9 = ATgetArgument(t, 0);
      q_9 = ATgetArgument(t, 1);
      {
        ATerm s_0 = NULL,x_0 = NULL,y_0 = NULL,s_1 = NULL;
        t = SSLgetAnnotations(p_8);
        s_0 = t;
        t = c_9;
        t = j_102(t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_9, y_0);
        t = genzip_4_0(a_0, b_0, c_0, u_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_0, q_9);
        s_1 = t;
        t = SSLsetAnnotations(s_1, s_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_9 = ATgetArgument(t, 0);
          q_9 = ATgetArgument(t, 1);
          n_8 = ATgetArgument(t, 2);
          {
            ATerm b_4 = NULL,p_4 = NULL,q_4 = NULL,u_1 = NULL;
            t = SSLgetAnnotations(p_8);
            b_4 = t;
            t = q_9;
            t = j_102(t);
            q_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_9, q_4);
            t = genzip_4_0(w_0, z_0, g_1, i_1, t);
            p_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, c_9, p_4, n_8);
            u_1 = t;
            t = SSLsetAnnotations(u_1, b_4);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              c_9 = ATgetArgument(t, 0);
              q_9 = ATgetArgument(t, 1);
              n_8 = ATgetArgument(t, 2);
              o_8 = ATgetArgument(t, 3);
              {
                ATerm i_6 = NULL,w_6 = NULL,e_7 = NULL,v_1 = NULL;
                t = SSLgetAnnotations(p_8);
                i_6 = t;
                t = q_9;
                t = j_102(t);
                e_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, q_9, e_7);
                t = genzip_4_0(n_1, o_1, p_1, q_1, t);
                w_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_9, w_6, n_8, o_8);
                v_1 = t;
                t = SSLsetAnnotations(v_1, i_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  c_9 = ATgetArgument(t, 0);
                  q_9 = ATgetArgument(t, 1);
                  n_8 = ATgetArgument(t, 2);
                  o_8 = ATgetArgument(t, 3);
                  {
                    ATerm r_9 = NULL,w_9 = NULL,x_9 = NULL,w_1 = NULL;
                    t = SSLgetAnnotations(p_8);
                    r_9 = t;
                    t = q_9;
                    t = j_102(t);
                    x_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, q_9, x_9);
                    t = genzip_4_0(r_1, t_1, y_1, z_1, t);
                    w_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, c_9, w_9, n_8, o_8);
                    w_1 = t;
                    t = SSLsetAnnotations(w_1, r_9);
                  }
                }
              else
                {
                  ATerm t_11 = NULL,w_11 = NULL,x_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      c_9 = ATgetArgument(t, 0);
                      q_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_8);
                  t_11 = t;
                  t = c_9;
                  t = j_102(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_11 = ATgetFirst((ATermList) t);
                      {
                        ATerm t_18 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, w_11, q_9);
                  x_1 = t;
                  t = SSLsetAnnotations(x_1, t_11);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm m_102 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
      {
        ATerm l_12 = NULL,o_12 = NULL,p_12 = NULL,g_2 = NULL;
        t = SSLgetAnnotations(w_14);
        l_12 = t;
        t = x_14;
        t = k_102(t);
        o_12 = t;
        t = y_14;
        t = k_102(t);
        p_12 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, o_12, p_12);
        g_2 = t;
        t = SSLsetAnnotations(g_2, l_12);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          x_14 = ATgetArgument(t, 0);
          y_14 = ATgetArgument(t, 1);
          u_14 = ATgetArgument(t, 2);
          {
            ATerm l_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(w_14);
            l_13 = t;
            t = x_14;
            t = m_102(t);
            s_13 = t;
            t = y_14;
            t = m_102(t);
            t_13 = t;
            t = u_14;
            t = k_102(t);
            u_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, s_13, t_13, u_13);
            h_2 = t;
            t = SSLsetAnnotations(h_2, l_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              x_14 = ATgetArgument(t, 0);
              y_14 = ATgetArgument(t, 1);
              u_14 = ATgetArgument(t, 2);
              v_14 = ATgetArgument(t, 3);
              {
                ATerm b_15 = NULL,s_15 = NULL,u_15 = NULL,v_15 = NULL,y_15 = NULL,i_2 = NULL;
                t = SSLgetAnnotations(w_14);
                b_15 = t;
                t = x_14;
                t = m_102(t);
                s_15 = t;
                t = y_14;
                t = m_102(t);
                u_15 = t;
                t = u_14;
                t = m_102(t);
                v_15 = t;
                t = v_14;
                t = k_102(t);
                y_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_15, u_15, v_15, y_15);
                i_2 = t;
                t = SSLsetAnnotations(i_2, b_15);
              }
            }
          else
            {
              ATerm t_16 = NULL,b_17 = NULL,c_17 = NULL,j_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  x_14 = ATgetArgument(t, 0);
                  y_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_14);
              t_16 = t;
              t = x_14;
              t = m_102(t);
              b_17 = t;
              t = y_14;
              t = k_102(t);
              c_17 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, b_17, c_17);
              j_2 = t;
              t = SSLsetAnnotations(j_2, t_16);
            }
        }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm u_18 = t;
  int v_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_15 = ATgetArgument(t, 0);
          {
            ATerm w_18 = ATgetArgument(t, 1);
          }
          {
            ATerm x_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_18);
      t = j_15;
    }
  else
    {
      t = u_18;
      if(match_cons(t, sym_SDefT_4))
        {
          j_15 = ATgetArgument(t, 0);
          {
            ATerm y_18 = ATgetArgument(t, 1);
          }
          {
            ATerm z_18 = ATgetArgument(t, 2);
          }
          {
            ATerm a_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_15;
    }
  return(t);
}
static ATerm f_8 (ATerm d_32, ATerm c_32, ATerm t)
{
  t = d_32;
  t = map_1_0(a_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,t_15 = NULL,w_15 = NULL,x_15 = NULL,t_2 = NULL;
  x_15 = t;
  if(match_cons(t, sym_SVar_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_15);
  r_15 = t;
  t = t_15;
  t = f_84(t);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, w_15);
  t_2 = t;
  t = SSLsetAnnotations(t_2, r_15);
  return(t);
}
static ATerm g_8 (ATerm k_122 (ATerm), ATerm l_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm y_55, ATerm x_55, ATerm w_55, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm z_15 = NULL;
    z_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_15, w_55);
    t = k_122(t);
    return(t);
  }
  static ATerm c_2 (ATerm t)
  {
    ATerm a_16 = NULL;
    a_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_16, x_55);
    t = k_122(t);
    return(t);
  }
  t = y_55;
  t = l_122(b_2, c_2, _id, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if(((ATgetType(g_19) != AT_LIST) || !(ATisEmpty(g_19))))
        _fail(t);
      {
        ATerm h_19 = ATgetArgument(t, 1);
        if(((ATgetType(h_19) != AT_LIST) || !(ATisEmpty(h_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,v_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_19 = ATgetArgument(t, 0);
      if(((ATgetType(i_19) == AT_LIST) && !(ATisEmpty(i_19))))
        {
          r_16 = ATgetFirst((ATermList) i_19);
          s_16 = (ATerm) ATgetNext((ATermList) i_19);
        }
      else
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
          {
            v_16 = ATgetFirst((ATermList) k_19);
            w_16 = (ATerm) ATgetNext((ATermList) k_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_16, v_16), (ATerm) ATmakeAppl(sym__2, s_16, w_16));
  return(t);
}
static ATerm f_2 (ATerm t)
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
static ATerm h_8 (ATerm e_122 (ATerm), ATerm f_122 (ATerm (ATerm), ATerm), ATerm q_55, ATerm t_55, ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,q_16 = NULL;
  t = q_55;
  t = e_122(t);
  l_16 = t;
  t = map_1_0(new_0_0, t);
  m_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_16, m_16);
  t = genzip_4_0(d_2, e_2, f_2, _id, t);
  q_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_16, t_55);
  t = conc_0_0(t);
  n_16 = t;
  t = q_55;
  {
    static ATerm k_2 (ATerm t)
    {
      t = m_16;
      return(t);
    }
    t = f_122(k_2, t);
  }
  o_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_16, t_55, n_16);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,q_17 = NULL;
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
      q_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_17;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
      {
        ATerm l_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_17;
            if((l_17 != t))
              {
                _fail(t);
              }
            t = j_17;
            LocalPopChoice(n_19);
          }
        else
          {
            t = l_19;
            t = (ATerm) ATmakeAppl(sym__2, l_17, q_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_17, q_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm s_122 (ATerm), ATerm t)
{
  static ATerm f_19 (ATerm t)
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_122(t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        {
          ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
          static ATerm l_2 (ATerm t)
          {
            ATerm x_17 = NULL;
            x_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_17, not_null(e_19));
            t = f_19(t);
            return(t);
          }
          c_19 = t;
          if(match_cons(t, sym__2))
            {
              d_19 = ATgetArgument(t, 0);
              if(((e_19 != NULL) && (e_19 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                e_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_19;
          t = SRTS_all(l_2, t);
        }
      }
    return(t);
  }
  t = f_19(t);
  return(t);
}
ATerm rename_4_0 (ATerm z_121 (ATerm (ATerm), ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_122 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_19 = NULL;
  static ATerm p_20 (ATerm t)
  {
    static ATerm m_2 (ATerm t)
    {
      ATerm c_20 = NULL,f_20 = NULL,g_20 = NULL;
      c_20 = t;
      if(match_cons(t, sym__2))
        {
          f_20 = ATgetArgument(t, 0);
          g_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_2 (ATerm t)
            {
              ATerm o_20 = NULL;
              o_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_20, g_20);
              t = lookup_0_0(t);
              return(t);
            }
            t = f_20;
            t = z_121(n_2, t);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm m_18 = NULL,n_18 = NULL,p_18 = NULL;
              t = c_20;
              t = h_8(a_122, c_122, f_20, g_20, t);
              if(match_cons(t, sym__3))
                {
                  m_18 = ATgetArgument(t, 0);
                  n_18 = ATgetArgument(t, 1);
                  p_18 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = g_8(p_20, b_122, m_18, n_18, p_18, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(m_2, t);
    return(t);
  }
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_19, (ATerm) ATempty);
  t = p_20(t);
  return(t);
}
static ATerm o_2 (ATerm t)
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
static ATerm p_2 (ATerm t)
{
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      if(((ATgetType(u_19) == AT_LIST) && !(ATisEmpty(u_19))))
        {
          s_20 = ATgetFirst((ATermList) u_19);
          t_20 = (ATerm) ATgetNext((ATermList) u_19);
        }
      else
        _fail(t);
      {
        ATerm v_19 = ATgetArgument(t, 1);
        if(((ATgetType(v_19) == AT_LIST) && !(ATisEmpty(v_19))))
          {
            u_20 = ATgetFirst((ATermList) v_19);
            v_20 = (ATerm) ATgetNext((ATermList) v_19);
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
static ATerm r_2 (ATerm t)
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
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_19);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_21);
      }
    else
      {
        t = w_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_19 = ATgetArgument(t, 0);
            b_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_21, b_21);
      }
  }
  return(t);
}
static ATerm s_2 (ATerm t)
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
static ATerm u_2 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_20 = ATgetArgument(t, 0);
      if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
        {
          c_22 = ATgetFirst((ATermList) e_20);
          d_22 = (ATerm) ATgetNext((ATermList) e_20);
        }
      else
        _fail(t);
      {
        ATerm h_20 = ATgetArgument(t, 1);
        if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
          {
            e_22 = ATgetFirst((ATermList) h_20);
            f_22 = (ATerm) ATgetNext((ATermList) h_20);
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
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_22);
      }
    else
      {
        t = i_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm n_20 = ATgetArgument(t, 0);
            l_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_22, l_22);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  m_27 = t;
  if(match_cons(t, sym_Scope_2))
    {
      n_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
      {
        ATerm b_19 = NULL,j_19 = NULL,v_2 = NULL;
        t = SSLgetAnnotations(m_27);
        b_19 = t;
        t = n_27;
        t = f_102(t);
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_19, o_27);
        v_2 = t;
        t = SSLsetAnnotations(v_2, b_19);
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
            ATerm d_20 = NULL,l_20 = NULL,m_20 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(m_27);
            d_20 = t;
            t = p_27;
            t = f_102(t);
            m_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_27, m_20);
            t = genzip_4_0(o_2, p_2, q_2, r_2, t);
            l_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, n_27, o_27, l_20, q_27);
            w_2 = t;
            t = SSLsetAnnotations(w_2, d_20);
          }
        }
      else
        {
          ATerm t_21 = NULL,z_21 = NULL,a_22 = NULL,x_2 = NULL;
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
          t_21 = t;
          t = p_27;
          t = f_102(t);
          a_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_27, a_22);
          t = genzip_4_0(s_2, u_2, y_2, z_2, t);
          z_21 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, n_27, o_27, z_21, q_27);
          x_2 = t;
          t = SSLsetAnnotations(x_2, t_21);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm w_80 (ATerm), ATerm t)
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
  t = w_80(t);
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_27);
  b_3 = t;
  t = SSLsetAnnotations(b_3, u_27);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
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
  ATerm y_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_28 = ATgetArgument(t, 0);
          {
            ATerm d_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_21);
      t = w_28;
    }
  else
    {
      t = y_20;
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
  ATerm r_29 = NULL;
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_29 = ATgetArgument(t, 0);
          {
            ATerm g_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_21);
      t = r_29;
    }
  else
    {
      t = e_21;
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
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  v_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
      t = v_29;
      t = f_8(w_29, x_29, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_29 = ATgetArgument(t, 0);
          x_29 = ATgetArgument(t, 1);
          y_29 = ATgetArgument(t, 2);
          t = x_29;
          t = map_1_0(v_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              w_29 = ATgetArgument(t, 0);
              x_29 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, w_29);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  w_29 = ATgetArgument(t, 0);
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
                      w_29 = ATgetArgument(t, 0);
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
  ATerm v_30 = NULL;
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_30 = ATgetArgument(t, 0);
          {
            ATerm j_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_21);
      t = v_30;
    }
  else
    {
      t = h_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_30;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm i_33 = NULL;
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_33 = ATgetArgument(t, 0);
          {
            ATerm m_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_21);
      t = i_33;
    }
  else
    {
      t = k_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_33;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm r_33 = NULL;
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_33 = ATgetArgument(t, 0);
          {
            ATerm p_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_21);
      t = r_33;
    }
  else
    {
      t = n_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_33;
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
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm s_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(r_21);
      {
        ATerm a_34 = NULL,b_34 = NULL;
        a_34 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm u_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        b_34 = t;
        t = SSLgetAnnotations(a_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_21 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) v_21) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_21 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(w_21) != AT_LIST) || !(ATisEmpty(w_21))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_34;
      }
    }
  else
    {
      t = q_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm b_22 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_22) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm i_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_21);
            _fail(t);
          }
        else
          {
            t = x_21;
          }
      }
    }
  return(t);
}
static ATerm l_9 (ATerm j_75, ATerm i_75, ATerm t)
{
  t = j_75;
  t = topdown_1_0(y_3, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, j_75);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_35 = ATgetArgument(t, 0);
      d_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_35;
  if(match_cons(t, sym_Match_1))
    {
      b_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_35;
  if(match_cons(t, sym_Var_1))
    {
      c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_35;
  if(match_cons(t, sym_Seq_2))
    {
      e_35 = ATgetArgument(t, 0);
      u_34 = ATgetArgument(t, 1);
      t = e_35;
      if(match_cons(t, sym_Build_1))
        {
          f_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_35;
      if(match_cons(t, sym_Var_1))
        {
          t_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_34;
      if((c_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_35)), u_34);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
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
      t = f_35;
      if((c_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_35));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,b_36 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_35 = ATgetArgument(t, 0);
      y_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_35;
  if(match_cons(t, sym_Build_1))
    {
      x_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_35;
  if(match_cons(t, sym_Seq_2))
    {
      b_36 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
      t = b_36;
      if(match_cons(t, sym_Match_1))
        {
          t_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_35;
      if((x_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_35), u_35);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          b_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_36;
      if((x_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, x_35);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm q_36 = NULL,s_36 = NULL,y_36 = NULL,a_37 = NULL,c_37 = NULL,d_37 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_36 = ATgetArgument(t, 0);
      c_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_36;
  if(match_cons(t, sym_Match_1))
    {
      a_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_37;
  if(match_cons(t, sym_Seq_2))
    {
      d_37 = ATgetArgument(t, 0);
      s_36 = ATgetArgument(t, 1);
      t = d_37;
      if(match_cons(t, sym_Match_1))
        {
          q_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_36;
      if((a_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_37), s_36);
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
      if((a_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, a_37);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,c_38 = NULL,g_38 = NULL,k_38 = NULL,l_38 = NULL,r_38 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_38;
  if(match_cons(t, sym_Build_1))
    {
      ATerm k_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_38;
  if(match_cons(t, sym_Seq_2))
    {
      k_38 = ATgetArgument(t, 0);
      l_38 = ATgetArgument(t, 1);
      t = k_38;
      if(match_cons(t, sym_PrimT_3))
        {
          y_37 = ATgetArgument(t, 0);
          z_37 = ATgetArgument(t, 1);
          a_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, y_37, z_37, a_38), l_38);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          k_38 = ATgetArgument(t, 0);
          l_38 = ATgetArgument(t, 1);
          r_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, k_38, l_38, r_38);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,t_39 = NULL,d_40 = NULL,g_40 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_39 = ATgetArgument(t, 0);
      d_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_39;
  if(match_cons(t, sym_Build_1))
    {
      ATerm n_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_40;
  if(match_cons(t, sym_Seq_2))
    {
      g_40 = ATgetArgument(t, 0);
      m_39 = ATgetArgument(t, 1);
      t = g_40;
      if(match_cons(t, sym_Build_1))
        {
          l_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_39), m_39);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          g_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, g_40);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_22 = ATgetArgument(t, 0);
      if(((ATgetType(o_22) != AT_LIST) || !(ATisEmpty(o_22))))
        _fail(t);
      {
        ATerm p_22 = ATgetArgument(t, 1);
        if(((ATgetType(p_22) != AT_LIST) || !(ATisEmpty(p_22))))
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
  ATerm g_42 = NULL,h_42 = NULL,m_42 = NULL,n_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_22 = ATgetArgument(t, 0);
      if(((ATgetType(q_22) == AT_LIST) && !(ATisEmpty(q_22))))
        {
          g_42 = ATgetFirst((ATermList) q_22);
          h_42 = (ATerm) ATgetNext((ATermList) q_22);
        }
      else
        _fail(t);
      {
        ATerm r_22 = ATgetArgument(t, 1);
        if(((ATgetType(r_22) == AT_LIST) && !(ATisEmpty(r_22))))
          {
            m_42 = ATgetFirst((ATermList) r_22);
            n_42 = (ATerm) ATgetNext((ATermList) r_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_42, m_42), (ATerm) ATmakeAppl(sym__2, h_42, n_42));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL;
  if(match_cons(t, sym__2))
    {
      o_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_42), o_42);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL;
  if(match_cons(t, sym__2))
    {
      q_42 = ATgetArgument(t, 0);
      r_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_42), (ATerm) ATmakeAppl(sym_Match_1, r_42));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_22 = ATgetArgument(t, 0);
      if(((ATgetType(s_22) != AT_LIST) || !(ATisEmpty(s_22))))
        _fail(t);
      {
        ATerm t_22 = ATgetArgument(t, 1);
        if(((ATgetType(t_22) != AT_LIST) || !(ATisEmpty(t_22))))
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
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_22 = ATgetArgument(t, 0);
      if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
        {
          c_43 = ATgetFirst((ATermList) u_22);
          d_43 = (ATerm) ATgetNext((ATermList) u_22);
        }
      else
        _fail(t);
      {
        ATerm v_22 = ATgetArgument(t, 1);
        if(((ATgetType(v_22) == AT_LIST) && !(ATisEmpty(v_22))))
          {
            e_43 = ATgetFirst((ATermList) v_22);
            f_43 = (ATerm) ATgetNext((ATermList) v_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_43, e_43), (ATerm) ATmakeAppl(sym__2, d_43, f_43));
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL;
  if(match_cons(t, sym__2))
    {
      g_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_43), g_43);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm i_43 = NULL,l_43 = NULL;
  if(match_cons(t, sym__2))
    {
      i_43 = ATgetArgument(t, 0);
      l_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_43), (ATerm) ATmakeAppl(sym_Match_1, l_43));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,j_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_41;
  if(match_cons(t, sym_Build_1))
    {
      m_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_41;
  if(match_cons(t, sym_Op_2))
    {
      n_41 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_41;
  if(match_cons(t, sym_Seq_2))
    {
      q_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
      {
        ATerm e_42 = NULL;
        t = q_41;
        if(match_cons(t, sym_Match_1))
          {
            r_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_41;
        if(match_cons(t, sym_Op_2))
          {
            g_41 = ATgetArgument(t, 0);
            h_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_41;
        if((n_41 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, o_41, h_41);
        t = genzip_4_0(z_3, a_4, c_4, d_4, t);
        e_42 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, n_41, o_41)), j_41));
      }
    }
  else
    {
      ATerm x_42 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          q_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_41;
      if(match_cons(t, sym_Op_2))
        {
          r_41 = ATgetArgument(t, 0);
          s_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_41;
      if((n_41 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, o_41, s_41);
      t = genzip_4_0(e_4, f_4, g_4, h_4, t);
      x_42 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_42), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, n_41, o_41)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm b_45 = NULL,e_45 = NULL,f_45 = NULL,k_45 = NULL,l_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
  e_45 = t;
  if(match_cons(t, sym_Seq_2))
    {
      f_45 = ATgetArgument(t, 0);
      o_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_45;
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
        ATerm w_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_45;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            p_45 = ATgetArgument(t, 0);
            {
              ATerm z_22 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(y_22);
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
            b_45 = ATgetArgument(t, 0);
            {
              ATerm a_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, b_45);
        {
          ATerm c_23 = t;
          if((PushChoice() == 0))
            {
              ATerm b_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  b_23 = ATgetArgument(t, 0);
                  if((b_23 != ATgetArgument(t, 1)))
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
              t = c_23;
            }
        }
        t = term_d_23;
      }
    else
      {
        t = x_22;
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
              ATerm e_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_45, q_45);
        {
          ATerm f_23 = t;
          if((PushChoice() == 0))
            {
              ATerm m_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_23 = ATgetArgument(t, 0);
                  if((m_23 != ATgetArgument(t, 1)))
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
              t = f_23;
            }
        }
        t = term_d_23;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  static ATerm u_45 (ATerm t)
  {
    ATerm g_23 = t;
    int h_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_104(t);
        LocalPopChoice(h_23);
      }
    else
      {
        t = g_23;
        t = SRTS_one(u_45, t);
      }
    return(t);
  }
  t = u_45(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm m_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,l_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL;
  m_47 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_47 = ATgetArgument(t, 0);
      l_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_48;
  if(match_cons(t, sym_Let_2))
    {
      t_48 = ATgetArgument(t, 0);
      v_48 = ATgetArgument(t, 1);
      {
        ATerm c_49 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, o_47, t_48);
        t = conc_0_0(t);
        c_49 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, c_49, v_48);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          t_48 = ATgetArgument(t, 0);
          v_48 = ATgetArgument(t, 1);
          w_48 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_47 = ATgetFirst((ATermList) t);
          h_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_47;
      if(match_cons(t, sym_SDefT_4))
        {
          q_47 = ATgetArgument(t, 0);
          r_47 = ATgetArgument(t, 1);
          f_48 = ATgetArgument(t, 2);
          g_48 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = r_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_48;
      if(match_cons(t, sym_SVar_1))
        {
          u_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_48;
      if((q_47 != t))
        {
          _fail(t);
        }
      t = g_48;
      {
        ATerm i_23 = t;
        if((PushChoice() == 0))
          {
            static ATerm i_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm j_23 = ATgetArgument(t, 0);
                  if(match_cons(j_23, sym_SVar_1))
                    {
                      if((q_47 != ATgetArgument(j_23, 0)))
                        {
                          _fail(ATgetArgument(j_23, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm k_23 = ATgetArgument(t, 1);
                    if(((ATgetType(k_23) != AT_LIST) || !(ATisEmpty(k_23))))
                      _fail(t);
                  }
                  {
                    ATerm l_23 = ATgetArgument(t, 2);
                    if(((ATgetType(l_23) != AT_LIST) || !(ATisEmpty(l_23))))
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
            t = i_23;
          }
      }
      t = g_48;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm r_49 = NULL,t_49 = NULL,d_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL,l_50 = NULL,m_50 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      l_50 = ATgetArgument(t, 0);
      t = l_50;
      if(match_cons(t, sym_Seq_2))
        {
          j_50 = ATgetArgument(t, 0);
          t_49 = ATgetArgument(t, 1);
          t = j_50;
          if(match_cons(t, sym_Where_1))
            {
              r_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_49;
          if(match_cons(t, sym_Seq_2))
            {
              d_50 = ATgetArgument(t, 0);
              i_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_50;
          if(match_cons(t, sym_Build_1))
            {
              h_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, r_49, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_50), i_50)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              j_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, j_50);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          l_50 = ATgetArgument(t, 0);
          t = l_50;
          if(match_cons(t, sym_Test_1))
            {
              j_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, j_50);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              l_50 = ATgetArgument(t, 0);
              t = l_50;
              if(match_cons(t, sym_Not_1))
                {
                  j_50 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, j_50);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  l_50 = ATgetArgument(t, 0);
                  m_50 = ATgetArgument(t, 1);
                  t = m_50;
                  if((l_50 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      l_50 = ATgetArgument(t, 0);
                      m_50 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_50;
                  if((l_50 != t))
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
  ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      a_52 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
      t = a_52;
      if(match_cons(t, sym_LChoice_2))
        {
          b_52 = ATgetArgument(t, 0);
          c_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, b_52, (ATerm) ATmakeAppl(sym_LChoice_2, c_52, d_52));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          a_52 = ATgetArgument(t, 0);
          d_52 = ATgetArgument(t, 1);
          t = a_52;
          if(match_cons(t, sym_Seq_2))
            {
              b_52 = ATgetArgument(t, 0);
              c_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, b_52, (ATerm) ATmakeAppl(sym_Seq_2, c_52, d_52));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              a_52 = ATgetArgument(t, 0);
              d_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_52;
          if(match_cons(t, sym_Choice_2))
            {
              b_52 = ATgetArgument(t, 0);
              c_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, b_52, (ATerm) ATmakeAppl(sym_Choice_2, c_52, d_52));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL,i_54 = NULL,k_54 = NULL,r_54 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      k_54 = ATgetArgument(t, 0);
      r_54 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, k_54, r_54);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          k_54 = ATgetArgument(t, 0);
          t = k_54;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_54 = ATgetFirst((ATermList) t);
              h_54 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, g_54, (ATerm) ATmakeAppl(sym_LChoices_1, h_54));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_d_23;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              k_54 = ATgetArgument(t, 0);
              t = k_54;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_54 = ATgetFirst((ATermList) t);
                  h_54 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, g_54, (ATerm) ATmakeAppl(sym_Choices_1, h_54));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_d_23;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  k_54 = ATgetArgument(t, 0);
                  t = k_54;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_54 = ATgetFirst((ATermList) t);
                      h_54 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_54, (ATerm) ATmakeAppl(sym_Seqs_1, h_54));
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
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      k_54 = ATgetArgument(t, 0);
                      r_54 = ATgetArgument(t, 1);
                      i_54 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, r_54, (ATerm) ATmakeAppl(sym_Op_2, term_o_23, (ATerm) ATinsert(ATinsert(ATempty, i_54), k_54)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          k_54 = ATgetArgument(t, 0);
                          r_54 = ATgetArgument(t, 1);
                          i_54 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, i_54)), k_54), (ATerm) ATmakeAppl(sym_Build_1, r_54)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              k_54 = ATgetArgument(t, 0);
                              r_54 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_54, (ATerm) ATmakeAppl(sym_Match_1, r_54));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  k_54 = ATgetArgument(t, 0);
                                  r_54 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_54), r_54);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      k_54 = ATgetArgument(t, 0);
                                      r_54 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_54), k_54);
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
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      x_57 = ATgetArgument(t, 0);
      t = x_57;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_d_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          x_57 = ATgetArgument(t, 0);
          t = x_57;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_n_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              x_57 = ATgetArgument(t, 0);
              y_57 = ATgetArgument(t, 1);
              t = x_57;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_d_23;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  x_57 = ATgetArgument(t, 0);
                  y_57 = ATgetArgument(t, 1);
                  t = y_57;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_d_23;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      x_57 = ATgetArgument(t, 0);
                      y_57 = ATgetArgument(t, 1);
                      t = y_57;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_d_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          x_57 = ATgetArgument(t, 0);
                          t = x_57;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_d_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              x_57 = ATgetArgument(t, 0);
                              t = x_57;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_d_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  x_57 = ATgetArgument(t, 0);
                                  y_57 = ATgetArgument(t, 1);
                                  t = y_57;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_d_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      x_57 = ATgetArgument(t, 0);
                                      y_57 = ATgetArgument(t, 1);
                                      t = y_57;
                                      t = fetch_1_0(j_4, t);
                                      t = term_d_23;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          x_57 = ATgetArgument(t, 0);
                                          y_57 = ATgetArgument(t, 1);
                                          t = y_57;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = x_57;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = y_57;
                                                }
                                              else
                                                {
                                                  t = x_57;
                                                }
                                            }
                                          else
                                            {
                                              t = x_57;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = y_57;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              x_57 = ATgetArgument(t, 0);
                                              y_57 = ATgetArgument(t, 1);
                                              t = y_57;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = x_57;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = y_57;
                                                    }
                                                  else
                                                    {
                                                      t = x_57;
                                                    }
                                                }
                                              else
                                                {
                                                  t = x_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = y_57;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  x_57 = ATgetArgument(t, 0);
                                                  t = x_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_d_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      x_57 = ATgetArgument(t, 0);
                                                      y_57 = ATgetArgument(t, 1);
                                                      z_57 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_57, y_57);
                                                }
                                            }
                                        }
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
  ATerm q_59 = NULL,s_59 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      s_59 = ATgetArgument(t, 0);
      t = s_59;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_n_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          s_59 = ATgetArgument(t, 0);
          t = s_59;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_d_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              s_59 = ATgetArgument(t, 0);
              q_59 = ATgetArgument(t, 1);
              t = q_59;
              if(match_cons(t, sym_Id_0))
                {
                  t = s_59;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = q_59;
                    }
                  else
                    {
                      t = s_59;
                    }
                }
              else
                {
                  t = s_59;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = q_59;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  s_59 = ATgetArgument(t, 0);
                  q_59 = ATgetArgument(t, 1);
                  t = s_59;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_n_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      s_59 = ATgetArgument(t, 0);
                      q_59 = ATgetArgument(t, 1);
                      t = q_59;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_n_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          s_59 = ATgetArgument(t, 0);
                          q_59 = ATgetArgument(t, 1);
                          t = q_59;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_n_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              s_59 = ATgetArgument(t, 0);
                              t = s_59;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_n_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  s_59 = ATgetArgument(t, 0);
                                  t = s_59;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_n_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      s_59 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_59;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_n_23;
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
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            {
              ATerm t_23 = t;
              int u_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(u_23);
                }
              else
                {
                  t = t_23;
                  {
                    ATerm v_23 = t;
                    int w_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(w_23);
                      }
                    else
                      {
                        t = v_23;
                        {
                          ATerm x_23 = t;
                          int y_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(y_23);
                            }
                          else
                            {
                              t = x_23;
                              {
                                ATerm z_23 = t;
                                int a_24 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_60 = NULL,t_60 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        s_60 = ATgetArgument(t, 0);
                                        t_60 = ATgetArgument(t, 1);
                                        t = s_60;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_60;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            s_60 = ATgetArgument(t, 0);
                                            t_60 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = s_60;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = t_60;
                                      }
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
                                          t = LetHoist_0_0(t);
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
                                                t = MisMatch_0_0(t);
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
                                                      t = BuildMatchFusion_0_0(t);
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
                                                            t = BuildBuild_0_0(t);
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
                                                                  t = BuildPrim_0_0(t);
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
                                                                        t = MatchIdem_0_0(t);
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
                                                                              t = BuildMatchIdem_0_0(t);
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
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(q_24);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_24;
                                                                                    {
                                                                                      ATerm g_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL;
                                                                                      i_61 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          j_61 = ATgetArgument(t, 0);
                                                                                          k_61 = ATgetArgument(t, 1);
                                                                                          t = j_61;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              g_61 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = i_61;
                                                                                          t = l_9(g_61, k_61, t);
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
  ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL;
  l_70 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = l_70;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = l_70;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              m_70 = ATgetArgument(t, 0);
              {
                ATerm e_28 = NULL,g_28 = NULL,i_3 = NULL;
                t = SSLgetAnnotations(l_70);
                e_28 = t;
                t = m_70;
                {
                  static ATerm y_30 (ATerm t)
                  {
                    ATerm t_30 = NULL,u_30 = NULL,x_30 = NULL;
                    t_30 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        u_30 = ATgetArgument(t, 0);
                        {
                          ATerm k_31 = NULL,d_3 = NULL;
                          t = SSLgetAnnotations(t_30);
                          k_31 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, u_30);
                          d_3 = t;
                          t = SSLsetAnnotations(d_3, k_31);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            u_30 = ATgetArgument(t, 0);
                            {
                              ATerm s_31 = NULL,e_3 = NULL;
                              t = SSLgetAnnotations(t_30);
                              s_31 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, u_30);
                              e_3 = t;
                              t = SSLsetAnnotations(e_3, s_31);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                u_30 = ATgetArgument(t, 0);
                                {
                                  ATerm e_32 = NULL,f_3 = NULL;
                                  t = SSLgetAnnotations(t_30);
                                  e_32 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, u_30);
                                  f_3 = t;
                                  t = SSLsetAnnotations(f_3, e_32);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    u_30 = ATgetArgument(t, 0);
                                    {
                                      ATerm m_32 = NULL,g_3 = NULL;
                                      t = SSLgetAnnotations(t_30);
                                      m_32 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, u_30);
                                      g_3 = t;
                                      t = SSLsetAnnotations(g_3, m_32);
                                    }
                                  }
                                else
                                  {
                                    ATerm v_32 = NULL,y_32 = NULL,h_3 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        u_30 = ATgetArgument(t, 0);
                                        x_30 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(t_30);
                                    v_32 = t;
                                    t = x_30;
                                    t = map_1_0(y_30, t);
                                    y_32 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, u_30, y_32);
                                    h_3 = t;
                                    t = SSLsetAnnotations(h_3, v_32);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = y_30(t);
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
                  m_70 = ATgetArgument(t, 0);
                  n_70 = ATgetArgument(t, 1);
                  {
                    ATerm h_33 = NULL,v_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,d_34 = NULL,e_34 = NULL,l_3 = NULL,k_3 = NULL,j_3 = NULL;
                    t = SSLgetAnnotations(l_70);
                    h_33 = t;
                    t = m_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        d_34 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(m_70);
                    z_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_34);
                    j_3 = t;
                    t = SSLsetAnnotations(j_3, z_33);
                    e_34 = t;
                    t = n_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        x_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(n_70);
                    v_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_33);
                    k_3 = t;
                    t = SSLsetAnnotations(k_3, v_33);
                    y_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, e_34, y_33);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, h_33);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      m_70 = ATgetArgument(t, 0);
                      {
                        ATerm l_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,n_3 = NULL,m_3 = NULL;
                        t = SSLgetAnnotations(l_70);
                        l_34 = t;
                        t = m_70;
                        if(match_cons(t, sym_Var_1))
                          {
                            o_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(m_70);
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
                          m_70 = ATgetArgument(t, 0);
                          n_70 = ATgetArgument(t, 1);
                          {
                            ATerm y_34 = NULL,o_3 = NULL;
                            t = SSLgetAnnotations(l_70);
                            y_34 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, m_70, n_70);
                            o_3 = t;
                            t = SSLsetAnnotations(o_3, y_34);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              m_70 = ATgetArgument(t, 0);
                              n_70 = ATgetArgument(t, 1);
                              k_70 = ATgetArgument(t, 2);
                              {
                                ATerm z_35 = NULL,p_3 = NULL;
                                t = SSLgetAnnotations(l_70);
                                z_35 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, m_70, n_70, k_70);
                                p_3 = t;
                                t = SSLsetAnnotations(p_3, z_35);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  m_70 = ATgetArgument(t, 0);
                                  n_70 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_36 = NULL,u_36 = NULL,v_36 = NULL,q_3 = NULL;
                                    t = SSLgetAnnotations(l_70);
                                    p_36 = t;
                                    t = m_70;
                                    t = simple_strategy_0_0(t);
                                    u_36 = t;
                                    t = n_70;
                                    t = simple_strategy_0_0(t);
                                    v_36 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, u_36, v_36);
                                    q_3 = t;
                                    t = SSLsetAnnotations(q_3, p_36);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      m_70 = ATgetArgument(t, 0);
                                      {
                                        ATerm i_37 = NULL,k_37 = NULL,r_3 = NULL;
                                        t = SSLgetAnnotations(l_70);
                                        i_37 = t;
                                        t = m_70;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        k_37 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, k_37);
                                        r_3 = t;
                                        t = SSLsetAnnotations(r_3, i_37);
                                      }
                                    }
                                  else
                                    {
                                      ATerm t_37 = NULL,w_37 = NULL,s_3 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          m_70 = ATgetArgument(t, 0);
                                          n_70 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(l_70);
                                      t_37 = t;
                                      t = n_70;
                                      t = simple_strategy_0_0(t);
                                      w_37 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, m_70, w_37);
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
static ATerm m_8 (ATerm o_117 (ATerm), ATerm n_52, ATerm m_52, ATerm t)
{
  static ATerm x_71 (ATerm t)
  {
    static ATerm y_71 (ATerm f_71, ATerm t)
    {
      ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,m_4 = NULL;
      t = f_71;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_71 = ATgetFirst((ATermList) t);
          i_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm k_4 (ATerm t)
        {
          t = m_52;
          return(t);
        }
        t = q_10(o_117, k_4, h_71, i_71, t);
      }
      t = f_71;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_71 = ATgetFirst((ATermList) t);
          l_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_71);
      j_71 = t;
      t = l_71;
      t = x_71(t);
      m_71 = t;
      t = (ATerm) ATinsert(CheckATermList(m_71), k_71);
      m_4 = t;
      t = SSLsetAnnotations(m_4, j_71);
      return(t);
    }
    ATerm n_71 = NULL,p_71 = NULL;
    n_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_71;
      }
    else
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_24 = ATgetFirst((ATermList) t);
                p_71 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(s_24);
            {
              ATerm u_24 = t;
              int v_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_71(n_71, t);
                  LocalPopChoice(v_24);
                }
              else
                {
                  t = u_24;
                  t = p_71;
                  t = x_71(t);
                }
            }
          }
        else
          {
            t = r_24;
            t = y_71(n_71, t);
          }
      }
    return(t);
  }
  t = n_52;
  t = x_71(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm l_134 (ATerm), ATerm m_134 (ATerm), ATerm n_134 (ATerm), ATerm t)
{
  ATerm w_24 = t;
  int x_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(l_134, m_134, n_134, t);
      LocalPopChoice(x_24);
    }
  else
    {
      t = w_24;
      {
        ATerm s_72 = NULL,t_72 = NULL,u_72 = NULL,u_38 = NULL,d_39 = NULL,f_39 = NULL,r_4 = NULL;
        s_72 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            t_72 = ATgetArgument(t, 0);
            u_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_72);
        u_38 = t;
        t = t_72;
        t = n_134(t);
        d_39 = t;
        t = u_72;
        t = l_134(t);
        f_39 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, d_39, f_39);
        r_4 = t;
        t = SSLsetAnnotations(r_4, u_38);
      }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm n_73 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_73);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            {
              ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_73 = ATgetArgument(t, 0);
                  q_73 = ATgetArgument(t, 1);
                  r_73 = ATgetArgument(t, 2);
                  s_73 = ATgetArgument(t, 3);
                  t = r_73;
                  t = map_1_0(o_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_73 = ATgetArgument(t, 0);
                      q_73 = ATgetArgument(t, 1);
                      r_73 = ATgetArgument(t, 2);
                      s_73 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_73;
                  t = map_1_0(s_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm z_73 = NULL;
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_73 = ATgetArgument(t, 0);
          {
            ATerm e_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_25);
      t = z_73;
    }
  else
    {
      t = c_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_73;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm k_74 = NULL;
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_74 = ATgetArgument(t, 0);
          {
            ATerm h_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_25);
      t = k_74;
    }
  else
    {
      t = f_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_74;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm o_74 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_74);
  return(t);
}
static ATerm f_5 (ATerm t)
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
              ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_74 = ATgetArgument(t, 0);
                  r_74 = ATgetArgument(t, 1);
                  s_74 = ATgetArgument(t, 2);
                  t_74 = ATgetArgument(t, 3);
                  t = s_74;
                  t = map_1_0(g_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_74 = ATgetArgument(t, 0);
                      r_74 = ATgetArgument(t, 1);
                      s_74 = ATgetArgument(t, 2);
                      t_74 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_74;
                  t = map_1_0(i_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
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
static ATerm i_5 (ATerm t)
{
  ATerm l_75 = NULL;
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_75 = ATgetArgument(t, 0);
          {
            ATerm r_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_25);
      t = l_75;
    }
  else
    {
      t = p_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_75 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_75;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm l_73 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      l_73 = ATgetArgument(t, 0);
      t = l_73;
      t = free_vars_3_0(l_4, n_4, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          l_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_73;
      t = free_vars_3_0(u_4, f_5, tboundin_3_0, t);
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm g_102 (ATerm), ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL;
  f_81 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_81 = ATgetArgument(t, 0);
      c_81 = ATgetArgument(t, 1);
      {
        ATerm p_39 = NULL,u_39 = NULL,z_39 = NULL,v_4 = NULL;
        t = SSLgetAnnotations(f_81);
        p_39 = t;
        t = g_81;
        t = i_102(t);
        u_39 = t;
        t = c_81;
        t = g_102(t);
        z_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, u_39, z_39);
        v_4 = t;
        t = SSLsetAnnotations(v_4, p_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          g_81 = ATgetArgument(t, 0);
          c_81 = ATgetArgument(t, 1);
          d_81 = ATgetArgument(t, 2);
          e_81 = ATgetArgument(t, 3);
          {
            ATerm p_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(f_81);
            p_40 = t;
            t = g_81;
            t = i_102(t);
            u_40 = t;
            t = c_81;
            t = i_102(t);
            v_40 = t;
            t = d_81;
            t = i_102(t);
            w_40 = t;
            t = e_81;
            t = g_102(t);
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
              g_81 = ATgetArgument(t, 0);
              c_81 = ATgetArgument(t, 1);
              d_81 = ATgetArgument(t, 2);
              e_81 = ATgetArgument(t, 3);
              {
                ATerm v_41 = NULL,f_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,x_4 = NULL;
                t = SSLgetAnnotations(f_81);
                v_41 = t;
                t = g_81;
                t = i_102(t);
                f_42 = t;
                t = c_81;
                t = i_102(t);
                i_42 = t;
                t = d_81;
                t = i_102(t);
                j_42 = t;
                t = e_81;
                t = g_102(t);
                k_42 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, f_42, i_42, j_42, k_42);
                x_4 = t;
                t = SSLsetAnnotations(x_4, v_41);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  g_81 = ATgetArgument(t, 0);
                  {
                    ATerm k_43 = NULL,n_43 = NULL,a_5 = NULL;
                    t = SSLgetAnnotations(f_81);
                    k_43 = t;
                    t = g_81;
                    t = g_102(t);
                    n_43 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, n_43);
                    a_5 = t;
                    t = SSLsetAnnotations(a_5, k_43);
                  }
                }
              else
                {
                  ATerm v_43 = NULL,x_43 = NULL,e_5 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      g_81 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_81);
                  v_43 = t;
                  t = g_81;
                  t = g_102(t);
                  x_43 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, x_43);
                  e_5 = t;
                  t = SSLsetAnnotations(e_5, v_43);
                }
            }
        }
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm d_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_82);
  return(t);
}
static ATerm m_5 (ATerm t)
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
              ATerm g_82 = NULL,i_82 = NULL,j_82 = NULL,n_82 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  g_82 = ATgetArgument(t, 0);
                  i_82 = ATgetArgument(t, 1);
                  j_82 = ATgetArgument(t, 2);
                  n_82 = ATgetArgument(t, 3);
                  t = j_82;
                  t = map_1_0(n_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_82 = ATgetArgument(t, 0);
                      i_82 = ATgetArgument(t, 1);
                      j_82 = ATgetArgument(t, 2);
                      n_82 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_82;
                  t = map_1_0(o_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm v_82 = NULL;
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_82 = ATgetArgument(t, 0);
          {
            ATerm y_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_25);
      t = v_82;
    }
  else
    {
      t = w_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_82;
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm g_83 = NULL;
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_83 = ATgetArgument(t, 0);
          {
            ATerm b_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_26);
      t = g_83;
    }
  else
    {
      t = z_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_83;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_81 = NULL,z_81 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      z_81 = ATgetArgument(t, 0);
      t = z_81;
      if(match_cons(t, sym_Rule_3))
        {
          t_81 = ATgetArgument(t, 0);
          {
            ATerm c_26 = ATgetArgument(t, 1);
          }
          {
            ATerm d_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_81;
      t = free_vars_3_0(l_5, m_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          z_81 = ATgetArgument(t, 0);
          {
            ATerm e_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_81;
    }
  return(t);
}
static ATerm r_8 (ATerm q_117 (ATerm), ATerm p_52, ATerm o_52, ATerm t)
{
  static ATerm c_84 (ATerm t)
  {
    ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL;
    x_83 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_83;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_83 = ATgetFirst((ATermList) t);
            z_83 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_26 = t;
          int g_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_83;
              {
                static ATerm p_5 (ATerm t)
                {
                  t = o_52;
                  return(t);
                }
                t = q_10(q_117, p_5, y_83, z_83, t);
              }
              t = c_84(t);
              LocalPopChoice(g_26);
            }
          else
            {
              t = f_26;
              {
                ATerm e_44 = NULL,j_44 = NULL,y_5 = NULL;
                t = SSLgetAnnotations(x_83);
                e_44 = t;
                t = z_83;
                t = c_84(t);
                j_44 = t;
                t = (ATerm) ATinsert(CheckATermList(j_44), y_83);
                y_5 = t;
                t = SSLsetAnnotations(y_5, e_44);
              }
            }
        }
      }
    return(t);
  }
  t = p_52;
  t = c_84(t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if(((ATgetType(h_26) != AT_LIST) || !(ATisEmpty(h_26))))
        _fail(t);
      {
        ATerm i_26 = ATgetArgument(t, 1);
        if(((ATgetType(i_26) != AT_LIST) || !(ATisEmpty(i_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL,o_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
        {
          l_84 = ATgetFirst((ATermList) j_26);
          m_84 = (ATerm) ATgetNext((ATermList) j_26);
        }
      else
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
          {
            n_84 = ATgetFirst((ATermList) k_26);
            o_84 = (ATerm) ATgetNext((ATermList) k_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_84, n_84), (ATerm) ATmakeAppl(sym__2, m_84, o_84));
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm p_84 = NULL,q_84 = NULL;
  if(match_cons(t, sym__2))
    {
      p_84 = ATgetArgument(t, 0);
      q_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_84), p_84);
  return(t);
}
static ATerm t_8 (ATerm w_674, ATerm b_675, ATerm g_68, ATerm t)
{
  ATerm g_84 = NULL,h_84 = NULL,i_84 = NULL,j_84 = NULL;
  t = SSL_explode_term(b_675);
  if(match_cons(t, sym__2))
    {
      g_84 = ATgetArgument(t, 0);
      i_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_674);
  if(match_cons(t, sym__2))
    {
      if((g_84 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_84, i_84);
  t = genzip_4_0(q_5, r_5, s_5, _id, t);
  j_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_84, g_68);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t)
{
  static ATerm s_84 (ATerm t)
  {
    ATerm l_26 = t;
    int m_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_109(t);
        LocalPopChoice(m_26);
      }
    else
      {
        t = l_26;
        t = s_109(t);
        t = s_84(t);
      }
    return(t);
  }
  t = s_84(t);
  return(t);
}
ATerm for_3_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t)
{
  t = u_109(t);
  t = while_not_2_0(v_109, w_109, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm z_84 = NULL;
  z_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_84);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL,d_85 = NULL,e_85 = NULL,b_6 = NULL;
  e_85 = t;
  if(match_cons(t, sym__2))
    {
      b_85 = ATgetArgument(t, 0);
      d_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_85);
  a_85 = t;
  t = d_85;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_85, d_85);
  b_6 = t;
  t = SSLsetAnnotations(b_6, a_85);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL;
  y_85 = t;
  if(match_cons(t, sym__2))
    {
      z_85 = ATgetArgument(t, 0);
      a_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_86;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_86 = ATgetFirst((ATermList) t);
      c_86 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_86(z_85, a_86, y_85, t);
            LocalPopChoice(o_26);
          }
        else
          {
            t = n_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_85), b_86), c_86);
          }
      }
    }
  else
    {
      t = m_86(z_85, a_86, y_85, t);
    }
  return(t);
}
static ATerm m_86 (ATerm g_85, ATerm h_85, ATerm i_85, ATerm t)
{
  ATerm j_85 = NULL,m_85 = NULL,d_6 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  t = SSLgetAnnotations(i_85);
  j_85 = t;
  t = h_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_85 = ATgetFirst((ATermList) t);
      s_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_85;
  if(match_cons(t, sym__2))
    {
      q_85 = ATgetArgument(t, 0);
      r_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_85;
        if((q_85 != t))
          {
            _fail(t);
          }
        t = s_85;
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        t = h_85;
        t = t_8(q_85, r_85, s_85, t);
      }
  }
  m_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_85, m_85);
  d_6 = t;
  t = SSLsetAnnotations(d_6, j_85);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm l_86 = NULL;
  if(match_cons(t, sym__2))
    {
      l_86 = ATgetArgument(t, 0);
      if((l_86 != ATgetArgument(t, 1)))
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
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(t_5, u_5, v_5, t);
      LocalPopChoice(s_26);
    }
  else
    {
      t = r_26;
      {
        ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
        g_86 = t;
        if(match_cons(t, sym__2))
          {
            h_86 = ATgetArgument(t, 0);
            i_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_86;
        t = r_8(w_5, h_86, i_86, t);
      }
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  if(match_cons(t, sym__2))
    {
      i_45 = ATgetArgument(t, 0);
      j_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(e_6, i_45, j_45, t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm n_45 = NULL;
  if(match_cons(t, sym__2))
    {
      n_45 = ATgetArgument(t, 0);
      if((n_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm b_46 = NULL,c_46 = NULL;
  if(match_cons(t, sym__2))
    {
      b_46 = ATgetArgument(t, 0);
      c_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(j_6, b_46, c_46, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm d_46 = NULL;
  if(match_cons(t, sym__2))
    {
      d_46 = ATgetArgument(t, 0);
      if((d_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm a_87 (ATerm t)
  {
    ATerm t_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_124(t);
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
              ATerm o_86 = NULL,p_86 = NULL,s_44 = NULL,z_44 = NULL;
              o_86 = t;
              t = d_124(t);
              p_86 = t;
              t = o_86;
              {
                static ATerm x_5 (ATerm t)
                {
                  ATerm r_86 = NULL;
                  t = a_87(t);
                  r_86 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_86, p_86);
                  t = diff_0_0(t);
                  return(t);
                }
                t = e_124(x_5, a_87, z_5, t);
              }
              z_44 = t;
              t = SSL_explode_term(z_44);
              if(match_cons(t, sym__2))
                {
                  ATerm x_26 = ATgetArgument(t, 0);
                  s_44 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_44;
              t = foldr_3_0(a_6, c_6, _id, t);
              LocalPopChoice(w_26);
            }
          else
            {
              t = v_26;
              {
                ATerm w_45 = NULL,x_45 = NULL;
                x_45 = t;
                t = SSL_explode_term(x_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_26 = ATgetArgument(t, 0);
                    w_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_45;
                t = foldr_3_0(f_6, g_6, a_87, t);
              }
            }
        }
      }
    return(t);
  }
  t = a_87(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm q_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_46);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            {
              ATerm r_46 = NULL,s_46 = NULL,u_46 = NULL,v_46 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  u_46 = ATgetArgument(t, 0);
                  v_46 = ATgetArgument(t, 1);
                  r_46 = ATgetArgument(t, 2);
                  s_46 = ATgetArgument(t, 3);
                  t = r_46;
                  t = map_1_0(o_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_46 = ATgetArgument(t, 0);
                      v_46 = ATgetArgument(t, 1);
                      r_46 = ATgetArgument(t, 2);
                      s_46 = ATgetArgument(t, 3);
                      t = r_46;
                      t = map_1_0(r_6, t);
                    }
                  else
                    {
                      if(match_cons(t, sym_Matrix_2))
                        {
                          u_46 = ATgetArgument(t, 0);
                          v_46 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = u_46;
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm g_47 = NULL;
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_47 = ATgetArgument(t, 0);
          {
            ATerm f_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_27);
      t = g_47;
    }
  else
    {
      t = d_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_47;
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm w_47 = NULL;
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_47 = ATgetArgument(t, 0);
          {
            ATerm i_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_27);
      t = w_47;
    }
  else
    {
      t = g_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_47;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm d_48 = NULL;
  if(match_cons(t, sym__2))
    {
      d_48 = ATgetArgument(t, 0);
      if((d_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_27;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm e_48 = NULL,m_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_48 = ATgetFirst((ATermList) t);
      m_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_48, m_48);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm n_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if(match_cons(k_27, sym__2))
        {
          n_48 = ATgetArgument(k_27, 0);
          q_48 = ATgetArgument(k_27, 1);
        }
      else
        _fail(t);
      {
        ATerm l_27 = ATgetArgument(t, 1);
        if(match_cons(l_27, sym__2))
          {
            r_48 = ATgetArgument(l_27, 0);
            s_48 = ATgetArgument(l_27, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_48), n_48), (ATerm) ATinsert(CheckATermList(s_48), q_48));
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm z_48 = NULL;
  z_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, z_48, term_t_27), (ATerm) ATmakeAppl(sym_Var_1, z_48));
  return(t);
}
ATerm RowLet_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm k_89 = NULL,l_89 = NULL,m_89 = NULL;
  k_89 = t;
  if(match_cons(t, sym_Row_2))
    {
      l_89 = ATgetArgument(t, 0);
      m_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,p_46 = NULL;
        t = m_89;
        {
          ATerm a_28 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_28;
            }
        }
        t = new_0_0(t);
        i_46 = t;
        t = m_89;
        t = free_vars_3_0(l_6, m_6, tvars_matrix_boundin_3_0, t);
        p_46 = t;
        t = v_0(t);
        m_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_46, m_46);
        t = m_8(s_6, p_46, m_46, t);
        t = genzip_4_0(t_6, u_6, v_6, a_7, t);
        if(match_cons(t, sym__2))
          {
            k_46 = ATgetArgument(t, 0);
            l_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, i_46, (ATerm)ATempty, k_46, m_89)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, l_89, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_46), (ATerm)ATempty, l_46)));
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = m_89;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, l_89, m_89));
      }
  }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_27;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_90 = ATgetFirst((ATermList) t);
      e_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_90, e_90);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm f_90 = NULL,g_90 = NULL,k_90 = NULL,l_90 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_28 = ATgetArgument(t, 0);
      if(match_cons(b_28, sym__2))
        {
          f_90 = ATgetArgument(b_28, 0);
          g_90 = ATgetArgument(b_28, 1);
        }
      else
        _fail(t);
      {
        ATerm c_28 = ATgetArgument(t, 1);
        if(match_cons(c_28, sym__2))
          {
            k_90 = ATgetArgument(c_28, 0);
            l_90 = ATgetArgument(c_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_90), f_90), (ATerm) ATinsert(CheckATermList(l_90), g_90));
  return(t);
}
static ATerm v_8 (ATerm f_79, ATerm e_79, ATerm t)
{
  ATerm q_89 = NULL,t_89 = NULL,u_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL,c_90 = NULL,h_6 = NULL;
  t = e_79;
  {
    static ATerm j_7 (ATerm t)
    {
      static ATerm k_7 (ATerm t)
      {
        t = f_79;
        return(t);
      }
      t = RowLet_1_0(k_7, t);
      return(t);
    }
    t = genzip_4_0(b_7, c_7, f_7, j_7, t);
  }
  c_90 = t;
  if(match_cons(t, sym__2))
    {
      y_89 = ATgetArgument(t, 0);
      z_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_90);
  u_89 = t;
  t = y_89;
  t = concat_0_0(t);
  a_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_90, z_89);
  h_6 = t;
  t = SSLsetAnnotations(h_6, u_89);
  if(match_cons(t, sym__2))
    {
      q_89 = ATgetArgument(t, 0);
      t_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Let_2, q_89, (ATerm) ATmakeAppl(sym_Scope_2, f_79, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_d_28))), (ATerm) ATmakeAppl(sym_Matrix_1, t_89))));
  return(t);
}
static ATerm w_8 (ATerm y_114 (ATerm), ATerm b_48, ATerm z_47, ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  r_90 = t;
  t = y_114(t);
  m_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_90, b_48, z_47);
  t = n_11(m_90, b_48, z_47, t);
  {
    ATerm f_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_90 = NULL;
        t = term_i_28;
        u_90 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_90, term_i_28);
        t = m_11(m_90, u_90, t);
        LocalPopChoice(h_28);
      }
    else
      {
        t = f_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_90 = ATgetFirst((ATermList) t);
      q_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_28;
  s_90 = t;
  t = (ATerm) ATinsert(CheckATermList(q_90), (ATerm) ATinsert(CheckATermList(n_90), b_48));
  t_90 = t;
  t = SSL_table_put(m_90, s_90, t_90);
  t = r_90;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm j_28 = ATgetArgument(t, 0);
      if(((ATgetType(j_28) == AT_LIST) && !(ATisEmpty(j_28))))
        {
          ATerm k_28 = ATgetFirst((ATermList) j_28);
          if(match_cons(k_28, sym_As_2))
            {
              ATerm l_28 = ATgetArgument(k_28, 0);
              ATerm q_28 = ATgetArgument(k_28, 1);
              if(!(match_cons(q_28, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          w_90 = (ATerm) ATgetNext((ATermList) j_28);
        }
      else
        _fail(t);
      x_90 = ATgetArgument(t, 1);
      y_90 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, w_90, x_90, y_90);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm v_90 = NULL;
  t = filter_1_0(m_7, t);
  v_90 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, v_90);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm k_92 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, k_92), term_r_28);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = term_d_28;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL;
  if(match_cons(t, sym__2))
    {
      o_50 = ATgetArgument(t, 0);
      p_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(o_50, p_50, t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = term_z_16;
  return(t);
}
ATerm MatchCons_2_0 (ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm e_92 = NULL,g_92 = NULL,i_92 = NULL;
  e_92 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = e_92;
      t = t_0(t);
      t = map_1_0(o_7, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          g_92 = ATgetArgument(t, 0);
          t = e_92;
          t = r_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((g_92 != ATgetArgument(t, 0)))
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
              g_92 = ATgetArgument(t, 0);
              t = e_92;
              t = r_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((g_92 != ATgetArgument(t, 0)))
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
                  g_92 = ATgetArgument(t, 0);
                  t = e_92;
                  t = r_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((g_92 != ATgetArgument(t, 0)))
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
                  ATerm f_50 = NULL,g_50 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      g_92 = ATgetArgument(t, 0);
                      i_92 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_92;
                  t = r_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((g_92 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      f_50 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_92;
                  t = foldr_3_0(s_7, v_7, x_7, t);
                  g_50 = t;
                  t = f_50;
                  if((g_50 != t))
                    {
                      _fail(t);
                    }
                  t = i_92;
                }
            }
        }
    }
  return(t);
}
static ATerm y_8 (ATerm w_133 (ATerm), ATerm s_77, ATerm p_77, ATerm q_77, ATerm r_77, ATerm t)
{
  ATerm u_92 = NULL,v_92 = NULL;
  t = s_77;
  t = w_133(t);
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_92, q_77);
  t = conc_0_0(t);
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, p_77, v_92, r_77);
  return(t);
}
static ATerm z_8 (ATerm l_77, ATerm m_77, ATerm n_77, ATerm t)
{
  ATerm x_92 = NULL;
  t = l_77;
  {
    static ATerm z_7 (ATerm t)
    {
      ATerm y_92 = NULL,z_92 = NULL,a_93 = NULL,b_93 = NULL;
      static ATerm k_8 (ATerm t)
      {
        static ATerm l_8 (ATerm t)
        {
          t = m_77;
          return(t);
        }
        static ATerm s_8 (ATerm t)
        {
          t = n_77;
          return(t);
        }
        t = MatchCons_2_0(l_8, s_8, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm s_28 = ATgetArgument(t, 0);
          if(((ATgetType(s_28) == AT_LIST) && !(ATisEmpty(s_28))))
            {
              ATerm t_28 = ATgetFirst((ATermList) s_28);
              if(match_cons(t_28, sym_As_2))
                {
                  ATerm u_28 = ATgetArgument(t_28, 0);
                  y_92 = ATgetArgument(t_28, 1);
                }
              else
                _fail(t);
              z_92 = (ATerm) ATgetNext((ATermList) s_28);
            }
          else
            _fail(t);
          a_93 = ATgetArgument(t, 1);
          b_93 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_8(k_8, y_92, z_92, a_93, b_93, t);
      return(t);
    }
    t = filter_1_0(z_7, t);
  }
  x_92 = t;
  t = (ATerm) ATmakeAppl(sym_Alt_3, m_77, n_77, (ATerm) ATmakeAppl(sym_Matrix_1, x_92));
  return(t);
}
ATerm filter_1_0 (ATerm n_121 (ATerm), ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL,t_93 = NULL;
  r_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_93;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_93 = ATgetFirst((ATermList) t);
          t_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_28 = t;
        int x_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_51 = NULL,e_51 = NULL,f_51 = NULL,k_6 = NULL;
            t = SSLgetAnnotations(r_93);
            b_51 = t;
            t = s_93;
            t = n_121(t);
            e_51 = t;
            t = t_93;
            t = filter_1_0(n_121, t);
            f_51 = t;
            t = (ATerm) ATinsert(CheckATermList(f_51), e_51);
            k_6 = t;
            t = SSLsetAnnotations(k_6, b_51);
            LocalPopChoice(x_28);
          }
        else
          {
            t = v_28;
            t = t_93;
            t = filter_1_0(n_121, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  static ATerm o_94 (ATerm t)
  {
    ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL;
    t = r_116(t);
    l_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_94;
      }
    else
      {
        ATerm p_51 = NULL,s_51 = NULL,n_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_94 = ATgetFirst((ATermList) t);
            n_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_94);
        p_51 = t;
        t = n_94;
        t = o_94(t);
        s_51 = t;
        t = (ATerm) ATinsert(CheckATermList(s_51), m_94);
        n_6 = t;
        t = SSLsetAnnotations(n_6, p_51);
      }
    return(t);
  }
  t = o_94(t);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_d_28;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL;
  if(match_cons(t, sym__2))
    {
      q_95 = ATgetArgument(t, 0);
      r_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(q_95, r_95, t);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_z_16;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm u_95 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      if(match_cons(y_28, sym_Off_1))
        {
          u_95 = ATgetArgument(y_28, 0);
        }
      else
        _fail(t);
      {
        ATerm z_28 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, u_95);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL;
  u_94 = t;
  if(match_cons(t, sym_Row_3))
    {
      v_94 = ATgetArgument(t, 0);
      {
        ATerm a_29 = ATgetArgument(t, 1);
      }
      {
        ATerm b_29 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = v_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_94 = ATgetFirst((ATermList) t);
      {
        ATerm c_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_94;
  if(match_cons(t, sym_As_2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      y_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_94;
  if(match_cons(t, sym_Str_1))
    {
      z_94 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, z_94), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          z_94 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, z_94), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              z_94 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, z_94), (ATerm) ATempty);
            }
          else
            {
              ATerm j_95 = NULL,o_95 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  z_94 = ATgetArgument(t, 0);
                  a_95 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_95;
              t = foldr_3_0(u_8, x_8, a_9, t);
              j_95 = t;
              t = a_95;
              t = map_1_0(b_9, t);
              o_95 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, z_94, j_95), o_95);
            }
        }
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm c_96 = NULL,f_96 = NULL,g_96 = NULL;
  g_96 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_96 = ATgetFirst((ATermList) t);
      f_96 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_96 = NULL;
            t = f_96;
            {
              static ATerm g_9 (ATerm t)
              {
                ATerm g_29 = t;
                if((PushChoice() == 0))
                  {
                    if((c_96 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_29;
                  }
                return(t);
              }
              t = filter_1_0(g_9, t);
            }
            l_96 = t;
            t = (ATerm) ATinsert(CheckATermList(l_96), c_96);
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            t = g_96;
          }
      }
    }
  else
    {
      t = g_96;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(e_9, t);
  return(t);
}
static ATerm e_99 (ATerm d_97, ATerm t)
{
  ATerm e_97 = NULL;
  t = SSL_explode_string(d_97);
  {
    ATerm h_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_99 (ATerm t)
        {
          ATerm f_98 = NULL,i_98 = NULL,j_98 = NULL;
          f_98 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_98 = ATgetFirst((ATermList) t);
              j_98 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm j_29 = t;
            int k_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_52 = NULL,j_52 = NULL,p_6 = NULL;
                t = SSLgetAnnotations(f_98);
                g_52 = t;
                t = j_98;
                t = f_99(t);
                j_52 = t;
                t = (ATerm) ATinsert(CheckATermList(j_52), i_98);
                p_6 = t;
                t = SSLsetAnnotations(p_6, g_52);
                LocalPopChoice(k_29);
              }
            else
              {
                t = j_29;
                {
                  ATerm b_53 = NULL,q_6 = NULL;
                  t = SSLgetAnnotations(f_98);
                  b_53 = t;
                  t = i_98;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, i_98);
                  q_6 = t;
                  t = SSLsetAnnotations(q_6, b_53);
                }
              }
          }
          return(t);
        }
        t = f_99(t);
        LocalPopChoice(i_29);
      }
    else
      {
        t = h_29;
        t = (ATerm) ATempty;
      }
  }
  e_97 = t;
  t = SSL_implode_string(e_97);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm k_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,a_99 = NULL;
  a_99 = t;
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_98 = ATgetFirst((ATermList) t);
            {
              ATerm n_29 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_29);
        t = k_98;
        {
          ATerm o_29 = t;
          int p_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  p_98 = ATgetArgument(t, 0);
                  {
                    ATerm q_29 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm s_29 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(p_29);
              t = p_98;
              {
                ATerm t_29 = t;
                int u_29 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        q_98 = ATgetFirst((ATermList) t);
                        {
                          ATerm a_30 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_29);
                    t = q_98;
                    {
                      ATerm b_30 = t;
                      int c_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              r_98 = ATgetArgument(t, 0);
                              {
                                ATerm d_30 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(c_30);
                          t = r_98;
                          if(match_cons(t, sym_Off_1))
                            {
                              s_98 = ATgetArgument(t, 0);
                              t = s_98;
                            }
                          else
                            {
                              t = e_99(a_99, t);
                            }
                        }
                      else
                        {
                          t = b_30;
                          t = e_99(a_99, t);
                        }
                    }
                  }
                else
                  {
                    t = t_29;
                    t = e_99(a_99, t);
                  }
              }
            }
          else
            {
              t = o_29;
              t = e_99(a_99, t);
            }
        }
      }
    else
      {
        t = l_29;
        t = e_99(a_99, t);
      }
  }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      ATerm f_30 = ATgetArgument(t, 1);
      if(((ATgetType(f_30) != AT_LIST) || !(ATisEmpty(f_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm s_99 = NULL,t_99 = NULL,u_99 = NULL;
  if(match_cons(t, sym__2))
    {
      s_99 = ATgetArgument(t, 0);
      {
        ATerm g_30 = ATgetArgument(t, 1);
        if(((ATgetType(g_30) == AT_LIST) && !(ATisEmpty(g_30))))
          {
            t_99 = ATgetFirst((ATermList) g_30);
            u_99 = (ATerm) ATgetNext((ATermList) g_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_99, t_99), (ATerm) ATmakeAppl(sym__2, s_99, u_99));
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm v_99 = NULL,w_99 = NULL;
  if(match_cons(t, sym__2))
    {
      v_99 = ATgetArgument(t, 0);
      w_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_99), v_99);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL,z_99 = NULL;
  if(match_cons(t, sym__2))
    {
      x_99 = ATgetArgument(t, 0);
      {
        ATerm h_30 = ATgetArgument(t, 1);
        if(match_cons(h_30, sym__2))
          {
            y_99 = ATgetArgument(h_30, 0);
            z_99 = ATgetArgument(h_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_8(x_99, y_99, z_99, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_i_30;
  return(t);
}
static ATerm d_9 (ATerm y_78, ATerm t)
{
  ATerm k_99 = NULL,l_99 = NULL,n_99 = NULL,o_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL;
  t = y_78;
  t = get_path_0_0(t);
  k_99 = t;
  t = y_78;
  t = outedges_0_0(t);
  l_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_78, l_99);
  t = genzip_4_0(i_9, k_9, m_9, n_9, t);
  n_99 = t;
  t = y_78;
  t = default_state_0_0(t);
  o_99 = t;
  t = new_0_0(t);
  p_99 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, y_78);
  q_99 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_30, p_99);
  r_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, y_78), (ATerm) ATmakeAppl(sym_Defined_2, term_j_30, p_99));
  t = w_8(o_9, q_99, r_99, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, p_99, (ATerm)ATmakeAppl(sym_Var_1, k_99), n_99, o_99);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL,i_100 = NULL,j_100 = NULL,k_100 = NULL,l_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,x_100 = NULL,z_6 = NULL,y_6 = NULL,x_6 = NULL;
  x_100 = t;
  if(match_cons(t, sym_Row_3))
    {
      e_100 = ATgetArgument(t, 0);
      f_100 = ATgetArgument(t, 1);
      g_100 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_100);
  d_100 = t;
  t = e_100;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_100 = ATgetFirst((ATermList) t);
      j_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_100);
  h_100 = t;
  t = i_100;
  if(match_cons(t, sym_As_2))
    {
      n_100 = ATgetArgument(t, 0);
      o_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_100);
  l_100 = t;
  t = o_100;
  {
    ATerm k_30 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_30;
      }
  }
  p_100 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, n_100, p_100);
  x_6 = t;
  t = SSLsetAnnotations(x_6, l_100);
  q_100 = t;
  t = (ATerm) ATinsert(CheckATermList(j_100), q_100);
  y_6 = t;
  t = SSLsetAnnotations(y_6, h_100);
  k_100 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, k_100, f_100, g_100);
  z_6 = t;
  t = SSLsetAnnotations(z_6, d_100);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm y_100 = NULL,z_100 = NULL,a_101 = NULL,b_101 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      y_100 = ATgetArgument(t, 0);
      {
        ATerm l_30 = ATgetArgument(t, 1);
        if(((ATgetType(l_30) == AT_LIST) && !(ATisEmpty(l_30))))
          {
            z_100 = ATgetFirst((ATermList) l_30);
            a_101 = (ATerm) ATgetNext((ATermList) l_30);
          }
        else
          _fail(t);
      }
      b_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(y_100), z_100), a_101, b_101);
  return(t);
}
static ATerm f_9 (ATerm o_78, ATerm t)
{
  ATerm c_100 = NULL;
  t = o_78;
  {
    ATerm m_30 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(p_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_30;
      }
  }
  t = o_78;
  t = map_1_0(s_9, t);
  c_100 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, c_100);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL,j_101 = NULL,k_101 = NULL,m_101 = NULL,n_101 = NULL,q_101 = NULL,r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,h_7 = NULL,g_7 = NULL,d_7 = NULL;
  v_101 = t;
  if(match_cons(t, sym_Row_3))
    {
      f_101 = ATgetArgument(t, 0);
      g_101 = ATgetArgument(t, 1);
      j_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_101);
  e_101 = t;
  t = g_101;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_101 = ATgetFirst((ATermList) t);
      q_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_101);
  m_101 = t;
  t = n_101;
  if(match_cons(t, sym_As_2))
    {
      s_101 = ATgetArgument(t, 0);
      t_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_101);
  r_101 = t;
  t = t_101;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, s_101, t_101);
  d_7 = t;
  t = SSLsetAnnotations(d_7, r_101);
  u_101 = t;
  t = (ATerm) ATinsert(CheckATermList(q_101), u_101);
  g_7 = t;
  t = SSLsetAnnotations(g_7, m_101);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_30 = ATgetFirst((ATermList) t);
      k_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, f_101, k_101, j_101);
  h_7 = t;
  t = SSLsetAnnotations(h_7, e_101);
  return(t);
}
static ATerm h_9 (ATerm m_78, ATerm t)
{
  ATerm c_101 = NULL;
  t = m_78;
  t = map_1_0(t_9, t);
  c_101 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, c_101);
  return(t);
}
ATerm repeat_2_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t)
{
  static ATerm w_101 (ATerm t)
  {
    ATerm o_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_109(t);
        t = w_101(t);
        LocalPopChoice(p_30);
      }
    else
      {
        t = o_30;
        t = b_109(t);
      }
    return(t);
  }
  t = w_101(t);
  return(t);
}
static ATerm j_9 (ATerm o_48, ATerm p_48, ATerm t)
{
  ATerm y_101 = NULL,z_101 = NULL;
  z_101 = t;
  {
    ATerm q_30 = t;
    int r_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
        t = m_11(o_48, p_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_30 = ATgetFirst((ATermList) t);
            y_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_30);
        t = SSL_table_put(o_48, p_48, y_101);
        t = (ATerm) ATmakeAppl(sym__3, o_48, p_48, y_101);
      }
    else
      {
        t = q_30;
        t = SSL_table_remove(o_48, p_48);
        t = (ATerm) ATmakeAppl(sym__2, o_48, p_48);
      }
  }
  t = z_101;
  return(t);
}
ATerm end_scope_1_0 (ATerm v_114 (ATerm), ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL,d_102 = NULL,e_102 = NULL;
  d_102 = t;
  t = v_114(t);
  c_102 = t;
  {
    ATerm w_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_102 = NULL;
        t = term_i_28;
        n_102 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_102, term_i_28);
        t = m_11(c_102, n_102, t);
        LocalPopChoice(z_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_102 = ATgetFirst((ATermList) t);
      a_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_i_28;
  e_102 = t;
  t = SSL_table_put(c_102, e_102, a_102);
  t = b_102;
  {
    static ATerm u_9 (ATerm t)
    {
      ATerm o_102 = NULL;
      o_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_102, o_102);
      t = j_9(c_102, o_102, t);
      return(t);
    }
    t = map_1_0(u_9, t);
  }
  t = d_102;
  return(t);
}
ATerm restore_always_2_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_106(t);
      t = n_106(t);
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      t = n_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_114 (ATerm), ATerm t)
{
  ATerm q_102 = NULL,t_102 = NULL,w_102 = NULL,x_102 = NULL,y_102 = NULL;
  t_102 = t;
  t = u_114(t);
  q_102 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_102, term_i_28);
  {
    ATerm c_31 = t;
    int d_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_103 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_31 = ATgetArgument(t, 0);
            ATerm f_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_28;
        l_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_102, term_i_28);
        t = m_11(q_102, l_103, t);
        LocalPopChoice(d_31);
      }
    else
      {
        t = c_31;
        t = (ATerm) ATempty;
      }
  }
  w_102 = t;
  t = term_i_28;
  x_102 = t;
  t = (ATerm) ATinsert(CheckATermList(w_102), (ATerm) ATempty);
  y_102 = t;
  t = SSL_table_put(q_102, x_102, y_102);
  t = t_102;
  return(t);
}
ATerm scope_2_0 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm t)
{
  static ATerm v_9 (ATerm t)
  {
    t = end_scope_1_0(w_114, t);
    return(t);
  }
  t = begin_scope_1_0(w_114, t);
  t = restore_always_2_0(x_114, v_9, t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  static ATerm s_104 (ATerm t)
  {
    ATerm p_104 = NULL,q_104 = NULL,r_104 = NULL;
    r_104 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_104 = ATgetFirst((ATermList) t);
        q_104 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_53 = NULL,n_53 = NULL,n_7 = NULL;
          t = SSLgetAnnotations(r_104);
          k_53 = t;
          t = q_104;
          t = s_104(t);
          n_53 = t;
          t = (ATerm) ATinsert(CheckATermList(n_53), p_104);
          n_7 = t;
          t = SSLsetAnnotations(n_7, k_53);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_104;
        t = y_115(t);
      }
    return(t);
  }
  t = s_104(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_103 = NULL,q_103 = NULL,r_103 = NULL;
  p_103 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_103;
    }
  else
    {
      static ATerm y_9 (ATerm t)
      {
        t = not_null(r_103);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_103 = ATgetFirst((ATermList) t);
          if(((r_103 != NULL) && (r_103 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_103;
      t = at_end_1_0(y_9, t);
    }
  return(t);
}
static ATerm k_105 (ATerm w_104, ATerm t)
{
  ATerm x_104 = NULL;
  t = SSL_explode_term(w_104);
  if(match_cons(t, sym__2))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_104;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_105 = NULL,e_105 = NULL,f_105 = NULL;
  f_105 = t;
  if(match_cons(t, sym__2))
    {
      b_105 = ATgetArgument(t, 0);
      e_105 = ATgetArgument(t, 1);
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_10 (ATerm t)
            {
              t = e_105;
              return(t);
            }
            t = b_105;
            t = at_end_1_0(b_10, t);
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            t = k_105(f_105, t);
          }
      }
    }
  else
    {
      t = k_105(f_105, t);
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm z_106 = NULL;
  if(match_cons(t, sym__2))
    {
      z_106 = ATgetArgument(t, 0);
      if((z_106 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm h_107 = NULL;
  if(match_cons(t, sym__2))
    {
      h_107 = ATgetArgument(t, 0);
      if((h_107 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm o_107 = NULL;
  if(match_cons(t, sym__2))
    {
      o_107 = ATgetArgument(t, 0);
      if((o_107 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm b_108 = NULL;
  if(match_cons(t, sym__2))
    {
      b_108 = ATgetArgument(t, 0);
      if((b_108 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm k_108 = NULL;
  if(match_cons(t, sym__2))
    {
      k_108 = ATgetArgument(t, 0);
      if((k_108 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm r_108 = NULL;
  if(match_cons(t, sym__2))
    {
      r_108 = ATgetArgument(t, 0);
      if((r_108 != ATgetArgument(t, 1)))
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
  ATerm c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL,h_106 = NULL,i_106 = NULL,j_106 = NULL,k_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL,r_106 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      h_106 = ATgetArgument(t, 0);
      r_106 = ATgetArgument(t, 1);
      t = h_106;
      if(match_cons(t, sym_Matrix_2))
        {
          i_106 = ATgetArgument(t, 0);
          j_106 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_106;
      if(match_cons(t, sym_Choice_2))
        {
          e_106 = ATgetArgument(t, 0);
          f_106 = ATgetArgument(t, 1);
          {
            ATerm x_106 = NULL,y_106 = NULL;
            t = e_106;
            if(match_cons(t, sym_Matrix_2))
              {
                c_106 = ATgetArgument(t, 0);
                d_106 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, i_106, c_106);
            t = r_10(g_10, i_106, c_106, t);
            x_106 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_106, d_106);
            t = conc_0_0(t);
            y_106 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, x_106, y_106), f_106);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              e_106 = ATgetArgument(t, 0);
              f_106 = ATgetArgument(t, 1);
              {
                ATerm f_107 = NULL,g_107 = NULL;
                t = e_106;
                if(match_cons(t, sym_Matrix_2))
                  {
                    c_106 = ATgetArgument(t, 0);
                    d_106 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, i_106, c_106);
                t = r_10(i_10, i_106, c_106, t);
                f_107 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_106, d_106);
                t = conc_0_0(t);
                g_107 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, f_107, g_107), f_106);
              }
            }
          else
            {
              ATerm m_107 = NULL,n_107 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  e_106 = ATgetArgument(t, 0);
                  f_106 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, i_106, e_106);
              t = r_10(j_10, i_106, e_106, t);
              m_107 = t;
              t = (ATerm) ATmakeAppl(sym__2, j_106, f_106);
              t = conc_0_0(t);
              n_107 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, m_107, n_107);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          h_106 = ATgetArgument(t, 0);
          r_106 = ATgetArgument(t, 1);
          t = h_106;
          if(match_cons(t, sym_Matrix_2))
            {
              i_106 = ATgetArgument(t, 0);
              j_106 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_106;
          if(match_cons(t, sym_LChoice_2))
            {
              e_106 = ATgetArgument(t, 0);
              f_106 = ATgetArgument(t, 1);
              {
                ATerm z_107 = NULL,a_108 = NULL;
                t = e_106;
                if(match_cons(t, sym_Matrix_2))
                  {
                    c_106 = ATgetArgument(t, 0);
                    d_106 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, i_106, c_106);
                t = r_10(k_10, i_106, c_106, t);
                z_107 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_106, d_106);
                t = conc_0_0(t);
                a_108 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, z_107, a_108), f_106);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  e_106 = ATgetArgument(t, 0);
                  f_106 = ATgetArgument(t, 1);
                  {
                    ATerm i_108 = NULL,j_108 = NULL;
                    t = e_106;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        c_106 = ATgetArgument(t, 0);
                        d_106 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, i_106, c_106);
                    t = r_10(m_10, i_106, c_106, t);
                    i_108 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_106, d_106);
                    t = conc_0_0(t);
                    j_108 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, i_108, j_108), f_106);
                  }
                }
              else
                {
                  ATerm p_108 = NULL,q_108 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      e_106 = ATgetArgument(t, 0);
                      f_106 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, i_106, e_106);
                  t = r_10(p_10, i_106, e_106, t);
                  p_108 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_106, f_106);
                  t = conc_0_0(t);
                  q_108 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, p_108, q_108);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              h_106 = ATgetArgument(t, 0);
              r_106 = ATgetArgument(t, 1);
              {
                ATerm v_108 = NULL;
                t = r_106;
                if(match_cons(t, sym_Matrix_2))
                  {
                    e_106 = ATgetArgument(t, 0);
                    f_106 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_106;
                {
                  static ATerm s_10 (ATerm t)
                  {
                    ATerm w_108 = NULL,x_108 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        w_108 = ATgetArgument(t, 0);
                        x_108 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, w_108, (ATerm) ATmakeAppl(sym_Scope_2, h_106, x_108));
                    return(t);
                  }
                  t = map_1_0(s_10, t);
                }
                v_108 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, e_106, v_108);
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  h_106 = ATgetArgument(t, 0);
                  r_106 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_106;
              if(match_cons(t, sym_Matrix_2))
                {
                  i_106 = ATgetArgument(t, 0);
                  j_106 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_106;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_106 = ATgetFirst((ATermList) t);
                  q_106 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = k_106;
              if(match_cons(t, sym_Row_2))
                {
                  o_106 = ATgetArgument(t, 0);
                  p_106 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_106;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, i_106, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, o_106, (ATerm) ATmakeAppl(sym_Seq_2, p_106, r_106))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  static ATerm t_10 (ATerm t)
  {
    t = bottomup_1_0(g_103, t);
    return(t);
  }
  t = SRTS_all(t_10, t);
  t = g_103(t);
  return(t);
}
static ATerm q_10 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm v_52, ATerm u_52, ATerm t)
{
  t = z_117(t);
  {
    static ATerm u_10 (ATerm t)
    {
      ATerm f_109 = NULL;
      f_109 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_52, f_109);
      t = y_117(t);
      return(t);
    }
    t = fetch_1_0(u_10, t);
  }
  t = u_52;
  return(t);
}
static ATerm r_10 (ATerm v_117 (ATerm), ATerm r_52, ATerm q_52, ATerm t)
{
  static ATerm b_110 (ATerm t)
  {
    ATerm q_109 = NULL,x_109 = NULL,y_109 = NULL;
    q_109 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_52;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_109 = ATgetFirst((ATermList) t);
            y_109 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_31 = t;
          int l_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_109;
              {
                static ATerm v_10 (ATerm t)
                {
                  t = q_52;
                  return(t);
                }
                t = q_10(v_117, v_10, x_109, y_109, t);
              }
              t = b_110(t);
              LocalPopChoice(l_31);
            }
          else
            {
              t = j_31;
              {
                ATerm a_54 = NULL,d_54 = NULL,q_7 = NULL;
                t = SSLgetAnnotations(q_109);
                a_54 = t;
                t = y_109;
                t = b_110(t);
                d_54 = t;
                t = (ATerm) ATinsert(CheckATermList(d_54), x_109);
                q_7 = t;
                t = SSLsetAnnotations(q_7, a_54);
              }
            }
        }
      }
    return(t);
  }
  t = r_52;
  t = b_110(t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_120 (ATerm), ATerm m_120 (ATerm), ATerm n_120 (ATerm), ATerm t)
{
  ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL;
  e_110 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_110;
      t = l_120(t);
    }
  else
    {
      ATerm j_110 = NULL,k_110 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_110 = ATgetFirst((ATermList) t);
          g_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_110;
      t = n_120(t);
      j_110 = t;
      t = g_110;
      t = foldr_3_0(l_120, m_120, n_120, t);
      k_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_110, k_110);
      t = m_120(t);
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_110 = NULL;
      t = p_119(t);
      o_110 = t;
      t = (ATerm) ATinsert(ATempty, o_110);
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      {
        ATerm n_54 = NULL,o_54 = NULL;
        static ATerm x_10 (ATerm t)
        {
          t = collect_om_2_0(p_119, q_119, t);
          return(t);
        }
        o_54 = t;
        t = SSL_explode_term(o_54);
        if(match_cons(t, sym__2))
          {
            ATerm o_31 = ATgetArgument(t, 0);
            n_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_54;
        t = foldr_3_0(w_10, q_119, x_10, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm v_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL;
  if(match_cons(t, sym_As_2))
    {
      y_110 = ATgetArgument(t, 0);
      a_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_110;
  if(match_cons(t, sym_Var_1))
    {
      z_110 = ATgetArgument(t, 0);
      t = a_111;
      if(match_cons(t, sym_As_2))
        {
          b_111 = ATgetArgument(t, 0);
          {
            ATerm p_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_111;
      if(match_cons(t, sym_Off_1))
        {
          v_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, z_110), (ATerm) ATmakeAppl(sym_Var_1, v_110)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          z_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_111;
      if(match_cons(t, sym_Var_1))
        {
          b_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, b_111), (ATerm) ATmakeAppl(sym_Var_1, z_110)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL;
  w_111 = t;
  if(match_cons(t, sym_As_2))
    {
      x_111 = ATgetArgument(t, 0);
      z_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_111;
  {
    ATerm q_31 = t;
    int r_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm t_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_31);
        t = z_111;
        if(match_cons(t, sym_As_2))
          {
            a_112 = ATgetArgument(t, 0);
            v_111 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_112;
        if(match_cons(t, sym_Off_1))
          {
            u_111 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, u_111), v_111);
      }
    else
      {
        t = q_31;
        if(match_cons(t, sym_Off_1))
          {
            y_111 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_111;
        if(match_cons(t, sym_Var_1))
          {
            ATerm u_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_111;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_111;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_31 = ATgetFirst((ATermList) t);
                ATerm w_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_111;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, y_111), term_r_28);
      }
  }
  return(t);
}
static ATerm a_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_j_27;
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm t_112 = NULL,u_112 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_112 = ATgetFirst((ATermList) t);
      u_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_112, u_112);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm v_112 = NULL,w_112 = NULL,x_112 = NULL,y_112 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_31 = ATgetArgument(t, 0);
      if(match_cons(x_31, sym__2))
        {
          v_112 = ATgetArgument(x_31, 0);
          w_112 = ATgetArgument(x_31, 1);
        }
      else
        _fail(t);
      {
        ATerm y_31 = ATgetArgument(t, 1);
        if(match_cons(y_31, sym__2))
          {
            x_112 = ATgetArgument(y_31, 0);
            y_112 = ATgetArgument(y_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_112), v_112), (ATerm) ATinsert(CheckATermList(y_112), w_112));
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL;
  if(match_cons(t, sym__2))
    {
      z_112 = ATgetArgument(t, 0);
      a_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(u_11, z_112, a_113, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm b_113 = NULL;
  if(match_cons(t, sym__2))
    {
      b_113 = ATgetArgument(t, 0);
      if((b_113 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm c_113 = NULL;
  if(match_cons(t, sym__2))
    {
      c_113 = ATgetArgument(t, 0);
      if((c_113 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  ATerm e_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,k_112 = NULL,l_112 = NULL,m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL;
  q_112 = t;
  r_112 = t;
  t = SSL_explode_term(r_112);
  if(match_cons(t, sym__2))
    {
      i_112 = ATgetArgument(t, 0);
      e_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_112);
  k_112 = t;
  t = e_112;
  t = genzip_4_0(a_11, b_11, l_11, s_118, t);
  if(match_cons(t, sym__2))
    {
      j_112 = ATgetArgument(t, 0);
      h_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(i_112, j_112);
  p_112 = t;
  t = SSLsetAnnotations(p_112, k_112);
  t = t_118(t);
  if(match_cons(t, sym__2))
    {
      l_112 = ATgetArgument(t, 0);
      m_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_112;
  t = foldr_2_0(o_11, r_11, t);
  o_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_112, o_112);
  t = r_10(v_11, m_112, o_112, t);
  n_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_112, n_112);
  return(t);
}
ATerm collect_split_2_0 (ATerm j_119 (ATerm), ATerm k_119 (ATerm), ATerm t)
{
  static ATerm j_113 (ATerm t)
  {
    static ATerm x_11 (ATerm t)
    {
      ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL;
      g_113 = t;
      {
        ATerm z_31 = t;
        int a_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_119(t);
            LocalPopChoice(a_32);
          }
        else
          {
            t = z_31;
          }
      }
      e_113 = t;
      t = g_113;
      {
        ATerm b_32 = t;
        int f_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_119(t);
            LocalPopChoice(f_32);
          }
        else
          {
            t = b_32;
            t = (ATerm) ATempty;
          }
      }
      f_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_113, f_113);
      return(t);
    }
    t = CollectSplit_2_0(j_113, x_11, t);
    return(t);
  }
  t = j_113(t);
  return(t);
}
ATerm genzip_4_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm t)
{
  static ATerm q_113 (ATerm t)
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_107(t);
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        {
          ATerm k_113 = NULL,l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,y_7 = NULL;
          t = s_107(t);
          p_113 = t;
          if(match_cons(t, sym__2))
            {
              l_113 = ATgetArgument(t, 0);
              m_113 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_113);
          k_113 = t;
          t = l_113;
          t = u_107(t);
          n_113 = t;
          t = m_113;
          t = q_113(t);
          o_113 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_113, o_113);
          y_7 = t;
          t = SSLsetAnnotations(y_7, k_113);
          t = t_107(t);
        }
      }
    return(t);
  }
  t = q_113(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_32 = ATgetArgument(t, 0);
      ATerm j_32 = ATgetArgument(t, 1);
      if(((ATgetType(j_32) != AT_LIST) || !(ATisEmpty(j_32))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm t_113 = NULL,u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL;
  if(match_cons(t, sym__2))
    {
      t_113 = ATgetArgument(t, 0);
      {
        ATerm k_32 = ATgetArgument(t, 1);
        if(((ATgetType(k_32) == AT_LIST) && !(ATisEmpty(k_32))))
          {
            u_113 = ATgetFirst((ATermList) k_32);
            v_113 = (ATerm) ATgetNext((ATermList) k_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_z_16;
  x_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_113, term_z_16);
  t = k_11(t_113, x_113, t);
  w_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_113, u_113), (ATerm) ATmakeAppl(sym__2, w_113, v_113));
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm y_113 = NULL,z_113 = NULL;
  if(match_cons(t, sym__2))
    {
      y_113 = ATgetArgument(t, 0);
      z_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_113), y_113);
  return(t);
}
ATerm nzip0_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm r_113 = NULL;
  r_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_28, r_113);
  t = genzip_4_0(y_11, z_11, a_12, c_108, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm e_114 = NULL,g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL;
  if(match_cons(t, sym_As_2))
    {
      g_114 = ATgetArgument(t, 0);
      i_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_114;
  if(match_cons(t, sym_Off_1))
    {
      h_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_114;
  {
    ATerm l_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm o_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_32);
        {
          ATerm p_32 = t;
          int q_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm b_12 (ATerm t)
              {
                ATerm n_114 = NULL,o_114 = NULL;
                if(match_cons(t, sym__2))
                  {
                    n_114 = ATgetArgument(t, 0);
                    o_114 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(h_114), n_114)), o_114);
                return(t);
              }
              t = i_114;
              t = nzip0_1_0(b_12, t);
              LocalPopChoice(q_32);
            }
          else
            {
              t = p_32;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, h_114), term_r_28);
            }
        }
      }
    else
      {
        t = l_32;
        if(match_cons(t, sym_As_2))
          {
            j_114 = ATgetArgument(t, 0);
            k_114 = ATgetArgument(t, 1);
            t = j_114;
            if(match_cons(t, sym_Var_1))
              {
                e_114 = ATgetArgument(t, 0);
                {
                  ATerm r_32 = t;
                  int s_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm c_12 (ATerm t)
                      {
                        ATerm s_114 = NULL,t_114 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            s_114 = ATgetArgument(t, 0);
                            t_114 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(h_114), s_114)), t_114);
                        return(t);
                      }
                      t = i_114;
                      t = nzip0_1_0(c_12, t);
                      LocalPopChoice(s_32);
                    }
                  else
                    {
                      t = r_32;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_114), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, h_114), k_114));
                    }
                }
              }
            else
              {
                static ATerm d_12 (ATerm t)
                {
                  ATerm e_115 = NULL,f_115 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      e_115 = ATgetArgument(t, 0);
                      f_115 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(h_114), e_115)), f_115);
                  return(t);
                }
                t = i_114;
                t = nzip0_1_0(d_12, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                j_114 = ATgetArgument(t, 0);
                k_114 = ATgetArgument(t, 1);
                {
                  ATerm t_32 = t;
                  int u_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm g_12 (ATerm t)
                      {
                        ATerm l_115 = NULL,m_115 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            l_115 = ATgetArgument(t, 0);
                            m_115 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(h_114), l_115)), m_115);
                        return(t);
                      }
                      t = i_114;
                      t = nzip0_1_0(g_12, t);
                      LocalPopChoice(u_32);
                    }
                  else
                    {
                      t = t_32;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, h_114), (ATerm) ATmakeAppl(sym_Op_2, j_114, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, h_114), k_114)));
                    }
                }
              }
            else
              {
                static ATerm h_12 (ATerm t)
                {
                  ATerm u_115 = NULL,v_115 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      u_115 = ATgetArgument(t, 0);
                      v_115 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(h_114), u_115)), v_115);
                  return(t);
                }
                t = i_114;
                t = nzip0_1_0(h_12, t);
              }
          }
      }
  }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm g_116 = NULL,h_116 = NULL,i_116 = NULL;
  i_116 = t;
  if(match_cons(t, sym_As_2))
    {
      g_116 = ATgetArgument(t, 0);
      h_116 = ATgetArgument(t, 1);
      t = g_116;
      if(match_cons(t, sym_Wld_0))
        {
          t = h_116;
        }
      else
        {
          t = i_116;
        }
    }
  else
    {
      t = i_116;
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm p_116 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      p_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_116;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm q_116 = NULL,t_116 = NULL;
  if(match_cons(t, sym__2))
    {
      q_116 = ATgetArgument(t, 0);
      t_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(n_12, q_116, t_116, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm u_116 = NULL;
  if(match_cons(t, sym__2))
    {
      u_116 = ATgetArgument(t, 0);
      if((u_116 != ATgetArgument(t, 1)))
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
  ATerm c_116 = NULL,d_116 = NULL,e_116 = NULL,f_116 = NULL;
  f_116 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_z_32, (ATerm) ATinsert(ATempty, f_116));
  t = topdown_1_0(i_12, t);
  t = topdown_1_0(j_12, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      c_116 = ATgetArgument(t, 0);
      d_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_116;
  t = collect_om_2_0(k_12, m_12, t);
  e_116 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, e_116, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, c_116, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_116), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_d_28)))))));
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = repeat_2_0(r_12, _id, t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm v_119 (ATerm t)
      {
        ATerm e_33 = t;
        int f_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_118 = NULL,q_118 = NULL,r_118 = NULL;
            p_118 = t;
            if(match_cons(t, sym_Choice_2))
              {
                q_118 = ATgetArgument(t, 0);
                r_118 = ATgetArgument(t, 1);
                {
                  ATerm l_55 = NULL,r_55 = NULL,s_55 = NULL,d_8 = NULL;
                  t = SSLgetAnnotations(p_118);
                  l_55 = t;
                  t = q_118;
                  t = v_119(t);
                  r_55 = t;
                  t = r_118;
                  t = v_119(t);
                  s_55 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, r_55, s_55);
                  d_8 = t;
                  t = SSLsetAnnotations(d_8, l_55);
                }
              }
            else
              {
                ATerm f_56 = NULL,k_56 = NULL,l_56 = NULL,e_8 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    q_118 = ATgetArgument(t, 0);
                    r_118 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_118);
                f_56 = t;
                t = q_118;
                t = v_119(t);
                k_56 = t;
                t = r_118;
                t = v_119(t);
                l_56 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, k_56, l_56);
                e_8 = t;
                t = SSLsetAnnotations(e_8, f_56);
              }
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            {
              static ATerm y_119 (ATerm t)
              {
                ATerm g_33 = t;
                int j_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_119 = NULL,r_119 = NULL,s_119 = NULL;
                    r_119 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        s_119 = ATgetArgument(t, 0);
                        o_119 = ATgetArgument(t, 1);
                        {
                          ATerm b_57 = NULL,e_57 = NULL,f_57 = NULL,i_8 = NULL;
                          t = SSLgetAnnotations(r_119);
                          b_57 = t;
                          t = s_119;
                          t = y_119(t);
                          e_57 = t;
                          t = o_119;
                          t = match_to_matrix_0_0(t);
                          f_57 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_57, f_57);
                          i_8 = t;
                          t = SSLsetAnnotations(i_8, b_57);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            s_119 = ATgetArgument(t, 0);
                            o_119 = ATgetArgument(t, 1);
                            {
                              ATerm n_57 = NULL,q_57 = NULL,j_8 = NULL;
                              t = SSLgetAnnotations(r_119);
                              n_57 = t;
                              t = o_119;
                              t = y_119(t);
                              q_57 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_119, q_57);
                              j_8 = t;
                              t = SSLsetAnnotations(j_8, n_57);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                s_119 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = s_119;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    LocalPopChoice(j_33);
                  }
                else
                  {
                    t = g_33;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = y_119(t);
            }
          }
        return(t);
      }
      ATerm k_33 = t;
      int l_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_117 = NULL,d_117 = NULL,e_117 = NULL,f_117 = NULL,b_8 = NULL;
          f_117 = t;
          if(match_cons(t, sym_Choice_2))
            {
              d_117 = ATgetArgument(t, 0);
              e_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_117);
          c_117 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, d_117, e_117);
          b_8 = t;
          t = SSLsetAnnotations(b_8, c_117);
          LocalPopChoice(l_33);
        }
      else
        {
          t = k_33;
          {
            ATerm g_117 = NULL,h_117 = NULL,i_117 = NULL,j_117 = NULL,c_8 = NULL;
            j_117 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                h_117 = ATgetArgument(t, 0);
                i_117 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_117);
            g_117 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, h_117, i_117);
            c_8 = t;
            t = SSLsetAnnotations(c_8, g_117);
          }
        }
      t = v_119(t);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(q_12, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  t = term_i_30;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_120 = NULL,f_120 = NULL,g_120 = NULL;
      e_120 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          f_120 = ATgetArgument(t, 0);
          {
            ATerm o_33 = t;
            int p_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_120 = NULL;
                t = f_120;
                t = map_1_0(x_12, t);
                i_120 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, i_120);
                LocalPopChoice(p_33);
              }
            else
              {
                t = o_33;
                {
                  ATerm q_33 = t;
                  int s_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_120;
                      t = h_9(f_120, t);
                      LocalPopChoice(s_33);
                    }
                  else
                    {
                      t = q_33;
                      {
                        ATerm t_33 = t;
                        int u_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_120;
                            t = f_9(f_120, t);
                            LocalPopChoice(u_33);
                          }
                        else
                          {
                            t = t_33;
                            t = e_120;
                            t = d_9(f_120, t);
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
              f_120 = ATgetArgument(t, 0);
              g_120 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_120;
          t = v_8(f_120, g_120, t);
        }
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      t = Simplify_0_0(t);
    }
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm o_120 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      if(((ATgetType(w_33) != AT_LIST) || !(ATisEmpty(w_33))))
        _fail(t);
      {
        ATerm c_34 = ATgetArgument(t, 1);
        if(((ATgetType(c_34) != AT_LIST) || !(ATisEmpty(c_34))))
          _fail(t);
      }
      o_120 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_120;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    static ATerm t_12 (ATerm t)
    {
      t = repeat_2_0(w_12, _id, t);
      t = SRTS_all(t_12, t);
      return(t);
    }
    t = scope_2_0(s_12, t_12, t);
  }
  t = strename_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  static ATerm z_12 (ATerm t)
  {
    t = topdown_1_0(f_103, t);
    return(t);
  }
  t = f_103(t);
  t = SRTS_all(z_12, t);
  return(t);
}
ATerm map_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  static ATerm k_121 (ATerm t)
  {
    ATerm h_121 = NULL,i_121 = NULL,j_121 = NULL;
    h_121 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_121;
      }
    else
      {
        ATerm j_58 = NULL,q_58 = NULL,r_58 = NULL,l_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_121 = ATgetFirst((ATermList) t);
            j_121 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_121);
        j_58 = t;
        t = i_121;
        t = i_115(t);
        q_58 = t;
        t = j_121;
        t = k_121(t);
        r_58 = t;
        t = (ATerm) ATinsert(CheckATermList(r_58), q_58);
        l_10 = t;
        t = SSLsetAnnotations(l_10, j_58);
      }
    return(t);
  }
  t = k_121(t);
  return(t);
}
static ATerm d_11 (ATerm v_39, ATerm w_39, ATerm t)
{
  ATerm m_121 = NULL;
  t = SSL_fputc(v_39, w_39);
  m_121 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_121);
  return(t);
}
static ATerm e_11 (ATerm m_38, ATerm n_38, ATerm t)
{
  ATerm o_121 = NULL;
  t = SSL_write_term_to_stream_text(m_38, n_38);
  o_121 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_121);
  return(t);
}
static ATerm g_11 (ATerm p_110 (ATerm), ATerm o_262, ATerm q_38, ATerm t)
{
  ATerm p_121 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_262, term_f_34);
  t = j_11(t);
  p_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_121, q_38);
  t = p_110(t);
  t = fclose_0_0(t);
  t = q_38;
  return(t);
}
static ATerm f_11 (ATerm i_38, ATerm j_38, ATerm t)
{
  ATerm q_121 = NULL;
  t = SSL_write_term_to_stream_baf(i_38, j_38);
  q_121 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_121);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      if(match_cons(g_34, sym_Stream_1))
        {
          k_59 = ATgetArgument(g_34, 0);
        }
      else
        _fail(t);
      l_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(k_59, l_59, t);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_34 = ATgetArgument(t, 0);
      if(match_cons(h_34, sym_Stream_1))
        {
          j_60 = ATgetArgument(h_34, 0);
        }
      else
        _fail(t);
      k_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(j_60, k_60, t);
  g_60 = t;
  t = term_i_34;
  h_60 = t;
  t = g_60;
  if(match_cons(t, sym_Stream_1))
    {
      i_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_34, g_60);
  t = d_11(h_60, i_60, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm u_121 = NULL,v_121 = NULL,w_121 = NULL,x_121 = NULL,y_121 = NULL,h_122 = NULL,i_122 = NULL,j_122 = NULL,m_122 = NULL,n_122 = NULL,p_123 = NULL,q_123 = NULL,z_10 = NULL,y_10 = NULL;
  v_121 = t;
  if(match_cons(t, sym__2))
    {
      j_122 = ATgetArgument(t, 0);
      m_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_121);
  i_122 = t;
  t = j_122;
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm b_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((u_121 != NULL) && (u_121 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                u_121 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(b_13, t);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        t = term_m_34;
        u_121 = t;
      }
  }
  n_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_122, m_122);
  y_10 = t;
  t = SSLsetAnnotations(y_10, i_122);
  t = v_121;
  if(match_cons(t, sym__2))
    {
      x_121 = ATgetArgument(t, 0);
      y_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_121);
  w_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_121, (ATerm) ATmakeAppl(sym__2, not_null(u_121), y_121));
  z_10 = t;
  t = SSLsetAnnotations(z_10, w_121);
  h_122 = t;
  if(match_cons(t, sym__2))
    {
      p_123 = ATgetArgument(t, 0);
      q_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,q_11 = NULL;
        t = SSLgetAnnotations(h_122);
        d_59 = t;
        t = p_123;
        t = fetch_1_0(c_13, t);
        g_59 = t;
        t = q_123;
        if(match_cons(t, sym__2))
          {
            i_59 = ATgetArgument(t, 0);
            j_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_11(d_13, i_59, j_59, t);
        h_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_59, h_59);
        q_11 = t;
        t = SSLsetAnnotations(q_11, d_59);
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        {
          ATerm a_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,s_11 = NULL;
          t = SSLgetAnnotations(h_122);
          a_60 = t;
          t = q_123;
          if(match_cons(t, sym__2))
            {
              e_60 = ATgetArgument(t, 0);
              f_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_11(f_13, e_60, f_60, t);
          d_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_123, d_60);
          s_11 = t;
          t = SSLsetAnnotations(s_11, a_60);
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
ATerm apply_strategy_1_0 (ATerm j_129 (ATerm), ATerm t)
{
  ATerm t_123 = NULL,u_123 = NULL,v_123 = NULL,w_123 = NULL,x_123 = NULL;
  x_123 = t;
  t = dtime_0_0(t);
  t = x_123;
  t = j_129(t);
  w_123 = t;
  t = dtime_0_0(t);
  t_123 = t;
  t = w_123;
  if(match_cons(t, sym__2))
    {
      u_123 = ATgetArgument(t, 0);
      v_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_123), (ATerm) ATmakeAppl(sym_Runtime_1, t_123)), v_123);
  return(t);
}
static ATerm p_124 (ATerm j_124, ATerm t)
{
  t = SSL_fclose(j_124);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_124 = NULL,n_124 = NULL;
  n_124 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_124 = ATgetArgument(t, 0);
      {
        ATerm s_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_124);
            LocalPopChoice(v_34);
          }
        else
          {
            t = s_34;
            t = p_124(n_124, t);
          }
      }
    }
  else
    {
      t = p_124(n_124, t);
    }
  return(t);
}
static ATerm h_11 (ATerm o_38, ATerm t)
{
  t = SSL_read_term_from_stream(o_38);
  return(t);
}
static ATerm i_11 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm q_124 = NULL;
  t = SSL_fopen(x_39, y_39);
  q_124 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_124);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_124 = NULL;
  t = SSL_stdin_stream();
  r_124 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_124);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_124 = NULL;
  t = SSL_stdout_stream();
  s_124 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_124);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_124 = NULL;
  t = SSL_stderr_stream();
  t_124 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_124);
  return(t);
}
static ATerm a_126 (ATerm z_124, ATerm t)
{
  ATerm a_125 = NULL;
  t = SSL_explode_term(z_124);
  if(match_cons(t, sym__2))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_34 = ATgetArgument(t, 1);
        if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
          {
            a_125 = ATgetFirst((ATermList) x_34);
            {
              ATerm z_34 = (ATerm) ATgetNext((ATermList) x_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_125;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_125;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_125;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_125;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_126 (ATerm d_125, ATerm e_125, ATerm f_125, ATerm t)
{
  ATerm g_125 = NULL,h_125 = NULL,i_125 = NULL,l_125 = NULL,e_12 = NULL;
  t = SSLgetAnnotations(f_125);
  i_125 = t;
  t = d_125;
  if(match_cons(t, sym_Path_1))
    {
      l_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_125, e_125);
  e_12 = t;
  t = SSLsetAnnotations(e_12, i_125);
  if(match_cons(t, sym__2))
    {
      g_125 = ATgetArgument(t, 0);
      h_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(g_125, h_125, t);
  return(t);
}
static ATerm c_126 (ATerm n_125, ATerm o_125, ATerm p_125, ATerm t)
{
  ATerm q_125 = NULL,r_125 = NULL,s_125 = NULL,v_125 = NULL,f_12 = NULL;
  t = SSLgetAnnotations(p_125);
  s_125 = t;
  t = SSL_is_string(n_125);
  v_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_125, o_125);
  f_12 = t;
  t = SSLsetAnnotations(f_12, s_125);
  if(match_cons(t, sym__2))
    {
      q_125 = ATgetArgument(t, 0);
      r_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(q_125, r_125, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm x_125 = NULL,y_125 = NULL,z_125 = NULL;
  x_125 = t;
  if(match_cons(t, sym__2))
    {
      y_125 = ATgetArgument(t, 0);
      z_125 = ATgetArgument(t, 1);
      {
        ATerm g_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_126(x_125, t);
            LocalPopChoice(h_35);
          }
        else
          {
            t = g_35;
            {
              ATerm i_35 = t;
              int j_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_126(y_125, z_125, x_125, t);
                  LocalPopChoice(j_35);
                }
              else
                {
                  t = i_35;
                  t = c_126(y_125, z_125, x_125, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_126(x_125, t);
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = term_k_35;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_126 = NULL,e_126 = NULL,f_126 = NULL;
  ATerm l_35 = t;
  int m_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_126 = NULL;
      g_126 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_126, term_n_35);
      t = j_11(t);
      LocalPopChoice(m_35);
    }
  else
    {
      t = l_35;
      t = debug_1_0(h_13, t);
      _fail(t);
    }
  e_126 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(f_126, t);
  d_126 = t;
  t = e_126;
  t = fclose_0_0(t);
  t = d_126;
  return(t);
}
ATerm fetch_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  static ATerm e_127 (ATerm t)
  {
    ATerm b_127 = NULL,c_127 = NULL,d_127 = NULL;
    b_127 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_127 = ATgetFirst((ATermList) t);
        d_127 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_61 = NULL,e_61 = NULL,u_12 = NULL;
          t = SSLgetAnnotations(b_127);
          a_61 = t;
          t = c_127;
          t = s_115(t);
          e_61 = t;
          t = (ATerm) ATinsert(CheckATermList(d_127), e_61);
          u_12 = t;
          t = SSLsetAnnotations(u_12, a_61);
          LocalPopChoice(p_35);
        }
      else
        {
          t = o_35;
          {
            ATerm t_61 = NULL,y_61 = NULL,v_12 = NULL;
            t = SSLgetAnnotations(b_127);
            t_61 = t;
            t = d_127;
            t = e_127(t);
            y_61 = t;
            t = (ATerm) ATinsert(CheckATermList(y_61), c_127);
            v_12 = t;
            t = SSLsetAnnotations(v_12, t_61);
          }
        }
    }
    return(t);
  }
  t = e_127(t);
  return(t);
}
static ATerm c_11 (ATerm u_61, ATerm v_61, ATerm t)
{
  t = SSL_strcat(u_61, v_61);
  return(t);
}
ATerm debug_1_0 (ATerm n_110 (ATerm), ATerm t)
{
  ATerm h_127 = NULL,i_127 = NULL,j_127 = NULL,k_127 = NULL;
  h_127 = t;
  t = n_110(t);
  i_127 = t;
  t = term_k_16;
  j_127 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_127), i_127);
  k_127 = t;
  t = SSL_printnl(j_127, k_127);
  t = h_127;
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(r_35);
    }
  else
    {
      t = q_35;
    }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  t = term_s_35;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_127 = NULL;
      r_127 = t;
      t = SSL_is_string(r_127);
      LocalPopChoice(a_36);
    }
  else
    {
      t = v_35;
      {
        ATerm c_36 = t;
        int d_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(i_13, t);
            LocalPopChoice(d_36);
          }
        else
          {
            t = c_36;
            {
              ATerm x_127 = NULL,y_127 = NULL,z_127 = NULL;
              x_127 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_127 = ATgetArgument(t, 0);
                  t = y_127;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_127 = ATgetArgument(t, 0);
                      t = y_127;
                      {
                        ATerm e_36 = t;
                        int f_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(f_36);
                          }
                        else
                          {
                            t = e_36;
                            t = debug_1_0(j_13, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_128 = NULL,e_128 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_127 = ATgetArgument(t, 0);
                          z_127 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_127;
                      t = eval_config_0_0(t);
                      d_128 = t;
                      t = z_127;
                      t = eval_config_0_0(t);
                      e_128 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_128, e_128);
                      t = c_11(d_128, e_128, t);
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
  ATerm i_128 = NULL,j_128 = NULL;
  i_128 = t;
  t = term_g_36;
  j_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_36, i_128);
  t = m_11(j_128, i_128, t);
  {
    ATerm h_36 = t;
    int i_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_128 = NULL,l_128 = NULL;
        t = eval_config_0_0(t);
        k_128 = t;
        t = term_g_36;
        l_128 = t;
        t = SSL_table_put(l_128, i_128, k_128);
        t = k_128;
        LocalPopChoice(i_36);
      }
    else
      {
        t = h_36;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm p_128 = NULL;
  p_128 = t;
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_128 = NULL;
        t = term_l_36;
        t = get_config_0_0(t);
        r_128 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_128, term_m_36);
        t = geq_0_0(t);
        t = p_128;
        t = g_112(t);
        LocalPopChoice(k_36);
      }
    else
      {
        t = j_36;
        t = p_128;
      }
  }
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm u_128 = NULL;
  u_128 = t;
  if(match_string(t, "-k"))
    {
      t = u_128;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_128;
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm v_128 = NULL,w_128 = NULL,x_128 = NULL;
  v_128 = t;
  t = SSL_string_to_int(v_128);
  w_128 = t;
  t = term_n_36;
  x_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_36, w_128);
  t = p_11(x_128, w_128, t);
  t = v_128;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  t = term_o_36;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_13, n_13, o_13, t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm z_128 = NULL;
  z_128 = t;
  if(match_string(t, "-S"))
    {
      t = z_128;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_128;
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm a_129 = NULL,b_129 = NULL;
  t = term_l_36;
  a_129 = t;
  t = term_d_28;
  b_129 = t;
  t = term_r_36;
  t = p_11(a_129, b_129, t);
  t = term_t_36;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm c_129 = NULL,d_129 = NULL,e_129 = NULL;
  c_129 = t;
  t = SSL_string_to_int(c_129);
  d_129 = t;
  t = term_l_36;
  e_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_36, d_129);
  t = p_11(e_129, d_129, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_129);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_x_36;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL;
  t = term_z_36;
  f_129 = t;
  t = term_j_16;
  g_129 = t;
  t = term_b_37;
  t = p_11(f_129, g_129, t);
  t = term_e_37;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_13, r_13, a_14, t);
      LocalPopChoice(h_37);
    }
  else
    {
      t = g_37;
      {
        ATerm j_37 = t;
        int l_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_14, c_14, d_14, t);
            LocalPopChoice(l_37);
          }
        else
          {
            t = j_37;
            t = Option_3_0(e_14, f_14, g_14, t);
          }
      }
    }
  return(t);
}
static ATerm p_11 (ATerm q_43, ATerm r_43, ATerm t)
{
  ATerm h_129 = NULL;
  t = term_g_36;
  h_129 = t;
  t = SSL_table_put(h_129, q_43, r_43);
  t = (ATerm) ATmakeAppl(sym__3, term_g_36, q_43, r_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm l_129 = NULL,m_129 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_129 = NULL,o_129 = NULL,p_129 = NULL;
      t = term_j_16;
      t = i_0(t);
      n_129 = t;
      t = term_m_37;
      o_129 = t;
      t = term_n_37;
      p_129 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_37, term_n_37, n_129);
      t = n_11(o_129, p_129, n_129, t);
      _fail(t);
    }
  else
    {
      ATerm v_129 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_129 = ATgetFirst((ATermList) t);
          m_129 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_129;
      t = d_0(t);
      t = term_j_16;
      t = g_0(t);
      v_129 = t;
      t = (ATerm) ATinsert(CheckATermList(m_129), v_129);
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm x_129 = NULL;
  x_129 = t;
  if(match_string(t, "-o"))
    {
      t = x_129;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_129;
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm y_129 = NULL,z_129 = NULL;
  y_129 = t;
  t = term_o_37;
  z_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_37, y_129);
  t = p_11(z_129, y_129, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_129);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_p_37;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_14, i_14, j_14, t);
  return(t);
}
static ATerm n_11 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t)
{
  ATerm b_130 = NULL,c_130 = NULL,d_130 = NULL;
  b_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_37 = ATgetArgument(t, 0);
            ATerm u_37 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = m_11(j_48, k_48, t);
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
        t = (ATerm) ATempty;
      }
  }
  c_130 = t;
  t = (ATerm) ATinsert(CheckATermList(c_130), i_48);
  d_130 = t;
  t = SSL_table_put(j_48, k_48, d_130);
  t = b_130;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_130 = NULL,q_130 = NULL,r_130 = NULL,s_130 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_130 = NULL,u_130 = NULL,v_130 = NULL;
      t = term_j_16;
      t = p_0(t);
      t_130 = t;
      t = term_m_37;
      u_130 = t;
      t = term_n_37;
      v_130 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_37, term_n_37, t_130);
      t = n_11(u_130, v_130, t_130, t);
      _fail(t);
    }
  else
    {
      ATerm z_130 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_130 = ATgetFirst((ATermList) t);
          q_130 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_130;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_130 = ATgetFirst((ATermList) t);
          s_130 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_130;
      t = n_0(t);
      t = r_130;
      t = o_0(t);
      z_130 = t;
      t = (ATerm) ATinsert(CheckATermList(s_130), z_130);
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm b_131 = NULL;
  b_131 = t;
  if(match_string(t, "-i"))
    {
      t = b_131;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_131;
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm c_131 = NULL,d_131 = NULL;
  c_131 = t;
  t = term_v_37;
  d_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_37, c_131);
  t = p_11(d_131, c_131, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_131);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_x_37;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_14, l_14, m_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm e_131 = NULL,f_131 = NULL,g_131 = NULL,h_131 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_16;
  t = whoami_0_0(t);
  e_131 = t;
  t = term_k_16;
  g_131 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_38), e_131);
  h_131 = t;
  t = SSL_printnl(g_131, h_131);
  t = term_z_16;
  f_131 = t;
  t = SSL_exit(f_131);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_38;
  t = get_config_0_0(t);
  return(t);
}
static ATerm k_11 (ATerm n_46, ATerm o_46, ATerm t)
{
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_46, o_46);
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      t = SSL_addr(n_46, o_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_120 (ATerm), ATerm k_120 (ATerm), ATerm t)
{
  ATerm j_131 = NULL,k_131 = NULL,l_131 = NULL;
  j_131 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_131;
      t = j_120(t);
    }
  else
    {
      ATerm o_131 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_131 = ATgetFirst((ATermList) t);
          l_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_131;
      t = foldr_2_0(j_120, k_120, t);
      o_131 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_131, o_131);
      t = k_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_d_28;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL;
  if(match_cons(t, sym__2))
    {
      p_62 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(p_62, q_62, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_131 = NULL,l_62 = NULL,m_62 = NULL;
  t = times_0_0(t);
  m_62 = t;
  t = SSL_explode_term(m_62);
  if(match_cons(t, sym__2))
    {
      ATerm h_38 = ATgetArgument(t, 0);
      l_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_62;
  t = foldr_2_0(n_14, o_14, t);
  r_131 = t;
  t = SSL_TicksToSeconds(r_131);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_132 = NULL,d_132 = NULL,e_132 = NULL;
  c_132 = t;
  if(match_cons(t, sym__2))
    {
      d_132 = ATgetArgument(t, 0);
      e_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_132;
        if((d_132 != t))
          {
            _fail(t);
          }
        t = c_132;
        LocalPopChoice(s_38);
      }
    else
      {
        t = p_38;
        t = (ATerm) ATmakeAppl(sym__2, d_132, e_132);
        {
          ATerm t_38 = t;
          int v_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_132, e_132);
              LocalPopChoice(v_38);
            }
          else
            {
              t = t_38;
              t = SSL_gtr(d_132, e_132);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_132, e_132);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm i_132 = NULL;
  i_132 = t;
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_132 = NULL;
        t = term_l_36;
        t = get_config_0_0(t);
        m_132 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_132, term_z_16);
        t = geq_0_0(t);
        t = i_132;
        t = f_112(t);
        LocalPopChoice(x_38);
      }
    else
      {
        t = w_38;
        t = i_132;
      }
  }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm o_132 = NULL,p_132 = NULL,r_132 = NULL,s_132 = NULL;
  t = run_time_0_0(t);
  o_132 = t;
  t = term_j_16;
  t = whoami_0_0(t);
  p_132 = t;
  t = term_k_16;
  r_132 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_38), o_132), term_y_38), p_132);
  s_132 = t;
  t = SSL_printnl(r_132, s_132);
  t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_38), o_132), term_y_38), p_132));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_132 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_28;
  t_132 = t;
  t = SSL_exit(t_132);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm b_133 = NULL,c_133 = NULL;
  c_133 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_133;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_133 = ATgetArgument(t, 0);
          {
            ATerm l_63 = NULL,y_12 = NULL;
            t = SSLgetAnnotations(c_133);
            l_63 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_133);
            y_12 = t;
            t = SSLsetAnnotations(y_12, l_63);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_133;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_130 (ATerm), ATerm t)
{
  ATerm a_39 = t;
  int b_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_39;
      t = get_config_0_0(t);
      LocalPopChoice(b_39);
    }
  else
    {
      t = a_39;
      t = fetch_1_0(q_14, t);
    }
  t = h_130(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm f_133 = NULL,g_133 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_133 = ATgetFirst((ATermList) t);
      g_133 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_133 = NULL,l_133 = NULL;
        static ATerm r_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_133)), not_null(l_133));
          return(t);
        }
        t = g_133;
        t = l_0(t);
        if(((k_133 != NULL) && (k_133 != t)))
          _fail(t);
        else
          k_133 = t;
        t = f_133;
        t = k_0(t);
        if(((l_133 != NULL) && (l_133 != t)))
          _fail(t);
        else
          l_133 = t;
        t = g_133;
        t = reverse_acc_2_0(k_0, r_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_16;
      t = l_0(t);
    }
  return(t);
}
static ATerm m_11 (ATerm a_50, ATerm b_50, ATerm t)
{
  t = SSL_table_get(a_50, b_50);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm p_133 = NULL,q_133 = NULL,r_133 = NULL,a_13 = NULL;
  r_133 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_133);
  p_133 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_133);
  a_13 = t;
  t = SSLsetAnnotations(a_13, p_133);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm t_133 = NULL;
  t_133 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_133), term_e_39);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_133 = NULL,o_133 = NULL;
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_38;
      t = get_config_0_0(t);
      LocalPopChoice(h_39);
    }
  else
    {
      t = g_39;
      t = fetch_1_0(s_14, t);
    }
  t = term_i_39;
  t = echo_0_0(t);
  t = term_m_37;
  n_133 = t;
  t = term_n_37;
  o_133 = t;
  t = term_j_39;
  t = m_11(n_133, o_133, t);
  t = reverse_acc_2_0(_id, t_14, t);
  t = map_1_0(z_14, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_133 = NULL,x_133 = NULL,y_133 = NULL;
  v_133 = t;
  {
    ATerm k_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_133;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_39 = ATgetFirst((ATermList) t);
                ATerm q_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_133;
          }
        LocalPopChoice(n_39);
      }
    else
      {
        t = k_39;
        t = (ATerm) ATinsert(ATempty, v_133);
      }
  }
  x_133 = t;
  t = term_m_34;
  y_133 = t;
  t = SSL_printnl(y_133, x_133);
  t = v_133;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_38;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm c_134 = NULL,d_134 = NULL;
  t = term_r_39;
  c_134 = t;
  t = term_j_16;
  d_134 = t;
  t = term_s_39;
  t = p_11(c_134, d_134, t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = term_a_40;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm e_134 = NULL,f_134 = NULL,g_134 = NULL,i_134 = NULL;
  t = term_r_39;
  g_134 = t;
  t = term_j_16;
  i_134 = t;
  t = term_s_39;
  t = p_11(g_134, i_134, t);
  t = term_b_40;
  e_134 = t;
  t = term_j_16;
  f_134 = t;
  t = term_c_40;
  t = p_11(e_134, f_134, t);
  t = term_e_40;
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_f_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_15, c_15, d_15, t);
      LocalPopChoice(i_40);
    }
  else
    {
      t = h_40;
      t = Option_3_0(e_15, f_15, g_15, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm t)
{
  ATerm j_134 = NULL,k_134 = NULL,o_134 = NULL,p_134 = NULL,q_134 = NULL,r_134 = NULL,e_13 = NULL;
  r_134 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_134 = ATgetFirst((ATermList) t);
      o_134 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_134);
  j_134 = t;
  t = k_134;
  t = z_88(t);
  p_134 = t;
  t = o_134;
  t = a_89(t);
  q_134 = t;
  t = (ATerm) ATinsert(CheckATermList(q_134), p_134);
  e_13 = t;
  t = SSLsetAnnotations(e_13, j_134);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_132 (ATerm), ATerm t)
{
  ATerm w_134 = NULL,y_134 = NULL,z_134 = NULL,a_135 = NULL,c_135 = NULL,d_135 = NULL,g_13 = NULL;
  w_134 = t;
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_40;
        t = k_132(t);
        LocalPopChoice(k_40);
      }
    else
      {
        t = j_40;
      }
  }
  t = w_134;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_134 = ATgetFirst((ATermList) t);
      a_135 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_134);
  y_134 = t;
  t = term_d_38;
  d_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_38, z_134);
  t = p_11(d_135, z_134, t);
  t = a_135;
  {
    static ATerm o_135 (ATerm t)
    {
      ATerm m_40 = t;
      int n_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_40 = t;
          int q_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_135 = NULL;
              g_135 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_135;
              LocalPopChoice(q_40);
            }
          else
            {
              t = o_40;
              t = k_132(t);
              t = Cons_2_0(_id, o_135, t);
            }
          LocalPopChoice(n_40);
        }
      else
        {
          t = m_40;
          {
            ATerm k_135 = NULL,l_135 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_135 = ATgetFirst((ATermList) t);
                l_135 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_135), (ATerm) ATmakeAppl(sym_Undefined_1, k_135));
          }
        }
      return(t);
    }
    t = o_135(t);
  }
  c_135 = t;
  t = (ATerm) ATinsert(CheckATermList(c_135), (ATerm) ATmakeAppl(sym_Program_1, z_134));
  g_13 = t;
  t = SSLsetAnnotations(g_13, y_134);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm a_136 = NULL;
  a_136 = t;
  if(match_string(t, "--help"))
    {
      t = a_136;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_136;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_136;
        }
    }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm b_136 = NULL,c_136 = NULL;
  t = term_c_39;
  b_136 = t;
  t = term_j_16;
  c_136 = t;
  t = term_r_40;
  t = p_11(b_136, c_136, t);
  t = term_s_40;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_t_40;
  return(t);
}
static ATerm m_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_132 (ATerm), ATerm t)
{
  ATerm t_135 = NULL,u_135 = NULL,v_135 = NULL,w_135 = NULL,x_135 = NULL,y_135 = NULL,z_135 = NULL;
  v_135 = t;
  t = term_m_37;
  x_135 = t;
  t = term_n_37;
  y_135 = t;
  t = (ATerm) ATempty;
  z_135 = t;
  t = SSL_table_put(x_135, y_135, z_135);
  t = v_135;
  {
    static ATerm h_15 (ATerm t)
    {
      ATerm y_40 = t;
      int z_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_132(t);
          LocalPopChoice(z_40);
        }
      else
        {
          t = y_40;
          {
            ATerm a_41 = t;
            int b_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(i_15, k_15, l_15, t);
                LocalPopChoice(b_41);
              }
            else
              {
                t = a_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(h_15, t);
  }
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_136 = NULL;
        k_136 = t;
        {
          ATerm e_41 = t;
          int f_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_63 = NULL;
              t = k_136;
              {
                ATerm i_41 = t;
                int k_41 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_c_39;
                    t = get_config_0_0(t);
                    LocalPopChoice(k_41);
                  }
                else
                  {
                    t = i_41;
                    t = fetch_1_0(m_15, t);
                  }
              }
              t = k_136;
              t = default_system_usage_0_0(t);
              t = term_d_28;
              w_63 = t;
              t = SSL_exit(w_63);
              LocalPopChoice(f_41);
            }
          else
            {
              t = e_41;
              {
                ATerm b_64 = NULL;
                t = term_r_39;
                t = get_config_0_0(t);
                t = k_136;
                t = default_system_about_0_0(t);
                t = term_d_28;
                b_64 = t;
                t = SSL_exit(b_64);
              }
            }
        }
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        {
          ATerm t_41 = t;
          int u_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_136 = NULL,m_136 = NULL,n_136 = NULL;
              static ATerm n_15 (ATerm t)
              {
                ATerm o_136 = NULL,p_136 = NULL,r_136 = NULL,m_13 = NULL;
                r_136 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_136 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_136);
                o_136 = t;
                t = p_136;
                if(((t_135 != NULL) && (t_135 != t)))
                  _fail(t);
                else
                  t_135 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_136);
                m_13 = t;
                t = SSLsetAnnotations(m_13, o_136);
                return(t);
              }
              t = fetch_1_0(n_15, t);
              t = term_k_16;
              m_136 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_135)), term_w_41);
              n_136 = t;
              t = SSL_printnl(m_136, n_136);
              t = (ATerm) ATmakeAppl(sym__2, term_k_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_135)), term_w_41));
              t = default_system_usage_0_0(t);
              t = term_z_16;
              l_136 = t;
              t = SSL_exit(l_136);
              LocalPopChoice(u_41);
            }
          else
            {
              t = t_41;
            }
        }
      }
  }
  u_135 = t;
  t = term_m_37;
  w_135 = t;
  t = SSL_table_destroy(w_135);
  t = u_135;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm l_130 (ATerm), ATerm m_130 (ATerm), ATerm t)
{
  ATerm w_136 = NULL,x_136 = NULL,y_136 = NULL,z_136 = NULL;
  t = parse_options_1_0(j_130, t);
  w_136 = t;
  t = term_x_41;
  z_136 = t;
  t = SSL_table_create(z_136);
  t = term_x_41;
  x_136 = t;
  t = term_y_41;
  y_136 = t;
  t = SSL_table_put(x_136, y_136, w_136);
  t = w_136;
  t = l_130(t);
  {
    ATerm z_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_130, t);
        LocalPopChoice(a_42);
      }
    else
      {
        t = z_41;
        {
          ATerm b_42 = t;
          int c_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_130(t);
              t = report_success_0_0(t);
              LocalPopChoice(c_42);
            }
          else
            {
              t = b_42;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = if_verbose2_1_0(e_16, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm a_137 = NULL,b_137 = NULL;
  t = term_d_42;
  a_137 = t;
  t = term_j_16;
  b_137 = t;
  t = term_l_42;
  t = p_11(a_137, b_137, t);
  t = term_s_42;
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = term_t_42;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL,f_137 = NULL;
  c_137 = t;
  t = term_d_38;
  t = get_config_0_0(t);
  d_137 = t;
  t = term_k_16;
  e_137 = t;
  t = (ATerm) ATinsert(ATempty, d_137);
  f_137 = t;
  t = SSL_printnl(e_137, f_137);
  t = c_137;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm u_129 (ATerm), ATerm t)
{
  static ATerm o_15 (ATerm t)
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_129(t);
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        {
          ATerm w_42 = t;
          int y_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(y_42);
            }
          else
            {
              t = w_42;
              {
                ATerm z_42 = t;
                int a_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(a_43);
                  }
                else
                  {
                    t = z_42;
                    {
                      ATerm b_43 = t;
                      int j_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(b_16, c_16, d_16, t);
                          LocalPopChoice(j_43);
                        }
                      else
                        {
                          t = b_43;
                          {
                            ATerm m_43 = t;
                            int o_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(o_43);
                              }
                            else
                              {
                                t = m_43;
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
  static ATerm q_15 (ATerm t)
  {
    ATerm g_137 = NULL,h_137 = NULL,i_137 = NULL;
    h_137 = t;
    {
      ATerm p_43 = t;
      int s_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm f_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_137 != NULL) && (g_137 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_137 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_16, t);
          LocalPopChoice(s_43);
        }
      else
        {
          t = p_43;
          t = term_t_43;
          g_137 = t;
        }
    }
    t = not_null(g_137);
    t = ReadFromFile_0_0(t);
    i_137 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_137, i_137);
    t = apply_strategy_1_0(s_129, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(o_15, u_129, p_15, q_15, t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm p_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL,t_137 = NULL,u_137 = NULL,v_137 = NULL,w_137 = NULL,y_137 = NULL,z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL,f_138 = NULL,g_138 = NULL,h_138 = NULL,i_138 = NULL,z_13 = NULL,y_13 = NULL,x_13 = NULL,w_13 = NULL,v_13 = NULL;
  i_138 = t;
  if(match_cons(t, sym__2))
    {
      q_137 = ATgetArgument(t, 0);
      r_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_138);
  p_137 = t;
  t = r_137;
  if(match_cons(t, sym_Specification_1))
    {
      t_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_137);
  s_137 = t;
  t = t_137;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_137 = ATgetFirst((ATermList) t);
      y_137 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_137);
  v_137 = t;
  t = y_137;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_138 = ATgetFirst((ATermList) t);
      c_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_137);
  a_138 = t;
  t = b_138;
  if(match_cons(t, sym_Strategies_1))
    {
      f_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_138);
  e_138 = t;
  t = f_138;
  t = map_1_0(h_16, t);
  g_138 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_138);
  v_13 = t;
  t = SSLsetAnnotations(v_13, e_138);
  h_138 = t;
  t = c_138;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_138), h_138);
  w_13 = t;
  t = SSLsetAnnotations(w_13, a_138);
  d_138 = t;
  t = (ATerm) ATinsert(CheckATermList(d_138), w_137);
  x_13 = t;
  t = SSLsetAnnotations(x_13, v_137);
  z_137 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, z_137);
  y_13 = t;
  t = SSLsetAnnotations(y_13, s_137);
  u_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_137, u_137);
  z_13 = t;
  t = SSLsetAnnotations(z_13, p_137);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm a_139 = NULL,b_139 = NULL,c_139 = NULL,d_139 = NULL,f_139 = NULL;
  f_139 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      a_139 = ATgetArgument(t, 0);
      b_139 = ATgetArgument(t, 1);
      c_139 = ATgetArgument(t, 2);
      d_139 = ATgetArgument(t, 3);
      {
        ATerm u_43 = t;
        int w_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_64 = NULL,g_65 = NULL,q_13 = NULL;
            t = SSLgetAnnotations(f_139);
            r_64 = t;
            t = d_139;
            t = topdown_1_0(i_16, t);
            t = match_to_dfa_0_0(t);
            g_65 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_139, b_139, c_139, g_65);
            q_13 = t;
            t = SSLsetAnnotations(q_13, r_64);
            LocalPopChoice(w_43);
          }
        else
          {
            t = u_43;
            t = f_139;
          }
      }
    }
  else
    {
      t = f_139;
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm i_65 = NULL;
  i_65 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm y_43 = t;
      int z_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_65 = NULL;
          t = i_65;
          t = new_0_0(t);
          j_65 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_65)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_65))));
          LocalPopChoice(z_43);
        }
      else
        {
          t = y_43;
          t = i_65;
        }
    }
  else
    {
      t = i_65;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_16, _fail, default_usage_0_0, t);
  return(t);
}
