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
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_GenDynRules_1;
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
Symbol sym_DynamicRules_1;
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
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
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
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
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
ATerm term_n_46;
ATerm term_v_45;
ATerm term_t_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_w_44;
ATerm term_h_44;
ATerm term_e_44;
ATerm term_b_44;
ATerm term_y_43;
ATerm term_r_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_c_43;
ATerm term_y_42;
ATerm term_x_42;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_f_41;
ATerm term_e_41;
ATerm term_d_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_q_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_g_40;
ATerm term_b_40;
ATerm term_y_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_r_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_l_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_p_38;
ATerm term_k_38;
ATerm term_d_38;
ATerm term_y_36;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_x_32;
ATerm term_s_32;
ATerm term_p_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_e_32;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_r_24;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Sort_2, term_h_32, (ATerm) ATempty);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_ConstType_1, term_i_32);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym__2, term_l_39, term_n_39);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_39));
  term_r_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym__2, term_n_39, term_p_32);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_32);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym__2, term_w_39, term_c_17);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym__2, term_l_39, term_e_41);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym__2, term_l_39, term_d_42);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(sym__2, term_m_40, term_n_40);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym__2, term_v_42, term_c_17);
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym__2, term_y_42, term_c_17);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym__2, term_d_42, term_c_17);
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym__3, term_m_40, term_n_40, (ATerm) ATempty);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(sym__2, term_l_39, term_v_42);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym__2, term_n_45, term_c_17);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm t_0 (ATerm t);
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
static ATerm u_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm spaste_1_0 (ATerm f_112 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm o_8 (ATerm l_33, ATerm k_33, ATerm t);
ATerm SVar_1_0 (ATerm t_93 (ATerm), ATerm t);
static ATerm p_8 (ATerm i_133 (ATerm), ATerm j_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_60, ATerm v_60, ATerm u_60, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm q_8 (ATerm c_133 (ATerm), ATerm d_133 (ATerm (ATerm), ATerm), ATerm o_60, ATerm r_60, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm q_133 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm x_132 (ATerm (ATerm), ATerm), ATerm y_132 (ATerm), ATerm z_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_133 (ATerm (ATerm), ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm tpaste_1_0 (ATerm b_112 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm q_89 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm t_9 (ATerm i_84, ATerm h_84, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm f_114 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm simple_strategy_0_0 (ATerm t);
static ATerm v_8 (ATerm x_127 (ATerm), ATerm l_57, ATerm k_57, ATerm t);
ATerm tvars_matrix_boundin_3_0 (ATerm q_145 (ATerm), ATerm r_145 (ATerm), ATerm s_145 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm z_8 (ATerm z_127 (ATerm), ATerm n_57, ATerm m_57, ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm b_9 (ATerm v_721, ATerm a_722, ATerm e_73, ATerm t);
ATerm while_not_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm s_119 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm s_100 (ATerm a_99, ATerm b_99, ATerm c_99, ATerm t);
static ATerm x_6 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm free_vars_3_0 (ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm c_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm RowLet_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm d_9 (ATerm e_88, ATerm d_88, ATerm t);
static ATerm e_9 (ATerm u_124 (ATerm), ATerm p_49, ATerm n_49, ATerm t);
static ATerm n_8 (ATerm t);
ATerm default_state_0_0 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm MatchCons_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm g_9 (ATerm b_145 (ATerm), ATerm r_86, ATerm o_86, ATerm p_86, ATerm q_86, ATerm t);
static ATerm h_9 (ATerm k_86, ATerm l_86, ATerm m_86, ATerm t);
ATerm filter_1_0 (ATerm l_132 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm u_126 (ATerm), ATerm t);
static ATerm k_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm ConsArgs_0_0 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm outedges_0_0 (ATerm t);
static ATerm y_112 (ATerm k_111, ATerm t);
ATerm get_path_0_0 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm l_9 (ATerm x_87, ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm n_9 (ATerm n_87, ATerm t);
static ATerm t_10 (ATerm t);
static ATerm p_9 (ATerm l_87, ATerm t);
ATerm repeat_2_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm t);
static ATerm r_9 (ATerm y_50, ATerm z_50, ATerm t);
ATerm end_scope_1_0 (ATerm r_124 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_124 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_126 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_117 (ATerm e_117, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
ATerm MatrixMerge_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm c_113 (ATerm), ATerm t);
static ATerm y_10 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm t_57, ATerm s_57, ATerm t);
static ATerm z_10 (ATerm e_128 (ATerm), ATerm p_57, ATerm o_57, ATerm t);
ATerm foldr_3_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
ATerm collect_om_2_0 (ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t);
ATerm CollectSubst_0_0 (ATerm t);
ATerm IgnoreVar_0_0 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
ATerm CollectSplit_2_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
ATerm nzip0_1_0 (ATerm y_117 (ATerm), ATerm t);
ATerm Propagate_0_0 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm term_to_matrix_0_0 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
ATerm match_to_matrix_0_0 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
ATerm match_to_dfa_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm b_113 (ATerm), ATerm t);
ATerm map_1_0 (ATerm k_125 (ATerm), ATerm t);
static ATerm k_11 (ATerm l_41, ATerm m_41, ATerm t);
static ATerm l_11 (ATerm d_40, ATerm e_40, ATerm t);
static ATerm n_11 (ATerm l_120 (ATerm), ATerm m_279, ATerm j_40, ATerm t);
static ATerm m_11 (ATerm z_39, ATerm a_40, ATerm t);
static ATerm i_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm h_140 (ATerm), ATerm t);
static ATerm k_136 (ATerm e_136, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_11 (ATerm f_40, ATerm t);
static ATerm p_11 (ATerm s_66, ATerm t_66, ATerm t);
static ATerm q_11 (ATerm n_41, ATerm o_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm v_137 (ATerm u_136, ATerm t);
static ATerm w_137 (ATerm y_136, ATerm z_136, ATerm a_137, ATerm t);
static ATerm x_137 (ATerm i_137, ATerm j_137, ATerm k_137, ATerm t);
static ATerm r_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm u_125 (ATerm), ATerm t);
static ATerm w_11 (ATerm m_52, ATerm n_52, ATerm t);
ATerm if_verbose2_1_0 (ATerm c_122 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm f_15 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_11 (ATerm j_45, ATerm k_45, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm g_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm l_15 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_11 (ATerm t_50, ATerm u_50, ATerm s_50, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm t_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_11 (ATerm b_48, ATerm c_48, ATerm t);
ATerm foldr_2_0 (ATerm h_131 (ATerm), ATerm i_131 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_122 (ATerm), ATerm t);
static ATerm w_15 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm need_help_1_0 (ATerm f_141 (ATerm), ATerm t);
static ATerm a_12 (ATerm l_54, ATerm m_54, ATerm n_54, ATerm t);
static ATerm b_12 (ATerm o_54, ATerm p_54, ATerm t);
ATerm lookup_table_0_1 (ATerm f_52, ATerm t);
ATerm new_hashtable_0_2 (ATerm t_54, ATerm u_54, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_11 (ATerm q_54, ATerm r_54, ATerm t);
static ATerm v_11 (ATerm v_54, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_143 (ATerm), ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
ATerm parse_options_1_0 (ATerm h_143 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_141 (ATerm), ATerm i_141 (ATerm), ATerm j_141 (ATerm), ATerm k_141 (ATerm), ATerm t);
static ATerm s_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
ATerm iowrap_3_0 (ATerm q_140 (ATerm), ATerm r_140 (ATerm), ATerm s_140 (ATerm), ATerm t);
static ATerm z_16 (ATerm t);
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
  ATerm a_0 = NULL,b_0 = NULL,m_0 = NULL,q_0 = NULL,s_0 = NULL;
  a_0 = t;
  t = term_c_17;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_d_17;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_17), b_0), term_e_17);
  s_0 = t;
  t = SSL_printnl(q_0, s_0);
  t = term_h_17;
  m_0 = t;
  t = SSL_exit(m_0);
  t = a_0;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_17 = ATgetArgument(t, 0);
      if(((ATgetType(i_17) != AT_LIST) || !(ATisEmpty(i_17))))
        _fail(t);
      {
        ATerm j_17 = ATgetArgument(t, 1);
        if(((ATgetType(j_17) != AT_LIST) || !(ATisEmpty(j_17))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_17 = ATgetArgument(t, 0);
      if(((ATgetType(k_17) == AT_LIST) && !(ATisEmpty(k_17))))
        {
          a_1 = ATgetFirst((ATermList) k_17);
          b_1 = (ATerm) ATgetNext((ATermList) k_17);
        }
      else
        _fail(t);
      {
        ATerm l_17 = ATgetArgument(t, 1);
        if(((ATgetType(l_17) == AT_LIST) && !(ATisEmpty(l_17))))
          {
            c_1 = ATgetFirst((ATermList) l_17);
            d_1 = (ATerm) ATgetNext((ATermList) l_17);
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
static ATerm t_0 (ATerm t)
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
    ATerm m_17 = t;
    int n_17 = stack_ptr;
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
        LocalPopChoice(n_17);
        t = (ATerm) ATmakeAppl(sym_SDef_3, m_1, j_1, k_1);
      }
    else
      {
        t = m_17;
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
      ATerm t_17 = ATgetArgument(t, 0);
      if(((ATgetType(t_17) != AT_LIST) || !(ATisEmpty(t_17))))
        _fail(t);
      {
        ATerm v_17 = ATgetArgument(t, 1);
        if(((ATgetType(v_17) != AT_LIST) || !(ATisEmpty(v_17))))
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
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_17 = ATgetArgument(t, 0);
      if(((ATgetType(w_17) == AT_LIST) && !(ATisEmpty(w_17))))
        {
          x_4 = ATgetFirst((ATermList) w_17);
          y_4 = (ATerm) ATgetNext((ATermList) w_17);
        }
      else
        _fail(t);
      {
        ATerm x_17 = ATgetArgument(t, 1);
        if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
          {
            z_4 = ATgetFirst((ATermList) x_17);
            a_5 = (ATerm) ATgetNext((ATermList) x_17);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_4, z_4), (ATerm) ATmakeAppl(sym__2, y_4, a_5));
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
  ATerm e_5 = NULL,h_5 = NULL,i_5 = NULL;
  if(match_cons(t, sym__2))
    {
      e_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5;
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm a_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_17);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_5);
      }
    else
      {
        t = y_17;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_18 = ATgetArgument(t, 0);
            h_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_5, h_5);
      }
  }
  return(t);
}
static ATerm n_1 (ATerm t)
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
static ATerm o_1 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL,g_7 = NULL,h_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_18 = ATgetArgument(t, 0);
      if(((ATgetType(e_18) == AT_LIST) && !(ATisEmpty(e_18))))
        {
          y_6 = ATgetFirst((ATermList) e_18);
          z_6 = (ATerm) ATgetNext((ATermList) e_18);
        }
      else
        _fail(t);
      {
        ATerm f_18 = ATgetArgument(t, 1);
        if(((ATgetType(f_18) == AT_LIST) && !(ATisEmpty(f_18))))
          {
            g_7 = ATgetFirst((ATermList) f_18);
            h_7 = (ATerm) ATgetNext((ATermList) f_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_6, g_7), (ATerm) ATmakeAppl(sym__2, z_6, h_7));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm k_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_7), k_7);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm r_7 = NULL,v_7 = NULL,w_7 = NULL;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_7);
      }
    else
      {
        t = g_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_18 = ATgetArgument(t, 0);
            v_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_7, v_7);
      }
  }
  return(t);
}
static ATerm r_1 (ATerm t)
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
static ATerm u_1 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_18 = ATgetArgument(t, 0);
      if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
        {
          e_10 = ATgetFirst((ATermList) m_18);
          f_10 = (ATerm) ATgetNext((ATermList) m_18);
        }
      else
        _fail(t);
      {
        ATerm n_18 = ATgetArgument(t, 1);
        if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
          {
            g_10 = ATgetFirst((ATermList) n_18);
            h_10 = (ATerm) ATgetNext((ATermList) n_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_10, g_10), (ATerm) ATmakeAppl(sym__2, f_10, h_10));
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL;
  if(match_cons(t, sym__2))
    {
      i_10 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_10), i_10);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm l_10 = NULL,o_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_10);
      }
    else
      {
        t = o_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_18 = ATgetArgument(t, 0);
            o_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_10, o_10);
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
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
static ATerm c_2 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
        {
          d_12 = ATgetFirst((ATermList) u_18);
          e_12 = (ATerm) ATgetNext((ATermList) u_18);
        }
      else
        _fail(t);
      {
        ATerm v_18 = ATgetArgument(t, 1);
        if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
          {
            f_12 = ATgetFirst((ATermList) v_18);
            g_12 = (ATerm) ATgetNext((ATermList) v_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_12, f_12), (ATerm) ATmakeAppl(sym__2, e_12, g_12));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL;
  if(match_cons(t, sym__2))
    {
      h_12 = ATgetArgument(t, 0);
      i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_12), h_12);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm l_12 = NULL,o_12 = NULL,r_12 = NULL;
  if(match_cons(t, sym__2))
    {
      l_12 = ATgetArgument(t, 0);
      r_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12;
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_12);
      }
    else
      {
        t = w_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            o_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_12, o_12);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
      {
        ATerm u_0 = NULL,x_0 = NULL,y_0 = NULL,s_1 = NULL;
        t = SSLgetAnnotations(r_13);
        u_0 = t;
        t = s_13;
        t = f_112(t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_13, y_0);
        t = genzip_4_0(f_0, j_0, t_0, v_0, t);
        x_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_0, t_13);
        s_1 = t;
        t = SSLsetAnnotations(s_1, u_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          s_13 = ATgetArgument(t, 0);
          t_13 = ATgetArgument(t, 1);
          q_13 = ATgetArgument(t, 2);
          {
            ATerm v_2 = NULL,p_4 = NULL,s_4 = NULL,t_1 = NULL;
            t = SSLgetAnnotations(r_13);
            v_2 = t;
            t = t_13;
            t = f_112(t);
            s_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_13, s_4);
            t = genzip_4_0(w_0, z_0, g_1, i_1, t);
            p_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, s_13, p_4, q_13);
            t_1 = t;
            t = SSLsetAnnotations(t_1, v_2);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              s_13 = ATgetArgument(t, 0);
              t_13 = ATgetArgument(t, 1);
              q_13 = ATgetArgument(t, 2);
              p_13 = ATgetArgument(t, 3);
              {
                ATerm e_6 = NULL,u_6 = NULL,w_6 = NULL,v_1 = NULL;
                t = SSLgetAnnotations(r_13);
                e_6 = t;
                t = t_13;
                t = f_112(t);
                w_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_13, w_6);
                t = genzip_4_0(n_1, o_1, p_1, q_1, t);
                u_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_13, u_6, q_13, p_13);
                v_1 = t;
                t = SSLsetAnnotations(v_1, e_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  s_13 = ATgetArgument(t, 0);
                  t_13 = ATgetArgument(t, 1);
                  q_13 = ATgetArgument(t, 2);
                  p_13 = ATgetArgument(t, 3);
                  {
                    ATerm u_8 = NULL,a_10 = NULL,b_10 = NULL,w_1 = NULL;
                    t = SSLgetAnnotations(r_13);
                    u_8 = t;
                    t = t_13;
                    t = f_112(t);
                    b_10 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_13, b_10);
                    t = genzip_4_0(r_1, u_1, y_1, a_2, t);
                    a_10 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, s_13, a_10, q_13, p_13);
                    w_1 = t;
                    t = SSLsetAnnotations(w_1, u_8);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      s_13 = ATgetArgument(t, 0);
                      t_13 = ATgetArgument(t, 1);
                      q_13 = ATgetArgument(t, 2);
                      {
                        ATerm f_11 = NULL,j_11 = NULL,y_11 = NULL,x_1 = NULL;
                        t = SSLgetAnnotations(r_13);
                        f_11 = t;
                        t = t_13;
                        t = f_112(t);
                        y_11 = t;
                        t = (ATerm) ATmakeAppl(sym__2, t_13, y_11);
                        t = genzip_4_0(b_2, c_2, d_2, e_2, t);
                        j_11 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, s_13, j_11, q_13);
                        x_1 = t;
                        t = SSLsetAnnotations(x_1, f_11);
                      }
                    }
                  else
                    {
                      ATerm c_13 = NULL,n_13 = NULL,z_1 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          s_13 = ATgetArgument(t, 0);
                          t_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(r_13);
                      c_13 = t;
                      t = s_13;
                      t = f_112(t);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          n_13 = ATgetFirst((ATermList) t);
                          {
                            ATerm d_19 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Rec_2, n_13, t_13);
                      z_1 = t;
                      t = SSLsetAnnotations(z_1, c_13);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,f_19 = NULL,g_19 = NULL,j_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
      {
        ATerm g_14 = NULL,j_14 = NULL,k_14 = NULL,h_2 = NULL;
        t = SSLgetAnnotations(f_19);
        g_14 = t;
        t = g_19;
        t = g_112(t);
        j_14 = t;
        t = j_19;
        t = g_112(t);
        k_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_14, k_14);
        h_2 = t;
        t = SSLsetAnnotations(h_2, g_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_19 = ATgetArgument(t, 0);
          j_19 = ATgetArgument(t, 1);
          b_19 = ATgetArgument(t, 2);
          {
            ATerm m_15 = NULL,y_15 = NULL,e_16 = NULL,g_16 = NULL,k_2 = NULL;
            t = SSLgetAnnotations(f_19);
            m_15 = t;
            t = g_19;
            t = i_112(t);
            y_15 = t;
            t = j_19;
            t = i_112(t);
            e_16 = t;
            t = b_19;
            t = g_112(t);
            g_16 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_15, e_16, g_16);
            k_2 = t;
            t = SSLsetAnnotations(k_2, m_15);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              g_19 = ATgetArgument(t, 0);
              j_19 = ATgetArgument(t, 1);
              b_19 = ATgetArgument(t, 2);
              a_19 = ATgetArgument(t, 3);
              {
                ATerm f_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,u_17 = NULL,l_2 = NULL;
                t = SSLgetAnnotations(f_19);
                f_17 = t;
                t = g_19;
                t = i_112(t);
                q_17 = t;
                t = j_19;
                t = i_112(t);
                r_17 = t;
                t = b_19;
                t = i_112(t);
                s_17 = t;
                t = a_19;
                t = g_112(t);
                u_17 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_17, r_17, s_17, u_17);
                l_2 = t;
                t = SSLsetAnnotations(l_2, f_17);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  g_19 = ATgetArgument(t, 0);
                  j_19 = ATgetArgument(t, 1);
                  b_19 = ATgetArgument(t, 2);
                  a_19 = ATgetArgument(t, 3);
                  {
                    ATerm y_18 = NULL,h_19 = NULL,i_19 = NULL,k_19 = NULL,l_19 = NULL,m_2 = NULL;
                    t = SSLgetAnnotations(f_19);
                    y_18 = t;
                    t = g_19;
                    t = i_112(t);
                    h_19 = t;
                    t = j_19;
                    t = i_112(t);
                    i_19 = t;
                    t = b_19;
                    t = i_112(t);
                    k_19 = t;
                    t = a_19;
                    t = g_112(t);
                    l_19 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, h_19, i_19, k_19, l_19);
                    m_2 = t;
                    t = SSLsetAnnotations(m_2, y_18);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      g_19 = ATgetArgument(t, 0);
                      j_19 = ATgetArgument(t, 1);
                      b_19 = ATgetArgument(t, 2);
                      {
                        ATerm a_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,n_2 = NULL;
                        t = SSLgetAnnotations(f_19);
                        a_20 = t;
                        t = g_19;
                        t = i_112(t);
                        g_20 = t;
                        t = j_19;
                        t = i_112(t);
                        h_20 = t;
                        t = b_19;
                        t = i_112(t);
                        i_20 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, g_20, h_20, i_20);
                        n_2 = t;
                        t = SSLsetAnnotations(n_2, a_20);
                      }
                    }
                  else
                    {
                      ATerm e_21 = NULL,l_21 = NULL,m_21 = NULL,o_2 = NULL;
                      if(match_cons(t, sym_Rec_2))
                        {
                          g_19 = ATgetArgument(t, 0);
                          j_19 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(f_19);
                      e_21 = t;
                      t = g_19;
                      t = i_112(t);
                      l_21 = t;
                      t = j_19;
                      t = g_112(t);
                      m_21 = t;
                      t = (ATerm) ATmakeAppl(sym_Rec_2, l_21, m_21);
                      o_2 = t;
                      t = SSLsetAnnotations(o_2, e_21);
                    }
                }
            }
        }
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm y_20 = NULL;
  ATerm e_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_20 = ATgetArgument(t, 0);
          {
            ATerm n_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_19);
      t = y_20;
    }
  else
    {
      t = e_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_20 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_20;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm h_21 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_21 = ATgetArgument(t, 0);
          {
            ATerm q_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_19);
      t = h_21;
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_21;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm o_20 = NULL;
  ATerm r_19 = t;
  int s_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_19 = ATgetArgument(t, 0);
          o_20 = ATgetArgument(t, 1);
          {
            ATerm u_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_19);
      t = o_20;
      t = map_1_0(f_2, t);
    }
  else
    {
      t = r_19;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm v_19 = ATgetArgument(t, 0);
          o_20 = ATgetArgument(t, 1);
          {
            ATerm w_19 = ATgetArgument(t, 2);
          }
          {
            ATerm x_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = o_20;
      t = map_1_0(g_2, t);
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm q_21 = NULL;
  ATerm y_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_21 = ATgetArgument(t, 0);
          {
            ATerm b_20 = ATgetArgument(t, 1);
          }
          {
            ATerm c_20 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_19);
      t = q_21;
    }
  else
    {
      t = y_19;
      if(match_cons(t, sym_SDefT_4))
        {
          q_21 = ATgetArgument(t, 0);
          {
            ATerm d_20 = ATgetArgument(t, 1);
          }
          {
            ATerm e_20 = ATgetArgument(t, 2);
          }
          {
            ATerm f_20 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_21;
    }
  return(t);
}
static ATerm o_8 (ATerm l_33, ATerm k_33, ATerm t)
{
  t = l_33;
  t = map_1_0(i_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm t_93 (ATerm), ATerm t)
{
  ATerm z_21 = NULL,b_22 = NULL,c_22 = NULL,f_22 = NULL,b_3 = NULL;
  f_22 = t;
  if(match_cons(t, sym_SVar_1))
    {
      b_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_22);
  z_21 = t;
  t = b_22;
  t = t_93(t);
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, c_22);
  b_3 = t;
  t = SSLsetAnnotations(b_3, z_21);
  return(t);
}
static ATerm p_8 (ATerm i_133 (ATerm), ATerm j_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_60, ATerm v_60, ATerm u_60, ATerm t)
{
  static ATerm j_2 (ATerm t)
  {
    ATerm l_22 = NULL;
    l_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_22, u_60);
    t = i_133(t);
    return(t);
  }
  static ATerm p_2 (ATerm t)
  {
    ATerm o_22 = NULL;
    o_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_22, v_60);
    t = i_133(t);
    return(t);
  }
  t = w_60;
  t = j_133(j_2, p_2, _id, t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_20 = ATgetArgument(t, 0);
      if(((ATgetType(j_20) != AT_LIST) || !(ATisEmpty(j_20))))
        _fail(t);
      {
        ATerm k_20 = ATgetArgument(t, 1);
        if(((ATgetType(k_20) != AT_LIST) || !(ATisEmpty(k_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm q_24 = NULL,t_24 = NULL,z_24 = NULL,d_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      if(((ATgetType(l_20) == AT_LIST) && !(ATisEmpty(l_20))))
        {
          q_24 = ATgetFirst((ATermList) l_20);
          t_24 = (ATerm) ATgetNext((ATermList) l_20);
        }
      else
        _fail(t);
      {
        ATerm m_20 = ATgetArgument(t, 1);
        if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
          {
            z_24 = ATgetFirst((ATermList) m_20);
            d_25 = (ATerm) ATgetNext((ATermList) m_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_24, z_24), (ATerm) ATmakeAppl(sym__2, t_24, d_25));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm f_25 = NULL,h_25 = NULL;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      h_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_25), f_25);
  return(t);
}
static ATerm q_8 (ATerm c_133 (ATerm), ATerm d_133 (ATerm (ATerm), ATerm), ATerm o_60, ATerm r_60, ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,h_24 = NULL,n_24 = NULL,p_24 = NULL;
  t = o_60;
  t = c_133(t);
  s_23 = t;
  t = map_1_0(new_0_0, t);
  t_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_23, t_23);
  t = genzip_4_0(q_2, r_2, s_2, _id, t);
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_24, r_60);
  t = conc_0_0(t);
  h_24 = t;
  t = o_60;
  {
    static ATerm t_2 (ATerm t)
    {
      t = t_23;
      return(t);
    }
    t = d_133(t_2, t);
  }
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_24, r_60, h_24);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,t_25 = NULL,y_25 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL;
  t_25 = t;
  if(match_cons(t, sym__2))
    {
      y_25 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_26 = ATgetFirst((ATermList) t);
      e_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_26;
  if(match_cons(t, sym__2))
    {
      m_25 = ATgetArgument(t, 0);
      n_25 = ATgetArgument(t, 1);
      {
        ATerm n_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_25;
            if((y_25 != t))
              {
                _fail(t);
              }
            t = n_25;
            LocalPopChoice(p_20);
          }
        else
          {
            t = n_20;
            t = (ATerm) ATmakeAppl(sym__2, y_25, e_26);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, y_25, e_26);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm q_133 (ATerm), ATerm t)
{
  static ATerm r_27 (ATerm t)
  {
    ATerm q_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_133(t);
        LocalPopChoice(r_20);
      }
    else
      {
        t = q_20;
        {
          ATerm m_27 = NULL,p_27 = NULL,q_27 = NULL;
          static ATerm u_2 (ATerm t)
          {
            ATerm h_22 = NULL;
            h_22 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_22, not_null(q_27));
            t = r_27(t);
            return(t);
          }
          m_27 = t;
          if(match_cons(t, sym__2))
            {
              p_27 = ATgetArgument(t, 0);
              if(((q_27 != NULL) && (q_27 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                q_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_27;
          t = SRTS_all(u_2, t);
        }
      }
    return(t);
  }
  t = r_27(t);
  return(t);
}
ATerm rename_4_0 (ATerm x_132 (ATerm (ATerm), ATerm), ATerm y_132 (ATerm), ATerm z_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_133 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm z_27 = NULL;
  static ATerm u_28 (ATerm t)
  {
    static ATerm w_2 (ATerm t)
    {
      ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
      o_28 = t;
      if(match_cons(t, sym__2))
        {
          p_28 = ATgetArgument(t, 0);
          q_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_2 (ATerm t)
            {
              ATerm t_28 = NULL;
              t_28 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_28, q_28);
              t = lookup_0_0(t);
              return(t);
            }
            t = p_28;
            t = x_132(x_2, t);
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL;
              t = o_28;
              t = q_8(y_132, a_133, p_28, q_28, t);
              if(match_cons(t, sym__3))
                {
                  q_22 = ATgetArgument(t, 0);
                  r_22 = ATgetArgument(t, 1);
                  s_22 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = p_8(u_28, z_132, q_22, r_22, s_22, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(w_2, t);
    return(t);
  }
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_27, (ATerm) ATempty);
  t = u_28(t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      if(((ATgetType(u_20) != AT_LIST) || !(ATisEmpty(u_20))))
        _fail(t);
      {
        ATerm v_20 = ATgetArgument(t, 1);
        if(((ATgetType(v_20) != AT_LIST) || !(ATisEmpty(v_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_20 = ATgetArgument(t, 0);
      if(((ATgetType(w_20) == AT_LIST) && !(ATisEmpty(w_20))))
        {
          x_23 = ATgetFirst((ATermList) w_20);
          y_23 = (ATerm) ATgetNext((ATermList) w_20);
        }
      else
        _fail(t);
      {
        ATerm x_20 = ATgetArgument(t, 1);
        if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
          {
            z_23 = ATgetFirst((ATermList) x_20);
            a_24 = (ATerm) ATgetNext((ATermList) x_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_23, z_23), (ATerm) ATmakeAppl(sym__2, y_23, a_24));
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  if(match_cons(t, sym__2))
    {
      b_24 = ATgetArgument(t, 0);
      c_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_24), b_24);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm e_24 = NULL,g_24 = NULL,i_24 = NULL;
  if(match_cons(t, sym__2))
    {
      e_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_24;
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_24);
      }
    else
      {
        t = z_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_21 = ATgetArgument(t, 0);
            g_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_24, g_24);
      }
  }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      if(((ATgetType(d_21) != AT_LIST) || !(ATisEmpty(d_21))))
        _fail(t);
      {
        ATerm f_21 = ATgetArgument(t, 1);
        if(((ATgetType(f_21) != AT_LIST) || !(ATisEmpty(f_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
        {
          p_25 = ATgetFirst((ATermList) g_21);
          q_25 = (ATerm) ATgetNext((ATermList) g_21);
        }
      else
        _fail(t);
      {
        ATerm i_21 = ATgetArgument(t, 1);
        if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
          {
            r_25 = ATgetFirst((ATermList) i_21);
            s_25 = (ATerm) ATgetNext((ATermList) i_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_25, r_25), (ATerm) ATmakeAppl(sym__2, q_25, s_25));
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm u_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym__2))
    {
      u_25 = ATgetArgument(t, 0);
      v_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_25), u_25);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm x_25 = NULL,a_26 = NULL,b_26 = NULL;
  if(match_cons(t, sym__2))
    {
      x_25 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_25;
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_26);
      }
    else
      {
        t = j_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_21 = ATgetArgument(t, 0);
            a_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_26, a_26);
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if(((ATgetType(p_21) != AT_LIST) || !(ATisEmpty(p_21))))
        _fail(t);
      {
        ATerm r_21 = ATgetArgument(t, 1);
        if(((ATgetType(r_21) != AT_LIST) || !(ATisEmpty(r_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
        {
          v_27 = ATgetFirst((ATermList) s_21);
          w_27 = (ATerm) ATgetNext((ATermList) s_21);
        }
      else
        _fail(t);
      {
        ATerm t_21 = ATgetArgument(t, 1);
        if(((ATgetType(t_21) == AT_LIST) && !(ATisEmpty(t_21))))
          {
            x_27 = ATgetFirst((ATermList) t_21);
            y_27 = (ATerm) ATgetNext((ATermList) t_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_27, x_27), (ATerm) ATmakeAppl(sym__2, w_27, y_27));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm b_28 = NULL,d_28 = NULL;
  if(match_cons(t, sym__2))
    {
      b_28 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_28), b_28);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm k_28 = NULL,m_28 = NULL,v_28 = NULL;
  if(match_cons(t, sym__2))
    {
      k_28 = ATgetArgument(t, 0);
      v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_28;
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_28);
      }
    else
      {
        t = u_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_21 = ATgetArgument(t, 0);
            m_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_28, m_28);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL;
  d_36 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_36 = ATgetArgument(t, 0);
      f_36 = ATgetArgument(t, 1);
      {
        ATerm c_23 = NULL,f_23 = NULL,d_3 = NULL;
        t = SSLgetAnnotations(d_36);
        c_23 = t;
        t = e_36;
        t = b_112(t);
        f_23 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_23, f_36);
        d_3 = t;
        t = SSLsetAnnotations(d_3, c_23);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          e_36 = ATgetArgument(t, 0);
          f_36 = ATgetArgument(t, 1);
          g_36 = ATgetArgument(t, 2);
          {
            ATerm o_23 = NULL,u_23 = NULL,v_23 = NULL,e_3 = NULL;
            t = SSLgetAnnotations(d_36);
            o_23 = t;
            t = g_36;
            t = b_112(t);
            v_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_36, v_23);
            t = genzip_4_0(y_2, z_2, a_3, c_3, t);
            u_23 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, e_36, f_36, u_23);
            e_3 = t;
            t = SSLsetAnnotations(e_3, o_23);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              e_36 = ATgetArgument(t, 0);
              f_36 = ATgetArgument(t, 1);
              g_36 = ATgetArgument(t, 2);
              h_36 = ATgetArgument(t, 3);
              {
                ATerm b_25 = NULL,k_25 = NULL,l_25 = NULL,f_3 = NULL;
                t = SSLgetAnnotations(d_36);
                b_25 = t;
                t = g_36;
                t = b_112(t);
                l_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_36, l_25);
                t = genzip_4_0(h_3, i_3, j_3, k_3, t);
                k_25 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, e_36, f_36, k_25, h_36);
                f_3 = t;
                t = SSLsetAnnotations(f_3, b_25);
              }
            }
          else
            {
              ATerm c_27 = NULL,o_27 = NULL,t_27 = NULL,g_3 = NULL;
              if(match_cons(t, sym_RDefT_4))
                {
                  e_36 = ATgetArgument(t, 0);
                  f_36 = ATgetArgument(t, 1);
                  g_36 = ATgetArgument(t, 2);
                  h_36 = ATgetArgument(t, 3);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(d_36);
              c_27 = t;
              t = g_36;
              t = b_112(t);
              t_27 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_36, t_27);
              t = genzip_4_0(m_3, d_4, e_4, f_4, t);
              o_27 = t;
              t = (ATerm) ATmakeAppl(sym_RDefT_4, e_36, f_36, o_27, h_36);
              g_3 = t;
              t = SSLsetAnnotations(g_3, c_27);
            }
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm q_89 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,l_3 = NULL;
  t_36 = t;
  if(match_cons(t, sym_Var_1))
    {
      r_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_36);
  p_36 = t;
  t = r_36;
  t = q_89(t);
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_36);
  l_3 = t;
  t = SSLsetAnnotations(l_3, p_36);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm y_21 = t;
  int a_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_22);
    }
  else
    {
      t = y_21;
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                g_37 = ATgetArgument(t, 0);
                h_37 = ATgetArgument(t, 1);
                i_37 = ATgetArgument(t, 2);
                j_37 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = i_37;
            t = map_1_0(h_4, t);
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            t = Bind8_0_0(t);
          }
      }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm a_38 = NULL;
  ATerm g_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_38 = ATgetArgument(t, 0);
          {
            ATerm j_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_22);
      t = a_38;
    }
  else
    {
      t = g_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_38;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm k_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,m_38 = NULL;
      f_38 = t;
      if(match_cons(t, sym_Let_2))
        {
          g_38 = ATgetArgument(t, 0);
          h_38 = ATgetArgument(t, 1);
          t = f_38;
          t = o_8(g_38, h_38, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              g_38 = ATgetArgument(t, 0);
              h_38 = ATgetArgument(t, 1);
              i_38 = ATgetArgument(t, 2);
              t = h_38;
              t = map_1_0(j_4, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  g_38 = ATgetArgument(t, 0);
                  h_38 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, g_38);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_38 = ATgetArgument(t, 0);
                      h_38 = ATgetArgument(t, 1);
                      i_38 = ATgetArgument(t, 2);
                      m_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_38;
                  t = map_1_0(k_4, t);
                }
            }
        }
      LocalPopChoice(m_22);
    }
  else
    {
      t = k_22;
      t = Bind7_0_0(t);
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm m_39 = NULL;
  ATerm n_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_39 = ATgetArgument(t, 0);
          {
            ATerm t_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_22);
      t = m_39;
    }
  else
    {
      t = n_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_39;
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm v_41 = NULL;
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_41 = ATgetArgument(t, 0);
          {
            ATerm w_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_22);
      t = v_41;
    }
  else
    {
      t = u_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_41;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, g_4, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, i_4, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm z_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(y_22);
      {
        ATerm l_42 = NULL,m_42 = NULL;
        l_42 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm a_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        m_42 = t;
        t = SSLgetAnnotations(l_42);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_23 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) b_23) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_23 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(d_23) != AT_LIST) || !(ATisEmpty(d_23))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_42;
      }
    }
  else
    {
      t = x_22;
      {
        ATerm e_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm h_23 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) h_23) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm i_23 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_23);
            _fail(t);
          }
        else
          {
            t = e_23;
          }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm i_84, ATerm h_84, ATerm t)
{
  t = i_84;
  t = topdown_1_0(l_4, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, i_84);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL,d_43 = NULL,e_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      d_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_43;
  if(match_cons(t, sym_Match_1))
    {
      e_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_43;
  if(match_cons(t, sym_Var_1))
    {
      h_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_43;
  if(match_cons(t, sym_Seq_2))
    {
      j_43 = ATgetArgument(t, 0);
      b_43 = ATgetArgument(t, 1);
      t = j_43;
      if(match_cons(t, sym_Build_1))
        {
          k_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_43;
      if(match_cons(t, sym_Var_1))
        {
          a_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_43;
      if((h_43 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_43)), b_43);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_43;
      if(match_cons(t, sym_Var_1))
        {
          k_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_43;
      if((h_43 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_43));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm x_43 = NULL,a_44 = NULL,c_44 = NULL,d_44 = NULL,f_44 = NULL,g_44 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_44 = ATgetArgument(t, 0);
      f_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_44;
  if(match_cons(t, sym_Build_1))
    {
      d_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_44;
  if(match_cons(t, sym_Seq_2))
    {
      g_44 = ATgetArgument(t, 0);
      a_44 = ATgetArgument(t, 1);
      t = g_44;
      if(match_cons(t, sym_Match_1))
        {
          x_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_43;
      if((d_44 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_44), a_44);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          g_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_44;
      if((d_44 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, d_44);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL,y_44 = NULL,z_44 = NULL,b_45 = NULL,f_45 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_44 = ATgetArgument(t, 0);
      b_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_44;
  if(match_cons(t, sym_Match_1))
    {
      z_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_45;
  if(match_cons(t, sym_Seq_2))
    {
      f_45 = ATgetArgument(t, 0);
      v_44 = ATgetArgument(t, 1);
      t = f_45;
      if(match_cons(t, sym_Match_1))
        {
          u_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_44;
      if((z_44 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_44), v_44);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          f_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_45;
      if((z_44 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, z_44);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL,u_45 = NULL,a_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_46 = ATgetArgument(t, 0);
      c_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_46;
  if(match_cons(t, sym_Build_1))
    {
      ATerm j_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_46;
  if(match_cons(t, sym_Seq_2))
    {
      d_46 = ATgetArgument(t, 0);
      e_46 = ATgetArgument(t, 1);
      t = d_46;
      if(match_cons(t, sym_PrimT_3))
        {
          r_45 = ATgetArgument(t, 0);
          s_45 = ATgetArgument(t, 1);
          u_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, r_45, s_45, u_45), e_46);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          d_46 = ATgetArgument(t, 0);
          e_46 = ATgetArgument(t, 1);
          f_46 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, d_46, e_46, f_46);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_47 = ATgetArgument(t, 0);
      d_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_47;
  if(match_cons(t, sym_Build_1))
    {
      ATerm k_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_47;
  if(match_cons(t, sym_Seq_2))
    {
      e_47 = ATgetArgument(t, 0);
      u_46 = ATgetArgument(t, 1);
      t = e_47;
      if(match_cons(t, sym_Build_1))
        {
          t_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_46), u_46);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, e_47);
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_23 = ATgetArgument(t, 0);
      if(((ATgetType(l_23) != AT_LIST) || !(ATisEmpty(l_23))))
        _fail(t);
      {
        ATerm m_23 = ATgetArgument(t, 1);
        if(((ATgetType(m_23) != AT_LIST) || !(ATisEmpty(m_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_23 = ATgetArgument(t, 0);
      if(((ATgetType(n_23) == AT_LIST) && !(ATisEmpty(n_23))))
        {
          z_49 = ATgetFirst((ATermList) n_23);
          a_50 = (ATerm) ATgetNext((ATermList) n_23);
        }
      else
        _fail(t);
      {
        ATerm p_23 = ATgetArgument(t, 1);
        if(((ATgetType(p_23) == AT_LIST) && !(ATisEmpty(p_23))))
          {
            b_50 = ATgetFirst((ATermList) p_23);
            c_50 = (ATerm) ATgetNext((ATermList) p_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_49, b_50), (ATerm) ATmakeAppl(sym__2, a_50, c_50));
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL;
  if(match_cons(t, sym__2))
    {
      d_50 = ATgetArgument(t, 0);
      e_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_50), d_50);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL;
  if(match_cons(t, sym__2))
    {
      f_50 = ATgetArgument(t, 0);
      g_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_50), (ATerm) ATmakeAppl(sym_Match_1, g_50));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_23 = ATgetArgument(t, 0);
      if(((ATgetType(q_23) != AT_LIST) || !(ATisEmpty(q_23))))
        _fail(t);
      {
        ATerm r_23 = ATgetArgument(t, 1);
        if(((ATgetType(r_23) != AT_LIST) || !(ATisEmpty(r_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL,a_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_23 = ATgetArgument(t, 0);
      if(((ATgetType(w_23) == AT_LIST) && !(ATisEmpty(w_23))))
        {
          o_50 = ATgetFirst((ATermList) w_23);
          p_50 = (ATerm) ATgetNext((ATermList) w_23);
        }
      else
        _fail(t);
      {
        ATerm d_24 = ATgetArgument(t, 1);
        if(((ATgetType(d_24) == AT_LIST) && !(ATisEmpty(d_24))))
          {
            q_50 = ATgetFirst((ATermList) d_24);
            a_51 = (ATerm) ATgetNext((ATermList) d_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_50, q_50), (ATerm) ATmakeAppl(sym__2, p_50, a_51));
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL;
  if(match_cons(t, sym__2))
    {
      d_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_51), d_51);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL;
  if(match_cons(t, sym__2))
    {
      f_51 = ATgetArgument(t, 0);
      g_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_51), (ATerm) ATmakeAppl(sym_Match_1, g_51));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,h_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      j_48 = ATgetArgument(t, 0);
      p_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_48;
  if(match_cons(t, sym_Build_1))
    {
      k_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_48;
  if(match_cons(t, sym_Op_2))
    {
      l_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_48;
  if(match_cons(t, sym_Seq_2))
    {
      q_48 = ATgetArgument(t, 0);
      h_48 = ATgetArgument(t, 1);
      {
        ATerm e_49 = NULL;
        t = q_48;
        if(match_cons(t, sym_Match_1))
          {
            r_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_48;
        if(match_cons(t, sym_Op_2))
          {
            z_47 = ATgetArgument(t, 0);
            a_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_47;
        if((l_48 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, m_48, a_48);
        t = genzip_4_0(m_4, n_4, o_4, q_4, t);
        e_49 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_49), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_48, m_48)), h_48));
      }
    }
  else
    {
      ATerm m_50 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          q_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_48;
      if(match_cons(t, sym_Op_2))
        {
          r_48 = ATgetArgument(t, 0);
          s_48 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_48;
      if((l_48 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, m_48, s_48);
      t = genzip_4_0(r_4, t_4, u_4, v_4, t);
      m_50 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_50), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_48, m_48)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm o_53 = NULL,v_53 = NULL,z_53 = NULL,a_54 = NULL,f_54 = NULL,h_54 = NULL,i_54 = NULL,j_54 = NULL;
  v_53 = t;
  if(match_cons(t, sym_Seq_2))
    {
      z_53 = ATgetArgument(t, 0);
      h_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_53;
  if(match_cons(t, sym_Build_1))
    {
      a_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_54;
  if(match_cons(t, sym_Op_2))
    {
      f_54 = ATgetArgument(t, 0);
      {
        ATerm f_24 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_54;
  {
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            i_54 = ATgetArgument(t, 0);
            {
              ATerm l_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_24);
        t = i_54;
        if(match_cons(t, sym_Match_1))
          {
            j_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_54;
        if(match_cons(t, sym_Op_2))
          {
            o_53 = ATgetArgument(t, 0);
            {
              ATerm m_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_54, o_53);
        {
          ATerm o_24 = t;
          if((PushChoice() == 0))
            {
              ATerm k_29 = NULL;
              if(match_cons(t, sym__2))
                {
                  k_29 = ATgetArgument(t, 0);
                  if((k_29 != ATgetArgument(t, 1)))
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
              t = o_24;
            }
        }
        t = term_r_24;
      }
    else
      {
        t = j_24;
        if(match_cons(t, sym_Match_1))
          {
            i_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_54;
        if(match_cons(t, sym_Op_2))
          {
            j_54 = ATgetArgument(t, 0);
            {
              ATerm s_24 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_54, j_54);
        {
          ATerm u_24 = t;
          if((PushChoice() == 0))
            {
              ATerm a_30 = NULL;
              if(match_cons(t, sym__2))
                {
                  a_30 = ATgetArgument(t, 0);
                  if((a_30 != ATgetArgument(t, 1)))
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
              t = u_24;
            }
        }
        t = term_r_24;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  static ATerm z_54 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_114(t);
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = SRTS_one(z_54, t);
      }
    return(t);
  }
  t = z_54(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,a_57 = NULL,b_57 = NULL;
  m_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_56;
  if(match_cons(t, sym_Let_2))
    {
      x_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
      {
        ATerm j_57 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, n_56, x_56);
        t = conc_0_0(t);
        j_57 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_57, a_57);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          x_56 = ATgetArgument(t, 0);
          a_57 = ATgetArgument(t, 1);
          b_57 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_56;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_56 = ATgetFirst((ATermList) t);
          t_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_56;
      if(match_cons(t, sym_SDefT_4))
        {
          p_56 = ATgetArgument(t, 0);
          q_56 = ATgetArgument(t, 1);
          r_56 = ATgetArgument(t, 2);
          s_56 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = q_56;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_56;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_56;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_56;
      if(match_cons(t, sym_SVar_1))
        {
          y_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_57;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_57;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_56;
      if((p_56 != t))
        {
          _fail(t);
        }
      t = s_56;
      {
        ATerm x_24 = t;
        if((PushChoice() == 0))
          {
            static ATerm w_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm y_24 = ATgetArgument(t, 0);
                  if(match_cons(y_24, sym_SVar_1))
                    {
                      if((p_56 != ATgetArgument(y_24, 0)))
                        {
                          _fail(ATgetArgument(y_24, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm a_25 = ATgetArgument(t, 1);
                    if(((ATgetType(a_25) != AT_LIST) || !(ATisEmpty(a_25))))
                      _fail(t);
                  }
                  {
                    ATerm c_25 = ATgetArgument(t, 2);
                    if(((ATgetType(c_25) != AT_LIST) || !(ATisEmpty(c_25))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(w_4, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_24;
          }
      }
      t = s_56;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,p_58 = NULL,q_58 = NULL,s_58 = NULL,t_58 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      s_58 = ATgetArgument(t, 0);
      t = s_58;
      if(match_cons(t, sym_Seq_2))
        {
          q_58 = ATgetArgument(t, 0);
          e_58 = ATgetArgument(t, 1);
          t = q_58;
          if(match_cons(t, sym_Where_1))
            {
              d_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_58;
          if(match_cons(t, sym_Seq_2))
            {
              f_58 = ATgetArgument(t, 0);
              p_58 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_58;
          if(match_cons(t, sym_Build_1))
            {
              g_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, d_58, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_58), p_58)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              q_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, q_58);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          s_58 = ATgetArgument(t, 0);
          t = s_58;
          if(match_cons(t, sym_Test_1))
            {
              q_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, q_58);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              s_58 = ATgetArgument(t, 0);
              t = s_58;
              if(match_cons(t, sym_Not_1))
                {
                  q_58 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, q_58);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  s_58 = ATgetArgument(t, 0);
                  t_58 = ATgetArgument(t, 1);
                  t = t_58;
                  if((s_58 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      s_58 = ATgetArgument(t, 0);
                      t_58 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = t_58;
                  if((s_58 != t))
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
  ATerm c_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      c_60 = ATgetArgument(t, 0);
      j_60 = ATgetArgument(t, 1);
      t = c_60;
      if(match_cons(t, sym_LChoice_2))
        {
          h_60 = ATgetArgument(t, 0);
          i_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, h_60, (ATerm) ATmakeAppl(sym_LChoice_2, i_60, j_60));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          c_60 = ATgetArgument(t, 0);
          j_60 = ATgetArgument(t, 1);
          t = c_60;
          if(match_cons(t, sym_Seq_2))
            {
              h_60 = ATgetArgument(t, 0);
              i_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, h_60, (ATerm) ATmakeAppl(sym_Seq_2, i_60, j_60));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              c_60 = ATgetArgument(t, 0);
              j_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_60;
          if(match_cons(t, sym_Choice_2))
            {
              h_60 = ATgetArgument(t, 0);
              i_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, h_60, (ATerm) ATmakeAppl(sym_Choice_2, i_60, j_60));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL,x_61 = NULL,c_62 = NULL,d_62 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      c_62 = ATgetArgument(t, 0);
      d_62 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, c_62, d_62);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          c_62 = ATgetArgument(t, 0);
          t = c_62;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_61 = ATgetFirst((ATermList) t);
              t_61 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, s_61, (ATerm) ATmakeAppl(sym_LChoices_1, t_61));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_r_24;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              c_62 = ATgetArgument(t, 0);
              t = c_62;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_61 = ATgetFirst((ATermList) t);
                  t_61 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, s_61, (ATerm) ATmakeAppl(sym_Choices_1, t_61));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_r_24;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  c_62 = ATgetArgument(t, 0);
                  t = c_62;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_61 = ATgetFirst((ATermList) t);
                      t_61 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_61, (ATerm) ATmakeAppl(sym_Seqs_1, t_61));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_e_25;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      c_62 = ATgetArgument(t, 0);
                      d_62 = ATgetArgument(t, 1);
                      x_61 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, d_62, (ATerm) ATmakeAppl(sym_Op_2, term_g_25, (ATerm) ATinsert(ATinsert(ATempty, x_61), c_62)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          c_62 = ATgetArgument(t, 0);
                          d_62 = ATgetArgument(t, 1);
                          x_61 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_61)), c_62), (ATerm) ATmakeAppl(sym_Build_1, d_62)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              c_62 = ATgetArgument(t, 0);
                              d_62 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_62, (ATerm) ATmakeAppl(sym_Match_1, d_62));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  c_62 = ATgetArgument(t, 0);
                                  d_62 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_62), d_62);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      c_62 = ATgetArgument(t, 0);
                                      d_62 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_62), c_62);
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
static ATerm d_5 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_65 = ATgetArgument(t, 0);
      t = q_65;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_r_24;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          q_65 = ATgetArgument(t, 0);
          t = q_65;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_e_25;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              q_65 = ATgetArgument(t, 0);
              r_65 = ATgetArgument(t, 1);
              t = q_65;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_r_24;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  q_65 = ATgetArgument(t, 0);
                  r_65 = ATgetArgument(t, 1);
                  t = r_65;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_r_24;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      q_65 = ATgetArgument(t, 0);
                      r_65 = ATgetArgument(t, 1);
                      t = r_65;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_r_24;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          q_65 = ATgetArgument(t, 0);
                          t = q_65;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_r_24;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              q_65 = ATgetArgument(t, 0);
                              t = q_65;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_r_24;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  q_65 = ATgetArgument(t, 0);
                                  r_65 = ATgetArgument(t, 1);
                                  t = r_65;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_r_24;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      q_65 = ATgetArgument(t, 0);
                                      r_65 = ATgetArgument(t, 1);
                                      t = r_65;
                                      t = fetch_1_0(d_5, t);
                                      t = term_r_24;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          q_65 = ATgetArgument(t, 0);
                                          r_65 = ATgetArgument(t, 1);
                                          t = r_65;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = q_65;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = r_65;
                                                }
                                              else
                                                {
                                                  t = q_65;
                                                }
                                            }
                                          else
                                            {
                                              t = q_65;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = r_65;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              q_65 = ATgetArgument(t, 0);
                                              r_65 = ATgetArgument(t, 1);
                                              t = r_65;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = q_65;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = r_65;
                                                    }
                                                  else
                                                    {
                                                      t = q_65;
                                                    }
                                                }
                                              else
                                                {
                                                  t = q_65;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = r_65;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  q_65 = ATgetArgument(t, 0);
                                                  t = q_65;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_r_24;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      q_65 = ATgetArgument(t, 0);
                                                      r_65 = ATgetArgument(t, 1);
                                                      s_65 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_65;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_65, r_65);
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
  ATerm n_67 = NULL,p_67 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      p_67 = ATgetArgument(t, 0);
      t = p_67;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_e_25;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          p_67 = ATgetArgument(t, 0);
          t = p_67;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_r_24;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              p_67 = ATgetArgument(t, 0);
              n_67 = ATgetArgument(t, 1);
              t = n_67;
              if(match_cons(t, sym_Id_0))
                {
                  t = p_67;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = n_67;
                    }
                  else
                    {
                      t = p_67;
                    }
                }
              else
                {
                  t = p_67;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = n_67;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  p_67 = ATgetArgument(t, 0);
                  n_67 = ATgetArgument(t, 1);
                  t = p_67;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_e_25;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      p_67 = ATgetArgument(t, 0);
                      n_67 = ATgetArgument(t, 1);
                      t = n_67;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_e_25;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          p_67 = ATgetArgument(t, 0);
                          n_67 = ATgetArgument(t, 1);
                          t = n_67;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_e_25;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              p_67 = ATgetArgument(t, 0);
                              t = p_67;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_e_25;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  p_67 = ATgetArgument(t, 0);
                                  t = p_67;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_e_25;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      p_67 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_67;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_e_25;
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
  ATerm i_25 = t;
  int j_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(j_25);
    }
  else
    {
      t = i_25;
      {
        ATerm o_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(w_25);
          }
        else
          {
            t = o_25;
            {
              ATerm z_25 = t;
              int f_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(f_26);
                }
              else
                {
                  t = z_25;
                  {
                    ATerm g_26 = t;
                    int h_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(h_26);
                      }
                    else
                      {
                        t = g_26;
                        {
                          ATerm i_26 = t;
                          int j_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(j_26);
                            }
                          else
                            {
                              t = i_26;
                              {
                                ATerm k_26 = t;
                                int l_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_68 = NULL,q_68 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        p_68 = ATgetArgument(t, 0);
                                        q_68 = ATgetArgument(t, 1);
                                        t = p_68;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_68;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            p_68 = ATgetArgument(t, 0);
                                            q_68 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = p_68;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = q_68;
                                      }
                                    LocalPopChoice(l_26);
                                  }
                                else
                                  {
                                    t = k_26;
                                    {
                                      ATerm m_26 = t;
                                      int n_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
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
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(p_26);
                                              }
                                            else
                                              {
                                                t = o_26;
                                                {
                                                  ATerm q_26 = t;
                                                  int r_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(r_26);
                                                    }
                                                  else
                                                    {
                                                      t = q_26;
                                                      {
                                                        ATerm s_26 = t;
                                                        int t_26 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
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
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(v_26);
                                                                }
                                                              else
                                                                {
                                                                  t = u_26;
                                                                  {
                                                                    ATerm w_26 = t;
                                                                    int x_26 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
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
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(z_26);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_26;
                                                                              {
                                                                                ATerm a_27 = t;
                                                                                int b_27 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(b_27);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_27;
                                                                                    {
                                                                                      ATerm b_69 = NULL,c_69 = NULL,g_69 = NULL,i_69 = NULL;
                                                                                      c_69 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          g_69 = ATgetArgument(t, 0);
                                                                                          i_69 = ATgetArgument(t, 1);
                                                                                          t = g_69;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              b_69 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_69;
                                                                                          t = t_9(b_69, i_69, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              g_69 = ATgetArgument(t, 0);
                                                                                              i_69 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = g_69;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = i_69;
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
  ATerm j_77 = NULL,k_77 = NULL,w_77 = NULL,x_77 = NULL;
  k_77 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = k_77;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = k_77;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              w_77 = ATgetArgument(t, 0);
              {
                ATerm d_33 = NULL,g_33 = NULL,s_3 = NULL;
                t = SSLgetAnnotations(k_77);
                d_33 = t;
                t = w_77;
                {
                  static ATerm d_37 (ATerm t)
                  {
                    ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
                    a_37 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        b_37 = ATgetArgument(t, 0);
                        {
                          ATerm y_37 = NULL,n_3 = NULL;
                          t = SSLgetAnnotations(a_37);
                          y_37 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, b_37);
                          n_3 = t;
                          t = SSLsetAnnotations(n_3, y_37);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            b_37 = ATgetArgument(t, 0);
                            {
                              ATerm n_38 = NULL,o_3 = NULL;
                              t = SSLgetAnnotations(a_37);
                              n_38 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, b_37);
                              o_3 = t;
                              t = SSLsetAnnotations(o_3, n_38);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                b_37 = ATgetArgument(t, 0);
                                {
                                  ATerm w_38 = NULL,p_3 = NULL;
                                  t = SSLgetAnnotations(a_37);
                                  w_38 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, b_37);
                                  p_3 = t;
                                  t = SSLsetAnnotations(p_3, w_38);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    b_37 = ATgetArgument(t, 0);
                                    {
                                      ATerm e_39 = NULL,q_3 = NULL;
                                      t = SSLgetAnnotations(a_37);
                                      e_39 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, b_37);
                                      q_3 = t;
                                      t = SSLsetAnnotations(q_3, e_39);
                                    }
                                  }
                                else
                                  {
                                    ATerm x_39 = NULL,c_40 = NULL,r_3 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        b_37 = ATgetArgument(t, 0);
                                        c_37 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(a_37);
                                    x_39 = t;
                                    t = c_37;
                                    t = map_1_0(d_37, t);
                                    c_40 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, b_37, c_40);
                                    r_3 = t;
                                    t = SSLsetAnnotations(r_3, x_39);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = d_37(t);
                }
                g_33 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, g_33);
                s_3 = t;
                t = SSLsetAnnotations(s_3, d_33);
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  w_77 = ATgetArgument(t, 0);
                  x_77 = ATgetArgument(t, 1);
                  {
                    ATerm p_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,v_3 = NULL,u_3 = NULL,t_3 = NULL;
                    t = SSLgetAnnotations(k_77);
                    p_40 = t;
                    t = w_77;
                    if(match_cons(t, sym_Var_1))
                      {
                        w_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(w_77);
                    v_40 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_40);
                    t_3 = t;
                    t = SSLsetAnnotations(t_3, v_40);
                    x_40 = t;
                    t = x_77;
                    if(match_cons(t, sym_Var_1))
                      {
                        t_40 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(x_77);
                    s_40 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, t_40);
                    u_3 = t;
                    t = SSLsetAnnotations(u_3, s_40);
                    u_40 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, x_40, u_40);
                    v_3 = t;
                    t = SSLsetAnnotations(v_3, p_40);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      w_77 = ATgetArgument(t, 0);
                      {
                        ATerm g_41 = NULL,i_41 = NULL,j_41 = NULL,p_41 = NULL,x_3 = NULL,w_3 = NULL;
                        t = SSLgetAnnotations(k_77);
                        g_41 = t;
                        t = w_77;
                        if(match_cons(t, sym_Var_1))
                          {
                            j_41 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(w_77);
                        i_41 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, j_41);
                        w_3 = t;
                        t = SSLsetAnnotations(w_3, i_41);
                        p_41 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, p_41);
                        x_3 = t;
                        t = SSLsetAnnotations(x_3, g_41);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          w_77 = ATgetArgument(t, 0);
                          x_77 = ATgetArgument(t, 1);
                          {
                            ATerm x_41 = NULL,y_3 = NULL;
                            t = SSLgetAnnotations(k_77);
                            x_41 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, w_77, x_77);
                            y_3 = t;
                            t = SSLsetAnnotations(y_3, x_41);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              w_77 = ATgetArgument(t, 0);
                              x_77 = ATgetArgument(t, 1);
                              j_77 = ATgetArgument(t, 2);
                              {
                                ATerm k_42 = NULL,z_3 = NULL;
                                t = SSLgetAnnotations(k_77);
                                k_42 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, w_77, x_77, j_77);
                                z_3 = t;
                                t = SSLsetAnnotations(z_3, k_42);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  w_77 = ATgetArgument(t, 0);
                                  x_77 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_42 = NULL,l_43 = NULL,o_43 = NULL,a_4 = NULL;
                                    t = SSLgetAnnotations(k_77);
                                    z_42 = t;
                                    t = w_77;
                                    t = simple_strategy_0_0(t);
                                    l_43 = t;
                                    t = x_77;
                                    t = simple_strategy_0_0(t);
                                    o_43 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, l_43, o_43);
                                    a_4 = t;
                                    t = SSLsetAnnotations(a_4, z_42);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      w_77 = ATgetArgument(t, 0);
                                      {
                                        ATerm w_43 = NULL,z_43 = NULL,b_4 = NULL;
                                        t = SSLgetAnnotations(k_77);
                                        w_43 = t;
                                        t = w_77;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        z_43 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, z_43);
                                        b_4 = t;
                                        t = SSLsetAnnotations(b_4, w_43);
                                      }
                                    }
                                  else
                                    {
                                      ATerm p_44 = NULL,s_44 = NULL,c_4 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          w_77 = ATgetArgument(t, 0);
                                          x_77 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(k_77);
                                      p_44 = t;
                                      t = x_77;
                                      t = simple_strategy_0_0(t);
                                      s_44 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, w_77, s_44);
                                      c_4 = t;
                                      t = SSLsetAnnotations(c_4, p_44);
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
static ATerm v_8 (ATerm x_127 (ATerm), ATerm l_57, ATerm k_57, ATerm t)
{
  static ATerm r_80 (ATerm t)
  {
    static ATerm w_80 (ATerm p_79, ATerm t)
    {
      ATerm r_79 = NULL,u_79 = NULL,y_79 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,p_5 = NULL;
      t = p_79;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_79 = ATgetFirst((ATermList) t);
          u_79 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm f_5 (ATerm t)
        {
          t = k_57;
          return(t);
        }
        t = y_10(x_127, f_5, r_79, u_79, t);
      }
      t = p_79;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_80 = ATgetFirst((ATermList) t);
          e_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_79);
      y_79 = t;
      t = e_80;
      t = r_80(t);
      f_80 = t;
      t = (ATerm) ATinsert(CheckATermList(f_80), d_80);
      p_5 = t;
      t = SSLsetAnnotations(p_5, y_79);
      return(t);
    }
    ATerm k_80 = NULL,m_80 = NULL;
    k_80 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_80;
      }
    else
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_27 = ATgetFirst((ATermList) t);
                m_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(e_27);
            {
              ATerm g_27 = t;
              int h_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_80(k_80, t);
                  LocalPopChoice(h_27);
                }
              else
                {
                  t = g_27;
                  t = m_80;
                  t = r_80(t);
                }
            }
          }
        else
          {
            t = d_27;
            t = w_80(k_80, t);
          }
      }
    return(t);
  }
  t = l_57;
  t = r_80(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm q_145 (ATerm), ATerm r_145 (ATerm), ATerm s_145 (ATerm), ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(q_145, r_145, s_145, t);
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      {
        ATerm p_81 = NULL,q_81 = NULL,r_81 = NULL,m_45 = NULL,p_45 = NULL,q_45 = NULL,v_5 = NULL;
        p_81 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            q_81 = ATgetArgument(t, 0);
            r_81 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_81);
        m_45 = t;
        t = q_81;
        t = s_145(t);
        p_45 = t;
        t = r_81;
        t = q_145(t);
        q_45 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, p_45, q_45);
        v_5 = t;
        t = SSLsetAnnotations(v_5, m_45);
      }
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm n_82 = NULL;
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_82 = ATgetArgument(t, 0);
          {
            ATerm n_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_27);
      t = n_82;
    }
  else
    {
      t = k_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_82;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm t_82 = NULL;
  ATerm s_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_82 = ATgetArgument(t, 0);
          {
            ATerm a_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_27);
      t = t_82;
    }
  else
    {
      t = s_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_82;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm d_82 = NULL;
  ATerm c_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm f_28 = ATgetArgument(t, 0);
          ATerm g_28 = ATgetArgument(t, 1);
          d_82 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(e_28);
      t = d_82;
      t = map_1_0(g_5, t);
    }
  else
    {
      t = c_28;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm h_28 = ATgetArgument(t, 0);
          ATerm i_28 = ATgetArgument(t, 1);
          d_82 = ATgetArgument(t, 2);
          {
            ATerm j_28 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_82;
      t = map_1_0(j_5, t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm k_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_83);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm l_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_28);
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
              ATerm w_28 = t;
              int x_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_83 = NULL,n_83 = NULL,o_83 = NULL,p_83 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_83 = ATgetArgument(t, 0);
                      n_83 = ATgetArgument(t, 1);
                      o_83 = ATgetArgument(t, 2);
                      p_83 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_83;
                  t = map_1_0(m_5, t);
                  LocalPopChoice(x_28);
                }
              else
                {
                  t = w_28;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm w_83 = NULL;
  ATerm y_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_83 = ATgetArgument(t, 0);
          {
            ATerm a_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_28);
      t = w_83;
    }
  else
    {
      t = y_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_83;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm a_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_84);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm b_29 = t;
  int c_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_29);
    }
  else
    {
      t = b_29;
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            {
              ATerm f_29 = t;
              int g_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_84 = ATgetArgument(t, 0);
                      k_84 = ATgetArgument(t, 1);
                      l_84 = ATgetArgument(t, 2);
                      m_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_84;
                  t = map_1_0(q_5, t);
                  LocalPopChoice(g_29);
                }
              else
                {
                  t = f_29;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm b_85 = NULL;
  ATerm h_29 = t;
  int i_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_85 = ATgetArgument(t, 0);
          {
            ATerm j_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_29);
      t = b_85;
    }
  else
    {
      t = h_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_85;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm j_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_85);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_29 = t;
  int m_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_29);
    }
  else
    {
      t = l_29;
      {
        ATerm n_29 = t;
        int o_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_29);
          }
        else
          {
            t = n_29;
            {
              ATerm p_29 = t;
              int q_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_85 = NULL,s_85 = NULL,g_86 = NULL,h_86 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_85 = ATgetArgument(t, 0);
                      s_85 = ATgetArgument(t, 1);
                      g_86 = ATgetArgument(t, 2);
                      h_86 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_86;
                  t = map_1_0(t_5, t);
                  LocalPopChoice(q_29);
                }
              else
                {
                  t = p_29;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm k_87 = NULL;
  ATerm r_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_87 = ATgetArgument(t, 0);
          {
            ATerm t_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_29);
      t = k_87;
    }
  else
    {
      t = r_29;
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
static ATerm u_5 (ATerm t)
{
  ATerm s_87 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_87);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_29);
    }
  else
    {
      t = u_29;
      {
        ATerm w_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_29);
          }
        else
          {
            t = w_29;
            {
              ATerm y_29 = t;
              int z_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_88 = NULL,b_88 = NULL,o_88 = NULL,p_88 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_88 = ATgetArgument(t, 0);
                      b_88 = ATgetArgument(t, 1);
                      o_88 = ATgetArgument(t, 2);
                      p_88 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_88;
                  t = map_1_0(x_5, t);
                  LocalPopChoice(z_29);
                }
              else
                {
                  t = y_29;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm z_88 = NULL;
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_88 = ATgetArgument(t, 0);
          {
            ATerm d_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_30);
      t = z_88;
    }
  else
    {
      t = b_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_88;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm f_89 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_89);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
      {
        ATerm g_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_30);
          }
        else
          {
            t = g_30;
            {
              ATerm i_30 = t;
              int j_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_89 = ATgetArgument(t, 0);
                      i_89 = ATgetArgument(t, 1);
                      j_89 = ATgetArgument(t, 2);
                      k_89 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_89;
                  t = map_1_0(k_6, t);
                  LocalPopChoice(j_30);
                }
              else
                {
                  t = i_30;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm w_89 = NULL;
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_89 = ATgetArgument(t, 0);
          {
            ATerm m_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_30);
      t = w_89;
    }
  else
    {
      t = k_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_89;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm i_83 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      i_83 = ATgetArgument(t, 0);
      t = i_83;
      t = free_vars_3_0(k_5, l_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          i_83 = ATgetArgument(t, 0);
          t = i_83;
          t = free_vars_3_0(n_5, o_5, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              i_83 = ATgetArgument(t, 0);
              t = i_83;
              t = free_vars_3_0(r_5, s_5, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  i_83 = ATgetArgument(t, 0);
                  t = i_83;
                  t = free_vars_3_0(u_5, w_5, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      i_83 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_83;
                  t = free_vars_3_0(a_6, g_6, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm c_112 (ATerm), ATerm d_112 (ATerm), ATerm e_112 (ATerm), ATerm t)
{
  ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL;
  i_94 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_94 = ATgetArgument(t, 0);
      f_94 = ATgetArgument(t, 1);
      {
        ATerm p_46 = NULL,s_46 = NULL,v_46 = NULL,y_5 = NULL;
        t = SSLgetAnnotations(i_94);
        p_46 = t;
        t = j_94;
        t = e_112(t);
        s_46 = t;
        t = f_94;
        t = c_112(t);
        v_46 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, s_46, v_46);
        y_5 = t;
        t = SSLsetAnnotations(y_5, p_46);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          j_94 = ATgetArgument(t, 0);
          f_94 = ATgetArgument(t, 1);
          g_94 = ATgetArgument(t, 2);
          {
            ATerm m_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,z_5 = NULL;
            t = SSLgetAnnotations(i_94);
            m_47 = t;
            t = j_94;
            t = e_112(t);
            q_47 = t;
            t = f_94;
            t = e_112(t);
            r_47 = t;
            t = g_94;
            t = e_112(t);
            s_47 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, q_47, r_47, s_47);
            z_5 = t;
            t = SSLsetAnnotations(z_5, m_47);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              j_94 = ATgetArgument(t, 0);
              f_94 = ATgetArgument(t, 1);
              g_94 = ATgetArgument(t, 2);
              h_94 = ATgetArgument(t, 3);
              {
                ATerm n_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,b_49 = NULL,b_6 = NULL;
                t = SSLgetAnnotations(i_94);
                n_48 = t;
                t = j_94;
                t = e_112(t);
                x_48 = t;
                t = f_94;
                t = e_112(t);
                y_48 = t;
                t = g_94;
                t = e_112(t);
                z_48 = t;
                t = h_94;
                t = c_112(t);
                b_49 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, x_48, y_48, z_48, b_49);
                b_6 = t;
                t = SSLsetAnnotations(b_6, n_48);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  j_94 = ATgetArgument(t, 0);
                  f_94 = ATgetArgument(t, 1);
                  g_94 = ATgetArgument(t, 2);
                  h_94 = ATgetArgument(t, 3);
                  {
                    ATerm s_49 = NULL,x_49 = NULL,y_49 = NULL,h_50 = NULL,i_50 = NULL,c_6 = NULL;
                    t = SSLgetAnnotations(i_94);
                    s_49 = t;
                    t = j_94;
                    t = e_112(t);
                    x_49 = t;
                    t = f_94;
                    t = e_112(t);
                    y_49 = t;
                    t = g_94;
                    t = e_112(t);
                    h_50 = t;
                    t = h_94;
                    t = c_112(t);
                    i_50 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, x_49, y_49, h_50, i_50);
                    c_6 = t;
                    t = SSLsetAnnotations(c_6, s_49);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      j_94 = ATgetArgument(t, 0);
                      {
                        ATerm i_51 = NULL,k_51 = NULL,d_6 = NULL;
                        t = SSLgetAnnotations(i_94);
                        i_51 = t;
                        t = j_94;
                        t = c_112(t);
                        k_51 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, k_51);
                        d_6 = t;
                        t = SSLsetAnnotations(d_6, i_51);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          j_94 = ATgetArgument(t, 0);
                          {
                            ATerm q_51 = NULL,s_51 = NULL,f_6 = NULL;
                            t = SSLgetAnnotations(i_94);
                            q_51 = t;
                            t = j_94;
                            t = c_112(t);
                            s_51 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, s_51);
                            f_6 = t;
                            t = SSLsetAnnotations(f_6, q_51);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              j_94 = ATgetArgument(t, 0);
                              {
                                ATerm y_51 = NULL,a_52 = NULL,h_6 = NULL;
                                t = SSLgetAnnotations(i_94);
                                y_51 = t;
                                t = j_94;
                                t = c_112(t);
                                a_52 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, a_52);
                                h_6 = t;
                                t = SSLsetAnnotations(h_6, y_51);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  j_94 = ATgetArgument(t, 0);
                                  {
                                    ATerm h_52 = NULL,l_52 = NULL,i_6 = NULL;
                                    t = SSLgetAnnotations(i_94);
                                    h_52 = t;
                                    t = j_94;
                                    t = c_112(t);
                                    l_52 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, l_52);
                                    i_6 = t;
                                    t = SSLsetAnnotations(i_6, h_52);
                                  }
                                }
                              else
                                {
                                  ATerm u_52 = NULL,w_52 = NULL,j_6 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      j_94 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(i_94);
                                  u_52 = t;
                                  t = j_94;
                                  t = c_112(t);
                                  w_52 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, w_52);
                                  j_6 = t;
                                  t = SSLsetAnnotations(j_6, u_52);
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
static ATerm l_6 (ATerm t)
{
  ATerm k_95 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_95);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_30);
    }
  else
    {
      t = n_30;
      {
        ATerm p_30 = t;
        int q_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_30);
          }
        else
          {
            t = p_30;
            {
              ATerm r_30 = t;
              int s_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_95 = NULL,s_95 = NULL,v_95 = NULL,w_95 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_95 = ATgetArgument(t, 0);
                      s_95 = ATgetArgument(t, 1);
                      v_95 = ATgetArgument(t, 2);
                      w_95 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_95;
                  t = map_1_0(n_6, t);
                  LocalPopChoice(s_30);
                }
              else
                {
                  t = r_30;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm j_96 = NULL;
  ATerm t_30 = t;
  int u_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_96 = ATgetArgument(t, 0);
          {
            ATerm v_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_30);
      t = j_96;
    }
  else
    {
      t = t_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_96;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm y_94 = NULL,f_95 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      f_95 = ATgetArgument(t, 0);
      t = f_95;
      if(match_cons(t, sym_Rule_3))
        {
          y_94 = ATgetArgument(t, 0);
          {
            ATerm w_30 = ATgetArgument(t, 1);
          }
          {
            ATerm x_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = y_94;
      t = free_vars_3_0(l_6, m_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          f_95 = ATgetArgument(t, 0);
          {
            ATerm y_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_95;
    }
  return(t);
}
static ATerm z_8 (ATerm z_127 (ATerm), ATerm n_57, ATerm m_57, ATerm t)
{
  static ATerm h_97 (ATerm t)
  {
    ATerm z_96 = NULL,b_97 = NULL,e_97 = NULL;
    z_96 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_96;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_97 = ATgetFirst((ATermList) t);
            e_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_96;
              {
                static ATerm o_6 (ATerm t)
                {
                  t = m_57;
                  return(t);
                }
                t = y_10(z_127, o_6, b_97, e_97, t);
              }
              t = h_97(t);
              LocalPopChoice(a_31);
            }
          else
            {
              t = z_30;
              {
                ATerm l_53 = NULL,q_53 = NULL,b_7 = NULL;
                t = SSLgetAnnotations(z_96);
                l_53 = t;
                t = e_97;
                t = h_97(t);
                q_53 = t;
                t = (ATerm) ATinsert(CheckATermList(q_53), b_97);
                b_7 = t;
                t = SSLsetAnnotations(b_7, l_53);
              }
            }
        }
      }
    return(t);
  }
  t = n_57;
  t = h_97(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      if(((ATgetType(b_31) != AT_LIST) || !(ATisEmpty(b_31))))
        _fail(t);
      {
        ATerm c_31 = ATgetArgument(t, 1);
        if(((ATgetType(c_31) != AT_LIST) || !(ATisEmpty(c_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm u_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_31 = ATgetArgument(t, 0);
      if(((ATgetType(d_31) == AT_LIST) && !(ATisEmpty(d_31))))
        {
          u_97 = ATgetFirst((ATermList) d_31);
          x_97 = (ATerm) ATgetNext((ATermList) d_31);
        }
      else
        _fail(t);
      {
        ATerm e_31 = ATgetArgument(t, 1);
        if(((ATgetType(e_31) == AT_LIST) && !(ATisEmpty(e_31))))
          {
            y_97 = ATgetFirst((ATermList) e_31);
            z_97 = (ATerm) ATgetNext((ATermList) e_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_97, y_97), (ATerm) ATmakeAppl(sym__2, x_97, z_97));
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL;
  if(match_cons(t, sym__2))
    {
      b_98 = ATgetArgument(t, 0);
      c_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_98), b_98);
  return(t);
}
static ATerm b_9 (ATerm v_721, ATerm a_722, ATerm e_73, ATerm t)
{
  ATerm l_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL;
  t = SSL_explode_term(a_722);
  if(match_cons(t, sym__2))
    {
      l_97 = ATgetArgument(t, 0);
      q_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_721);
  if(match_cons(t, sym__2))
    {
      if((l_97 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_97, q_97);
  t = genzip_4_0(p_6, q_6, r_6, _id, t);
  r_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_97, e_73);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm t)
{
  static ATerm e_98 (ATerm t)
  {
    ATerm f_31 = t;
    int g_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_119(t);
        LocalPopChoice(g_31);
      }
    else
      {
        t = f_31;
        t = o_119(t);
        t = e_98(t);
      }
    return(t);
  }
  t = e_98(t);
  return(t);
}
ATerm for_3_0 (ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm s_119 (ATerm), ATerm t)
{
  t = q_119(t);
  t = while_not_2_0(r_119, s_119, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm o_98 = NULL;
  o_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_98);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm p_98 = NULL,s_98 = NULL,w_98 = NULL,x_98 = NULL,d_7 = NULL;
  x_98 = t;
  if(match_cons(t, sym__2))
    {
      s_98 = ATgetArgument(t, 0);
      w_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_98);
  p_98 = t;
  t = w_98;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_98, w_98);
  d_7 = t;
  t = SSLsetAnnotations(d_7, p_98);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm a_100 = NULL,c_100 = NULL,d_100 = NULL,g_100 = NULL,h_100 = NULL;
  a_100 = t;
  if(match_cons(t, sym__2))
    {
      c_100 = ATgetArgument(t, 0);
      d_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_100;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_100 = ATgetFirst((ATermList) t);
      h_100 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_100(c_100, d_100, a_100, t);
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_100), g_100), h_100);
          }
      }
    }
  else
    {
      t = s_100(c_100, d_100, a_100, t);
    }
  return(t);
}
static ATerm s_100 (ATerm a_99, ATerm b_99, ATerm c_99, ATerm t)
{
  ATerm d_99 = NULL,i_99 = NULL,e_7 = NULL,l_99 = NULL,m_99 = NULL,p_99 = NULL,q_99 = NULL;
  t = SSLgetAnnotations(c_99);
  d_99 = t;
  t = b_99;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_99 = ATgetFirst((ATermList) t);
      q_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_99;
  if(match_cons(t, sym__2))
    {
      m_99 = ATgetArgument(t, 0);
      p_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_99;
        if((m_99 != t))
          {
            _fail(t);
          }
        t = q_99;
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = b_99;
        t = b_9(m_99, p_99, q_99, t);
      }
  }
  i_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_99, i_99);
  e_7 = t;
  t = SSLsetAnnotations(e_7, d_99);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm q_100 = NULL;
  if(match_cons(t, sym__2))
    {
      q_100 = ATgetArgument(t, 0);
      if((q_100 != ATgetArgument(t, 1)))
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
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_6, t_6, v_6, t);
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL;
        l_100 = t;
        if(match_cons(t, sym__2))
          {
            m_100 = ATgetArgument(t, 0);
            n_100 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_100;
        t = z_8(x_6, m_100, n_100, t);
      }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm s_54 = NULL,w_54 = NULL;
  if(match_cons(t, sym__2))
    {
      s_54 = ATgetArgument(t, 0);
      w_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(l_7, s_54, w_54, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm a_55 = NULL;
  if(match_cons(t, sym__2))
    {
      a_55 = ATgetArgument(t, 0);
      if((a_55 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL;
  if(match_cons(t, sym__2))
    {
      h_55 = ATgetArgument(t, 0);
      i_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(s_7, h_55, i_55, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm j_55 = NULL;
  if(match_cons(t, sym__2))
    {
      j_55 = ATgetArgument(t, 0);
      if((j_55 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm a_135 (ATerm), ATerm b_135 (ATerm), ATerm c_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm l_101 (ATerm t)
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_135(t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        {
          ATerm p_31 = t;
          int q_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_100 = NULL,w_100 = NULL,y_53 = NULL,b_54 = NULL;
              v_100 = t;
              t = b_135(t);
              w_100 = t;
              t = v_100;
              {
                static ATerm a_7 (ATerm t)
                {
                  ATerm y_100 = NULL;
                  t = l_101(t);
                  y_100 = t;
                  t = (ATerm) ATmakeAppl(sym__2, y_100, w_100);
                  t = diff_0_0(t);
                  return(t);
                }
                t = c_135(a_7, l_101, c_7, t);
              }
              b_54 = t;
              t = SSL_explode_term(b_54);
              if(match_cons(t, sym__2))
                {
                  ATerm r_31 = ATgetArgument(t, 0);
                  y_53 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_53;
              t = foldr_3_0(f_7, i_7, _id, t);
              LocalPopChoice(q_31);
            }
          else
            {
              t = p_31;
              {
                ATerm c_55 = NULL,d_55 = NULL;
                d_55 = t;
                t = SSL_explode_term(d_55);
                if(match_cons(t, sym__2))
                  {
                    ATerm s_31 = ATgetArgument(t, 0);
                    c_55 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_55;
                t = foldr_3_0(o_7, p_7, l_101, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_101(t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm u_55 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_55);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
            {
              ATerm x_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_55 = ATgetArgument(t, 0);
                      x_55 = ATgetArgument(t, 1);
                      y_55 = ATgetArgument(t, 2);
                      z_55 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_55;
                  t = map_1_0(z_7, t);
                  LocalPopChoice(y_31);
                }
              else
                {
                  t = x_31;
                  {
                    ATerm z_31 = t;
                    int a_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_32);
                      }
                    else
                      {
                        t = z_31;
                        {
                          ATerm f_57 = NULL,g_57 = NULL;
                          if(match_cons(t, sym_Matrix_2))
                            {
                              f_57 = ATgetArgument(t, 0);
                              g_57 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = f_57;
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
static ATerm z_7 (ATerm t)
{
  ATerm u_56 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_56 = ATgetArgument(t, 0);
          {
            ATerm d_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_32);
      t = u_56;
    }
  else
    {
      t = b_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_56;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm u_57 = NULL;
  if(match_cons(t, sym__2))
    {
      u_57 = ATgetArgument(t, 0);
      if((u_57 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_32;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_57 = ATgetFirst((ATermList) t);
      w_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_57, w_57);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_32 = ATgetArgument(t, 0);
      if(match_cons(f_32, sym__2))
        {
          x_57 = ATgetArgument(f_32, 0);
          y_57 = ATgetArgument(f_32, 1);
        }
      else
        _fail(t);
      {
        ATerm g_32 = ATgetArgument(t, 1);
        if(match_cons(g_32, sym__2))
          {
            z_57 = ATgetArgument(g_32, 0);
            a_58 = ATgetArgument(g_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_57), x_57), (ATerm) ATinsert(CheckATermList(a_58), y_57));
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm b_58 = NULL;
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, b_58, term_j_32), (ATerm) ATmakeAppl(sym_Var_1, b_58));
  return(t);
}
ATerm RowLet_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL;
  x_103 = t;
  if(match_cons(t, sym_Row_2))
    {
      y_103 = ATgetArgument(t, 0);
      z_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_32 = t;
    int l_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL;
        t = z_103;
        {
          ATerm m_32 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_32;
            }
        }
        t = new_0_0(t);
        o_55 = t;
        t = z_103;
        t = free_vars_3_0(t_7, y_7, tvars_matrix_boundin_3_0, t);
        t_55 = t;
        t = r_0(t);
        s_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_55, s_55);
        t = v_8(a_8, t_55, s_55, t);
        t = genzip_4_0(b_8, c_8, e_8, f_8, t);
        if(match_cons(t, sym__2))
          {
            q_55 = ATgetArgument(t, 0);
            r_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, o_55, (ATerm)ATempty, q_55, z_103)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, y_103, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_55), (ATerm)ATempty, r_55)));
        LocalPopChoice(l_32);
      }
    else
      {
        t = k_32;
        t = z_103;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, y_103, z_103));
      }
  }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_32;
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm s_104 = NULL,v_104 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_104 = ATgetFirst((ATermList) t);
      v_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_104, v_104);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_32 = ATgetArgument(t, 0);
      if(match_cons(n_32, sym__2))
        {
          x_104 = ATgetArgument(n_32, 0);
          y_104 = ATgetArgument(n_32, 1);
        }
      else
        _fail(t);
      {
        ATerm o_32 = ATgetArgument(t, 1);
        if(match_cons(o_32, sym__2))
          {
            z_104 = ATgetArgument(o_32, 0);
            a_105 = ATgetArgument(o_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_104), x_104), (ATerm) ATinsert(CheckATermList(a_105), y_104));
  return(t);
}
static ATerm d_9 (ATerm e_88, ATerm d_88, ATerm t)
{
  ATerm h_104 = NULL,i_104 = NULL,l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL,r_104 = NULL,j_7 = NULL;
  t = d_88;
  {
    static ATerm j_8 (ATerm t)
    {
      static ATerm l_8 (ATerm t)
      {
        t = e_88;
        return(t);
      }
      t = RowLet_1_0(l_8, t);
      return(t);
    }
    t = genzip_4_0(g_8, h_8, i_8, j_8, t);
  }
  r_104 = t;
  if(match_cons(t, sym__2))
    {
      m_104 = ATgetArgument(t, 0);
      n_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_104);
  l_104 = t;
  t = m_104;
  t = concat_0_0(t);
  o_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_104, n_104);
  j_7 = t;
  t = SSLsetAnnotations(j_7, l_104);
  if(match_cons(t, sym__2))
    {
      h_104 = ATgetArgument(t, 0);
      i_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Let_2, h_104, (ATerm) ATmakeAppl(sym_Scope_2, e_88, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_p_32))), (ATerm) ATmakeAppl(sym_Matrix_1, i_104))));
  return(t);
}
static ATerm e_9 (ATerm u_124 (ATerm), ATerm p_49, ATerm n_49, ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL,e_105 = NULL,f_105 = NULL,g_105 = NULL,l_105 = NULL,o_105 = NULL,r_105 = NULL;
  f_105 = t;
  t = u_124(t);
  b_105 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_105, p_49, n_49);
  t = x_11(b_105, p_49, n_49, t);
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_105 = NULL;
        t = term_s_32;
        s_105 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_105, term_s_32);
        t = w_11(b_105, s_105, t);
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_105 = ATgetFirst((ATermList) t);
      e_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_105, term_s_32, (ATerm) ATinsert(CheckATermList(e_105), (ATerm) ATinsert(CheckATermList(c_105), p_49)));
  t = lookup_table_0_1(b_105, t);
  r_105 = t;
  t = term_s_32;
  g_105 = t;
  t = (ATerm) ATinsert(CheckATermList(e_105), (ATerm) ATinsert(CheckATermList(c_105), p_49));
  l_105 = t;
  t = r_105;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(g_105, l_105, o_105, t);
  t = f_105;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm x_105 = NULL,y_105 = NULL,c_106 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm t_32 = ATgetArgument(t, 0);
      if(((ATgetType(t_32) == AT_LIST) && !(ATisEmpty(t_32))))
        {
          ATerm u_32 = ATgetFirst((ATermList) t_32);
          if(match_cons(u_32, sym_As_2))
            {
              ATerm v_32 = ATgetArgument(u_32, 0);
              ATerm w_32 = ATgetArgument(u_32, 1);
              if(!(match_cons(w_32, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          x_105 = (ATerm) ATgetNext((ATermList) t_32);
        }
      else
        _fail(t);
      y_105 = ATgetArgument(t, 1);
      c_106 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, x_105, y_105, c_106);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm v_105 = NULL;
  t = filter_1_0(n_8, t);
  v_105 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, v_105);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm m_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, m_107), term_x_32);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_p_32;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL;
  if(match_cons(t, sym__2))
    {
      s_59 = ATgetArgument(t, 0);
      t_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(s_59, t_59, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm MatchCons_2_0 (ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm j_107 = NULL,k_107 = NULL,l_107 = NULL;
  j_107 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = j_107;
      t = p_0(t);
      t = map_1_0(r_8, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          k_107 = ATgetArgument(t, 0);
          t = j_107;
          t = o_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((k_107 != ATgetArgument(t, 0)))
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
              k_107 = ATgetArgument(t, 0);
              t = j_107;
              t = o_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((k_107 != ATgetArgument(t, 0)))
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
                  k_107 = ATgetArgument(t, 0);
                  t = j_107;
                  t = o_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((k_107 != ATgetArgument(t, 0)))
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
                  ATerm q_59 = NULL,r_59 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      k_107 = ATgetArgument(t, 0);
                      l_107 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_107;
                  t = o_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((k_107 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      q_59 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_107;
                  t = foldr_3_0(s_8, t_8, w_8, t);
                  r_59 = t;
                  t = q_59;
                  if((r_59 != t))
                    {
                      _fail(t);
                    }
                  t = l_107;
                }
            }
        }
    }
  return(t);
}
static ATerm g_9 (ATerm b_145 (ATerm), ATerm r_86, ATerm o_86, ATerm p_86, ATerm q_86, ATerm t)
{
  ATerm x_107 = NULL,y_107 = NULL;
  t = r_86;
  t = b_145(t);
  x_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_107, p_86);
  t = conc_0_0(t);
  y_107 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, o_86, y_107, q_86);
  return(t);
}
static ATerm h_9 (ATerm k_86, ATerm l_86, ATerm m_86, ATerm t)
{
  ATerm c_108 = NULL;
  t = k_86;
  {
    static ATerm x_8 (ATerm t)
    {
      ATerm d_108 = NULL,g_108 = NULL,h_108 = NULL,j_108 = NULL;
      static ATerm y_8 (ATerm t)
      {
        static ATerm i_9 (ATerm t)
        {
          t = l_86;
          return(t);
        }
        static ATerm j_9 (ATerm t)
        {
          t = m_86;
          return(t);
        }
        t = MatchCons_2_0(i_9, j_9, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm y_32 = ATgetArgument(t, 0);
          if(((ATgetType(y_32) == AT_LIST) && !(ATisEmpty(y_32))))
            {
              ATerm z_32 = ATgetFirst((ATermList) y_32);
              if(match_cons(z_32, sym_As_2))
                {
                  ATerm a_33 = ATgetArgument(z_32, 0);
                  d_108 = ATgetArgument(z_32, 1);
                }
              else
                _fail(t);
              g_108 = (ATerm) ATgetNext((ATermList) y_32);
            }
          else
            _fail(t);
          h_108 = ATgetArgument(t, 1);
          j_108 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_9(y_8, d_108, g_108, h_108, j_108, t);
      return(t);
    }
    t = filter_1_0(x_8, t);
  }
  c_108 = t;
  t = (ATerm) ATmakeAppl(sym_Alt_3, l_86, m_86, (ATerm) ATmakeAppl(sym_Matrix_1, c_108));
  return(t);
}
ATerm filter_1_0 (ATerm l_132 (ATerm), ATerm t)
{
  ATerm v_108 = NULL,w_108 = NULL,x_108 = NULL;
  v_108 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_108;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_108 = ATgetFirst((ATermList) t);
          x_108 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm b_33 = t;
        int c_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_60 = NULL,f_60 = NULL,g_60 = NULL,m_7 = NULL;
            t = SSLgetAnnotations(v_108);
            b_60 = t;
            t = w_108;
            t = l_132(t);
            f_60 = t;
            t = x_108;
            t = filter_1_0(l_132, t);
            g_60 = t;
            t = (ATerm) ATinsert(CheckATermList(g_60), f_60);
            m_7 = t;
            t = SSLsetAnnotations(m_7, b_60);
            LocalPopChoice(c_33);
          }
        else
          {
            t = b_33;
            t = x_108;
            t = filter_1_0(l_132, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm u_126 (ATerm), ATerm t)
{
  static ATerm o_109 (ATerm t)
  {
    ATerm l_109 = NULL,m_109 = NULL,n_109 = NULL;
    t = u_126(t);
    l_109 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_109;
      }
    else
      {
        ATerm x_60 = NULL,d_61 = NULL,q_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_109 = ATgetFirst((ATermList) t);
            n_109 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_109);
        x_60 = t;
        t = n_109;
        t = o_109(t);
        d_61 = t;
        t = (ATerm) ATinsert(CheckATermList(d_61), m_109);
        q_7 = t;
        t = SSLsetAnnotations(q_7, x_60);
      }
    return(t);
  }
  t = o_109(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_p_32;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm m_110 = NULL,n_110 = NULL;
  if(match_cons(t, sym__2))
    {
      m_110 = ATgetArgument(t, 0);
      n_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(m_110, n_110, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = term_h_17;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm o_110 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      if(match_cons(e_33, sym_Off_1))
        {
          o_110 = ATgetArgument(e_33, 0);
        }
      else
        _fail(t);
      {
        ATerm f_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, o_110);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL,y_109 = NULL,z_109 = NULL,a_110 = NULL;
  u_109 = t;
  if(match_cons(t, sym_Row_3))
    {
      v_109 = ATgetArgument(t, 0);
      {
        ATerm h_33 = ATgetArgument(t, 1);
      }
      {
        ATerm i_33 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = v_109;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_109 = ATgetFirst((ATermList) t);
      {
        ATerm j_33 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_109;
  if(match_cons(t, sym_As_2))
    {
      ATerm m_33 = ATgetArgument(t, 0);
      y_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_109;
  if(match_cons(t, sym_Str_1))
    {
      z_109 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, z_109), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          z_109 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, z_109), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              z_109 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, z_109), (ATerm) ATempty);
            }
          else
            {
              ATerm j_110 = NULL,k_110 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  z_109 = ATgetArgument(t, 0);
                  a_110 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_110;
              t = foldr_3_0(k_9, o_9, s_9, t);
              j_110 = t;
              t = a_110;
              t = map_1_0(v_9, t);
              k_110 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, z_109, j_110), k_110);
            }
        }
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL;
  t_110 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_110 = ATgetFirst((ATermList) t);
      s_110 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_33 = t;
        int o_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_110 = NULL;
            t = s_110;
            {
              static ATerm y_9 (ATerm t)
              {
                ATerm p_33 = t;
                if((PushChoice() == 0))
                  {
                    if((r_110 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_33;
                  }
                return(t);
              }
              t = filter_1_0(y_9, t);
            }
            w_110 = t;
            t = (ATerm) ATinsert(CheckATermList(w_110), r_110);
            LocalPopChoice(o_33);
          }
        else
          {
            t = n_33;
            t = t_110;
          }
      }
    }
  else
    {
      t = t_110;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(x_9, t);
  return(t);
}
static ATerm y_112 (ATerm k_111, ATerm t)
{
  ATerm l_111 = NULL;
  t = SSL_explode_string(k_111);
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm z_112 (ATerm t)
        {
          ATerm j_112 = NULL,k_112 = NULL,l_112 = NULL;
          j_112 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_112 = ATgetFirst((ATermList) t);
              l_112 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm s_33 = t;
            int t_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_61 = NULL,v_61 = NULL,u_7 = NULL;
                t = SSLgetAnnotations(j_112);
                q_61 = t;
                t = l_112;
                t = z_112(t);
                v_61 = t;
                t = (ATerm) ATinsert(CheckATermList(v_61), k_112);
                u_7 = t;
                t = SSLsetAnnotations(u_7, q_61);
                LocalPopChoice(t_33);
              }
            else
              {
                t = s_33;
                {
                  ATerm g_62 = NULL,x_7 = NULL;
                  t = SSLgetAnnotations(j_112);
                  g_62 = t;
                  t = k_112;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, k_112);
                  x_7 = t;
                  t = SSLsetAnnotations(x_7, g_62);
                }
              }
          }
          return(t);
        }
        t = z_112(t);
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        t = (ATerm) ATempty;
      }
  }
  l_111 = t;
  t = SSL_implode_string(l_111);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL,w_112 = NULL;
  w_112 = t;
  {
    ATerm u_33 = t;
    int v_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_112 = ATgetFirst((ATermList) t);
            {
              ATerm w_33 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_33);
        t = m_112;
        {
          ATerm x_33 = t;
          int y_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  n_112 = ATgetArgument(t, 0);
                  {
                    ATerm z_33 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm a_34 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_33);
              t = n_112;
              {
                ATerm b_34 = t;
                int c_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        o_112 = ATgetFirst((ATermList) t);
                        {
                          ATerm d_34 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(c_34);
                    t = o_112;
                    {
                      ATerm e_34 = t;
                      int f_34 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              p_112 = ATgetArgument(t, 0);
                              {
                                ATerm g_34 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(f_34);
                          t = p_112;
                          if(match_cons(t, sym_Off_1))
                            {
                              q_112 = ATgetArgument(t, 0);
                              t = q_112;
                            }
                          else
                            {
                              t = y_112(w_112, t);
                            }
                        }
                      else
                        {
                          t = e_34;
                          t = y_112(w_112, t);
                        }
                    }
                  }
                else
                  {
                    t = b_34;
                    t = y_112(w_112, t);
                  }
              }
            }
          else
            {
              t = x_33;
              t = y_112(w_112, t);
            }
        }
      }
    else
      {
        t = u_33;
        t = y_112(w_112, t);
      }
  }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_34 = ATgetArgument(t, 0);
      ATerm i_34 = ATgetArgument(t, 1);
      if(((ATgetType(i_34) != AT_LIST) || !(ATisEmpty(i_34))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm l_113 = NULL,m_113 = NULL,n_113 = NULL;
  if(match_cons(t, sym__2))
    {
      l_113 = ATgetArgument(t, 0);
      {
        ATerm j_34 = ATgetArgument(t, 1);
        if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
          {
            m_113 = ATgetFirst((ATermList) j_34);
            n_113 = (ATerm) ATgetNext((ATermList) j_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_113, m_113), (ATerm) ATmakeAppl(sym__2, l_113, n_113));
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm o_113 = NULL,p_113 = NULL;
  if(match_cons(t, sym__2))
    {
      o_113 = ATgetArgument(t, 0);
      p_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_113), o_113);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm q_113 = NULL,r_113 = NULL,s_113 = NULL;
  if(match_cons(t, sym__2))
    {
      q_113 = ATgetArgument(t, 0);
      {
        ATerm k_34 = ATgetArgument(t, 1);
        if(match_cons(k_34, sym__2))
          {
            r_113 = ATgetArgument(k_34, 0);
            s_113 = ATgetArgument(k_34, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_9(q_113, r_113, s_113, t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  t = term_l_34;
  return(t);
}
static ATerm l_9 (ATerm x_87, ATerm t)
{
  ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL;
  t = x_87;
  t = get_path_0_0(t);
  e_113 = t;
  t = x_87;
  t = outedges_0_0(t);
  f_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_87, f_113);
  t = genzip_4_0(z_9, c_10, k_10, n_10, t);
  g_113 = t;
  t = x_87;
  t = default_state_0_0(t);
  h_113 = t;
  t = new_0_0(t);
  i_113 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, x_87);
  j_113 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_34, i_113);
  k_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, x_87), (ATerm) ATmakeAppl(sym_Defined_2, term_m_34, i_113));
  t = e_9(q_10, j_113, k_113, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, i_113, (ATerm)ATmakeAppl(sym_Var_1, e_113), g_113, h_113);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm u_113 = NULL,v_113 = NULL,w_113 = NULL,x_113 = NULL,y_113 = NULL,z_113 = NULL,a_114 = NULL,b_114 = NULL,c_114 = NULL,d_114 = NULL,e_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL,m_8 = NULL,k_8 = NULL,d_8 = NULL;
  j_114 = t;
  if(match_cons(t, sym_Row_3))
    {
      v_113 = ATgetArgument(t, 0);
      w_113 = ATgetArgument(t, 1);
      x_113 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_114);
  u_113 = t;
  t = v_113;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_113 = ATgetFirst((ATermList) t);
      a_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_113);
  y_113 = t;
  t = z_113;
  if(match_cons(t, sym_As_2))
    {
      d_114 = ATgetArgument(t, 0);
      e_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_113);
  c_114 = t;
  t = e_114;
  {
    ATerm n_34 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_34;
      }
  }
  h_114 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, d_114, h_114);
  d_8 = t;
  t = SSLsetAnnotations(d_8, c_114);
  i_114 = t;
  t = (ATerm) ATinsert(CheckATermList(a_114), i_114);
  k_8 = t;
  t = SSLsetAnnotations(k_8, y_113);
  b_114 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, b_114, w_113, x_113);
  m_8 = t;
  t = SSLsetAnnotations(m_8, u_113);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm k_114 = NULL,l_114 = NULL,m_114 = NULL,n_114 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      k_114 = ATgetArgument(t, 0);
      {
        ATerm o_34 = ATgetArgument(t, 1);
        if(((ATgetType(o_34) == AT_LIST) && !(ATisEmpty(o_34))))
          {
            l_114 = ATgetFirst((ATermList) o_34);
            m_114 = (ATerm) ATgetNext((ATermList) o_34);
          }
        else
          _fail(t);
      }
      n_114 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(k_114), l_114), m_114, n_114);
  return(t);
}
static ATerm n_9 (ATerm n_87, ATerm t)
{
  ATerm t_113 = NULL;
  t = n_87;
  {
    ATerm p_34 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(r_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_34;
      }
  }
  t = n_87;
  t = map_1_0(s_10, t);
  t_113 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, t_113);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL,s_114 = NULL,t_114 = NULL,u_114 = NULL,v_114 = NULL,w_114 = NULL,x_114 = NULL,y_114 = NULL,z_114 = NULL,a_115 = NULL,b_115 = NULL,f_9 = NULL,c_9 = NULL,a_9 = NULL;
  b_115 = t;
  if(match_cons(t, sym_Row_3))
    {
      q_114 = ATgetArgument(t, 0);
      r_114 = ATgetArgument(t, 1);
      s_114 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_115);
  p_114 = t;
  t = r_114;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_114 = ATgetFirst((ATermList) t);
      w_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_114);
  u_114 = t;
  t = v_114;
  if(match_cons(t, sym_As_2))
    {
      y_114 = ATgetArgument(t, 0);
      z_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_114);
  x_114 = t;
  t = z_114;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, y_114, z_114);
  a_9 = t;
  t = SSLsetAnnotations(a_9, x_114);
  a_115 = t;
  t = (ATerm) ATinsert(CheckATermList(w_114), a_115);
  c_9 = t;
  t = SSLsetAnnotations(c_9, u_114);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_34 = ATgetFirst((ATermList) t);
      t_114 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, q_114, t_114, s_114);
  f_9 = t;
  t = SSLsetAnnotations(f_9, p_114);
  return(t);
}
static ATerm p_9 (ATerm l_87, ATerm t)
{
  ATerm o_114 = NULL;
  t = l_87;
  t = map_1_0(t_10, t);
  o_114 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, o_114);
  return(t);
}
ATerm repeat_2_0 (ATerm w_118 (ATerm), ATerm x_118 (ATerm), ATerm t)
{
  static ATerm c_115 (ATerm t)
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_118(t);
        t = c_115(t);
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = x_118(t);
      }
    return(t);
  }
  t = c_115(t);
  return(t);
}
static ATerm r_9 (ATerm y_50, ATerm z_50, ATerm t)
{
  ATerm d_115 = NULL,e_115 = NULL;
  e_115 = t;
  {
    ATerm t_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_50, z_50);
        t = w_11(y_50, z_50, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_34 = ATgetFirst((ATermList) t);
            d_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_34);
        {
          ATerm f_115 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, y_50, z_50, d_115);
          t = lookup_table_0_1(y_50, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_115 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(z_50, d_115, f_115, t);
          t = (ATerm) ATmakeAppl(sym__3, y_50, z_50, d_115);
        }
      }
    else
      {
        t = t_34;
        {
          ATerm h_115 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, y_50, z_50);
          t = lookup_table_0_1(y_50, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              h_115 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(z_50, h_115, t);
          t = (ATerm) ATmakeAppl(sym__2, y_50, z_50);
        }
      }
  }
  t = e_115;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  ATerm j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL;
  m_115 = t;
  t = r_124(t);
  l_115 = t;
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_115 = NULL;
        t = term_s_32;
        q_115 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_115, term_s_32);
        t = w_11(l_115, q_115, t);
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_115 = ATgetFirst((ATermList) t);
      j_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_115, term_s_32, j_115);
  t = lookup_table_0_1(l_115, t);
  p_115 = t;
  t = term_s_32;
  n_115 = t;
  t = p_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(n_115, j_115, o_115, t);
  t = k_115;
  {
    static ATerm u_10 (ATerm t)
    {
      ATerm r_115 = NULL;
      r_115 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_115, r_115);
      t = r_9(l_115, r_115, t);
      return(t);
    }
    t = map_1_0(u_10, t);
  }
  t = m_115;
  return(t);
}
ATerm restore_always_2_0 (ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm t)
{
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_116(t);
      t = j_116(t);
      LocalPopChoice(z_34);
    }
  else
    {
      t = y_34;
      t = j_116(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_124 (ATerm), ATerm t)
{
  ATerm t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL;
  u_115 = t;
  t = q_124(t);
  t_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_115, term_s_32);
  {
    ATerm a_35 = t;
    int b_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_116 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_35 = ATgetArgument(t, 0);
            ATerm d_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_s_32;
        d_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_115, term_s_32);
        t = w_11(t_115, d_116, t);
        LocalPopChoice(b_35);
      }
    else
      {
        t = a_35;
        t = (ATerm) ATempty;
      }
  }
  v_115 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_115, term_s_32, (ATerm) ATinsert(CheckATermList(v_115), (ATerm) ATempty));
  t = lookup_table_0_1(t_115, t);
  z_115 = t;
  t = term_s_32;
  w_115 = t;
  t = (ATerm) ATinsert(CheckATermList(v_115), (ATerm) ATempty);
  x_115 = t;
  t = z_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(w_115, x_115, y_115, t);
  t = u_115;
  return(t);
}
ATerm scope_2_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm t)
{
  static ATerm v_10 (ATerm t)
  {
    t = end_scope_1_0(s_124, t);
    return(t);
  }
  t = begin_scope_1_0(s_124, t);
  t = restore_always_2_0(t_124, v_10, t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_126 (ATerm), ATerm t)
{
  static ATerm a_117 (ATerm t)
  {
    ATerm x_116 = NULL,y_116 = NULL,z_116 = NULL;
    z_116 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_116 = ATgetFirst((ATermList) t);
        y_116 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_63 = NULL,f_63 = NULL,m_9 = NULL;
          t = SSLgetAnnotations(z_116);
          b_63 = t;
          t = y_116;
          t = a_117(t);
          f_63 = t;
          t = (ATerm) ATinsert(CheckATermList(f_63), x_116);
          m_9 = t;
          t = SSLsetAnnotations(m_9, b_63);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_116;
        t = b_126(t);
      }
    return(t);
  }
  t = a_117(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_116 = NULL,g_116 = NULL,h_116 = NULL;
  f_116 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_116;
    }
  else
    {
      static ATerm w_10 (ATerm t)
      {
        t = not_null(h_116);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_116 = ATgetFirst((ATermList) t);
          if(((h_116 != NULL) && (h_116 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_116 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_116;
      t = at_end_1_0(w_10, t);
    }
  return(t);
}
static ATerm m_117 (ATerm e_117, ATerm t)
{
  ATerm f_117 = NULL;
  t = SSL_explode_term(e_117);
  if(match_cons(t, sym__2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_35) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_117;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_117 = NULL,i_117 = NULL,j_117 = NULL;
  j_117 = t;
  if(match_cons(t, sym__2))
    {
      h_117 = ATgetArgument(t, 0);
      i_117 = ATgetArgument(t, 1);
      {
        ATerm f_35 = t;
        int g_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_11 (ATerm t)
            {
              t = i_117;
              return(t);
            }
            t = h_117;
            t = at_end_1_0(a_11, t);
            LocalPopChoice(g_35);
          }
        else
          {
            t = f_35;
            t = m_117(j_117, t);
          }
      }
    }
  else
    {
      t = m_117(j_117, t);
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm e_119 = NULL;
  if(match_cons(t, sym__2))
    {
      e_119 = ATgetArgument(t, 0);
      if((e_119 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm m_119 = NULL;
  if(match_cons(t, sym__2))
    {
      m_119 = ATgetArgument(t, 0);
      if((m_119 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm z_119 = NULL;
  if(match_cons(t, sym__2))
    {
      z_119 = ATgetArgument(t, 0);
      if((z_119 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm h_120 = NULL;
  if(match_cons(t, sym__2))
    {
      h_120 = ATgetArgument(t, 0);
      if((h_120 != ATgetArgument(t, 1)))
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
  ATerm q_120 = NULL;
  if(match_cons(t, sym__2))
    {
      q_120 = ATgetArgument(t, 0);
      if((q_120 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm x_120 = NULL;
  if(match_cons(t, sym__2))
    {
      x_120 = ATgetArgument(t, 0);
      if((x_120 != ATgetArgument(t, 1)))
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
  ATerm h_118 = NULL,i_118 = NULL,j_118 = NULL,k_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_118 = ATgetArgument(t, 0);
      t_118 = ATgetArgument(t, 1);
      t = m_118;
      if(match_cons(t, sym_Matrix_2))
        {
          n_118 = ATgetArgument(t, 0);
          o_118 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_118;
      if(match_cons(t, sym_Choice_2))
        {
          j_118 = ATgetArgument(t, 0);
          k_118 = ATgetArgument(t, 1);
          {
            ATerm c_119 = NULL,d_119 = NULL;
            t = j_118;
            if(match_cons(t, sym_Matrix_2))
              {
                h_118 = ATgetArgument(t, 0);
                i_118 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, n_118, h_118);
            t = z_10(b_11, n_118, h_118, t);
            c_119 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_118, i_118);
            t = conc_0_0(t);
            d_119 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, c_119, d_119), k_118);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              j_118 = ATgetArgument(t, 0);
              k_118 = ATgetArgument(t, 1);
              {
                ATerm k_119 = NULL,l_119 = NULL;
                t = j_118;
                if(match_cons(t, sym_Matrix_2))
                  {
                    h_118 = ATgetArgument(t, 0);
                    i_118 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_118, h_118);
                t = z_10(c_11, n_118, h_118, t);
                k_119 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_118, i_118);
                t = conc_0_0(t);
                l_119 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, k_119, l_119), k_118);
              }
            }
          else
            {
              ATerm x_119 = NULL,y_119 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  j_118 = ATgetArgument(t, 0);
                  k_118 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, n_118, j_118);
              t = z_10(d_11, n_118, j_118, t);
              x_119 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_118, k_118);
              t = conc_0_0(t);
              y_119 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, x_119, y_119);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          m_118 = ATgetArgument(t, 0);
          t_118 = ATgetArgument(t, 1);
          t = m_118;
          if(match_cons(t, sym_Matrix_2))
            {
              n_118 = ATgetArgument(t, 0);
              o_118 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_118;
          if(match_cons(t, sym_LChoice_2))
            {
              j_118 = ATgetArgument(t, 0);
              k_118 = ATgetArgument(t, 1);
              {
                ATerm f_120 = NULL,g_120 = NULL;
                t = j_118;
                if(match_cons(t, sym_Matrix_2))
                  {
                    h_118 = ATgetArgument(t, 0);
                    i_118 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_118, h_118);
                t = z_10(e_11, n_118, h_118, t);
                f_120 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_118, i_118);
                t = conc_0_0(t);
                g_120 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, f_120, g_120), k_118);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  j_118 = ATgetArgument(t, 0);
                  k_118 = ATgetArgument(t, 1);
                  {
                    ATerm o_120 = NULL,p_120 = NULL;
                    t = j_118;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        h_118 = ATgetArgument(t, 0);
                        i_118 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, n_118, h_118);
                    t = z_10(g_11, n_118, h_118, t);
                    o_120 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_118, i_118);
                    t = conc_0_0(t);
                    p_120 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, o_120, p_120), k_118);
                  }
                }
              else
                {
                  ATerm v_120 = NULL,w_120 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      j_118 = ATgetArgument(t, 0);
                      k_118 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, n_118, j_118);
                  t = z_10(h_11, n_118, j_118, t);
                  v_120 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_118, k_118);
                  t = conc_0_0(t);
                  w_120 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, v_120, w_120);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              m_118 = ATgetArgument(t, 0);
              t_118 = ATgetArgument(t, 1);
              {
                ATerm c_121 = NULL;
                t = t_118;
                if(match_cons(t, sym_Matrix_2))
                  {
                    j_118 = ATgetArgument(t, 0);
                    k_118 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_118;
                {
                  static ATerm i_11 (ATerm t)
                  {
                    ATerm d_121 = NULL,e_121 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        d_121 = ATgetArgument(t, 0);
                        e_121 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, d_121, (ATerm) ATmakeAppl(sym_Scope_2, m_118, e_121));
                    return(t);
                  }
                  t = map_1_0(i_11, t);
                }
                c_121 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, j_118, c_121);
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  m_118 = ATgetArgument(t, 0);
                  t_118 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_118;
              if(match_cons(t, sym_Matrix_2))
                {
                  n_118 = ATgetArgument(t, 0);
                  o_118 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_118;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_118 = ATgetFirst((ATermList) t);
                  s_118 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_118;
              if(match_cons(t, sym_Row_2))
                {
                  q_118 = ATgetArgument(t, 0);
                  r_118 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_118;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, n_118, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, q_118, (ATerm) ATmakeAppl(sym_Seq_2, r_118, t_118))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  static ATerm c_12 (ATerm t)
  {
    t = bottomup_1_0(c_113, t);
    return(t);
  }
  t = SRTS_all(c_12, t);
  t = c_113(t);
  return(t);
}
static ATerm y_10 (ATerm h_128 (ATerm), ATerm i_128 (ATerm), ATerm t_57, ATerm s_57, ATerm t)
{
  t = i_128(t);
  {
    static ATerm k_12 (ATerm t)
    {
      ATerm j_121 = NULL;
      j_121 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_57, j_121);
      t = h_128(t);
      return(t);
    }
    t = fetch_1_0(k_12, t);
  }
  t = s_57;
  return(t);
}
static ATerm z_10 (ATerm e_128 (ATerm), ATerm p_57, ATerm o_57, ATerm t)
{
  static ATerm z_121 (ATerm t)
  {
    ATerm u_121 = NULL,v_121 = NULL,w_121 = NULL;
    u_121 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_57;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_121 = ATgetFirst((ATermList) t);
            w_121 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_35 = t;
          int i_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_121;
              {
                static ATerm m_12 (ATerm t)
                {
                  t = o_57;
                  return(t);
                }
                t = y_10(e_128, m_12, v_121, w_121, t);
              }
              t = z_121(t);
              LocalPopChoice(i_35);
            }
          else
            {
              t = h_35;
              {
                ATerm u_63 = NULL,x_63 = NULL,q_9 = NULL;
                t = SSLgetAnnotations(u_121);
                u_63 = t;
                t = w_121;
                t = z_121(t);
                x_63 = t;
                t = (ATerm) ATinsert(CheckATermList(x_63), v_121);
                q_9 = t;
                t = SSLsetAnnotations(q_9, u_63);
              }
            }
        }
      }
    return(t);
  }
  t = p_57;
  t = z_121(t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm t)
{
  ATerm e_122 = NULL,f_122 = NULL,g_122 = NULL;
  e_122 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_122;
      t = j_131(t);
    }
  else
    {
      ATerm j_122 = NULL,k_122 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_122 = ATgetFirst((ATermList) t);
          g_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_122;
      t = l_131(t);
      j_122 = t;
      t = g_122;
      t = foldr_3_0(j_131, k_131, l_131, t);
      k_122 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_122, k_122);
      t = k_131(t);
    }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm b_130 (ATerm), ATerm c_130 (ATerm), ATerm t)
{
  ATerm j_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_122 = NULL;
      t = b_130(t);
      n_122 = t;
      t = (ATerm) ATinsert(ATempty, n_122);
      LocalPopChoice(k_35);
    }
  else
    {
      t = j_35;
      {
        ATerm c_64 = NULL,d_64 = NULL;
        static ATerm p_12 (ATerm t)
        {
          t = collect_om_2_0(b_130, c_130, t);
          return(t);
        }
        d_64 = t;
        t = SSL_explode_term(d_64);
        if(match_cons(t, sym__2))
          {
            ATerm l_35 = ATgetArgument(t, 0);
            c_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_64;
        t = foldr_3_0(n_12, c_130, p_12, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm t_122 = NULL,w_122 = NULL,x_122 = NULL,y_122 = NULL,z_122 = NULL;
  if(match_cons(t, sym_As_2))
    {
      w_122 = ATgetArgument(t, 0);
      y_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_122;
  if(match_cons(t, sym_Var_1))
    {
      x_122 = ATgetArgument(t, 0);
      t = y_122;
      if(match_cons(t, sym_As_2))
        {
          z_122 = ATgetArgument(t, 0);
          {
            ATerm m_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_122;
      if(match_cons(t, sym_Off_1))
        {
          t_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, x_122), (ATerm) ATmakeAppl(sym_Var_1, t_122)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          x_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_122;
      if(match_cons(t, sym_Var_1))
        {
          z_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, z_122), (ATerm) ATmakeAppl(sym_Var_1, x_122)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm r_123 = NULL,s_123 = NULL,t_123 = NULL,u_123 = NULL,v_123 = NULL,w_123 = NULL,x_123 = NULL;
  t_123 = t;
  if(match_cons(t, sym_As_2))
    {
      u_123 = ATgetArgument(t, 0);
      w_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_123;
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm p_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_35);
        t = w_123;
        if(match_cons(t, sym_As_2))
          {
            x_123 = ATgetArgument(t, 0);
            s_123 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_123;
        if(match_cons(t, sym_Off_1))
          {
            r_123 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, r_123), s_123);
      }
    else
      {
        t = n_35;
        if(match_cons(t, sym_Off_1))
          {
            v_123 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_123;
        if(match_cons(t, sym_Var_1))
          {
            ATerm q_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_123;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_123;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_35 = ATgetFirst((ATermList) t);
                ATerm s_35 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_123;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, v_123), term_x_32);
      }
  }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_32;
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm o_124 = NULL,p_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_124 = ATgetFirst((ATermList) t);
      p_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_124, p_124);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm v_124 = NULL,w_124 = NULL,x_124 = NULL,y_124 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_35 = ATgetArgument(t, 0);
      if(match_cons(t_35, sym__2))
        {
          v_124 = ATgetArgument(t_35, 0);
          w_124 = ATgetArgument(t_35, 1);
        }
      else
        _fail(t);
      {
        ATerm u_35 = ATgetArgument(t, 1);
        if(match_cons(u_35, sym__2))
          {
            x_124 = ATgetArgument(u_35, 0);
            y_124 = ATgetArgument(u_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_124), v_124), (ATerm) ATinsert(CheckATermList(y_124), w_124));
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm z_124 = NULL,a_125 = NULL;
  if(match_cons(t, sym__2))
    {
      z_124 = ATgetArgument(t, 0);
      a_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(w_12, z_124, a_125, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm b_125 = NULL;
  if(match_cons(t, sym__2))
    {
      b_125 = ATgetArgument(t, 0);
      if((b_125 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm c_125 = NULL;
  if(match_cons(t, sym__2))
    {
      c_125 = ATgetArgument(t, 0);
      if((c_125 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm t)
{
  ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL,e_124 = NULL,f_124 = NULL,g_124 = NULL,h_124 = NULL,i_124 = NULL,j_124 = NULL,k_124 = NULL,l_124 = NULL,m_124 = NULL;
  l_124 = t;
  m_124 = t;
  t = SSL_explode_term(m_124);
  if(match_cons(t, sym__2))
    {
      d_124 = ATgetArgument(t, 0);
      b_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_124);
  f_124 = t;
  t = b_124;
  t = genzip_4_0(q_12, s_12, t_12, s_129, t);
  if(match_cons(t, sym__2))
    {
      e_124 = ATgetArgument(t, 0);
      c_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(d_124, e_124);
  k_124 = t;
  t = SSLsetAnnotations(k_124, f_124);
  t = t_129(t);
  if(match_cons(t, sym__2))
    {
      g_124 = ATgetArgument(t, 0);
      h_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_124;
  t = foldr_2_0(u_12, v_12, t);
  j_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_124, j_124);
  t = z_10(x_12, h_124, j_124, t);
  i_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_124, i_124);
  return(t);
}
ATerm collect_split_2_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm t)
{
  static ATerm m_125 (ATerm t)
  {
    static ATerm y_12 (ATerm t)
    {
      ATerm e_125 = NULL,f_125 = NULL,g_125 = NULL;
      g_125 = t;
      {
        ATerm v_35 = t;
        int w_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_129(t);
            LocalPopChoice(w_35);
          }
        else
          {
            t = v_35;
          }
      }
      e_125 = t;
      t = g_125;
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_129(t);
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
            t = (ATerm) ATempty;
          }
      }
      f_125 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_125, f_125);
      return(t);
    }
    t = CollectSplit_2_0(m_125, y_12, t);
    return(t);
  }
  t = m_125(t);
  return(t);
}
ATerm genzip_4_0 (ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm t)
{
  static ATerm t_125 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_117(t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        {
          ATerm n_125 = NULL,o_125 = NULL,p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL,u_9 = NULL;
          t = o_117(t);
          s_125 = t;
          if(match_cons(t, sym__2))
            {
              o_125 = ATgetArgument(t, 0);
              p_125 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_125);
          n_125 = t;
          t = o_125;
          t = q_117(t);
          q_125 = t;
          t = p_125;
          t = t_125(t);
          r_125 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_125, r_125);
          u_9 = t;
          t = SSLsetAnnotations(u_9, n_125);
          t = p_117(t);
        }
      }
    return(t);
  }
  t = t_125(t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_36 = ATgetArgument(t, 0);
      ATerm c_36 = ATgetArgument(t, 1);
      if(((ATgetType(c_36) != AT_LIST) || !(ATisEmpty(c_36))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm y_125 = NULL,z_125 = NULL,a_126 = NULL,d_126 = NULL,e_126 = NULL;
  if(match_cons(t, sym__2))
    {
      y_125 = ATgetArgument(t, 0);
      {
        ATerm i_36 = ATgetArgument(t, 1);
        if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
          {
            z_125 = ATgetFirst((ATermList) i_36);
            a_126 = (ATerm) ATgetNext((ATermList) i_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_h_17;
  e_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_125, term_h_17);
  t = s_11(y_125, e_126, t);
  d_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_125, z_125), (ATerm) ATmakeAppl(sym__2, d_126, a_126));
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm f_126 = NULL,g_126 = NULL;
  if(match_cons(t, sym__2))
    {
      f_126 = ATgetArgument(t, 0);
      g_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_126), f_126);
  return(t);
}
ATerm nzip0_1_0 (ATerm y_117 (ATerm), ATerm t)
{
  ATerm w_125 = NULL;
  w_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_32, w_125);
  t = genzip_4_0(z_12, a_13, b_13, y_117, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm l_126 = NULL,n_126 = NULL,o_126 = NULL,p_126 = NULL,q_126 = NULL,r_126 = NULL;
  if(match_cons(t, sym_As_2))
    {
      n_126 = ATgetArgument(t, 0);
      p_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_126;
  if(match_cons(t, sym_Off_1))
    {
      o_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_126;
  {
    ATerm j_36 = t;
    int k_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm l_36 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_36);
        {
          ATerm m_36 = t;
          int n_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm d_13 (ATerm t)
              {
                ATerm w_126 = NULL,x_126 = NULL;
                if(match_cons(t, sym__2))
                  {
                    w_126 = ATgetArgument(t, 0);
                    x_126 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(o_126), w_126)), x_126);
                return(t);
              }
              t = p_126;
              t = nzip0_1_0(d_13, t);
              LocalPopChoice(n_36);
            }
          else
            {
              t = m_36;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_126), term_x_32);
            }
        }
      }
    else
      {
        t = j_36;
        if(match_cons(t, sym_As_2))
          {
            q_126 = ATgetArgument(t, 0);
            r_126 = ATgetArgument(t, 1);
            t = q_126;
            if(match_cons(t, sym_Var_1))
              {
                l_126 = ATgetArgument(t, 0);
                {
                  ATerm o_36 = t;
                  int q_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm e_13 (ATerm t)
                      {
                        ATerm b_127 = NULL,c_127 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            b_127 = ATgetArgument(t, 0);
                            c_127 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(o_126), b_127)), c_127);
                        return(t);
                      }
                      t = p_126;
                      t = nzip0_1_0(e_13, t);
                      LocalPopChoice(q_36);
                    }
                  else
                    {
                      t = o_36;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_126), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_126), r_126));
                    }
                }
              }
            else
              {
                static ATerm f_13 (ATerm t)
                {
                  ATerm i_127 = NULL,j_127 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      i_127 = ATgetArgument(t, 0);
                      j_127 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(o_126), i_127)), j_127);
                  return(t);
                }
                t = p_126;
                t = nzip0_1_0(f_13, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                q_126 = ATgetArgument(t, 0);
                r_126 = ATgetArgument(t, 1);
                {
                  ATerm u_36 = t;
                  int v_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm g_13 (ATerm t)
                      {
                        ATerm m_127 = NULL,n_127 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            m_127 = ATgetArgument(t, 0);
                            n_127 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(o_126), m_127)), n_127);
                        return(t);
                      }
                      t = p_126;
                      t = nzip0_1_0(g_13, t);
                      LocalPopChoice(v_36);
                    }
                  else
                    {
                      t = u_36;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_126), (ATerm) ATmakeAppl(sym_Op_2, q_126, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_126), r_126)));
                    }
                }
              }
            else
              {
                static ATerm h_13 (ATerm t)
                {
                  ATerm t_127 = NULL,u_127 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      t_127 = ATgetArgument(t, 0);
                      u_127 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(o_126), t_127)), u_127);
                  return(t);
                }
                t = p_126;
                t = nzip0_1_0(h_13, t);
              }
          }
      }
  }
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm l_128 = NULL,m_128 = NULL,n_128 = NULL;
  n_128 = t;
  if(match_cons(t, sym_As_2))
    {
      l_128 = ATgetArgument(t, 0);
      m_128 = ATgetArgument(t, 1);
      t = l_128;
      if(match_cons(t, sym_Wld_0))
        {
          t = m_128;
        }
      else
        {
          t = n_128;
        }
    }
  else
    {
      t = n_128;
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm w_36 = t;
  int x_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      LocalPopChoice(x_36);
    }
  else
    {
      t = w_36;
    }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm z_128 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      z_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_128;
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm a_129 = NULL,b_129 = NULL;
  if(match_cons(t, sym__2))
    {
      a_129 = ATgetArgument(t, 0);
      b_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_10(x_13, a_129, b_129, t);
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm c_129 = NULL;
  if(match_cons(t, sym__2))
    {
      c_129 = ATgetArgument(t, 0);
      if((c_129 != ATgetArgument(t, 1)))
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
  ATerm d_128 = NULL,g_128 = NULL,j_128 = NULL,k_128 = NULL;
  k_128 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_y_36, (ATerm) ATinsert(ATempty, k_128));
  t = topdown_1_0(j_13, t);
  t = topdown_1_0(o_13, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      d_128 = ATgetArgument(t, 0);
      g_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_128;
  t = collect_om_2_0(v_13, w_13, t);
  j_128 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, j_128, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, d_128, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_128), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_p_32)))))));
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = repeat_2_0(z_13, _id, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm z_36 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      LocalPopChoice(e_37);
    }
  else
    {
      t = z_36;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm f_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm w_131 (ATerm t)
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_130 = NULL,t_130 = NULL,u_130 = NULL;
            s_130 = t;
            if(match_cons(t, sym_Choice_2))
              {
                t_130 = ATgetArgument(t, 0);
                u_130 = ATgetArgument(t, 1);
                {
                  ATerm s_64 = NULL,v_64 = NULL,w_64 = NULL,m_10 = NULL;
                  t = SSLgetAnnotations(s_130);
                  s_64 = t;
                  t = t_130;
                  t = w_131(t);
                  v_64 = t;
                  t = u_130;
                  t = w_131(t);
                  w_64 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_64, w_64);
                  m_10 = t;
                  t = SSLsetAnnotations(m_10, s_64);
                }
              }
            else
              {
                ATerm e_65 = NULL,h_65 = NULL,i_65 = NULL,x_10 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    t_130 = ATgetArgument(t, 0);
                    u_130 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_130);
                e_65 = t;
                t = t_130;
                t = w_131(t);
                h_65 = t;
                t = u_130;
                t = w_131(t);
                i_65 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, h_65, i_65);
                x_10 = t;
                t = SSLsetAnnotations(x_10, e_65);
              }
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              static ATerm z_131 (ATerm t)
              {
                ATerm n_37 = t;
                int o_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_131 = NULL,s_131 = NULL,t_131 = NULL;
                    s_131 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        t_131 = ATgetArgument(t, 0);
                        r_131 = ATgetArgument(t, 1);
                        {
                          ATerm u_65 = NULL,y_65 = NULL,a_66 = NULL,t_11 = NULL;
                          t = SSLgetAnnotations(s_131);
                          u_65 = t;
                          t = t_131;
                          t = z_131(t);
                          y_65 = t;
                          t = r_131;
                          t = match_to_matrix_0_0(t);
                          a_66 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_65, a_66);
                          t_11 = t;
                          t = SSLsetAnnotations(t_11, u_65);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            t_131 = ATgetArgument(t, 0);
                            r_131 = ATgetArgument(t, 1);
                            {
                              ATerm y_66 = NULL,b_67 = NULL,j_12 = NULL;
                              t = SSLgetAnnotations(s_131);
                              y_66 = t;
                              t = r_131;
                              t = z_131(t);
                              b_67 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_131, b_67);
                              j_12 = t;
                              t = SSLsetAnnotations(j_12, y_66);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                t_131 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = t_131;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    LocalPopChoice(o_37);
                  }
                else
                  {
                    t = n_37;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = z_131(t);
            }
          }
        return(t);
      }
      ATerm p_37 = t;
      int q_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL,q_129 = NULL,w_9 = NULL;
          q_129 = t;
          if(match_cons(t, sym_Choice_2))
            {
              l_129 = ATgetArgument(t, 0);
              m_129 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_129);
          k_129 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, l_129, m_129);
          w_9 = t;
          t = SSLsetAnnotations(w_9, k_129);
          LocalPopChoice(q_37);
        }
      else
        {
          t = p_37;
          {
            ATerm r_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL,d_10 = NULL;
            w_129 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                u_129 = ATgetArgument(t, 0);
                v_129 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_129);
            r_129 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, u_129, v_129);
            d_10 = t;
            t = SSLsetAnnotations(d_10, r_129);
          }
        }
      t = w_131(t);
      LocalPopChoice(k_37);
    }
  else
    {
      t = f_37;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(y_13, t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_l_34;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_132 = NULL,f_132 = NULL,g_132 = NULL;
      e_132 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          f_132 = ATgetArgument(t, 0);
          {
            ATerm t_37 = t;
            int u_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_132 = NULL;
                t = f_132;
                t = map_1_0(e_14, t);
                i_132 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, i_132);
                LocalPopChoice(u_37);
              }
            else
              {
                t = t_37;
                {
                  ATerm v_37 = t;
                  int w_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_132;
                      t = p_9(f_132, t);
                      LocalPopChoice(w_37);
                    }
                  else
                    {
                      t = v_37;
                      {
                        ATerm x_37 = t;
                        int z_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = e_132;
                            t = n_9(f_132, t);
                            LocalPopChoice(z_37);
                          }
                        else
                          {
                            t = x_37;
                            t = e_132;
                            t = l_9(f_132, t);
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
              f_132 = ATgetArgument(t, 0);
              g_132 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_132;
          t = d_9(f_132, g_132, t);
        }
      LocalPopChoice(s_37);
    }
  else
    {
      t = r_37;
      t = Simplify_0_0(t);
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm j_132 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm b_38 = ATgetArgument(t, 0);
      if(((ATgetType(b_38) != AT_LIST) || !(ATisEmpty(b_38))))
        _fail(t);
      {
        ATerm c_38 = ATgetArgument(t, 1);
        if(((ATgetType(c_38) != AT_LIST) || !(ATisEmpty(c_38))))
          _fail(t);
      }
      j_132 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_132;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    static ATerm c_14 (ATerm t)
    {
      t = repeat_2_0(d_14, _id, t);
      t = SRTS_all(c_14, t);
      return(t);
    }
    t = scope_2_0(b_14, c_14, t);
  }
  t = strename_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm b_113 (ATerm), ATerm t)
{
  static ATerm f_14 (ATerm t)
  {
    t = topdown_1_0(b_113, t);
    return(t);
  }
  t = b_113(t);
  t = SRTS_all(f_14, t);
  return(t);
}
ATerm map_1_0 (ATerm k_125 (ATerm), ATerm t)
{
  static ATerm p_133 (ATerm t)
  {
    ATerm m_133 = NULL,n_133 = NULL,o_133 = NULL;
    m_133 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_133;
      }
    else
      {
        ATerm j_67 = NULL,m_67 = NULL,q_67 = NULL,i_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_133 = ATgetFirst((ATermList) t);
            o_133 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_133);
        j_67 = t;
        t = n_133;
        t = k_125(t);
        m_67 = t;
        t = o_133;
        t = p_133(t);
        q_67 = t;
        t = (ATerm) ATinsert(CheckATermList(q_67), m_67);
        i_13 = t;
        t = SSLsetAnnotations(i_13, j_67);
      }
    return(t);
  }
  t = p_133(t);
  return(t);
}
static ATerm k_11 (ATerm l_41, ATerm m_41, ATerm t)
{
  ATerm t_133 = NULL;
  t = SSL_fputc(l_41, m_41);
  t_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_133);
  return(t);
}
static ATerm l_11 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm u_133 = NULL;
  t = SSL_write_term_to_stream_text(d_40, e_40);
  u_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_133);
  return(t);
}
static ATerm n_11 (ATerm l_120 (ATerm), ATerm m_279, ATerm j_40, ATerm t)
{
  ATerm v_133 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_279, term_d_38);
  t = r_11(t);
  v_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_133, j_40);
  t = l_120(t);
  t = fclose_0_0(t);
  t = j_40;
  return(t);
}
static ATerm m_11 (ATerm z_39, ATerm a_40, ATerm t)
{
  ATerm w_133 = NULL;
  t = SSL_write_term_to_stream_baf(z_39, a_40);
  w_133 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_133);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm m_68 = NULL,n_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_38 = ATgetArgument(t, 0);
      if(match_cons(e_38, sym_Stream_1))
        {
          m_68 = ATgetArgument(e_38, 0);
        }
      else
        _fail(t);
      n_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(m_68, n_68, t);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL,h_69 = NULL,j_69 = NULL,k_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_38 = ATgetArgument(t, 0);
      if(match_cons(j_38, sym_Stream_1))
        {
          j_69 = ATgetArgument(j_38, 0);
        }
      else
        _fail(t);
      k_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(j_69, k_69, t);
  e_69 = t;
  t = term_k_38;
  f_69 = t;
  t = e_69;
  if(match_cons(t, sym_Stream_1))
    {
      h_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_k_38, e_69);
  t = k_11(f_69, h_69, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_134 = NULL,b_134 = NULL,c_134 = NULL,d_134 = NULL,e_134 = NULL,g_134 = NULL,h_134 = NULL,i_134 = NULL,j_134 = NULL,k_134 = NULL,o_135 = NULL,p_135 = NULL,l_13 = NULL,k_13 = NULL;
  b_134 = t;
  if(match_cons(t, sym__2))
    {
      i_134 = ATgetArgument(t, 0);
      j_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_134);
  h_134 = t;
  t = i_134;
  {
    ATerm l_38 = t;
    int o_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_14 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_134 != NULL) && (a_134 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_134 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_14, t);
        LocalPopChoice(o_38);
      }
    else
      {
        t = l_38;
        t = term_p_38;
        a_134 = t;
      }
  }
  k_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_134, j_134);
  k_13 = t;
  t = SSLsetAnnotations(k_13, h_134);
  t = b_134;
  if(match_cons(t, sym__2))
    {
      d_134 = ATgetArgument(t, 0);
      e_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_134);
  c_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_134, (ATerm) ATmakeAppl(sym__2, not_null(a_134), e_134));
  l_13 = t;
  t = SSLsetAnnotations(l_13, c_134);
  g_134 = t;
  if(match_cons(t, sym__2))
    {
      o_135 = ATgetArgument(t, 0);
      p_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,l_68 = NULL,m_13 = NULL;
        t = SSLgetAnnotations(g_134);
        e_68 = t;
        t = o_135;
        t = fetch_1_0(i_14, t);
        h_68 = t;
        t = p_135;
        if(match_cons(t, sym__2))
          {
            j_68 = ATgetArgument(t, 0);
            l_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_11(l_14, j_68, l_68, t);
        i_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_68, i_68);
        m_13 = t;
        t = SSLsetAnnotations(m_13, e_68);
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        {
          ATerm v_68 = NULL,y_68 = NULL,z_68 = NULL,d_69 = NULL,u_13 = NULL;
          t = SSLgetAnnotations(g_134);
          v_68 = t;
          t = p_135;
          if(match_cons(t, sym__2))
            {
              z_68 = ATgetArgument(t, 0);
              d_69 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_11(n_14, z_68, d_69, t);
          y_68 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_135, y_68);
          u_13 = t;
          t = SSLsetAnnotations(u_13, v_68);
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
ATerm apply_strategy_1_0 (ATerm h_140 (ATerm), ATerm t)
{
  ATerm s_135 = NULL,t_135 = NULL,u_135 = NULL,v_135 = NULL,w_135 = NULL;
  w_135 = t;
  t = dtime_0_0(t);
  t = w_135;
  t = h_140(t);
  v_135 = t;
  t = dtime_0_0(t);
  s_135 = t;
  t = v_135;
  if(match_cons(t, sym__2))
    {
      t_135 = ATgetArgument(t, 0);
      u_135 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_135), (ATerm) ATmakeAppl(sym_Runtime_1, s_135)), u_135);
  return(t);
}
static ATerm k_136 (ATerm e_136, ATerm t)
{
  t = SSL_fclose(e_136);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_136 = NULL,i_136 = NULL;
  i_136 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_136 = ATgetArgument(t, 0);
      {
        ATerm s_38 = t;
        int t_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_136);
            LocalPopChoice(t_38);
          }
        else
          {
            t = s_38;
            t = k_136(i_136, t);
          }
      }
    }
  else
    {
      t = k_136(i_136, t);
    }
  return(t);
}
static ATerm o_11 (ATerm f_40, ATerm t)
{
  t = SSL_read_term_from_stream(f_40);
  return(t);
}
static ATerm p_11 (ATerm s_66, ATerm t_66, ATerm t)
{
  t = SSL_strcat(s_66, t_66);
  return(t);
}
static ATerm q_11 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm l_136 = NULL;
  t = SSL_fopen(n_41, o_41);
  l_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_136);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_136 = NULL;
  t = SSL_stdin_stream();
  m_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_136);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_136 = NULL;
  t = SSL_stdout_stream();
  n_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_136);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_136 = NULL;
  t = SSL_stderr_stream();
  o_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_136);
  return(t);
}
static ATerm v_137 (ATerm u_136, ATerm t)
{
  ATerm v_136 = NULL;
  t = SSL_explode_term(u_136);
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_38) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_38 = ATgetArgument(t, 1);
        if(((ATgetType(v_38) == AT_LIST) && !(ATisEmpty(v_38))))
          {
            v_136 = ATgetFirst((ATermList) v_38);
            {
              ATerm x_38 = (ATerm) ATgetNext((ATermList) v_38);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_136;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_136;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_136;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_136;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm w_137 (ATerm y_136, ATerm z_136, ATerm a_137, ATerm t)
{
  ATerm b_137 = NULL,c_137 = NULL,d_137 = NULL,g_137 = NULL,a_14 = NULL;
  t = SSLgetAnnotations(a_137);
  d_137 = t;
  t = y_136;
  if(match_cons(t, sym_Path_1))
    {
      g_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_137, z_136);
  a_14 = t;
  t = SSLsetAnnotations(a_14, d_137);
  if(match_cons(t, sym__2))
    {
      b_137 = ATgetArgument(t, 0);
      c_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(b_137, c_137, t);
  return(t);
}
static ATerm x_137 (ATerm i_137, ATerm j_137, ATerm k_137, ATerm t)
{
  ATerm l_137 = NULL,m_137 = NULL,n_137 = NULL,q_137 = NULL,m_14 = NULL;
  t = SSLgetAnnotations(k_137);
  n_137 = t;
  t = SSL_is_string(i_137);
  q_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_137, j_137);
  m_14 = t;
  t = SSLsetAnnotations(m_14, n_137);
  if(match_cons(t, sym__2))
    {
      l_137 = ATgetArgument(t, 0);
      m_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(l_137, m_137, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm s_137 = NULL,t_137 = NULL,u_137 = NULL;
  s_137 = t;
  if(match_cons(t, sym__2))
    {
      t_137 = ATgetArgument(t, 0);
      u_137 = ATgetArgument(t, 1);
      {
        ATerm y_38 = t;
        int z_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_137(s_137, t);
            LocalPopChoice(z_38);
          }
        else
          {
            t = y_38;
            {
              ATerm a_39 = t;
              int b_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_137(t_137, u_137, s_137, t);
                  LocalPopChoice(b_39);
                }
              else
                {
                  t = a_39;
                  t = x_137(t_137, u_137, s_137, t);
                }
            }
          }
      }
    }
  else
    {
      t = v_137(s_137, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_137 = NULL,a_138 = NULL,b_138 = NULL,g_138 = NULL;
  g_138 = t;
  {
    ATerm c_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_138, term_f_39);
        t = r_11(t);
        LocalPopChoice(d_39);
      }
    else
      {
        t = c_39;
        {
          ATerm y_69 = NULL,z_69 = NULL;
          t = term_g_39;
          z_69 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_39, g_138);
          t = p_11(z_69, g_138, t);
          y_69 = t;
          t = SSL_perror(y_69);
          _fail(t);
        }
      }
  }
  a_138 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_11(b_138, t);
  z_137 = t;
  t = a_138;
  t = fclose_0_0(t);
  t = z_137;
  return(t);
}
ATerm fetch_1_0 (ATerm u_125 (ATerm), ATerm t)
{
  static ATerm f_139 (ATerm t)
  {
    ATerm c_139 = NULL,d_139 = NULL,e_139 = NULL;
    c_139 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_139 = ATgetFirst((ATermList) t);
        e_139 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_39 = t;
      int i_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_70 = NULL,h_70 = NULL,r_14 = NULL;
          t = SSLgetAnnotations(c_139);
          e_70 = t;
          t = d_139;
          t = u_125(t);
          h_70 = t;
          t = (ATerm) ATinsert(CheckATermList(e_139), h_70);
          r_14 = t;
          t = SSLsetAnnotations(r_14, e_70);
          LocalPopChoice(i_39);
        }
      else
        {
          t = h_39;
          {
            ATerm p_70 = NULL,s_70 = NULL,s_14 = NULL;
            t = SSLgetAnnotations(c_139);
            p_70 = t;
            t = e_139;
            t = f_139(t);
            s_70 = t;
            t = (ATerm) ATinsert(CheckATermList(s_70), d_139);
            s_14 = t;
            t = SSLsetAnnotations(s_14, p_70);
          }
        }
    }
    return(t);
  }
  t = f_139(t);
  return(t);
}
static ATerm w_11 (ATerm m_52, ATerm n_52, ATerm t)
{
  ATerm i_139 = NULL;
  t = lookup_table_0_1(m_52, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(n_52, i_139, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_122 (ATerm), ATerm t)
{
  ATerm l_139 = NULL;
  l_139 = t;
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_139 = NULL,o_139 = NULL,p_139 = NULL;
        t = term_l_39;
        o_139 = t;
        t = term_n_39;
        p_139 = t;
        t = term_o_39;
        t = w_11(o_139, p_139, t);
        n_139 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_139, term_p_39);
        t = geq_0_0(t);
        t = l_139;
        t = c_122(t);
        LocalPopChoice(k_39);
      }
    else
      {
        t = j_39;
        t = l_139;
      }
  }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm s_139 = NULL;
  s_139 = t;
  if(match_string(t, "-k"))
    {
      t = s_139;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_139;
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm t_139 = NULL,u_139 = NULL,v_139 = NULL;
  t_139 = t;
  t = SSL_string_to_int(t_139);
  u_139 = t;
  t = term_q_39;
  v_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_39, u_139);
  t = z_11(v_139, u_139, t);
  t = t_139;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  t = term_r_39;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_14, p_14, q_14, t);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm x_139 = NULL;
  x_139 = t;
  if(match_string(t, "-S"))
    {
      t = x_139;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_139;
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm y_139 = NULL,z_139 = NULL;
  t = term_n_39;
  y_139 = t;
  t = term_p_32;
  z_139 = t;
  t = term_s_39;
  t = z_11(y_139, z_139, t);
  t = term_t_39;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = term_u_39;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm a_140 = NULL,b_140 = NULL,c_140 = NULL;
  a_140 = t;
  t = SSL_string_to_int(a_140);
  b_140 = t;
  t = term_n_39;
  c_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_39, b_140);
  t = z_11(c_140, b_140, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_140);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm b_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm d_140 = NULL,e_140 = NULL;
  t = term_w_39;
  d_140 = t;
  t = term_c_17;
  e_140 = t;
  t = term_y_39;
  t = z_11(d_140, e_140, t);
  t = term_b_40;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_g_40;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_14, u_14, w_14, t);
      LocalPopChoice(i_40);
    }
  else
    {
      t = h_40;
      {
        ATerm k_40 = t;
        int l_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_14, y_14, z_14, t);
            LocalPopChoice(l_40);
          }
        else
          {
            t = k_40;
            t = Option_3_0(b_15, d_15, f_15, t);
          }
      }
    }
  return(t);
}
static ATerm z_11 (ATerm j_45, ATerm k_45, ATerm t)
{
  ATerm f_140 = NULL,g_140 = NULL;
  t = term_l_39;
  f_140 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_39, j_45, k_45);
  t = lookup_table_0_1(f_140, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(j_45, k_45, g_140, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_39, j_45, k_45);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm l_140 = NULL,m_140 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_140 = NULL,o_140 = NULL,p_140 = NULL;
      t = term_c_17;
      t = e_0(t);
      n_140 = t;
      t = term_m_40;
      o_140 = t;
      t = term_n_40;
      p_140 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_40, term_n_40, n_140);
      t = x_11(o_140, p_140, n_140, t);
      _fail(t);
    }
  else
    {
      ATerm v_140 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_140 = ATgetFirst((ATermList) t);
          m_140 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_140;
      t = c_0(t);
      t = term_c_17;
      t = d_0(t);
      v_140 = t;
      t = (ATerm) ATinsert(CheckATermList(m_140), v_140);
    }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm x_140 = NULL;
  x_140 = t;
  if(match_string(t, "-o"))
    {
      t = x_140;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_140;
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm y_140 = NULL,z_140 = NULL;
  y_140 = t;
  t = term_o_40;
  z_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_40, y_140);
  t = z_11(z_140, y_140, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_140);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = term_q_40;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_15, i_15, l_15, t);
  return(t);
}
static ATerm x_11 (ATerm t_50, ATerm u_50, ATerm s_50, ATerm t)
{
  ATerm b_141 = NULL,c_141 = NULL,d_141 = NULL,e_141 = NULL,g_141 = NULL;
  b_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
  {
    ATerm r_40 = t;
    int y_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_40 = ATgetArgument(t, 0);
            ATerm a_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
        t = w_11(t_50, u_50, t);
        LocalPopChoice(y_40);
      }
    else
      {
        t = r_40;
        t = (ATerm) ATempty;
      }
  }
  c_141 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_50, u_50, (ATerm) ATinsert(CheckATermList(c_141), s_50));
  t = lookup_table_0_1(t_50, t);
  g_141 = t;
  t = (ATerm) ATinsert(CheckATermList(c_141), s_50);
  d_141 = t;
  t = g_141;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(u_50, d_141, e_141, t);
  t = b_141;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_141 = NULL,s_141 = NULL,t_141 = NULL,u_141 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_141 = NULL,w_141 = NULL,x_141 = NULL;
      t = term_c_17;
      t = n_0(t);
      v_141 = t;
      t = term_m_40;
      w_141 = t;
      t = term_n_40;
      x_141 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_40, term_n_40, v_141);
      t = x_11(w_141, x_141, v_141, t);
      _fail(t);
    }
  else
    {
      ATerm b_142 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_141 = ATgetFirst((ATermList) t);
          s_141 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_141;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_141 = ATgetFirst((ATermList) t);
          u_141 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_141;
      t = k_0(t);
      t = t_141;
      t = l_0(t);
      b_142 = t;
      t = (ATerm) ATinsert(CheckATermList(u_141), b_142);
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm d_142 = NULL;
  d_142 = t;
  if(match_string(t, "-i"))
    {
      t = d_142;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_142;
    }
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm e_142 = NULL,f_142 = NULL;
  e_142 = t;
  t = term_b_41;
  f_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_41, e_142);
  t = z_11(f_142, e_142, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_142);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  t = term_c_41;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_15, o_15, t_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_142 = NULL,h_142 = NULL,i_142 = NULL,j_142 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_17;
  t = whoami_0_0(t);
  g_142 = t;
  t = term_d_17;
  i_142 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_41), g_142);
  j_142 = t;
  t = SSL_printnl(i_142, j_142);
  t = term_h_17;
  h_142 = t;
  t = SSL_exit(h_142);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_142 = NULL,l_142 = NULL;
  t = term_l_39;
  k_142 = t;
  t = term_e_41;
  l_142 = t;
  t = term_f_41;
  t = w_11(k_142, l_142, t);
  return(t);
}
static ATerm s_11 (ATerm b_48, ATerm c_48, ATerm t)
{
  ATerm h_41 = t;
  int k_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_48, c_48);
      LocalPopChoice(k_41);
    }
  else
    {
      t = h_41;
      t = SSL_addr(b_48, c_48);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_131 (ATerm), ATerm i_131 (ATerm), ATerm t)
{
  ATerm n_142 = NULL,o_142 = NULL,p_142 = NULL;
  n_142 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_142;
      t = h_131(t);
    }
  else
    {
      ATerm s_142 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_142 = ATgetFirst((ATermList) t);
          p_142 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_142;
      t = foldr_2_0(h_131, i_131, t);
      s_142 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_142, s_142);
      t = i_131(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_15 (ATerm t)
{
  t = term_p_32;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm i_71 = NULL,j_71 = NULL;
  if(match_cons(t, sym__2))
    {
      i_71 = ATgetArgument(t, 0);
      j_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(i_71, j_71, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_142 = NULL,x_70 = NULL,y_70 = NULL;
  t = times_0_0(t);
  y_70 = t;
  t = SSL_explode_term(y_70);
  if(match_cons(t, sym__2))
    {
      ATerm q_41 = ATgetArgument(t, 0);
      x_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_70;
  t = foldr_2_0(u_15, v_15, t);
  v_142 = t;
  t = SSL_TicksToSeconds(v_142);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_143 = NULL,j_143 = NULL,k_143 = NULL;
  g_143 = t;
  if(match_cons(t, sym__2))
    {
      j_143 = ATgetArgument(t, 0);
      k_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_143;
        if((j_143 != t))
          {
            _fail(t);
          }
        t = g_143;
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
        t = (ATerm) ATmakeAppl(sym__2, j_143, k_143);
        {
          ATerm t_41 = t;
          int u_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_143, k_143);
              LocalPopChoice(u_41);
            }
          else
            {
              t = t_41;
              t = SSL_gtr(j_143, k_143);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_143, k_143);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_122 (ATerm), ATerm t)
{
  ATerm o_143 = NULL;
  o_143 = t;
  {
    ATerm w_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_143 = NULL,r_143 = NULL,s_143 = NULL;
        t = term_l_39;
        r_143 = t;
        t = term_n_39;
        s_143 = t;
        t = term_o_39;
        t = w_11(r_143, s_143, t);
        q_143 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_143, term_h_17);
        t = geq_0_0(t);
        t = o_143;
        t = b_122(t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = w_41;
        t = o_143;
      }
  }
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm u_143 = NULL,v_143 = NULL,x_143 = NULL,y_143 = NULL;
  t = run_time_0_0(t);
  u_143 = t;
  t = term_c_17;
  t = whoami_0_0(t);
  v_143 = t;
  t = term_d_17;
  x_143 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_42), u_143), term_z_41), v_143);
  y_143 = t;
  t = SSL_printnl(x_143, y_143);
  t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_42), u_143), term_z_41), v_143));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_143 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_32;
  z_143 = t;
  t = SSL_exit(z_143);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm j_144 = NULL,k_144 = NULL;
  k_144 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_144;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_144 = ATgetArgument(t, 0);
          {
            ATerm l_72 = NULL,v_14 = NULL;
            t = SSLgetAnnotations(k_144);
            l_72 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_144);
            v_14 = t;
            t = SSLsetAnnotations(v_14, l_72);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_144;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_141 (ATerm), ATerm t)
{
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_144 = NULL,d_144 = NULL;
      t = term_l_39;
      c_144 = t;
      t = term_d_42;
      d_144 = t;
      t = term_e_42;
      t = w_11(c_144, d_144, t);
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      t = fetch_1_0(x_15, t);
    }
  t = f_141(t);
  return(t);
}
static ATerm a_12 (ATerm l_54, ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm m_144 = NULL;
  t = SSL_hashtable_put(n_54, l_54, m_54);
  m_144 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_144);
  return(t);
}
static ATerm b_12 (ATerm o_54, ATerm p_54, ATerm t)
{
  t = SSL_hashtable_get(p_54, o_54);
  return(t);
}
ATerm lookup_table_0_1 (ATerm f_52, ATerm t)
{
  ATerm v_144 = NULL;
  t = table_hashtable_0_0(t);
  v_144 = t;
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_72 = NULL;
        t = v_144;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_12(f_52, x_72, t);
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        {
          ATerm d_73 = NULL;
          t = f_52;
          t = table_create_0_0(t);
          t = v_144;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_73 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_12(f_52, d_73, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm t_54, ATerm u_54, ATerm t)
{
  ATerm y_144 = NULL;
  t = SSL_hashtable_create(t_54, u_54);
  y_144 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_144);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_144 = NULL,a_145 = NULL,c_145 = NULL,e_145 = NULL,f_145 = NULL;
  z_144 = t;
  t = term_h_42;
  e_145 = t;
  t = term_i_42;
  f_145 = t;
  t = z_144;
  t = new_hashtable_0_2(e_145, f_145, t);
  a_145 = t;
  t = z_144;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(z_144, a_145, c_145, t);
  t = z_144;
  return(t);
}
static ATerm u_11 (ATerm q_54, ATerm r_54, ATerm t)
{
  ATerm g_145 = NULL;
  t = SSL_hashtable_remove(r_54, q_54);
  g_145 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_145);
  return(t);
}
static ATerm v_11 (ATerm v_54, ATerm t)
{
  ATerm h_145 = NULL;
  t = SSL_hashtable_destroy(v_54);
  h_145 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_145);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_145 = NULL;
  t = SSL_table_hashtable();
  i_145 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_145);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_145 = NULL,k_145 = NULL,l_145 = NULL,n_145 = NULL;
  j_145 = t;
  t = table_hashtable_0_0(t);
  k_145 = t;
  t = lookup_table_0_1(j_145, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(n_145, t);
  t = k_145;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(j_145, l_145, t);
  t = j_145;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_145 = NULL,t_145 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_145 = ATgetFirst((ATermList) t);
      t_145 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_145 = NULL,y_145 = NULL;
        static ATerm z_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_145)), not_null(y_145));
          return(t);
        }
        t = t_145;
        t = i_0(t);
        if(((x_145 != NULL) && (x_145 != t)))
          _fail(t);
        else
          x_145 = t;
        t = p_145;
        t = g_0(t);
        if(((y_145 != NULL) && (y_145 != t)))
          _fail(t);
        else
          y_145 = t;
        t = t_145;
        t = reverse_acc_2_0(g_0, z_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_17;
      t = i_0(t);
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm e_146 = NULL,f_146 = NULL,g_146 = NULL,a_15 = NULL;
  g_146 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_146);
  e_146 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_146);
  a_15 = t;
  t = SSLsetAnnotations(a_15, e_146);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm i_146 = NULL;
  i_146 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_146), term_j_42);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm a_146 = NULL,b_146 = NULL;
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_146 = NULL,d_146 = NULL;
      t = term_l_39;
      c_146 = t;
      t = term_e_41;
      d_146 = t;
      t = term_f_41;
      t = w_11(c_146, d_146, t);
      LocalPopChoice(o_42);
    }
  else
    {
      t = n_42;
      t = fetch_1_0(a_16, t);
    }
  t = term_p_42;
  t = echo_0_0(t);
  t = term_m_40;
  a_146 = t;
  t = term_n_40;
  b_146 = t;
  t = term_q_42;
  t = w_11(a_146, b_146, t);
  t = reverse_acc_2_0(_id, b_16, t);
  t = map_1_0(c_16, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_146 = NULL,l_146 = NULL,n_146 = NULL;
  k_146 = t;
  {
    ATerm r_42 = t;
    int s_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_146;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_42 = ATgetFirst((ATermList) t);
                ATerm u_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_146;
          }
        LocalPopChoice(s_42);
      }
    else
      {
        t = r_42;
        t = (ATerm) ATinsert(ATempty, k_146);
      }
  }
  l_146 = t;
  t = term_p_38;
  n_146 = t;
  t = SSL_printnl(n_146, l_146);
  t = k_146;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_146 = NULL,s_146 = NULL;
  t = term_l_39;
  r_146 = t;
  t = term_e_41;
  s_146 = t;
  t = term_f_41;
  t = w_11(r_146, s_146, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm t_146 = NULL,u_146 = NULL;
  t = term_v_42;
  t_146 = t;
  t = term_c_17;
  u_146 = t;
  t = term_w_42;
  t = z_11(t_146, u_146, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  t = term_x_42;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm v_146 = NULL,w_146 = NULL,x_146 = NULL,z_146 = NULL;
  t = term_v_42;
  x_146 = t;
  t = term_c_17;
  z_146 = t;
  t = term_w_42;
  t = z_11(x_146, z_146, t);
  t = term_y_42;
  v_146 = t;
  t = term_c_17;
  w_146 = t;
  t = term_c_43;
  t = z_11(v_146, w_146, t);
  t = term_f_43;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_g_43;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_43 = t;
  int n_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_16, f_16, h_16, t);
      LocalPopChoice(n_43);
    }
  else
    {
      t = m_43;
      t = Option_3_0(i_16, j_16, k_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm t)
{
  ATerm a_147 = NULL,b_147 = NULL,c_147 = NULL,d_147 = NULL,e_147 = NULL,f_147 = NULL,c_15 = NULL;
  f_147 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_147 = ATgetFirst((ATermList) t);
      c_147 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_147);
  a_147 = t;
  t = b_147;
  t = t_98(t);
  d_147 = t;
  t = c_147;
  t = u_98(t);
  e_147 = t;
  t = (ATerm) ATinsert(CheckATermList(e_147), d_147);
  c_15 = t;
  t = SSLsetAnnotations(c_15, a_147);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_143 (ATerm), ATerm t)
{
  ATerm k_147 = NULL,l_147 = NULL,m_147 = NULL,n_147 = NULL,p_147 = NULL,q_147 = NULL,e_15 = NULL;
  k_147 = t;
  {
    ATerm p_43 = t;
    int q_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_43;
        t = i_143(t);
        LocalPopChoice(q_43);
      }
    else
      {
        t = p_43;
      }
  }
  t = k_147;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_147 = ATgetFirst((ATermList) t);
      n_147 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_147);
  l_147 = t;
  t = term_e_41;
  q_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_41, m_147);
  t = z_11(q_147, m_147, t);
  t = n_147;
  {
    static ATerm b_148 (ATerm t)
    {
      ATerm s_43 = t;
      int t_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_43 = t;
          int v_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_147 = NULL;
              u_147 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_147;
              LocalPopChoice(v_43);
            }
          else
            {
              t = u_43;
              t = i_143(t);
              t = Cons_2_0(_id, b_148, t);
            }
          LocalPopChoice(t_43);
        }
      else
        {
          t = s_43;
          {
            ATerm x_147 = NULL,y_147 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_147 = ATgetFirst((ATermList) t);
                y_147 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(y_147), (ATerm) ATmakeAppl(sym_Undefined_1, x_147));
          }
        }
      return(t);
    }
    t = b_148(t);
  }
  p_147 = t;
  t = (ATerm) ATinsert(CheckATermList(p_147), (ATerm) ATmakeAppl(sym_Program_1, m_147));
  e_15 = t;
  t = SSLsetAnnotations(e_15, l_147);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm p_148 = NULL;
  p_148 = t;
  if(match_string(t, "--help"))
    {
      t = p_148;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_148;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_148;
        }
    }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm q_148 = NULL,r_148 = NULL;
  t = term_d_42;
  q_148 = t;
  t = term_c_17;
  r_148 = t;
  t = term_y_43;
  t = z_11(q_148, r_148, t);
  t = term_b_44;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = term_e_44;
  return(t);
}
static ATerm p_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_143 (ATerm), ATerm t)
{
  ATerm h_148 = NULL,i_148 = NULL,j_148 = NULL,k_148 = NULL,l_148 = NULL,m_148 = NULL,n_148 = NULL,o_148 = NULL;
  j_148 = t;
  t = term_m_40;
  k_148 = t;
  t = term_h_44;
  t = lookup_table_0_1(k_148, t);
  o_148 = t;
  t = term_n_40;
  l_148 = t;
  t = (ATerm) ATempty;
  m_148 = t;
  t = o_148;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(l_148, m_148, n_148, t);
  t = j_148;
  {
    static ATerm l_16 (ATerm t)
    {
      ATerm i_44 = t;
      int j_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_143(t);
          LocalPopChoice(j_44);
        }
      else
        {
          t = i_44;
          {
            ATerm k_44 = t;
            int l_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_16, n_16, o_16, t);
                LocalPopChoice(l_44);
              }
            else
              {
                t = k_44;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_16, t);
  }
  {
    ATerm m_44 = t;
    int n_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_149 = NULL;
        d_149 = t;
        {
          ATerm o_44 = t;
          int q_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_73 = NULL;
              t = d_149;
              {
                ATerm r_44 = t;
                int t_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_73 = NULL,m_73 = NULL;
                    t = term_l_39;
                    l_73 = t;
                    t = term_d_42;
                    m_73 = t;
                    t = term_e_42;
                    t = w_11(l_73, m_73, t);
                    LocalPopChoice(t_44);
                  }
                else
                  {
                    t = r_44;
                    t = fetch_1_0(p_16, t);
                  }
              }
              t = d_149;
              t = default_system_usage_0_0(t);
              t = term_p_32;
              j_73 = t;
              t = SSL_exit(j_73);
              LocalPopChoice(q_44);
            }
          else
            {
              t = o_44;
              {
                ATerm f_74 = NULL,g_74 = NULL,i_74 = NULL;
                t = term_l_39;
                g_74 = t;
                t = term_v_42;
                i_74 = t;
                t = term_w_44;
                t = w_11(g_74, i_74, t);
                t = d_149;
                t = default_system_about_0_0(t);
                t = term_p_32;
                f_74 = t;
                t = SSL_exit(f_74);
              }
            }
        }
        LocalPopChoice(n_44);
      }
    else
      {
        t = m_44;
        {
          ATerm x_44 = t;
          int a_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_149 = NULL,f_149 = NULL,g_149 = NULL;
              static ATerm q_16 (ATerm t)
              {
                ATerm h_149 = NULL,i_149 = NULL,j_149 = NULL,h_15 = NULL;
                j_149 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_149 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_149);
                h_149 = t;
                t = i_149;
                if(((h_148 != NULL) && (h_148 != t)))
                  _fail(t);
                else
                  h_148 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_149);
                h_15 = t;
                t = SSLsetAnnotations(h_15, h_149);
                return(t);
              }
              t = fetch_1_0(q_16, t);
              t = term_d_17;
              f_149 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_148)), term_c_45);
              g_149 = t;
              t = SSL_printnl(f_149, g_149);
              t = (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_148)), term_c_45));
              t = default_system_usage_0_0(t);
              t = term_h_17;
              e_149 = t;
              t = SSL_exit(e_149);
              LocalPopChoice(a_45);
            }
          else
            {
              t = x_44;
            }
        }
      }
  }
  i_148 = t;
  t = term_m_40;
  t = table_destroy_0_0(t);
  t = i_148;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_141 (ATerm), ATerm i_141 (ATerm), ATerm j_141 (ATerm), ATerm k_141 (ATerm), ATerm t)
{
  ATerm p_149 = NULL,q_149 = NULL,r_149 = NULL,s_149 = NULL,t_149 = NULL;
  t = parse_options_1_0(h_141, t);
  p_149 = t;
  t = term_d_45;
  t = table_create_0_0(t);
  t = term_d_45;
  q_149 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_45, term_e_45, p_149);
  t = lookup_table_0_1(q_149, t);
  t_149 = t;
  t = term_e_45;
  r_149 = t;
  t = t_149;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(r_149, p_149, s_149, t);
  t = p_149;
  t = j_141(t);
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_141, t);
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        {
          ATerm i_45 = t;
          int l_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_141(t);
              t = report_success_0_0(t);
              LocalPopChoice(l_45);
            }
          else
            {
              t = i_45;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = if_verbose2_1_0(x_16, t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm u_149 = NULL,v_149 = NULL;
  t = term_n_45;
  u_149 = t;
  t = term_c_17;
  v_149 = t;
  t = term_o_45;
  t = z_11(u_149, v_149, t);
  t = term_t_45;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm w_149 = NULL,x_149 = NULL,y_149 = NULL,z_149 = NULL,a_150 = NULL,b_150 = NULL;
  w_149 = t;
  t = term_l_39;
  a_150 = t;
  t = term_e_41;
  b_150 = t;
  t = term_f_41;
  t = w_11(a_150, b_150, t);
  x_149 = t;
  t = term_d_17;
  y_149 = t;
  t = (ATerm) ATinsert(ATempty, x_149);
  z_149 = t;
  t = SSL_printnl(y_149, z_149);
  t = w_149;
  return(t);
}
ATerm iowrap_3_0 (ATerm q_140 (ATerm), ATerm r_140 (ATerm), ATerm s_140 (ATerm), ATerm t)
{
  static ATerm r_16 (ATerm t)
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_140(t);
        LocalPopChoice(x_45);
      }
    else
      {
        t = w_45;
        {
          ATerm y_45 = t;
          int z_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(z_45);
            }
          else
            {
              t = y_45;
              {
                ATerm b_46 = t;
                int g_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(g_46);
                  }
                else
                  {
                    t = b_46;
                    {
                      ATerm h_46 = t;
                      int i_46 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_16, v_16, w_16, t);
                          LocalPopChoice(i_46);
                        }
                      else
                        {
                          t = h_46;
                          {
                            ATerm j_46 = t;
                            int k_46 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(k_46);
                              }
                            else
                              {
                                t = j_46;
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
  static ATerm t_16 (ATerm t)
  {
    ATerm c_150 = NULL,d_150 = NULL,e_150 = NULL;
    d_150 = t;
    {
      ATerm l_46 = t;
      int m_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm y_16 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_150 != NULL) && (c_150 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_150 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(y_16, t);
          LocalPopChoice(m_46);
        }
      else
        {
          t = l_46;
          t = term_n_46;
          c_150 = t;
        }
    }
    t = not_null(c_150);
    t = ReadFromFile_0_0(t);
    e_150 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_150, e_150);
    t = apply_strategy_1_0(q_140, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(r_16, s_140, s_16, t_16, t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm l_150 = NULL,m_150 = NULL,n_150 = NULL,o_150 = NULL,p_150 = NULL,q_150 = NULL,r_150 = NULL,s_150 = NULL,u_150 = NULL,v_150 = NULL,w_150 = NULL,x_150 = NULL,y_150 = NULL,z_150 = NULL,a_151 = NULL,b_151 = NULL,c_151 = NULL,d_151 = NULL,e_151 = NULL,s_15 = NULL,r_15 = NULL,q_15 = NULL,p_15 = NULL,k_15 = NULL;
  e_151 = t;
  if(match_cons(t, sym__2))
    {
      m_150 = ATgetArgument(t, 0);
      n_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_151);
  l_150 = t;
  t = n_150;
  if(match_cons(t, sym_Specification_1))
    {
      p_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_150);
  o_150 = t;
  t = p_150;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_150 = ATgetFirst((ATermList) t);
      u_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_150);
  r_150 = t;
  t = u_150;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_150 = ATgetFirst((ATermList) t);
      y_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_150);
  w_150 = t;
  t = x_150;
  if(match_cons(t, sym_Strategies_1))
    {
      b_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_150);
  a_151 = t;
  t = b_151;
  t = map_1_0(a_17, t);
  c_151 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_151);
  k_15 = t;
  t = SSLsetAnnotations(k_15, a_151);
  d_151 = t;
  t = y_150;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_150), d_151);
  p_15 = t;
  t = SSLsetAnnotations(p_15, w_150);
  z_150 = t;
  t = (ATerm) ATinsert(CheckATermList(z_150), s_150);
  q_15 = t;
  t = SSLsetAnnotations(q_15, r_150);
  v_150 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_150);
  r_15 = t;
  t = SSLsetAnnotations(r_15, o_150);
  q_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_150, q_150);
  s_15 = t;
  t = SSLsetAnnotations(s_15, l_150);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm v_151 = NULL,w_151 = NULL,x_151 = NULL,y_151 = NULL,z_151 = NULL;
  z_151 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_151 = ATgetArgument(t, 0);
      w_151 = ATgetArgument(t, 1);
      x_151 = ATgetArgument(t, 2);
      y_151 = ATgetArgument(t, 3);
      {
        ATerm o_46 = t;
        int q_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_75 = NULL,t_75 = NULL,j_15 = NULL;
            t = SSLgetAnnotations(z_151);
            e_75 = t;
            t = y_151;
            t = topdown_1_0(b_17, t);
            t = match_to_dfa_0_0(t);
            t_75 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_151, w_151, x_151, t_75);
            j_15 = t;
            t = SSLsetAnnotations(j_15, e_75);
            LocalPopChoice(q_46);
          }
        else
          {
            t = o_46;
            t = z_151;
          }
      }
    }
  else
    {
      t = z_151;
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm y_75 = NULL;
  y_75 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm r_46 = t;
      int w_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_75 = NULL;
          t = y_75;
          t = new_0_0(t);
          z_75 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_75), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_75)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_75))));
          LocalPopChoice(w_46);
        }
      else
        {
          t = r_46;
          t = y_75;
        }
    }
  else
    {
      t = y_75;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_16, _fail, default_usage_0_0, t);
  return(t);
}
