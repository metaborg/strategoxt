#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
void init_constructors (void)
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  init_constant_terms();
}
ATerm term_v_43;
ATerm term_v_42;
ATerm term_s_42;
ATerm term_q_42;
ATerm term_o_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_e_42;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_v_40;
ATerm term_j_40;
ATerm term_g_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_r_38;
ATerm term_j_38;
ATerm term_g_38;
ATerm term_d_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_v_37;
ATerm term_u_37;
ATerm term_k_37;
ATerm term_j_37;
ATerm term_h_37;
ATerm term_g_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_b_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_o_36;
ATerm term_d_36;
ATerm term_v_35;
ATerm term_s_35;
ATerm term_y_34;
ATerm term_v_34;
ATerm term_q_34;
ATerm term_h_33;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_u_28;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_f_28;
ATerm term_d_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_h_23;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_17;
ATerm term_u_16;
ATerm term_t_16;
void init_constant_terms (void)
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
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_Fail_0);
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
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym__2, term_v_36, term_m_28);
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_28);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_37));
  term_g_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym__2, term_g_37, term_t_16);
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_37));
  term_v_37 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym__2, term_u_37, term_v_37);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym__2, term_a_40, term_t_16);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(sym__2, term_e_40, term_t_16);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(sym__2, term_q_39, term_t_16);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym__2, term_o_42, term_t_16);
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm a_0 (ATerm);
ATerm b_0 (ATerm);
ATerm f_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm z_0 (ATerm);
ATerm g_1 (ATerm);
ATerm i_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm z_1 (ATerm);
ATerm spaste_1_0 (ATerm n_97 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm e_8 (ATerm e_30, ATerm d_30, ATerm);
ATerm SVar_1_0 (ATerm a_86 (ATerm), ATerm);
ATerm f_8 (ATerm y_111 (ATerm), ATerm z_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_46, ATerm n_46, ATerm m_46, ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_8 (ATerm s_111 (ATerm), ATerm t_111 (ATerm (ATerm), ATerm), ATerm g_46, ATerm j_46, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm g_112 (ATerm), ATerm);
ATerm rename_4_0 (ATerm n_111 (ATerm (ATerm), ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_111 (ATerm (ATerm), ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm tpaste_1_0 (ATerm j_97 (ATerm), ATerm);
ATerm Var_1_0 (ATerm r_82 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm l_9 (ATerm m_72, ATerm l_72, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm n_99 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm simple_strategy_0_0 (ATerm);
ATerm l_8 (ATerm q_106 (ATerm), ATerm m_38, ATerm l_38, ATerm);
ATerm tvars_matrix_boundin_3_0 (ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm t_4 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm v_4 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm h_5 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm r_8 (ATerm s_106 (ATerm), ATerm o_38, ATerm n_38, ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_8 (ATerm d_654, ATerm i_654, ATerm n_65, ATerm);
ATerm while_not_2_0 (ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm);
ATerm for_3_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm z_85 (ATerm l_84, ATerm n_84, ATerm o_84, ATerm);
ATerm v_5 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm b_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm free_vars_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm n_6 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm d_7 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm RowLet_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm j_7 (ATerm);
ATerm m_7 (ATerm);
ATerm q_7 (ATerm);
ATerm v_8 (ATerm i_76, ATerm h_76, ATerm);
ATerm w_8 (ATerm x_110 (ATerm), ATerm t_43, ATerm r_43, ATerm);
ATerm x_7 (ATerm);
ATerm default_state_0_0 (ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm k_8 (ATerm);
ATerm m_8 (ATerm);
ATerm MatchCons_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm y_8 (ATerm x_126 (ATerm), ATerm v_74, ATerm s_74, ATerm t_74, ATerm u_74, ATerm);
ATerm z_8 (ATerm o_74, ATerm p_74, ATerm q_74, ATerm);
ATerm filter_1_0 (ATerm b_111 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm t_105 (ATerm), ATerm);
ATerm x_8 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm e_9 (ATerm);
ATerm ConsArgs_0_0 (ATerm);
ATerm g_9 (ATerm);
ATerm outedges_0_0 (ATerm);
ATerm b_99 (ATerm g_97, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm k_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm d_9 (ATerm b_76, ATerm);
ATerm s_9 (ATerm);
ATerm t_9 (ATerm);
ATerm f_9 (ATerm r_75, ATerm);
ATerm w_9 (ATerm);
ATerm h_9 (ATerm p_75, ATerm);
ATerm repeat_1_0 (ATerm m_115 (ATerm), ATerm);
ATerm j_9 (ATerm g_44, ATerm h_44, ATerm);
ATerm end_scope_1_0 (ATerm u_110 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm t_110 (ATerm), ATerm);
ATerm scope_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm a_105 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm z_105 (ATerm i_105, ATerm);
ATerm conc_0_0 (ATerm);
ATerm m_10 (ATerm);
ATerm p_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm MatrixMerge_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm k_98 (ATerm), ATerm);
ATerm q_10 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm u_38, ATerm t_38, ATerm);
ATerm r_10 (ATerm x_106 (ATerm), ATerm q_38, ATerm p_38, ATerm);
ATerm foldr_3_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm);
ATerm b_11 (ATerm);
ATerm collect_om_2_0 (ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm);
ATerm CollectSubst_0_0 (ATerm);
ATerm IgnoreVar_0_0 (ATerm);
ATerm s_11 (ATerm);
ATerm t_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm y_11 (ATerm);
ATerm z_11 (ATerm);
ATerm CollectSplit_2_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm);
ATerm collect_split_2_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm f_12 (ATerm);
ATerm nzip0_1_0 (ATerm g_103 (ATerm), ATerm);
ATerm Propagate_0_0 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm term_to_matrix_0_0 (ATerm);
ATerm t_12 (ATerm);
ATerm w_12 (ATerm);
ATerm match_to_matrix_0_0 (ATerm);
ATerm x_12 (ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm match_to_dfa_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm topdown_1_0 (ATerm j_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_104 (ATerm), ATerm);
ATerm d_11 (ATerm v_54, ATerm w_54, ATerm);
ATerm e_11 (ATerm j_58, ATerm k_58, ATerm);
ATerm g_11 (ATerm j_120 (ATerm), ATerm f_527, ATerm n_58, ATerm);
ATerm f_11 (ATerm f_58, ATerm g_58, ATerm);
ATerm h_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm l_123 (ATerm), ATerm);
ATerm x_125 (ATerm r_125, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm h_11 (ATerm l_58, ATerm);
ATerm i_11 (ATerm x_54, ATerm y_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_127 (ATerm h_126, ATerm);
ATerm q_127 (ATerm n_126, ATerm o_126, ATerm p_126, ATerm);
ATerm r_127 (ATerm y_126, ATerm z_126, ATerm a_127, ATerm);
ATerm j_11 (ATerm);
ATerm l_13 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_104 (ATerm), ATerm);
ATerm c_11 (ATerm l_52, ATerm m_52, ATerm);
ATerm debug_1_0 (ATerm h_120 (ATerm), ATerm);
ATerm n_13 (ATerm);
ATerm q_13 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm u_121 (ATerm), ATerm);
ATerm u_13 (ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm e_14 (ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm h_14 (ATerm);
ATerm i_14 (ATerm);
ATerm j_14 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_11 (ATerm m_59, ATerm n_59, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm m_14 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_11 (ATerm b_44, ATerm c_44, ATerm a_44, ATerm);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_11 (ATerm f_42, ATerm g_42, ATerm);
ATerm foldr_2_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm t_121 (ATerm), ATerm);
ATerm s_14 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_14 (ATerm);
ATerm need_help_1_0 (ATerm j_124 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm m_11 (ATerm s_45, ATerm t_45, ATerm);
ATerm a_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm g_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm k_15 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm m_126 (ATerm), ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm parse_options_1_0 (ATerm l_126 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm o_124 (ATerm), ATerm);
ATerm a_16 (ATerm);
ATerm e_16 (ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm iowrap_3_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm w_123 (ATerm), ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm q_16 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
  o_0 = t;
  t = term_t_16;
  t = whoami_0_0(t);
  q_0 = t;
  t = term_u_16;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_17), q_0), term_b_17);
  t_0 = t;
  t = SSL_printnl(s_0, t_0);
  t = term_e_17;
  r_0 = t;
  t = SSL_exit(r_0);
  t = o_0;
  return(t);
}
ATerm a_0 (ATerm t)
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
ATerm b_0 (ATerm t)
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
ATerm f_0 (ATerm t)
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
ATerm v_0 (ATerm t)
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
ATerm w_0 (ATerm t)
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
ATerm z_0 (ATerm t)
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
ATerm g_1 (ATerm t)
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
ATerm i_1 (ATerm t)
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
ATerm n_1 (ATerm t)
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
ATerm o_1 (ATerm t)
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
ATerm p_1 (ATerm t)
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
ATerm q_1 (ATerm t)
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
ATerm r_1 (ATerm t)
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
ATerm s_1 (ATerm t)
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
ATerm t_1 (ATerm t)
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
ATerm z_1 (ATerm t)
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
ATerm spaste_1_0 (ATerm n_97 (ATerm), ATerm t)
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
        t = n_97(t);
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
            t = n_97(t);
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
                t = n_97(t);
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
                    t = n_97(t);
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
                  t = n_97(t);
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
ATerm sboundin_3_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
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
        t = o_97(t);
        m_12 = t;
        t = y_14;
        t = o_97(t);
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
            t = q_97(t);
            r_13 = t;
            t = y_14;
            t = q_97(t);
            s_13 = t;
            t = u_14;
            t = o_97(t);
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
                t = q_97(t);
                s_15 = t;
                t = y_14;
                t = q_97(t);
                u_15 = t;
                t = u_14;
                t = q_97(t);
                v_15 = t;
                t = v_14;
                t = o_97(t);
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
              t = q_97(t);
              a_17 = t;
              t = y_14;
              t = o_97(t);
              c_17 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, a_17, c_17);
              k_2 = t;
              t = SSLsetAnnotations(k_2, l_16);
            }
        }
    }
  return(t);
}
ATerm a_2 (ATerm t)
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
ATerm e_8 (ATerm e_30, ATerm d_30, ATerm t)
{
  t = e_30;
  t = map_1_0(a_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm a_86 (ATerm), ATerm t)
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
  t = a_86(t);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, w_15);
  t_2 = t;
  t = SSLsetAnnotations(t_2, r_15);
  return(t);
}
ATerm f_8 (ATerm y_111 (ATerm), ATerm z_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_46, ATerm n_46, ATerm m_46, ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm c_16 = NULL;
    c_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_16, m_46);
    t = y_111(t);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm d_16 = NULL;
    d_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_16, n_46);
    t = y_111(t);
    return(t);
  }
  t = o_46;
  t = z_111(b_2, c_2, _id, t);
  return(t);
}
ATerm d_2 (ATerm t)
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
ATerm e_2 (ATerm t)
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
ATerm f_2 (ATerm t)
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
ATerm g_8 (ATerm s_111 (ATerm), ATerm t_111 (ATerm (ATerm), ATerm), ATerm g_46, ATerm j_46, ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,r_16 = NULL;
  t = g_46;
  t = s_111(t);
  m_16 = t;
  t = map_1_0(new_0_0, t);
  n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_16, n_16);
  t = genzip_4_0(d_2, e_2, f_2, _id, t);
  r_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_16, j_46);
  t = conc_0_0(t);
  o_16 = t;
  t = g_46;
  {
    ATerm j_2 (ATerm t)
    {
      t = n_16;
      return(t);
    }
    t = t_111(j_2, t);
    p_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, p_16, j_46, o_16);
  }
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
            ;
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
ATerm env_alltd_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm h_19 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_112(t);
        ;
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        {
          ATerm c_19 = NULL,d_19 = NULL,g_19 = NULL;
          ATerm l_2 (ATerm t)
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
ATerm rename_4_0 (ATerm n_111 (ATerm (ATerm), ATerm), ATerm o_111 (ATerm), ATerm p_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_111 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_19 = NULL;
  ATerm a_22 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      ATerm j_21 = NULL,t_21 = NULL,v_21 = NULL;
      j_21 = t;
      if(match_cons(t, sym__2))
        {
          t_21 = ATgetArgument(t, 0);
          v_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm y_21 = NULL;
              y_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_21, v_21);
              t = lookup_0_0(t);
              return(t);
            }
            t = t_21;
            t = n_111(n_2, t);
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            {
              ATerm k_18 = NULL,l_18 = NULL,n_18 = NULL;
              t = j_21;
              t = g_8(o_111, q_111, t_21, v_21, t);
              if(match_cons(t, sym__3))
                {
                  k_18 = ATgetArgument(t, 0);
                  l_18 = ATgetArgument(t, 1);
                  n_18 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_8(a_22, p_111, k_18, l_18, n_18, t);
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
  t = a_22(t);
  return(t);
}
ATerm o_2 (ATerm t)
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
ATerm p_2 (ATerm t)
{
  ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_19 = ATgetArgument(t, 0);
      if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
        {
          h_20 = ATgetFirst((ATermList) x_19);
          i_20 = (ATerm) ATgetNext((ATermList) x_19);
        }
      else
        _fail(t);
      {
        ATerm y_19 = ATgetArgument(t, 1);
        if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
          {
            j_20 = ATgetFirst((ATermList) y_19);
            k_20 = (ATerm) ATgetNext((ATermList) y_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_20, j_20), (ATerm) ATmakeAppl(sym__2, i_20, k_20));
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm l_20 = NULL,m_20 = NULL;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_20), l_20);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm o_20 = NULL,q_20 = NULL,r_20 = NULL;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_20;
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_20);
      }
    else
      {
        t = a_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_20 = ATgetArgument(t, 0);
            q_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_20, q_20);
      }
  }
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      if(((ATgetType(g_20) != AT_LIST) || !(ATisEmpty(g_20))))
        _fail(t);
      {
        ATerm n_20 = ATgetArgument(t, 1);
        if(((ATgetType(n_20) != AT_LIST) || !(ATisEmpty(n_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,u_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if(((ATgetType(p_20) == AT_LIST) && !(ATisEmpty(p_20))))
        {
          r_21 = ATgetFirst((ATermList) p_20);
          s_21 = (ATerm) ATgetNext((ATermList) p_20);
        }
      else
        _fail(t);
      {
        ATerm s_20 = ATgetArgument(t, 1);
        if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
          {
            u_21 = ATgetFirst((ATermList) s_20);
            z_21 = (ATerm) ATgetNext((ATermList) s_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_21, u_21), (ATerm) ATmakeAppl(sym__2, s_21, z_21));
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      b_22 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_22), b_22);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm f_22 = NULL,h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      f_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_22;
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_22);
      }
    else
      {
        t = t_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_20 = ATgetArgument(t, 0);
            h_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_22, h_22);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  k_27 = t;
  if(match_cons(t, sym_Scope_2))
    {
      l_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
      {
        ATerm z_18 = NULL,i_19 = NULL,v_2 = NULL;
        t = SSLgetAnnotations(k_27);
        z_18 = t;
        t = l_27;
        t = j_97(t);
        i_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_19, m_27);
        v_2 = t;
        t = SSLsetAnnotations(v_2, z_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          l_27 = ATgetArgument(t, 0);
          m_27 = ATgetArgument(t, 1);
          n_27 = ATgetArgument(t, 2);
          o_27 = ATgetArgument(t, 3);
          {
            ATerm z_19 = NULL,e_20 = NULL,f_20 = NULL,w_2 = NULL;
            t = SSLgetAnnotations(k_27);
            z_19 = t;
            t = n_27;
            t = j_97(t);
            f_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_27, f_20);
            t = genzip_4_0(o_2, p_2, q_2, r_2, t);
            e_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, l_27, m_27, e_20, o_27);
            w_2 = t;
            t = SSLsetAnnotations(w_2, z_19);
          }
        }
      else
        {
          ATerm i_21 = NULL,o_21 = NULL,p_21 = NULL,x_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              l_27 = ATgetArgument(t, 0);
              m_27 = ATgetArgument(t, 1);
              n_27 = ATgetArgument(t, 2);
              o_27 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_27);
          i_21 = t;
          t = n_27;
          t = j_97(t);
          p_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_27, p_21);
          t = genzip_4_0(s_2, u_2, z_2, a_3, t);
          o_21 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, l_27, m_27, o_21, o_27);
          x_2 = t;
          t = SSLsetAnnotations(x_2, i_21);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm r_82 (ATerm), ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,c_3 = NULL;
  v_27 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_27);
  s_27 = t;
  t = t_27;
  t = r_82(t);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_27);
  c_3 = t;
  t = SSLsetAnnotations(c_3, s_27);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm w_28 = NULL,x_28 = NULL,g_29 = NULL,h_29 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            w_28 = ATgetArgument(t, 0);
            x_28 = ATgetArgument(t, 1);
            g_29 = ATgetArgument(t, 2);
            h_29 = ATgetArgument(t, 3);
            t = g_29;
            t = map_1_0(d_3, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                w_28 = ATgetArgument(t, 0);
                x_28 = ATgetArgument(t, 1);
                g_29 = ATgetArgument(t, 2);
                h_29 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = g_29;
            t = map_1_0(u_3, t);
          }
      }
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm o_29 = NULL;
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_29 = ATgetArgument(t, 0);
          {
            ATerm b_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_21);
      t = o_29;
    }
  else
    {
      t = z_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_29;
    }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm m_30 = NULL;
  ATerm c_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_30 = ATgetArgument(t, 0);
          {
            ATerm e_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_21);
      t = m_30;
    }
  else
    {
      t = c_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_30;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm v_30 = NULL,g_31 = NULL,r_31 = NULL,y_31 = NULL,z_31 = NULL;
  v_30 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
      t = v_30;
      t = e_8(g_31, r_31, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_31 = ATgetArgument(t, 0);
          r_31 = ATgetArgument(t, 1);
          y_31 = ATgetArgument(t, 2);
          t = r_31;
          t = map_1_0(w_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              g_31 = ATgetArgument(t, 0);
              r_31 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, g_31);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  g_31 = ATgetArgument(t, 0);
                  r_31 = ATgetArgument(t, 1);
                  y_31 = ATgetArgument(t, 2);
                  z_31 = ATgetArgument(t, 3);
                  t = r_31;
                  t = map_1_0(x_3, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_31 = ATgetArgument(t, 0);
                      r_31 = ATgetArgument(t, 1);
                      y_31 = ATgetArgument(t, 2);
                      z_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_31;
                  t = map_1_0(y_3, t);
                }
            }
        }
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm i_32 = NULL;
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_32 = ATgetArgument(t, 0);
          {
            ATerm h_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_21);
      t = i_32;
    }
  else
    {
      t = f_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_32;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm v_32 = NULL;
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_32 = ATgetArgument(t, 0);
          {
            ATerm m_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_21);
      t = v_32;
    }
  else
    {
      t = k_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_32;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm p_33 = NULL;
  ATerm n_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_33 = ATgetArgument(t, 0);
          {
            ATerm w_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_21);
      t = p_33;
    }
  else
    {
      t = n_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_33;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, b_3, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, v_3, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm x_21 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm e_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(d_22);
      {
        ATerm w_33 = NULL,x_33 = NULL;
        w_33 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm g_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        x_33 = t;
        t = SSLgetAnnotations(w_33);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_22 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) j_22) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_22 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(k_22) != AT_LIST) || !(ATisEmpty(k_22))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_33;
      }
    }
  else
    {
      t = x_21;
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
ATerm l_9 (ATerm m_72, ATerm l_72, ATerm t)
{
  t = m_72;
  t = topdown_1_0(z_3, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, m_72);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,j_35 = NULL,n_35 = NULL,o_35 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      d_35 = ATgetArgument(t, 0);
      j_35 = ATgetArgument(t, 1);
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
  t = j_35;
  if(match_cons(t, sym_Seq_2))
    {
      n_35 = ATgetArgument(t, 0);
      s_34 = ATgetArgument(t, 1);
      t = n_35;
      if(match_cons(t, sym_Build_1))
        {
          o_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_35;
      if(match_cons(t, sym_Var_1))
        {
          r_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_34;
      if((f_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_35)), s_34);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          n_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_35;
      if(match_cons(t, sym_Var_1))
        {
          o_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_35;
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
  ATerm y_35 = NULL,z_35 = NULL,b_36 = NULL,i_36 = NULL,j_36 = NULL,n_36 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_36 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_36;
  if(match_cons(t, sym_Build_1))
    {
      i_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_36;
  if(match_cons(t, sym_Seq_2))
    {
      n_36 = ATgetArgument(t, 0);
      z_35 = ATgetArgument(t, 1);
      t = n_36;
      if(match_cons(t, sym_Match_1))
        {
          y_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_35;
      if((i_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_36), z_35);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          n_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_36;
      if((i_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, i_36);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm f_37 = NULL,i_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_37 = ATgetArgument(t, 0);
      n_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_37;
  if(match_cons(t, sym_Match_1))
    {
      m_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_37;
  if(match_cons(t, sym_Seq_2))
    {
      o_37 = ATgetArgument(t, 0);
      i_37 = ATgetArgument(t, 1);
      t = o_37;
      if(match_cons(t, sym_Match_1))
        {
          f_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_37;
      if((m_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_37), i_37);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          o_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_37;
      if((m_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, m_37);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm f_38 = NULL,h_38 = NULL,i_38 = NULL,k_38 = NULL,s_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_38 = ATgetArgument(t, 0);
      s_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_38;
  if(match_cons(t, sym_Build_1))
    {
      ATerm p_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_38;
  if(match_cons(t, sym_Seq_2))
    {
      a_39 = ATgetArgument(t, 0);
      b_39 = ATgetArgument(t, 1);
      t = a_39;
      if(match_cons(t, sym_PrimT_3))
        {
          f_38 = ATgetArgument(t, 0);
          h_38 = ATgetArgument(t, 1);
          i_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, f_38, h_38, i_38), b_39);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          a_39 = ATgetArgument(t, 0);
          b_39 = ATgetArgument(t, 1);
          c_39 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, a_39, b_39, c_39);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,m_40 = NULL,o_40 = NULL,p_40 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_40 = ATgetArgument(t, 0);
      o_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_40;
  if(match_cons(t, sym_Build_1))
    {
      ATerm q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_40;
  if(match_cons(t, sym_Seq_2))
    {
      p_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
      t = p_40;
      if(match_cons(t, sym_Build_1))
        {
          h_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_40), i_40);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          p_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, p_40);
    }
  return(t);
}
ATerm a_4 (ATerm t)
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
ATerm b_4 (ATerm t)
{
  ATerm u_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if(((ATgetType(t_22) == AT_LIST) && !(ATisEmpty(t_22))))
        {
          u_42 = ATgetFirst((ATermList) t_22);
          w_42 = (ATerm) ATgetNext((ATermList) t_22);
        }
      else
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
          {
            x_42 = ATgetFirst((ATermList) u_22);
            y_42 = (ATerm) ATgetNext((ATermList) u_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_42, x_42), (ATerm) ATmakeAppl(sym__2, w_42, y_42));
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  if(match_cons(t, sym__2))
    {
      z_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_43), z_42);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  if(match_cons(t, sym__2))
    {
      b_43 = ATgetArgument(t, 0);
      c_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_43), (ATerm) ATmakeAppl(sym_Match_1, c_43));
  return(t);
}
ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      if(((ATgetType(v_22) != AT_LIST) || !(ATisEmpty(v_22))))
        _fail(t);
      {
        ATerm x_22 = ATgetArgument(t, 1);
        if(((ATgetType(x_22) != AT_LIST) || !(ATisEmpty(x_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm k_43 = NULL,w_43 = NULL,e_44 = NULL,i_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_22 = ATgetArgument(t, 0);
      if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
        {
          k_43 = ATgetFirst((ATermList) y_22);
          w_43 = (ATerm) ATgetNext((ATermList) y_22);
        }
      else
        _fail(t);
      {
        ATerm z_22 = ATgetArgument(t, 1);
        if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
          {
            e_44 = ATgetFirst((ATermList) z_22);
            i_44 = (ATerm) ATgetNext((ATermList) z_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_43, e_44), (ATerm) ATmakeAppl(sym__2, w_43, i_44));
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  if(match_cons(t, sym__2))
    {
      j_44 = ATgetArgument(t, 0);
      k_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_44), j_44);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL;
  if(match_cons(t, sym__2))
    {
      l_44 = ATgetArgument(t, 0);
      m_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_44), (ATerm) ATmakeAppl(sym_Match_1, m_44));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,k_42 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_41 = ATgetArgument(t, 0);
      b_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_41;
  if(match_cons(t, sym_Build_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_41;
  if(match_cons(t, sym_Op_2))
    {
      w_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_42;
  if(match_cons(t, sym_Seq_2))
    {
      c_42 = ATgetArgument(t, 0);
      s_41 = ATgetArgument(t, 1);
      {
        ATerm t_42 = NULL;
        t = c_42;
        if(match_cons(t, sym_Match_1))
          {
            d_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_42;
        if(match_cons(t, sym_Op_2))
          {
            q_41 = ATgetArgument(t, 0);
            r_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_41;
        if((w_41 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, x_41, r_41);
        t = genzip_4_0(a_4, b_4, c_4, d_4, t);
        t_42 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, w_41, x_41)), s_41));
      }
    }
  else
    {
      ATerm i_43 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          c_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_42;
      if(match_cons(t, sym_Op_2))
        {
          d_42 = ATgetArgument(t, 0);
          k_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_42;
      if((w_41 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, x_41, k_42);
      t = genzip_4_0(e_4, f_4, g_4, h_4, t);
      i_43 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_43), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, w_41, x_41)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm a_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,c_47 = NULL,e_47 = NULL,f_47 = NULL;
  u_46 = t;
  if(match_cons(t, sym_Seq_2))
    {
      v_46 = ATgetArgument(t, 0);
      c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_46;
  if(match_cons(t, sym_Build_1))
    {
      w_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_46;
  if(match_cons(t, sym_Op_2))
    {
      x_46 = ATgetArgument(t, 0);
      {
        ATerm a_23 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_47;
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            e_47 = ATgetArgument(t, 0);
            {
              ATerm d_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(c_23);
        t = e_47;
        if(match_cons(t, sym_Match_1))
          {
            f_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_47;
        if(match_cons(t, sym_Op_2))
          {
            a_46 = ATgetArgument(t, 0);
            {
              ATerm e_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_46, a_46);
        {
          ATerm g_23 = t;
          if((PushChoice() == 0))
            {
              ATerm w_22 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_22 = ATgetArgument(t, 0);
                  if((w_22 != ATgetArgument(t, 1)))
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
              t = g_23;
            }
          t = term_h_23;
        }
      }
    else
      {
        t = b_23;
        if(match_cons(t, sym_Match_1))
          {
            e_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_47;
        if(match_cons(t, sym_Op_2))
          {
            f_47 = ATgetArgument(t, 0);
            {
              ATerm i_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_46, f_47);
        {
          ATerm j_23 = t;
          if((PushChoice() == 0))
            {
              ATerm f_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  f_23 = ATgetArgument(t, 0);
                  if((f_23 != ATgetArgument(t, 1)))
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
          t = term_h_23;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm n_99 (ATerm), ATerm t)
{
  ATerm m_47 (ATerm t)
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_99(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = SRTS_one(m_47, t);
      }
    return(t);
  }
  t = m_47(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm b_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,t_49 = NULL,u_49 = NULL;
  b_49 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_49 = ATgetArgument(t, 0);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_49;
  if(match_cons(t, sym_Let_2))
    {
      q_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
      {
        ATerm z_49 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, g_49, q_49);
        t = conc_0_0(t);
        z_49 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, z_49, t_49);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          q_49 = ATgetArgument(t, 0);
          t_49 = ATgetArgument(t, 1);
          u_49 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_49 = ATgetFirst((ATermList) t);
          o_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_49;
      if(match_cons(t, sym_SDefT_4))
        {
          i_49 = ATgetArgument(t, 0);
          j_49 = ATgetArgument(t, 1);
          k_49 = ATgetArgument(t, 2);
          l_49 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = j_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_49;
      if(match_cons(t, sym_SVar_1))
        {
          r_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_49;
      if((i_49 != t))
        {
          _fail(t);
        }
      t = l_49;
      {
        ATerm m_23 = t;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm n_23 = ATgetArgument(t, 0);
                  if(match_cons(n_23, sym_SVar_1))
                    {
                      if((i_49 != ATgetArgument(n_23, 0)))
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
        t = l_49;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,z_50 = NULL,c_51 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      z_50 = ATgetArgument(t, 0);
      t = z_50;
      if(match_cons(t, sym_Seq_2))
        {
          x_50 = ATgetArgument(t, 0);
          p_50 = ATgetArgument(t, 1);
          t = x_50;
          if(match_cons(t, sym_Where_1))
            {
              o_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_50;
          if(match_cons(t, sym_Seq_2))
            {
              u_50 = ATgetArgument(t, 0);
              w_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_50;
          if(match_cons(t, sym_Build_1))
            {
              v_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, o_50, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_50), w_50)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              x_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, x_50);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          z_50 = ATgetArgument(t, 0);
          t = z_50;
          if(match_cons(t, sym_Test_1))
            {
              x_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, x_50);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              z_50 = ATgetArgument(t, 0);
              t = z_50;
              if(match_cons(t, sym_Not_1))
                {
                  x_50 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, x_50);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  z_50 = ATgetArgument(t, 0);
                  c_51 = ATgetArgument(t, 1);
                  t = c_51;
                  if((z_50 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      z_50 = ATgetArgument(t, 0);
                      c_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_51;
                  if((z_50 != t))
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
  ATerm j_52 = NULL,k_52 = NULL,n_52 = NULL,o_52 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      j_52 = ATgetArgument(t, 0);
      o_52 = ATgetArgument(t, 1);
      t = j_52;
      if(match_cons(t, sym_LChoice_2))
        {
          k_52 = ATgetArgument(t, 0);
          n_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, k_52, (ATerm) ATmakeAppl(sym_LChoice_2, n_52, o_52));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          j_52 = ATgetArgument(t, 0);
          o_52 = ATgetArgument(t, 1);
          t = j_52;
          if(match_cons(t, sym_Seq_2))
            {
              k_52 = ATgetArgument(t, 0);
              n_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, k_52, (ATerm) ATmakeAppl(sym_Seq_2, n_52, o_52));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              j_52 = ATgetArgument(t, 0);
              o_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_52;
          if(match_cons(t, sym_Choice_2))
            {
              k_52 = ATgetArgument(t, 0);
              n_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, k_52, (ATerm) ATmakeAppl(sym_Choice_2, n_52, o_52));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL,m_53 = NULL,o_53 = NULL,p_53 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      o_53 = ATgetArgument(t, 0);
      p_53 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, o_53, p_53);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          o_53 = ATgetArgument(t, 0);
          t = o_53;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_53 = ATgetFirst((ATermList) t);
              f_53 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, e_53, (ATerm) ATmakeAppl(sym_LChoices_1, f_53));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_h_23;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              o_53 = ATgetArgument(t, 0);
              t = o_53;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_53 = ATgetFirst((ATermList) t);
                  f_53 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, e_53, (ATerm) ATmakeAppl(sym_Choices_1, f_53));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_h_23;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  o_53 = ATgetArgument(t, 0);
                  t = o_53;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_53 = ATgetFirst((ATermList) t);
                      f_53 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_53, (ATerm) ATmakeAppl(sym_Seqs_1, f_53));
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
                      o_53 = ATgetArgument(t, 0);
                      p_53 = ATgetArgument(t, 1);
                      m_53 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, p_53, (ATerm) ATmakeAppl(sym_Op_2, term_r_23, (ATerm) ATinsert(ATinsert(ATempty, m_53), o_53)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          o_53 = ATgetArgument(t, 0);
                          p_53 = ATgetArgument(t, 1);
                          m_53 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, m_53)), o_53), (ATerm) ATmakeAppl(sym_Build_1, p_53)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              o_53 = ATgetArgument(t, 0);
                              p_53 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, o_53, (ATerm) ATmakeAppl(sym_Match_1, p_53));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  o_53 = ATgetArgument(t, 0);
                                  p_53 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_53), p_53);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      o_53 = ATgetArgument(t, 0);
                                      p_53 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_53), o_53);
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
ATerm j_4 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm i_57 = NULL,l_57 = NULL,m_57 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      i_57 = ATgetArgument(t, 0);
      t = i_57;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_h_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          i_57 = ATgetArgument(t, 0);
          t = i_57;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_q_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              i_57 = ATgetArgument(t, 0);
              l_57 = ATgetArgument(t, 1);
              t = i_57;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_h_23;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  i_57 = ATgetArgument(t, 0);
                  l_57 = ATgetArgument(t, 1);
                  t = l_57;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_h_23;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      i_57 = ATgetArgument(t, 0);
                      l_57 = ATgetArgument(t, 1);
                      t = l_57;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_h_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          i_57 = ATgetArgument(t, 0);
                          t = i_57;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_h_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              i_57 = ATgetArgument(t, 0);
                              t = i_57;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_h_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  i_57 = ATgetArgument(t, 0);
                                  l_57 = ATgetArgument(t, 1);
                                  t = l_57;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_h_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      i_57 = ATgetArgument(t, 0);
                                      l_57 = ATgetArgument(t, 1);
                                      t = l_57;
                                      t = fetch_1_0(j_4, t);
                                      t = term_h_23;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          i_57 = ATgetArgument(t, 0);
                                          l_57 = ATgetArgument(t, 1);
                                          t = l_57;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = i_57;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = l_57;
                                                }
                                              else
                                                {
                                                  t = i_57;
                                                }
                                            }
                                          else
                                            {
                                              t = i_57;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = l_57;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              i_57 = ATgetArgument(t, 0);
                                              l_57 = ATgetArgument(t, 1);
                                              t = l_57;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = i_57;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = l_57;
                                                    }
                                                  else
                                                    {
                                                      t = i_57;
                                                    }
                                                }
                                              else
                                                {
                                                  t = i_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = l_57;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  i_57 = ATgetArgument(t, 0);
                                                  t = i_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_h_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      i_57 = ATgetArgument(t, 0);
                                                      l_57 = ATgetArgument(t, 1);
                                                      m_57 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = m_57;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_57, l_57);
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
  ATerm o_59 = NULL,q_59 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_59 = ATgetArgument(t, 0);
      t = q_59;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_q_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          q_59 = ATgetArgument(t, 0);
          t = q_59;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_h_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              q_59 = ATgetArgument(t, 0);
              o_59 = ATgetArgument(t, 1);
              t = o_59;
              if(match_cons(t, sym_Id_0))
                {
                  t = q_59;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = o_59;
                    }
                  else
                    {
                      t = q_59;
                    }
                }
              else
                {
                  t = q_59;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = o_59;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  q_59 = ATgetArgument(t, 0);
                  o_59 = ATgetArgument(t, 1);
                  t = q_59;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_q_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      q_59 = ATgetArgument(t, 0);
                      o_59 = ATgetArgument(t, 1);
                      t = o_59;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_q_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          q_59 = ATgetArgument(t, 0);
                          o_59 = ATgetArgument(t, 1);
                          t = o_59;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_q_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              q_59 = ATgetArgument(t, 0);
                              t = q_59;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_q_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  q_59 = ATgetArgument(t, 0);
                                  t = q_59;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_q_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      q_59 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_59;
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
      ;
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
            ;
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
                  ;
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
                        ;
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
                              ;
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
                                    ;
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
                                          ;
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
                                                ;
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
                                                      ;
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
                                                            ;
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
                                                                  ;
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
                                                                        ;
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
                                                                              ;
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
                                                                                    ;
                                                                                    LocalPopChoice(t_24);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = s_24;
                                                                                    {
                                                                                      ATerm a_61 = NULL,b_61 = NULL,c_61 = NULL,h_61 = NULL;
                                                                                      b_61 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          c_61 = ATgetArgument(t, 0);
                                                                                          h_61 = ATgetArgument(t, 1);
                                                                                          t = c_61;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              a_61 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = b_61;
                                                                                          t = l_9(a_61, h_61, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              c_61 = ATgetArgument(t, 0);
                                                                                              h_61 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_61;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = h_61;
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
  ATerm i_70 = NULL,o_70 = NULL,q_70 = NULL,r_70 = NULL;
  o_70 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = o_70;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = o_70;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              q_70 = ATgetArgument(t, 0);
              {
                ATerm e_28 = NULL,g_28 = NULL,j_3 = NULL;
                t = SSLgetAnnotations(o_70);
                e_28 = t;
                t = q_70;
                {
                  ATerm j_30 (ATerm t)
                  {
                    ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
                    g_30 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        h_30 = ATgetArgument(t, 0);
                        {
                          ATerm x_30 = NULL,e_3 = NULL;
                          t = SSLgetAnnotations(g_30);
                          x_30 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, h_30);
                          e_3 = t;
                          t = SSLsetAnnotations(e_3, x_30);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            h_30 = ATgetArgument(t, 0);
                            {
                              ATerm e_31 = NULL,f_3 = NULL;
                              t = SSLgetAnnotations(g_30);
                              e_31 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, h_30);
                              f_3 = t;
                              t = SSLsetAnnotations(f_3, e_31);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                h_30 = ATgetArgument(t, 0);
                                {
                                  ATerm m_31 = NULL,g_3 = NULL;
                                  t = SSLgetAnnotations(g_30);
                                  m_31 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, h_30);
                                  g_3 = t;
                                  t = SSLsetAnnotations(g_3, m_31);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    h_30 = ATgetArgument(t, 0);
                                    {
                                      ATerm u_31 = NULL,h_3 = NULL;
                                      t = SSLgetAnnotations(g_30);
                                      u_31 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, h_30);
                                      h_3 = t;
                                      t = SSLsetAnnotations(h_3, u_31);
                                    }
                                  }
                                else
                                  {
                                    ATerm b_33 = NULL,f_33 = NULL,i_3 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        h_30 = ATgetArgument(t, 0);
                                        i_30 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(g_30);
                                    b_33 = t;
                                    t = i_30;
                                    t = map_1_0(j_30, t);
                                    f_33 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, h_30, f_33);
                                    i_3 = t;
                                    t = SSLsetAnnotations(i_3, b_33);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = j_30(t);
                  g_28 = t;
                  t = (ATerm) ATmakeAppl(sym_Build_1, g_28);
                  j_3 = t;
                  t = SSLsetAnnotations(j_3, e_28);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  q_70 = ATgetArgument(t, 0);
                  r_70 = ATgetArgument(t, 1);
                  {
                    ATerm t_33 = NULL,y_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,m_3 = NULL,l_3 = NULL,k_3 = NULL;
                    t = SSLgetAnnotations(o_70);
                    t_33 = t;
                    t = q_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        d_34 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(q_70);
                    c_34 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_34);
                    k_3 = t;
                    t = SSLsetAnnotations(k_3, c_34);
                    e_34 = t;
                    t = r_70;
                    if(match_cons(t, sym_Var_1))
                      {
                        a_34 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(r_70);
                    y_33 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_34);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, y_33);
                    b_34 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, e_34, b_34);
                    m_3 = t;
                    t = SSLsetAnnotations(m_3, t_33);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      q_70 = ATgetArgument(t, 0);
                      {
                        ATerm l_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,o_3 = NULL,n_3 = NULL;
                        t = SSLgetAnnotations(o_70);
                        l_34 = t;
                        t = q_70;
                        if(match_cons(t, sym_Var_1))
                          {
                            o_34 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(q_70);
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
                          q_70 = ATgetArgument(t, 0);
                          r_70 = ATgetArgument(t, 1);
                          {
                            ATerm z_34 = NULL,p_3 = NULL;
                            t = SSLgetAnnotations(o_70);
                            z_34 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, q_70, r_70);
                            p_3 = t;
                            t = SSLsetAnnotations(p_3, z_34);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              q_70 = ATgetArgument(t, 0);
                              r_70 = ATgetArgument(t, 1);
                              i_70 = ATgetArgument(t, 2);
                              {
                                ATerm r_35 = NULL,q_3 = NULL;
                                t = SSLgetAnnotations(o_70);
                                r_35 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, q_70, r_70, i_70);
                                q_3 = t;
                                t = SSLsetAnnotations(q_3, r_35);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  q_70 = ATgetArgument(t, 0);
                                  r_70 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_36 = NULL,p_36 = NULL,t_36 = NULL,r_3 = NULL;
                                    t = SSLgetAnnotations(o_70);
                                    l_36 = t;
                                    t = q_70;
                                    t = simple_strategy_0_0(t);
                                    p_36 = t;
                                    t = r_70;
                                    t = simple_strategy_0_0(t);
                                    t_36 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, p_36, t_36);
                                    r_3 = t;
                                    t = SSLsetAnnotations(r_3, l_36);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      q_70 = ATgetArgument(t, 0);
                                      {
                                        ATerm a_37 = NULL,c_37 = NULL,s_3 = NULL;
                                        t = SSLgetAnnotations(o_70);
                                        a_37 = t;
                                        t = q_70;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        c_37 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, c_37);
                                        s_3 = t;
                                        t = SSLsetAnnotations(s_3, a_37);
                                      }
                                    }
                                  else
                                    {
                                      ATerm q_37 = NULL,w_37 = NULL,t_3 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          q_70 = ATgetArgument(t, 0);
                                          r_70 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(o_70);
                                      q_37 = t;
                                      t = r_70;
                                      t = simple_strategy_0_0(t);
                                      w_37 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, q_70, w_37);
                                      t_3 = t;
                                      t = SSLsetAnnotations(t_3, q_37);
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
ATerm l_8 (ATerm q_106 (ATerm), ATerm m_38, ATerm l_38, ATerm t)
{
  ATerm v_71 (ATerm t)
  {
    ATerm a_72 (ATerm j_71, ATerm t)
    {
      ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL,q_71 = NULL,q_4 = NULL;
      t = j_71;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_71 = ATgetFirst((ATermList) t);
          m_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_4 (ATerm t)
        {
          t = l_38;
          return(t);
        }
        t = q_10(q_106, k_4, l_71, m_71, t);
        t = j_71;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_71 = ATgetFirst((ATermList) t);
            p_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_71);
        n_71 = t;
        t = p_71;
        t = v_71(t);
        q_71 = t;
        t = (ATerm) ATinsert(CheckATermList(q_71), o_71);
        q_4 = t;
        t = SSLsetAnnotations(q_4, n_71);
      }
      return(t);
    }
    ATerm r_71 = NULL,t_71 = NULL;
    r_71 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_71;
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
                t_71 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(v_24);
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_72(r_71, t);
                  ;
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = x_24;
                  t = t_71;
                  t = v_71(t);
                }
            }
          }
        else
          {
            t = u_24;
            t = a_72(r_71, t);
          }
      }
    return(t);
  }
  t = m_38;
  t = v_71(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(m_127, n_127, o_127, t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL,e_38 = NULL,w_38 = NULL,x_38 = NULL,u_4 = NULL;
        o_72 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            p_72 = ATgetArgument(t, 0);
            q_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_72);
        e_38 = t;
        t = p_72;
        t = o_127(t);
        w_38 = t;
        t = q_72;
        t = m_127(t);
        x_38 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, w_38, x_38);
        u_4 = t;
        t = SSLsetAnnotations(u_4, e_38);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL;
  q_77 = t;
  if(match_cons(t, sym_Scope_2))
    {
      r_77 = ATgetArgument(t, 0);
      n_77 = ATgetArgument(t, 1);
      {
        ATerm j_39 = NULL,m_39 = NULL,n_39 = NULL,w_4 = NULL;
        t = SSLgetAnnotations(q_77);
        j_39 = t;
        t = r_77;
        t = m_97(t);
        m_39 = t;
        t = n_77;
        t = k_97(t);
        n_39 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_39, n_39);
        w_4 = t;
        t = SSLsetAnnotations(w_4, j_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          r_77 = ATgetArgument(t, 0);
          n_77 = ATgetArgument(t, 1);
          o_77 = ATgetArgument(t, 2);
          p_77 = ATgetArgument(t, 3);
          {
            ATerm d_40 = NULL,k_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,y_4 = NULL;
            t = SSLgetAnnotations(q_77);
            d_40 = t;
            t = r_77;
            t = m_97(t);
            k_40 = t;
            t = n_77;
            t = m_97(t);
            q_40 = t;
            t = o_77;
            t = m_97(t);
            r_40 = t;
            t = p_77;
            t = k_97(t);
            s_40 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_40, q_40, r_40, s_40);
            y_4 = t;
            t = SSLsetAnnotations(y_4, d_40);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              r_77 = ATgetArgument(t, 0);
              n_77 = ATgetArgument(t, 1);
              o_77 = ATgetArgument(t, 2);
              p_77 = ATgetArgument(t, 3);
              {
                ATerm h_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,a_5 = NULL;
                t = SSLgetAnnotations(q_77);
                h_41 = t;
                t = r_77;
                t = m_97(t);
                m_41 = t;
                t = n_77;
                t = m_97(t);
                n_41 = t;
                t = o_77;
                t = m_97(t);
                o_41 = t;
                t = p_77;
                t = k_97(t);
                p_41 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, m_41, n_41, o_41, p_41);
                a_5 = t;
                t = SSLsetAnnotations(a_5, h_41);
              }
            }
          else
            {
              ATerm p_42 = NULL,r_42 = NULL,d_5 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  r_77 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_77);
              p_42 = t;
              t = r_77;
              t = k_97(t);
              r_42 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, r_42);
              d_5 = t;
              t = SSLsetAnnotations(d_5, p_42);
            }
        }
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm d_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_78);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
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
            ;
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  h_78 = ATgetArgument(t, 0);
                  i_78 = ATgetArgument(t, 1);
                  j_78 = ATgetArgument(t, 2);
                  k_78 = ATgetArgument(t, 3);
                  t = j_78;
                  t = map_1_0(p_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      h_78 = ATgetArgument(t, 0);
                      i_78 = ATgetArgument(t, 1);
                      j_78 = ATgetArgument(t, 2);
                      k_78 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_78;
                  t = map_1_0(t_4, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm r_78 = NULL;
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_78 = ATgetArgument(t, 0);
          {
            ATerm h_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_25);
      t = r_78;
    }
  else
    {
      t = f_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_78;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm a_79 = NULL;
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_79 = ATgetArgument(t, 0);
          {
            ATerm k_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_25);
      t = a_79;
    }
  else
    {
      t = i_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_79;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm b_78 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      b_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_78;
  t = free_vars_3_0(l_4, n_4, tboundin_3_0, t);
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm g_79 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_79);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_79 = ATgetArgument(t, 0);
            t = i_79;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_79 = ATgetArgument(t, 0);
                j_79 = ATgetArgument(t, 1);
                k_79 = ATgetArgument(t, 2);
                l_79 = ATgetArgument(t, 3);
                t = k_79;
                t = map_1_0(f_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_79 = ATgetArgument(t, 0);
                    j_79 = ATgetArgument(t, 1);
                    k_79 = ATgetArgument(t, 2);
                    l_79 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = k_79;
                t = map_1_0(h_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm t_79 = NULL;
  ATerm n_25 = t;
  int o_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_79 = ATgetArgument(t, 0);
          {
            ATerm p_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_25);
      t = t_79;
    }
  else
    {
      t = n_25;
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
ATerm h_5 (ATerm t)
{
  ATerm i_80 = NULL;
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_80 = ATgetArgument(t, 0);
          {
            ATerm s_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_25);
      t = i_80;
    }
  else
    {
      t = q_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_80;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(v_4, e_5, tboundin_3_0, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm f_81 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_81);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm h_81 = NULL,i_81 = NULL,j_81 = NULL,m_81 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_81 = ATgetArgument(t, 0);
            t = h_81;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_81 = ATgetArgument(t, 0);
                i_81 = ATgetArgument(t, 1);
                j_81 = ATgetArgument(t, 2);
                m_81 = ATgetArgument(t, 3);
                t = j_81;
                t = map_1_0(m_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_81 = ATgetArgument(t, 0);
                    i_81 = ATgetArgument(t, 1);
                    j_81 = ATgetArgument(t, 2);
                    m_81 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_81;
                t = map_1_0(n_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm y_81 = NULL;
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_81 = ATgetArgument(t, 0);
          {
            ATerm x_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_25);
      t = y_81;
    }
  else
    {
      t = v_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_81;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm h_82 = NULL;
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_82 = ATgetArgument(t, 0);
          {
            ATerm a_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_25);
      t = h_82;
    }
  else
    {
      t = y_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_82;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm s_80 = NULL,w_80 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      w_80 = ATgetArgument(t, 0);
      t = w_80;
      if(match_cons(t, sym_Rule_3))
        {
          s_80 = ATgetArgument(t, 0);
          {
            ATerm b_26 = ATgetArgument(t, 1);
          }
          {
            ATerm c_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = s_80;
      t = free_vars_3_0(k_5, l_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          w_80 = ATgetArgument(t, 0);
          {
            ATerm d_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_80;
    }
  return(t);
}
ATerm r_8 (ATerm s_106 (ATerm), ATerm o_38, ATerm n_38, ATerm t)
{
  ATerm b_83 (ATerm t)
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
                ATerm o_5 (ATerm t)
                {
                  t = n_38;
                  return(t);
                }
                t = q_10(s_106, o_5, x_82, y_82, t);
                t = b_83(t);
              }
              ;
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
              {
                ATerm n_43 = NULL,q_43 = NULL,x_5 = NULL;
                t = SSLgetAnnotations(w_82);
                n_43 = t;
                t = y_82;
                t = b_83(t);
                q_43 = t;
                t = (ATerm) ATinsert(CheckATermList(q_43), x_82);
                x_5 = t;
                t = SSLsetAnnotations(x_5, n_43);
              }
            }
        }
      }
    return(t);
  }
  t = o_38;
  t = b_83(t);
  return(t);
}
ATerm p_5 (ATerm t)
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
ATerm q_5 (ATerm t)
{
  ATerm j_83 = NULL,l_83 = NULL,m_83 = NULL,o_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_26 = ATgetArgument(t, 0);
      if(((ATgetType(i_26) == AT_LIST) && !(ATisEmpty(i_26))))
        {
          j_83 = ATgetFirst((ATermList) i_26);
          l_83 = (ATerm) ATgetNext((ATermList) i_26);
        }
      else
        _fail(t);
      {
        ATerm j_26 = ATgetArgument(t, 1);
        if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
          {
            m_83 = ATgetFirst((ATermList) j_26);
            o_83 = (ATerm) ATgetNext((ATermList) j_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_83, m_83), (ATerm) ATmakeAppl(sym__2, l_83, o_83));
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm p_83 = NULL,r_83 = NULL;
  if(match_cons(t, sym__2))
    {
      p_83 = ATgetArgument(t, 0);
      r_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_83), p_83);
  return(t);
}
ATerm t_8 (ATerm d_654, ATerm i_654, ATerm n_65, ATerm t)
{
  ATerm e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL;
  t = SSL_explode_term(i_654);
  if(match_cons(t, sym__2))
    {
      e_83 = ATgetArgument(t, 0);
      g_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_654);
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
  t = (ATerm) ATmakeAppl(sym__2, h_83, n_65);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm b_116 (ATerm), ATerm c_116 (ATerm), ATerm t)
{
  ATerm u_83 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_116(t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = c_116(t);
        t = u_83(t);
      }
    return(t);
  }
  t = u_83(t);
  return(t);
}
ATerm for_3_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t)
{
  t = e_116(t);
  t = while_not_2_0(f_116, g_116, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm e_84 = NULL;
  e_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_84);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm f_84 = NULL,h_84 = NULL,i_84 = NULL,k_84 = NULL,a_6 = NULL;
  k_84 = t;
  if(match_cons(t, sym__2))
    {
      h_84 = ATgetArgument(t, 0);
      i_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_84);
  f_84 = t;
  t = i_84;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_84, i_84);
  a_6 = t;
  t = SSLsetAnnotations(a_6, f_84);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,l_85 = NULL;
  g_85 = t;
  if(match_cons(t, sym__2))
    {
      h_85 = ATgetArgument(t, 0);
      i_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_85;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_85 = ATgetFirst((ATermList) t);
      l_85 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_85(h_85, i_85, g_85, t);
            ;
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_85), j_85), l_85);
          }
      }
    }
  else
    {
      t = z_85(h_85, i_85, g_85, t);
    }
  return(t);
}
ATerm z_85 (ATerm l_84, ATerm n_84, ATerm o_84, ATerm t)
{
  ATerm r_84 = NULL,u_84 = NULL,c_6 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL;
  t = SSLgetAnnotations(o_84);
  r_84 = t;
  t = n_84;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_84 = ATgetFirst((ATermList) t);
      a_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_84;
  if(match_cons(t, sym__2))
    {
      y_84 = ATgetArgument(t, 0);
      z_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_84;
        if((y_84 != t))
          {
            _fail(t);
          }
        t = a_85;
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = n_84;
        t = t_8(y_84, z_84, a_85, t);
      }
    u_84 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_84, u_84);
    c_6 = t;
    t = SSLsetAnnotations(c_6, r_84);
  }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm x_85 = NULL;
  if(match_cons(t, sym__2))
    {
      x_85 = ATgetArgument(t, 0);
      if((x_85 != ATgetArgument(t, 1)))
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
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm q_85 = NULL,r_85 = NULL,t_85 = NULL;
        q_85 = t;
        if(match_cons(t, sym__2))
          {
            r_85 = ATgetArgument(t, 0);
            t_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_85;
        t = r_8(v_5, r_85, t_85, t);
      }
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  if(match_cons(t, sym__2))
    {
      o_44 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(d_6, o_44, p_44, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm q_44 = NULL;
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      if((q_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm x_44 = NULL,y_44 = NULL;
  if(match_cons(t, sym__2))
    {
      x_44 = ATgetArgument(t, 0);
      y_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(i_6, x_44, y_44, t);
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm z_44 = NULL;
  if(match_cons(t, sym__2))
    {
      z_44 = ATgetArgument(t, 0);
      if((z_44 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_86 (ATerm t)
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_113(t);
        ;
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
              ATerm c_86 = NULL,d_86 = NULL,y_43 = NULL,z_43 = NULL;
              c_86 = t;
              t = r_113(t);
              d_86 = t;
              t = c_86;
              {
                ATerm w_5 (ATerm t)
                {
                  ATerm g_86 = NULL;
                  t = q_86(t);
                  g_86 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_86, d_86);
                  t = diff_0_0(t);
                  return(t);
                }
                t = s_113(w_5, q_86, y_5, t);
                z_43 = t;
                t = SSL_explode_term(z_43);
                if(match_cons(t, sym__2))
                  {
                    ATerm w_26 = ATgetArgument(t, 0);
                    y_43 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_43;
                t = foldr_3_0(z_5, b_6, _id, t);
              }
              ;
              LocalPopChoice(v_26);
            }
          else
            {
              t = u_26;
              {
                ATerm s_44 = NULL,t_44 = NULL;
                t_44 = t;
                t = SSL_explode_term(t_44);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_26 = ATgetArgument(t, 0);
                    s_44 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = s_44;
                t = foldr_3_0(e_6, h_6, q_86, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_86(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm w_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_45);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm y_26 = t;
  int z_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(z_26);
    }
  else
    {
      t = y_26;
      {
        ATerm x_45 = NULL,b_46 = NULL,d_46 = NULL,e_46 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_46 = ATgetArgument(t, 0);
            t = d_46;
            t = free_vars_3_0(n_6, q_6, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                d_46 = ATgetArgument(t, 0);
                e_46 = ATgetArgument(t, 1);
                x_45 = ATgetArgument(t, 2);
                b_46 = ATgetArgument(t, 3);
                t = x_45;
                t = map_1_0(t_6, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    d_46 = ATgetArgument(t, 0);
                    e_46 = ATgetArgument(t, 1);
                    x_45 = ATgetArgument(t, 2);
                    b_46 = ATgetArgument(t, 3);
                    t = x_45;
                    t = map_1_0(z_6, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Matrix_2))
                      {
                        d_46 = ATgetArgument(t, 0);
                        e_46 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = d_46;
                  }
              }
          }
      }
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm h_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_46);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
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
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm k_46 = NULL,l_46 = NULL,p_46 = NULL,q_46 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  k_46 = ATgetArgument(t, 0);
                  l_46 = ATgetArgument(t, 1);
                  p_46 = ATgetArgument(t, 2);
                  q_46 = ATgetArgument(t, 3);
                  t = p_46;
                  t = map_1_0(r_6, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_46 = ATgetArgument(t, 0);
                      l_46 = ATgetArgument(t, 1);
                      p_46 = ATgetArgument(t, 2);
                      q_46 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_46;
                  t = map_1_0(s_6, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm t)
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
ATerm s_6 (ATerm t)
{
  ATerm u_47 = NULL;
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_47 = ATgetArgument(t, 0);
          {
            ATerm j_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_27);
      t = u_47;
    }
  else
    {
      t = h_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_47;
    }
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm d_48 = NULL;
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_48 = ATgetArgument(t, 0);
          {
            ATerm r_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_27);
      t = d_48;
    }
  else
    {
      t = p_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_48;
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm m_48 = NULL;
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_48 = ATgetArgument(t, 0);
          {
            ATerm y_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_27);
      t = m_48;
    }
  else
    {
      t = w_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_48;
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm r_48 = NULL;
  if(match_cons(t, sym__2))
    {
      r_48 = ATgetArgument(t, 0);
      if((r_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_27;
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm s_48 = NULL,w_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_48 = ATgetFirst((ATermList) t);
      w_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_48, w_48);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm x_48 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_28 = ATgetArgument(t, 0);
      if(match_cons(a_28, sym__2))
        {
          x_48 = ATgetArgument(a_28, 0);
          c_49 = ATgetArgument(a_28, 1);
        }
      else
        _fail(t);
      {
        ATerm b_28 = ATgetArgument(t, 1);
        if(match_cons(b_28, sym__2))
          {
            d_49 = ATgetArgument(b_28, 0);
            e_49 = ATgetArgument(b_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_49), x_48), (ATerm) ATinsert(CheckATermList(e_49), c_49));
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm f_49 = NULL;
  f_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, f_49, term_f_28), (ATerm) ATmakeAppl(sym_Var_1, f_49));
  return(t);
}
ATerm RowLet_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL;
  b_90 = t;
  if(match_cons(t, sym_Row_2))
    {
      c_90 = ATgetArgument(t, 0);
      d_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_45 = NULL,m_45 = NULL,q_45 = NULL,r_45 = NULL,u_45 = NULL;
        t = d_90;
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
          t = new_0_0(t);
          j_45 = t;
          t = d_90;
          t = free_vars_3_0(k_6, l_6, tvars_matrix_boundin_3_0, t);
          u_45 = t;
          t = p_0(t);
          r_45 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_45, r_45);
          t = l_8(a_7, u_45, r_45, t);
          t = genzip_4_0(b_7, d_7, g_7, i_7, t);
          if(match_cons(t, sym__2))
            {
              m_45 = ATgetArgument(t, 0);
              q_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, j_45, (ATerm)ATempty, m_45, d_90)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, c_90, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_45), (ATerm)ATempty, q_45)));
        }
        ;
        LocalPopChoice(i_28);
      }
    else
      {
        t = h_28;
        t = d_90;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, c_90, d_90));
      }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_27;
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_90 = ATgetFirst((ATermList) t);
      p_90 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_90, p_90);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      if(match_cons(k_28, sym__2))
        {
          q_90 = ATgetArgument(k_28, 0);
          r_90 = ATgetArgument(k_28, 1);
        }
      else
        _fail(t);
      {
        ATerm l_28 = ATgetArgument(t, 1);
        if(match_cons(l_28, sym__2))
          {
            s_90 = ATgetArgument(l_28, 0);
            t_90 = ATgetArgument(l_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_90), q_90), (ATerm) ATinsert(CheckATermList(t_90), r_90));
  return(t);
}
ATerm v_8 (ATerm i_76, ATerm h_76, ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,g_6 = NULL;
  t = h_76;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm w_7 (ATerm t)
      {
        t = i_76;
        return(t);
      }
      t = RowLet_1_0(w_7, t);
      return(t);
    }
    t = genzip_4_0(j_7, m_7, q_7, t_7, t);
    n_90 = t;
    if(match_cons(t, sym__2))
      {
        k_90 = ATgetArgument(t, 0);
        l_90 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_90);
    j_90 = t;
    t = k_90;
    t = concat_0_0(t);
    m_90 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_90, l_90);
    g_6 = t;
    t = SSLsetAnnotations(g_6, j_90);
    if(match_cons(t, sym__2))
      {
        h_90 = ATgetArgument(t, 0);
        i_90 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Let_2, h_90, (ATerm) ATmakeAppl(sym_Scope_2, i_76, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_m_28))), (ATerm) ATmakeAppl(sym_Matrix_1, i_90))));
  }
  return(t);
}
ATerm w_8 (ATerm x_110 (ATerm), ATerm t_43, ATerm r_43, ATerm t)
{
  ATerm u_90 = NULL,v_90 = NULL,w_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL;
  x_90 = t;
  t = x_110(t);
  u_90 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_90, t_43, r_43);
  t = n_11(u_90, t_43, r_43, t);
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_91 = NULL;
        t = term_p_28;
        a_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_90, term_p_28);
        t = m_11(u_90, a_91, t);
        ;
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_90 = ATgetFirst((ATermList) t);
        w_90 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_28;
    y_90 = t;
    t = (ATerm) ATinsert(CheckATermList(w_90), (ATerm) ATinsert(CheckATermList(v_90), t_43));
    z_90 = t;
    t = SSL_table_put(u_90, y_90, z_90);
    t = x_90;
  }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm c_91 = NULL,f_91 = NULL,g_91 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm q_28 = ATgetArgument(t, 0);
      if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
        {
          ATerm r_28 = ATgetFirst((ATermList) q_28);
          if(match_cons(r_28, sym_As_2))
            {
              ATerm s_28 = ATgetArgument(r_28, 0);
              ATerm t_28 = ATgetArgument(r_28, 1);
              if(!(match_cons(t_28, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          c_91 = (ATerm) ATgetNext((ATermList) q_28);
        }
      else
        _fail(t);
      f_91 = ATgetArgument(t, 1);
      g_91 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, c_91, f_91, g_91);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm b_91 = NULL;
  t = filter_1_0(x_7, t);
  b_91 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, b_91);
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm q_92 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, q_92), term_u_28);
  return(t);
}
ATerm j_8 (ATerm t)
{
  t = term_m_28;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      j_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(i_51, j_51, t);
  return(t);
}
ATerm m_8 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm MatchCons_2_0 (ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL;
  n_92 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = n_92;
      t = n_0(t);
      t = map_1_0(i_8, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          o_92 = ATgetArgument(t, 0);
          t = n_92;
          t = m_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((o_92 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
            }
          else
            _fail(t);
          t = n_0(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              o_92 = ATgetArgument(t, 0);
              t = n_92;
              t = m_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((o_92 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                }
              else
                _fail(t);
              t = n_0(t);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  o_92 = ATgetArgument(t, 0);
                  t = n_92;
                  t = m_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((o_92 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                    }
                  else
                    _fail(t);
                  t = n_0(t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  ATerm g_51 = NULL,h_51 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      o_92 = ATgetArgument(t, 0);
                      p_92 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_92;
                  t = m_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((o_92 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      g_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = p_92;
                  t = foldr_3_0(j_8, k_8, m_8, t);
                  h_51 = t;
                  t = g_51;
                  if((h_51 != t))
                    {
                      _fail(t);
                    }
                  t = p_92;
                }
            }
        }
    }
  return(t);
}
ATerm y_8 (ATerm x_126 (ATerm), ATerm v_74, ATerm s_74, ATerm t_74, ATerm u_74, ATerm t)
{
  ATerm v_92 = NULL,w_92 = NULL;
  t = v_74;
  t = x_126(t);
  v_92 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_92, t_74);
  t = conc_0_0(t);
  w_92 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, s_74, w_92, u_74);
  return(t);
}
ATerm z_8 (ATerm o_74, ATerm p_74, ATerm q_74, ATerm t)
{
  ATerm y_92 = NULL;
  t = o_74;
  {
    ATerm p_8 (ATerm t)
    {
      ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL;
      ATerm q_8 (ATerm t)
      {
        ATerm s_8 (ATerm t)
        {
          t = p_74;
          return(t);
        }
        ATerm u_8 (ATerm t)
        {
          t = q_74;
          return(t);
        }
        t = MatchCons_2_0(s_8, u_8, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm v_28 = ATgetArgument(t, 0);
          if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
            {
              ATerm y_28 = ATgetFirst((ATermList) v_28);
              if(match_cons(y_28, sym_As_2))
                {
                  ATerm z_28 = ATgetArgument(y_28, 0);
                  z_92 = ATgetArgument(y_28, 1);
                }
              else
                _fail(t);
              a_93 = (ATerm) ATgetNext((ATermList) v_28);
            }
          else
            _fail(t);
          b_93 = ATgetArgument(t, 1);
          c_93 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = y_8(q_8, z_92, a_93, b_93, c_93, t);
      return(t);
    }
    t = filter_1_0(p_8, t);
    y_92 = t;
    t = (ATerm) ATmakeAppl(sym_Alt_3, p_74, q_74, (ATerm) ATmakeAppl(sym_Matrix_1, y_92));
  }
  return(t);
}
ATerm filter_1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL;
  x_93 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_93;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_93 = ATgetFirst((ATermList) t);
          z_93 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_29 = t;
        int b_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_51 = NULL,v_51 = NULL,w_51 = NULL,j_6 = NULL;
            t = SSLgetAnnotations(x_93);
            r_51 = t;
            t = y_93;
            t = b_111(t);
            v_51 = t;
            t = z_93;
            t = filter_1_0(b_111, t);
            w_51 = t;
            t = (ATerm) ATinsert(CheckATermList(w_51), v_51);
            j_6 = t;
            t = SSLsetAnnotations(j_6, r_51);
            ;
            LocalPopChoice(b_29);
          }
        else
          {
            t = a_29;
            t = z_93;
            t = filter_1_0(b_111, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm t_105 (ATerm), ATerm t)
{
  ATerm w_94 (ATerm t)
  {
    ATerm t_94 = NULL,u_94 = NULL,v_94 = NULL;
    t = t_105(t);
    t_94 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_94;
      }
    else
      {
        ATerm i_52 = NULL,a_53 = NULL,m_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_94 = ATgetFirst((ATermList) t);
            v_94 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_94);
        i_52 = t;
        t = v_94;
        t = w_94(t);
        a_53 = t;
        t = (ATerm) ATinsert(CheckATermList(a_53), u_94);
        m_6 = t;
        t = SSLsetAnnotations(m_6, i_52);
      }
    return(t);
  }
  t = w_94(t);
  return(t);
}
ATerm x_8 (ATerm t)
{
  t = term_m_28;
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm e_96 = NULL,f_96 = NULL;
  if(match_cons(t, sym__2))
    {
      e_96 = ATgetArgument(t, 0);
      f_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(e_96, f_96, t);
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm g_96 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm c_29 = ATgetArgument(t, 0);
      if(match_cons(c_29, sym_Off_1))
        {
          g_96 = ATgetArgument(c_29, 0);
        }
      else
        _fail(t);
      {
        ATerm d_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, g_96);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL;
  c_95 = t;
  if(match_cons(t, sym_Row_3))
    {
      d_95 = ATgetArgument(t, 0);
      {
        ATerm e_29 = ATgetArgument(t, 1);
      }
      {
        ATerm f_29 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = d_95;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_95 = ATgetFirst((ATermList) t);
      {
        ATerm i_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_95;
  if(match_cons(t, sym_As_2))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      g_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_95;
  if(match_cons(t, sym_Str_1))
    {
      h_95 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, h_95), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          h_95 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, h_95), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              h_95 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, h_95), (ATerm) ATempty);
            }
          else
            {
              ATerm b_96 = NULL,c_96 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  h_95 = ATgetArgument(t, 0);
                  i_95 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_95;
              t = foldr_3_0(x_8, b_9, c_9, t);
              b_96 = t;
              t = i_95;
              t = map_1_0(e_9, t);
              c_96 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, h_95, b_96), c_96);
            }
        }
    }
  return(t);
}
ATerm g_9 (ATerm t)
{
  ATerm j_96 = NULL,k_96 = NULL,n_96 = NULL;
  n_96 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_96 = ATgetFirst((ATermList) t);
      k_96 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_96 = NULL;
            t = k_96;
            {
              ATerm i_9 (ATerm t)
              {
                ATerm m_29 = t;
                if((PushChoice() == 0))
                  {
                    if((j_96 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_29;
                  }
                return(t);
              }
              t = filter_1_0(i_9, t);
              q_96 = t;
              t = (ATerm) ATinsert(CheckATermList(q_96), j_96);
            }
            ;
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
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
ATerm b_99 (ATerm g_97, ATerm t)
{
  ATerm h_97 = NULL;
  t = SSL_explode_string(g_97);
  {
    ATerm n_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_99 (ATerm t)
        {
          ATerm m_98 = NULL,n_98 = NULL,o_98 = NULL;
          m_98 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_98 = ATgetFirst((ATermList) t);
              o_98 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm q_29 = t;
            int r_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_53 = NULL,t_53 = NULL,o_6 = NULL;
                t = SSLgetAnnotations(m_98);
                k_53 = t;
                t = o_98;
                t = c_99(t);
                t_53 = t;
                t = (ATerm) ATinsert(CheckATermList(t_53), n_98);
                o_6 = t;
                t = SSLsetAnnotations(o_6, k_53);
                ;
                LocalPopChoice(r_29);
              }
            else
              {
                t = q_29;
                {
                  ATerm e_54 = NULL,p_6 = NULL;
                  t = SSLgetAnnotations(m_98);
                  e_54 = t;
                  t = n_98;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, n_98);
                  p_6 = t;
                  t = SSLsetAnnotations(p_6, e_54);
                }
              }
          }
          return(t);
        }
        t = c_99(t);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = n_29;
        t = (ATerm) ATempty;
      }
    h_97 = t;
    t = SSL_implode_string(h_97);
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,z_98 = NULL;
  z_98 = t;
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_98 = ATgetFirst((ATermList) t);
            {
              ATerm u_29 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_29);
        t = p_98;
        {
          ATerm v_29 = t;
          int w_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  q_98 = ATgetArgument(t, 0);
                  {
                    ATerm x_29 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm y_29 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(w_29);
              t = q_98;
              {
                ATerm z_29 = t;
                int a_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        r_98 = ATgetFirst((ATermList) t);
                        {
                          ATerm b_30 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_30);
                    t = r_98;
                    {
                      ATerm c_30 = t;
                      int f_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              s_98 = ATgetArgument(t, 0);
                              {
                                ATerm k_30 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(f_30);
                          t = s_98;
                          if(match_cons(t, sym_Off_1))
                            {
                              t_98 = ATgetArgument(t, 0);
                              t = t_98;
                            }
                          else
                            {
                              t = b_99(z_98, t);
                            }
                        }
                      else
                        {
                          t = c_30;
                          t = b_99(z_98, t);
                        }
                    }
                  }
                else
                  {
                    t = z_29;
                    t = b_99(z_98, t);
                  }
              }
            }
          else
            {
              t = v_29;
              t = b_99(z_98, t);
            }
        }
      }
    else
      {
        t = s_29;
        t = b_99(z_98, t);
      }
  }
  return(t);
}
ATerm k_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      ATerm n_30 = ATgetArgument(t, 1);
      if(((ATgetType(n_30) != AT_LIST) || !(ATisEmpty(n_30))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm s_99 = NULL,v_99 = NULL,w_99 = NULL;
  if(match_cons(t, sym__2))
    {
      s_99 = ATgetArgument(t, 0);
      {
        ATerm o_30 = ATgetArgument(t, 1);
        if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
          {
            v_99 = ATgetFirst((ATermList) o_30);
            w_99 = (ATerm) ATgetNext((ATermList) o_30);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_99, v_99), (ATerm) ATmakeAppl(sym__2, s_99, w_99));
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm c_100 = NULL,d_100 = NULL;
  if(match_cons(t, sym__2))
    {
      c_100 = ATgetArgument(t, 0);
      d_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_100), c_100);
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm g_100 = NULL,h_100 = NULL,i_100 = NULL;
  if(match_cons(t, sym__2))
    {
      g_100 = ATgetArgument(t, 0);
      {
        ATerm p_30 = ATgetArgument(t, 1);
        if(match_cons(p_30, sym__2))
          {
            h_100 = ATgetArgument(p_30, 0);
            i_100 = ATgetArgument(p_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_8(g_100, h_100, i_100, t);
  return(t);
}
ATerm r_9 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm d_9 (ATerm b_76, ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,p_99 = NULL,q_99 = NULL,r_99 = NULL;
  t = b_76;
  t = get_path_0_0(t);
  f_99 = t;
  t = b_76;
  t = outedges_0_0(t);
  g_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_76, g_99);
  t = genzip_4_0(k_9, m_9, n_9, q_9, t);
  h_99 = t;
  t = b_76;
  t = default_state_0_0(t);
  i_99 = t;
  t = new_0_0(t);
  p_99 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, b_76);
  q_99 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_30, p_99);
  r_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, b_76), (ATerm) ATmakeAppl(sym_Defined_2, term_r_30, p_99));
  t = w_8(r_9, q_99, r_99, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, p_99, (ATerm)ATmakeAppl(sym_Var_1, f_99), h_99, i_99);
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL,z_100 = NULL,a_101 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL,f_101 = NULL,y_6 = NULL,w_6 = NULL,u_6 = NULL;
  f_101 = t;
  if(match_cons(t, sym_Row_3))
    {
      n_100 = ATgetArgument(t, 0);
      o_100 = ATgetArgument(t, 1);
      p_100 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_101);
  m_100 = t;
  t = n_100;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_100 = ATgetFirst((ATermList) t);
      v_100 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_100);
  t_100 = t;
  t = u_100;
  if(match_cons(t, sym_As_2))
    {
      b_101 = ATgetArgument(t, 0);
      c_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_100);
  a_101 = t;
  t = c_101;
  {
    ATerm s_30 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_30;
      }
    d_101 = t;
    t = (ATerm) ATmakeAppl(sym_As_2, b_101, d_101);
    u_6 = t;
    t = SSLsetAnnotations(u_6, a_101);
    e_101 = t;
    t = (ATerm) ATinsert(CheckATermList(v_100), e_101);
    w_6 = t;
    t = SSLsetAnnotations(w_6, t_100);
    z_100 = t;
    t = (ATerm) ATmakeAppl(sym_Row_3, z_100, o_100, p_100);
    y_6 = t;
    t = SSLsetAnnotations(y_6, m_100);
  }
  return(t);
}
ATerm t_9 (ATerm t)
{
  ATerm g_101 = NULL,h_101 = NULL,j_101 = NULL,m_101 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      g_101 = ATgetArgument(t, 0);
      {
        ATerm t_30 = ATgetArgument(t, 1);
        if(((ATgetType(t_30) == AT_LIST) && !(ATisEmpty(t_30))))
          {
            h_101 = ATgetFirst((ATermList) t_30);
            j_101 = (ATerm) ATgetNext((ATermList) t_30);
          }
        else
          _fail(t);
      }
      m_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(g_101), h_101), j_101, m_101);
  return(t);
}
ATerm f_9 (ATerm r_75, ATerm t)
{
  ATerm j_100 = NULL;
  t = r_75;
  {
    ATerm u_30 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(s_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_30;
      }
    t = r_75;
    t = map_1_0(t_9, t);
    j_100 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, j_100);
  }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL,x_101 = NULL,y_101 = NULL,a_102 = NULL,b_102 = NULL,e_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,f_7 = NULL,e_7 = NULL,c_7 = NULL;
  k_102 = t;
  if(match_cons(t, sym_Row_3))
    {
      v_101 = ATgetArgument(t, 0);
      w_101 = ATgetArgument(t, 1);
      x_101 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_102);
  u_101 = t;
  t = w_101;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_102 = ATgetFirst((ATermList) t);
      e_102 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_101);
  a_102 = t;
  t = b_102;
  if(match_cons(t, sym_As_2))
    {
      h_102 = ATgetArgument(t, 0);
      i_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_102);
  g_102 = t;
  t = i_102;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, h_102, i_102);
  c_7 = t;
  t = SSLsetAnnotations(c_7, g_102);
  j_102 = t;
  t = (ATerm) ATinsert(CheckATermList(e_102), j_102);
  e_7 = t;
  t = SSLsetAnnotations(e_7, a_102);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_30 = ATgetFirst((ATermList) t);
      y_101 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, v_101, y_101, x_101);
  f_7 = t;
  t = SSLsetAnnotations(f_7, u_101);
  return(t);
}
ATerm h_9 (ATerm p_75, ATerm t)
{
  ATerm o_101 = NULL;
  t = p_75;
  t = map_1_0(w_9, t);
  o_101 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, o_101);
  return(t);
}
ATerm repeat_1_0 (ATerm m_115 (ATerm), ATerm t)
{
  ATerm q_102 (ATerm t)
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_115(t);
        t = q_102(t);
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
      }
    return(t);
  }
  t = q_102(t);
  return(t);
}
ATerm j_9 (ATerm g_44, ATerm h_44, ATerm t)
{
  ATerm a_103 = NULL,b_103 = NULL;
  b_103 = t;
  {
    ATerm a_31 = t;
    int b_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_44, h_44);
        t = m_11(g_44, h_44, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_31 = ATgetFirst((ATermList) t);
            a_103 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(b_31);
        t = SSL_table_put(g_44, h_44, a_103);
        t = (ATerm) ATmakeAppl(sym__3, g_44, h_44, a_103);
      }
    else
      {
        t = a_31;
        t = SSL_table_remove(g_44, h_44);
        t = (ATerm) ATmakeAppl(sym__2, g_44, h_44);
      }
    t = b_103;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm u_110 (ATerm), ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,h_103 = NULL;
  f_103 = t;
  t = u_110(t);
  e_103 = t;
  {
    ATerm d_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_103 = NULL;
        t = term_p_28;
        j_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_103, term_p_28);
        t = m_11(e_103, j_103, t);
        ;
        LocalPopChoice(f_31);
      }
    else
      {
        t = d_31;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_103 = ATgetFirst((ATermList) t);
        c_103 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_28;
    h_103 = t;
    t = SSL_table_put(e_103, h_103, c_103);
    t = d_103;
    {
      ATerm e_10 (ATerm t)
      {
        ATerm l_103 = NULL;
        l_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_103, l_103);
        t = j_9(e_103, l_103, t);
        return(t);
      }
      t = map_1_0(e_10, t);
      t = f_103;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm q_101 (ATerm), ATerm r_101 (ATerm), ATerm t)
{
  ATerm h_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_101(t);
      t = r_101(t);
      ;
      LocalPopChoice(i_31);
    }
  else
    {
      t = h_31;
      t = r_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_110 (ATerm), ATerm t)
{
  ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,t_103 = NULL;
  o_103 = t;
  t = t_110(t);
  n_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_103, term_p_28);
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_103 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm l_31 = ATgetArgument(t, 0);
            ATerm n_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_p_28;
        z_103 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_103, term_p_28);
        t = m_11(n_103, z_103, t);
        ;
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = (ATerm) ATempty;
      }
    p_103 = t;
    t = term_p_28;
    q_103 = t;
    t = (ATerm) ATinsert(CheckATermList(p_103), (ATerm) ATempty);
    t_103 = t;
    t = SSL_table_put(n_103, q_103, t_103);
    t = o_103;
  }
  return(t);
}
ATerm scope_2_0 (ATerm v_110 (ATerm), ATerm w_110 (ATerm), ATerm t)
{
  ATerm h_10 (ATerm t)
  {
    t = end_scope_1_0(v_110, t);
    return(t);
  }
  t = begin_scope_1_0(v_110, t);
  t = restore_always_2_0(w_110, h_10, t);
  return(t);
}
ATerm at_end_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm e_105 (ATerm t)
  {
    ATerm z_104 = NULL,c_105 = NULL,d_105 = NULL;
    d_105 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_104 = ATgetFirst((ATermList) t);
        c_105 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_54 = NULL,t_54 = NULL,l_7 = NULL;
          t = SSLgetAnnotations(d_105);
          q_54 = t;
          t = c_105;
          t = e_105(t);
          t_54 = t;
          t = (ATerm) ATinsert(CheckATermList(t_54), z_104);
          l_7 = t;
          t = SSLsetAnnotations(l_7, q_54);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_105;
        t = a_105(t);
      }
    return(t);
  }
  t = e_105(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL;
  c_104 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_104;
    }
  else
    {
      ATerm i_10 (ATerm t)
      {
        t = not_null(e_104);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_104 = ATgetFirst((ATermList) t);
          if(((e_104 != NULL) && (e_104 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_104;
      t = at_end_1_0(i_10, t);
    }
  return(t);
}
ATerm z_105 (ATerm i_105, ATerm t)
{
  ATerm k_105 = NULL;
  t = SSL_explode_term(i_105);
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_105;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_105 = NULL,n_105 = NULL,w_105 = NULL;
  w_105 = t;
  if(match_cons(t, sym__2))
    {
      m_105 = ATgetArgument(t, 0);
      n_105 = ATgetArgument(t, 1);
      {
        ATerm p_31 = t;
        int q_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_10 (ATerm t)
            {
              t = n_105;
              return(t);
            }
            t = m_105;
            t = at_end_1_0(k_10, t);
            ;
            LocalPopChoice(q_31);
          }
        else
          {
            t = p_31;
            t = z_105(w_105, t);
          }
      }
    }
  else
    {
      t = z_105(w_105, t);
    }
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm q_108 = NULL;
  if(match_cons(t, sym__2))
    {
      q_108 = ATgetArgument(t, 0);
      if((q_108 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm i_109 = NULL;
  if(match_cons(t, sym__2))
    {
      i_109 = ATgetArgument(t, 0);
      if((i_109 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm x_109 = NULL;
  if(match_cons(t, sym__2))
    {
      x_109 = ATgetArgument(t, 0);
      if((x_109 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm f_110 = NULL;
  if(match_cons(t, sym__2))
    {
      f_110 = ATgetArgument(t, 0);
      if((f_110 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm y_110 = NULL;
  if(match_cons(t, sym__2))
    {
      y_110 = ATgetArgument(t, 0);
      if((y_110 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm j_111 = NULL;
  if(match_cons(t, sym__2))
    {
      j_111 = ATgetArgument(t, 0);
      if((j_111 != ATgetArgument(t, 1)))
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
  ATerm z_106 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL,g_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL,t_107 = NULL,y_107 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      g_107 = ATgetArgument(t, 0);
      y_107 = ATgetArgument(t, 1);
      t = g_107;
      if(match_cons(t, sym_Matrix_2))
        {
          m_107 = ATgetArgument(t, 0);
          n_107 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_107;
      if(match_cons(t, sym_Choice_2))
        {
          d_107 = ATgetArgument(t, 0);
          e_107 = ATgetArgument(t, 1);
          {
            ATerm o_108 = NULL,p_108 = NULL;
            t = d_107;
            if(match_cons(t, sym_Matrix_2))
              {
                z_106 = ATgetArgument(t, 0);
                c_107 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, m_107, z_106);
            t = r_10(m_10, m_107, z_106, t);
            o_108 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_107, c_107);
            t = conc_0_0(t);
            p_108 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, o_108, p_108), e_107);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              d_107 = ATgetArgument(t, 0);
              e_107 = ATgetArgument(t, 1);
              {
                ATerm d_109 = NULL,e_109 = NULL;
                t = d_107;
                if(match_cons(t, sym_Matrix_2))
                  {
                    z_106 = ATgetArgument(t, 0);
                    c_107 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, m_107, z_106);
                t = r_10(p_10, m_107, z_106, t);
                d_109 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_107, c_107);
                t = conc_0_0(t);
                e_109 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, d_109, e_109), e_107);
              }
            }
          else
            {
              ATerm v_109 = NULL,w_109 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  d_107 = ATgetArgument(t, 0);
                  e_107 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, m_107, d_107);
              t = r_10(s_10, m_107, d_107, t);
              v_109 = t;
              t = (ATerm) ATmakeAppl(sym__2, n_107, e_107);
              t = conc_0_0(t);
              w_109 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, v_109, w_109);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          g_107 = ATgetArgument(t, 0);
          y_107 = ATgetArgument(t, 1);
          t = g_107;
          if(match_cons(t, sym_Matrix_2))
            {
              m_107 = ATgetArgument(t, 0);
              n_107 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_107;
          if(match_cons(t, sym_LChoice_2))
            {
              d_107 = ATgetArgument(t, 0);
              e_107 = ATgetArgument(t, 1);
              {
                ATerm d_110 = NULL,e_110 = NULL;
                t = d_107;
                if(match_cons(t, sym_Matrix_2))
                  {
                    z_106 = ATgetArgument(t, 0);
                    c_107 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, m_107, z_106);
                t = r_10(t_10, m_107, z_106, t);
                d_110 = t;
                t = (ATerm) ATmakeAppl(sym__2, n_107, c_107);
                t = conc_0_0(t);
                e_110 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, d_110, e_110), e_107);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  d_107 = ATgetArgument(t, 0);
                  e_107 = ATgetArgument(t, 1);
                  {
                    ATerm p_110 = NULL,q_110 = NULL;
                    t = d_107;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        z_106 = ATgetArgument(t, 0);
                        c_107 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, m_107, z_106);
                    t = r_10(u_10, m_107, z_106, t);
                    p_110 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_107, c_107);
                    t = conc_0_0(t);
                    q_110 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, p_110, q_110), e_107);
                  }
                }
              else
                {
                  ATerm h_111 = NULL,i_111 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      d_107 = ATgetArgument(t, 0);
                      e_107 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, m_107, d_107);
                  t = r_10(v_10, m_107, d_107, t);
                  h_111 = t;
                  t = (ATerm) ATmakeAppl(sym__2, n_107, e_107);
                  t = conc_0_0(t);
                  i_111 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, h_111, i_111);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              g_107 = ATgetArgument(t, 0);
              y_107 = ATgetArgument(t, 1);
              {
                ATerm u_111 = NULL;
                t = y_107;
                if(match_cons(t, sym_Matrix_2))
                  {
                    d_107 = ATgetArgument(t, 0);
                    e_107 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_107;
                {
                  ATerm w_10 (ATerm t)
                  {
                    ATerm v_111 = NULL,w_111 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        v_111 = ATgetArgument(t, 0);
                        w_111 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, v_111, (ATerm) ATmakeAppl(sym_Scope_2, g_107, w_111));
                    return(t);
                  }
                  t = map_1_0(w_10, t);
                  u_111 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, d_107, u_111);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  g_107 = ATgetArgument(t, 0);
                  y_107 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_107;
              if(match_cons(t, sym_Matrix_2))
                {
                  m_107 = ATgetArgument(t, 0);
                  n_107 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_107;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_107 = ATgetFirst((ATermList) t);
                  t_107 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_107;
              if(match_cons(t, sym_Row_2))
                {
                  p_107 = ATgetArgument(t, 0);
                  q_107 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_107;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, m_107, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, p_107, (ATerm) ATmakeAppl(sym_Seq_2, q_107, y_107))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm k_98 (ATerm), ATerm t)
{
  ATerm y_10 (ATerm t)
  {
    t = bottomup_1_0(k_98, t);
    return(t);
  }
  t = SRTS_all(y_10, t);
  t = k_98(t);
  return(t);
}
ATerm q_10 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm u_38, ATerm t_38, ATerm t)
{
  t = b_107(t);
  {
    ATerm z_10 (ATerm t)
    {
      ATerm d_112 = NULL;
      d_112 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_38, d_112);
      t = a_107(t);
      return(t);
    }
    t = fetch_1_0(z_10, t);
    t = t_38;
  }
  return(t);
}
ATerm r_10 (ATerm x_106 (ATerm), ATerm q_38, ATerm p_38, ATerm t)
{
  ATerm w_112 (ATerm t)
  {
    ATerm r_112 = NULL,s_112 = NULL,t_112 = NULL;
    r_112 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_38;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_112 = ATgetFirst((ATermList) t);
            t_112 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_112;
              {
                ATerm a_11 (ATerm t)
                {
                  t = p_38;
                  return(t);
                }
                t = q_10(x_106, a_11, s_112, t_112, t);
                t = w_112(t);
              }
              ;
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              {
                ATerm k_55 = NULL,n_55 = NULL,n_7 = NULL;
                t = SSLgetAnnotations(r_112);
                k_55 = t;
                t = t_112;
                t = w_112(t);
                n_55 = t;
                t = (ATerm) ATinsert(CheckATermList(n_55), s_112);
                n_7 = t;
                t = SSLsetAnnotations(n_7, k_55);
              }
            }
        }
      }
    return(t);
  }
  t = q_38;
  t = w_112(t);
  return(t);
}
ATerm foldr_3_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL;
  z_112 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_112;
      t = n_109(t);
    }
  else
    {
      ATerm e_113 = NULL,f_113 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_113 = ATgetFirst((ATermList) t);
          b_113 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_113;
      t = p_109(t);
      e_113 = t;
      t = b_113;
      t = foldr_3_0(n_109, o_109, p_109, t);
      f_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_113, f_113);
      t = o_109(t);
    }
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_113 = NULL;
      t = r_108(t);
      i_113 = t;
      t = (ATerm) ATinsert(ATempty, i_113);
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      {
        ATerm v_55 = NULL,z_55 = NULL;
        ATerm o_11 (ATerm t)
        {
          t = collect_om_2_0(r_108, s_108, t);
          return(t);
        }
        z_55 = t;
        t = SSL_explode_term(z_55);
        if(match_cons(t, sym__2))
          {
            ATerm x_31 = ATgetArgument(t, 0);
            v_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_55;
        t = foldr_3_0(b_11, s_108, o_11, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm o_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL;
  if(match_cons(t, sym_As_2))
    {
      v_113 = ATgetArgument(t, 0);
      x_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_113;
  if(match_cons(t, sym_Var_1))
    {
      w_113 = ATgetArgument(t, 0);
      t = x_113;
      if(match_cons(t, sym_As_2))
        {
          y_113 = ATgetArgument(t, 0);
          {
            ATerm a_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_113;
      if(match_cons(t, sym_Off_1))
        {
          o_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, w_113), (ATerm) ATmakeAppl(sym_Var_1, o_113)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          w_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_113;
      if(match_cons(t, sym_Var_1))
        {
          y_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, y_113), (ATerm) ATmakeAppl(sym_Var_1, w_113)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm q_114 = NULL,s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,x_114 = NULL;
  t_114 = t;
  if(match_cons(t, sym_As_2))
    {
      u_114 = ATgetArgument(t, 0);
      w_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_114;
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_32);
        t = w_114;
        if(match_cons(t, sym_As_2))
          {
            x_114 = ATgetArgument(t, 0);
            s_114 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_114;
        if(match_cons(t, sym_Off_1))
          {
            q_114 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, q_114), s_114);
      }
    else
      {
        t = b_32;
        if(match_cons(t, sym_Off_1))
          {
            v_114 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_114;
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_114;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_114;
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
            t = v_114;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, v_114), term_u_28);
      }
  }
  return(t);
}
ATerm s_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_z_27;
  return(t);
}
ATerm t_11 (ATerm t)
{
  ATerm q_115 = NULL,r_115 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_115 = ATgetFirst((ATermList) t);
      r_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_115, r_115);
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_32 = ATgetArgument(t, 0);
      if(match_cons(h_32, sym__2))
        {
          s_115 = ATgetArgument(h_32, 0);
          t_115 = ATgetArgument(h_32, 1);
        }
      else
        _fail(t);
      {
        ATerm j_32 = ATgetArgument(t, 1);
        if(match_cons(j_32, sym__2))
          {
            u_115 = ATgetArgument(j_32, 0);
            v_115 = ATgetArgument(j_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_115), s_115), (ATerm) ATinsert(CheckATermList(v_115), t_115));
  return(t);
}
ATerm w_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm w_115 = NULL,x_115 = NULL;
  if(match_cons(t, sym__2))
    {
      w_115 = ATgetArgument(t, 0);
      x_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(y_11, w_115, x_115, t);
  return(t);
}
ATerm y_11 (ATerm t)
{
  ATerm y_115 = NULL;
  if(match_cons(t, sym__2))
    {
      y_115 = ATgetArgument(t, 0);
      if((y_115 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm z_115 = NULL;
  if(match_cons(t, sym__2))
    {
      z_115 = ATgetArgument(t, 0);
      if((z_115 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm t)
{
  ATerm b_115 = NULL,c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL,o_115 = NULL;
  l_115 = t;
  o_115 = t;
  t = SSL_explode_term(o_115);
  if(match_cons(t, sym__2))
    {
      d_115 = ATgetArgument(t, 0);
      b_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_115);
  f_115 = t;
  t = b_115;
  t = genzip_4_0(s_11, t_11, v_11, u_107, t);
  if(match_cons(t, sym__2))
    {
      e_115 = ATgetArgument(t, 0);
      c_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(d_115, e_115);
  k_115 = t;
  t = SSLsetAnnotations(k_115, f_115);
  t = v_107(t);
  if(match_cons(t, sym__2))
    {
      g_115 = ATgetArgument(t, 0);
      h_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_115;
  t = foldr_2_0(w_11, x_11, t);
  j_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_115, j_115);
  t = r_10(z_11, h_115, j_115, t);
  i_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_115, i_115);
  return(t);
}
ATerm collect_split_2_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm t)
{
  ATerm m_116 (ATerm t)
  {
    ATerm a_12 (ATerm t)
    {
      ATerm h_116 = NULL,i_116 = NULL,j_116 = NULL;
      j_116 = t;
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_108(t);
            ;
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
          }
        h_116 = t;
        t = j_116;
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_108(t);
              ;
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              t = (ATerm) ATempty;
            }
          i_116 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_116, i_116);
        }
      }
      return(t);
    }
    t = CollectSplit_2_0(m_116, a_12, t);
    return(t);
  }
  t = m_116(t);
  return(t);
}
ATerm genzip_4_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm t)
{
  ATerm t_116 (ATerm t)
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_102(t);
        ;
        LocalPopChoice(p_32);
      }
    else
      {
        t = o_32;
        {
          ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL,v_7 = NULL;
          t = w_102(t);
          s_116 = t;
          if(match_cons(t, sym__2))
            {
              o_116 = ATgetArgument(t, 0);
              p_116 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_116);
          n_116 = t;
          t = o_116;
          t = y_102(t);
          q_116 = t;
          t = p_116;
          t = t_116(t);
          r_116 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_116, r_116);
          v_7 = t;
          t = SSLsetAnnotations(v_7, n_116);
          t = x_102(t);
        }
      }
    return(t);
  }
  t = t_116(t);
  return(t);
}
ATerm b_12 (ATerm t)
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
ATerm c_12 (ATerm t)
{
  ATerm w_116 = NULL,x_116 = NULL,y_116 = NULL,z_116 = NULL,a_117 = NULL;
  if(match_cons(t, sym__2))
    {
      w_116 = ATgetArgument(t, 0);
      {
        ATerm s_32 = ATgetArgument(t, 1);
        if(((ATgetType(s_32) == AT_LIST) && !(ATisEmpty(s_32))))
          {
            x_116 = ATgetFirst((ATermList) s_32);
            y_116 = (ATerm) ATgetNext((ATermList) s_32);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_e_17;
  a_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_116, term_e_17);
  t = k_11(w_116, a_117, t);
  z_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_116, x_116), (ATerm) ATmakeAppl(sym__2, z_116, y_116));
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm b_117 = NULL,c_117 = NULL;
  if(match_cons(t, sym__2))
    {
      b_117 = ATgetArgument(t, 0);
      c_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_117), b_117);
  return(t);
}
ATerm nzip0_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm u_116 = NULL;
  u_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_28, u_116);
  t = genzip_4_0(b_12, c_12, f_12, g_103, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm h_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL;
  if(match_cons(t, sym_As_2))
    {
      j_117 = ATgetArgument(t, 0);
      l_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_117;
  if(match_cons(t, sym_Off_1))
    {
      k_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_117;
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm w_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_32);
        {
          ATerm x_32 = t;
          int y_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_12 (ATerm t)
              {
                ATerm q_117 = NULL,r_117 = NULL;
                if(match_cons(t, sym__2))
                  {
                    q_117 = ATgetArgument(t, 0);
                    r_117 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(k_117), q_117)), r_117);
                return(t);
              }
              t = l_117;
              t = nzip0_1_0(g_12, t);
              ;
              LocalPopChoice(y_32);
            }
          else
            {
              t = x_32;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, k_117), term_u_28);
            }
        }
      }
    else
      {
        t = t_32;
        if(match_cons(t, sym_As_2))
          {
            m_117 = ATgetArgument(t, 0);
            n_117 = ATgetArgument(t, 1);
            t = m_117;
            if(match_cons(t, sym_Var_1))
              {
                h_117 = ATgetArgument(t, 0);
                {
                  ATerm z_32 = t;
                  int a_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_12 (ATerm t)
                      {
                        ATerm v_117 = NULL,w_117 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            v_117 = ATgetArgument(t, 0);
                            w_117 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(k_117), v_117)), w_117);
                        return(t);
                      }
                      t = l_117;
                      t = nzip0_1_0(h_12, t);
                      ;
                      LocalPopChoice(a_33);
                    }
                  else
                    {
                      t = z_32;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, h_117), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, k_117), n_117));
                    }
                }
              }
            else
              {
                ATerm i_12 (ATerm t)
                {
                  ATerm c_118 = NULL,d_118 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      c_118 = ATgetArgument(t, 0);
                      d_118 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(k_117), c_118)), d_118);
                  return(t);
                }
                t = l_117;
                t = nzip0_1_0(i_12, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                m_117 = ATgetArgument(t, 0);
                n_117 = ATgetArgument(t, 1);
                {
                  ATerm c_33 = t;
                  int d_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_12 (ATerm t)
                      {
                        ATerm g_118 = NULL,h_118 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            g_118 = ATgetArgument(t, 0);
                            h_118 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(k_117), g_118)), h_118);
                        return(t);
                      }
                      t = l_117;
                      t = nzip0_1_0(k_12, t);
                      ;
                      LocalPopChoice(d_33);
                    }
                  else
                    {
                      t = c_33;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, k_117), (ATerm) ATmakeAppl(sym_Op_2, m_117, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, k_117), n_117)));
                    }
                }
              }
            else
              {
                ATerm l_12 (ATerm t)
                {
                  ATerm n_118 = NULL,o_118 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      n_118 = ATgetArgument(t, 0);
                      o_118 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(k_117), n_118)), o_118);
                  return(t);
                }
                t = l_117;
                t = nzip0_1_0(l_12, t);
              }
          }
      }
  }
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm x_118 = NULL,y_118 = NULL,z_118 = NULL;
  z_118 = t;
  if(match_cons(t, sym_As_2))
    {
      x_118 = ATgetArgument(t, 0);
      y_118 = ATgetArgument(t, 1);
      t = x_118;
      if(match_cons(t, sym_Wld_0))
        {
          t = y_118;
        }
      else
        {
          t = z_118;
        }
    }
  else
    {
      t = z_118;
    }
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm e_33 = t;
  int g_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      ;
      LocalPopChoice(g_33);
    }
  else
    {
      t = e_33;
    }
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm g_119 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      g_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_119;
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm h_119 = NULL,i_119 = NULL;
  if(match_cons(t, sym__2))
    {
      h_119 = ATgetArgument(t, 0);
      i_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_10(s_12, h_119, i_119, t);
  return(t);
}
ATerm s_12 (ATerm t)
{
  ATerm j_119 = NULL;
  if(match_cons(t, sym__2))
    {
      j_119 = ATgetArgument(t, 0);
      if((j_119 != ATgetArgument(t, 1)))
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
  ATerm t_118 = NULL,u_118 = NULL,v_118 = NULL,w_118 = NULL;
  w_118 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_h_33, (ATerm) ATinsert(ATempty, w_118));
  t = topdown_1_0(o_12, t);
  t = topdown_1_0(p_12, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      t_118 = ATgetArgument(t, 0);
      u_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_118;
  t = collect_om_2_0(q_12, r_12, t);
  v_118 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, v_118, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, t_118, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_118), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_m_28)))))));
  return(t);
}
ATerm t_12 (ATerm t)
{
  t = repeat_1_0(w_12, t);
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      ;
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
      ATerm q_121 (ATerm t)
      {
        ATerm m_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_120 = NULL,t_120 = NULL,u_120 = NULL;
            s_120 = t;
            if(match_cons(t, sym_Choice_2))
              {
                t_120 = ATgetArgument(t, 0);
                u_120 = ATgetArgument(t, 1);
                {
                  ATerm o_56 = NULL,r_56 = NULL,s_56 = NULL,b_8 = NULL;
                  t = SSLgetAnnotations(s_120);
                  o_56 = t;
                  t = t_120;
                  t = q_121(t);
                  r_56 = t;
                  t = u_120;
                  t = q_121(t);
                  s_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, r_56, s_56);
                  b_8 = t;
                  t = SSLsetAnnotations(b_8, o_56);
                }
              }
            else
              {
                ATerm a_57 = NULL,d_57 = NULL,f_57 = NULL,c_8 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    t_120 = ATgetArgument(t, 0);
                    u_120 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_120);
                a_57 = t;
                t = t_120;
                t = q_121(t);
                d_57 = t;
                t = u_120;
                t = q_121(t);
                f_57 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, d_57, f_57);
                c_8 = t;
                t = SSLsetAnnotations(c_8, a_57);
              }
            ;
            LocalPopChoice(n_33);
          }
        else
          {
            t = m_33;
            {
              ATerm v_121 (ATerm t)
              {
                ATerm o_33 = t;
                int q_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_121 = NULL,n_121 = NULL,o_121 = NULL;
                    n_121 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        o_121 = ATgetArgument(t, 0);
                        m_121 = ATgetArgument(t, 1);
                        {
                          ATerm z_57 = NULL,m_58 = NULL,q_58 = NULL,d_8 = NULL;
                          t = SSLgetAnnotations(n_121);
                          z_57 = t;
                          t = o_121;
                          t = v_121(t);
                          m_58 = t;
                          t = m_121;
                          t = match_to_matrix_0_0(t);
                          q_58 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_58, q_58);
                          d_8 = t;
                          t = SSLsetAnnotations(d_8, z_57);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            o_121 = ATgetArgument(t, 0);
                            m_121 = ATgetArgument(t, 1);
                            {
                              ATerm y_58 = NULL,b_59 = NULL,h_8 = NULL;
                              t = SSLgetAnnotations(n_121);
                              y_58 = t;
                              t = m_121;
                              t = v_121(t);
                              b_59 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, o_121, b_59);
                              h_8 = t;
                              t = SSLsetAnnotations(h_8, y_58);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                o_121 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = o_121;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    ;
                    LocalPopChoice(q_33);
                  }
                else
                  {
                    t = o_33;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = v_121(t);
            }
          }
        return(t);
      }
      ATerm r_33 = t;
      int s_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL,z_7 = NULL;
          t_119 = t;
          if(match_cons(t, sym_Choice_2))
            {
              r_119 = ATgetArgument(t, 0);
              s_119 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_119);
          q_119 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, r_119, s_119);
          z_7 = t;
          t = SSLsetAnnotations(z_7, q_119);
          ;
          LocalPopChoice(s_33);
        }
      else
        {
          t = r_33;
          {
            ATerm u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL,a_8 = NULL;
            x_119 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                v_119 = ATgetArgument(t, 0);
                w_119 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_119);
            u_119 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, v_119, w_119);
            a_8 = t;
            t = SSLsetAnnotations(a_8, u_119);
          }
        }
      t = q_121(t);
      ;
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
ATerm x_12 (ATerm t)
{
  t = term_q_30;
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm u_33 = t;
  int v_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL;
      z_121 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          a_122 = ATgetArgument(t, 0);
          {
            ATerm z_33 = t;
            int f_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_122 = NULL;
                t = a_122;
                t = map_1_0(c_13, t);
                d_122 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, d_122);
                ;
                LocalPopChoice(f_34);
              }
            else
              {
                t = z_33;
                {
                  ATerm g_34 = t;
                  int h_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_121;
                      t = h_9(a_122, t);
                      ;
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
                            t = z_121;
                            t = f_9(a_122, t);
                            ;
                            LocalPopChoice(j_34);
                          }
                        else
                          {
                            t = i_34;
                            t = z_121;
                            t = d_9(a_122, t);
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
              a_122 = ATgetArgument(t, 0);
              b_122 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_121;
          t = v_8(a_122, b_122, t);
        }
      ;
      LocalPopChoice(v_33);
    }
  else
    {
      t = u_33;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm e_122 = NULL;
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
      e_122 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_122;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    ATerm z_12 (ATerm t)
    {
      t = repeat_1_0(b_13, t);
      t = SRTS_all(z_12, t);
      return(t);
    }
    t = scope_2_0(x_12, z_12, t);
    t = strename_0_0(t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm j_98 (ATerm), ATerm t)
{
  ATerm d_13 (ATerm t)
  {
    t = topdown_1_0(j_98, t);
    return(t);
  }
  t = j_98(t);
  t = SRTS_all(d_13, t);
  return(t);
}
ATerm map_1_0 (ATerm k_104 (ATerm), ATerm t)
{
  ATerm z_122 (ATerm t)
  {
    ATerm w_122 = NULL,x_122 = NULL,y_122 = NULL;
    w_122 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_122;
      }
    else
      {
        ATerm j_59 = NULL,s_59 = NULL,t_59 = NULL,j_10 = NULL;
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
        t = k_104(t);
        s_59 = t;
        t = y_122;
        t = z_122(t);
        t_59 = t;
        t = (ATerm) ATinsert(CheckATermList(t_59), s_59);
        j_10 = t;
        t = SSLsetAnnotations(j_10, j_59);
      }
    return(t);
  }
  t = z_122(t);
  return(t);
}
ATerm d_11 (ATerm v_54, ATerm w_54, ATerm t)
{
  ATerm b_123 = NULL;
  t = SSL_fputc(v_54, w_54);
  b_123 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_123);
  return(t);
}
ATerm e_11 (ATerm j_58, ATerm k_58, ATerm t)
{
  ATerm c_123 = NULL;
  t = SSL_write_term_to_stream_text(j_58, k_58);
  c_123 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_123);
  return(t);
}
ATerm g_11 (ATerm j_120 (ATerm), ATerm f_527, ATerm n_58, ATerm t)
{
  ATerm d_123 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_527, term_q_34);
  t = j_11(t);
  d_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_123, n_58);
  t = j_120(t);
  t = fclose_0_0(t);
  t = n_58;
  return(t);
}
ATerm f_11 (ATerm f_58, ATerm g_58, ATerm t)
{
  ATerm e_123 = NULL;
  t = SSL_write_term_to_stream_baf(f_58, g_58);
  e_123 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_123);
  return(t);
}
ATerm h_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_34 = ATgetArgument(t, 0);
      if(match_cons(t_34, sym_Stream_1))
        {
          n_60 = ATgetArgument(t_34, 0);
        }
      else
        _fail(t);
      o_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(n_60, o_60, t);
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm k_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_34 = ATgetArgument(t, 0);
      if(match_cons(u_34, sym_Stream_1))
        {
          o_61 = ATgetArgument(u_34, 0);
        }
      else
        _fail(t);
      p_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_11(o_61, p_61, t);
  k_61 = t;
  t = term_v_34;
  m_61 = t;
  t = k_61;
  if(match_cons(t, sym_Stream_1))
    {
      n_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_34, k_61);
  t = d_11(m_61, n_61, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL,m_123 = NULL,n_123 = NULL,p_123 = NULL,q_123 = NULL,r_123 = NULL,s_123 = NULL,t_123 = NULL,b_125 = NULL,c_125 = NULL,x_10 = NULL,l_10 = NULL;
  j_123 = t;
  if(match_cons(t, sym__2))
    {
      r_123 = ATgetArgument(t, 0);
      s_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_123);
  q_123 = t;
  t = r_123;
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_13 (ATerm t)
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
        ;
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        t = term_y_34;
        i_123 = t;
      }
    t_123 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_123, s_123);
    l_10 = t;
    t = SSLsetAnnotations(l_10, q_123);
    t = j_123;
    if(match_cons(t, sym__2))
      {
        m_123 = ATgetArgument(t, 0);
        n_123 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_123);
    k_123 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_123, (ATerm) ATmakeAppl(sym__2, not_null(i_123), n_123));
    x_10 = t;
    t = SSLsetAnnotations(x_10, k_123);
    p_123 = t;
    if(match_cons(t, sym__2))
      {
        b_125 = ATgetArgument(t, 0);
        c_125 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm a_35 = t;
      int b_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL,l_11 = NULL;
          t = SSLgetAnnotations(p_123);
          e_60 = t;
          t = b_125;
          t = fetch_1_0(h_13, t);
          j_60 = t;
          t = c_125;
          if(match_cons(t, sym__2))
            {
              l_60 = ATgetArgument(t, 0);
              m_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_11(j_13, l_60, m_60, t);
          k_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_60, k_60);
          l_11 = t;
          t = SSLsetAnnotations(l_11, e_60);
          ;
          LocalPopChoice(b_35);
        }
      else
        {
          t = a_35;
          {
            ATerm w_60 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,q_11 = NULL;
            t = SSLgetAnnotations(p_123);
            w_60 = t;
            t = c_125;
            if(match_cons(t, sym__2))
              {
                f_61 = ATgetArgument(t, 0);
                g_61 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_11(k_13, f_61, g_61, t);
            e_61 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_125, e_61);
            q_11 = t;
            t = SSLsetAnnotations(q_11, w_60);
          }
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
ATerm apply_strategy_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  ATerm f_125 = NULL,g_125 = NULL,h_125 = NULL,i_125 = NULL,j_125 = NULL;
  j_125 = t;
  t = dtime_0_0(t);
  t = j_125;
  t = l_123(t);
  i_125 = t;
  t = dtime_0_0(t);
  f_125 = t;
  t = i_125;
  if(match_cons(t, sym__2))
    {
      g_125 = ATgetArgument(t, 0);
      h_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_125), (ATerm) ATmakeAppl(sym_Runtime_1, f_125)), h_125);
  return(t);
}
ATerm x_125 (ATerm r_125, ATerm t)
{
  t = SSL_fclose(r_125);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_125 = NULL,v_125 = NULL;
  v_125 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_125 = ATgetArgument(t, 0);
      {
        ATerm c_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_125);
            ;
            LocalPopChoice(g_35);
          }
        else
          {
            t = c_35;
            t = x_125(v_125, t);
          }
      }
    }
  else
    {
      t = x_125(v_125, t);
    }
  return(t);
}
ATerm h_11 (ATerm l_58, ATerm t)
{
  t = SSL_read_term_from_stream(l_58);
  return(t);
}
ATerm i_11 (ATerm x_54, ATerm y_54, ATerm t)
{
  ATerm y_125 = NULL;
  t = SSL_fopen(x_54, y_54);
  y_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_125);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_125 = NULL;
  t = SSL_stdin_stream();
  z_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_125);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_126 = NULL;
  t = SSL_stdout_stream();
  a_126 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_126);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_126 = NULL;
  t = SSL_stderr_stream();
  b_126 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_126);
  return(t);
}
ATerm p_127 (ATerm h_126, ATerm t)
{
  ATerm i_126 = NULL;
  t = SSL_explode_term(h_126);
  if(match_cons(t, sym__2))
    {
      ATerm h_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_35 = ATgetArgument(t, 1);
        if(((ATgetType(i_35) == AT_LIST) && !(ATisEmpty(i_35))))
          {
            i_126 = ATgetFirst((ATermList) i_35);
            {
              ATerm k_35 = (ATerm) ATgetNext((ATermList) i_35);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_126;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_126;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_126;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_126;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm q_127 (ATerm n_126, ATerm o_126, ATerm p_126, ATerm t)
{
  ATerm q_126 = NULL,r_126 = NULL,s_126 = NULL,v_126 = NULL,d_12 = NULL;
  t = SSLgetAnnotations(p_126);
  s_126 = t;
  t = n_126;
  if(match_cons(t, sym_Path_1))
    {
      v_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_126, o_126);
  d_12 = t;
  t = SSLsetAnnotations(d_12, s_126);
  if(match_cons(t, sym__2))
    {
      q_126 = ATgetArgument(t, 0);
      r_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(q_126, r_126, t);
  return(t);
}
ATerm r_127 (ATerm y_126, ATerm z_126, ATerm a_127, ATerm t)
{
  ATerm b_127 = NULL,c_127 = NULL,d_127 = NULL,g_127 = NULL,e_12 = NULL;
  t = SSLgetAnnotations(a_127);
  d_127 = t;
  t = SSL_is_string(y_126);
  g_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_127, z_126);
  e_12 = t;
  t = SSLsetAnnotations(e_12, d_127);
  if(match_cons(t, sym__2))
    {
      b_127 = ATgetArgument(t, 0);
      c_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_11(b_127, c_127, t);
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm j_127 = NULL,k_127 = NULL,l_127 = NULL;
  j_127 = t;
  if(match_cons(t, sym__2))
    {
      k_127 = ATgetArgument(t, 0);
      l_127 = ATgetArgument(t, 1);
      {
        ATerm l_35 = t;
        int m_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_127(j_127, t);
            ;
            LocalPopChoice(m_35);
          }
        else
          {
            t = l_35;
            {
              ATerm p_35 = t;
              int q_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_127(k_127, l_127, j_127, t);
                  ;
                  LocalPopChoice(q_35);
                }
              else
                {
                  t = p_35;
                  t = r_127(k_127, l_127, j_127, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_127(j_127, t);
    }
  return(t);
}
ATerm l_13 (ATerm t)
{
  t = term_s_35;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_127 = NULL,t_127 = NULL,u_127 = NULL;
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_127 = NULL;
      v_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_127, term_v_35);
      t = j_11(t);
      ;
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      t = debug_1_0(l_13, t);
      _fail(t);
    }
  t_127 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_11(u_127, t);
  s_127 = t;
  t = t_127;
  t = fclose_0_0(t);
  t = s_127;
  return(t);
}
ATerm fetch_1_0 (ATerm u_104 (ATerm), ATerm t)
{
  ATerm u_128 (ATerm t)
  {
    ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL;
    r_128 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_128 = ATgetFirst((ATermList) t);
        t_128 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_35 = t;
      int x_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_62 = NULL,e_62 = NULL,u_12 = NULL;
          t = SSLgetAnnotations(r_128);
          b_62 = t;
          t = s_128;
          t = u_104(t);
          e_62 = t;
          t = (ATerm) ATinsert(CheckATermList(t_128), e_62);
          u_12 = t;
          t = SSLsetAnnotations(u_12, b_62);
          ;
          LocalPopChoice(x_35);
        }
      else
        {
          t = w_35;
          {
            ATerm q_62 = NULL,b_63 = NULL,v_12 = NULL;
            t = SSLgetAnnotations(r_128);
            q_62 = t;
            t = t_128;
            t = u_128(t);
            b_63 = t;
            t = (ATerm) ATinsert(CheckATermList(b_63), s_128);
            v_12 = t;
            t = SSLsetAnnotations(v_12, q_62);
          }
        }
    }
    return(t);
  }
  t = u_128(t);
  return(t);
}
ATerm c_11 (ATerm l_52, ATerm m_52, ATerm t)
{
  t = SSL_strcat(l_52, m_52);
  return(t);
}
ATerm debug_1_0 (ATerm h_120 (ATerm), ATerm t)
{
  ATerm x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL;
  x_128 = t;
  t = h_120(t);
  y_128 = t;
  t = term_u_16;
  z_128 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_128), y_128);
  a_129 = t;
  t = SSL_printnl(z_128, a_129);
  t = x_128;
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm a_36 = t;
  int c_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_36);
    }
  else
    {
      t = a_36;
    }
  return(t);
}
ATerm q_13 (ATerm t)
{
  t = term_d_36;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_129 = NULL;
      i_129 = t;
      t = SSL_is_string(i_129);
      ;
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_13, t);
            ;
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
            {
              ATerm o_129 = NULL,p_129 = NULL,q_129 = NULL;
              o_129 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_129 = ATgetArgument(t, 0);
                  t = p_129;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_129 = ATgetArgument(t, 0);
                      t = p_129;
                      {
                        ATerm k_36 = t;
                        int m_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(m_36);
                          }
                        else
                          {
                            t = k_36;
                            t = debug_1_0(q_13, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_129 = NULL,v_129 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_129 = ATgetArgument(t, 0);
                          q_129 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_129;
                      t = eval_config_0_0(t);
                      u_129 = t;
                      t = q_129;
                      t = eval_config_0_0(t);
                      v_129 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_129, v_129);
                      t = c_11(u_129, v_129, t);
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
  ATerm a_130 = NULL,b_130 = NULL;
  a_130 = t;
  t = term_o_36;
  b_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_36, a_130);
  t = m_11(b_130, a_130, t);
  {
    ATerm q_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_130 = NULL,d_130 = NULL;
        t = eval_config_0_0(t);
        c_130 = t;
        t = term_o_36;
        d_130 = t;
        t = SSL_table_put(d_130, a_130, c_130);
        t = c_130;
        ;
        LocalPopChoice(r_36);
      }
    else
      {
        t = q_36;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm u_121 (ATerm), ATerm t)
{
  ATerm h_130 = NULL;
  h_130 = t;
  {
    ATerm s_36 = t;
    int u_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_130 = NULL;
        t = term_v_36;
        t = get_config_0_0(t);
        k_130 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_130, term_w_36);
        t = geq_0_0(t);
        t = h_130;
        t = u_121(t);
        ;
        LocalPopChoice(u_36);
      }
    else
      {
        t = s_36;
        t = h_130;
      }
  }
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm n_130 = NULL;
  n_130 = t;
  if(match_string(t, "-k"))
    {
      t = n_130;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_130;
    }
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm o_130 = NULL,p_130 = NULL,q_130 = NULL;
  o_130 = t;
  t = SSL_string_to_int(o_130);
  p_130 = t;
  t = term_x_36;
  q_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_36, p_130);
  t = p_11(q_130, p_130, t);
  t = o_130;
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_13, z_13, a_14, t);
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm s_130 = NULL;
  s_130 = t;
  if(match_string(t, "-S"))
    {
      t = s_130;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_130;
    }
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm t_130 = NULL,u_130 = NULL;
  t = term_v_36;
  t_130 = t;
  t = term_m_28;
  u_130 = t;
  t = term_z_36;
  t = p_11(t_130, u_130, t);
  t = term_b_37;
  return(t);
}
ATerm d_14 (ATerm t)
{
  t = term_d_37;
  return(t);
}
ATerm e_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm v_130 = NULL,w_130 = NULL,x_130 = NULL;
  v_130 = t;
  t = SSL_string_to_int(v_130);
  w_130 = t;
  t = term_v_36;
  x_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_36, w_130);
  t = p_11(x_130, w_130, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_130);
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = term_e_37;
  return(t);
}
ATerm h_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm y_130 = NULL,z_130 = NULL;
  t = term_g_37;
  y_130 = t;
  t = term_t_16;
  z_130 = t;
  t = term_h_37;
  t = p_11(y_130, z_130, t);
  t = term_j_37;
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_k_37;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_37 = t;
  int r_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_14, c_14, d_14, t);
      ;
      LocalPopChoice(r_37);
    }
  else
    {
      t = p_37;
      {
        ATerm s_37 = t;
        int t_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_14, f_14, g_14, t);
            ;
            LocalPopChoice(t_37);
          }
        else
          {
            t = s_37;
            t = Option_3_0(h_14, i_14, j_14, t);
          }
      }
    }
  return(t);
}
ATerm p_11 (ATerm m_59, ATerm n_59, ATerm t)
{
  ATerm a_131 = NULL;
  t = term_o_36;
  a_131 = t;
  t = SSL_table_put(a_131, m_59, n_59);
  t = (ATerm) ATmakeAppl(sym__3, term_o_36, m_59, n_59);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_131 = NULL,f_131 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_131 = NULL,h_131 = NULL,i_131 = NULL;
      t = term_t_16;
      t = e_0(t);
      g_131 = t;
      t = term_u_37;
      h_131 = t;
      t = term_v_37;
      i_131 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_37, term_v_37, g_131);
      t = n_11(h_131, i_131, g_131, t);
      _fail(t);
    }
  else
    {
      ATerm l_131 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_131 = ATgetFirst((ATermList) t);
          f_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_131;
      t = c_0(t);
      t = term_t_16;
      t = d_0(t);
      l_131 = t;
      t = (ATerm) ATinsert(CheckATermList(f_131), l_131);
    }
  return(t);
}
ATerm k_14 (ATerm t)
{
  ATerm n_131 = NULL;
  n_131 = t;
  if(match_string(t, "-o"))
    {
      t = n_131;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_131;
    }
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL;
  o_131 = t;
  t = term_x_37;
  p_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_37, o_131);
  t = p_11(p_131, o_131, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_131);
  return(t);
}
ATerm m_14 (ATerm t)
{
  t = term_y_37;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_14, l_14, m_14, t);
  return(t);
}
ATerm n_11 (ATerm b_44, ATerm c_44, ATerm a_44, ATerm t)
{
  ATerm s_131 = NULL,t_131 = NULL,u_131 = NULL;
  s_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_44, c_44);
  {
    ATerm z_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_38 = ATgetArgument(t, 0);
            ATerm c_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_44, c_44);
        t = m_11(b_44, c_44, t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = z_37;
        t = (ATerm) ATempty;
      }
    t_131 = t;
    t = (ATerm) ATinsert(CheckATermList(t_131), a_44);
    u_131 = t;
    t = SSL_table_put(b_44, c_44, u_131);
    t = s_131;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm b_132 = NULL,c_132 = NULL,d_132 = NULL,e_132 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_132 = NULL,g_132 = NULL,h_132 = NULL;
      t = term_t_16;
      t = l_0(t);
      f_132 = t;
      t = term_u_37;
      g_132 = t;
      t = term_v_37;
      h_132 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_37, term_v_37, f_132);
      t = n_11(g_132, h_132, f_132, t);
      _fail(t);
    }
  else
    {
      ATerm m_132 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_132 = ATgetFirst((ATermList) t);
          c_132 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_132;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_132 = ATgetFirst((ATermList) t);
          e_132 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_132;
      t = j_0(t);
      t = d_132;
      t = k_0(t);
      m_132 = t;
      t = (ATerm) ATinsert(CheckATermList(e_132), m_132);
    }
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm o_132 = NULL;
  o_132 = t;
  if(match_string(t, "-i"))
    {
      t = o_132;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_132;
    }
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm p_132 = NULL,q_132 = NULL;
  p_132 = t;
  t = term_d_38;
  q_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_38, p_132);
  t = p_11(q_132, p_132, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_132);
  return(t);
}
ATerm p_14 (ATerm t)
{
  t = term_g_38;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_14, o_14, p_14, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_132 = NULL,s_132 = NULL,t_132 = NULL,u_132 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_16;
  t = whoami_0_0(t);
  r_132 = t;
  t = term_u_16;
  t_132 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_38), r_132);
  u_132 = t;
  t = SSL_printnl(t_132, u_132);
  t = term_e_17;
  s_132 = t;
  t = SSL_exit(s_132);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_r_38;
  t = get_config_0_0(t);
  return(t);
}
ATerm k_11 (ATerm f_42, ATerm g_42, ATerm t)
{
  ATerm v_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(f_42, g_42);
      ;
      LocalPopChoice(y_38);
    }
  else
    {
      t = v_38;
      t = SSL_addr(f_42, g_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm t)
{
  ATerm w_132 = NULL,y_132 = NULL,z_132 = NULL;
  w_132 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_132;
      t = l_109(t);
    }
  else
    {
      ATerm c_133 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_132 = ATgetFirst((ATermList) t);
          z_132 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_132;
      t = foldr_2_0(l_109, m_109, t);
      c_133 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_132, c_133);
      t = m_109(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_14 (ATerm t)
{
  t = term_m_28;
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL;
  if(match_cons(t, sym__2))
    {
      o_64 = ATgetArgument(t, 0);
      p_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(o_64, p_64, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_133 = NULL,h_64 = NULL,k_64 = NULL;
  t = times_0_0(t);
  k_64 = t;
  t = SSL_explode_term(k_64);
  if(match_cons(t, sym__2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      h_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_64;
  t = foldr_2_0(q_14, r_14, t);
  f_133 = t;
  t = SSL_TicksToSeconds(f_133);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_133 = NULL,r_133 = NULL,t_133 = NULL;
  q_133 = t;
  if(match_cons(t, sym__2))
    {
      r_133 = ATgetArgument(t, 0);
      t_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_133;
        if((r_133 != t))
          {
            _fail(t);
          }
        t = q_133;
        ;
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
        t = (ATerm) ATmakeAppl(sym__2, r_133, t_133);
        {
          ATerm f_39 = t;
          int g_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_133, t_133);
              ;
              LocalPopChoice(g_39);
            }
          else
            {
              t = f_39;
              t = SSL_gtr(r_133, t_133);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_133, t_133);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm t_121 (ATerm), ATerm t)
{
  ATerm x_133 = NULL;
  x_133 = t;
  {
    ATerm h_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_133 = NULL;
        t = term_v_36;
        t = get_config_0_0(t);
        z_133 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_133, term_e_17);
        t = geq_0_0(t);
        t = x_133;
        t = t_121(t);
        ;
        LocalPopChoice(i_39);
      }
    else
      {
        t = h_39;
        t = x_133;
      }
  }
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm b_134 = NULL,c_134 = NULL,f_134 = NULL,g_134 = NULL;
  t = run_time_0_0(t);
  b_134 = t;
  t = term_t_16;
  t = whoami_0_0(t);
  c_134 = t;
  t = term_u_16;
  f_134 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_39), b_134), term_k_39), c_134);
  g_134 = t;
  t = SSL_printnl(f_134, g_134);
  t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_39), b_134), term_k_39), c_134));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_14, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_134 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_28;
  h_134 = t;
  t = SSL_exit(h_134);
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm p_134 = NULL,q_134 = NULL;
  q_134 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_134;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_134 = ATgetArgument(t, 0);
          {
            ATerm j_65 = NULL,y_12 = NULL;
            t = SSLgetAnnotations(q_134);
            j_65 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_134);
            y_12 = t;
            t = SSLsetAnnotations(y_12, j_65);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_134;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm j_124 (ATerm), ATerm t)
{
  ATerm o_39 = t;
  int p_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_39);
    }
  else
    {
      t = o_39;
      t = fetch_1_0(t_14, t);
    }
  t = j_124(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm t_134 = NULL,u_134 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_134 = ATgetFirst((ATermList) t);
      u_134 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_134 = NULL,a_135 = NULL;
        ATerm z_14 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_134)), not_null(a_135));
          return(t);
        }
        t = u_134;
        t = i_0(t);
        if(((y_134 != NULL) && (y_134 != t)))
          _fail(t);
        else
          y_134 = t;
        t = t_134;
        t = g_0(t);
        if(((a_135 != NULL) && (a_135 != t)))
          _fail(t);
        else
          a_135 = t;
        t = u_134;
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
ATerm m_11 (ATerm s_45, ATerm t_45, ATerm t)
{
  t = SSL_table_get(s_45, t_45);
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm e_135 = NULL,f_135 = NULL,g_135 = NULL,a_13 = NULL;
  g_135 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_135);
  e_135 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_135);
  a_13 = t;
  t = SSLsetAnnotations(a_13, e_135);
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm i_135 = NULL;
  i_135 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_135), term_r_39);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_135 = NULL,d_135 = NULL;
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_38;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_39);
    }
  else
    {
      t = s_39;
      t = fetch_1_0(a_15, t);
    }
  t = term_u_39;
  t = echo_0_0(t);
  t = term_u_37;
  c_135 = t;
  t = term_v_37;
  d_135 = t;
  t = term_v_39;
  t = m_11(c_135, d_135, t);
  t = reverse_acc_2_0(_id, c_15, t);
  t = map_1_0(d_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_135 = NULL,m_135 = NULL,n_135 = NULL;
  k_135 = t;
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_135;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_39 = ATgetFirst((ATermList) t);
                ATerm z_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_135;
          }
        ;
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        t = (ATerm) ATinsert(ATempty, k_135);
      }
    m_135 = t;
    t = term_y_34;
    n_135 = t;
    t = SSL_printnl(n_135, m_135);
    t = k_135;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_r_38;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm e_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm r_135 = NULL,s_135 = NULL;
  t = term_a_40;
  r_135 = t;
  t = term_t_16;
  s_135 = t;
  t = term_b_40;
  t = p_11(r_135, s_135, t);
  return(t);
}
ATerm g_15 (ATerm t)
{
  t = term_c_40;
  return(t);
}
ATerm h_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm t_135 = NULL,u_135 = NULL,v_135 = NULL,w_135 = NULL;
  t = term_a_40;
  v_135 = t;
  t = term_t_16;
  w_135 = t;
  t = term_b_40;
  t = p_11(v_135, w_135, t);
  t = term_e_40;
  t_135 = t;
  t = term_t_16;
  u_135 = t;
  t = term_f_40;
  t = p_11(t_135, u_135, t);
  t = term_g_40;
  return(t);
}
ATerm k_15 (ATerm t)
{
  t = term_j_40;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_40 = t;
  int n_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_15, f_15, g_15, t);
      ;
      LocalPopChoice(n_40);
    }
  else
    {
      t = l_40;
      t = Option_3_0(h_15, i_15, k_15, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_81 (ATerm), ATerm l_81 (ATerm), ATerm t)
{
  ATerm x_135 = NULL,y_135 = NULL,z_135 = NULL,a_136 = NULL,b_136 = NULL,c_136 = NULL,e_13 = NULL;
  c_136 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_135 = ATgetFirst((ATermList) t);
      z_135 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_136);
  x_135 = t;
  t = y_135;
  t = k_81(t);
  a_136 = t;
  t = z_135;
  t = l_81(t);
  b_136 = t;
  t = (ATerm) ATinsert(CheckATermList(b_136), a_136);
  e_13 = t;
  t = SSLsetAnnotations(e_13, x_135);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm h_136 = NULL,i_136 = NULL,j_136 = NULL,k_136 = NULL,m_136 = NULL,n_136 = NULL,g_13 = NULL;
  h_136 = t;
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_v_40;
        t = m_126(t);
        ;
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
      }
    t = h_136;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_136 = ATgetFirst((ATermList) t);
        k_136 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(h_136);
    i_136 = t;
    t = term_r_38;
    n_136 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_r_38, j_136);
    t = p_11(n_136, j_136, t);
    t = k_136;
    {
      ATerm x_136 (ATerm t)
      {
        ATerm w_40 = t;
        int x_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_40 = t;
            int z_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_136 = NULL;
                q_136 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_136;
                ;
                LocalPopChoice(z_40);
              }
            else
              {
                t = y_40;
                t = m_126(t);
                t = Cons_2_0(_id, x_136, t);
              }
            ;
            LocalPopChoice(x_40);
          }
        else
          {
            t = w_40;
            {
              ATerm t_136 = NULL,u_136 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_136 = ATgetFirst((ATermList) t);
                  u_136 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(u_136), (ATerm) ATmakeAppl(sym_Undefined_1, t_136));
            }
          }
        return(t);
      }
      t = x_136(t);
      m_136 = t;
      t = (ATerm) ATinsert(CheckATermList(m_136), (ATerm) ATmakeAppl(sym_Program_1, j_136));
      g_13 = t;
      t = SSLsetAnnotations(g_13, i_136);
    }
  }
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm j_137 = NULL;
  j_137 = t;
  if(match_string(t, "--help"))
    {
      t = j_137;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_137;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_137;
        }
    }
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm k_137 = NULL,l_137 = NULL;
  t = term_q_39;
  k_137 = t;
  t = term_t_16;
  l_137 = t;
  t = term_a_41;
  t = p_11(k_137, l_137, t);
  t = term_b_41;
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = term_c_41;
  return(t);
}
ATerm p_15 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm l_126 (ATerm), ATerm t)
{
  ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL,f_137 = NULL,g_137 = NULL,h_137 = NULL,i_137 = NULL;
  e_137 = t;
  t = term_u_37;
  g_137 = t;
  t = term_v_37;
  h_137 = t;
  t = (ATerm) ATempty;
  i_137 = t;
  t = SSL_table_put(g_137, h_137, i_137);
  t = e_137;
  {
    ATerm l_15 (ATerm t)
    {
      ATerm d_41 = t;
      int e_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_126(t);
          ;
          LocalPopChoice(e_41);
        }
      else
        {
          t = d_41;
          {
            ATerm f_41 = t;
            int g_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_15, n_15, o_15, t);
                ;
                LocalPopChoice(g_41);
              }
            else
              {
                t = f_41;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_15, t);
    {
      ATerm i_41 = t;
      int j_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_137 = NULL;
          s_137 = t;
          {
            ATerm k_41 = t;
            int l_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_65 = NULL;
                t = s_137;
                {
                  ATerm t_41 = t;
                  int y_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_q_39;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_41);
                    }
                  else
                    {
                      t = t_41;
                      t = fetch_1_0(p_15, t);
                    }
                  t = s_137;
                  t = default_system_usage_0_0(t);
                  t = term_m_28;
                  s_65 = t;
                  t = SSL_exit(s_65);
                }
                ;
                LocalPopChoice(l_41);
              }
            else
              {
                t = k_41;
                {
                  ATerm w_65 = NULL;
                  t = term_a_40;
                  t = get_config_0_0(t);
                  t = s_137;
                  t = default_system_about_0_0(t);
                  t = term_m_28;
                  w_65 = t;
                  t = SSL_exit(w_65);
                }
              }
          }
          ;
          LocalPopChoice(j_41);
        }
      else
        {
          t = i_41;
          {
            ATerm z_41 = t;
            int a_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_137 = NULL,u_137 = NULL,v_137 = NULL;
                ATerm q_15 (ATerm t)
                {
                  ATerm w_137 = NULL,x_137 = NULL,y_137 = NULL,m_13 = NULL;
                  y_137 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      x_137 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_137);
                  w_137 = t;
                  t = x_137;
                  if(((c_137 != NULL) && (c_137 != t)))
                    _fail(t);
                  else
                    c_137 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_137);
                  m_13 = t;
                  t = SSLsetAnnotations(m_13, w_137);
                  return(t);
                }
                t = fetch_1_0(q_15, t);
                t = term_u_16;
                u_137 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_137)), term_e_42);
                v_137 = t;
                t = SSL_printnl(u_137, v_137);
                t = (ATerm) ATmakeAppl(sym__2, term_u_16, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_137)), term_e_42));
                t = default_system_usage_0_0(t);
                t = term_e_17;
                t_137 = t;
                t = SSL_exit(t_137);
                ;
                LocalPopChoice(a_42);
              }
            else
              {
                t = z_41;
              }
          }
        }
      d_137 = t;
      t = term_u_37;
      f_137 = t;
      t = SSL_table_destroy(f_137);
      t = d_137;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm o_124 (ATerm), ATerm t)
{
  ATerm d_138 = NULL,e_138 = NULL,f_138 = NULL,g_138 = NULL;
  t = parse_options_1_0(l_124, t);
  d_138 = t;
  t = term_h_42;
  g_138 = t;
  t = SSL_table_create(g_138);
  t = term_h_42;
  e_138 = t;
  t = term_i_42;
  f_138 = t;
  t = SSL_table_put(e_138, f_138, d_138);
  t = d_138;
  t = n_124(t);
  {
    ATerm j_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(m_124, t);
        ;
        LocalPopChoice(l_42);
      }
    else
      {
        t = j_42;
        {
          ATerm m_42 = t;
          int n_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_124(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_42);
            }
          else
            {
              t = m_42;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_16 (ATerm t)
{
  t = if_verbose2_1_0(h_16, t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm h_138 = NULL,i_138 = NULL;
  t = term_o_42;
  h_138 = t;
  t = term_t_16;
  i_138 = t;
  t = term_q_42;
  t = p_11(h_138, i_138, t);
  t = term_s_42;
  return(t);
}
ATerm g_16 (ATerm t)
{
  t = term_v_42;
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm j_138 = NULL,k_138 = NULL,l_138 = NULL,m_138 = NULL;
  j_138 = t;
  t = term_r_38;
  t = get_config_0_0(t);
  k_138 = t;
  t = term_u_16;
  l_138 = t;
  t = (ATerm) ATinsert(ATempty, k_138);
  m_138 = t;
  t = SSL_printnl(l_138, m_138);
  t = j_138;
  return(t);
}
ATerm iowrap_3_0 (ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm w_123 (ATerm), ATerm t)
{
  ATerm z_15 (ATerm t)
  {
    ATerm d_43 = t;
    int e_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_123(t);
        ;
        LocalPopChoice(e_43);
      }
    else
      {
        t = d_43;
        {
          ATerm f_43 = t;
          int g_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_43);
            }
          else
            {
              t = f_43;
              {
                ATerm h_43 = t;
                int j_43 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_43);
                  }
                else
                  {
                    t = h_43;
                    {
                      ATerm l_43 = t;
                      int m_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(e_16, f_16, g_16, t);
                          ;
                          LocalPopChoice(m_43);
                        }
                      else
                        {
                          t = l_43;
                          {
                            ATerm o_43 = t;
                            int p_43 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(p_43);
                              }
                            else
                              {
                                t = o_43;
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
  ATerm b_16 (ATerm t)
  {
    ATerm n_138 = NULL,o_138 = NULL,p_138 = NULL;
    o_138 = t;
    {
      ATerm s_43 = t;
      int u_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((n_138 != NULL) && (n_138 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_138 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_16, t);
          ;
          LocalPopChoice(u_43);
        }
      else
        {
          t = s_43;
          t = term_v_43;
          n_138 = t;
        }
      t = not_null(n_138);
      t = ReadFromFile_0_0(t);
      p_138 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_138, p_138);
      t = apply_strategy_1_0(u_123, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_15, w_123, a_16, b_16, t);
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm v_138 = NULL,w_138 = NULL,x_138 = NULL,y_138 = NULL,z_138 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL,d_139 = NULL,e_139 = NULL,f_139 = NULL,g_139 = NULL,h_139 = NULL,i_139 = NULL,j_139 = NULL,k_139 = NULL,l_139 = NULL,m_139 = NULL,n_139 = NULL,y_13 = NULL,x_13 = NULL,w_13 = NULL,v_13 = NULL,p_13 = NULL;
  n_139 = t;
  if(match_cons(t, sym__2))
    {
      w_138 = ATgetArgument(t, 0);
      x_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_139);
  v_138 = t;
  t = x_138;
  if(match_cons(t, sym_Specification_1))
    {
      z_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_138);
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
  t = (ATerm) ATmakeAppl(sym__2, w_138, a_139);
  y_13 = t;
  t = SSLsetAnnotations(y_13, v_138);
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm e_140 = NULL,f_140 = NULL,g_140 = NULL,h_140 = NULL,i_140 = NULL;
  i_140 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      e_140 = ATgetArgument(t, 0);
      f_140 = ATgetArgument(t, 1);
      g_140 = ATgetArgument(t, 2);
      h_140 = ATgetArgument(t, 3);
      {
        ATerm x_43 = t;
        int d_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_66 = NULL,i_66 = NULL,o_13 = NULL;
            t = SSLgetAnnotations(i_140);
            d_66 = t;
            t = h_140;
            t = topdown_1_0(q_16, t);
            t = match_to_dfa_0_0(t);
            i_66 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, e_140, f_140, g_140, i_66);
            o_13 = t;
            t = SSLsetAnnotations(o_13, d_66);
            ;
            LocalPopChoice(d_44);
          }
        else
          {
            t = x_43;
            t = i_140;
          }
      }
    }
  else
    {
      t = i_140;
    }
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm k_66 = NULL;
  k_66 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm f_44 = t;
      int n_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_66 = NULL;
          t = k_66;
          t = new_0_0(t);
          l_66 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_66), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_66)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_66))));
          ;
          LocalPopChoice(n_44);
        }
      else
        {
          t = f_44;
          t = k_66;
        }
    }
  else
    {
      t = k_66;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_16, _fail, default_usage_0_0, t);
  return(t);
}
