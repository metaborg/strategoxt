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
ATerm term_c_44;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_i_42;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_f_41;
ATerm term_t_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_z_39;
ATerm term_x_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_u_38;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_o_38;
ATerm term_b_38;
ATerm term_x_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_o_37;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_k_37;
ATerm term_i_37;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_n_36;
ATerm term_f_36;
ATerm term_z_35;
ATerm term_r_35;
ATerm term_z_34;
ATerm term_u_34;
ATerm term_q_34;
ATerm term_h_33;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_z_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_g_23;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_u_16;
ATerm term_t_16;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Sort_2, term_c_28, (ATerm) ATempty);
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_28);
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym__2, term_x_36, term_q_28);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_28);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym__2, term_l_37, term_t_16);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_37));
  term_o_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym__2, term_u_37, term_v_37);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym__2, term_h_40, term_t_16);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym__2, term_k_40, term_t_16);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym__2, term_l_39, term_t_16);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(sym__2, term_c_43, term_t_16);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym_stdin_0);
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
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm spaste_1_0 (ATerm c_102 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm e_8 (ATerm d_32, ATerm c_32, ATerm t);
ATerm SVar_1_0 (ATerm y_83 (ATerm), ATerm t);
static ATerm f_8 (ATerm d_122 (ATerm), ATerm e_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_55, ATerm q_55, ATerm p_55, ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_8 (ATerm x_121 (ATerm), ATerm y_121 (ATerm (ATerm), ATerm), ATerm j_55, ATerm m_55, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm l_122 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm s_121 (ATerm (ATerm), ATerm), ATerm t_121 (ATerm), ATerm u_121 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_121 (ATerm (ATerm), ATerm), ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm tpaste_1_0 (ATerm y_101 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm p_80 (ATerm), ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm l_9 (ATerm c_75, ATerm b_75, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm c_104 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm simple_strategy_0_0 (ATerm t);
static ATerm l_8 (ATerm h_117 (ATerm), ATerm i_52, ATerm h_52, ATerm t);
ATerm tvars_matrix_boundin_3_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm tvars_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm r_8 (ATerm j_117 (ATerm), ATerm k_52, ATerm j_52, ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_8 (ATerm q_671, ATerm v_671, ATerm z_67, ATerm t);
ATerm while_not_2_0 (ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t);
ATerm for_3_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_85 (ATerm h_84, ATerm i_84, ATerm j_84, ATerm t);
static ATerm v_5 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm free_vars_3_0 (ATerm v_123 (ATerm), ATerm w_123 (ATerm), ATerm x_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm RowLet_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm v_8 (ATerm y_78, ATerm x_78, ATerm t);
static ATerm w_8 (ATerm r_114 (ATerm), ATerm w_47, ATerm u_47, ATerm t);
static ATerm x_7 (ATerm t);
ATerm default_state_0_0 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm MatchCons_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm y_8 (ATerm p_133 (ATerm), ATerm l_77, ATerm i_77, ATerm j_77, ATerm k_77, ATerm t);
static ATerm z_8 (ATerm e_77, ATerm f_77, ATerm g_77, ATerm t);
ATerm filter_1_0 (ATerm g_121 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm k_116 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm ConsArgs_0_0 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm outedges_0_0 (ATerm t);
static ATerm r_98 (ATerm g_97, ATerm t);
ATerm get_path_0_0 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm d_9 (ATerm r_78, ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm f_9 (ATerm h_78, ATerm t);
static ATerm w_9 (ATerm t);
static ATerm h_9 (ATerm f_78, ATerm t);
ATerm repeat_2_0 (ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm t);
static ATerm j_9 (ATerm j_48, ATerm k_48, ATerm t);
ATerm end_scope_1_0 (ATerm o_114 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_114 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm r_115 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_105 (ATerm t_104, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
ATerm MatrixMerge_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm z_102 (ATerm), ATerm t);
static ATerm q_10 (ATerm r_117 (ATerm), ATerm s_117 (ATerm), ATerm q_52, ATerm p_52, ATerm t);
static ATerm r_10 (ATerm o_117 (ATerm), ATerm m_52, ATerm l_52, ATerm t);
ATerm foldr_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t);
static ATerm b_11 (ATerm t);
ATerm collect_om_2_0 (ATerm i_119 (ATerm), ATerm j_119 (ATerm), ATerm t);
ATerm CollectSubst_0_0 (ATerm t);
ATerm IgnoreVar_0_0 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm CollectSplit_2_0 (ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm f_12 (ATerm t);
ATerm nzip0_1_0 (ATerm v_107 (ATerm), ATerm t);
ATerm Propagate_0_0 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
ATerm term_to_matrix_0_0 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm w_12 (ATerm t);
ATerm match_to_matrix_0_0 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
ATerm match_to_dfa_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm y_102 (ATerm), ATerm t);
ATerm map_1_0 (ATerm b_115 (ATerm), ATerm t);
static ATerm d_11 (ATerm t_39, ATerm u_39, ATerm t);
static ATerm e_11 (ATerm l_38, ATerm m_38, ATerm t);
static ATerm g_11 (ATerm i_110 (ATerm), ATerm m_261, ATerm p_38, ATerm t);
static ATerm f_11 (ATerm h_38, ATerm i_38, ATerm t);
static ATerm h_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm k_13 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm c_129 (ATerm), ATerm t);
static ATerm s_125 (ATerm m_125, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_11 (ATerm n_38, ATerm t);
static ATerm i_11 (ATerm v_39, ATerm w_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_127 (ATerm c_126, ATerm t);
static ATerm e_127 (ATerm g_126, ATerm h_126, ATerm i_126, ATerm t);
static ATerm f_127 (ATerm q_126, ATerm r_126, ATerm s_126, ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_115 (ATerm), ATerm t);
static ATerm c_11 (ATerm n_61, ATerm o_61, ATerm t);
ATerm debug_1_0 (ATerm g_110 (ATerm), ATerm t);
static ATerm n_13 (ATerm t);
static ATerm q_13 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm z_111 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_11 (ATerm l_43, ATerm m_43, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_11 (ATerm e_48, ATerm f_48, ATerm d_48, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_11 (ATerm i_46, ATerm j_46, ATerm t);
ATerm foldr_2_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_111 (ATerm), ATerm t);
static ATerm s_14 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_14 (ATerm t);
ATerm need_help_1_0 (ATerm a_130 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm m_11 (ATerm v_49, ATerm w_49, ATerm t);
static ATerm a_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm k_15 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_132 (ATerm), ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
ATerm parse_options_1_0 (ATerm c_132 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t);
static ATerm a_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
ATerm iowrap_3_0 (ATerm l_129 (ATerm), ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm q_16 (ATerm t);
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
  t = term_t_16;
  t = whoami_0_0(t);
  m_0 = t;
  t = term_u_16;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_17), m_0), term_b_17);
  t_0 = t;
  t = SSL_printnl(s_0, t_0);
  t = term_e_17;
  q_0 = t;
  t = SSL_exit(q_0);
  t = j_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_17 = ATgetArgument(t, 0);
      if(((ATgetType(f_17) != AT_LIST) || !(ATisEmpty(f_17))))
        _fail(t);
      {
        ATerm g_17 = ATgetArgument(t, 1);
        if(((ATgetType(g_17) != AT_LIST) || !(ATisEmpty(g_17))))
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
      ATerm h_17 = ATgetArgument(t, 0);
      if(((ATgetType(h_17) == AT_LIST) && !(ATisEmpty(h_17))))
        {
          a_1 = ATgetFirst((ATermList) h_17);
          b_1 = (ATerm) ATgetNext((ATermList) h_17);
        }
      else
        _fail(t);
      {
        ATerm m_17 = ATgetArgument(t, 1);
        if(((ATgetType(m_17) == AT_LIST) && !(ATisEmpty(m_17))))
          {
            c_1 = ATgetFirst((ATermList) m_17);
            d_1 = (ATerm) ATgetNext((ATermList) m_17);
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
    ATerm n_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm s_17 = ATgetArgument(t, 0);
            j_1 = ATgetArgument(t, 1);
            k_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(p_17);
        t = (ATerm) ATmakeAppl(sym_SDef_3, m_1, j_1, k_1);
      }
    else
      {
        t = n_17;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm t_17 = ATgetArgument(t, 0);
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
      ATerm u_17 = ATgetArgument(t, 0);
      if(((ATgetType(u_17) != AT_LIST) || !(ATisEmpty(u_17))))
        _fail(t);
      {
        ATerm w_17 = ATgetArgument(t, 1);
        if(((ATgetType(w_17) != AT_LIST) || !(ATisEmpty(w_17))))
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
  ATerm r_4 = NULL,s_4 = NULL,x_4 = NULL,z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_17 = ATgetArgument(t, 0);
      if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
        {
          r_4 = ATgetFirst((ATermList) x_17);
          s_4 = (ATerm) ATgetNext((ATermList) x_17);
        }
      else
        _fail(t);
      {
        ATerm y_17 = ATgetArgument(t, 1);
        if(((ATgetType(y_17) == AT_LIST) && !(ATisEmpty(y_17))))
          {
            x_4 = ATgetFirst((ATermList) y_17);
            z_4 = (ATerm) ATgetNext((ATermList) y_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_4, x_4), (ATerm) ATmakeAppl(sym__2, s_4, z_4));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm b_5 = NULL,c_5 = NULL;
  if(match_cons(t, sym__2))
    {
      b_5 = ATgetArgument(t, 0);
      c_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_5), b_5);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm g_5 = NULL,i_5 = NULL,j_5 = NULL;
  if(match_cons(t, sym__2))
    {
      g_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5;
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_5);
      }
    else
      {
        t = z_17;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_18 = ATgetArgument(t, 0);
            i_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_5, i_5);
      }
  }
  return(t);
}
static ATerm n_1 (ATerm t)
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
static ATerm o_1 (ATerm t)
{
  ATerm h_7 = NULL,k_7 = NULL,o_7 = NULL,p_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_18 = ATgetArgument(t, 0);
      if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
        {
          h_7 = ATgetFirst((ATermList) f_18);
          k_7 = (ATerm) ATgetNext((ATermList) f_18);
        }
      else
        _fail(t);
      {
        ATerm g_18 = ATgetArgument(t, 1);
        if(((ATgetType(g_18) == AT_LIST) && !(ATisEmpty(g_18))))
          {
            o_7 = ATgetFirst((ATermList) g_18);
            p_7 = (ATerm) ATgetNext((ATermList) g_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_7, o_7), (ATerm) ATmakeAppl(sym__2, k_7, p_7));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_7), r_7);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm u_7 = NULL,y_7 = NULL,o_8 = NULL;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_7;
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_8);
      }
    else
      {
        t = h_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_18 = ATgetArgument(t, 0);
            y_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_8, y_7);
      }
  }
  return(t);
}
static ATerm r_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_18 = ATgetArgument(t, 0);
      if(((ATgetType(o_18) != AT_LIST) || !(ATisEmpty(o_18))))
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
static ATerm s_1 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL,a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_18 = ATgetArgument(t, 0);
      if(((ATgetType(q_18) == AT_LIST) && !(ATisEmpty(q_18))))
        {
          x_9 = ATgetFirst((ATermList) q_18);
          y_9 = (ATerm) ATgetNext((ATermList) q_18);
        }
      else
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
          {
            a_10 = ATgetFirst((ATermList) r_18);
            b_10 = (ATerm) ATgetNext((ATermList) r_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_9, a_10), (ATerm) ATmakeAppl(sym__2, y_9, b_10));
  return(t);
}
static ATerm t_1 (ATerm t)
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
  ATerm f_10 = NULL,n_10 = NULL,o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      f_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_10;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_10);
      }
    else
      {
        t = s_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_18 = ATgetArgument(t, 0);
            n_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_10, n_10);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,a_9 = NULL,o_9 = NULL,z_9 = NULL,g_10 = NULL;
  o_9 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_9 = ATgetArgument(t, 0);
      g_10 = ATgetArgument(t, 1);
      {
        ATerm u_0 = NULL,x_0 = NULL,y_0 = NULL,u_1 = NULL;
        t = SSLgetAnnotations(o_9);
        u_0 = t;
        t = z_9;
        t = c_102(t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_9, y_0);
        t = genzip_4_0(a_0, b_0, f_0, v_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_0, g_10);
        u_1 = t;
        t = SSLsetAnnotations(u_1, u_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_9 = ATgetArgument(t, 0);
          g_10 = ATgetArgument(t, 1);
          n_8 = ATgetArgument(t, 2);
          {
            ATerm y_2 = NULL,m_4 = NULL,o_4 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(o_9);
            y_2 = t;
            t = g_10;
            t = c_102(t);
            o_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_10, o_4);
            t = genzip_4_0(w_0, z_0, g_1, i_1, t);
            m_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, z_9, m_4, n_8);
            v_1 = t;
            t = SSLsetAnnotations(v_1, y_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              z_9 = ATgetArgument(t, 0);
              g_10 = ATgetArgument(t, 1);
              n_8 = ATgetArgument(t, 2);
              a_9 = ATgetArgument(t, 3);
              {
                ATerm f_6 = NULL,v_6 = NULL,x_6 = NULL,w_1 = NULL;
                t = SSLgetAnnotations(o_9);
                f_6 = t;
                t = g_10;
                t = c_102(t);
                x_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_10, x_6);
                t = genzip_4_0(n_1, o_1, p_1, q_1, t);
                v_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_9, v_6, n_8, a_9);
                w_1 = t;
                t = SSLsetAnnotations(w_1, f_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  z_9 = ATgetArgument(t, 0);
                  g_10 = ATgetArgument(t, 1);
                  n_8 = ATgetArgument(t, 2);
                  a_9 = ATgetArgument(t, 3);
                  {
                    ATerm p_9 = NULL,u_9 = NULL,v_9 = NULL,x_1 = NULL;
                    t = SSLgetAnnotations(o_9);
                    p_9 = t;
                    t = g_10;
                    t = c_102(t);
                    v_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_10, v_9);
                    t = genzip_4_0(r_1, s_1, t_1, z_1, t);
                    u_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, z_9, u_9, n_8, a_9);
                    x_1 = t;
                    t = SSLsetAnnotations(x_1, p_9);
                  }
                }
              else
                {
                  ATerm r_11 = NULL,u_11 = NULL,y_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      z_9 = ATgetArgument(t, 0);
                      g_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_9);
                  r_11 = t;
                  t = z_9;
                  t = c_102(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_11 = ATgetFirst((ATermList) t);
                      {
                        ATerm w_18 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, u_11, g_10);
                  y_1 = t;
                  t = SSLsetAnnotations(y_1, r_11);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm f_102 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
      {
        ATerm j_12 = NULL,m_12 = NULL,n_12 = NULL,g_2 = NULL;
        t = SSLgetAnnotations(w_14);
        j_12 = t;
        t = x_14;
        t = d_102(t);
        m_12 = t;
        t = y_14;
        t = d_102(t);
        n_12 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, m_12, n_12);
        g_2 = t;
        t = SSLsetAnnotations(g_2, j_12);
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
            ATerm i_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(w_14);
            i_13 = t;
            t = x_14;
            t = f_102(t);
            r_13 = t;
            t = y_14;
            t = f_102(t);
            s_13 = t;
            t = u_14;
            t = d_102(t);
            t_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, r_13, s_13, t_13);
            h_2 = t;
            t = SSLsetAnnotations(h_2, i_13);
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
                t = f_102(t);
                s_15 = t;
                t = y_14;
                t = f_102(t);
                u_15 = t;
                t = u_14;
                t = f_102(t);
                v_15 = t;
                t = v_14;
                t = d_102(t);
                y_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_15, u_15, v_15, y_15);
                i_2 = t;
                t = SSLsetAnnotations(i_2, b_15);
              }
            }
          else
            {
              ATerm l_16 = NULL,a_17 = NULL,c_17 = NULL,k_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  x_14 = ATgetArgument(t, 0);
                  y_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_14);
              l_16 = t;
              t = x_14;
              t = f_102(t);
              a_17 = t;
              t = y_14;
              t = d_102(t);
              c_17 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, a_17, c_17);
              k_2 = t;
              t = SSLsetAnnotations(k_2, l_16);
            }
        }
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm j_15 = NULL;
  ATerm x_18 = t;
  int y_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_15 = ATgetArgument(t, 0);
          {
            ATerm a_19 = ATgetArgument(t, 1);
          }
          {
            ATerm b_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_18);
      t = j_15;
    }
  else
    {
      t = x_18;
      if(match_cons(t, sym_SDefT_4))
        {
          j_15 = ATgetArgument(t, 0);
          {
            ATerm e_19 = ATgetArgument(t, 1);
          }
          {
            ATerm f_19 = ATgetArgument(t, 2);
          }
          {
            ATerm j_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_15;
    }
  return(t);
}
static ATerm e_8 (ATerm d_32, ATerm c_32, ATerm t)
{
  t = d_32;
  t = map_1_0(a_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm y_83 (ATerm), ATerm t)
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
  t = y_83(t);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, w_15);
  t_2 = t;
  t = SSLsetAnnotations(t_2, r_15);
  return(t);
}
static ATerm f_8 (ATerm d_122 (ATerm), ATerm e_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_55, ATerm q_55, ATerm p_55, ATerm t)
{
  static ATerm b_2 (ATerm t)
  {
    ATerm c_16 = NULL;
    c_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_16, p_55);
    t = d_122(t);
    return(t);
  }
  static ATerm c_2 (ATerm t)
  {
    ATerm d_16 = NULL;
    d_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_16, q_55);
    t = d_122(t);
    return(t);
  }
  t = r_55;
  t = e_122(b_2, c_2, _id, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if(((ATgetType(k_19) != AT_LIST) || !(ATisEmpty(k_19))))
        _fail(t);
      {
        ATerm l_19 = ATgetArgument(t, 1);
        if(((ATgetType(l_19) != AT_LIST) || !(ATisEmpty(l_19))))
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
  ATerm s_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
        {
          s_16 = ATgetFirst((ATermList) m_19);
          v_16 = (ATerm) ATgetNext((ATermList) m_19);
        }
      else
        _fail(t);
      {
        ATerm n_19 = ATgetArgument(t, 1);
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            w_16 = ATgetFirst((ATermList) n_19);
            x_16 = (ATerm) ATgetNext((ATermList) n_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_16, w_16), (ATerm) ATmakeAppl(sym__2, v_16, x_16));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_16), y_16);
  return(t);
}
static ATerm g_8 (ATerm x_121 (ATerm), ATerm y_121 (ATerm (ATerm), ATerm), ATerm j_55, ATerm m_55, ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,r_16 = NULL;
  t = j_55;
  t = x_121(t);
  m_16 = t;
  t = map_1_0(new_0_0, t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_16, n_16);
  t = genzip_4_0(d_2, e_2, f_2, _id, t);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_16, m_55);
  t = conc_0_0(t);
  o_16 = t;
  t = j_55;
  {
    static ATerm j_2 (ATerm t)
    {
      t = n_16;
      return(t);
    }
    t = y_121(j_2, t);
  }
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_16, m_55, o_16);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,o_17 = NULL,q_17 = NULL,r_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      o_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_17;
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
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_17;
            if((l_17 != t))
              {
                _fail(t);
              }
            t = j_17;
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            t = (ATerm) ATmakeAppl(sym__2, l_17, r_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_17, r_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm l_122 (ATerm), ATerm t)
{
  static ATerm h_19 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_122(t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        {
          ATerm c_19 = NULL,d_19 = NULL,g_19 = NULL;
          static ATerm l_2 (ATerm t)
          {
            ATerm v_17 = NULL;
            v_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_17, not_null(g_19));
            t = h_19(t);
            return(t);
          }
          c_19 = t;
          if(match_cons(t, sym__2))
            {
              d_19 = ATgetArgument(t, 0);
              if(((g_19 != NULL) && (g_19 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                g_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_19;
          t = SRTS_all(l_2, t);
        }
      }
    return(t);
  }
  t = h_19(t);
  return(t);
}
ATerm rename_4_0 (ATerm s_121 (ATerm (ATerm), ATerm), ATerm t_121 (ATerm), ATerm u_121 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_121 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_19 = NULL;
  static ATerm s_20 (ATerm t)
  {
    static ATerm m_2 (ATerm t)
    {
      ATerm e_20 = NULL,i_20 = NULL,l_20 = NULL;
      e_20 = t;
      if(match_cons(t, sym__2))
        {
          i_20 = ATgetArgument(t, 0);
          l_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_2 (ATerm t)
            {
              ATerm o_20 = NULL;
              o_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_20, l_20);
              t = lookup_0_0(t);
              return(t);
            }
            t = i_20;
            t = s_121(n_2, t);
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            {
              ATerm k_18 = NULL,l_18 = NULL,n_18 = NULL;
              t = e_20;
              t = g_8(t_121, v_121, i_20, l_20, t);
              if(match_cons(t, sym__3))
                {
                  k_18 = ATgetArgument(t, 0);
                  l_18 = ATgetArgument(t, 1);
                  n_18 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_8(s_20, u_121, k_18, l_18, n_18, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(m_2, t);
    return(t);
  }
  o_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_19, (ATerm) ATempty);
  t = s_20(t);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_19 = ATgetArgument(t, 0);
      if(((ATgetType(v_19) != AT_LIST) || !(ATisEmpty(v_19))))
        _fail(t);
      {
        ATerm w_19 = ATgetArgument(t, 1);
        if(((ATgetType(w_19) != AT_LIST) || !(ATisEmpty(w_19))))
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
  ATerm q_20 = NULL,r_20 = NULL,u_20 = NULL,v_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
        {
          q_20 = ATgetFirst((ATermList) x_19);
          r_20 = (ATerm) ATgetNext((ATermList) x_19);
        }
      else
        _fail(t);
      {
        ATerm y_19 = ATgetArgument(t, 1);
        if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
          {
            u_20 = ATgetFirst((ATermList) y_19);
            v_20 = (ATerm) ATgetNext((ATermList) y_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_20, u_20), (ATerm) ATmakeAppl(sym__2, r_20, v_20));
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
    ATerm z_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_21);
      }
    else
      {
        t = z_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_20 = ATgetArgument(t, 0);
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
      ATerm f_20 = ATgetArgument(t, 0);
      if(((ATgetType(f_20) != AT_LIST) || !(ATisEmpty(f_20))))
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
static ATerm u_2 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_20 = ATgetArgument(t, 0);
      if(((ATgetType(h_20) == AT_LIST) && !(ATisEmpty(h_20))))
        {
          a_22 = ATgetFirst((ATermList) h_20);
          b_22 = (ATerm) ATgetNext((ATermList) h_20);
        }
      else
        _fail(t);
      {
        ATerm m_20 = ATgetArgument(t, 1);
        if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
          {
            c_22 = ATgetFirst((ATermList) m_20);
            d_22 = (ATerm) ATgetNext((ATermList) m_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_22, c_22), (ATerm) ATmakeAppl(sym__2, b_22, d_22));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_22), e_22);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm h_22 = NULL,j_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_22;
  {
    ATerm n_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_22);
      }
    else
      {
        t = n_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_20 = ATgetArgument(t, 0);
            j_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_22, j_22);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  m_27 = t;
  if(match_cons(t, sym_Scope_2))
    {
      n_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
      {
        ATerm z_18 = NULL,i_19 = NULL,v_2 = NULL;
        t = SSLgetAnnotations(m_27);
        z_18 = t;
        t = n_27;
        t = y_101(t);
        i_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_19, o_27);
        v_2 = t;
        t = SSLsetAnnotations(v_2, z_18);
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
            ATerm b_20 = NULL,j_20 = NULL,k_20 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(m_27);
            b_20 = t;
            t = p_27;
            t = y_101(t);
            k_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_27, k_20);
            t = genzip_4_0(o_2, p_2, q_2, r_2, t);
            j_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, n_27, o_27, j_20, q_27);
            w_2 = t;
            t = SSLsetAnnotations(w_2, b_20);
          }
        }
      else
        {
          ATerm r_21 = NULL,x_21 = NULL,y_21 = NULL,x_2 = NULL;
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
          r_21 = t;
          t = p_27;
          t = y_101(t);
          y_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_27, y_21);
          t = genzip_4_0(s_2, u_2, z_2, a_3, t);
          x_21 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, n_27, o_27, x_21, q_27);
          x_2 = t;
          t = SSLsetAnnotations(x_2, r_21);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm p_80 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,c_3 = NULL;
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
  t = p_80(t);
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_27);
  c_3 = t;
  t = SSLsetAnnotations(c_3, u_27);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm a_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = a_21;
      {
        ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            m_28 = ATgetArgument(t, 0);
            n_28 = ATgetArgument(t, 1);
            o_28 = ATgetArgument(t, 2);
            p_28 = ATgetArgument(t, 3);
            t = o_28;
            t = map_1_0(d_3, t);
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
            t = map_1_0(u_3, t);
          }
      }
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm w_28 = NULL;
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_28 = ATgetArgument(t, 0);
          {
            ATerm g_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_21);
      t = w_28;
    }
  else
    {
      t = e_21;
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
static ATerm u_3 (ATerm t)
{
  ATerm r_29 = NULL;
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_29 = ATgetArgument(t, 0);
          {
            ATerm j_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_21);
      t = r_29;
    }
  else
    {
      t = h_21;
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
static ATerm v_3 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL;
  v_29 = t;
  if(match_cons(t, sym_Let_2))
    {
      w_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
      t = v_29;
      t = e_8(w_29, x_29, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          w_29 = ATgetArgument(t, 0);
          x_29 = ATgetArgument(t, 1);
          y_29 = ATgetArgument(t, 2);
          t = x_29;
          t = map_1_0(w_3, t);
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
                  t = map_1_0(x_3, t);
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
                  t = map_1_0(y_3, t);
                }
            }
        }
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm f_31 = NULL;
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_31 = ATgetArgument(t, 0);
          {
            ATerm m_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_21);
      t = f_31;
    }
  else
    {
      t = k_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_31;
    }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm z_32 = NULL;
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_32 = ATgetArgument(t, 0);
          {
            ATerm p_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_21);
      t = z_32;
    }
  else
    {
      t = n_21;
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
static ATerm y_3 (ATerm t)
{
  ATerm r_33 = NULL;
  ATerm q_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_33 = ATgetArgument(t, 0);
          {
            ATerm t_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_21);
      t = r_33;
    }
  else
    {
      t = q_21;
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
  t = rename_4_0(Var_1_0, b_3, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, v_3, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm w_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(v_21);
      {
        ATerm y_33 = NULL,z_33 = NULL;
        y_33 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm z_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        z_33 = t;
        t = SSLgetAnnotations(y_33);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_22 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) g_22) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_22 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(i_22) != AT_LIST) || !(ATisEmpty(i_22))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = z_33;
      }
    }
  else
    {
      t = u_21;
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm n_22 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) n_22) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm o_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_22);
            _fail(t);
          }
        else
          {
            t = l_22;
          }
      }
    }
  return(t);
}
static ATerm l_9 (ATerm c_75, ATerm b_75, ATerm t)
{
  t = c_75;
  t = topdown_1_0(z_3, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, c_75);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm t_34 = NULL,y_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
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
      y_34 = ATgetArgument(t, 1);
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
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_35)), y_34);
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
  ATerm t_35 = NULL,u_35 = NULL,w_35 = NULL,x_35 = NULL,a_36 = NULL,g_36 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_35 = ATgetArgument(t, 0);
      a_36 = ATgetArgument(t, 1);
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
  t = a_36;
  if(match_cons(t, sym_Seq_2))
    {
      g_36 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
      t = g_36;
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
          g_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_36;
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
  ATerm r_36 = NULL,w_36 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,h_37 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_37 = ATgetArgument(t, 0);
      d_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_37;
  if(match_cons(t, sym_Match_1))
    {
      c_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_37;
  if(match_cons(t, sym_Seq_2))
    {
      h_37 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
      t = h_37;
      if(match_cons(t, sym_Match_1))
        {
          r_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_36;
      if((c_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_37), w_36);
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
      if((c_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, c_37);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,e_38 = NULL,j_38 = NULL,k_38 = NULL,q_38 = NULL,v_38 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_38;
  if(match_cons(t, sym_Build_1))
    {
      ATerm p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_38;
  if(match_cons(t, sym_Seq_2))
    {
      k_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
      t = k_38;
      if(match_cons(t, sym_PrimT_3))
        {
          y_37 = ATgetArgument(t, 0);
          z_37 = ATgetArgument(t, 1);
          a_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, y_37, z_37, a_38), q_38);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          k_38 = ATgetArgument(t, 0);
          q_38 = ATgetArgument(t, 1);
          v_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, k_38, q_38, v_38);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm n_39 = NULL,q_39 = NULL,s_39 = NULL,a_40 = NULL,e_40 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_39 = ATgetArgument(t, 0);
      a_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_39;
  if(match_cons(t, sym_Build_1))
    {
      ATerm q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_40;
  if(match_cons(t, sym_Seq_2))
    {
      e_40 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
      t = e_40;
      if(match_cons(t, sym_Build_1))
        {
          n_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_39), q_39);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, e_40);
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_22 = ATgetArgument(t, 0);
      if(((ATgetType(r_22) != AT_LIST) || !(ATisEmpty(r_22))))
        _fail(t);
      {
        ATerm s_22 = ATgetArgument(t, 1);
        if(((ATgetType(s_22) != AT_LIST) || !(ATisEmpty(s_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
        {
          e_42 = ATgetFirst((ATermList) t_22);
          f_42 = (ATerm) ATgetNext((ATermList) t_22);
        }
      else
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
          {
            g_42 = ATgetFirst((ATermList) u_22);
            h_42 = (ATerm) ATgetNext((ATermList) u_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_42, g_42), (ATerm) ATmakeAppl(sym__2, f_42, h_42));
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  if(match_cons(t, sym__2))
    {
      j_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_42), j_42);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  if(match_cons(t, sym__2))
    {
      p_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_42), (ATerm) ATmakeAppl(sym_Match_1, q_42));
  return(t);
}
static ATerm e_4 (ATerm t)
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
static ATerm f_4 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_22 = ATgetArgument(t, 0);
      if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
        {
          x_42 = ATgetFirst((ATermList) x_22);
          y_42 = (ATerm) ATgetNext((ATermList) x_22);
        }
      else
        _fail(t);
      {
        ATerm y_22 = ATgetArgument(t, 1);
        if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
          {
            z_42 = ATgetFirst((ATermList) y_22);
            a_43 = (ATerm) ATgetNext((ATermList) y_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_42, z_42), (ATerm) ATmakeAppl(sym__2, y_42, a_43));
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
  ATerm i_43 = NULL,j_43 = NULL;
  if(match_cons(t, sym__2))
    {
      i_43 = ATgetArgument(t, 0);
      j_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_43), (ATerm) ATmakeAppl(sym_Match_1, j_43));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,t_41 = NULL,u_41 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_41 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_41;
  if(match_cons(t, sym_Build_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_41;
  if(match_cons(t, sym_Op_2))
    {
      i_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_41;
  if(match_cons(t, sym_Seq_2))
    {
      o_41 = ATgetArgument(t, 0);
      e_41 = ATgetArgument(t, 1);
      {
        ATerm d_42 = NULL;
        t = o_41;
        if(match_cons(t, sym_Match_1))
          {
            t_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_41;
        if(match_cons(t, sym_Op_2))
          {
            c_41 = ATgetArgument(t, 0);
            d_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_41;
        if((i_41 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, m_41, d_41);
        t = genzip_4_0(a_4, b_4, c_4, d_4, t);
        d_42 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_41, m_41)), e_41));
      }
    }
  else
    {
      ATerm u_42 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          o_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_41;
      if(match_cons(t, sym_Op_2))
        {
          t_41 = ATgetArgument(t, 0);
          u_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_41;
      if((i_41 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, m_41, u_41);
      t = genzip_4_0(e_4, f_4, g_4, h_4, t);
      u_42 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_42), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_41, m_41)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm e_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,n_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL;
  h_45 = t;
  if(match_cons(t, sym_Seq_2))
    {
      i_45 = ATgetArgument(t, 0);
      q_45 = ATgetArgument(t, 1);
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
      n_45 = ATgetArgument(t, 0);
      {
        ATerm z_22 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_45;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            r_45 = ATgetArgument(t, 0);
            {
              ATerm d_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_23);
        t = r_45;
        if(match_cons(t, sym_Match_1))
          {
            s_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_45;
        if(match_cons(t, sym_Op_2))
          {
            e_45 = ATgetArgument(t, 0);
            {
              ATerm e_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_45, e_45);
        {
          ATerm f_23 = t;
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
              t = f_23;
            }
        }
        t = term_g_23;
      }
    else
      {
        t = b_23;
        if(match_cons(t, sym_Match_1))
          {
            r_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_45;
        if(match_cons(t, sym_Op_2))
          {
            s_45 = ATgetArgument(t, 0);
            {
              ATerm h_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_45, s_45);
        {
          ATerm i_23 = t;
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
              t = i_23;
            }
        }
        t = term_g_23;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm c_104 (ATerm), ATerm t)
{
  static ATerm y_45 (ATerm t)
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_104(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = SRTS_one(y_45, t);
      }
    return(t);
  }
  t = y_45(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm e_47 = NULL,h_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,z_47 = NULL,a_48 = NULL,c_48 = NULL,g_48 = NULL,h_48 = NULL,l_48 = NULL,q_48 = NULL,r_48 = NULL;
  e_47 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_47 = ATgetArgument(t, 0);
      g_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_48;
  if(match_cons(t, sym_Let_2))
    {
      h_48 = ATgetArgument(t, 0);
      q_48 = ATgetArgument(t, 1);
      {
        ATerm v_48 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, h_47, h_48);
        t = conc_0_0(t);
        v_48 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, v_48, q_48);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          h_48 = ATgetArgument(t, 0);
          q_48 = ATgetArgument(t, 1);
          r_48 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_47;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_47 = ATgetFirst((ATermList) t);
          c_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_47;
      if(match_cons(t, sym_SDefT_4))
        {
          l_47 = ATgetArgument(t, 0);
          m_47 = ATgetArgument(t, 1);
          z_47 = ATgetArgument(t, 2);
          a_48 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = m_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_47;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_48;
      if(match_cons(t, sym_SVar_1))
        {
          l_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_48;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_48;
      if((l_47 != t))
        {
          _fail(t);
        }
      t = a_48;
      {
        ATerm m_23 = t;
        if((PushChoice() == 0))
          {
            static ATerm i_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm n_23 = ATgetArgument(t, 0);
                  if(match_cons(n_23, sym_SVar_1))
                    {
                      if((l_47 != ATgetArgument(n_23, 0)))
                        {
                          _fail(ATgetArgument(n_23, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_23 = ATgetArgument(t, 1);
                    if(((ATgetType(o_23) != AT_LIST) || !(ATisEmpty(o_23))))
                      _fail(t);
                  }
                  {
                    ATerm p_23 = ATgetArgument(t, 2);
                    if(((ATgetType(p_23) != AT_LIST) || !(ATisEmpty(p_23))))
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
            t = m_23;
          }
      }
      t = a_48;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm k_49 = NULL,l_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,z_49 = NULL,a_50 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      z_49 = ATgetArgument(t, 0);
      t = z_49;
      if(match_cons(t, sym_Seq_2))
        {
          r_49 = ATgetArgument(t, 0);
          l_49 = ATgetArgument(t, 1);
          t = r_49;
          if(match_cons(t, sym_Where_1))
            {
              k_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_49;
          if(match_cons(t, sym_Seq_2))
            {
              o_49 = ATgetArgument(t, 0);
              q_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_49;
          if(match_cons(t, sym_Build_1))
            {
              p_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, k_49, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_49), q_49)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              r_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, r_49);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          z_49 = ATgetArgument(t, 0);
          t = z_49;
          if(match_cons(t, sym_Test_1))
            {
              r_49 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, r_49);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              z_49 = ATgetArgument(t, 0);
              t = z_49;
              if(match_cons(t, sym_Not_1))
                {
                  r_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, r_49);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  z_49 = ATgetArgument(t, 0);
                  a_50 = ATgetArgument(t, 1);
                  t = a_50;
                  if((z_49 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      z_49 = ATgetArgument(t, 0);
                      a_50 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = a_50;
                  if((z_49 != t))
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
  ATerm q_51 = NULL,r_51 = NULL,u_51 = NULL,y_51 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      q_51 = ATgetArgument(t, 0);
      y_51 = ATgetArgument(t, 1);
      t = q_51;
      if(match_cons(t, sym_LChoice_2))
        {
          r_51 = ATgetArgument(t, 0);
          u_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, r_51, (ATerm) ATmakeAppl(sym_LChoice_2, u_51, y_51));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          q_51 = ATgetArgument(t, 0);
          y_51 = ATgetArgument(t, 1);
          t = q_51;
          if(match_cons(t, sym_Seq_2))
            {
              r_51 = ATgetArgument(t, 0);
              u_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, r_51, (ATerm) ATmakeAppl(sym_Seq_2, u_51, y_51));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              q_51 = ATgetArgument(t, 0);
              y_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_51;
          if(match_cons(t, sym_Choice_2))
            {
              r_51 = ATgetArgument(t, 0);
              u_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, r_51, (ATerm) ATmakeAppl(sym_Choice_2, u_51, y_51));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,a_54 = NULL,b_54 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      a_54 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, a_54, b_54);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          a_54 = ATgetArgument(t, 0);
          t = a_54;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_53 = ATgetFirst((ATermList) t);
              p_53 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, o_53, (ATerm) ATmakeAppl(sym_LChoices_1, p_53));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_g_23;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              a_54 = ATgetArgument(t, 0);
              t = a_54;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_53 = ATgetFirst((ATermList) t);
                  p_53 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, o_53, (ATerm) ATmakeAppl(sym_Choices_1, p_53));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_g_23;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  a_54 = ATgetArgument(t, 0);
                  t = a_54;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_53 = ATgetFirst((ATermList) t);
                      p_53 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_53, (ATerm) ATmakeAppl(sym_Seqs_1, p_53));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_q_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      a_54 = ATgetArgument(t, 0);
                      b_54 = ATgetArgument(t, 1);
                      q_53 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, b_54, (ATerm) ATmakeAppl(sym_Op_2, term_r_23, (ATerm) ATinsert(ATinsert(ATempty, q_53), a_54)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          a_54 = ATgetArgument(t, 0);
                          b_54 = ATgetArgument(t, 1);
                          q_53 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_53)), a_54), (ATerm) ATmakeAppl(sym_Build_1, b_54)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              a_54 = ATgetArgument(t, 0);
                              b_54 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_54, (ATerm) ATmakeAppl(sym_Match_1, b_54));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  a_54 = ATgetArgument(t, 0);
                                  b_54 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_54), b_54);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      a_54 = ATgetArgument(t, 0);
                                      b_54 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_54), a_54);
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
  ATerm w_57 = NULL,z_57 = NULL,a_58 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      w_57 = ATgetArgument(t, 0);
      t = w_57;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_g_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          w_57 = ATgetArgument(t, 0);
          t = w_57;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_q_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              w_57 = ATgetArgument(t, 0);
              z_57 = ATgetArgument(t, 1);
              t = w_57;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_g_23;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  w_57 = ATgetArgument(t, 0);
                  z_57 = ATgetArgument(t, 1);
                  t = z_57;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_g_23;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      w_57 = ATgetArgument(t, 0);
                      z_57 = ATgetArgument(t, 1);
                      t = z_57;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_g_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          w_57 = ATgetArgument(t, 0);
                          t = w_57;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_g_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              w_57 = ATgetArgument(t, 0);
                              t = w_57;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_g_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  w_57 = ATgetArgument(t, 0);
                                  z_57 = ATgetArgument(t, 1);
                                  t = z_57;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_g_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      w_57 = ATgetArgument(t, 0);
                                      z_57 = ATgetArgument(t, 1);
                                      t = z_57;
                                      t = fetch_1_0(j_4, t);
                                      t = term_g_23;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          w_57 = ATgetArgument(t, 0);
                                          z_57 = ATgetArgument(t, 1);
                                          t = z_57;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = w_57;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = z_57;
                                                }
                                              else
                                                {
                                                  t = w_57;
                                                }
                                            }
                                          else
                                            {
                                              t = w_57;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = z_57;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              w_57 = ATgetArgument(t, 0);
                                              z_57 = ATgetArgument(t, 1);
                                              t = z_57;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = w_57;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = z_57;
                                                    }
                                                  else
                                                    {
                                                      t = w_57;
                                                    }
                                                }
                                              else
                                                {
                                                  t = w_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = z_57;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  w_57 = ATgetArgument(t, 0);
                                                  t = w_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_g_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      w_57 = ATgetArgument(t, 0);
                                                      z_57 = ATgetArgument(t, 1);
                                                      a_58 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = a_58;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_57, z_57);
                                                }
                                            }
                                        }
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
  ATerm s_59 = NULL,u_59 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_59 = ATgetArgument(t, 0);
      t = u_59;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_q_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_59 = ATgetArgument(t, 0);
          t = u_59;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_g_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_59 = ATgetArgument(t, 0);
              s_59 = ATgetArgument(t, 1);
              t = s_59;
              if(match_cons(t, sym_Id_0))
                {
                  t = u_59;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = s_59;
                    }
                  else
                    {
                      t = u_59;
                    }
                }
              else
                {
                  t = u_59;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = s_59;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  u_59 = ATgetArgument(t, 0);
                  s_59 = ATgetArgument(t, 1);
                  t = u_59;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_q_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      u_59 = ATgetArgument(t, 0);
                      s_59 = ATgetArgument(t, 1);
                      t = s_59;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_q_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          u_59 = ATgetArgument(t, 0);
                          s_59 = ATgetArgument(t, 1);
                          t = s_59;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_q_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              u_59 = ATgetArgument(t, 0);
                              t = u_59;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_q_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  u_59 = ATgetArgument(t, 0);
                                  t = u_59;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_q_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      u_59 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = u_59;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_q_23;
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
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm w_23 = t;
              int x_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
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
                        t = AssociateR_0_0(t);
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
                              t = Idempotency_0_0(t);
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
                                    ATerm v_60 = NULL,w_60 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        v_60 = ATgetArgument(t, 0);
                                        w_60 = ATgetArgument(t, 1);
                                        t = v_60;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = w_60;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            v_60 = ATgetArgument(t, 0);
                                            w_60 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = v_60;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = w_60;
                                      }
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
                                          t = LetHoist_0_0(t);
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
                                                t = MisMatch_0_0(t);
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
                                                      t = BuildMatchFusion_0_0(t);
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
                                                            t = BuildBuild_0_0(t);
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
                                                                  t = BuildPrim_0_0(t);
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
                                                                        t = MatchIdem_0_0(t);
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
                                                                              t = BuildMatchIdem_0_0(t);
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
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(t_24);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_24;
                                                                                    {
                                                                                      ATerm z_60 = NULL,a_61 = NULL,d_61 = NULL,e_61 = NULL;
                                                                                      a_61 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          d_61 = ATgetArgument(t, 0);
                                                                                          e_61 = ATgetArgument(t, 1);
                                                                                          t = d_61;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              z_60 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = a_61;
                                                                                          t = l_9(z_60, e_61, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              d_61 = ATgetArgument(t, 0);
                                                                                              e_61 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = d_61;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = e_61;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
  m_70 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = m_70;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = m_70;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              n_70 = ATgetArgument(t, 0);
              {
                ATerm e_28 = NULL,g_28 = NULL,j_3 = NULL;
                t = SSLgetAnnotations(m_70);
                e_28 = t;
                t = n_70;
                {
                  static ATerm u_30 (ATerm t)
                  {
                    ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
                    r_30 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        s_30 = ATgetArgument(t, 0);
                        {
                          ATerm i_31 = NULL,e_3 = NULL;
                          t = SSLgetAnnotations(r_30);
                          i_31 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, s_30);
                          e_3 = t;
                          t = SSLsetAnnotations(e_3, i_31);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            s_30 = ATgetArgument(t, 0);
                            {
                              ATerm q_31 = NULL,f_3 = NULL;
                              t = SSLgetAnnotations(r_30);
                              q_31 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, s_30);
                              f_3 = t;
                              t = SSLsetAnnotations(f_3, q_31);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                s_30 = ATgetArgument(t, 0);
                                {
                                  ATerm y_31 = NULL,g_3 = NULL;
                                  t = SSLgetAnnotations(r_30);
                                  y_31 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, s_30);
                                  g_3 = t;
                                  t = SSLsetAnnotations(g_3, y_31);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    s_30 = ATgetArgument(t, 0);
                                    {
                                      ATerm k_32 = NULL,h_3 = NULL;
                                      t = SSLgetAnnotations(r_30);
                                      k_32 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, s_30);
                                      h_3 = t;
                                      t = SSLsetAnnotations(h_3, k_32);
                                    }
                                  }
                                else
                                  {
                                    ATerm t_32 = NULL,b_33 = NULL,i_3 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        s_30 = ATgetArgument(t, 0);
                                        t_30 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(r_30);
                                    t_32 = t;
                                    t = t_30;
                                    t = map_1_0(u_30, t);
                                    b_33 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, s_30, b_33);
                                    i_3 = t;
                                    t = SSLsetAnnotations(i_3, t_32);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = u_30(t);
                }
                g_28 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, g_28);
                j_3 = t;
                t = SSLsetAnnotations(j_3, e_28);
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  n_70 = ATgetArgument(t, 0);
                  o_70 = ATgetArgument(t, 1);
                  {
                    ATerm o_33 = NULL,w_33 = NULL,x_33 = NULL,a_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,m_3 = NULL,l_3 = NULL,k_3 = NULL;
                    t = SSLgetAnnotations(m_70);
                    o_33 = t;
                    t = n_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        d_34 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(n_70);
                    c_34 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_34);
                    k_3 = t;
                    t = SSLsetAnnotations(k_3, c_34);
                    e_34 = t;
                    t = o_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        x_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(o_70);
                    w_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_33);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, w_33);
                    a_34 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, e_34, a_34);
                    m_3 = t;
                    t = SSLsetAnnotations(m_3, o_33);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      n_70 = ATgetArgument(t, 0);
                      {
                        ATerm l_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,o_3 = NULL,n_3 = NULL;
                        t = SSLgetAnnotations(m_70);
                        l_34 = t;
                        t = n_70;
                        if(match_cons(t, sym_Var_1))
                          {
                            o_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(n_70);
                        n_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, o_34);
                        n_3 = t;
                        t = SSLsetAnnotations(n_3, n_34);
                        p_34 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, p_34);
                        o_3 = t;
                        t = SSLsetAnnotations(o_3, l_34);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          n_70 = ATgetArgument(t, 0);
                          o_70 = ATgetArgument(t, 1);
                          {
                            ATerm x_34 = NULL,p_3 = NULL;
                            t = SSLgetAnnotations(m_70);
                            x_34 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, n_70, o_70);
                            p_3 = t;
                            t = SSLsetAnnotations(p_3, x_34);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              n_70 = ATgetArgument(t, 0);
                              o_70 = ATgetArgument(t, 1);
                              l_70 = ATgetArgument(t, 2);
                              {
                                ATerm y_35 = NULL,q_3 = NULL;
                                t = SSLgetAnnotations(m_70);
                                y_35 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, n_70, o_70, l_70);
                                q_3 = t;
                                t = SSLsetAnnotations(q_3, y_35);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  n_70 = ATgetArgument(t, 0);
                                  o_70 = ATgetArgument(t, 1);
                                  {
                                    ATerm p_36 = NULL,t_36 = NULL,u_36 = NULL,r_3 = NULL;
                                    t = SSLgetAnnotations(m_70);
                                    p_36 = t;
                                    t = n_70;
                                    t = simple_strategy_0_0(t);
                                    t_36 = t;
                                    t = o_70;
                                    t = simple_strategy_0_0(t);
                                    u_36 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, t_36, u_36);
                                    r_3 = t;
                                    t = SSLsetAnnotations(r_3, p_36);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      n_70 = ATgetArgument(t, 0);
                                      {
                                        ATerm g_37 = NULL,j_37 = NULL,s_3 = NULL;
                                        t = SSLgetAnnotations(m_70);
                                        g_37 = t;
                                        t = n_70;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        j_37 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, j_37);
                                        s_3 = t;
                                        t = SSLsetAnnotations(s_3, g_37);
                                      }
                                    }
                                  else
                                    {
                                      ATerm t_37 = NULL,w_37 = NULL,t_3 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          n_70 = ATgetArgument(t, 0);
                                          o_70 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(m_70);
                                      t_37 = t;
                                      t = o_70;
                                      t = simple_strategy_0_0(t);
                                      w_37 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, n_70, w_37);
                                      t_3 = t;
                                      t = SSLsetAnnotations(t_3, t_37);
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
static ATerm l_8 (ATerm h_117 (ATerm), ATerm i_52, ATerm h_52, ATerm t)
{
  static ATerm x_71 (ATerm t)
  {
    static ATerm y_71 (ATerm k_71, ATerm t)
    {
      ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL,q_4 = NULL;
      t = k_71;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_71 = ATgetFirst((ATermList) t);
          n_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm k_4 (ATerm t)
        {
          t = h_52;
          return(t);
        }
        t = q_10(h_117, k_4, m_71, n_71, t);
      }
      t = k_71;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_71 = ATgetFirst((ATermList) t);
          q_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_71);
      o_71 = t;
      t = q_71;
      t = x_71(t);
      r_71 = t;
      t = (ATerm) ATinsert(CheckATermList(r_71), p_71);
      q_4 = t;
      t = SSLsetAnnotations(q_4, o_71);
      return(t);
    }
    ATerm s_71 = NULL,u_71 = NULL;
    s_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_71;
      }
    else
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_24 = ATgetFirst((ATermList) t);
                u_71 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(v_24);
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_71(s_71, t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = x_24;
                  t = u_71;
                  t = x_71(t);
                }
            }
          }
        else
          {
            t = u_24;
            t = y_71(s_71, t);
          }
      }
    return(t);
  }
  t = i_52;
  t = x_71(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm e_134 (ATerm), ATerm f_134 (ATerm), ATerm g_134 (ATerm), ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(e_134, f_134, g_134, t);
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,t_38 = NULL,c_39 = NULL,f_39 = NULL,u_4 = NULL;
        k_72 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            l_72 = ATgetArgument(t, 0);
            m_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_72);
        t_38 = t;
        t = l_72;
        t = g_134(t);
        c_39 = t;
        t = m_72;
        t = e_134(t);
        f_39 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, c_39, f_39);
        u_4 = t;
        t = SSLsetAnnotations(u_4, t_38);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t)
{
  ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL;
  z_74 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_75 = ATgetArgument(t, 0);
      w_74 = ATgetArgument(t, 1);
      {
        ATerm o_39 = NULL,y_39 = NULL,b_40 = NULL,w_4 = NULL;
        t = SSLgetAnnotations(z_74);
        o_39 = t;
        t = a_75;
        t = b_102(t);
        y_39 = t;
        t = w_74;
        t = z_101(t);
        b_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, y_39, b_40);
        w_4 = t;
        t = SSLsetAnnotations(w_4, o_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          a_75 = ATgetArgument(t, 0);
          w_74 = ATgetArgument(t, 1);
          x_74 = ATgetArgument(t, 2);
          y_74 = ATgetArgument(t, 3);
          {
            ATerm p_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(z_74);
            p_40 = t;
            t = a_75;
            t = b_102(t);
            u_40 = t;
            t = w_74;
            t = b_102(t);
            v_40 = t;
            t = x_74;
            t = b_102(t);
            w_40 = t;
            t = y_74;
            t = z_101(t);
            x_40 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_40, v_40, w_40, x_40);
            y_4 = t;
            t = SSLsetAnnotations(y_4, p_40);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              a_75 = ATgetArgument(t, 0);
              w_74 = ATgetArgument(t, 1);
              x_74 = ATgetArgument(t, 2);
              y_74 = ATgetArgument(t, 3);
              {
                ATerm x_41 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,a_5 = NULL;
                t = SSLgetAnnotations(z_74);
                x_41 = t;
                t = a_75;
                t = b_102(t);
                l_42 = t;
                t = w_74;
                t = b_102(t);
                m_42 = t;
                t = x_74;
                t = b_102(t);
                n_42 = t;
                t = y_74;
                t = z_101(t);
                o_42 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, l_42, m_42, n_42, o_42);
                a_5 = t;
                t = SSLsetAnnotations(a_5, x_41);
              }
            }
          else
            {
              ATerm n_43 = NULL,p_43 = NULL,d_5 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_75 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_74);
              n_43 = t;
              t = a_75;
              t = z_101(t);
              p_43 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, p_43);
              d_5 = t;
              t = SSLsetAnnotations(d_5, n_43);
            }
        }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm l_75 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_75);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm p_75 = NULL,v_75 = NULL,w_75 = NULL,b_76 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  p_75 = ATgetArgument(t, 0);
                  v_75 = ATgetArgument(t, 1);
                  w_75 = ATgetArgument(t, 2);
                  b_76 = ATgetArgument(t, 3);
                  t = w_75;
                  t = map_1_0(p_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_75 = ATgetArgument(t, 0);
                      v_75 = ATgetArgument(t, 1);
                      w_75 = ATgetArgument(t, 2);
                      b_76 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_75;
                  t = map_1_0(t_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm b_77 = NULL;
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_77 = ATgetArgument(t, 0);
          {
            ATerm h_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_25);
      t = b_77;
    }
  else
    {
      t = f_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_77;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm k_78 = NULL;
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_78 = ATgetArgument(t, 0);
          {
            ATerm k_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_25);
      t = k_78;
    }
  else
    {
      t = i_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_78;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm k_75 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      k_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_75;
  t = free_vars_3_0(l_4, n_4, tboundin_3_0, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm i_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_79);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            k_79 = ATgetArgument(t, 0);
            t = k_79;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                k_79 = ATgetArgument(t, 0);
                l_79 = ATgetArgument(t, 1);
                m_79 = ATgetArgument(t, 2);
                n_79 = ATgetArgument(t, 3);
                t = m_79;
                t = map_1_0(f_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    k_79 = ATgetArgument(t, 0);
                    l_79 = ATgetArgument(t, 1);
                    m_79 = ATgetArgument(t, 2);
                    n_79 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = m_79;
                t = map_1_0(h_5, t);
              }
          }
      }
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm v_79 = NULL;
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_79 = ATgetArgument(t, 0);
          {
            ATerm p_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_25);
      t = v_79;
    }
  else
    {
      t = n_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_79;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm e_80 = NULL;
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_80 = ATgetArgument(t, 0);
          {
            ATerm s_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_25);
      t = e_80;
    }
  else
    {
      t = q_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_80;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(v_4, e_5, tboundin_3_0, t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm c_81 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_81);
  return(t);
}
static ATerm l_5 (ATerm t)
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
        ATerm e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_81 = ATgetArgument(t, 0);
            t = e_81;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                e_81 = ATgetArgument(t, 0);
                f_81 = ATgetArgument(t, 1);
                g_81 = ATgetArgument(t, 2);
                h_81 = ATgetArgument(t, 3);
                t = g_81;
                t = map_1_0(m_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_81 = ATgetArgument(t, 0);
                    f_81 = ATgetArgument(t, 1);
                    g_81 = ATgetArgument(t, 2);
                    h_81 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = g_81;
                t = map_1_0(n_5, t);
              }
          }
      }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm v_81 = NULL;
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_81 = ATgetArgument(t, 0);
          {
            ATerm x_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_25);
      t = v_81;
    }
  else
    {
      t = v_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_81;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm i_82 = NULL;
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_82 = ATgetArgument(t, 0);
          {
            ATerm a_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_25);
      t = i_82;
    }
  else
    {
      t = y_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_82;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_80 = NULL,x_80 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      x_80 = ATgetArgument(t, 0);
      t = x_80;
      if(match_cons(t, sym_Rule_3))
        {
          t_80 = ATgetArgument(t, 0);
          {
            ATerm b_26 = ATgetArgument(t, 1);
          }
          {
            ATerm c_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_80;
      t = free_vars_3_0(k_5, l_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          x_80 = ATgetArgument(t, 0);
          {
            ATerm d_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_80;
    }
  return(t);
}
static ATerm r_8 (ATerm j_117 (ATerm), ATerm k_52, ATerm j_52, ATerm t)
{
  static ATerm b_83 (ATerm t)
  {
    ATerm w_82 = NULL,x_82 = NULL,y_82 = NULL;
    w_82 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_82;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_82 = ATgetFirst((ATermList) t);
            y_82 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_82;
              {
                static ATerm o_5 (ATerm t)
                {
                  t = j_52;
                  return(t);
                }
                t = q_10(j_117, o_5, x_82, y_82, t);
              }
              t = b_83(t);
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
              {
                ATerm w_43 = NULL,z_43 = NULL,x_5 = NULL;
                t = SSLgetAnnotations(w_82);
                w_43 = t;
                t = y_82;
                t = b_83(t);
                z_43 = t;
                t = (ATerm) ATinsert(CheckATermList(z_43), x_82);
                x_5 = t;
                t = SSLsetAnnotations(x_5, w_43);
              }
            }
        }
      }
    return(t);
  }
  t = k_52;
  t = b_83(t);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if(((ATgetType(g_26) != AT_LIST) || !(ATisEmpty(g_26))))
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(((ATgetType(h_26) != AT_LIST) || !(ATisEmpty(h_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
        {
          j_83 = ATgetFirst((ATermList) i_26);
          k_83 = (ATerm) ATgetNext((ATermList) i_26);
        }
      else
        _fail(t);
      {
        ATerm j_26 = ATgetArgument(t, 1);
        if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
          {
            l_83 = ATgetFirst((ATermList) j_26);
            m_83 = (ATerm) ATgetNext((ATermList) j_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_83, l_83), (ATerm) ATmakeAppl(sym__2, k_83, m_83));
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm n_83 = NULL,o_83 = NULL;
  if(match_cons(t, sym__2))
    {
      n_83 = ATgetArgument(t, 0);
      o_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_83), n_83);
  return(t);
}
static ATerm t_8 (ATerm q_671, ATerm v_671, ATerm z_67, ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL;
  t = SSL_explode_term(v_671);
  if(match_cons(t, sym__2))
    {
      e_83 = ATgetArgument(t, 0);
      g_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(q_671);
  if(match_cons(t, sym__2))
    {
      if((e_83 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      f_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_83, g_83);
  t = genzip_4_0(p_5, q_5, r_5, _id, t);
  h_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_83, z_67);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t)
{
  static ATerm r_83 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_109(t);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = l_109(t);
        t = r_83(t);
      }
    return(t);
  }
  t = r_83(t);
  return(t);
}
ATerm for_3_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t)
{
  t = n_109(t);
  t = while_not_2_0(o_109, p_109, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm b_84 = NULL;
  b_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_84);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm d_84 = NULL,e_84 = NULL,f_84 = NULL,g_84 = NULL,a_6 = NULL;
  g_84 = t;
  if(match_cons(t, sym__2))
    {
      e_84 = ATgetArgument(t, 0);
      f_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_84);
  d_84 = t;
  t = f_84;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_84, f_84);
  a_6 = t;
  t = SSLsetAnnotations(a_6, d_84);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,i_85 = NULL;
  d_85 = t;
  if(match_cons(t, sym__2))
    {
      e_85 = ATgetArgument(t, 0);
      f_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_85 = ATgetFirst((ATermList) t);
      i_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_85(e_85, f_85, d_85, t);
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_85), g_85), i_85);
          }
      }
    }
  else
    {
      t = v_85(e_85, f_85, d_85, t);
    }
  return(t);
}
static ATerm v_85 (ATerm h_84, ATerm i_84, ATerm j_84, ATerm t)
{
  ATerm k_84 = NULL,o_84 = NULL,c_6 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL;
  t = SSLgetAnnotations(j_84);
  k_84 = t;
  t = i_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_84 = ATgetFirst((ATermList) t);
      v_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_84;
  if(match_cons(t, sym__2))
    {
      t_84 = ATgetArgument(t, 0);
      u_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_84;
        if((t_84 != t))
          {
            _fail(t);
          }
        t = v_84;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = i_84;
        t = t_8(t_84, u_84, v_84, t);
      }
  }
  o_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_84, o_84);
  c_6 = t;
  t = SSLsetAnnotations(c_6, k_84);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm u_85 = NULL;
  if(match_cons(t, sym__2))
    {
      u_85 = ATgetArgument(t, 0);
      if((u_85 != ATgetArgument(t, 1)))
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
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_5, t_5, u_5, t);
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm p_85 = NULL,q_85 = NULL,r_85 = NULL;
        p_85 = t;
        if(match_cons(t, sym__2))
          {
            q_85 = ATgetArgument(t, 0);
            r_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_85;
        t = r_8(v_5, q_85, r_85, t);
      }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm r_44 = NULL,t_44 = NULL;
  if(match_cons(t, sym__2))
    {
      r_44 = ATgetArgument(t, 0);
      t_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(d_6, r_44, t_44, t);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm u_44 = NULL;
  if(match_cons(t, sym__2))
    {
      u_44 = ATgetArgument(t, 0);
      if((u_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL;
  if(match_cons(t, sym__2))
    {
      k_45 = ATgetArgument(t, 0);
      l_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(i_6, k_45, l_45, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm m_45 = NULL;
  if(match_cons(t, sym__2))
    {
      m_45 = ATgetArgument(t, 0);
      if((m_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm v_123 (ATerm), ATerm w_123 (ATerm), ATerm x_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm n_86 (ATerm t)
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_123(t);
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        {
          ATerm u_26 = t;
          int v_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_85 = NULL,y_85 = NULL,i_44 = NULL,k_44 = NULL;
              x_85 = t;
              t = w_123(t);
              y_85 = t;
              t = x_85;
              {
                static ATerm w_5 (ATerm t)
                {
                  ATerm a_86 = NULL;
                  t = n_86(t);
                  a_86 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_86, y_85);
                  t = diff_0_0(t);
                  return(t);
                }
                t = x_123(w_5, n_86, y_5, t);
              }
              k_44 = t;
              t = SSL_explode_term(k_44);
              if(match_cons(t, sym__2))
                {
                  ATerm w_26 = ATgetArgument(t, 0);
                  i_44 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_44;
              t = foldr_3_0(z_5, b_6, _id, t);
              LocalPopChoice(v_26);
            }
          else
            {
              t = u_26;
              {
                ATerm z_44 = NULL,a_45 = NULL;
                a_45 = t;
                t = SSL_explode_term(a_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_26 = ATgetArgument(t, 0);
                    z_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_44;
                t = foldr_3_0(e_6, h_6, n_86, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_86(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm g_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_46);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm h_46 = NULL,k_46 = NULL,m_46 = NULL,n_46 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_46 = ATgetArgument(t, 0);
            t = m_46;
            t = free_vars_3_0(n_6, q_6, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_46 = ATgetArgument(t, 0);
                n_46 = ATgetArgument(t, 1);
                h_46 = ATgetArgument(t, 2);
                k_46 = ATgetArgument(t, 3);
                t = h_46;
                t = map_1_0(t_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_46 = ATgetArgument(t, 0);
                    n_46 = ATgetArgument(t, 1);
                    h_46 = ATgetArgument(t, 2);
                    k_46 = ATgetArgument(t, 3);
                    t = h_46;
                    t = map_1_0(z_6, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Matrix_2))
                      {
                        m_46 = ATgetArgument(t, 0);
                        n_46 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = m_46;
                  }
              }
          }
      }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm p_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_46);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_27);
    }
  else
    {
      t = a_27;
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,v_46 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_46 = ATgetArgument(t, 0);
                  s_46 = ATgetArgument(t, 1);
                  t_46 = ATgetArgument(t, 2);
                  v_46 = ATgetArgument(t, 3);
                  t = t_46;
                  t = map_1_0(r_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_46 = ATgetArgument(t, 0);
                      s_46 = ATgetArgument(t, 1);
                      t_46 = ATgetArgument(t, 2);
                      v_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_46;
                  t = map_1_0(s_6, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm j_47 = NULL;
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_47 = ATgetArgument(t, 0);
          {
            ATerm g_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_27);
      t = j_47;
    }
  else
    {
      t = e_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_47;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm x_47 = NULL;
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_47 = ATgetArgument(t, 0);
          {
            ATerm j_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_27);
      t = x_47;
    }
  else
    {
      t = h_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_47;
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm x_48 = NULL;
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_48 = ATgetArgument(t, 0);
          {
            ATerm r_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_27);
      t = x_48;
    }
  else
    {
      t = k_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_48;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm h_49 = NULL;
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_49 = ATgetArgument(t, 0);
          {
            ATerm y_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_27);
      t = h_49;
    }
  else
    {
      t = s_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_49;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm s_49 = NULL;
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      if((s_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_27;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm u_49 = NULL,x_49 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_49 = ATgetFirst((ATermList) t);
      x_49 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_49, x_49);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm y_49 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      if(match_cons(a_28, sym__2))
        {
          y_49 = ATgetArgument(a_28, 0);
          b_50 = ATgetArgument(a_28, 1);
        }
      else
        _fail(t);
      {
        ATerm b_28 = ATgetArgument(t, 1);
        if(match_cons(b_28, sym__2))
          {
            c_50 = ATgetArgument(b_28, 0);
            d_50 = ATgetArgument(b_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_50), y_49), (ATerm) ATinsert(CheckATermList(d_50), b_50));
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm e_50 = NULL;
  e_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, e_50, term_f_28), (ATerm) ATmakeAppl(sym_Var_1, e_50));
  return(t);
}
ATerm RowLet_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL;
  d_90 = t;
  if(match_cons(t, sym_Row_2))
    {
      e_90 = ATgetArgument(t, 0);
      f_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
        t = f_90;
        {
          ATerm j_28 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_28;
            }
        }
        t = new_0_0(t);
        a_46 = t;
        t = f_90;
        t = free_vars_3_0(k_6, l_6, tvars_matrix_boundin_3_0, t);
        f_46 = t;
        t = r_0(t);
        e_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_46, e_46);
        t = l_8(a_7, f_46, e_46, t);
        t = genzip_4_0(b_7, d_7, g_7, i_7, t);
        if(match_cons(t, sym__2))
          {
            c_46 = ATgetArgument(t, 0);
            d_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, a_46, (ATerm)ATempty, c_46, f_90)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, e_90, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_46), (ATerm)ATempty, d_46)));
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = f_90;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, e_90, f_90));
      }
  }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_27;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_90 = ATgetFirst((ATermList) t);
      r_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_90, r_90);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      if(match_cons(k_28, sym__2))
        {
          s_90 = ATgetArgument(k_28, 0);
          t_90 = ATgetArgument(k_28, 1);
        }
      else
        _fail(t);
      {
        ATerm l_28 = ATgetArgument(t, 1);
        if(match_cons(l_28, sym__2))
          {
            u_90 = ATgetArgument(l_28, 0);
            v_90 = ATgetArgument(l_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_90), s_90), (ATerm) ATinsert(CheckATermList(v_90), t_90));
  return(t);
}
static ATerm v_8 (ATerm y_78, ATerm x_78, ATerm t)
{
  ATerm j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,g_6 = NULL;
  t = x_78;
  {
    static ATerm t_7 (ATerm t)
    {
      static ATerm w_7 (ATerm t)
      {
        t = y_78;
        return(t);
      }
      t = RowLet_1_0(w_7, t);
      return(t);
    }
    t = genzip_4_0(j_7, m_7, q_7, t_7, t);
  }
  p_90 = t;
  if(match_cons(t, sym__2))
    {
      m_90 = ATgetArgument(t, 0);
      n_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_90);
  l_90 = t;
  t = m_90;
  t = concat_0_0(t);
  o_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_90, n_90);
  g_6 = t;
  t = SSLsetAnnotations(g_6, l_90);
  if(match_cons(t, sym__2))
    {
      j_90 = ATgetArgument(t, 0);
      k_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Let_2, j_90, (ATerm) ATmakeAppl(sym_Scope_2, y_78, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_q_28))), (ATerm) ATmakeAppl(sym_Matrix_1, k_90))));
  return(t);
}
static ATerm w_8 (ATerm r_114 (ATerm), ATerm w_47, ATerm u_47, ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL;
  z_90 = t;
  t = r_114(t);
  w_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_90, w_47, u_47);
  t = n_11(w_90, w_47, u_47, t);
  {
    ATerm r_28 = t;
    int s_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_91 = NULL;
        t = term_t_28;
        c_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_90, term_t_28);
        t = m_11(w_90, c_91, t);
        LocalPopChoice(s_28);
      }
    else
      {
        t = r_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_90 = ATgetFirst((ATermList) t);
      y_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_t_28;
  a_91 = t;
  t = (ATerm) ATinsert(CheckATermList(y_90), (ATerm) ATinsert(CheckATermList(x_90), w_47));
  b_91 = t;
  t = SSL_table_put(w_90, a_91, b_91);
  t = z_90;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm e_91 = NULL,h_91 = NULL,i_91 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
        {
          ATerm v_28 = ATgetFirst((ATermList) u_28);
          if(match_cons(v_28, sym_As_2))
            {
              ATerm x_28 = ATgetArgument(v_28, 0);
              ATerm y_28 = ATgetArgument(v_28, 1);
              if(!(match_cons(y_28, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          e_91 = (ATerm) ATgetNext((ATermList) u_28);
        }
      else
        _fail(t);
      h_91 = ATgetArgument(t, 1);
      i_91 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, e_91, h_91, i_91);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm d_91 = NULL;
  t = filter_1_0(x_7, t);
  d_91 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, d_91);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm s_92 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, s_92), term_z_28);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL;
  if(match_cons(t, sym__2))
    {
      m_51 = ATgetArgument(t, 0);
      n_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(m_51, n_51, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm MatchCons_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL;
  p_92 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = p_92;
      t = p_0(t);
      t = map_1_0(i_8, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          q_92 = ATgetArgument(t, 0);
          t = p_92;
          t = o_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((q_92 != ATgetArgument(t, 0)))
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
              q_92 = ATgetArgument(t, 0);
              t = p_92;
              t = o_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((q_92 != ATgetArgument(t, 0)))
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
                  q_92 = ATgetArgument(t, 0);
                  t = p_92;
                  t = o_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((q_92 != ATgetArgument(t, 0)))
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
                  ATerm k_51 = NULL,l_51 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      q_92 = ATgetArgument(t, 0);
                      r_92 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = p_92;
                  t = o_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((q_92 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      k_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_92;
                  t = foldr_3_0(j_8, k_8, m_8, t);
                  l_51 = t;
                  t = k_51;
                  if((l_51 != t))
                    {
                      _fail(t);
                    }
                  t = r_92;
                }
            }
        }
    }
  return(t);
}
static ATerm y_8 (ATerm p_133 (ATerm), ATerm l_77, ATerm i_77, ATerm j_77, ATerm k_77, ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL;
  t = l_77;
  t = p_133(t);
  x_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_92, j_77);
  t = conc_0_0(t);
  y_92 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, i_77, y_92, k_77);
  return(t);
}
static ATerm z_8 (ATerm e_77, ATerm f_77, ATerm g_77, ATerm t)
{
  ATerm a_93 = NULL;
  t = e_77;
  {
    static ATerm p_8 (ATerm t)
    {
      ATerm b_93 = NULL,c_93 = NULL,d_93 = NULL,e_93 = NULL;
      static ATerm q_8 (ATerm t)
      {
        static ATerm s_8 (ATerm t)
        {
          t = f_77;
          return(t);
        }
        static ATerm u_8 (ATerm t)
        {
          t = g_77;
          return(t);
        }
        t = MatchCons_2_0(s_8, u_8, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm a_29 = ATgetArgument(t, 0);
          if(((ATgetType(a_29) == AT_LIST) && !(ATisEmpty(a_29))))
            {
              ATerm b_29 = ATgetFirst((ATermList) a_29);
              if(match_cons(b_29, sym_As_2))
                {
                  ATerm c_29 = ATgetArgument(b_29, 0);
                  b_93 = ATgetArgument(b_29, 1);
                }
              else
                _fail(t);
              c_93 = (ATerm) ATgetNext((ATermList) a_29);
            }
          else
            _fail(t);
          d_93 = ATgetArgument(t, 1);
          e_93 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_8(q_8, b_93, c_93, d_93, e_93, t);
      return(t);
    }
    t = filter_1_0(p_8, t);
  }
  a_93 = t;
  t = (ATerm) ATmakeAppl(sym_Alt_3, f_77, g_77, (ATerm) ATmakeAppl(sym_Matrix_1, a_93));
  return(t);
}
ATerm filter_1_0 (ATerm g_121 (ATerm), ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL,b_94 = NULL;
  z_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_93;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_94 = ATgetFirst((ATermList) t);
          b_94 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_51 = NULL,e_52 = NULL,r_52 = NULL,j_6 = NULL;
            t = SSLgetAnnotations(z_93);
            z_51 = t;
            t = a_94;
            t = g_121(t);
            e_52 = t;
            t = b_94;
            t = filter_1_0(g_121, t);
            r_52 = t;
            t = (ATerm) ATinsert(CheckATermList(r_52), e_52);
            j_6 = t;
            t = SSLsetAnnotations(j_6, z_51);
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            t = b_94;
            t = filter_1_0(g_121, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm k_116 (ATerm), ATerm t)
{
  static ATerm y_94 (ATerm t)
  {
    ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL;
    t = k_116(t);
    v_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_94;
      }
    else
      {
        ATerm z_52 = NULL,e_53 = NULL,m_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_94 = ATgetFirst((ATermList) t);
            x_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_94);
        z_52 = t;
        t = x_94;
        t = y_94(t);
        e_53 = t;
        t = (ATerm) ATinsert(CheckATermList(e_53), w_94);
        m_6 = t;
        t = SSLsetAnnotations(m_6, z_52);
      }
    return(t);
  }
  t = y_94(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm g_96 = NULL,h_96 = NULL;
  if(match_cons(t, sym__2))
    {
      g_96 = ATgetArgument(t, 0);
      h_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(g_96, h_96, t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_e_17;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm i_96 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if(match_cons(f_29, sym_Off_1))
        {
          i_96 = ATgetArgument(f_29, 0);
        }
      else
        _fail(t);
      {
        ATerm g_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, i_96);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL;
  e_95 = t;
  if(match_cons(t, sym_Row_3))
    {
      f_95 = ATgetArgument(t, 0);
      {
        ATerm h_29 = ATgetArgument(t, 1);
      }
      {
        ATerm i_29 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = f_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_95 = ATgetFirst((ATermList) t);
      {
        ATerm j_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_95;
  if(match_cons(t, sym_As_2))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      i_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_95;
  if(match_cons(t, sym_Str_1))
    {
      j_95 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, j_95), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          j_95 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, j_95), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              j_95 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, j_95), (ATerm) ATempty);
            }
          else
            {
              ATerm y_95 = NULL,e_96 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  j_95 = ATgetArgument(t, 0);
                  k_95 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_95;
              t = foldr_3_0(x_8, b_9, c_9, t);
              y_95 = t;
              t = k_95;
              t = map_1_0(e_9, t);
              e_96 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, j_95, y_95), e_96);
            }
        }
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL,n_96 = NULL;
  n_96 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_96 = ATgetFirst((ATermList) t);
      m_96 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_96 = NULL;
            t = m_96;
            {
              static ATerm i_9 (ATerm t)
              {
                ATerm n_29 = t;
                if((PushChoice() == 0))
                  {
                    if((l_96 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = n_29;
                  }
                return(t);
              }
              t = filter_1_0(i_9, t);
            }
            q_96 = t;
            t = (ATerm) ATinsert(CheckATermList(q_96), l_96);
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            t = n_96;
          }
      }
    }
  else
    {
      t = n_96;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(g_9, t);
  return(t);
}
static ATerm r_98 (ATerm g_97, ATerm t)
{
  ATerm h_97 = NULL;
  t = SSL_explode_string(g_97);
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_98 (ATerm t)
        {
          ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL;
          c_98 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_98 = ATgetFirst((ATermList) t);
              e_98 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm q_29 = t;
            int s_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_53 = NULL,u_53 = NULL,o_6 = NULL;
                t = SSLgetAnnotations(c_98);
                n_53 = t;
                t = e_98;
                t = s_98(t);
                u_53 = t;
                t = (ATerm) ATinsert(CheckATermList(u_53), d_98);
                o_6 = t;
                t = SSLsetAnnotations(o_6, n_53);
                LocalPopChoice(s_29);
              }
            else
              {
                t = q_29;
                {
                  ATerm f_54 = NULL,p_6 = NULL;
                  t = SSLgetAnnotations(c_98);
                  f_54 = t;
                  t = d_98;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, d_98);
                  p_6 = t;
                  t = SSLsetAnnotations(p_6, f_54);
                }
              }
          }
          return(t);
        }
        t = s_98(t);
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
        t = (ATerm) ATempty;
      }
  }
  h_97 = t;
  t = SSL_implode_string(h_97);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm f_98 = NULL,g_98 = NULL,h_98 = NULL,i_98 = NULL,j_98 = NULL,p_98 = NULL;
  p_98 = t;
  {
    ATerm t_29 = t;
    int u_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_98 = ATgetFirst((ATermList) t);
            {
              ATerm a_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(u_29);
        t = f_98;
        {
          ATerm b_30 = t;
          int c_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  g_98 = ATgetArgument(t, 0);
                  {
                    ATerm d_30 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm e_30 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(c_30);
              t = g_98;
              {
                ATerm f_30 = t;
                int g_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        h_98 = ATgetFirst((ATermList) t);
                        {
                          ATerm h_30 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(g_30);
                    t = h_98;
                    {
                      ATerm i_30 = t;
                      int j_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              i_98 = ATgetArgument(t, 0);
                              {
                                ATerm k_30 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_30);
                          t = i_98;
                          if(match_cons(t, sym_Off_1))
                            {
                              j_98 = ATgetArgument(t, 0);
                              t = j_98;
                            }
                          else
                            {
                              t = r_98(p_98, t);
                            }
                        }
                      else
                        {
                          t = i_30;
                          t = r_98(p_98, t);
                        }
                    }
                  }
                else
                  {
                    t = f_30;
                    t = r_98(p_98, t);
                  }
              }
            }
          else
            {
              t = b_30;
              t = r_98(p_98, t);
            }
        }
      }
    else
      {
        t = t_29;
        t = r_98(p_98, t);
      }
  }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      ATerm m_30 = ATgetArgument(t, 1);
      if(((ATgetType(m_30) != AT_LIST) || !(ATisEmpty(m_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm i_99 = NULL,j_99 = NULL,p_99 = NULL;
  if(match_cons(t, sym__2))
    {
      i_99 = ATgetArgument(t, 0);
      {
        ATerm n_30 = ATgetArgument(t, 1);
        if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
          {
            j_99 = ATgetFirst((ATermList) n_30);
            p_99 = (ATerm) ATgetNext((ATermList) n_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_99, j_99), (ATerm) ATmakeAppl(sym__2, i_99, p_99));
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm q_99 = NULL,t_99 = NULL;
  if(match_cons(t, sym__2))
    {
      q_99 = ATgetArgument(t, 0);
      t_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_99), q_99);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm u_99 = NULL,v_99 = NULL,w_99 = NULL;
  if(match_cons(t, sym__2))
    {
      u_99 = ATgetArgument(t, 0);
      {
        ATerm o_30 = ATgetArgument(t, 1);
        if(match_cons(o_30, sym__2))
          {
            v_99 = ATgetArgument(o_30, 0);
            w_99 = ATgetArgument(o_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_8(u_99, v_99, w_99, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_p_30;
  return(t);
}
static ATerm d_9 (ATerm r_78, ATerm t)
{
  ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL;
  t = r_78;
  t = get_path_0_0(t);
  v_98 = t;
  t = r_78;
  t = outedges_0_0(t);
  w_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_78, w_98);
  t = genzip_4_0(k_9, m_9, n_9, q_9, t);
  x_98 = t;
  t = r_78;
  t = default_state_0_0(t);
  c_99 = t;
  t = new_0_0(t);
  d_99 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, r_78);
  e_99 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_30, d_99);
  f_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, r_78), (ATerm) ATmakeAppl(sym_Defined_2, term_q_30, d_99));
  t = w_8(r_9, e_99, f_99, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, d_99, (ATerm)ATmakeAppl(sym_Var_1, v_98), x_98, c_99);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm a_100 = NULL,b_100 = NULL,c_100 = NULL,g_100 = NULL,h_100 = NULL,i_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,y_6 = NULL,w_6 = NULL,u_6 = NULL;
  t_100 = t;
  if(match_cons(t, sym_Row_3))
    {
      b_100 = ATgetArgument(t, 0);
      c_100 = ATgetArgument(t, 1);
      g_100 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_100);
  a_100 = t;
  t = b_100;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_100 = ATgetFirst((ATermList) t);
      m_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_100);
  h_100 = t;
  t = i_100;
  if(match_cons(t, sym_As_2))
    {
      p_100 = ATgetArgument(t, 0);
      q_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_100);
  o_100 = t;
  t = q_100;
  {
    ATerm v_30 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_30;
      }
  }
  r_100 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, p_100, r_100);
  u_6 = t;
  t = SSLsetAnnotations(u_6, o_100);
  s_100 = t;
  t = (ATerm) ATinsert(CheckATermList(m_100), s_100);
  w_6 = t;
  t = SSLsetAnnotations(w_6, h_100);
  n_100 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, n_100, c_100, g_100);
  y_6 = t;
  t = SSLsetAnnotations(y_6, a_100);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm u_100 = NULL,v_100 = NULL,x_100 = NULL,c_101 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      u_100 = ATgetArgument(t, 0);
      {
        ATerm w_30 = ATgetArgument(t, 1);
        if(((ATgetType(w_30) == AT_LIST) && !(ATisEmpty(w_30))))
          {
            v_100 = ATgetFirst((ATermList) w_30);
            x_100 = (ATerm) ATgetNext((ATermList) w_30);
          }
        else
          _fail(t);
      }
      c_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(u_100), v_100), x_100, c_101);
  return(t);
}
static ATerm f_9 (ATerm h_78, ATerm t)
{
  ATerm z_99 = NULL;
  t = h_78;
  {
    ATerm x_30 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(s_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_30;
      }
  }
  t = h_78;
  t = map_1_0(t_9, t);
  z_99 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, z_99);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm f_101 = NULL,j_101 = NULL,k_101 = NULL,l_101 = NULL,n_101 = NULL,o_101 = NULL,r_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,g_102 = NULL,f_7 = NULL,e_7 = NULL,c_7 = NULL;
  g_102 = t;
  if(match_cons(t, sym_Row_3))
    {
      j_101 = ATgetArgument(t, 0);
      k_101 = ATgetArgument(t, 1);
      l_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_102);
  f_101 = t;
  t = k_101;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_101 = ATgetFirst((ATermList) t);
      t_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_101);
  o_101 = t;
  t = r_101;
  if(match_cons(t, sym_As_2))
    {
      v_101 = ATgetArgument(t, 0);
      w_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_101);
  u_101 = t;
  t = w_101;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, v_101, w_101);
  c_7 = t;
  t = SSLsetAnnotations(c_7, u_101);
  x_101 = t;
  t = (ATerm) ATinsert(CheckATermList(t_101), x_101);
  e_7 = t;
  t = SSLsetAnnotations(e_7, o_101);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_30 = ATgetFirst((ATermList) t);
      n_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, j_101, n_101, l_101);
  f_7 = t;
  t = SSLsetAnnotations(f_7, f_101);
  return(t);
}
static ATerm h_9 (ATerm f_78, ATerm t)
{
  ATerm d_101 = NULL;
  t = f_78;
  t = map_1_0(w_9, t);
  d_101 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, d_101);
  return(t);
}
ATerm repeat_2_0 (ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm t)
{
  static ATerm j_102 (ATerm t)
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_108(t);
        t = j_102(t);
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = u_108(t);
      }
    return(t);
  }
  t = j_102(t);
  return(t);
}
static ATerm j_9 (ATerm j_48, ATerm k_48, ATerm t)
{
  ATerm k_102 = NULL,l_102 = NULL;
  l_102 = t;
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = m_11(j_48, k_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_31 = ATgetFirst((ATermList) t);
            k_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_31);
        t = SSL_table_put(j_48, k_48, k_102);
        t = (ATerm) ATmakeAppl(sym__3, j_48, k_48, k_102);
      }
    else
      {
        t = b_31;
        t = SSL_table_remove(j_48, k_48);
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
      }
  }
  t = l_102;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_114 (ATerm), ATerm t)
{
  ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL;
  t_102 = t;
  t = o_114(t);
  s_102 = t;
  {
    ATerm e_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_102 = NULL;
        t = term_t_28;
        x_102 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_102, term_t_28);
        t = m_11(s_102, x_102, t);
        LocalPopChoice(g_31);
      }
    else
      {
        t = e_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_102 = ATgetFirst((ATermList) t);
      q_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_t_28;
  u_102 = t;
  t = SSL_table_put(s_102, u_102, q_102);
  t = r_102;
  {
    static ATerm e_10 (ATerm t)
    {
      ATerm a_103 = NULL;
      a_103 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_102, a_103);
      t = j_9(s_102, a_103, t);
      return(t);
    }
    t = map_1_0(e_10, t);
  }
  t = t_102;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm t)
{
  ATerm h_31 = t;
  int j_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_106(t);
      t = g_106(t);
      LocalPopChoice(j_31);
    }
  else
    {
      t = h_31;
      t = g_106(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,h_103 = NULL,i_103 = NULL;
  d_103 = t;
  t = n_114(t);
  c_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_103, term_t_28);
  {
    ATerm k_31 = t;
    int l_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_103 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm m_31 = ATgetArgument(t, 0);
            ATerm n_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_28;
        o_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_103, term_t_28);
        t = m_11(c_103, o_103, t);
        LocalPopChoice(l_31);
      }
    else
      {
        t = k_31;
        t = (ATerm) ATempty;
      }
  }
  e_103 = t;
  t = term_t_28;
  h_103 = t;
  t = (ATerm) ATinsert(CheckATermList(e_103), (ATerm) ATempty);
  i_103 = t;
  t = SSL_table_put(c_103, h_103, i_103);
  t = d_103;
  return(t);
}
ATerm scope_2_0 (ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm t)
{
  static ATerm h_10 (ATerm t)
  {
    t = end_scope_1_0(p_114, t);
    return(t);
  }
  t = begin_scope_1_0(p_114, t);
  t = restore_always_2_0(q_114, h_10, t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  static ATerm o_104 (ATerm t)
  {
    ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL;
    n_104 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_104 = ATgetFirst((ATermList) t);
        m_104 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_54 = NULL,y_54 = NULL,l_7 = NULL;
          t = SSLgetAnnotations(n_104);
          s_54 = t;
          t = m_104;
          t = o_104(t);
          y_54 = t;
          t = (ATerm) ATinsert(CheckATermList(y_54), l_104);
          l_7 = t;
          t = SSLsetAnnotations(l_7, s_54);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_104;
        t = r_115(t);
      }
    return(t);
  }
  t = o_104(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL;
  r_103 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_103;
    }
  else
    {
      static ATerm i_10 (ATerm t)
      {
        t = not_null(t_103);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_103 = ATgetFirst((ATermList) t);
          if(((t_103 != NULL) && (t_103 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_103 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_103;
      t = at_end_1_0(i_10, t);
    }
  return(t);
}
static ATerm i_105 (ATerm t_104, ATerm t)
{
  ATerm u_104 = NULL;
  t = SSL_explode_term(t_104);
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_104;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL;
  e_105 = t;
  if(match_cons(t, sym__2))
    {
      c_105 = ATgetArgument(t, 0);
      d_105 = ATgetArgument(t, 1);
      {
        ATerm p_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm k_10 (ATerm t)
            {
              t = d_105;
              return(t);
            }
            t = c_105;
            t = at_end_1_0(k_10, t);
            LocalPopChoice(r_31);
          }
        else
          {
            t = p_31;
            t = i_105(e_105, t);
          }
      }
    }
  else
    {
      t = i_105(e_105, t);
    }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm p_107 = NULL;
  if(match_cons(t, sym__2))
    {
      p_107 = ATgetArgument(t, 0);
      if((p_107 != ATgetArgument(t, 1)))
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
  ATerm a_108 = NULL;
  if(match_cons(t, sym__2))
    {
      a_108 = ATgetArgument(t, 0);
      if((a_108 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm n_108 = NULL;
  if(match_cons(t, sym__2))
    {
      n_108 = ATgetArgument(t, 0);
      if((n_108 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm y_108 = NULL;
  if(match_cons(t, sym__2))
    {
      y_108 = ATgetArgument(t, 0);
      if((y_108 != ATgetArgument(t, 1)))
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
  ATerm q_109 = NULL;
  if(match_cons(t, sym__2))
    {
      q_109 = ATgetArgument(t, 0);
      if((q_109 != ATgetArgument(t, 1)))
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
  ATerm c_110 = NULL;
  if(match_cons(t, sym__2))
    {
      c_110 = ATgetArgument(t, 0);
      if((c_110 != ATgetArgument(t, 1)))
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
  ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL,e_106 = NULL,i_106 = NULL,j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL,n_106 = NULL,q_106 = NULL,t_106 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      i_106 = ATgetArgument(t, 0);
      t_106 = ATgetArgument(t, 1);
      t = i_106;
      if(match_cons(t, sym_Matrix_2))
        {
          j_106 = ATgetArgument(t, 0);
          k_106 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_106;
      if(match_cons(t, sym_Choice_2))
        {
          d_106 = ATgetArgument(t, 0);
          e_106 = ATgetArgument(t, 1);
          {
            ATerm g_107 = NULL,j_107 = NULL;
            t = d_106;
            if(match_cons(t, sym_Matrix_2))
              {
                b_106 = ATgetArgument(t, 0);
                c_106 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, j_106, b_106);
            t = r_10(m_10, j_106, b_106, t);
            g_107 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_106, c_106);
            t = conc_0_0(t);
            j_107 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, g_107, j_107), e_106);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              d_106 = ATgetArgument(t, 0);
              e_106 = ATgetArgument(t, 1);
              {
                ATerm y_107 = NULL,z_107 = NULL;
                t = d_106;
                if(match_cons(t, sym_Matrix_2))
                  {
                    b_106 = ATgetArgument(t, 0);
                    c_106 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, j_106, b_106);
                t = r_10(p_10, j_106, b_106, t);
                y_107 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_106, c_106);
                t = conc_0_0(t);
                z_107 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, y_107, z_107), e_106);
              }
            }
          else
            {
              ATerm l_108 = NULL,m_108 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  d_106 = ATgetArgument(t, 0);
                  e_106 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, j_106, d_106);
              t = r_10(s_10, j_106, d_106, t);
              l_108 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_106, e_106);
              t = conc_0_0(t);
              m_108 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, l_108, m_108);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          i_106 = ATgetArgument(t, 0);
          t_106 = ATgetArgument(t, 1);
          t = i_106;
          if(match_cons(t, sym_Matrix_2))
            {
              j_106 = ATgetArgument(t, 0);
              k_106 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_106;
          if(match_cons(t, sym_LChoice_2))
            {
              d_106 = ATgetArgument(t, 0);
              e_106 = ATgetArgument(t, 1);
              {
                ATerm w_108 = NULL,x_108 = NULL;
                t = d_106;
                if(match_cons(t, sym_Matrix_2))
                  {
                    b_106 = ATgetArgument(t, 0);
                    c_106 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, j_106, b_106);
                t = r_10(t_10, j_106, b_106, t);
                w_108 = t;
                t = (ATerm) ATmakeAppl(sym__2, k_106, c_106);
                t = conc_0_0(t);
                x_108 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, w_108, x_108), e_106);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  d_106 = ATgetArgument(t, 0);
                  e_106 = ATgetArgument(t, 1);
                  {
                    ATerm g_109 = NULL,h_109 = NULL;
                    t = d_106;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        b_106 = ATgetArgument(t, 0);
                        c_106 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, j_106, b_106);
                    t = r_10(u_10, j_106, b_106, t);
                    g_109 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_106, c_106);
                    t = conc_0_0(t);
                    h_109 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, g_109, h_109), e_106);
                  }
                }
              else
                {
                  ATerm z_109 = NULL,a_110 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      d_106 = ATgetArgument(t, 0);
                      e_106 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, j_106, d_106);
                  t = r_10(v_10, j_106, d_106, t);
                  z_109 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_106, e_106);
                  t = conc_0_0(t);
                  a_110 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, z_109, a_110);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              i_106 = ATgetArgument(t, 0);
              t_106 = ATgetArgument(t, 1);
              {
                ATerm h_110 = NULL;
                t = t_106;
                if(match_cons(t, sym_Matrix_2))
                  {
                    d_106 = ATgetArgument(t, 0);
                    e_106 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_106;
                {
                  static ATerm w_10 (ATerm t)
                  {
                    ATerm j_110 = NULL,k_110 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        j_110 = ATgetArgument(t, 0);
                        k_110 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, j_110, (ATerm) ATmakeAppl(sym_Scope_2, i_106, k_110));
                    return(t);
                  }
                  t = map_1_0(w_10, t);
                }
                h_110 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, d_106, h_110);
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  i_106 = ATgetArgument(t, 0);
                  t_106 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_106;
              if(match_cons(t, sym_Matrix_2))
                {
                  j_106 = ATgetArgument(t, 0);
                  k_106 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_106;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_106 = ATgetFirst((ATermList) t);
                  q_106 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_106;
              if(match_cons(t, sym_Row_2))
                {
                  m_106 = ATgetArgument(t, 0);
                  n_106 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_106;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, j_106, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, m_106, (ATerm) ATmakeAppl(sym_Seq_2, n_106, t_106))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  static ATerm y_10 (ATerm t)
  {
    t = bottomup_1_0(z_102, t);
    return(t);
  }
  t = SRTS_all(y_10, t);
  t = z_102(t);
  return(t);
}
static ATerm q_10 (ATerm r_117 (ATerm), ATerm s_117 (ATerm), ATerm q_52, ATerm p_52, ATerm t)
{
  t = s_117(t);
  {
    static ATerm z_10 (ATerm t)
    {
      ATerm p_110 = NULL;
      p_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_52, p_110);
      t = r_117(t);
      return(t);
    }
    t = fetch_1_0(z_10, t);
  }
  t = p_52;
  return(t);
}
static ATerm r_10 (ATerm o_117 (ATerm), ATerm m_52, ATerm l_52, ATerm t)
{
  static ATerm h_111 (ATerm t)
  {
    ATerm c_111 = NULL,d_111 = NULL,e_111 = NULL;
    c_111 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_52;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_111 = ATgetFirst((ATermList) t);
            e_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_111;
              {
                static ATerm a_11 (ATerm t)
                {
                  t = l_52;
                  return(t);
                }
                t = q_10(o_117, a_11, d_111, e_111, t);
              }
              t = h_111(t);
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              {
                ATerm k_55 = NULL,s_55 = NULL,n_7 = NULL;
                t = SSLgetAnnotations(c_111);
                k_55 = t;
                t = e_111;
                t = h_111(t);
                s_55 = t;
                t = (ATerm) ATinsert(CheckATermList(s_55), d_111);
                n_7 = t;
                t = SSLsetAnnotations(n_7, k_55);
              }
            }
        }
      }
    return(t);
  }
  t = m_52;
  t = h_111(t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_120 (ATerm), ATerm f_120 (ATerm), ATerm g_120 (ATerm), ATerm t)
{
  ATerm k_111 = NULL,l_111 = NULL,m_111 = NULL;
  k_111 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_111;
      t = e_120(t);
    }
  else
    {
      ATerm p_111 = NULL,q_111 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_111 = ATgetFirst((ATermList) t);
          m_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_111;
      t = g_120(t);
      p_111 = t;
      t = m_111;
      t = foldr_3_0(e_120, f_120, g_120, t);
      q_111 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_111, q_111);
      t = f_120(t);
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm i_119 (ATerm), ATerm j_119 (ATerm), ATerm t)
{
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_111 = NULL;
      t = i_119(t);
      t_111 = t;
      t = (ATerm) ATinsert(ATempty, t_111);
      LocalPopChoice(v_31);
    }
  else
    {
      t = u_31;
      {
        ATerm y_55 = NULL,z_55 = NULL;
        static ATerm o_11 (ATerm t)
        {
          t = collect_om_2_0(i_119, j_119, t);
          return(t);
        }
        z_55 = t;
        t = SSL_explode_term(z_55);
        if(match_cons(t, sym__2))
          {
            ATerm w_31 = ATgetArgument(t, 0);
            y_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_55;
        t = foldr_3_0(b_11, j_119, o_11, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm b_112 = NULL,e_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL;
  if(match_cons(t, sym_As_2))
    {
      e_112 = ATgetArgument(t, 0);
      g_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_112;
  if(match_cons(t, sym_Var_1))
    {
      f_112 = ATgetArgument(t, 0);
      t = g_112;
      if(match_cons(t, sym_As_2))
        {
          h_112 = ATgetArgument(t, 0);
          {
            ATerm x_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_112;
      if(match_cons(t, sym_Off_1))
        {
          b_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, f_112), (ATerm) ATmakeAppl(sym_Var_1, b_112)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          f_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_112;
      if(match_cons(t, sym_Var_1))
        {
          h_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, h_112), (ATerm) ATmakeAppl(sym_Var_1, f_112)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL,f_113 = NULL;
  b_113 = t;
  if(match_cons(t, sym_As_2))
    {
      c_113 = ATgetArgument(t, 0);
      e_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_113;
  {
    ATerm z_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm b_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_32);
        t = e_113;
        if(match_cons(t, sym_As_2))
          {
            f_113 = ATgetArgument(t, 0);
            a_113 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_113;
        if(match_cons(t, sym_Off_1))
          {
            z_112 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, z_112), a_113);
      }
    else
      {
        t = z_31;
        if(match_cons(t, sym_Off_1))
          {
            d_113 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_113;
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_113;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_113;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_32 = ATgetFirst((ATermList) t);
                ATerm g_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_113;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, d_113), term_z_28);
      }
  }
  return(t);
}
static ATerm s_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_27;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  ATerm w_113 = NULL,x_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_113 = ATgetFirst((ATermList) t);
      x_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_113, x_113);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm y_113 = NULL,z_113 = NULL,a_114 = NULL,b_114 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      if(match_cons(h_32, sym__2))
        {
          y_113 = ATgetArgument(h_32, 0);
          z_113 = ATgetArgument(h_32, 1);
        }
      else
        _fail(t);
      {
        ATerm i_32 = ATgetArgument(t, 1);
        if(match_cons(i_32, sym__2))
          {
            a_114 = ATgetArgument(i_32, 0);
            b_114 = ATgetArgument(i_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_114), y_113), (ATerm) ATinsert(CheckATermList(b_114), z_113));
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm c_114 = NULL,d_114 = NULL;
  if(match_cons(t, sym__2))
    {
      c_114 = ATgetArgument(t, 0);
      d_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(y_11, c_114, d_114, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm e_114 = NULL;
  if(match_cons(t, sym__2))
    {
      e_114 = ATgetArgument(t, 0);
      if((e_114 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm f_114 = NULL;
  if(match_cons(t, sym__2))
    {
      f_114 = ATgetArgument(t, 0);
      if((f_114 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm l_118 (ATerm), ATerm m_118 (ATerm), ATerm t)
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL,m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL;
  t_113 = t;
  u_113 = t;
  t = SSL_explode_term(u_113);
  if(match_cons(t, sym__2))
    {
      l_113 = ATgetArgument(t, 0);
      j_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_113);
  n_113 = t;
  t = j_113;
  t = genzip_4_0(s_11, t_11, v_11, l_118, t);
  if(match_cons(t, sym__2))
    {
      m_113 = ATgetArgument(t, 0);
      k_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(l_113, m_113);
  s_113 = t;
  t = SSLsetAnnotations(s_113, n_113);
  t = m_118(t);
  if(match_cons(t, sym__2))
    {
      o_113 = ATgetArgument(t, 0);
      p_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_113;
  t = foldr_2_0(w_11, x_11, t);
  r_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_113, r_113);
  t = r_10(z_11, p_113, r_113, t);
  q_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_113, q_113);
  return(t);
}
ATerm collect_split_2_0 (ATerm c_119 (ATerm), ATerm d_119 (ATerm), ATerm t)
{
  static ATerm m_114 (ATerm t)
  {
    static ATerm a_12 (ATerm t)
    {
      ATerm h_114 = NULL,i_114 = NULL,j_114 = NULL;
      j_114 = t;
      {
        ATerm j_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_119(t);
            LocalPopChoice(l_32);
          }
        else
          {
            t = j_32;
          }
      }
      h_114 = t;
      t = j_114;
      {
        ATerm m_32 = t;
        int n_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_119(t);
            LocalPopChoice(n_32);
          }
        else
          {
            t = m_32;
            t = (ATerm) ATempty;
          }
      }
      i_114 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_114, i_114);
      return(t);
    }
    t = CollectSplit_2_0(m_114, a_12, t);
    return(t);
  }
  t = m_114(t);
  return(t);
}
ATerm genzip_4_0 (ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  static ATerm y_114 (ATerm t)
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_107(t);
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        {
          ATerm s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,x_114 = NULL,v_7 = NULL;
          t = l_107(t);
          x_114 = t;
          if(match_cons(t, sym__2))
            {
              t_114 = ATgetArgument(t, 0);
              u_114 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_114);
          s_114 = t;
          t = t_114;
          t = n_107(t);
          v_114 = t;
          t = u_114;
          t = y_114(t);
          w_114 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_114, w_114);
          v_7 = t;
          t = SSLsetAnnotations(v_7, s_114);
          t = m_107(t);
        }
      }
    return(t);
  }
  t = y_114(t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      ATerm r_32 = ATgetArgument(t, 1);
      if(((ATgetType(r_32) != AT_LIST) || !(ATisEmpty(r_32))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL,i_115 = NULL;
  if(match_cons(t, sym__2))
    {
      e_115 = ATgetArgument(t, 0);
      {
        ATerm s_32 = ATgetArgument(t, 1);
        if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
          {
            f_115 = ATgetFirst((ATermList) s_32);
            g_115 = (ATerm) ATgetNext((ATermList) s_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_e_17;
  i_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_115, term_e_17);
  t = k_11(e_115, i_115, t);
  h_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_115, f_115), (ATerm) ATmakeAppl(sym__2, h_115, g_115));
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm j_115 = NULL,k_115 = NULL;
  if(match_cons(t, sym__2))
    {
      j_115 = ATgetArgument(t, 0);
      k_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_115), j_115);
  return(t);
}
ATerm nzip0_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm a_115 = NULL;
  a_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_28, a_115);
  t = genzip_4_0(b_12, c_12, f_12, v_107, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm t_115 = NULL,v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL;
  if(match_cons(t, sym_As_2))
    {
      v_115 = ATgetArgument(t, 0);
      x_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_115;
  if(match_cons(t, sym_Off_1))
    {
      w_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_115;
  {
    ATerm u_32 = t;
    int v_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm w_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_32);
        {
          ATerm x_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm g_12 (ATerm t)
              {
                ATerm c_116 = NULL,d_116 = NULL;
                if(match_cons(t, sym__2))
                  {
                    c_116 = ATgetArgument(t, 0);
                    d_116 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(w_115), c_116)), d_116);
                return(t);
              }
              t = x_115;
              t = nzip0_1_0(g_12, t);
              LocalPopChoice(y_32);
            }
          else
            {
              t = x_32;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, w_115), term_z_28);
            }
        }
      }
    else
      {
        t = u_32;
        if(match_cons(t, sym_As_2))
          {
            y_115 = ATgetArgument(t, 0);
            z_115 = ATgetArgument(t, 1);
            t = y_115;
            if(match_cons(t, sym_Var_1))
              {
                t_115 = ATgetArgument(t, 0);
                {
                  ATerm a_33 = t;
                  int c_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm h_12 (ATerm t)
                      {
                        ATerm h_116 = NULL,i_116 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            h_116 = ATgetArgument(t, 0);
                            i_116 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(w_115), h_116)), i_116);
                        return(t);
                      }
                      t = x_115;
                      t = nzip0_1_0(h_12, t);
                      LocalPopChoice(c_33);
                    }
                  else
                    {
                      t = a_33;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_115), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, w_115), z_115));
                    }
                }
              }
            else
              {
                static ATerm i_12 (ATerm t)
                {
                  ATerm q_116 = NULL,r_116 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      q_116 = ATgetArgument(t, 0);
                      r_116 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(w_115), q_116)), r_116);
                  return(t);
                }
                t = x_115;
                t = nzip0_1_0(i_12, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                y_115 = ATgetArgument(t, 0);
                z_115 = ATgetArgument(t, 1);
                {
                  ATerm d_33 = t;
                  int e_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm k_12 (ATerm t)
                      {
                        ATerm u_116 = NULL,v_116 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            u_116 = ATgetArgument(t, 0);
                            v_116 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(w_115), u_116)), v_116);
                        return(t);
                      }
                      t = x_115;
                      t = nzip0_1_0(k_12, t);
                      LocalPopChoice(e_33);
                    }
                  else
                    {
                      t = d_33;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, w_115), (ATerm) ATmakeAppl(sym_Op_2, y_115, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, w_115), z_115)));
                    }
                }
              }
            else
              {
                static ATerm l_12 (ATerm t)
                {
                  ATerm b_117 = NULL,c_117 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      b_117 = ATgetArgument(t, 0);
                      c_117 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(w_115), b_117)), c_117);
                  return(t);
                }
                t = x_115;
                t = nzip0_1_0(l_12, t);
              }
          }
      }
  }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm t_117 = NULL,u_117 = NULL,v_117 = NULL;
  v_117 = t;
  if(match_cons(t, sym_As_2))
    {
      t_117 = ATgetArgument(t, 0);
      u_117 = ATgetArgument(t, 1);
      t = t_117;
      if(match_cons(t, sym_Wld_0))
        {
          t = u_117;
        }
      else
        {
          t = v_117;
        }
    }
  else
    {
      t = v_117;
    }
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm f_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      LocalPopChoice(g_33);
    }
  else
    {
      t = f_33;
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm h_118 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      h_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_118;
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm i_118 = NULL,j_118 = NULL;
  if(match_cons(t, sym__2))
    {
      i_118 = ATgetArgument(t, 0);
      j_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(s_12, i_118, j_118, t);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm k_118 = NULL;
  if(match_cons(t, sym__2))
    {
      k_118 = ATgetArgument(t, 0);
      if((k_118 != ATgetArgument(t, 1)))
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
  ATerm l_117 = NULL,m_117 = NULL,n_117 = NULL,q_117 = NULL;
  q_117 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_h_33, (ATerm) ATinsert(ATempty, q_117));
  t = topdown_1_0(o_12, t);
  t = topdown_1_0(p_12, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      l_117 = ATgetArgument(t, 0);
      m_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_117;
  t = collect_om_2_0(q_12, r_12, t);
  n_117 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, n_117, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, l_117, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_117), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_q_28)))))));
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = repeat_2_0(w_12, _id, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm k_33 = t;
  int l_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm e_121 (ATerm t)
      {
        ATerm m_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_120 = NULL,b_120 = NULL,h_120 = NULL;
            a_120 = t;
            if(match_cons(t, sym_Choice_2))
              {
                b_120 = ATgetArgument(t, 0);
                h_120 = ATgetArgument(t, 1);
                {
                  ATerm u_56 = NULL,x_56 = NULL,y_56 = NULL,b_8 = NULL;
                  t = SSLgetAnnotations(a_120);
                  u_56 = t;
                  t = b_120;
                  t = e_121(t);
                  x_56 = t;
                  t = h_120;
                  t = e_121(t);
                  y_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_56, y_56);
                  b_8 = t;
                  t = SSLsetAnnotations(b_8, u_56);
                }
              }
            else
              {
                ATerm g_57 = NULL,j_57 = NULL,k_57 = NULL,c_8 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    b_120 = ATgetArgument(t, 0);
                    h_120 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_120);
                g_57 = t;
                t = b_120;
                t = e_121(t);
                j_57 = t;
                t = h_120;
                t = e_121(t);
                k_57 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, j_57, k_57);
                c_8 = t;
                t = SSLsetAnnotations(c_8, g_57);
              }
            LocalPopChoice(n_33);
          }
        else
          {
            t = m_33;
            {
              static ATerm i_121 (ATerm t)
              {
                ATerm p_33 = t;
                int q_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_120 = NULL,a_121 = NULL,b_121 = NULL;
                    a_121 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        b_121 = ATgetArgument(t, 0);
                        z_120 = ATgetArgument(t, 1);
                        {
                          ATerm t_57 = NULL,x_57 = NULL,y_57 = NULL,d_8 = NULL;
                          t = SSLgetAnnotations(a_121);
                          t_57 = t;
                          t = b_121;
                          t = i_121(t);
                          x_57 = t;
                          t = z_120;
                          t = match_to_matrix_0_0(t);
                          y_57 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_57, y_57);
                          d_8 = t;
                          t = SSLsetAnnotations(d_8, t_57);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            b_121 = ATgetArgument(t, 0);
                            z_120 = ATgetArgument(t, 1);
                            {
                              ATerm x_58 = NULL,b_59 = NULL,h_8 = NULL;
                              t = SSLgetAnnotations(a_121);
                              x_58 = t;
                              t = z_120;
                              t = i_121(t);
                              b_59 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, b_121, b_59);
                              h_8 = t;
                              t = SSLsetAnnotations(h_8, x_58);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                b_121 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = b_121;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    LocalPopChoice(q_33);
                  }
                else
                  {
                    t = p_33;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = i_121(t);
            }
          }
        return(t);
      }
      ATerm s_33 = t;
      int t_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL,z_7 = NULL;
          x_118 = t;
          if(match_cons(t, sym_Choice_2))
            {
              v_118 = ATgetArgument(t, 0);
              w_118 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_118);
          u_118 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, v_118, w_118);
          z_7 = t;
          t = SSLsetAnnotations(z_7, u_118);
          LocalPopChoice(t_33);
        }
      else
        {
          t = s_33;
          {
            ATerm y_118 = NULL,z_118 = NULL,a_119 = NULL,b_119 = NULL,a_8 = NULL;
            b_119 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                z_118 = ATgetArgument(t, 0);
                a_119 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_119);
            y_118 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, z_118, a_119);
            a_8 = t;
            t = SSLsetAnnotations(a_8, y_118);
          }
        }
      t = e_121(t);
      LocalPopChoice(l_33);
    }
  else
    {
      t = k_33;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(t_12, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_p_30;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_121 = NULL,o_121 = NULL,p_121 = NULL;
      n_121 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          o_121 = ATgetArgument(t, 0);
          {
            ATerm b_34 = t;
            int f_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_121 = NULL;
                t = o_121;
                t = map_1_0(c_13, t);
                r_121 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, r_121);
                LocalPopChoice(f_34);
              }
            else
              {
                t = b_34;
                {
                  ATerm g_34 = t;
                  int h_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = n_121;
                      t = h_9(o_121, t);
                      LocalPopChoice(h_34);
                    }
                  else
                    {
                      t = g_34;
                      {
                        ATerm i_34 = t;
                        int j_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = n_121;
                            t = f_9(o_121, t);
                            LocalPopChoice(j_34);
                          }
                        else
                          {
                            t = i_34;
                            t = n_121;
                            t = d_9(o_121, t);
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
              o_121 = ATgetArgument(t, 0);
              p_121 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_121;
          t = v_8(o_121, p_121, t);
        }
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      t = Simplify_0_0(t);
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm z_121 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm k_34 = ATgetArgument(t, 0);
      if(((ATgetType(k_34) != AT_LIST) || !(ATisEmpty(k_34))))
        _fail(t);
      {
        ATerm m_34 = ATgetArgument(t, 1);
        if(((ATgetType(m_34) != AT_LIST) || !(ATisEmpty(m_34))))
          _fail(t);
      }
      z_121 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_121;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    static ATerm z_12 (ATerm t)
    {
      t = repeat_2_0(b_13, _id, t);
      t = SRTS_all(z_12, t);
      return(t);
    }
    t = scope_2_0(x_12, z_12, t);
  }
  t = strename_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  static ATerm d_13 (ATerm t)
  {
    t = topdown_1_0(y_102, t);
    return(t);
  }
  t = y_102(t);
  t = SRTS_all(d_13, t);
  return(t);
}
ATerm map_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  static ATerm z_122 (ATerm t)
  {
    ATerm w_122 = NULL,x_122 = NULL,y_122 = NULL;
    w_122 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_122;
      }
    else
      {
        ATerm j_59 = NULL,m_59 = NULL,n_59 = NULL,j_10 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_122 = ATgetFirst((ATermList) t);
            y_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_122);
        j_59 = t;
        t = x_122;
        t = b_115(t);
        m_59 = t;
        t = y_122;
        t = z_122(t);
        n_59 = t;
        t = (ATerm) ATinsert(CheckATermList(n_59), m_59);
        j_10 = t;
        t = SSLsetAnnotations(j_10, j_59);
      }
    return(t);
  }
  t = z_122(t);
  return(t);
}
static ATerm d_11 (ATerm t_39, ATerm u_39, ATerm t)
{
  ATerm b_123 = NULL;
  t = SSL_fputc(t_39, u_39);
  b_123 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_123);
  return(t);
}
static ATerm e_11 (ATerm l_38, ATerm m_38, ATerm t)
{
  ATerm c_123 = NULL;
  t = SSL_write_term_to_stream_text(l_38, m_38);
  c_123 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_123);
  return(t);
}
static ATerm g_11 (ATerm i_110 (ATerm), ATerm m_261, ATerm p_38, ATerm t)
{
  ATerm d_123 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_261, term_q_34);
  t = j_11(t);
  d_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_123, p_38);
  t = i_110(t);
  t = fclose_0_0(t);
  t = p_38;
  return(t);
}
static ATerm f_11 (ATerm h_38, ATerm i_38, ATerm t)
{
  ATerm e_123 = NULL;
  t = SSL_write_term_to_stream_baf(h_38, i_38);
  e_123 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_123);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_34 = ATgetArgument(t, 0);
      if(match_cons(r_34, sym_Stream_1))
        {
          l_60 = ATgetArgument(r_34, 0);
        }
      else
        _fail(t);
      m_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(l_60, m_60, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm i_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,p_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_34 = ATgetArgument(t, 0);
      if(match_cons(s_34, sym_Stream_1))
        {
          m_61 = ATgetArgument(s_34, 0);
        }
      else
        _fail(t);
      p_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(m_61, p_61, t);
  i_61 = t;
  t = term_u_34;
  k_61 = t;
  t = i_61;
  if(match_cons(t, sym_Stream_1))
    {
      l_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_34, i_61);
  t = d_11(k_61, l_61, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL,l_123 = NULL,m_123 = NULL,o_123 = NULL,p_123 = NULL,q_123 = NULL,r_123 = NULL,s_123 = NULL,w_124 = NULL,x_124 = NULL,x_10 = NULL,l_10 = NULL;
  j_123 = t;
  if(match_cons(t, sym__2))
    {
      q_123 = ATgetArgument(t, 0);
      r_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_123);
  p_123 = t;
  t = q_123;
  {
    ATerm v_34 = t;
    int w_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm f_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((i_123 != NULL) && (i_123 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                i_123 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(f_13, t);
        LocalPopChoice(w_34);
      }
    else
      {
        t = v_34;
        t = term_z_34;
        i_123 = t;
      }
  }
  s_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_123, r_123);
  l_10 = t;
  t = SSLsetAnnotations(l_10, p_123);
  t = j_123;
  if(match_cons(t, sym__2))
    {
      l_123 = ATgetArgument(t, 0);
      m_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_123);
  k_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_123, (ATerm) ATmakeAppl(sym__2, not_null(i_123), m_123));
  x_10 = t;
  t = SSLsetAnnotations(x_10, k_123);
  o_123 = t;
  if(match_cons(t, sym__2))
    {
      w_124 = ATgetArgument(t, 0);
      x_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_35 = t;
    int h_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_60 = NULL,e_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_11 = NULL;
        t = SSLgetAnnotations(o_123);
        b_60 = t;
        t = w_124;
        t = fetch_1_0(h_13, t);
        e_60 = t;
        t = x_124;
        if(match_cons(t, sym__2))
          {
            j_60 = ATgetArgument(t, 0);
            k_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_11(j_13, j_60, k_60, t);
        i_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_60, i_60);
        l_11 = t;
        t = SSLsetAnnotations(l_11, b_60);
        LocalPopChoice(h_35);
      }
    else
      {
        t = g_35;
        {
          ATerm s_60 = NULL,b_61 = NULL,c_61 = NULL,h_61 = NULL,q_11 = NULL;
          t = SSLgetAnnotations(o_123);
          s_60 = t;
          t = x_124;
          if(match_cons(t, sym__2))
            {
              c_61 = ATgetArgument(t, 0);
              h_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_11(k_13, c_61, h_61, t);
          b_61 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_124, b_61);
          q_11 = t;
          t = SSLsetAnnotations(q_11, s_60);
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
ATerm apply_strategy_1_0 (ATerm c_129 (ATerm), ATerm t)
{
  ATerm a_125 = NULL,b_125 = NULL,c_125 = NULL,d_125 = NULL,e_125 = NULL;
  e_125 = t;
  t = dtime_0_0(t);
  t = e_125;
  t = c_129(t);
  d_125 = t;
  t = dtime_0_0(t);
  a_125 = t;
  t = d_125;
  if(match_cons(t, sym__2))
    {
      b_125 = ATgetArgument(t, 0);
      c_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_125), (ATerm) ATmakeAppl(sym_Runtime_1, a_125)), c_125);
  return(t);
}
static ATerm s_125 (ATerm m_125, ATerm t)
{
  t = SSL_fclose(m_125);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_125 = NULL,q_125 = NULL;
  q_125 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_125 = ATgetArgument(t, 0);
      {
        ATerm i_35 = t;
        int j_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_125);
            LocalPopChoice(j_35);
          }
        else
          {
            t = i_35;
            t = s_125(q_125, t);
          }
      }
    }
  else
    {
      t = s_125(q_125, t);
    }
  return(t);
}
static ATerm h_11 (ATerm n_38, ATerm t)
{
  t = SSL_read_term_from_stream(n_38);
  return(t);
}
static ATerm i_11 (ATerm v_39, ATerm w_39, ATerm t)
{
  ATerm t_125 = NULL;
  t = SSL_fopen(v_39, w_39);
  t_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_125);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_125 = NULL;
  t = SSL_stdin_stream();
  u_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_125);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_125 = NULL;
  t = SSL_stdout_stream();
  v_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_125);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_125 = NULL;
  t = SSL_stderr_stream();
  w_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_125);
  return(t);
}
static ATerm d_127 (ATerm c_126, ATerm t)
{
  ATerm d_126 = NULL;
  t = SSL_explode_term(c_126);
  if(match_cons(t, sym__2))
    {
      ATerm k_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_35 = ATgetArgument(t, 1);
        if(((ATgetType(l_35) == AT_LIST) && !(ATisEmpty(l_35))))
          {
            d_126 = ATgetFirst((ATermList) l_35);
            {
              ATerm m_35 = (ATerm) ATgetNext((ATermList) l_35);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_126;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_126;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_126;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_126;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_127 (ATerm g_126, ATerm h_126, ATerm i_126, ATerm t)
{
  ATerm j_126 = NULL,k_126 = NULL,l_126 = NULL,o_126 = NULL,d_12 = NULL;
  t = SSLgetAnnotations(i_126);
  l_126 = t;
  t = g_126;
  if(match_cons(t, sym_Path_1))
    {
      o_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_126, h_126);
  d_12 = t;
  t = SSLsetAnnotations(d_12, l_126);
  if(match_cons(t, sym__2))
    {
      j_126 = ATgetArgument(t, 0);
      k_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(j_126, k_126, t);
  return(t);
}
static ATerm f_127 (ATerm q_126, ATerm r_126, ATerm s_126, ATerm t)
{
  ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL,y_126 = NULL,e_12 = NULL;
  t = SSLgetAnnotations(s_126);
  v_126 = t;
  t = SSL_is_string(q_126);
  y_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_126, r_126);
  e_12 = t;
  t = SSLsetAnnotations(e_12, v_126);
  if(match_cons(t, sym__2))
    {
      t_126 = ATgetArgument(t, 0);
      u_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(t_126, u_126, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm a_127 = NULL,b_127 = NULL,c_127 = NULL;
  a_127 = t;
  if(match_cons(t, sym__2))
    {
      b_127 = ATgetArgument(t, 0);
      c_127 = ATgetArgument(t, 1);
      {
        ATerm n_35 = t;
        int o_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_127(a_127, t);
            LocalPopChoice(o_35);
          }
        else
          {
            t = n_35;
            {
              ATerm p_35 = t;
              int q_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_127(b_127, c_127, a_127, t);
                  LocalPopChoice(q_35);
                }
              else
                {
                  t = p_35;
                  t = f_127(b_127, c_127, a_127, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_127(a_127, t);
    }
  return(t);
}
static ATerm l_13 (ATerm t)
{
  t = term_r_35;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_127 = NULL,h_127 = NULL,i_127 = NULL;
  ATerm s_35 = t;
  int v_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_127 = NULL;
      j_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_127, term_z_35);
      t = j_11(t);
      LocalPopChoice(v_35);
    }
  else
    {
      t = s_35;
      t = debug_1_0(l_13, t);
      _fail(t);
    }
  h_127 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(i_127, t);
  g_127 = t;
  t = h_127;
  t = fclose_0_0(t);
  t = g_127;
  return(t);
}
ATerm fetch_1_0 (ATerm l_115 (ATerm), ATerm t)
{
  static ATerm h_128 (ATerm t)
  {
    ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL;
    e_128 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_128 = ATgetFirst((ATermList) t);
        g_128 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm b_36 = t;
      int c_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_62 = NULL,e_62 = NULL,u_12 = NULL;
          t = SSLgetAnnotations(e_128);
          b_62 = t;
          t = f_128;
          t = l_115(t);
          e_62 = t;
          t = (ATerm) ATinsert(CheckATermList(g_128), e_62);
          u_12 = t;
          t = SSLsetAnnotations(u_12, b_62);
          LocalPopChoice(c_36);
        }
      else
        {
          t = b_36;
          {
            ATerm x_62 = NULL,e_63 = NULL,v_12 = NULL;
            t = SSLgetAnnotations(e_128);
            x_62 = t;
            t = g_128;
            t = h_128(t);
            e_63 = t;
            t = (ATerm) ATinsert(CheckATermList(e_63), f_128);
            v_12 = t;
            t = SSLsetAnnotations(v_12, x_62);
          }
        }
    }
    return(t);
  }
  t = h_128(t);
  return(t);
}
static ATerm c_11 (ATerm n_61, ATerm o_61, ATerm t)
{
  t = SSL_strcat(n_61, o_61);
  return(t);
}
ATerm debug_1_0 (ATerm g_110 (ATerm), ATerm t)
{
  ATerm k_128 = NULL,l_128 = NULL,m_128 = NULL,n_128 = NULL;
  k_128 = t;
  t = g_110(t);
  l_128 = t;
  t = term_u_16;
  m_128 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_128), l_128);
  n_128 = t;
  t = SSL_printnl(m_128, n_128);
  t = k_128;
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
    }
  return(t);
}
static ATerm q_13 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_128 = NULL;
      u_128 = t;
      t = SSL_is_string(u_128);
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm j_36 = t;
        int k_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_13, t);
            LocalPopChoice(k_36);
          }
        else
          {
            t = j_36;
            {
              ATerm a_129 = NULL,b_129 = NULL,d_129 = NULL;
              a_129 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_129 = ATgetArgument(t, 0);
                  t = b_129;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_129 = ATgetArgument(t, 0);
                      t = b_129;
                      {
                        ATerm l_36 = t;
                        int m_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(m_36);
                          }
                        else
                          {
                            t = l_36;
                            t = debug_1_0(q_13, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_129 = NULL,i_129 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_129 = ATgetArgument(t, 0);
                          d_129 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_129;
                      t = eval_config_0_0(t);
                      h_129 = t;
                      t = d_129;
                      t = eval_config_0_0(t);
                      i_129 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_129, i_129);
                      t = c_11(h_129, i_129, t);
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
  ATerm p_129 = NULL,q_129 = NULL;
  p_129 = t;
  t = term_n_36;
  q_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_36, p_129);
  t = m_11(q_129, p_129, t);
  {
    ATerm o_36 = t;
    int q_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_129 = NULL,s_129 = NULL;
        t = eval_config_0_0(t);
        r_129 = t;
        t = term_n_36;
        s_129 = t;
        t = SSL_table_put(s_129, p_129, r_129);
        t = r_129;
        LocalPopChoice(q_36);
      }
    else
      {
        t = o_36;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm w_129 = NULL;
  w_129 = t;
  {
    ATerm s_36 = t;
    int v_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_129 = NULL;
        t = term_x_36;
        t = get_config_0_0(t);
        y_129 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_129, term_y_36);
        t = geq_0_0(t);
        t = w_129;
        t = z_111(t);
        LocalPopChoice(v_36);
      }
    else
      {
        t = s_36;
        t = w_129;
      }
  }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm g_130 = NULL;
  g_130 = t;
  if(match_string(t, "-k"))
    {
      t = g_130;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_130;
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm h_130 = NULL,i_130 = NULL,j_130 = NULL;
  h_130 = t;
  t = SSL_string_to_int(h_130);
  i_130 = t;
  t = term_z_36;
  j_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_36, i_130);
  t = p_11(j_130, i_130, t);
  t = h_130;
  return(t);
}
static ATerm a_14 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_13, z_13, a_14, t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm l_130 = NULL;
  l_130 = t;
  if(match_string(t, "-S"))
    {
      t = l_130;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_130;
    }
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm m_130 = NULL,n_130 = NULL;
  t = term_x_36;
  m_130 = t;
  t = term_q_28;
  n_130 = t;
  t = term_e_37;
  t = p_11(m_130, n_130, t);
  t = term_f_37;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_i_37;
  return(t);
}
static ATerm e_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm o_130 = NULL,p_130 = NULL,q_130 = NULL;
  o_130 = t;
  t = SSL_string_to_int(o_130);
  p_130 = t;
  t = term_x_36;
  q_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_36, p_130);
  t = p_11(q_130, p_130, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_130);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_k_37;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm r_130 = NULL,s_130 = NULL;
  t = term_l_37;
  r_130 = t;
  t = term_t_16;
  s_130 = t;
  t = term_m_37;
  t = p_11(r_130, s_130, t);
  t = term_n_37;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = term_o_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_14, c_14, d_14, t);
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
            t = ArgOption_3_0(e_14, f_14, g_14, t);
            LocalPopChoice(s_37);
          }
        else
          {
            t = r_37;
            t = Option_3_0(h_14, i_14, j_14, t);
          }
      }
    }
  return(t);
}
static ATerm p_11 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm t_130 = NULL;
  t = term_n_36;
  t_130 = t;
  t = SSL_table_put(t_130, l_43, m_43);
  t = (ATerm) ATmakeAppl(sym__3, term_n_36, l_43, m_43);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm w_130 = NULL,x_130 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL;
      t = term_t_16;
      t = e_0(t);
      y_130 = t;
      t = term_u_37;
      z_130 = t;
      t = term_v_37;
      a_131 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_37, term_v_37, y_130);
      t = n_11(z_130, a_131, y_130, t);
      _fail(t);
    }
  else
    {
      ATerm d_131 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_130 = ATgetFirst((ATermList) t);
          x_130 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_130;
      t = c_0(t);
      t = term_t_16;
      t = d_0(t);
      d_131 = t;
      t = (ATerm) ATinsert(CheckATermList(x_130), d_131);
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm f_131 = NULL;
  f_131 = t;
  if(match_string(t, "-o"))
    {
      t = f_131;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_131;
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm g_131 = NULL,h_131 = NULL;
  g_131 = t;
  t = term_x_37;
  h_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_37, g_131);
  t = p_11(h_131, g_131, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_131);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  t = term_b_38;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_14, l_14, m_14, t);
  return(t);
}
static ATerm n_11 (ATerm e_48, ATerm f_48, ATerm d_48, ATerm t)
{
  ATerm j_131 = NULL,k_131 = NULL,l_131 = NULL;
  j_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_48, f_48);
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_38 = ATgetArgument(t, 0);
            ATerm g_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_48, f_48);
        t = m_11(e_48, f_48, t);
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = (ATerm) ATempty;
      }
  }
  k_131 = t;
  t = (ATerm) ATinsert(CheckATermList(k_131), d_48);
  l_131 = t;
  t = SSL_table_put(e_48, f_48, l_131);
  t = j_131;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_131 = NULL,t_131 = NULL,u_131 = NULL,v_131 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_131 = NULL,x_131 = NULL,y_131 = NULL;
      t = term_t_16;
      t = n_0(t);
      w_131 = t;
      t = term_u_37;
      x_131 = t;
      t = term_v_37;
      y_131 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_37, term_v_37, w_131);
      t = n_11(x_131, y_131, w_131, t);
      _fail(t);
    }
  else
    {
      ATerm e_132 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_131 = ATgetFirst((ATermList) t);
          t_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_131;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_131 = ATgetFirst((ATermList) t);
          v_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_131;
      t = k_0(t);
      t = u_131;
      t = l_0(t);
      e_132 = t;
      t = (ATerm) ATinsert(CheckATermList(v_131), e_132);
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm g_132 = NULL;
  g_132 = t;
  if(match_string(t, "-i"))
    {
      t = g_132;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_132;
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm h_132 = NULL,i_132 = NULL;
  h_132 = t;
  t = term_o_38;
  i_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_38, h_132);
  t = p_11(i_132, h_132, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_132);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  t = term_r_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_14, o_14, p_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_132 = NULL,k_132 = NULL,l_132 = NULL,m_132 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_16;
  t = whoami_0_0(t);
  j_132 = t;
  t = term_u_16;
  l_132 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_38), j_132);
  m_132 = t;
  t = SSL_printnl(l_132, m_132);
  t = term_e_17;
  k_132 = t;
  t = SSL_exit(k_132);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_38;
  t = get_config_0_0(t);
  return(t);
}
static ATerm k_11 (ATerm i_46, ATerm j_46, ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_46, j_46);
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
      t = SSL_addr(i_46, j_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm t)
{
  ATerm o_132 = NULL,p_132 = NULL,q_132 = NULL;
  o_132 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_132;
      t = c_120(t);
    }
  else
    {
      ATerm t_132 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_132 = ATgetFirst((ATermList) t);
          q_132 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_132;
      t = foldr_2_0(c_120, d_120, t);
      t_132 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_132, t_132);
      t = d_120(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_q_28;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL;
  if(match_cons(t, sym__2))
    {
      n_64 = ATgetArgument(t, 0);
      o_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(n_64, o_64, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_132 = NULL,j_64 = NULL,k_64 = NULL;
  t = times_0_0(t);
  k_64 = t;
  t = SSL_explode_term(k_64);
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      j_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_64;
  t = foldr_2_0(q_14, r_14, t);
  w_132 = t;
  t = SSL_TicksToSeconds(w_132);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_133 = NULL,i_133 = NULL,j_133 = NULL;
  h_133 = t;
  if(match_cons(t, sym__2))
    {
      i_133 = ATgetArgument(t, 0);
      j_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_133;
        if((i_133 != t))
          {
            _fail(t);
          }
        t = h_133;
        LocalPopChoice(a_39);
      }
    else
      {
        t = z_38;
        t = (ATerm) ATmakeAppl(sym__2, i_133, j_133);
        {
          ATerm b_39 = t;
          int d_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_133, j_133);
              LocalPopChoice(d_39);
            }
          else
            {
              t = b_39;
              t = SSL_gtr(i_133, j_133);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_133, j_133);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_111 (ATerm), ATerm t)
{
  ATerm n_133 = NULL;
  n_133 = t;
  {
    ATerm e_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_133 = NULL;
        t = term_x_36;
        t = get_config_0_0(t);
        q_133 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_133, term_e_17);
        t = geq_0_0(t);
        t = n_133;
        t = y_111(t);
        LocalPopChoice(g_39);
      }
    else
      {
        t = e_39;
        t = n_133;
      }
  }
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm s_133 = NULL,t_133 = NULL,v_133 = NULL,w_133 = NULL;
  t = run_time_0_0(t);
  s_133 = t;
  t = term_t_16;
  t = whoami_0_0(t);
  t_133 = t;
  t = term_u_16;
  v_133 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_39), s_133), term_h_39), t_133);
  w_133 = t;
  t = SSL_printnl(v_133, w_133);
  t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_39), s_133), term_h_39), t_133));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_133 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_28;
  x_133 = t;
  t = SSL_exit(x_133);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm j_134 = NULL,k_134 = NULL;
  k_134 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_134;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_134 = ATgetArgument(t, 0);
          {
            ATerm j_65 = NULL,y_12 = NULL;
            t = SSLgetAnnotations(k_134);
            j_65 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_134);
            y_12 = t;
            t = SSLsetAnnotations(y_12, j_65);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_134;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_39;
      t = get_config_0_0(t);
      LocalPopChoice(k_39);
    }
  else
    {
      t = j_39;
      t = fetch_1_0(t_14, t);
    }
  t = a_130(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm n_134 = NULL,o_134 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_134 = ATgetFirst((ATermList) t);
      o_134 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_134 = NULL,u_134 = NULL;
        static ATerm z_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_134)), not_null(u_134));
          return(t);
        }
        t = o_134;
        t = i_0(t);
        if(((t_134 != NULL) && (t_134 != t)))
          _fail(t);
        else
          t_134 = t;
        t = n_134;
        t = g_0(t);
        if(((u_134 != NULL) && (u_134 != t)))
          _fail(t);
        else
          u_134 = t;
        t = o_134;
        t = reverse_acc_2_0(g_0, z_14, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_16;
      t = i_0(t);
    }
  return(t);
}
static ATerm m_11 (ATerm v_49, ATerm w_49, ATerm t)
{
  t = SSL_table_get(v_49, w_49);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm y_134 = NULL,z_134 = NULL,a_135 = NULL,a_13 = NULL;
  a_135 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_135);
  y_134 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_134);
  a_13 = t;
  t = SSLsetAnnotations(a_13, y_134);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm d_135 = NULL;
  d_135 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_135), term_m_39);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_134 = NULL,x_134 = NULL;
  ATerm p_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_38;
      t = get_config_0_0(t);
      LocalPopChoice(r_39);
    }
  else
    {
      t = p_39;
      t = fetch_1_0(a_15, t);
    }
  t = term_x_39;
  t = echo_0_0(t);
  t = term_u_37;
  w_134 = t;
  t = term_v_37;
  x_134 = t;
  t = term_z_39;
  t = m_11(w_134, x_134, t);
  t = reverse_acc_2_0(_id, c_15, t);
  t = map_1_0(d_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_135 = NULL,g_135 = NULL,h_135 = NULL;
  f_135 = t;
  {
    ATerm c_40 = t;
    int d_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_135;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_40 = ATgetFirst((ATermList) t);
                ATerm g_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_135;
          }
        LocalPopChoice(d_40);
      }
    else
      {
        t = c_40;
        t = (ATerm) ATinsert(ATempty, f_135);
      }
  }
  g_135 = t;
  t = term_z_34;
  h_135 = t;
  t = SSL_printnl(h_135, g_135);
  t = f_135;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_38;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm l_135 = NULL,m_135 = NULL;
  t = term_h_40;
  l_135 = t;
  t = term_t_16;
  m_135 = t;
  t = term_i_40;
  t = p_11(l_135, m_135, t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = term_j_40;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm n_135 = NULL,o_135 = NULL,p_135 = NULL,q_135 = NULL;
  t = term_h_40;
  p_135 = t;
  t = term_t_16;
  q_135 = t;
  t = term_i_40;
  t = p_11(p_135, q_135, t);
  t = term_k_40;
  n_135 = t;
  t = term_t_16;
  o_135 = t;
  t = term_l_40;
  t = p_11(n_135, o_135, t);
  t = term_m_40;
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_n_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_15, f_15, g_15, t);
      LocalPopChoice(q_40);
    }
  else
    {
      t = o_40;
      t = Option_3_0(h_15, i_15, k_15, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm t)
{
  ATerm r_135 = NULL,s_135 = NULL,t_135 = NULL,u_135 = NULL,v_135 = NULL,w_135 = NULL,e_13 = NULL;
  w_135 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_135 = ATgetFirst((ATermList) t);
      t_135 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_135);
  r_135 = t;
  t = s_135;
  t = s_88(t);
  u_135 = t;
  t = t_135;
  t = t_88(t);
  v_135 = t;
  t = (ATerm) ATinsert(CheckATermList(v_135), u_135);
  e_13 = t;
  t = SSLsetAnnotations(e_13, r_135);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_132 (ATerm), ATerm t)
{
  ATerm c_136 = NULL,d_136 = NULL,e_136 = NULL,f_136 = NULL,h_136 = NULL,i_136 = NULL,g_13 = NULL;
  c_136 = t;
  {
    ATerm r_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_40;
        t = d_132(t);
        LocalPopChoice(s_40);
      }
    else
      {
        t = r_40;
      }
  }
  t = c_136;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_136 = ATgetFirst((ATermList) t);
      f_136 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_136);
  d_136 = t;
  t = term_u_38;
  i_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_38, e_136);
  t = p_11(i_136, e_136, t);
  t = f_136;
  {
    static ATerm t_136 (ATerm t)
    {
      ATerm y_40 = t;
      int z_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_41 = t;
          int b_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_136 = NULL;
              m_136 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_136;
              LocalPopChoice(b_41);
            }
          else
            {
              t = a_41;
              t = d_132(t);
              t = Cons_2_0(_id, t_136, t);
            }
          LocalPopChoice(z_40);
        }
      else
        {
          t = y_40;
          {
            ATerm p_136 = NULL,q_136 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                p_136 = ATgetFirst((ATermList) t);
                q_136 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(q_136), (ATerm) ATmakeAppl(sym_Undefined_1, p_136));
          }
        }
      return(t);
    }
    t = t_136(t);
  }
  h_136 = t;
  t = (ATerm) ATinsert(CheckATermList(h_136), (ATerm) ATmakeAppl(sym_Program_1, e_136));
  g_13 = t;
  t = SSLsetAnnotations(g_13, d_136);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm g_137 = NULL;
  g_137 = t;
  if(match_string(t, "--help"))
    {
      t = g_137;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = g_137;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = g_137;
        }
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm h_137 = NULL,i_137 = NULL;
  t = term_l_39;
  h_137 = t;
  t = term_t_16;
  i_137 = t;
  t = term_f_41;
  t = p_11(h_137, i_137, t);
  t = term_j_41;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_k_41;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_132 (ATerm), ATerm t)
{
  ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL,b_137 = NULL,c_137 = NULL,d_137 = NULL,f_137 = NULL;
  a_137 = t;
  t = term_u_37;
  c_137 = t;
  t = term_v_37;
  d_137 = t;
  t = (ATerm) ATempty;
  f_137 = t;
  t = SSL_table_put(c_137, d_137, f_137);
  t = a_137;
  {
    static ATerm l_15 (ATerm t)
    {
      ATerm l_41 = t;
      int p_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_132(t);
          LocalPopChoice(p_41);
        }
      else
        {
          t = l_41;
          {
            ATerm q_41 = t;
            int r_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_15, n_15, o_15, t);
                LocalPopChoice(r_41);
              }
            else
              {
                t = q_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_15, t);
  }
  {
    ATerm s_41 = t;
    int v_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_137 = NULL;
        p_137 = t;
        {
          ATerm w_41 = t;
          int y_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_66 = NULL;
              t = p_137;
              {
                ATerm z_41 = t;
                int a_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_39;
                    t = get_config_0_0(t);
                    LocalPopChoice(a_42);
                  }
                else
                  {
                    t = z_41;
                    t = fetch_1_0(p_15, t);
                  }
              }
              t = p_137;
              t = default_system_usage_0_0(t);
              t = term_q_28;
              b_66 = t;
              t = SSL_exit(b_66);
              LocalPopChoice(y_41);
            }
          else
            {
              t = w_41;
              {
                ATerm f_66 = NULL;
                t = term_h_40;
                t = get_config_0_0(t);
                t = p_137;
                t = default_system_about_0_0(t);
                t = term_q_28;
                f_66 = t;
                t = SSL_exit(f_66);
              }
            }
        }
        LocalPopChoice(v_41);
      }
    else
      {
        t = s_41;
        {
          ATerm b_42 = t;
          int c_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_137 = NULL,s_137 = NULL,t_137 = NULL;
              static ATerm q_15 (ATerm t)
              {
                ATerm u_137 = NULL,v_137 = NULL,w_137 = NULL,m_13 = NULL;
                w_137 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_137 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_137);
                u_137 = t;
                t = v_137;
                if(((y_136 != NULL) && (y_136 != t)))
                  _fail(t);
                else
                  y_136 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_137);
                m_13 = t;
                t = SSLsetAnnotations(m_13, u_137);
                return(t);
              }
              t = fetch_1_0(q_15, t);
              t = term_u_16;
              s_137 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_136)), term_i_42);
              t_137 = t;
              t = SSL_printnl(s_137, t_137);
              t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_136)), term_i_42));
              t = default_system_usage_0_0(t);
              t = term_e_17;
              r_137 = t;
              t = SSL_exit(r_137);
              LocalPopChoice(c_42);
            }
          else
            {
              t = b_42;
            }
        }
      }
  }
  z_136 = t;
  t = term_u_37;
  b_137 = t;
  t = SSL_table_destroy(b_137);
  t = z_136;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm f_130 (ATerm), ATerm t)
{
  ATerm b_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL;
  t = parse_options_1_0(c_130, t);
  b_138 = t;
  t = term_r_42;
  e_138 = t;
  t = SSL_table_create(e_138);
  t = term_r_42;
  c_138 = t;
  t = term_s_42;
  d_138 = t;
  t = SSL_table_put(c_138, d_138, b_138);
  t = b_138;
  t = e_130(t);
  {
    ATerm t_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_130, t);
        LocalPopChoice(v_42);
      }
    else
      {
        t = t_42;
        {
          ATerm w_42 = t;
          int b_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_130(t);
              t = report_success_0_0(t);
              LocalPopChoice(b_43);
            }
          else
            {
              t = w_42;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = if_verbose2_1_0(h_16, t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm f_138 = NULL,g_138 = NULL;
  t = term_c_43;
  f_138 = t;
  t = term_t_16;
  g_138 = t;
  t = term_d_43;
  t = p_11(f_138, g_138, t);
  t = term_e_43;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = term_f_43;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm h_138 = NULL,i_138 = NULL,j_138 = NULL,k_138 = NULL;
  h_138 = t;
  t = term_u_38;
  t = get_config_0_0(t);
  i_138 = t;
  t = term_u_16;
  j_138 = t;
  t = (ATerm) ATinsert(ATempty, i_138);
  k_138 = t;
  t = SSL_printnl(j_138, k_138);
  t = h_138;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_129 (ATerm), ATerm m_129 (ATerm), ATerm n_129 (ATerm), ATerm t)
{
  static ATerm z_15 (ATerm t)
  {
    ATerm k_43 = t;
    int o_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_129(t);
        LocalPopChoice(o_43);
      }
    else
      {
        t = k_43;
        {
          ATerm q_43 = t;
          int r_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(r_43);
            }
          else
            {
              t = q_43;
              {
                ATerm s_43 = t;
                int t_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(t_43);
                  }
                else
                  {
                    t = s_43;
                    {
                      ATerm u_43 = t;
                      int v_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_16, f_16, g_16, t);
                          LocalPopChoice(v_43);
                        }
                      else
                        {
                          t = u_43;
                          {
                            ATerm x_43 = t;
                            int y_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(y_43);
                              }
                            else
                              {
                                t = x_43;
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
  static ATerm b_16 (ATerm t)
  {
    ATerm m_138 = NULL,n_138 = NULL,o_138 = NULL;
    n_138 = t;
    {
      ATerm a_44 = t;
      int b_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_138 != NULL) && (m_138 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_138 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_16, t);
          LocalPopChoice(b_44);
        }
      else
        {
          t = a_44;
          t = term_c_44;
          m_138 = t;
        }
    }
    t = not_null(m_138);
    t = ReadFromFile_0_0(t);
    o_138 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_138, o_138);
    t = apply_strategy_1_0(l_129, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(z_15, n_129, a_16, b_16, t);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm u_138 = NULL,v_138 = NULL,w_138 = NULL,y_138 = NULL,z_138 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL,d_139 = NULL,e_139 = NULL,f_139 = NULL,g_139 = NULL,h_139 = NULL,i_139 = NULL,j_139 = NULL,k_139 = NULL,l_139 = NULL,m_139 = NULL,n_139 = NULL,y_13 = NULL,x_13 = NULL,w_13 = NULL,v_13 = NULL,p_13 = NULL;
  n_139 = t;
  if(match_cons(t, sym__2))
    {
      v_138 = ATgetArgument(t, 0);
      w_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_139);
  u_138 = t;
  t = w_138;
  if(match_cons(t, sym_Specification_1))
    {
      z_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_138);
  y_138 = t;
  t = z_138;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_139 = ATgetFirst((ATermList) t);
      d_139 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_138);
  b_139 = t;
  t = d_139;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_139 = ATgetFirst((ATermList) t);
      h_139 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_139);
  f_139 = t;
  t = g_139;
  if(match_cons(t, sym_Strategies_1))
    {
      k_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_139);
  j_139 = t;
  t = k_139;
  t = map_1_0(k_16, t);
  l_139 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_139);
  p_13 = t;
  t = SSLsetAnnotations(p_13, j_139);
  m_139 = t;
  t = h_139;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_139), m_139);
  v_13 = t;
  t = SSLsetAnnotations(v_13, f_139);
  i_139 = t;
  t = (ATerm) ATinsert(CheckATermList(i_139), c_139);
  w_13 = t;
  t = SSLsetAnnotations(w_13, b_139);
  e_139 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_139);
  x_13 = t;
  t = SSLsetAnnotations(x_13, y_138);
  a_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_138, a_139);
  y_13 = t;
  t = SSLsetAnnotations(y_13, u_138);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm g_140 = NULL,h_140 = NULL,i_140 = NULL,j_140 = NULL,k_140 = NULL;
  k_140 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      g_140 = ATgetArgument(t, 0);
      h_140 = ATgetArgument(t, 1);
      i_140 = ATgetArgument(t, 2);
      j_140 = ATgetArgument(t, 3);
      {
        ATerm d_44 = t;
        int e_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_66 = NULL,x_66 = NULL,o_13 = NULL;
            t = SSLgetAnnotations(k_140);
            q_66 = t;
            t = j_140;
            t = topdown_1_0(q_16, t);
            t = match_to_dfa_0_0(t);
            x_66 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_140, h_140, i_140, x_66);
            o_13 = t;
            t = SSLsetAnnotations(o_13, q_66);
            LocalPopChoice(e_44);
          }
        else
          {
            t = d_44;
            t = k_140;
          }
      }
    }
  else
    {
      t = k_140;
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm c_67 = NULL;
  c_67 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm f_44 = t;
      int g_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_67 = NULL;
          t = c_67;
          t = new_0_0(t);
          d_67 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_67), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_67)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, d_67))));
          LocalPopChoice(g_44);
        }
      else
        {
          t = f_44;
          t = c_67;
        }
    }
  else
    {
      t = c_67;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_16, _fail, default_usage_0_0, t);
  return(t);
}
