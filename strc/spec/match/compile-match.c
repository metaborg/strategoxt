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
Symbol sym_FunType_2;
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
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_45;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_h_43;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_t_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_q_40;
ATerm term_p_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_v_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_l_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_q_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_e_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_a_38;
ATerm term_p_37;
ATerm term_i_37;
ATerm term_b_37;
ATerm term_y_36;
ATerm term_g_36;
ATerm term_c_36;
ATerm term_u_35;
ATerm term_i_34;
ATerm term_w_31;
ATerm term_t_31;
ATerm term_s_29;
ATerm term_n_29;
ATerm term_k_29;
ATerm term_a_29;
ATerm term_o_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_s_23;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_p_17;
void init_constant_terms (void)
{
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Sort_2, term_f_24, (ATerm) ATempty);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_ConstType_1, term_g_24);
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_a_38, term_k_29);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_29);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym__2, term_l_38, term_p_17);
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym__2, term_g_39, term_h_39);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(sym__2, term_h_41, term_p_17);
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym__2, term_k_41, term_p_17);
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_41));
  term_t_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym__2, term_p_40, term_p_17);
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym__2, term_x_43, term_p_17);
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm a_0 (ATerm);
ATerm b_0 (ATerm);
ATerm c_0 (ATerm);
ATerm w_0 (ATerm);
ATerm x_0 (ATerm);
ATerm a_1 (ATerm);
ATerm h_1 (ATerm);
ATerm j_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm a_2 (ATerm);
ATerm spaste_1_0 (ATerm r_97 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm i_8 (ATerm p_30, ATerm o_30, ATerm);
ATerm SVar_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm j_8 (ATerm c_112 (ATerm), ATerm d_112 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_46, ATerm y_46, ATerm x_46, ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm k_8 (ATerm w_111 (ATerm), ATerm x_111 (ATerm (ATerm), ATerm), ATerm r_46, ATerm u_46, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm k_112 (ATerm), ATerm);
ATerm rename_4_0 (ATerm r_111 (ATerm (ATerm), ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_111 (ATerm (ATerm), ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm tpaste_1_0 (ATerm n_97 (ATerm), ATerm);
ATerm Var_1_0 (ATerm c_83 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm e_3 (ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm p_9 (ATerm x_72, ATerm w_72, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm r_99 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm p_0 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm x_4 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm simple_strategy_0_0 (ATerm);
ATerm p_8 (ATerm u_106 (ATerm), ATerm x_38, ATerm w_38, ATerm);
ATerm tvars_matrix_boundin_3_0 (ATerm q_127 (ATerm), ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm);
ATerm a_5 (ATerm);
ATerm e_5 (ATerm);
ATerm i_5 (ATerm);
ATerm l_5 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm v_8 (ATerm w_106 (ATerm), ATerm z_38, ATerm y_38, ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm x_8 (ATerm r_657, ATerm w_657, ATerm y_65, ATerm);
ATerm while_not_2_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm);
ATerm for_3_0 (ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm q_90 (ATerm c_89, ATerm d_89, ATerm e_89, ATerm);
ATerm f_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm free_vars_3_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm x_7 (ATerm);
ATerm z_7 (ATerm);
ATerm RowLet_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm a_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm z_8 (ATerm t_76, ATerm s_76, ATerm);
ATerm a_9 (ATerm b_111 (ATerm), ATerm e_44, ATerm c_44, ATerm);
ATerm w_8 (ATerm);
ATerm default_state_0_0 (ATerm);
ATerm y_8 (ATerm);
ATerm b_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm MatchCons_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm);
ATerm c_9 (ATerm b_127 (ATerm), ATerm g_75, ATerm d_75, ATerm e_75, ATerm f_75, ATerm);
ATerm d_9 (ATerm z_74, ATerm a_75, ATerm b_75, ATerm);
ATerm filter_1_0 (ATerm f_111 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm x_105 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm ConsArgs_0_0 (ATerm);
ATerm w_9 (ATerm);
ATerm outedges_0_0 (ATerm);
ATerm s_104 (ATerm i_102, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm a_10 (ATerm);
ATerm i_10 (ATerm);
ATerm k_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm h_9 (ATerm m_76, ATerm);
ATerm n_10 (ATerm);
ATerm q_10 (ATerm);
ATerm j_9 (ATerm c_76, ATerm);
ATerm r_10 (ATerm);
ATerm l_9 (ATerm a_76, ATerm);
ATerm repeat_1_0 (ATerm q_115 (ATerm), ATerm);
ATerm n_9 (ATerm r_44, ATerm s_44, ATerm);
ATerm end_scope_1_0 (ATerm y_110 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_110 (ATerm), ATerm);
ATerm scope_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm e_105 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm r_112 (ATerm z_111, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm a_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm e_11 (ATerm);
ATerm MatrixMerge_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm o_98 (ATerm), ATerm);
ATerm w_10 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm f_39, ATerm e_39, ATerm);
ATerm x_10 (ATerm b_107 (ATerm), ATerm b_39, ATerm a_39, ATerm);
ATerm foldr_3_0 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm);
ATerm x_11 (ATerm);
ATerm collect_om_2_0 (ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm);
ATerm CollectSubst_0_0 (ATerm);
ATerm IgnoreVar_0_0 (ATerm);
ATerm a_12 (ATerm);
ATerm c_12 (ATerm);
ATerm e_12 (ATerm);
ATerm g_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm k_12 (ATerm);
ATerm CollectSplit_2_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm);
ATerm collect_split_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm);
ATerm m_12 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm nzip0_1_0 (ATerm k_103 (ATerm), ATerm);
ATerm Propagate_0_0 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm d_13 (ATerm);
ATerm term_to_matrix_0_0 (ATerm);
ATerm e_13 (ATerm);
ATerm h_13 (ATerm);
ATerm match_to_matrix_0_0 (ATerm);
ATerm j_13 (ATerm);
ATerm m_13 (ATerm);
ATerm n_13 (ATerm);
ATerm match_to_dfa_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm topdown_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm o_104 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm);
ATerm j_11 (ATerm g_55, ATerm h_55, ATerm);
ATerm k_11 (ATerm u_58, ATerm v_58, ATerm);
ATerm m_11 (ATerm n_120 (ATerm), ATerm t_530, ATerm y_58, ATerm);
ATerm l_11 (ATerm q_58, ATerm r_58, ATerm);
ATerm s_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm p_123 (ATerm), ATerm);
ATerm w_130 (ATerm p_130, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm n_11 (ATerm w_58, ATerm);
ATerm o_11 (ATerm i_55, ATerm j_55, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_132 (ATerm g_131, ATerm);
ATerm k_132 (ATerm k_131, ATerm l_131, ATerm m_131, ATerm);
ATerm l_132 (ATerm v_131, ATerm w_131, ATerm x_131, ATerm);
ATerm p_11 (ATerm);
ATerm z_13 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm y_104 (ATerm), ATerm);
ATerm i_11 (ATerm w_52, ATerm x_52, ATerm);
ATerm debug_1_0 (ATerm l_120 (ATerm), ATerm);
ATerm a_14 (ATerm);
ATerm g_14 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_121 (ATerm), ATerm);
ATerm h_14 (ATerm);
ATerm i_14 (ATerm);
ATerm j_14 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm s_14 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm v_11 (ATerm x_59, ATerm y_59, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm t_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm t_11 (ATerm m_44, ATerm n_44, ATerm l_44, ATerm);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm q_11 (ATerm q_42, ATerm r_42, ATerm);
ATerm foldr_2_0 (ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_121 (ATerm), ATerm);
ATerm h_15 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_15 (ATerm);
ATerm need_help_1_0 (ATerm n_124 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm s_11 (ATerm d_46, ATerm e_46, ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm q_126 (ATerm), ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm i_16 (ATerm);
ATerm parse_options_1_0 (ATerm p_126 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm);
ATerm p_16 (ATerm);
ATerm z_16 (ATerm);
ATerm a_17 (ATerm);
ATerm b_17 (ATerm);
ATerm e_17 (ATerm);
ATerm iowrap_3_0 (ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_0 = NULL,f_0 = NULL,o_0 = NULL,q_0 = NULL,u_0 = NULL;
  e_0 = t;
  t = term_p_17;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_q_17;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_17), f_0), term_t_17);
  u_0 = t;
  t = SSL_printnl(q_0, u_0);
  t = term_v_17;
  o_0 = t;
  t = SSL_exit(o_0);
  t = e_0;
  return(t);
}
ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_17 = ATgetArgument(t, 0);
      if(((ATgetType(w_17) != AT_LIST) || !(ATisEmpty(w_17))))
        _fail(t);
      {
        ATerm y_17 = ATgetArgument(t, 1);
        if(((ATgetType(y_17) != AT_LIST) || !(ATisEmpty(y_17))))
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
  ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_18 = ATgetArgument(t, 0);
      if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
        {
          b_1 = ATgetFirst((ATermList) a_18);
          c_1 = (ATerm) ATgetNext((ATermList) a_18);
        }
      else
        _fail(t);
      {
        ATerm b_18 = ATgetArgument(t, 1);
        if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
          {
            d_1 = ATgetFirst((ATermList) b_18);
            e_1 = (ATerm) ATgetNext((ATermList) b_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_1, d_1), (ATerm) ATmakeAppl(sym__2, c_1, e_1));
  return(t);
}
ATerm c_0 (ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL;
  if(match_cons(t, sym__2))
    {
      f_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_1), f_1);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm i_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
  if(match_cons(t, sym__2))
    {
      i_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_1;
  {
    ATerm e_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm h_18 = ATgetArgument(t, 0);
            k_1 = ATgetArgument(t, 1);
            l_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(g_18);
        t = (ATerm) ATmakeAppl(sym_SDef_3, n_1, k_1, l_1);
      }
    else
      {
        t = e_18;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm i_18 = ATgetArgument(t, 0);
            k_1 = ATgetArgument(t, 1);
            l_1 = ATgetArgument(t, 2);
            m_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_1, k_1, l_1, m_1);
      }
  }
  return(t);
}
ATerm x_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_18 = ATgetArgument(t, 0);
      if(((ATgetType(j_18) != AT_LIST) || !(ATisEmpty(j_18))))
        _fail(t);
      {
        ATerm k_18 = ATgetArgument(t, 1);
        if(((ATgetType(k_18) != AT_LIST) || !(ATisEmpty(k_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,b_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_18 = ATgetArgument(t, 0);
      if(((ATgetType(l_18) == AT_LIST) && !(ATisEmpty(l_18))))
        {
          v_4 = ATgetFirst((ATermList) l_18);
          w_4 = (ATerm) ATgetNext((ATermList) l_18);
        }
      else
        _fail(t);
      {
        ATerm m_18 = ATgetArgument(t, 1);
        if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
          {
            b_5 = ATgetFirst((ATermList) m_18);
            d_5 = (ATerm) ATgetNext((ATermList) m_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_4, b_5), (ATerm) ATmakeAppl(sym__2, w_4, d_5));
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm f_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      f_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_5), f_5);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm k_5 = NULL,m_5 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      k_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5;
  {
    ATerm n_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_5);
      }
    else
      {
        t = n_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_18 = ATgetArgument(t, 0);
            m_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_5, m_5);
      }
  }
  return(t);
}
ATerm o_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if(((ATgetType(r_18) != AT_LIST) || !(ATisEmpty(r_18))))
        _fail(t);
      {
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) != AT_LIST) || !(ATisEmpty(s_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm l_7 = NULL,o_7 = NULL,s_7 = NULL,t_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_18 = ATgetArgument(t, 0);
      if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
        {
          l_7 = ATgetFirst((ATermList) t_18);
          o_7 = (ATerm) ATgetNext((ATermList) t_18);
        }
      else
        _fail(t);
      {
        ATerm u_18 = ATgetArgument(t, 1);
        if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
          {
            s_7 = ATgetFirst((ATermList) u_18);
            t_7 = (ATerm) ATgetNext((ATermList) u_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_7, s_7), (ATerm) ATmakeAppl(sym__2, o_7, t_7));
  return(t);
}
ATerm q_1 (ATerm t)
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
ATerm r_1 (ATerm t)
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
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_8);
      }
    else
      {
        t = v_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_18 = ATgetArgument(t, 0);
            c_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_8, c_8);
      }
  }
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_18 = ATgetArgument(t, 0);
      if(((ATgetType(z_18) != AT_LIST) || !(ATisEmpty(z_18))))
        _fail(t);
      {
        ATerm a_19 = ATgetArgument(t, 1);
        if(((ATgetType(a_19) != AT_LIST) || !(ATisEmpty(a_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,e_10 = NULL,f_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_19 = ATgetArgument(t, 0);
      if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
        {
          b_10 = ATgetFirst((ATermList) b_19);
          c_10 = (ATerm) ATgetNext((ATermList) b_19);
        }
      else
        _fail(t);
      {
        ATerm h_19 = ATgetArgument(t, 1);
        if(((ATgetType(h_19) == AT_LIST) && !(ATisEmpty(h_19))))
          {
            e_10 = ATgetFirst((ATermList) h_19);
            f_10 = (ATerm) ATgetNext((ATermList) h_19);
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
ATerm u_1 (ATerm t)
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
ATerm a_2 (ATerm t)
{
  ATerm j_10 = NULL,o_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10;
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_19);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_10);
      }
    else
      {
        t = i_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_19 = ATgetArgument(t, 0);
            o_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_10, o_10);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,q_8 = NULL,r_8 = NULL,e_9 = NULL;
  q_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_8 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
      {
        ATerm v_0 = NULL,y_0 = NULL,z_0 = NULL,v_1 = NULL;
        t = SSLgetAnnotations(q_8);
        v_0 = t;
        t = r_8;
        t = r_97(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_8, z_0);
        t = genzip_4_0(a_0, b_0, c_0, w_0, t);
        y_0 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, y_0, e_9);
        v_1 = t;
        t = SSLsetAnnotations(v_1, v_0);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_8 = ATgetArgument(t, 0);
          e_9 = ATgetArgument(t, 1);
          n_8 = ATgetArgument(t, 2);
          {
            ATerm c_3 = NULL,q_4 = NULL,s_4 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(q_8);
            c_3 = t;
            t = e_9;
            t = r_97(t);
            s_4 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_9, s_4);
            t = genzip_4_0(x_0, a_1, h_1, j_1, t);
            q_4 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, r_8, q_4, n_8);
            w_1 = t;
            t = SSLsetAnnotations(w_1, c_3);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              r_8 = ATgetArgument(t, 0);
              e_9 = ATgetArgument(t, 1);
              n_8 = ATgetArgument(t, 2);
              o_8 = ATgetArgument(t, 3);
              {
                ATerm j_6 = NULL,z_6 = NULL,b_7 = NULL,x_1 = NULL;
                t = SSLgetAnnotations(q_8);
                j_6 = t;
                t = e_9;
                t = r_97(t);
                b_7 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_9, b_7);
                t = genzip_4_0(o_1, p_1, q_1, r_1, t);
                z_6 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_8, z_6, n_8, o_8);
                x_1 = t;
                t = SSLsetAnnotations(x_1, j_6);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  r_8 = ATgetArgument(t, 0);
                  e_9 = ATgetArgument(t, 1);
                  n_8 = ATgetArgument(t, 2);
                  o_8 = ATgetArgument(t, 3);
                  {
                    ATerm t_9 = NULL,y_9 = NULL,z_9 = NULL,y_1 = NULL;
                    t = SSLgetAnnotations(q_8);
                    t_9 = t;
                    t = e_9;
                    t = r_97(t);
                    z_9 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_9, z_9);
                    t = genzip_4_0(s_1, t_1, u_1, a_2, t);
                    y_9 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, r_8, y_9, n_8, o_8);
                    y_1 = t;
                    t = SSLsetAnnotations(y_1, t_9);
                  }
                }
              else
                {
                  ATerm u_11 = NULL,y_11 = NULL,z_1 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      r_8 = ATgetArgument(t, 0);
                      e_9 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(q_8);
                  u_11 = t;
                  t = r_8;
                  t = r_97(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_11 = ATgetFirst((ATermList) t);
                      {
                        ATerm o_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, y_11, e_9);
                  z_1 = t;
                  t = SSLsetAnnotations(z_1, u_11);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_14 = ATgetArgument(t, 0);
      y_14 = ATgetArgument(t, 1);
      {
        ATerm n_12 = NULL,q_12 = NULL,r_12 = NULL,h_2 = NULL;
        t = SSLgetAnnotations(w_14);
        n_12 = t;
        t = x_14;
        t = s_97(t);
        q_12 = t;
        t = y_14;
        t = s_97(t);
        r_12 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, q_12, r_12);
        h_2 = t;
        t = SSLsetAnnotations(h_2, n_12);
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
            ATerm i_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(w_14);
            i_13 = t;
            t = x_14;
            t = u_97(t);
            w_13 = t;
            t = y_14;
            t = u_97(t);
            x_13 = t;
            t = u_14;
            t = s_97(t);
            y_13 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, w_13, x_13, y_13);
            i_2 = t;
            t = SSLsetAnnotations(i_2, i_13);
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
                ATerm g_15 = NULL,w_15 = NULL,y_15 = NULL,a_16 = NULL,b_16 = NULL,j_2 = NULL;
                t = SSLgetAnnotations(w_14);
                g_15 = t;
                t = x_14;
                t = u_97(t);
                w_15 = t;
                t = y_14;
                t = u_97(t);
                y_15 = t;
                t = u_14;
                t = u_97(t);
                a_16 = t;
                t = v_14;
                t = s_97(t);
                b_16 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, w_15, y_15, a_16, b_16);
                j_2 = t;
                t = SSLsetAnnotations(j_2, g_15);
              }
            }
          else
            {
              ATerm q_16 = NULL,c_17 = NULL,d_17 = NULL,l_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  x_14 = ATgetArgument(t, 0);
                  y_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_14);
              q_16 = t;
              t = x_14;
              t = u_97(t);
              c_17 = t;
              t = y_14;
              t = s_97(t);
              d_17 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, c_17, d_17);
              l_2 = t;
              t = SSLsetAnnotations(l_2, q_16);
            }
        }
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm k_15 = NULL;
  ATerm p_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          k_15 = ATgetArgument(t, 0);
          {
            ATerm r_19 = ATgetArgument(t, 1);
          }
          {
            ATerm s_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_19);
      t = k_15;
    }
  else
    {
      t = p_19;
      if(match_cons(t, sym_SDefT_4))
        {
          k_15 = ATgetArgument(t, 0);
          {
            ATerm t_19 = ATgetArgument(t, 1);
          }
          {
            ATerm u_19 = ATgetArgument(t, 2);
          }
          {
            ATerm v_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_15;
    }
  return(t);
}
ATerm i_8 (ATerm p_30, ATerm o_30, ATerm t)
{
  t = p_30;
  t = map_1_0(b_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,u_2 = NULL;
  v_15 = t;
  if(match_cons(t, sym_SVar_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_15);
  q_15 = t;
  t = t_15;
  t = l_86(t);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, u_15);
  u_2 = t;
  t = SSLsetAnnotations(u_2, q_15);
  return(t);
}
ATerm j_8 (ATerm c_112 (ATerm), ATerm d_112 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_46, ATerm y_46, ATerm x_46, ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm x_15 = NULL;
    x_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_15, x_46);
    t = c_112(t);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm z_15 = NULL;
    z_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_15, y_46);
    t = c_112(t);
    return(t);
  }
  t = z_46;
  t = d_112(c_2, d_2, _id, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_19 = ATgetArgument(t, 0);
      if(((ATgetType(w_19) != AT_LIST) || !(ATisEmpty(w_19))))
        _fail(t);
      {
        ATerm y_19 = ATgetArgument(t, 1);
        if(((ATgetType(y_19) != AT_LIST) || !(ATisEmpty(y_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_19 = ATgetArgument(t, 0);
      if(((ATgetType(z_19) == AT_LIST) && !(ATisEmpty(z_19))))
        {
          t_16 = ATgetFirst((ATermList) z_19);
          u_16 = (ATerm) ATgetNext((ATermList) z_19);
        }
      else
        _fail(t);
      {
        ATerm a_20 = ATgetArgument(t, 1);
        if(((ATgetType(a_20) == AT_LIST) && !(ATisEmpty(a_20))))
          {
            v_16 = ATgetFirst((ATermList) a_20);
            w_16 = (ATerm) ATgetNext((ATermList) a_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_16, v_16), (ATerm) ATmakeAppl(sym__2, u_16, w_16));
  return(t);
}
ATerm g_2 (ATerm t)
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
ATerm k_8 (ATerm w_111 (ATerm), ATerm x_111 (ATerm (ATerm), ATerm), ATerm r_46, ATerm u_46, ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,s_16 = NULL;
  t = r_46;
  t = w_111(t);
  j_16 = t;
  t = map_1_0(new_0_0, t);
  k_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_16, k_16);
  t = genzip_4_0(e_2, f_2, g_2, _id, t);
  s_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_16, u_46);
  t = conc_0_0(t);
  l_16 = t;
  t = r_46;
  {
    ATerm k_2 (ATerm t)
    {
      t = k_16;
      return(t);
    }
    t = x_111(k_2, t);
    m_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, m_16, u_46, l_16);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm f_17 = NULL,h_17 = NULL,n_17 = NULL,o_17 = NULL,r_17 = NULL,x_17 = NULL,z_17 = NULL;
  n_17 = t;
  if(match_cons(t, sym__2))
    {
      o_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_17 = ATgetFirst((ATermList) t);
      z_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_17;
  if(match_cons(t, sym__2))
    {
      f_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      {
        ATerm b_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_17;
            if((o_17 != t))
              {
                _fail(t);
              }
            t = h_17;
            ;
            LocalPopChoice(e_20);
          }
        else
          {
            t = b_20;
            t = (ATerm) ATmakeAppl(sym__2, o_17, z_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, o_17, z_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm g_19 (ATerm t)
  {
    ATerm l_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_112(t);
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = l_20;
        {
          ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
          ATerm m_2 (ATerm t)
          {
            ATerm s_17 = NULL;
            s_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_17, not_null(f_19));
            t = g_19(t);
            return(t);
          }
          d_19 = t;
          if(match_cons(t, sym__2))
            {
              e_19 = ATgetArgument(t, 0);
              if(((f_19 != NULL) && (f_19 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                f_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_19;
          t = SRTS_all(m_2, t);
        }
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm rename_4_0 (ATerm r_111 (ATerm (ATerm), ATerm), ATerm s_111 (ATerm), ATerm t_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm u_111 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm n_19 = NULL;
  ATerm j_22 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm w_21 = NULL,z_21 = NULL,a_22 = NULL;
      w_21 = t;
      if(match_cons(t, sym__2))
        {
          z_21 = ATgetArgument(t, 0);
          a_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              ATerm h_22 = NULL;
              h_22 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_22, a_22);
              t = lookup_0_0(t);
              return(t);
            }
            t = z_21;
            t = r_111(o_2, t);
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            {
              ATerm c_18 = NULL,d_18 = NULL,f_18 = NULL;
              t = w_21;
              t = k_8(s_111, u_111, z_21, a_22, t);
              if(match_cons(t, sym__3))
                {
                  c_18 = ATgetArgument(t, 0);
                  d_18 = ATgetArgument(t, 1);
                  f_18 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = j_8(j_22, t_111, c_18, d_18, f_18, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(n_2, t);
    return(t);
  }
  n_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_19, (ATerm) ATempty);
  t = j_22(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_20 = ATgetArgument(t, 0);
      if(((ATgetType(s_20) != AT_LIST) || !(ATisEmpty(s_20))))
        _fail(t);
      {
        ATerm t_20 = ATgetArgument(t, 1);
        if(((ATgetType(t_20) != AT_LIST) || !(ATisEmpty(t_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_20 = ATgetArgument(t, 0);
      if(((ATgetType(u_20) == AT_LIST) && !(ATisEmpty(u_20))))
        {
          f_20 = ATgetFirst((ATermList) u_20);
          g_20 = (ATerm) ATgetNext((ATermList) u_20);
        }
      else
        _fail(t);
      {
        ATerm v_20 = ATgetArgument(t, 1);
        if(((ATgetType(v_20) == AT_LIST) && !(ATisEmpty(v_20))))
          {
            h_20 = ATgetFirst((ATermList) v_20);
            i_20 = (ATerm) ATgetNext((ATermList) v_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_20, h_20), (ATerm) ATmakeAppl(sym__2, g_20, i_20));
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_20), j_20);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm m_20 = NULL,o_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      m_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_20;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_20);
      }
    else
      {
        t = w_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_20 = ATgetArgument(t, 0);
            o_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_20, o_20);
      }
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      if(((ATgetType(a_21) != AT_LIST) || !(ATisEmpty(a_21))))
        _fail(t);
      {
        ATerm b_21 = ATgetArgument(t, 1);
        if(((ATgetType(b_21) != AT_LIST) || !(ATisEmpty(b_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,s_21 = NULL,t_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
        {
          o_21 = ATgetFirst((ATermList) c_21);
          p_21 = (ATerm) ATgetNext((ATermList) c_21);
        }
      else
        _fail(t);
      {
        ATerm d_21 = ATgetArgument(t, 1);
        if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
          {
            s_21 = ATgetFirst((ATermList) d_21);
            t_21 = (ATerm) ATgetNext((ATermList) d_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_21, s_21), (ATerm) ATmakeAppl(sym__2, p_21, t_21));
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm u_21 = NULL,x_21 = NULL;
  if(match_cons(t, sym__2))
    {
      u_21 = ATgetArgument(t, 0);
      x_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_21), u_21);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm b_22 = NULL,e_22 = NULL,f_22 = NULL;
  if(match_cons(t, sym__2))
    {
      b_22 = ATgetArgument(t, 0);
      f_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_22;
  {
    ATerm e_21 = t;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_22);
      }
    else
      {
        t = e_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_21 = ATgetArgument(t, 0);
            e_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_22, e_22);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm n_97 (ATerm), ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL,u_27 = NULL;
  p_27 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
      {
        ATerm c_19 = NULL,k_19 = NULL,w_2 = NULL;
        t = SSLgetAnnotations(p_27);
        c_19 = t;
        t = q_27;
        t = n_97(t);
        k_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_19, r_27);
        w_2 = t;
        t = SSLsetAnnotations(w_2, c_19);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          q_27 = ATgetArgument(t, 0);
          r_27 = ATgetArgument(t, 1);
          s_27 = ATgetArgument(t, 2);
          u_27 = ATgetArgument(t, 3);
          {
            ATerm x_19 = NULL,c_20 = NULL,d_20 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(p_27);
            x_19 = t;
            t = s_27;
            t = n_97(t);
            d_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_27, d_20);
            t = genzip_4_0(p_2, q_2, r_2, s_2, t);
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_27, r_27, c_20, u_27);
            x_2 = t;
            t = SSLsetAnnotations(x_2, x_19);
          }
        }
      else
        {
          ATerm f_21 = NULL,k_21 = NULL,m_21 = NULL,y_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              q_27 = ATgetArgument(t, 0);
              r_27 = ATgetArgument(t, 1);
              s_27 = ATgetArgument(t, 2);
              u_27 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_27);
          f_21 = t;
          t = s_27;
          t = n_97(t);
          m_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_27, m_21);
          t = genzip_4_0(t_2, v_2, z_2, a_3, t);
          k_21 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, q_27, r_27, k_21, u_27);
          y_2 = t;
          t = SSLsetAnnotations(y_2, f_21);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,x_29 = NULL,a_30 = NULL,b_30 = NULL,d_3 = NULL;
  b_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_30);
  u_29 = t;
  t = x_29;
  t = c_83(t);
  a_30 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_30);
  d_3 = t;
  t = SSLsetAnnotations(d_3, u_29);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm j_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = j_21;
      {
        ATerm l_30 = NULL,m_30 = NULL,q_30 = NULL,r_30 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            l_30 = ATgetArgument(t, 0);
            m_30 = ATgetArgument(t, 1);
            q_30 = ATgetArgument(t, 2);
            r_30 = ATgetArgument(t, 3);
            t = q_30;
            t = map_1_0(e_3, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                l_30 = ATgetArgument(t, 0);
                m_30 = ATgetArgument(t, 1);
                q_30 = ATgetArgument(t, 2);
                r_30 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = q_30;
            t = map_1_0(i_3, t);
          }
      }
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm z_30 = NULL;
  ATerm n_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_30 = ATgetArgument(t, 0);
          {
            ATerm r_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_21);
      t = z_30;
    }
  else
    {
      t = n_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_30;
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm i_31 = NULL;
  ATerm v_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_31 = ATgetArgument(t, 0);
          {
            ATerm c_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_21);
      t = i_31;
    }
  else
    {
      t = v_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_31;
    }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,q_31 = NULL;
  l_31 = t;
  if(match_cons(t, sym_Let_2))
    {
      m_31 = ATgetArgument(t, 0);
      n_31 = ATgetArgument(t, 1);
      t = l_31;
      t = i_8(m_31, n_31, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_31 = ATgetArgument(t, 0);
          n_31 = ATgetArgument(t, 1);
          o_31 = ATgetArgument(t, 2);
          t = n_31;
          t = map_1_0(k_3, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              m_31 = ATgetArgument(t, 0);
              n_31 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, m_31);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  m_31 = ATgetArgument(t, 0);
                  n_31 = ATgetArgument(t, 1);
                  o_31 = ATgetArgument(t, 2);
                  q_31 = ATgetArgument(t, 3);
                  t = n_31;
                  t = map_1_0(b_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_31 = ATgetArgument(t, 0);
                      n_31 = ATgetArgument(t, 1);
                      o_31 = ATgetArgument(t, 2);
                      q_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_31;
                  t = map_1_0(c_4, t);
                }
            }
        }
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm i_32 = NULL;
  ATerm d_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_32 = ATgetArgument(t, 0);
          {
            ATerm i_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_22);
      t = i_32;
    }
  else
    {
      t = d_22;
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
ATerm b_4 (ATerm t)
{
  ATerm j_33 = NULL;
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_33 = ATgetArgument(t, 0);
          {
            ATerm m_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_22);
      t = j_33;
    }
  else
    {
      t = k_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_33;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm w_33 = NULL;
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_33 = ATgetArgument(t, 0);
          {
            ATerm p_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_22);
      t = w_33;
    }
  else
    {
      t = n_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_33;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, b_3, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, j_3, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm s_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(r_22);
      {
        ATerm v_34 = NULL,w_34 = NULL;
        v_34 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm t_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        w_34 = t;
        t = SSLgetAnnotations(v_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_22 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) u_22) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_22 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(v_22) != AT_LIST) || !(ATisEmpty(v_22))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = w_34;
      }
    }
  else
    {
      t = q_22;
      {
        ATerm w_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm z_22 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_22) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm a_23 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_22);
            _fail(t);
          }
        else
          {
            t = w_22;
          }
      }
    }
  return(t);
}
ATerm p_9 (ATerm x_72, ATerm w_72, ATerm t)
{
  t = x_72;
  t = topdown_1_0(d_4, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, x_72);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,n_35 = NULL,o_35 = NULL,s_35 = NULL,t_35 = NULL,v_35 = NULL,z_35 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      n_35 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_35;
  if(match_cons(t, sym_Match_1))
    {
      o_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_35;
  if(match_cons(t, sym_Var_1))
    {
      s_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_35;
  if(match_cons(t, sym_Seq_2))
    {
      v_35 = ATgetArgument(t, 0);
      l_35 = ATgetArgument(t, 1);
      t = v_35;
      if(match_cons(t, sym_Build_1))
        {
          z_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_35;
      if(match_cons(t, sym_Var_1))
        {
          k_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_35;
      if((s_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_35)), l_35);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          v_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_35;
      if(match_cons(t, sym_Var_1))
        {
          z_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_35;
      if((s_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_35));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,d_37 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_36;
  if(match_cons(t, sym_Build_1))
    {
      w_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_36;
  if(match_cons(t, sym_Seq_2))
    {
      d_37 = ATgetArgument(t, 0);
      t_36 = ATgetArgument(t, 1);
      t = d_37;
      if(match_cons(t, sym_Match_1))
        {
          s_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_36;
      if((w_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_36), t_36);
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
      if((w_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, w_36);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_37;
  if(match_cons(t, sym_Match_1))
    {
      x_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_37;
  if(match_cons(t, sym_Seq_2))
    {
      z_37 = ATgetArgument(t, 0);
      u_37 = ATgetArgument(t, 1);
      t = z_37;
      if(match_cons(t, sym_Match_1))
        {
          t_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_37;
      if((x_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_37), u_37);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          z_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_37;
      if((x_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, x_37);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm o_38 = NULL,s_38 = NULL,t_38 = NULL,k_39 = NULL,m_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_39 = ATgetArgument(t, 0);
      m_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_39;
  if(match_cons(t, sym_Build_1))
    {
      ATerm b_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_39;
  if(match_cons(t, sym_Seq_2))
    {
      y_39 = ATgetArgument(t, 0);
      z_39 = ATgetArgument(t, 1);
      t = y_39;
      if(match_cons(t, sym_PrimT_3))
        {
          o_38 = ATgetArgument(t, 0);
          s_38 = ATgetArgument(t, 1);
          t_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, o_38, s_38, t_38), z_39);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          y_39 = ATgetArgument(t, 0);
          z_39 = ATgetArgument(t, 1);
          a_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, y_39, z_39, a_40);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,c_41 = NULL,e_41 = NULL,f_41 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_41 = ATgetArgument(t, 0);
      e_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_41;
  if(match_cons(t, sym_Build_1))
    {
      ATerm c_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_41;
  if(match_cons(t, sym_Seq_2))
    {
      f_41 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
      t = f_41;
      if(match_cons(t, sym_Build_1))
        {
          z_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_40), a_41);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, f_41);
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_23 = ATgetArgument(t, 0);
      if(((ATgetType(d_23) != AT_LIST) || !(ATisEmpty(d_23))))
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
ATerm f_4 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
        {
          q_43 = ATgetFirst((ATermList) f_23);
          r_43 = (ATerm) ATgetNext((ATermList) f_23);
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
ATerm g_4 (ATerm t)
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
ATerm h_4 (ATerm t)
{
  ATerm k_44 = NULL,o_44 = NULL;
  if(match_cons(t, sym__2))
    {
      k_44 = ATgetArgument(t, 0);
      o_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_44), (ATerm) ATmakeAppl(sym_Match_1, o_44));
  return(t);
}
ATerm i_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      if(((ATgetType(i_23) != AT_LIST) || !(ATisEmpty(i_23))))
        _fail(t);
      {
        ATerm j_23 = ATgetArgument(t, 1);
        if(((ATgetType(j_23) != AT_LIST) || !(ATisEmpty(j_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm y_44 = NULL,a_45 = NULL,b_45 = NULL,g_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_23 = ATgetArgument(t, 0);
      if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
        {
          y_44 = ATgetFirst((ATermList) k_23);
          a_45 = (ATerm) ATgetNext((ATermList) k_23);
        }
      else
        _fail(t);
      {
        ATerm l_23 = ATgetArgument(t, 1);
        if(((ATgetType(l_23) == AT_LIST) && !(ATisEmpty(l_23))))
          {
            b_45 = ATgetFirst((ATermList) l_23);
            g_45 = (ATerm) ATgetNext((ATermList) l_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_44, b_45), (ATerm) ATmakeAppl(sym__2, a_45, g_45));
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  if(match_cons(t, sym__2))
    {
      h_45 = ATgetArgument(t, 0);
      i_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_45), h_45);
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL;
  if(match_cons(t, sym__2))
    {
      j_45 = ATgetArgument(t, 0);
      k_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_45), (ATerm) ATmakeAppl(sym_Match_1, k_45));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,n_42 = NULL,t_42 = NULL,v_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,i_43 = NULL,j_43 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      n_42 = ATgetArgument(t, 0);
      b_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_42;
  if(match_cons(t, sym_Build_1))
    {
      t_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_42;
  if(match_cons(t, sym_Op_2))
    {
      v_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_43;
  if(match_cons(t, sym_Seq_2))
    {
      c_43 = ATgetArgument(t, 0);
      l_42 = ATgetArgument(t, 1);
      {
        ATerm p_43 = NULL;
        t = c_43;
        if(match_cons(t, sym_Match_1))
          {
            i_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_43;
        if(match_cons(t, sym_Op_2))
          {
            j_42 = ATgetArgument(t, 0);
            k_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_42;
        if((v_42 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, a_43, k_42);
        t = genzip_4_0(e_4, f_4, g_4, h_4, t);
        p_43 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_42, a_43)), l_42));
      }
    }
  else
    {
      ATerm x_44 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          c_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_43;
      if(match_cons(t, sym_Op_2))
        {
          i_43 = ATgetArgument(t, 0);
          j_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_43;
      if((v_42 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, a_43, j_43);
      t = genzip_4_0(i_4, j_4, k_4, l_4, t);
      x_44 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_44), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_42, a_43)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm h_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,t_47 = NULL,w_47 = NULL,x_47 = NULL;
  l_47 = t;
  if(match_cons(t, sym_Seq_2))
    {
      m_47 = ATgetArgument(t, 0);
      t_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_47;
  if(match_cons(t, sym_Build_1))
    {
      n_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_47;
  if(match_cons(t, sym_Op_2))
    {
      o_47 = ATgetArgument(t, 0);
      {
        ATerm m_23 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_47;
  {
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            w_47 = ATgetArgument(t, 0);
            {
              ATerm p_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_23);
        t = w_47;
        if(match_cons(t, sym_Match_1))
          {
            x_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_47;
        if(match_cons(t, sym_Op_2))
          {
            h_47 = ATgetArgument(t, 0);
            {
              ATerm q_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_47, h_47);
        {
          ATerm r_23 = t;
          if((PushChoice() == 0))
            {
              ATerm x_22 = NULL;
              if(match_cons(t, sym__2))
                {
                  x_22 = ATgetArgument(t, 0);
                  if((x_22 != ATgetArgument(t, 1)))
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
          t = term_s_23;
        }
      }
    else
      {
        t = n_23;
        if(match_cons(t, sym_Match_1))
          {
            w_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_47;
        if(match_cons(t, sym_Op_2))
          {
            x_47 = ATgetArgument(t, 0);
            {
              ATerm t_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_47, x_47);
        {
          ATerm u_23 = t;
          if((PushChoice() == 0))
            {
              ATerm g_23 = NULL;
              if(match_cons(t, sym__2))
                {
                  g_23 = ATgetArgument(t, 0);
                  if((g_23 != ATgetArgument(t, 1)))
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
              t = u_23;
            }
          t = term_s_23;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm h_48 (ATerm t)
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_99(t);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        t = SRTS_one(h_48, t);
      }
    return(t);
  }
  t = h_48(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  q_49 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_49 = ATgetArgument(t, 0);
      y_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_49;
  if(match_cons(t, sym_Let_2))
    {
      f_50 = ATgetArgument(t, 0);
      h_50 = ATgetArgument(t, 1);
      {
        ATerm m_50 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, r_49, f_50);
        t = conc_0_0(t);
        m_50 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, m_50, h_50);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          f_50 = ATgetArgument(t, 0);
          h_50 = ATgetArgument(t, 1);
          i_50 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_49 = ATgetFirst((ATermList) t);
          x_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_49;
      if(match_cons(t, sym_SDefT_4))
        {
          t_49 = ATgetArgument(t, 0);
          u_49 = ATgetArgument(t, 1);
          v_49 = ATgetArgument(t, 2);
          w_49 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_50;
      if(match_cons(t, sym_SVar_1))
        {
          g_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_50;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_50;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_50;
      if((t_49 != t))
        {
          _fail(t);
        }
      t = w_49;
      {
        ATerm x_23 = t;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm y_23 = ATgetArgument(t, 0);
                  if(match_cons(y_23, sym_SVar_1))
                    {
                      if((t_49 != ATgetArgument(y_23, 0)))
                        {
                          _fail(ATgetArgument(y_23, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_23 = ATgetArgument(t, 1);
                    if(((ATgetType(z_23) != AT_LIST) || !(ATisEmpty(z_23))))
                      _fail(t);
                  }
                  {
                    ATerm a_24 = ATgetArgument(t, 2);
                    if(((ATgetType(a_24) != AT_LIST) || !(ATisEmpty(a_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(m_4, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = x_23;
          }
        t = w_49;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,k_51 = NULL,l_51 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      k_51 = ATgetArgument(t, 0);
      t = k_51;
      if(match_cons(t, sym_Seq_2))
        {
          i_51 = ATgetArgument(t, 0);
          e_51 = ATgetArgument(t, 1);
          t = i_51;
          if(match_cons(t, sym_Where_1))
            {
              d_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_51;
          if(match_cons(t, sym_Seq_2))
            {
              f_51 = ATgetArgument(t, 0);
              h_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_51;
          if(match_cons(t, sym_Build_1))
            {
              g_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, d_51, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_51), h_51)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              i_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, i_51);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          k_51 = ATgetArgument(t, 0);
          t = k_51;
          if(match_cons(t, sym_Test_1))
            {
              i_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, i_51);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              k_51 = ATgetArgument(t, 0);
              t = k_51;
              if(match_cons(t, sym_Not_1))
                {
                  i_51 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, i_51);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  k_51 = ATgetArgument(t, 0);
                  l_51 = ATgetArgument(t, 1);
                  t = l_51;
                  if((k_51 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      k_51 = ATgetArgument(t, 0);
                      l_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_51;
                  if((k_51 != t))
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
  ATerm m_52 = NULL,n_52 = NULL,p_52 = NULL,b_53 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_52 = ATgetArgument(t, 0);
      b_53 = ATgetArgument(t, 1);
      t = m_52;
      if(match_cons(t, sym_LChoice_2))
        {
          n_52 = ATgetArgument(t, 0);
          p_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, n_52, (ATerm) ATmakeAppl(sym_LChoice_2, p_52, b_53));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          m_52 = ATgetArgument(t, 0);
          b_53 = ATgetArgument(t, 1);
          t = m_52;
          if(match_cons(t, sym_Seq_2))
            {
              n_52 = ATgetArgument(t, 0);
              p_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, n_52, (ATerm) ATmakeAppl(sym_Seq_2, p_52, b_53));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              m_52 = ATgetArgument(t, 0);
              b_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_52;
          if(match_cons(t, sym_Choice_2))
            {
              n_52 = ATgetArgument(t, 0);
              p_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, n_52, (ATerm) ATmakeAppl(sym_Choice_2, p_52, b_53));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_56 = ATgetFirst((ATermList) t);
      h_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_24 = NULL,p_24 = NULL,s_24 = NULL,v_24 = NULL,w_24 = NULL,h_25 = NULL,i_25 = NULL,g_3 = NULL,f_3 = NULL;
        t = SSLgetAnnotations(f_56);
        w_24 = t;
        t = g_56;
        t = p_0(t);
        h_25 = t;
        t = (ATerm) ATinsert(CheckATermList(h_56), h_25);
        f_3 = t;
        t = SSLsetAnnotations(f_3, w_24);
        i_25 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_24 = ATgetFirst((ATermList) t);
            s_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_25);
        n_24 = t;
        t = s_24;
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(p_0, t);
              ;
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
            }
          v_24 = t;
          t = (ATerm) ATinsert(CheckATermList(v_24), p_24);
          g_3 = t;
          t = SSLsetAnnotations(g_3, n_24);
        }
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        {
          ATerm d_26 = NULL,g_26 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(f_56);
          d_26 = t;
          t = h_56;
          t = map1_1_0(p_0, t);
          g_26 = t;
          t = (ATerm) ATinsert(CheckATermList(g_26), g_56);
          h_3 = t;
          t = SSLsetAnnotations(h_3, d_26);
        }
      }
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm k_59 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_24), term_h_24));
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm l_59 = NULL,n_59 = NULL;
  n_59 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_59, term_h_24);
    }
  else
    {
      t = n_59;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm d_60 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_60, term_h_24);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm e_60 = NULL,q_60 = NULL;
  q_60 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_60 = ATgetArgument(t, 0);
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, e_60, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_24), term_h_24));
            ;
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            t = q_60;
          }
      }
    }
  else
    {
      t = q_60;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm h_61 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_61, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_h_24), term_h_24));
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL;
  j_61 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_61 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, i_61, term_h_24);
    }
  else
    {
      t = j_61;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_57 = NULL,v_57 = NULL,z_57 = NULL,b_58 = NULL,d_58 = NULL,e_58 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_58 = ATgetArgument(t, 0);
      e_58 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_58, e_58);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_58 = ATgetArgument(t, 0);
          t = d_58;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_57 = ATgetFirst((ATermList) t);
              v_57 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_57, (ATerm) ATmakeAppl(sym_LChoices_1, v_57));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_s_23;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_58 = ATgetArgument(t, 0);
              t = d_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_57 = ATgetFirst((ATermList) t);
                  v_57 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_57, (ATerm) ATmakeAppl(sym_Choices_1, v_57));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_s_23;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_58 = ATgetArgument(t, 0);
                  t = d_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_57 = ATgetFirst((ATermList) t);
                      v_57 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_57, (ATerm) ATmakeAppl(sym_Seqs_1, v_57));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_k_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_58 = ATgetArgument(t, 0);
                      e_58 = ATgetArgument(t, 1);
                      b_58 = ATgetArgument(t, 2);
                      z_57 = ATgetArgument(t, 3);
                      {
                        ATerm g_59 = NULL,j_59 = NULL;
                        t = e_58;
                        t = map1_1_0(n_4, t);
                        g_59 = t;
                        t = b_58;
                        t = map1_1_0(o_4, t);
                        j_59 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_58, g_59, j_59, z_57);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          d_58 = ATgetArgument(t, 0);
                          e_58 = ATgetArgument(t, 1);
                          b_58 = ATgetArgument(t, 2);
                          z_57 = ATgetArgument(t, 3);
                          {
                            ATerm l_24 = t;
                            int m_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_60 = NULL,c_60 = NULL;
                                t = b_58;
                                t = map1_1_0(p_4, t);
                                a_60 = t;
                                t = e_58;
                                t = map_1_0(r_4, t);
                                c_60 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_58, c_60, a_60, z_57);
                                ;
                                LocalPopChoice(m_24);
                              }
                            else
                              {
                                t = l_24;
                                {
                                  ATerm y_60 = NULL,a_61 = NULL;
                                  t = e_58;
                                  t = map1_1_0(t_4, t);
                                  y_60 = t;
                                  t = b_58;
                                  t = map_1_0(u_4, t);
                                  a_61 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_58, y_60, a_61, z_57);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              d_58 = ATgetArgument(t, 0);
                              e_58 = ATgetArgument(t, 1);
                              b_58 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, e_58, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, b_58), d_58)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  d_58 = ATgetArgument(t, 0);
                                  e_58 = ATgetArgument(t, 1);
                                  b_58 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_58)), d_58), (ATerm) ATmakeAppl(sym_Build_1, e_58)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      d_58 = ATgetArgument(t, 0);
                                      e_58 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_58, (ATerm) ATmakeAppl(sym_Match_1, e_58));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          d_58 = ATgetArgument(t, 0);
                                          e_58 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_58), e_58);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              d_58 = ATgetArgument(t, 0);
                                              e_58 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_58), d_58);
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
ATerm x_4 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,s_63 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      m_63 = ATgetArgument(t, 0);
      t = m_63;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_s_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          m_63 = ATgetArgument(t, 0);
          t = m_63;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_k_24;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              m_63 = ATgetArgument(t, 0);
              n_63 = ATgetArgument(t, 1);
              t = m_63;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_s_23;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  m_63 = ATgetArgument(t, 0);
                  n_63 = ATgetArgument(t, 1);
                  t = n_63;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_s_23;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      m_63 = ATgetArgument(t, 0);
                      n_63 = ATgetArgument(t, 1);
                      t = n_63;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_s_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          m_63 = ATgetArgument(t, 0);
                          t = m_63;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_s_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              m_63 = ATgetArgument(t, 0);
                              t = m_63;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_s_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  m_63 = ATgetArgument(t, 0);
                                  n_63 = ATgetArgument(t, 1);
                                  t = n_63;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_s_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      m_63 = ATgetArgument(t, 0);
                                      n_63 = ATgetArgument(t, 1);
                                      t = n_63;
                                      t = fetch_1_0(x_4, t);
                                      t = term_s_23;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          m_63 = ATgetArgument(t, 0);
                                          n_63 = ATgetArgument(t, 1);
                                          t = n_63;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = m_63;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = n_63;
                                                }
                                              else
                                                {
                                                  t = m_63;
                                                }
                                            }
                                          else
                                            {
                                              t = m_63;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = n_63;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              m_63 = ATgetArgument(t, 0);
                                              n_63 = ATgetArgument(t, 1);
                                              t = n_63;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = m_63;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = n_63;
                                                    }
                                                  else
                                                    {
                                                      t = m_63;
                                                    }
                                                }
                                              else
                                                {
                                                  t = m_63;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = n_63;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  m_63 = ATgetArgument(t, 0);
                                                  t = m_63;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_s_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      m_63 = ATgetArgument(t, 0);
                                                      n_63 = ATgetArgument(t, 1);
                                                      s_63 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_63;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_63, n_63);
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
  ATerm p_65 = NULL,u_65 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_65 = ATgetArgument(t, 0);
      t = u_65;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_k_24;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_65 = ATgetArgument(t, 0);
          t = u_65;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_s_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_65 = ATgetArgument(t, 0);
              p_65 = ATgetArgument(t, 1);
              t = p_65;
              if(match_cons(t, sym_Id_0))
                {
                  t = u_65;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = p_65;
                    }
                  else
                    {
                      t = u_65;
                    }
                }
              else
                {
                  t = u_65;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = p_65;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  u_65 = ATgetArgument(t, 0);
                  p_65 = ATgetArgument(t, 1);
                  t = u_65;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_k_24;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      u_65 = ATgetArgument(t, 0);
                      p_65 = ATgetArgument(t, 1);
                      t = p_65;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_k_24;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          u_65 = ATgetArgument(t, 0);
                          p_65 = ATgetArgument(t, 1);
                          t = p_65;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_k_24;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              u_65 = ATgetArgument(t, 0);
                              t = u_65;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_k_24;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  u_65 = ATgetArgument(t, 0);
                                  t = u_65;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_k_24;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      u_65 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = u_65;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_k_24;
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
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(u_24);
          }
        else
          {
            t = t_24;
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
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
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(a_25);
                      }
                    else
                      {
                        t = z_24;
                        {
                          ATerm b_25 = t;
                          int c_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
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
                                    ATerm r_67 = NULL,s_67 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        r_67 = ATgetArgument(t, 0);
                                        s_67 = ATgetArgument(t, 1);
                                        t = r_67;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_67;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            r_67 = ATgetArgument(t, 0);
                                            s_67 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = r_67;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_67;
                                      }
                                    ;
                                    LocalPopChoice(e_25);
                                  }
                                else
                                  {
                                    t = d_25;
                                    {
                                      ATerm f_25 = t;
                                      int g_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(g_25);
                                        }
                                      else
                                        {
                                          t = f_25;
                                          {
                                            ATerm j_25 = t;
                                            int k_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
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
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(m_25);
                                                    }
                                                  else
                                                    {
                                                      t = l_25;
                                                      {
                                                        ATerm n_25 = t;
                                                        int o_25 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(o_25);
                                                          }
                                                        else
                                                          {
                                                            t = n_25;
                                                            {
                                                              ATerm p_25 = t;
                                                              int q_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
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
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(s_25);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = r_25;
                                                                        {
                                                                          ATerm t_25 = t;
                                                                          int u_25 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
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
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(w_25);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_25;
                                                                                    {
                                                                                      ATerm v_67 = NULL,y_67 = NULL,a_68 = NULL,b_68 = NULL;
                                                                                      y_67 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          a_68 = ATgetArgument(t, 0);
                                                                                          b_68 = ATgetArgument(t, 1);
                                                                                          t = a_68;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              v_67 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = y_67;
                                                                                          t = p_9(v_67, b_68, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              a_68 = ATgetArgument(t, 0);
                                                                                              b_68 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = a_68;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = b_68;
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
  ATerm r_77 = NULL,s_77 = NULL,u_77 = NULL,v_77 = NULL;
  s_77 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = s_77;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = s_77;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              u_77 = ATgetArgument(t, 0);
              {
                ATerm c_29 = NULL,e_29 = NULL,q_3 = NULL;
                t = SSLgetAnnotations(s_77);
                c_29 = t;
                t = u_77;
                {
                  ATerm c_32 (ATerm t)
                  {
                    ATerm u_31 = NULL,v_31 = NULL,x_31 = NULL;
                    u_31 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        v_31 = ATgetArgument(t, 0);
                        {
                          ATerm p_32 = NULL,l_3 = NULL;
                          t = SSLgetAnnotations(u_31);
                          p_32 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, v_31);
                          l_3 = t;
                          t = SSLsetAnnotations(l_3, p_32);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            v_31 = ATgetArgument(t, 0);
                            {
                              ATerm x_32 = NULL,m_3 = NULL;
                              t = SSLgetAnnotations(u_31);
                              x_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, v_31);
                              m_3 = t;
                              t = SSLsetAnnotations(m_3, x_32);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                v_31 = ATgetArgument(t, 0);
                                {
                                  ATerm m_33 = NULL,n_3 = NULL;
                                  t = SSLgetAnnotations(u_31);
                                  m_33 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, v_31);
                                  n_3 = t;
                                  t = SSLsetAnnotations(n_3, m_33);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    v_31 = ATgetArgument(t, 0);
                                    {
                                      ATerm d_34 = NULL,o_3 = NULL;
                                      t = SSLgetAnnotations(u_31);
                                      d_34 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, v_31);
                                      o_3 = t;
                                      t = SSLsetAnnotations(o_3, d_34);
                                    }
                                  }
                                else
                                  {
                                    ATerm l_34 = NULL,o_34 = NULL,p_3 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        v_31 = ATgetArgument(t, 0);
                                        x_31 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(u_31);
                                    l_34 = t;
                                    t = x_31;
                                    t = map_1_0(c_32, t);
                                    o_34 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, v_31, o_34);
                                    p_3 = t;
                                    t = SSLsetAnnotations(p_3, l_34);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = c_32(t);
                  e_29 = t;
                  t = (ATerm) ATmakeAppl(sym_Build_1, e_29);
                  q_3 = t;
                  t = SSLsetAnnotations(q_3, c_29);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  u_77 = ATgetArgument(t, 0);
                  v_77 = ATgetArgument(t, 1);
                  {
                    ATerm a_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,t_3 = NULL,s_3 = NULL,r_3 = NULL;
                    t = SSLgetAnnotations(s_77);
                    a_35 = t;
                    t = u_77;
                    if(match_cons(t, sym_Var_1))
                      {
                        h_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(u_77);
                    g_35 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, h_35);
                    r_3 = t;
                    t = SSLsetAnnotations(r_3, g_35);
                    i_35 = t;
                    t = v_77;
                    if(match_cons(t, sym_Var_1))
                      {
                        e_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(v_77);
                    d_35 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_35);
                    s_3 = t;
                    t = SSLsetAnnotations(s_3, d_35);
                    f_35 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, i_35, f_35);
                    t_3 = t;
                    t = SSLsetAnnotations(t_3, a_35);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      u_77 = ATgetArgument(t, 0);
                      {
                        ATerm x_35 = NULL,a_36 = NULL,b_36 = NULL,f_36 = NULL,v_3 = NULL,u_3 = NULL;
                        t = SSLgetAnnotations(s_77);
                        x_35 = t;
                        t = u_77;
                        if(match_cons(t, sym_Var_1))
                          {
                            b_36 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(u_77);
                        a_36 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, b_36);
                        u_3 = t;
                        t = SSLsetAnnotations(u_3, a_36);
                        f_36 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, f_36);
                        v_3 = t;
                        t = SSLsetAnnotations(v_3, x_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          u_77 = ATgetArgument(t, 0);
                          v_77 = ATgetArgument(t, 1);
                          {
                            ATerm m_36 = NULL,w_3 = NULL;
                            t = SSLgetAnnotations(s_77);
                            m_36 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, u_77, v_77);
                            w_3 = t;
                            t = SSLsetAnnotations(w_3, m_36);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              u_77 = ATgetArgument(t, 0);
                              v_77 = ATgetArgument(t, 1);
                              r_77 = ATgetArgument(t, 2);
                              {
                                ATerm g_37 = NULL,x_3 = NULL;
                                t = SSLgetAnnotations(s_77);
                                g_37 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, u_77, v_77, r_77);
                                x_3 = t;
                                t = SSLsetAnnotations(x_3, g_37);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  u_77 = ATgetArgument(t, 0);
                                  v_77 = ATgetArgument(t, 1);
                                  {
                                    ATerm b_38 = NULL,f_38 = NULL,g_38 = NULL,y_3 = NULL;
                                    t = SSLgetAnnotations(s_77);
                                    b_38 = t;
                                    t = u_77;
                                    t = simple_strategy_0_0(t);
                                    f_38 = t;
                                    t = v_77;
                                    t = simple_strategy_0_0(t);
                                    g_38 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, f_38, g_38);
                                    y_3 = t;
                                    t = SSLsetAnnotations(y_3, b_38);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      u_77 = ATgetArgument(t, 0);
                                      {
                                        ATerm p_38 = NULL,r_38 = NULL,z_3 = NULL;
                                        t = SSLgetAnnotations(s_77);
                                        p_38 = t;
                                        t = u_77;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        r_38 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, r_38);
                                        z_3 = t;
                                        t = SSLsetAnnotations(z_3, p_38);
                                      }
                                    }
                                  else
                                    {
                                      ATerm j_39 = NULL,p_39 = NULL,a_4 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          u_77 = ATgetArgument(t, 0);
                                          v_77 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(s_77);
                                      j_39 = t;
                                      t = v_77;
                                      t = simple_strategy_0_0(t);
                                      p_39 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, u_77, p_39);
                                      a_4 = t;
                                      t = SSLsetAnnotations(a_4, j_39);
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
ATerm p_8 (ATerm u_106 (ATerm), ATerm x_38, ATerm w_38, ATerm t)
{
  ATerm b_79 (ATerm t)
  {
    ATerm d_79 (ATerm n_78, ATerm t)
    {
      ATerm p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,v_78 = NULL,z_4 = NULL;
      t = n_78;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_78 = ATgetFirst((ATermList) t);
          q_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_4 (ATerm t)
        {
          t = w_38;
          return(t);
        }
        t = w_10(u_106, y_4, p_78, q_78, t);
        t = n_78;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_78 = ATgetFirst((ATermList) t);
            t_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_78);
        r_78 = t;
        t = t_78;
        t = b_79(t);
        v_78 = t;
        t = (ATerm) ATinsert(CheckATermList(v_78), s_78);
        z_4 = t;
        t = SSLsetAnnotations(z_4, r_78);
      }
      return(t);
    }
    ATerm x_78 = NULL,z_78 = NULL;
    x_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_78;
      }
    else
      {
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_25 = ATgetFirst((ATermList) t);
                z_78 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(y_25);
            {
              ATerm a_26 = t;
              int b_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_79(x_78, t);
                  ;
                  LocalPopChoice(b_26);
                }
              else
                {
                  t = a_26;
                  t = z_78;
                  t = b_79(t);
                }
            }
          }
        else
          {
            t = x_25;
            t = d_79(x_78, t);
          }
      }
    return(t);
  }
  t = x_38;
  t = b_79(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm q_127 (ATerm), ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t)
{
  ATerm c_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(q_127, r_127, s_127, t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = c_26;
      {
        ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL,x_39 = NULL,d_40 = NULL,k_40 = NULL,c_5 = NULL;
        r_79 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            s_79 = ATgetArgument(t, 0);
            t_79 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_79);
        x_39 = t;
        t = s_79;
        t = s_127(t);
        d_40 = t;
        t = t_79;
        t = q_127(t);
        k_40 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, d_40, k_40);
        c_5 = t;
        t = SSLsetAnnotations(c_5, x_39);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm q_97 (ATerm), ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL;
  m_82 = t;
  if(match_cons(t, sym_Scope_2))
    {
      n_82 = ATgetArgument(t, 0);
      j_82 = ATgetArgument(t, 1);
      {
        ATerm t_40 = NULL,w_40 = NULL,x_40 = NULL,h_5 = NULL;
        t = SSLgetAnnotations(m_82);
        t_40 = t;
        t = n_82;
        t = q_97(t);
        w_40 = t;
        t = j_82;
        t = o_97(t);
        x_40 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_40, x_40);
        h_5 = t;
        t = SSLsetAnnotations(h_5, t_40);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          n_82 = ATgetArgument(t, 0);
          j_82 = ATgetArgument(t, 1);
          k_82 = ATgetArgument(t, 2);
          l_82 = ATgetArgument(t, 3);
          {
            ATerm r_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(m_82);
            r_41 = t;
            t = n_82;
            t = q_97(t);
            w_41 = t;
            t = j_82;
            t = q_97(t);
            x_41 = t;
            t = k_82;
            t = q_97(t);
            y_41 = t;
            t = l_82;
            t = o_97(t);
            z_41 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_41, x_41, y_41, z_41);
            j_5 = t;
            t = SSLsetAnnotations(j_5, r_41);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              n_82 = ATgetArgument(t, 0);
              j_82 = ATgetArgument(t, 1);
              k_82 = ATgetArgument(t, 2);
              l_82 = ATgetArgument(t, 3);
              {
                ATerm s_42 = NULL,z_42 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,o_5 = NULL;
                t = SSLgetAnnotations(m_82);
                s_42 = t;
                t = n_82;
                t = q_97(t);
                z_42 = t;
                t = j_82;
                t = q_97(t);
                d_43 = t;
                t = k_82;
                t = q_97(t);
                e_43 = t;
                t = l_82;
                t = o_97(t);
                f_43 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, z_42, d_43, e_43, f_43);
                o_5 = t;
                t = SSLsetAnnotations(o_5, s_42);
              }
            }
          else
            {
              ATerm b_44 = NULL,f_44 = NULL,p_5 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  n_82 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_82);
              b_44 = t;
              t = n_82;
              t = o_97(t);
              f_44 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, f_44);
              p_5 = t;
              t = SSLsetAnnotations(p_5, b_44);
            }
        }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm a_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_83);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm f_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(h_26);
    }
  else
    {
      t = f_26;
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
              ATerm d_83 = NULL,e_83 = NULL,f_83 = NULL,g_83 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  d_83 = ATgetArgument(t, 0);
                  e_83 = ATgetArgument(t, 1);
                  f_83 = ATgetArgument(t, 2);
                  g_83 = ATgetArgument(t, 3);
                  t = f_83;
                  t = map_1_0(i_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_83 = ATgetArgument(t, 0);
                      e_83 = ATgetArgument(t, 1);
                      f_83 = ATgetArgument(t, 2);
                      g_83 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_83;
                  t = map_1_0(l_5, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm n_83 = NULL;
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_83 = ATgetArgument(t, 0);
          {
            ATerm m_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_26);
      t = n_83;
    }
  else
    {
      t = k_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_83;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm x_83 = NULL;
  ATerm n_26 = t;
  int o_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_83 = ATgetArgument(t, 0);
          {
            ATerm p_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_26);
      t = x_83;
    }
  else
    {
      t = n_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_83;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm z_82 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      z_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_82;
  t = free_vars_3_0(a_5, e_5, tboundin_3_0, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm f_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_84);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm q_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = q_26;
      {
        ATerm i_84 = NULL,j_84 = NULL,l_84 = NULL,m_84 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_84 = ATgetArgument(t, 0);
            t = i_84;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_84 = ATgetArgument(t, 0);
                j_84 = ATgetArgument(t, 1);
                l_84 = ATgetArgument(t, 2);
                m_84 = ATgetArgument(t, 3);
                t = l_84;
                t = map_1_0(s_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_84 = ATgetArgument(t, 0);
                    j_84 = ATgetArgument(t, 1);
                    l_84 = ATgetArgument(t, 2);
                    m_84 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_84;
                t = map_1_0(t_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm v_84 = NULL;
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_84 = ATgetArgument(t, 0);
          {
            ATerm u_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_26);
      t = v_84;
    }
  else
    {
      t = s_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_84;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm e_85 = NULL;
  ATerm v_26 = t;
  int w_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_85 = ATgetArgument(t, 0);
          {
            ATerm x_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_26);
      t = e_85;
    }
  else
    {
      t = v_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_85;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(q_5, r_5, tboundin_3_0, t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm t_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_85);
  return(t);
}
ATerm v_5 (ATerm t)
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
        ATerm w_85 = NULL,x_85 = NULL,z_85 = NULL,a_86 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_85 = ATgetArgument(t, 0);
            t = w_85;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                w_85 = ATgetArgument(t, 0);
                x_85 = ATgetArgument(t, 1);
                z_85 = ATgetArgument(t, 2);
                a_86 = ATgetArgument(t, 3);
                t = z_85;
                t = map_1_0(w_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    w_85 = ATgetArgument(t, 0);
                    x_85 = ATgetArgument(t, 1);
                    z_85 = ATgetArgument(t, 2);
                    a_86 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = z_85;
                t = map_1_0(x_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm n_86 = NULL;
  ATerm a_27 = t;
  int b_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_86 = ATgetArgument(t, 0);
          {
            ATerm c_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_27);
      t = n_86;
    }
  else
    {
      t = a_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_86;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm w_86 = NULL;
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_86 = ATgetArgument(t, 0);
          {
            ATerm f_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_27);
      t = w_86;
    }
  else
    {
      t = d_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_86;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm m_85 = NULL,q_85 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      q_85 = ATgetArgument(t, 0);
      t = q_85;
      if(match_cons(t, sym_Rule_3))
        {
          m_85 = ATgetArgument(t, 0);
          {
            ATerm g_27 = ATgetArgument(t, 1);
          }
          {
            ATerm h_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = m_85;
      t = free_vars_3_0(u_5, v_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          q_85 = ATgetArgument(t, 0);
          {
            ATerm i_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_85;
    }
  return(t);
}
ATerm v_8 (ATerm w_106 (ATerm), ATerm z_38, ATerm y_38, ATerm t)
{
  ATerm t_87 (ATerm t)
  {
    ATerm n_87 = NULL,o_87 = NULL,q_87 = NULL;
    n_87 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_87;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_87 = ATgetFirst((ATermList) t);
            q_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_27 = t;
          int k_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_87;
              {
                ATerm y_5 (ATerm t)
                {
                  t = y_38;
                  return(t);
                }
                t = w_10(w_106, y_5, o_87, q_87, t);
                t = t_87(t);
              }
              ;
              LocalPopChoice(k_27);
            }
          else
            {
              t = j_27;
              {
                ATerm u_44 = NULL,d_45 = NULL,g_6 = NULL;
                t = SSLgetAnnotations(n_87);
                u_44 = t;
                t = q_87;
                t = t_87(t);
                d_45 = t;
                t = (ATerm) ATinsert(CheckATermList(d_45), o_87);
                g_6 = t;
                t = SSLsetAnnotations(g_6, u_44);
              }
            }
        }
      }
    return(t);
  }
  t = z_38;
  t = t_87(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if(((ATgetType(l_27) != AT_LIST) || !(ATisEmpty(l_27))))
        _fail(t);
      {
        ATerm m_27 = ATgetArgument(t, 1);
        if(((ATgetType(m_27) != AT_LIST) || !(ATisEmpty(m_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if(((ATgetType(n_27) == AT_LIST) && !(ATisEmpty(n_27))))
        {
          d_88 = ATgetFirst((ATermList) n_27);
          e_88 = (ATerm) ATgetNext((ATermList) n_27);
        }
      else
        _fail(t);
      {
        ATerm o_27 = ATgetArgument(t, 1);
        if(((ATgetType(o_27) == AT_LIST) && !(ATisEmpty(o_27))))
          {
            f_88 = ATgetFirst((ATermList) o_27);
            g_88 = (ATerm) ATgetNext((ATermList) o_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_88, f_88), (ATerm) ATmakeAppl(sym__2, e_88, g_88));
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm h_88 = NULL,i_88 = NULL;
  if(match_cons(t, sym__2))
    {
      h_88 = ATgetArgument(t, 0);
      i_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_88), h_88);
  return(t);
}
ATerm x_8 (ATerm r_657, ATerm w_657, ATerm y_65, ATerm t)
{
  ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL;
  t = SSL_explode_term(w_657);
  if(match_cons(t, sym__2))
    {
      y_87 = ATgetArgument(t, 0);
      a_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_657);
  if(match_cons(t, sym__2))
    {
      if((y_87 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      z_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_87, a_88);
  t = genzip_4_0(z_5, a_6, b_6, _id, t);
  b_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_88, y_65);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_116 (ATerm), ATerm g_116 (ATerm), ATerm t)
{
  ATerm l_88 (ATerm t)
  {
    ATerm t_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_116(t);
        ;
        LocalPopChoice(v_27);
      }
    else
      {
        t = t_27;
        t = g_116(t);
        t = l_88(t);
      }
    return(t);
  }
  t = l_88(t);
  return(t);
}
ATerm for_3_0 (ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm k_116 (ATerm), ATerm t)
{
  t = i_116(t);
  t = while_not_2_0(j_116, k_116, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm v_88 = NULL;
  v_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_88);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm x_88 = NULL,y_88 = NULL,a_89 = NULL,b_89 = NULL,i_6 = NULL;
  b_89 = t;
  if(match_cons(t, sym__2))
    {
      y_88 = ATgetArgument(t, 0);
      a_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_89);
  x_88 = t;
  t = a_89;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_88, a_89);
  i_6 = t;
  t = SSLsetAnnotations(i_6, x_88);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm y_89 = NULL,z_89 = NULL,a_90 = NULL,c_90 = NULL,d_90 = NULL;
  y_89 = t;
  if(match_cons(t, sym__2))
    {
      z_89 = ATgetArgument(t, 0);
      a_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_90 = ATgetFirst((ATermList) t);
      d_90 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_90(z_89, a_90, y_89, t);
            ;
            LocalPopChoice(x_27);
          }
        else
          {
            t = w_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_89), c_90), d_90);
          }
      }
    }
  else
    {
      t = q_90(z_89, a_90, y_89, t);
    }
  return(t);
}
ATerm q_90 (ATerm c_89, ATerm d_89, ATerm e_89, ATerm t)
{
  ATerm f_89 = NULL,i_89 = NULL,k_6 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL;
  t = SSLgetAnnotations(e_89);
  f_89 = t;
  t = d_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_89 = ATgetFirst((ATermList) t);
      p_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_89;
  if(match_cons(t, sym__2))
    {
      n_89 = ATgetArgument(t, 0);
      o_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_89;
        if((n_89 != t))
          {
            _fail(t);
          }
        t = p_89;
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = d_89;
        t = x_8(n_89, o_89, p_89, t);
      }
    i_89 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_89, i_89);
    k_6 = t;
    t = SSLsetAnnotations(k_6, f_89);
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm o_90 = NULL;
  if(match_cons(t, sym__2))
    {
      o_90 = ATgetArgument(t, 0);
      if((o_90 != ATgetArgument(t, 1)))
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
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_6, d_6, e_6, t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      {
        ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL;
        i_90 = t;
        if(match_cons(t, sym__2))
          {
            j_90 = ATgetArgument(t, 0);
            k_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_90;
        t = v_8(f_6, j_90, k_90, t);
      }
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL;
  if(match_cons(t, sym__2))
    {
      s_45 = ATgetArgument(t, 0);
      t_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_10(p_6, s_45, t_45, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm u_45 = NULL;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      if((u_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm b_46 = NULL,g_46 = NULL;
  if(match_cons(t, sym__2))
    {
      b_46 = ATgetArgument(t, 0);
      g_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_10(u_6, b_46, g_46, t);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm p_46 = NULL;
  if(match_cons(t, sym__2))
    {
      p_46 = ATgetArgument(t, 0);
      if((p_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm u_113 (ATerm), ATerm v_113 (ATerm), ATerm w_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_91 (ATerm t)
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_113(t);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        {
          ATerm e_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_90 = NULL,t_90 = NULL,n_45 = NULL,o_45 = NULL;
              s_90 = t;
              t = v_113(t);
              t_90 = t;
              t = s_90;
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm w_90 = NULL;
                  t = g_91(t);
                  w_90 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_90, t_90);
                  t = diff_0_0(t);
                  return(t);
                }
                t = w_113(h_6, g_91, l_6, t);
                o_45 = t;
                t = SSL_explode_term(o_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_28 = ATgetArgument(t, 0);
                    n_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_45;
                t = foldr_3_0(m_6, n_6, _id, t);
              }
              ;
              LocalPopChoice(f_28);
            }
          else
            {
              t = e_28;
              {
                ATerm w_45 = NULL,x_45 = NULL;
                x_45 = t;
                t = SSL_explode_term(x_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_28 = ATgetArgument(t, 0);
                    w_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_45;
                t = foldr_3_0(q_6, s_6, g_91, t);
              }
            }
        }
      }
    return(t);
  }
  t = g_91(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm i_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_47);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(j_28);
    }
  else
    {
      t = i_28;
      {
        ATerm q_47 = NULL,r_47 = NULL,u_47 = NULL,v_47 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_47 = ATgetArgument(t, 0);
            t = u_47;
            t = free_vars_3_0(a_7, c_7, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_47 = ATgetArgument(t, 0);
                v_47 = ATgetArgument(t, 1);
                q_47 = ATgetArgument(t, 2);
                r_47 = ATgetArgument(t, 3);
                t = q_47;
                t = map_1_0(i_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    u_47 = ATgetArgument(t, 0);
                    v_47 = ATgetArgument(t, 1);
                    q_47 = ATgetArgument(t, 2);
                    r_47 = ATgetArgument(t, 3);
                    t = q_47;
                    t = map_1_0(j_7, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Matrix_2))
                      {
                        u_47 = ATgetArgument(t, 0);
                        v_47 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = u_47;
                  }
              }
          }
      }
    }
  return(t);
}
ATerm a_7 (ATerm t)
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
ATerm c_7 (ATerm t)
{
  ATerm k_28 = t;
  int l_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_28);
    }
  else
    {
      t = k_28;
      {
        ATerm m_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(n_28);
          }
        else
          {
            t = m_28;
            {
              ATerm d_48 = NULL,e_48 = NULL,f_48 = NULL,i_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  d_48 = ATgetArgument(t, 0);
                  e_48 = ATgetArgument(t, 1);
                  f_48 = ATgetArgument(t, 2);
                  i_48 = ATgetArgument(t, 3);
                  t = f_48;
                  t = map_1_0(g_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_48 = ATgetArgument(t, 0);
                      e_48 = ATgetArgument(t, 1);
                      f_48 = ATgetArgument(t, 2);
                      i_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_48;
                  t = map_1_0(h_7, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm p_48 = NULL;
  ATerm o_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_48 = ATgetArgument(t, 0);
          {
            ATerm q_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_28);
      t = p_48;
    }
  else
    {
      t = o_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_48;
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm y_48 = NULL;
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_48 = ATgetArgument(t, 0);
          {
            ATerm t_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_28);
      t = y_48;
    }
  else
    {
      t = r_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_48;
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm m_49 = NULL;
  ATerm u_28 = t;
  int v_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_49 = ATgetArgument(t, 0);
          {
            ATerm w_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_28);
      t = m_49;
    }
  else
    {
      t = u_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_49;
    }
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm o_50 = NULL;
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_50 = ATgetArgument(t, 0);
          {
            ATerm z_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_28);
      t = o_50;
    }
  else
    {
      t = x_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_50;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm t_50 = NULL;
  if(match_cons(t, sym__2))
    {
      t_50 = ATgetArgument(t, 0);
      if((t_50 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_29;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_50 = ATgetFirst((ATermList) t);
      v_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_50, v_50);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_29 = ATgetArgument(t, 0);
      if(match_cons(b_29, sym__2))
        {
          w_50 = ATgetArgument(b_29, 0);
          x_50 = ATgetArgument(b_29, 1);
        }
      else
        _fail(t);
      {
        ATerm d_29 = ATgetArgument(t, 1);
        if(match_cons(d_29, sym__2))
          {
            y_50 = ATgetArgument(d_29, 0);
            z_50 = ATgetArgument(d_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_50), w_50), (ATerm) ATinsert(CheckATermList(z_50), x_50));
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm a_51 = NULL;
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, a_51, term_h_24), (ATerm) ATmakeAppl(sym_Var_1, a_51));
  return(t);
}
ATerm RowLet_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL;
  s_94 = t;
  if(match_cons(t, sym_Row_2))
    {
      t_94 = ATgetArgument(t, 0);
      u_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,e_47 = NULL;
        t = u_94;
        {
          ATerm h_29 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_29;
            }
          t = new_0_0(t);
          w_46 = t;
          t = u_94;
          t = free_vars_3_0(w_6, x_6, tvars_matrix_boundin_3_0, t);
          e_47 = t;
          t = t_0(t);
          d_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_47, d_47);
          t = p_8(p_7, e_47, d_47, t);
          t = genzip_4_0(q_7, r_7, x_7, z_7, t);
          if(match_cons(t, sym__2))
            {
              b_47 = ATgetArgument(t, 0);
              c_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, w_46, (ATerm)ATempty, b_47, u_94)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, t_94, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_46), (ATerm)ATempty, c_47)));
        }
        ;
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = u_94;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, t_94, u_94));
      }
  }
  return(t);
}
ATerm a_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_29;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm f_95 = NULL,g_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_95 = ATgetFirst((ATermList) t);
      g_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_95, g_95);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if(match_cons(i_29, sym__2))
        {
          h_95 = ATgetArgument(i_29, 0);
          i_95 = ATgetArgument(i_29, 1);
        }
      else
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(match_cons(j_29, sym__2))
          {
            j_95 = ATgetArgument(j_29, 0);
            k_95 = ATgetArgument(j_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_95), h_95), (ATerm) ATinsert(CheckATermList(k_95), i_95));
  return(t);
}
ATerm z_8 (ATerm t_76, ATerm s_76, ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,o_6 = NULL;
  t = s_76;
  {
    ATerm t_8 (ATerm t)
    {
      ATerm u_8 (ATerm t)
      {
        t = t_76;
        return(t);
      }
      t = RowLet_1_0(u_8, t);
      return(t);
    }
    t = genzip_4_0(a_8, d_8, f_8, t_8, t);
    e_95 = t;
    if(match_cons(t, sym__2))
      {
        b_95 = ATgetArgument(t, 0);
        c_95 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_95);
    a_95 = t;
    t = b_95;
    t = concat_0_0(t);
    d_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_95, c_95);
    o_6 = t;
    t = SSLsetAnnotations(o_6, a_95);
    if(match_cons(t, sym__2))
      {
        y_94 = ATgetArgument(t, 0);
        z_94 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Let_2, y_94, (ATerm) ATmakeAppl(sym_Scope_2, t_76, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_k_29))), (ATerm) ATmakeAppl(sym_Matrix_1, z_94))));
  }
  return(t);
}
ATerm a_9 (ATerm b_111 (ATerm), ATerm e_44, ATerm c_44, ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL;
  o_95 = t;
  t = b_111(t);
  l_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_95, e_44, c_44);
  t = t_11(l_95, e_44, c_44, t);
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_95 = NULL;
        t = term_n_29;
        t_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_95, term_n_29);
        t = s_11(l_95, t_95, t);
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_95 = ATgetFirst((ATermList) t);
        n_95 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_29;
    p_95 = t;
    t = (ATerm) ATinsert(CheckATermList(n_95), (ATerm) ATinsert(CheckATermList(m_95), e_44));
    q_95 = t;
    t = SSL_table_put(l_95, p_95, q_95);
    t = o_95;
  }
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm o_29 = ATgetArgument(t, 0);
      if(((ATgetType(o_29) == AT_LIST) && !(ATisEmpty(o_29))))
        {
          ATerm p_29 = ATgetFirst((ATermList) o_29);
          if(match_cons(p_29, sym_As_2))
            {
              ATerm q_29 = ATgetArgument(p_29, 0);
              ATerm r_29 = ATgetArgument(p_29, 1);
              if(!(match_cons(r_29, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          y_95 = (ATerm) ATgetNext((ATermList) o_29);
        }
      else
        _fail(t);
      z_95 = ATgetArgument(t, 1);
      a_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, y_95, z_95, a_96);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm u_95 = NULL;
  t = filter_1_0(w_8, t);
  u_95 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, u_95);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm x_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, x_97), term_s_29);
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm v_52 = NULL,y_52 = NULL;
  if(match_cons(t, sym__2))
    {
      v_52 = ATgetArgument(t, 0);
      y_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(v_52, y_52, t);
  return(t);
}
ATerm g_9 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm MatchCons_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm i_97 = NULL,j_97 = NULL,v_97 = NULL;
  i_97 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = i_97;
      t = s_0(t);
      t = map_1_0(y_8, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          j_97 = ATgetArgument(t, 0);
          t = i_97;
          t = r_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((j_97 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
            }
          else
            _fail(t);
          t = s_0(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              j_97 = ATgetArgument(t, 0);
              t = i_97;
              t = r_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((j_97 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                }
              else
                _fail(t);
              t = s_0(t);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  j_97 = ATgetArgument(t, 0);
                  t = i_97;
                  t = r_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((j_97 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                    }
                  else
                    _fail(t);
                  t = s_0(t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  ATerm t_52 = NULL,u_52 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      j_97 = ATgetArgument(t, 0);
                      v_97 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_97;
                  t = r_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((j_97 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      t_52 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_97;
                  t = foldr_3_0(b_9, f_9, g_9, t);
                  u_52 = t;
                  t = t_52;
                  if((u_52 != t))
                    {
                      _fail(t);
                    }
                  t = v_97;
                }
            }
        }
    }
  return(t);
}
ATerm c_9 (ATerm b_127 (ATerm), ATerm g_75, ATerm d_75, ATerm e_75, ATerm f_75, ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL;
  t = g_75;
  t = b_127(t);
  c_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_98, e_75);
  t = conc_0_0(t);
  d_98 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, d_75, d_98, f_75);
  return(t);
}
ATerm d_9 (ATerm z_74, ATerm a_75, ATerm b_75, ATerm t)
{
  ATerm f_98 = NULL;
  t = z_74;
  {
    ATerm i_9 (ATerm t)
    {
      ATerm g_98 = NULL,h_98 = NULL,i_98 = NULL,j_98 = NULL;
      ATerm k_9 (ATerm t)
      {
        ATerm m_9 (ATerm t)
        {
          t = a_75;
          return(t);
        }
        ATerm o_9 (ATerm t)
        {
          t = b_75;
          return(t);
        }
        t = MatchCons_2_0(m_9, o_9, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm t_29 = ATgetArgument(t, 0);
          if(((ATgetType(t_29) == AT_LIST) && !(ATisEmpty(t_29))))
            {
              ATerm v_29 = ATgetFirst((ATermList) t_29);
              if(match_cons(v_29, sym_As_2))
                {
                  ATerm w_29 = ATgetArgument(v_29, 0);
                  g_98 = ATgetArgument(v_29, 1);
                }
              else
                _fail(t);
              h_98 = (ATerm) ATgetNext((ATermList) t_29);
            }
          else
            _fail(t);
          i_98 = ATgetArgument(t, 1);
          j_98 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_9(k_9, g_98, h_98, i_98, j_98, t);
      return(t);
    }
    t = filter_1_0(i_9, t);
    f_98 = t;
    t = (ATerm) ATmakeAppl(sym_Alt_3, a_75, b_75, (ATerm) ATmakeAppl(sym_Matrix_1, f_98));
  }
  return(t);
}
ATerm filter_1_0 (ATerm f_111 (ATerm), ATerm t)
{
  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL;
  h_99 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_99;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_99 = ATgetFirst((ATermList) t);
          j_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_29 = t;
        int z_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_53 = NULL,s_53 = NULL,t_53 = NULL,r_6 = NULL;
            t = SSLgetAnnotations(h_99);
            p_53 = t;
            t = i_99;
            t = f_111(t);
            s_53 = t;
            t = j_99;
            t = filter_1_0(f_111, t);
            t_53 = t;
            t = (ATerm) ATinsert(CheckATermList(t_53), s_53);
            r_6 = t;
            t = SSLsetAnnotations(r_6, p_53);
            ;
            LocalPopChoice(z_29);
          }
        else
          {
            t = y_29;
            t = j_99;
            t = filter_1_0(f_111, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm e_100 (ATerm t)
  {
    ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
    t = x_105(t);
    b_100 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_100;
      }
    else
      {
        ATerm f_54 = NULL,i_54 = NULL,t_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_100 = ATgetFirst((ATermList) t);
            d_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_100);
        f_54 = t;
        t = d_100;
        t = e_100(t);
        i_54 = t;
        t = (ATerm) ATinsert(CheckATermList(i_54), c_100);
        t_6 = t;
        t = SSLsetAnnotations(t_6, f_54);
      }
    return(t);
  }
  t = e_100(t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm i_101 = NULL,j_101 = NULL;
  if(match_cons(t, sym__2))
    {
      i_101 = ATgetArgument(t, 0);
      j_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(i_101, j_101, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm k_101 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm c_30 = ATgetArgument(t, 0);
      if(match_cons(c_30, sym_Off_1))
        {
          k_101 = ATgetArgument(c_30, 0);
        }
      else
        _fail(t);
      {
        ATerm d_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, k_101);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm m_100 = NULL,n_100 = NULL,p_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL;
  m_100 = t;
  if(match_cons(t, sym_Row_3))
    {
      n_100 = ATgetArgument(t, 0);
      {
        ATerm e_30 = ATgetArgument(t, 1);
      }
      {
        ATerm f_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = n_100;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_100 = ATgetFirst((ATermList) t);
      {
        ATerm g_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_100;
  if(match_cons(t, sym_As_2))
    {
      ATerm h_30 = ATgetArgument(t, 0);
      s_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_100;
  if(match_cons(t, sym_Str_1))
    {
      t_100 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, t_100), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          t_100 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, t_100), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              t_100 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, t_100), (ATerm) ATempty);
            }
          else
            {
              ATerm f_101 = NULL,g_101 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  t_100 = ATgetArgument(t, 0);
                  u_100 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_100;
              t = foldr_3_0(q_9, r_9, u_9, t);
              f_101 = t;
              t = u_100;
              t = map_1_0(v_9, t);
              g_101 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, t_100, f_101), g_101);
            }
        }
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm n_101 = NULL,o_101 = NULL,p_101 = NULL;
  p_101 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_101 = ATgetFirst((ATermList) t);
      o_101 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_101 = NULL;
            t = o_101;
            {
              ATerm x_9 (ATerm t)
              {
                ATerm k_30 = t;
                if((PushChoice() == 0))
                  {
                    if((n_101 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_30;
                  }
                return(t);
              }
              t = filter_1_0(x_9, t);
              s_101 = t;
              t = (ATerm) ATinsert(CheckATermList(s_101), n_101);
            }
            ;
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            t = p_101;
          }
      }
    }
  else
    {
      t = p_101;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(w_9, t);
  return(t);
}
ATerm s_104 (ATerm i_102, ATerm t)
{
  ATerm l_102 = NULL;
  t = SSL_explode_string(i_102);
  {
    ATerm n_30 = t;
    int s_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_104 (ATerm t)
        {
          ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL;
          s_103 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_103 = ATgetFirst((ATermList) t);
              u_103 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm t_30 = t;
            int u_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_54 = NULL,b_55 = NULL,v_6 = NULL;
                t = SSLgetAnnotations(s_103);
                y_54 = t;
                t = u_103;
                t = u_104(t);
                b_55 = t;
                t = (ATerm) ATinsert(CheckATermList(b_55), t_103);
                v_6 = t;
                t = SSLsetAnnotations(v_6, y_54);
                ;
                LocalPopChoice(u_30);
              }
            else
              {
                t = t_30;
                {
                  ATerm m_55 = NULL,y_6 = NULL;
                  t = SSLgetAnnotations(s_103);
                  m_55 = t;
                  t = t_103;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, t_103);
                  y_6 = t;
                  t = SSLsetAnnotations(y_6, m_55);
                }
              }
          }
          return(t);
        }
        t = u_104(t);
        ;
        LocalPopChoice(s_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATempty;
      }
    l_102 = t;
    t = SSL_implode_string(l_102);
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL,a_104 = NULL,e_104 = NULL,f_104 = NULL,l_104 = NULL;
  l_104 = t;
  {
    ATerm v_30 = t;
    int w_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_103 = ATgetFirst((ATermList) t);
            {
              ATerm x_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_30);
        t = y_103;
        {
          ATerm y_30 = t;
          int a_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  z_103 = ATgetArgument(t, 0);
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
              t = z_103;
              {
                ATerm d_31 = t;
                int e_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        a_104 = ATgetFirst((ATermList) t);
                        {
                          ATerm f_31 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_31);
                    t = a_104;
                    {
                      ATerm g_31 = t;
                      int h_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              e_104 = ATgetArgument(t, 0);
                              {
                                ATerm j_31 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(h_31);
                          t = e_104;
                          if(match_cons(t, sym_Off_1))
                            {
                              f_104 = ATgetArgument(t, 0);
                              t = f_104;
                            }
                          else
                            {
                              t = s_104(l_104, t);
                            }
                        }
                      else
                        {
                          t = g_31;
                          t = s_104(l_104, t);
                        }
                    }
                  }
                else
                  {
                    t = d_31;
                    t = s_104(l_104, t);
                  }
              }
            }
          else
            {
              t = y_30;
              t = s_104(l_104, t);
            }
        }
      }
    else
      {
        t = v_30;
        t = s_104(l_104, t);
      }
  }
  return(t);
}
ATerm a_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      ATerm p_31 = ATgetArgument(t, 1);
      if(((ATgetType(p_31) != AT_LIST) || !(ATisEmpty(p_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL;
  if(match_cons(t, sym__2))
    {
      q_105 = ATgetArgument(t, 0);
      {
        ATerm r_31 = ATgetArgument(t, 1);
        if(((ATgetType(r_31) == AT_LIST) && !(ATisEmpty(r_31))))
          {
            r_105 = ATgetFirst((ATermList) r_31);
            s_105 = (ATerm) ATgetNext((ATermList) r_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_105, r_105), (ATerm) ATmakeAppl(sym__2, q_105, s_105));
  return(t);
}
ATerm k_10 (ATerm t)
{
  ATerm t_105 = NULL,w_105 = NULL;
  if(match_cons(t, sym__2))
    {
      t_105 = ATgetArgument(t, 0);
      w_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_105), t_105);
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm z_105 = NULL,a_106 = NULL,f_106 = NULL;
  if(match_cons(t, sym__2))
    {
      z_105 = ATgetArgument(t, 0);
      {
        ATerm s_31 = ATgetArgument(t, 1);
        if(match_cons(s_31, sym__2))
          {
            a_106 = ATgetArgument(s_31, 0);
            f_106 = ATgetArgument(s_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_9(z_105, a_106, f_106, t);
  return(t);
}
ATerm m_10 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm h_9 (ATerm m_76, ATerm t)
{
  ATerm d_105 = NULL,g_105 = NULL,i_105 = NULL,j_105 = NULL,m_105 = NULL,o_105 = NULL,p_105 = NULL;
  t = m_76;
  t = get_path_0_0(t);
  d_105 = t;
  t = m_76;
  t = outedges_0_0(t);
  g_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_76, g_105);
  t = genzip_4_0(a_10, i_10, k_10, l_10, t);
  i_105 = t;
  t = m_76;
  t = default_state_0_0(t);
  j_105 = t;
  t = new_0_0(t);
  m_105 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, m_76);
  o_105 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_31, m_105);
  p_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, m_76), (ATerm) ATmakeAppl(sym_Defined_2, term_w_31, m_105));
  t = a_9(m_10, o_105, p_105, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, m_105, (ATerm)ATmakeAppl(sym_Var_1, d_105), i_105, j_105);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm h_106 = NULL,i_106 = NULL,j_106 = NULL,m_106 = NULL,n_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL,r_106 = NULL,y_106 = NULL,z_106 = NULL,a_107 = NULL,d_107 = NULL,i_107 = NULL,f_7 = NULL,e_7 = NULL,d_7 = NULL;
  i_107 = t;
  if(match_cons(t, sym_Row_3))
    {
      i_106 = ATgetArgument(t, 0);
      j_106 = ATgetArgument(t, 1);
      m_106 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_107);
  h_106 = t;
  t = i_106;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_106 = ATgetFirst((ATermList) t);
      p_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_106);
  n_106 = t;
  t = o_106;
  if(match_cons(t, sym_As_2))
    {
      y_106 = ATgetArgument(t, 0);
      z_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_106);
  r_106 = t;
  t = z_106;
  {
    ATerm y_31 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_31;
      }
    a_107 = t;
    t = (ATerm) ATmakeAppl(sym_As_2, y_106, a_107);
    d_7 = t;
    t = SSLsetAnnotations(d_7, r_106);
    d_107 = t;
    t = (ATerm) ATinsert(CheckATermList(p_106), d_107);
    e_7 = t;
    t = SSLsetAnnotations(e_7, n_106);
    q_106 = t;
    t = (ATerm) ATmakeAppl(sym_Row_3, q_106, j_106, m_106);
    f_7 = t;
    t = SSLsetAnnotations(f_7, h_106);
  }
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm j_107 = NULL,k_107 = NULL,r_107 = NULL,s_107 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      j_107 = ATgetArgument(t, 0);
      {
        ATerm z_31 = ATgetArgument(t, 1);
        if(((ATgetType(z_31) == AT_LIST) && !(ATisEmpty(z_31))))
          {
            k_107 = ATgetFirst((ATermList) z_31);
            r_107 = (ATerm) ATgetNext((ATermList) z_31);
          }
        else
          _fail(t);
      }
      s_107 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(j_107), k_107), r_107, s_107);
  return(t);
}
ATerm j_9 (ATerm c_76, ATerm t)
{
  ATerm g_106 = NULL;
  t = c_76;
  {
    ATerm a_32 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(n_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_32;
      }
    t = c_76;
    t = map_1_0(q_10, t);
    g_106 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, g_106);
  }
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL,i_108 = NULL,j_108 = NULL,k_108 = NULL,n_7 = NULL,m_7 = NULL,k_7 = NULL;
  k_108 = t;
  if(match_cons(t, sym_Row_3))
    {
      v_107 = ATgetArgument(t, 0);
      w_107 = ATgetArgument(t, 1);
      x_107 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_108);
  u_107 = t;
  t = w_107;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_108 = ATgetFirst((ATermList) t);
      d_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_107);
  b_108 = t;
  t = c_108;
  if(match_cons(t, sym_As_2))
    {
      f_108 = ATgetArgument(t, 0);
      i_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_108);
  e_108 = t;
  t = i_108;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, f_108, i_108);
  k_7 = t;
  t = SSLsetAnnotations(k_7, e_108);
  j_108 = t;
  t = (ATerm) ATinsert(CheckATermList(d_108), j_108);
  m_7 = t;
  t = SSLsetAnnotations(m_7, b_108);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_32 = ATgetFirst((ATermList) t);
      a_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, v_107, a_108, x_107);
  n_7 = t;
  t = SSLsetAnnotations(n_7, u_107);
  return(t);
}
ATerm l_9 (ATerm a_76, ATerm t)
{
  ATerm t_107 = NULL;
  t = a_76;
  t = map_1_0(r_10, t);
  t_107 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, t_107);
  return(t);
}
ATerm repeat_1_0 (ATerm q_115 (ATerm), ATerm t)
{
  ATerm o_108 (ATerm t)
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_115(t);
        t = o_108(t);
        ;
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
      }
    return(t);
  }
  t = o_108(t);
  return(t);
}
ATerm n_9 (ATerm r_44, ATerm s_44, ATerm t)
{
  ATerm s_108 = NULL,t_108 = NULL;
  t_108 = t;
  {
    ATerm f_32 = t;
    int g_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_44, s_44);
        t = s_11(r_44, s_44, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_32 = ATgetFirst((ATermList) t);
            s_108 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_32);
        t = SSL_table_put(r_44, s_44, s_108);
        t = (ATerm) ATmakeAppl(sym__3, r_44, s_44, s_108);
      }
    else
      {
        t = f_32;
        t = SSL_table_remove(r_44, s_44);
        t = (ATerm) ATmakeAppl(sym__2, r_44, s_44);
      }
    t = t_108;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  ATerm u_108 = NULL,x_108 = NULL,y_108 = NULL,a_109 = NULL,b_109 = NULL;
  a_109 = t;
  t = y_110(t);
  y_108 = t;
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_109 = NULL;
        t = term_n_29;
        c_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_108, term_n_29);
        t = s_11(y_108, c_109, t);
        ;
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_108 = ATgetFirst((ATermList) t);
        u_108 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_n_29;
    b_109 = t;
    t = SSL_table_put(y_108, b_109, u_108);
    t = x_108;
    {
      ATerm s_10 (ATerm t)
      {
        ATerm d_109 = NULL;
        d_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_108, d_109);
        t = n_9(y_108, d_109, t);
        return(t);
      }
      t = map_1_0(s_10, t);
      t = a_109;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_101(t);
      t = v_101(t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = v_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm m_109 = NULL,n_109 = NULL,o_109 = NULL,v_109 = NULL,w_109 = NULL;
  n_109 = t;
  t = x_110(t);
  m_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_109, term_n_29);
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_110 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_32 = ATgetArgument(t, 0);
            ATerm r_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_29;
        b_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_109, term_n_29);
        t = s_11(m_109, b_110, t);
        ;
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        t = (ATerm) ATempty;
      }
    o_109 = t;
    t = term_n_29;
    v_109 = t;
    t = (ATerm) ATinsert(CheckATermList(o_109), (ATerm) ATempty);
    w_109 = t;
    t = SSL_table_put(m_109, v_109, w_109);
    t = n_109;
  }
  return(t);
}
ATerm scope_2_0 (ATerm z_110 (ATerm), ATerm a_111 (ATerm), ATerm t)
{
  ATerm t_10 (ATerm t)
  {
    t = end_scope_1_0(z_110, t);
    return(t);
  }
  t = begin_scope_1_0(z_110, t);
  t = restore_always_2_0(a_111, t_10, t);
  return(t);
}
ATerm at_end_1_0 (ATerm e_105 (ATerm), ATerm t)
{
  ATerm j_111 (ATerm t)
  {
    ATerm w_110 = NULL,e_111 = NULL,i_111 = NULL;
    i_111 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_110 = ATgetFirst((ATermList) t);
        e_111 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_56 = NULL,n_56 = NULL,u_7 = NULL;
          t = SSLgetAnnotations(i_111);
          k_56 = t;
          t = e_111;
          t = j_111(t);
          n_56 = t;
          t = (ATerm) ATinsert(CheckATermList(n_56), w_110);
          u_7 = t;
          t = SSLsetAnnotations(u_7, k_56);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_111;
        t = e_105(t);
      }
    return(t);
  }
  t = j_111(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm f_110 = NULL,g_110 = NULL,h_110 = NULL;
  f_110 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_110;
    }
  else
    {
      ATerm u_10 (ATerm t)
      {
        t = not_null(h_110);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_110 = ATgetFirst((ATermList) t);
          if(((h_110 != NULL) && (h_110 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_110 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_110;
      t = at_end_1_0(u_10, t);
    }
  return(t);
}
ATerm r_112 (ATerm z_111, ATerm t)
{
  ATerm e_112 = NULL;
  t = SSL_explode_term(z_111);
  if(match_cons(t, sym__2))
    {
      ATerm s_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_112;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL,m_112 = NULL;
  m_112 = t;
  if(match_cons(t, sym__2))
    {
      i_112 = ATgetArgument(t, 0);
      j_112 = ATgetArgument(t, 1);
      {
        ATerm t_32 = t;
        int u_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_10 (ATerm t)
            {
              t = j_112;
              return(t);
            }
            t = i_112;
            t = at_end_1_0(v_10, t);
            ;
            LocalPopChoice(u_32);
          }
        else
          {
            t = t_32;
            t = r_112(m_112, t);
          }
      }
    }
  else
    {
      t = r_112(m_112, t);
    }
  return(t);
}
ATerm y_10 (ATerm t)
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
ATerm z_10 (ATerm t)
{
  ATerm c_115 = NULL;
  if(match_cons(t, sym__2))
    {
      c_115 = ATgetArgument(t, 0);
      if((c_115 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm a_11 (ATerm t)
{
  ATerm j_115 = NULL;
  if(match_cons(t, sym__2))
    {
      j_115 = ATgetArgument(t, 0);
      if((j_115 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm t_115 = NULL;
  if(match_cons(t, sym__2))
    {
      t_115 = ATgetArgument(t, 0);
      if((t_115 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm b_116 = NULL;
  if(match_cons(t, sym__2))
    {
      b_116 = ATgetArgument(t, 0);
      if((b_116 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm e_11 (ATerm t)
{
  ATerm p_116 = NULL;
  if(match_cons(t, sym__2))
    {
      p_116 = ATgetArgument(t, 0);
      if((p_116 != ATgetArgument(t, 1)))
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
  ATerm m_113 = NULL,n_113 = NULL,o_113 = NULL,p_113 = NULL,r_113 = NULL,s_113 = NULL,z_113 = NULL,a_114 = NULL,d_114 = NULL,e_114 = NULL,h_114 = NULL,i_114 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      r_113 = ATgetArgument(t, 0);
      i_114 = ATgetArgument(t, 1);
      t = r_113;
      if(match_cons(t, sym_Matrix_2))
        {
          s_113 = ATgetArgument(t, 0);
          z_113 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_114;
      if(match_cons(t, sym_Choice_2))
        {
          o_113 = ATgetArgument(t, 0);
          p_113 = ATgetArgument(t, 1);
          {
            ATerm r_114 = NULL,s_114 = NULL;
            t = o_113;
            if(match_cons(t, sym_Matrix_2))
              {
                m_113 = ATgetArgument(t, 0);
                n_113 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, s_113, m_113);
            t = x_10(y_10, s_113, m_113, t);
            r_114 = t;
            t = (ATerm) ATmakeAppl(sym__2, z_113, n_113);
            t = conc_0_0(t);
            s_114 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, r_114, s_114), p_113);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              o_113 = ATgetArgument(t, 0);
              p_113 = ATgetArgument(t, 1);
              {
                ATerm a_115 = NULL,b_115 = NULL;
                t = o_113;
                if(match_cons(t, sym_Matrix_2))
                  {
                    m_113 = ATgetArgument(t, 0);
                    n_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, s_113, m_113);
                t = x_10(z_10, s_113, m_113, t);
                a_115 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_113, n_113);
                t = conc_0_0(t);
                b_115 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, a_115, b_115), p_113);
              }
            }
          else
            {
              ATerm h_115 = NULL,i_115 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  o_113 = ATgetArgument(t, 0);
                  p_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, s_113, o_113);
              t = x_10(a_11, s_113, o_113, t);
              h_115 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_113, p_113);
              t = conc_0_0(t);
              i_115 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, h_115, i_115);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          r_113 = ATgetArgument(t, 0);
          i_114 = ATgetArgument(t, 1);
          t = r_113;
          if(match_cons(t, sym_Matrix_2))
            {
              s_113 = ATgetArgument(t, 0);
              z_113 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_114;
          if(match_cons(t, sym_LChoice_2))
            {
              o_113 = ATgetArgument(t, 0);
              p_113 = ATgetArgument(t, 1);
              {
                ATerm p_115 = NULL,s_115 = NULL;
                t = o_113;
                if(match_cons(t, sym_Matrix_2))
                  {
                    m_113 = ATgetArgument(t, 0);
                    n_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, s_113, m_113);
                t = x_10(c_11, s_113, m_113, t);
                p_115 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_113, n_113);
                t = conc_0_0(t);
                s_115 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, p_115, s_115), p_113);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  o_113 = ATgetArgument(t, 0);
                  p_113 = ATgetArgument(t, 1);
                  {
                    ATerm z_115 = NULL,a_116 = NULL;
                    t = o_113;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        m_113 = ATgetArgument(t, 0);
                        n_113 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, s_113, m_113);
                    t = x_10(d_11, s_113, m_113, t);
                    z_115 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_113, n_113);
                    t = conc_0_0(t);
                    a_116 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, z_115, a_116), p_113);
                  }
                }
              else
                {
                  ATerm n_116 = NULL,o_116 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      o_113 = ATgetArgument(t, 0);
                      p_113 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, s_113, o_113);
                  t = x_10(e_11, s_113, o_113, t);
                  n_116 = t;
                  t = (ATerm) ATmakeAppl(sym__2, z_113, p_113);
                  t = conc_0_0(t);
                  o_116 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, n_116, o_116);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              r_113 = ATgetArgument(t, 0);
              i_114 = ATgetArgument(t, 1);
              {
                ATerm t_116 = NULL;
                t = i_114;
                if(match_cons(t, sym_Matrix_2))
                  {
                    o_113 = ATgetArgument(t, 0);
                    p_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_113;
                {
                  ATerm f_11 (ATerm t)
                  {
                    ATerm u_116 = NULL,v_116 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        u_116 = ATgetArgument(t, 0);
                        v_116 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, u_116, (ATerm) ATmakeAppl(sym_Scope_2, r_113, v_116));
                    return(t);
                  }
                  t = map_1_0(f_11, t);
                  t_116 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, o_113, t_116);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  r_113 = ATgetArgument(t, 0);
                  i_114 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_113;
              if(match_cons(t, sym_Matrix_2))
                {
                  s_113 = ATgetArgument(t, 0);
                  z_113 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_113;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_114 = ATgetFirst((ATermList) t);
                  h_114 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_114;
              if(match_cons(t, sym_Row_2))
                {
                  d_114 = ATgetArgument(t, 0);
                  e_114 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_114;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, s_113, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, d_114, (ATerm) ATmakeAppl(sym_Seq_2, e_114, i_114))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm g_11 (ATerm t)
  {
    t = bottomup_1_0(o_98, t);
    return(t);
  }
  t = SRTS_all(g_11, t);
  t = o_98(t);
  return(t);
}
ATerm w_10 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm f_39, ATerm e_39, ATerm t)
{
  t = f_107(t);
  {
    ATerm h_11 (ATerm t)
    {
      ATerm a_117 = NULL;
      a_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_39, a_117);
      t = e_107(t);
      return(t);
    }
    t = fetch_1_0(h_11, t);
    t = e_39;
  }
  return(t);
}
ATerm x_10 (ATerm b_107 (ATerm), ATerm b_39, ATerm a_39, ATerm t)
{
  ATerm q_117 (ATerm t)
  {
    ATerm l_117 = NULL,m_117 = NULL,n_117 = NULL;
    l_117 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_39;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_117 = ATgetFirst((ATermList) t);
            n_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_32 = t;
          int w_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_117;
              {
                ATerm w_11 (ATerm t)
                {
                  t = a_39;
                  return(t);
                }
                t = w_10(b_107, w_11, m_117, n_117, t);
                t = q_117(t);
              }
              ;
              LocalPopChoice(w_32);
            }
          else
            {
              t = v_32;
              {
                ATerm w_56 = NULL,z_56 = NULL,b_8 = NULL;
                t = SSLgetAnnotations(l_117);
                w_56 = t;
                t = n_117;
                t = q_117(t);
                z_56 = t;
                t = (ATerm) ATinsert(CheckATermList(z_56), m_117);
                b_8 = t;
                t = SSLsetAnnotations(b_8, w_56);
              }
            }
        }
      }
    return(t);
  }
  t = b_39;
  t = q_117(t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm t)
{
  ATerm t_117 = NULL,u_117 = NULL,v_117 = NULL;
  t_117 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_117;
      t = r_109(t);
    }
  else
    {
      ATerm y_117 = NULL,z_117 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_117 = ATgetFirst((ATermList) t);
          v_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_117;
      t = t_109(t);
      y_117 = t;
      t = v_117;
      t = foldr_3_0(r_109, s_109, t_109, t);
      z_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_117, z_117);
      t = s_109(t);
    }
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm v_108 (ATerm), ATerm w_108 (ATerm), ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_118 = NULL;
      t = v_108(t);
      c_118 = t;
      t = (ATerm) ATinsert(ATempty, c_118);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm e_57 = NULL,f_57 = NULL;
        ATerm z_11 (ATerm t)
        {
          t = collect_om_2_0(v_108, w_108, t);
          return(t);
        }
        f_57 = t;
        t = SSL_explode_term(f_57);
        if(match_cons(t, sym__2))
          {
            ATerm a_33 = ATgetArgument(t, 0);
            e_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_57;
        t = foldr_3_0(x_11, w_108, z_11, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm i_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL;
  if(match_cons(t, sym_As_2))
    {
      l_118 = ATgetArgument(t, 0);
      n_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_118;
  if(match_cons(t, sym_Var_1))
    {
      m_118 = ATgetArgument(t, 0);
      t = n_118;
      if(match_cons(t, sym_As_2))
        {
          o_118 = ATgetArgument(t, 0);
          {
            ATerm b_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = o_118;
      if(match_cons(t, sym_Off_1))
        {
          i_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, m_118), (ATerm) ATmakeAppl(sym_Var_1, i_118)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          m_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_118;
      if(match_cons(t, sym_Var_1))
        {
          o_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, o_118), (ATerm) ATmakeAppl(sym_Var_1, m_118)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL,k_119 = NULL,l_119 = NULL,m_119 = NULL;
  i_119 = t;
  if(match_cons(t, sym_As_2))
    {
      j_119 = ATgetArgument(t, 0);
      l_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_119;
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
        t = l_119;
        if(match_cons(t, sym_As_2))
          {
            m_119 = ATgetArgument(t, 0);
            h_119 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_119;
        if(match_cons(t, sym_Off_1))
          {
            g_119 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, g_119), h_119);
      }
    else
      {
        t = c_33;
        if(match_cons(t, sym_Off_1))
          {
            k_119 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_119;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_119;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_119;
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
            t = k_119;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, k_119), term_s_29);
      }
  }
  return(t);
}
ATerm a_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_29;
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm d_120 = NULL,e_120 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_120 = ATgetFirst((ATermList) t);
      e_120 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_120, e_120);
  return(t);
}
ATerm e_12 (ATerm t)
{
  ATerm f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_33 = ATgetArgument(t, 0);
      if(match_cons(i_33, sym__2))
        {
          f_120 = ATgetArgument(i_33, 0);
          g_120 = ATgetArgument(i_33, 1);
        }
      else
        _fail(t);
      {
        ATerm k_33 = ATgetArgument(t, 1);
        if(match_cons(k_33, sym__2))
          {
            h_120 = ATgetArgument(k_33, 0);
            i_120 = ATgetArgument(k_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_120), f_120), (ATerm) ATinsert(CheckATermList(i_120), g_120));
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm j_120 = NULL,k_120 = NULL;
  if(match_cons(t, sym__2))
    {
      j_120 = ATgetArgument(t, 0);
      k_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_10(j_12, j_120, k_120, t);
  return(t);
}
ATerm j_12 (ATerm t)
{
  ATerm m_120 = NULL;
  if(match_cons(t, sym__2))
    {
      m_120 = ATgetArgument(t, 0);
      if((m_120 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_12 (ATerm t)
{
  ATerm o_120 = NULL;
  if(match_cons(t, sym__2))
    {
      o_120 = ATgetArgument(t, 0);
      if((o_120 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t)
{
  ATerm q_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL,y_119 = NULL,z_119 = NULL,a_120 = NULL,b_120 = NULL;
  a_120 = t;
  b_120 = t;
  t = SSL_explode_term(b_120);
  if(match_cons(t, sym__2))
    {
      s_119 = ATgetArgument(t, 0);
      q_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_120);
  u_119 = t;
  t = q_119;
  t = genzip_4_0(a_12, c_12, e_12, y_107, t);
  if(match_cons(t, sym__2))
    {
      t_119 = ATgetArgument(t, 0);
      r_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(s_119, t_119);
  z_119 = t;
  t = SSLsetAnnotations(z_119, u_119);
  t = z_107(t);
  if(match_cons(t, sym__2))
    {
      v_119 = ATgetArgument(t, 0);
      w_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_119;
  t = foldr_2_0(g_12, i_12, t);
  y_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_119, y_119);
  t = x_10(k_12, w_119, y_119, t);
  x_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_119, x_119);
  return(t);
}
ATerm collect_split_2_0 (ATerm p_108 (ATerm), ATerm q_108 (ATerm), ATerm t)
{
  ATerm v_120 (ATerm t)
  {
    ATerm l_12 (ATerm t)
    {
      ATerm q_120 = NULL,r_120 = NULL,s_120 = NULL;
      s_120 = t;
      {
        ATerm l_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_108(t);
            ;
            LocalPopChoice(n_33);
          }
        else
          {
            t = l_33;
          }
        q_120 = t;
        t = s_120;
        {
          ATerm o_33 = t;
          int p_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_108(t);
              ;
              LocalPopChoice(p_33);
            }
          else
            {
              t = o_33;
              t = (ATerm) ATempty;
            }
          r_120 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_120, r_120);
        }
      }
      return(t);
    }
    t = CollectSplit_2_0(v_120, l_12, t);
    return(t);
  }
  t = v_120(t);
  return(t);
}
ATerm genzip_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t)
{
  ATerm c_121 (ATerm t)
  {
    ATerm q_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_102(t);
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = q_33;
        {
          ATerm w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL,b_121 = NULL,e_8 = NULL;
          t = a_103(t);
          b_121 = t;
          if(match_cons(t, sym__2))
            {
              x_120 = ATgetArgument(t, 0);
              y_120 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_121);
          w_120 = t;
          t = x_120;
          t = c_103(t);
          z_120 = t;
          t = y_120;
          t = c_121(t);
          a_121 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_120, a_121);
          e_8 = t;
          t = SSLsetAnnotations(e_8, w_120);
          t = b_103(t);
        }
      }
    return(t);
  }
  t = c_121(t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      ATerm t_33 = ATgetArgument(t, 1);
      if(((ATgetType(t_33) != AT_LIST) || !(ATisEmpty(t_33))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm f_121 = NULL,g_121 = NULL,h_121 = NULL,i_121 = NULL,j_121 = NULL;
  if(match_cons(t, sym__2))
    {
      f_121 = ATgetArgument(t, 0);
      {
        ATerm u_33 = ATgetArgument(t, 1);
        if(((ATgetType(u_33) == AT_LIST) && !(ATisEmpty(u_33))))
          {
            g_121 = ATgetFirst((ATermList) u_33);
            h_121 = (ATerm) ATgetNext((ATermList) u_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_v_17;
  j_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_121, term_v_17);
  t = q_11(f_121, j_121, t);
  i_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_121, g_121), (ATerm) ATmakeAppl(sym__2, i_121, h_121));
  return(t);
}
ATerm p_12 (ATerm t)
{
  ATerm k_121 = NULL,l_121 = NULL;
  if(match_cons(t, sym__2))
    {
      k_121 = ATgetArgument(t, 0);
      l_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_121), k_121);
  return(t);
}
ATerm nzip0_1_0 (ATerm k_103 (ATerm), ATerm t)
{
  ATerm d_121 = NULL;
  d_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_29, d_121);
  t = genzip_4_0(m_12, o_12, p_12, k_103, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm q_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL;
  if(match_cons(t, sym_As_2))
    {
      s_121 = ATgetArgument(t, 0);
      u_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_121;
  if(match_cons(t, sym_Off_1))
    {
      t_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_121;
  {
    ATerm v_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm y_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_33);
        {
          ATerm z_33 = t;
          int a_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_12 (ATerm t)
              {
                ATerm b_122 = NULL,c_122 = NULL;
                if(match_cons(t, sym__2))
                  {
                    b_122 = ATgetArgument(t, 0);
                    c_122 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(t_121), b_122)), c_122);
                return(t);
              }
              t = u_121;
              t = nzip0_1_0(s_12, t);
              ;
              LocalPopChoice(a_34);
            }
          else
            {
              t = z_33;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, t_121), term_s_29);
            }
        }
      }
    else
      {
        t = v_33;
        if(match_cons(t, sym_As_2))
          {
            v_121 = ATgetArgument(t, 0);
            w_121 = ATgetArgument(t, 1);
            t = v_121;
            if(match_cons(t, sym_Var_1))
              {
                q_121 = ATgetArgument(t, 0);
                {
                  ATerm b_34 = t;
                  int c_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_12 (ATerm t)
                      {
                        ATerm g_122 = NULL,h_122 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            g_122 = ATgetArgument(t, 0);
                            h_122 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(t_121), g_122)), h_122);
                        return(t);
                      }
                      t = u_121;
                      t = nzip0_1_0(t_12, t);
                      ;
                      LocalPopChoice(c_34);
                    }
                  else
                    {
                      t = b_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_121), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, t_121), w_121));
                    }
                }
              }
            else
              {
                ATerm u_12 (ATerm t)
                {
                  ATerm n_122 = NULL,o_122 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      n_122 = ATgetArgument(t, 0);
                      o_122 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(t_121), n_122)), o_122);
                  return(t);
                }
                t = u_121;
                t = nzip0_1_0(u_12, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                v_121 = ATgetArgument(t, 0);
                w_121 = ATgetArgument(t, 1);
                {
                  ATerm e_34 = t;
                  int f_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_12 (ATerm t)
                      {
                        ATerm r_122 = NULL,s_122 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            r_122 = ATgetArgument(t, 0);
                            s_122 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(t_121), r_122)), s_122);
                        return(t);
                      }
                      t = u_121;
                      t = nzip0_1_0(v_12, t);
                      ;
                      LocalPopChoice(f_34);
                    }
                  else
                    {
                      t = e_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, t_121), (ATerm) ATmakeAppl(sym_Op_2, v_121, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, t_121), w_121)));
                    }
                }
              }
            else
              {
                ATerm w_12 (ATerm t)
                {
                  ATerm y_122 = NULL,z_122 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      y_122 = ATgetArgument(t, 0);
                      z_122 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(t_121), y_122)), z_122);
                  return(t);
                }
                t = u_121;
                t = nzip0_1_0(w_12, t);
              }
          }
      }
  }
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm i_123 = NULL,j_123 = NULL,k_123 = NULL;
  k_123 = t;
  if(match_cons(t, sym_As_2))
    {
      i_123 = ATgetArgument(t, 0);
      j_123 = ATgetArgument(t, 1);
      t = i_123;
      if(match_cons(t, sym_Wld_0))
        {
          t = j_123;
        }
      else
        {
          t = k_123;
        }
    }
  else
    {
      t = k_123;
    }
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      ;
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
    }
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm s_123 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      s_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_123;
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm t_123 = NULL,u_123 = NULL;
  if(match_cons(t, sym__2))
    {
      t_123 = ATgetArgument(t, 0);
      u_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_10(d_13, t_123, u_123, t);
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm v_123 = NULL;
  if(match_cons(t, sym__2))
    {
      v_123 = ATgetArgument(t, 0);
      if((v_123 != ATgetArgument(t, 1)))
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
  ATerm e_123 = NULL,f_123 = NULL,g_123 = NULL,h_123 = NULL;
  h_123 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_i_34, (ATerm) ATinsert(ATempty, h_123));
  t = topdown_1_0(x_12, t);
  t = topdown_1_0(y_12, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      e_123 = ATgetArgument(t, 0);
      f_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_123;
  t = collect_om_2_0(z_12, a_13, t);
  g_123 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, g_123, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, e_123, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_123), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_k_29)))))));
  return(t);
}
ATerm e_13 (ATerm t)
{
  t = repeat_1_0(h_13, t);
  return(t);
}
ATerm h_13 (ATerm t)
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      ;
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_126 (ATerm t)
      {
        ATerm p_34 = t;
        int q_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_125 = NULL,l_125 = NULL,m_125 = NULL;
            k_125 = t;
            if(match_cons(t, sym_Choice_2))
              {
                l_125 = ATgetArgument(t, 0);
                m_125 = ATgetArgument(t, 1);
                {
                  ATerm w_57 = NULL,a_58 = NULL,l_58 = NULL,l_8 = NULL;
                  t = SSLgetAnnotations(k_125);
                  w_57 = t;
                  t = l_125;
                  t = i_126(t);
                  a_58 = t;
                  t = m_125;
                  t = i_126(t);
                  l_58 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, a_58, l_58);
                  l_8 = t;
                  t = SSLsetAnnotations(l_8, w_57);
                }
              }
            else
              {
                ATerm c_59 = NULL,m_59 = NULL,p_59 = NULL,m_8 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    l_125 = ATgetArgument(t, 0);
                    m_125 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(k_125);
                c_59 = t;
                t = l_125;
                t = i_126(t);
                m_59 = t;
                t = m_125;
                t = i_126(t);
                p_59 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, m_59, p_59);
                m_8 = t;
                t = SSLsetAnnotations(m_8, c_59);
              }
            ;
            LocalPopChoice(q_34);
          }
        else
          {
            t = p_34;
            {
              ATerm l_126 (ATerm t)
              {
                ATerm r_34 = t;
                int s_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_126 = NULL,f_126 = NULL,g_126 = NULL;
                    f_126 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        g_126 = ATgetArgument(t, 0);
                        e_126 = ATgetArgument(t, 1);
                        {
                          ATerm j_60 = NULL,m_60 = NULL,n_60 = NULL,s_9 = NULL;
                          t = SSLgetAnnotations(f_126);
                          j_60 = t;
                          t = g_126;
                          t = l_126(t);
                          m_60 = t;
                          t = e_126;
                          t = match_to_matrix_0_0(t);
                          n_60 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_60, n_60);
                          s_9 = t;
                          t = SSLsetAnnotations(s_9, j_60);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            g_126 = ATgetArgument(t, 0);
                            e_126 = ATgetArgument(t, 1);
                            {
                              ATerm f_61 = NULL,p_61 = NULL,d_10 = NULL;
                              t = SSLgetAnnotations(f_126);
                              f_61 = t;
                              t = e_126;
                              t = l_126(t);
                              p_61 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, g_126, p_61);
                              d_10 = t;
                              t = SSLsetAnnotations(d_10, f_61);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                g_126 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = g_126;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    ;
                    LocalPopChoice(s_34);
                  }
                else
                  {
                    t = r_34;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = l_126(t);
            }
          }
        return(t);
      }
      ATerm t_34 = t;
      int u_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL,i_124 = NULL,g_8 = NULL;
          i_124 = t;
          if(match_cons(t, sym_Choice_2))
            {
              g_124 = ATgetArgument(t, 0);
              h_124 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_124);
          f_124 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, g_124, h_124);
          g_8 = t;
          t = SSLsetAnnotations(g_8, f_124);
          ;
          LocalPopChoice(u_34);
        }
      else
        {
          t = t_34;
          {
            ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL,m_124 = NULL,h_8 = NULL;
            m_124 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                k_124 = ATgetArgument(t, 0);
                l_124 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_124);
            j_124 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, k_124, l_124);
            h_8 = t;
            t = SSLsetAnnotations(h_8, j_124);
          }
        }
      t = i_126(t);
      ;
      LocalPopChoice(n_34);
    }
  else
    {
      t = m_34;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(e_13, t);
  return(t);
}
ATerm j_13 (ATerm t)
{
  t = term_t_31;
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL;
      r_126 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          s_126 = ATgetArgument(t, 0);
          {
            ATerm z_34 = t;
            int b_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_126 = NULL;
                t = s_126;
                t = map_1_0(n_13, t);
                v_126 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, v_126);
                ;
                LocalPopChoice(b_35);
              }
            else
              {
                t = z_34;
                {
                  ATerm c_35 = t;
                  int j_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = r_126;
                      t = l_9(s_126, t);
                      ;
                      LocalPopChoice(j_35);
                    }
                  else
                    {
                      t = c_35;
                      {
                        ATerm m_35 = t;
                        int p_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = r_126;
                            t = j_9(s_126, t);
                            ;
                            LocalPopChoice(p_35);
                          }
                        else
                          {
                            t = m_35;
                            t = r_126;
                            t = h_9(s_126, t);
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
              s_126 = ATgetArgument(t, 0);
              t_126 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_126;
          t = z_8(s_126, t_126, t);
        }
      ;
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm w_126 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm q_35 = ATgetArgument(t, 0);
      if(((ATgetType(q_35) != AT_LIST) || !(ATisEmpty(q_35))))
        _fail(t);
      {
        ATerm r_35 = ATgetArgument(t, 1);
        if(((ATgetType(r_35) != AT_LIST) || !(ATisEmpty(r_35))))
          _fail(t);
      }
      w_126 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_126;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    ATerm k_13 (ATerm t)
    {
      t = repeat_1_0(m_13, t);
      t = SRTS_all(k_13, t);
      return(t);
    }
    t = scope_2_0(j_13, k_13, t);
    t = strename_0_0(t);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    t = topdown_1_0(n_98, t);
    return(t);
  }
  t = n_98(t);
  t = SRTS_all(p_13, t);
  return(t);
}
ATerm map_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm w_127 (ATerm t)
  {
    ATerm t_127 = NULL,u_127 = NULL,v_127 = NULL;
    t_127 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_127;
      }
    else
      {
        ATerm d_62 = NULL,l_62 = NULL,m_62 = NULL,b_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_127 = ATgetFirst((ATermList) t);
            v_127 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_127);
        d_62 = t;
        t = u_127;
        t = o_104(t);
        l_62 = t;
        t = v_127;
        t = w_127(t);
        m_62 = t;
        t = (ATerm) ATinsert(CheckATermList(m_62), l_62);
        b_11 = t;
        t = SSLsetAnnotations(b_11, d_62);
      }
    return(t);
  }
  t = w_127(t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm t)
{
  ATerm z_127 = NULL,a_128 = NULL,b_128 = NULL,c_128 = NULL,d_128 = NULL,e_128 = NULL,r_11 = NULL;
  e_128 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_128 = ATgetFirst((ATermList) t);
      b_128 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_128);
  z_127 = t;
  t = a_128;
  t = v_81(t);
  c_128 = t;
  t = b_128;
  t = w_81(t);
  d_128 = t;
  t = (ATerm) ATinsert(CheckATermList(d_128), c_128);
  r_11 = t;
  t = SSLsetAnnotations(r_11, z_127);
  return(t);
}
ATerm j_11 (ATerm g_55, ATerm h_55, ATerm t)
{
  ATerm f_128 = NULL;
  t = SSL_fputc(g_55, h_55);
  f_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_128);
  return(t);
}
ATerm k_11 (ATerm u_58, ATerm v_58, ATerm t)
{
  ATerm g_128 = NULL;
  t = SSL_write_term_to_stream_text(u_58, v_58);
  g_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_128);
  return(t);
}
ATerm m_11 (ATerm n_120 (ATerm), ATerm t_530, ATerm y_58, ATerm t)
{
  ATerm h_128 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_530, term_u_35);
  t = p_11(t);
  h_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_128, y_58);
  t = n_120(t);
  t = fclose_0_0(t);
  t = y_58;
  return(t);
}
ATerm l_11 (ATerm q_58, ATerm r_58, ATerm t)
{
  ATerm i_128 = NULL;
  t = SSL_write_term_to_stream_baf(q_58, r_58);
  i_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_128);
  return(t);
}
ATerm s_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm a_63 = NULL,b_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(match_cons(w_35, sym_Stream_1))
        {
          a_63 = ATgetArgument(w_35, 0);
        }
      else
        _fail(t);
      b_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(a_63, b_63, t);
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,r_63 = NULL,a_64 = NULL,b_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_35 = ATgetArgument(t, 0);
      if(match_cons(y_35, sym_Stream_1))
        {
          a_64 = ATgetArgument(y_35, 0);
        }
      else
        _fail(t);
      b_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(a_64, b_64, t);
  p_63 = t;
  t = term_c_36;
  q_63 = t;
  t = p_63;
  if(match_cons(t, sym_Stream_1))
    {
      r_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_c_36, p_63);
  t = j_11(q_63, r_63, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_128 = NULL,n_128 = NULL,o_128 = NULL,p_128 = NULL,q_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL,v_128 = NULL,w_128 = NULL,y_129 = NULL,z_129 = NULL,d_12 = NULL,b_12 = NULL;
  n_128 = t;
  if(match_cons(t, sym__2))
    {
      u_128 = ATgetArgument(t, 0);
      v_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_128);
  t_128 = t;
  t = u_128;
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((m_128 != NULL) && (m_128 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_128 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(r_13, t);
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = d_36;
        t = term_g_36;
        m_128 = t;
      }
    w_128 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_128, v_128);
    b_12 = t;
    t = SSLsetAnnotations(b_12, t_128);
    t = n_128;
    if(match_cons(t, sym__2))
      {
        p_128 = ATgetArgument(t, 0);
        q_128 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_128);
    o_128 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_128, (ATerm) ATmakeAppl(sym__2, not_null(m_128), q_128));
    d_12 = t;
    t = SSLsetAnnotations(d_12, o_128);
    s_128 = t;
    if(match_cons(t, sym__2))
      {
        y_129 = ATgetArgument(t, 0);
        z_129 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm h_36 = t;
      int i_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,f_12 = NULL;
          t = SSLgetAnnotations(s_128);
          t_62 = t;
          t = y_129;
          t = fetch_1_0(s_13, t);
          w_62 = t;
          t = z_129;
          if(match_cons(t, sym__2))
            {
              y_62 = ATgetArgument(t, 0);
              z_62 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_11(u_13, y_62, z_62, t);
          x_62 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_62, x_62);
          f_12 = t;
          t = SSLsetAnnotations(f_12, t_62);
          ;
          LocalPopChoice(i_36);
        }
      else
        {
          t = h_36;
          {
            ATerm g_63 = NULL,j_63 = NULL,k_63 = NULL,o_63 = NULL,h_12 = NULL;
            t = SSLgetAnnotations(s_128);
            g_63 = t;
            t = z_129;
            if(match_cons(t, sym__2))
              {
                k_63 = ATgetArgument(t, 0);
                o_63 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_11(v_13, k_63, o_63, t);
            j_63 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_129, j_63);
            h_12 = t;
            t = SSLsetAnnotations(h_12, g_63);
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
ATerm apply_strategy_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm c_130 = NULL,d_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL;
  g_130 = t;
  t = dtime_0_0(t);
  t = g_130;
  t = p_123(t);
  f_130 = t;
  t = dtime_0_0(t);
  c_130 = t;
  t = f_130;
  if(match_cons(t, sym__2))
    {
      d_130 = ATgetArgument(t, 0);
      e_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_130), (ATerm) ATmakeAppl(sym_Runtime_1, c_130)), e_130);
  return(t);
}
ATerm w_130 (ATerm p_130, ATerm t)
{
  t = SSL_fclose(p_130);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_130 = NULL,t_130 = NULL;
  t_130 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_130 = ATgetArgument(t, 0);
      {
        ATerm j_36 = t;
        int k_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_130);
            ;
            LocalPopChoice(k_36);
          }
        else
          {
            t = j_36;
            t = w_130(t_130, t);
          }
      }
    }
  else
    {
      t = w_130(t_130, t);
    }
  return(t);
}
ATerm n_11 (ATerm w_58, ATerm t)
{
  t = SSL_read_term_from_stream(w_58);
  return(t);
}
ATerm o_11 (ATerm i_55, ATerm j_55, ATerm t)
{
  ATerm x_130 = NULL;
  t = SSL_fopen(i_55, j_55);
  x_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_130);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_130 = NULL;
  t = SSL_stdin_stream();
  y_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_130);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_130 = NULL;
  t = SSL_stdout_stream();
  z_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_130);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_131 = NULL;
  t = SSL_stderr_stream();
  a_131 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_131);
  return(t);
}
ATerm j_132 (ATerm g_131, ATerm t)
{
  ATerm h_131 = NULL;
  t = SSL_explode_term(g_131);
  if(match_cons(t, sym__2))
    {
      ATerm l_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_36 = ATgetArgument(t, 1);
        if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
          {
            h_131 = ATgetFirst((ATermList) n_36);
            {
              ATerm o_36 = (ATerm) ATgetNext((ATermList) n_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_131;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_131;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_131;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_131;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm k_132 (ATerm k_131, ATerm l_131, ATerm m_131, ATerm t)
{
  ATerm n_131 = NULL,o_131 = NULL,q_131 = NULL,t_131 = NULL,b_13 = NULL;
  t = SSLgetAnnotations(m_131);
  q_131 = t;
  t = k_131;
  if(match_cons(t, sym_Path_1))
    {
      t_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_131, l_131);
  b_13 = t;
  t = SSLsetAnnotations(b_13, q_131);
  if(match_cons(t, sym__2))
    {
      n_131 = ATgetArgument(t, 0);
      o_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(n_131, o_131, t);
  return(t);
}
ATerm l_132 (ATerm v_131, ATerm w_131, ATerm x_131, ATerm t)
{
  ATerm y_131 = NULL,z_131 = NULL,a_132 = NULL,e_132 = NULL,c_13 = NULL;
  t = SSLgetAnnotations(x_131);
  a_132 = t;
  t = SSL_is_string(v_131);
  e_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_132, w_131);
  c_13 = t;
  t = SSLsetAnnotations(c_13, a_132);
  if(match_cons(t, sym__2))
    {
      y_131 = ATgetArgument(t, 0);
      z_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(y_131, z_131, t);
  return(t);
}
ATerm p_11 (ATerm t)
{
  ATerm g_132 = NULL,h_132 = NULL,i_132 = NULL;
  g_132 = t;
  if(match_cons(t, sym__2))
    {
      h_132 = ATgetArgument(t, 0);
      i_132 = ATgetArgument(t, 1);
      {
        ATerm p_36 = t;
        int q_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_132(g_132, t);
            ;
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
                  t = k_132(h_132, i_132, g_132, t);
                  ;
                  LocalPopChoice(u_36);
                }
              else
                {
                  t = r_36;
                  t = l_132(h_132, i_132, g_132, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_132(g_132, t);
    }
  return(t);
}
ATerm z_13 (ATerm t)
{
  t = term_y_36;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_132 = NULL,n_132 = NULL,o_132 = NULL;
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_132 = NULL;
      p_132 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_132, term_b_37);
      t = p_11(t);
      ;
      LocalPopChoice(a_37);
    }
  else
    {
      t = z_36;
      t = debug_1_0(z_13, t);
      _fail(t);
    }
  n_132 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(o_132, t);
  m_132 = t;
  t = n_132;
  t = fclose_0_0(t);
  t = m_132;
  return(t);
}
ATerm fetch_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm p_133 (ATerm t)
  {
    ATerm m_133 = NULL,n_133 = NULL,o_133 = NULL;
    m_133 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_133 = ATgetFirst((ATermList) t);
        o_133 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm c_37 = t;
      int e_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_64 = NULL,z_64 = NULL,f_13 = NULL;
          t = SSLgetAnnotations(m_133);
          s_64 = t;
          t = n_133;
          t = y_104(t);
          z_64 = t;
          t = (ATerm) ATinsert(CheckATermList(o_133), z_64);
          f_13 = t;
          t = SSLsetAnnotations(f_13, s_64);
          ;
          LocalPopChoice(e_37);
        }
      else
        {
          t = c_37;
          {
            ATerm h_65 = NULL,k_65 = NULL,g_13 = NULL;
            t = SSLgetAnnotations(m_133);
            h_65 = t;
            t = o_133;
            t = p_133(t);
            k_65 = t;
            t = (ATerm) ATinsert(CheckATermList(k_65), n_133);
            g_13 = t;
            t = SSLsetAnnotations(g_13, h_65);
          }
        }
    }
    return(t);
  }
  t = p_133(t);
  return(t);
}
ATerm i_11 (ATerm w_52, ATerm x_52, ATerm t)
{
  t = SSL_strcat(w_52, x_52);
  return(t);
}
ATerm debug_1_0 (ATerm l_120 (ATerm), ATerm t)
{
  ATerm s_133 = NULL,t_133 = NULL,u_133 = NULL,v_133 = NULL;
  s_133 = t;
  t = l_120(t);
  t_133 = t;
  t = term_q_17;
  u_133 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, s_133), t_133);
  v_133 = t;
  t = SSL_printnl(u_133, v_133);
  t = s_133;
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm f_37 = t;
  int h_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_37);
    }
  else
    {
      t = f_37;
    }
  return(t);
}
ATerm g_14 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_134 = NULL;
      c_134 = t;
      t = SSL_is_string(c_134);
      ;
      LocalPopChoice(k_37);
    }
  else
    {
      t = j_37;
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(a_14, t);
            ;
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            {
              ATerm j_134 = NULL,k_134 = NULL,l_134 = NULL;
              j_134 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_134 = ATgetArgument(t, 0);
                  t = k_134;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_134 = ATgetArgument(t, 0);
                      t = k_134;
                      {
                        ATerm n_37 = t;
                        int o_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(o_37);
                          }
                        else
                          {
                            t = n_37;
                            t = debug_1_0(g_14, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm q_134 = NULL,r_134 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_134 = ATgetArgument(t, 0);
                          l_134 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_134;
                      t = eval_config_0_0(t);
                      q_134 = t;
                      t = l_134;
                      t = eval_config_0_0(t);
                      r_134 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_134, r_134);
                      t = i_11(q_134, r_134, t);
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
  ATerm v_134 = NULL,w_134 = NULL;
  v_134 = t;
  t = term_p_37;
  w_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_37, v_134);
  t = s_11(w_134, v_134, t);
  {
    ATerm q_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_134 = NULL,y_134 = NULL;
        t = eval_config_0_0(t);
        x_134 = t;
        t = term_p_37;
        y_134 = t;
        t = SSL_table_put(y_134, v_134, x_134);
        t = x_134;
        ;
        LocalPopChoice(r_37);
      }
    else
      {
        t = q_37;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_121 (ATerm), ATerm t)
{
  ATerm c_135 = NULL;
  c_135 = t;
  {
    ATerm s_37 = t;
    int v_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_135 = NULL;
        t = term_a_38;
        t = get_config_0_0(t);
        e_135 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_135, term_c_38);
        t = geq_0_0(t);
        t = c_135;
        t = y_121(t);
        ;
        LocalPopChoice(v_37);
      }
    else
      {
        t = s_37;
        t = c_135;
      }
  }
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm h_135 = NULL;
  h_135 = t;
  if(match_string(t, "-k"))
    {
      t = h_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_135;
    }
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm i_135 = NULL,j_135 = NULL,l_135 = NULL;
  i_135 = t;
  t = SSL_string_to_int(i_135);
  j_135 = t;
  t = term_d_38;
  l_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_38, j_135);
  t = v_11(l_135, j_135, t);
  t = i_135;
  return(t);
}
ATerm j_14 (ATerm t)
{
  t = term_e_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_14, i_14, j_14, t);
  return(t);
}
ATerm k_14 (ATerm t)
{
  ATerm n_135 = NULL;
  n_135 = t;
  if(match_string(t, "-S"))
    {
      t = n_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_135;
    }
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm o_135 = NULL,p_135 = NULL;
  t = term_a_38;
  o_135 = t;
  t = term_k_29;
  p_135 = t;
  t = term_h_38;
  t = v_11(o_135, p_135, t);
  t = term_i_38;
  return(t);
}
ATerm m_14 (ATerm t)
{
  t = term_j_38;
  return(t);
}
ATerm n_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm q_135 = NULL,r_135 = NULL,s_135 = NULL;
  q_135 = t;
  t = SSL_string_to_int(q_135);
  r_135 = t;
  t = term_a_38;
  s_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_38, r_135);
  t = v_11(s_135, r_135, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_135);
  return(t);
}
ATerm p_14 (ATerm t)
{
  t = term_k_38;
  return(t);
}
ATerm q_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm t_135 = NULL,u_135 = NULL;
  t = term_l_38;
  t_135 = t;
  t = term_p_17;
  u_135 = t;
  t = term_m_38;
  t = v_11(t_135, u_135, t);
  t = term_n_38;
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = term_q_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_14, l_14, m_14, t);
      ;
      LocalPopChoice(v_38);
    }
  else
    {
      t = u_38;
      {
        ATerm c_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(n_14, o_14, p_14, t);
            ;
            LocalPopChoice(d_39);
          }
        else
          {
            t = c_39;
            t = Option_3_0(q_14, r_14, s_14, t);
          }
      }
    }
  return(t);
}
ATerm v_11 (ATerm x_59, ATerm y_59, ATerm t)
{
  ATerm v_135 = NULL;
  t = term_p_37;
  v_135 = t;
  t = SSL_table_put(v_135, x_59, y_59);
  t = (ATerm) ATmakeAppl(sym__3, term_p_37, x_59, y_59);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm z_135 = NULL,a_136 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_136 = NULL,c_136 = NULL,d_136 = NULL;
      t = term_p_17;
      t = i_0(t);
      b_136 = t;
      t = term_g_39;
      c_136 = t;
      t = term_h_39;
      d_136 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_39, term_h_39, b_136);
      t = t_11(c_136, d_136, b_136, t);
      _fail(t);
    }
  else
    {
      ATerm g_136 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_135 = ATgetFirst((ATermList) t);
          a_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_135;
      t = d_0(t);
      t = term_p_17;
      t = g_0(t);
      g_136 = t;
      t = (ATerm) ATinsert(CheckATermList(a_136), g_136);
    }
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm i_136 = NULL;
  i_136 = t;
  if(match_string(t, "-o"))
    {
      t = i_136;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = i_136;
    }
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm j_136 = NULL,k_136 = NULL;
  j_136 = t;
  t = term_i_39;
  k_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_39, j_136);
  t = v_11(k_136, j_136, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, j_136);
  return(t);
}
ATerm a_15 (ATerm t)
{
  t = term_l_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_14, z_14, a_15, t);
  return(t);
}
ATerm t_11 (ATerm m_44, ATerm n_44, ATerm l_44, ATerm t)
{
  ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
  m_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_44, n_44);
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_39 = ATgetArgument(t, 0);
            ATerm r_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_44, n_44);
        t = s_11(m_44, n_44, t);
        ;
        LocalPopChoice(o_39);
      }
    else
      {
        t = n_39;
        t = (ATerm) ATempty;
      }
    n_136 = t;
    t = (ATerm) ATinsert(CheckATermList(n_136), l_44);
    o_136 = t;
    t = SSL_table_put(m_44, n_44, o_136);
    t = m_136;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_136 = NULL,w_136 = NULL,x_136 = NULL,y_136 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_136 = NULL,a_137 = NULL,b_137 = NULL;
      t = term_p_17;
      t = n_0(t);
      z_136 = t;
      t = term_g_39;
      a_137 = t;
      t = term_h_39;
      b_137 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_39, term_h_39, z_136);
      t = t_11(a_137, b_137, z_136, t);
      _fail(t);
    }
  else
    {
      ATerm f_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_136 = ATgetFirst((ATermList) t);
          w_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_136;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_136 = ATgetFirst((ATermList) t);
          y_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_136;
      t = l_0(t);
      t = x_136;
      t = m_0(t);
      f_137 = t;
      t = (ATerm) ATinsert(CheckATermList(y_136), f_137);
    }
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm h_137 = NULL;
  h_137 = t;
  if(match_string(t, "-i"))
    {
      t = h_137;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_137;
    }
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm i_137 = NULL,j_137 = NULL;
  i_137 = t;
  t = term_s_39;
  j_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_39, i_137);
  t = v_11(j_137, i_137, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_137);
  return(t);
}
ATerm d_15 (ATerm t)
{
  t = term_t_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_15, c_15, d_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_137 = NULL,l_137 = NULL,m_137 = NULL,n_137 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_17;
  t = whoami_0_0(t);
  k_137 = t;
  t = term_q_17;
  m_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_39), k_137);
  n_137 = t;
  t = SSL_printnl(m_137, n_137);
  t = term_v_17;
  l_137 = t;
  t = SSL_exit(l_137);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_v_39;
  t = get_config_0_0(t);
  return(t);
}
ATerm q_11 (ATerm q_42, ATerm r_42, ATerm t)
{
  ATerm w_39 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_42, r_42);
      ;
      LocalPopChoice(b_40);
    }
  else
    {
      t = w_39;
      t = SSL_addr(q_42, r_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm p_109 (ATerm), ATerm q_109 (ATerm), ATerm t)
{
  ATerm p_137 = NULL,q_137 = NULL,r_137 = NULL;
  p_137 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_137;
      t = p_109(t);
    }
  else
    {
      ATerm u_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_137 = ATgetFirst((ATermList) t);
          r_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_137;
      t = foldr_2_0(p_109, q_109, t);
      u_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_137, u_137);
      t = q_109(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_15 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL;
  if(match_cons(t, sym__2))
    {
      h_66 = ATgetArgument(t, 0);
      i_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(h_66, i_66, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_137 = NULL,d_66 = NULL,e_66 = NULL;
  t = times_0_0(t);
  e_66 = t;
  t = SSL_explode_term(e_66);
  if(match_cons(t, sym__2))
    {
      ATerm c_40 = ATgetArgument(t, 0);
      d_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_66;
  t = foldr_2_0(e_15, f_15, t);
  x_137 = t;
  t = SSL_TicksToSeconds(x_137);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_138 = NULL,j_138 = NULL,k_138 = NULL;
  i_138 = t;
  if(match_cons(t, sym__2))
    {
      j_138 = ATgetArgument(t, 0);
      k_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_138;
        if((j_138 != t))
          {
            _fail(t);
          }
        t = i_138;
        ;
        LocalPopChoice(f_40);
      }
    else
      {
        t = e_40;
        t = (ATerm) ATmakeAppl(sym__2, j_138, k_138);
        {
          ATerm g_40 = t;
          int h_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_138, k_138);
              ;
              LocalPopChoice(h_40);
            }
          else
            {
              t = g_40;
              t = SSL_gtr(j_138, k_138);
            }
          t = (ATerm) ATmakeAppl(sym__2, j_138, k_138);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_121 (ATerm), ATerm t)
{
  ATerm o_138 = NULL;
  o_138 = t;
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_138 = NULL;
        t = term_a_38;
        t = get_config_0_0(t);
        q_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_138, term_v_17);
        t = geq_0_0(t);
        t = o_138;
        t = x_121(t);
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        t = o_138;
      }
  }
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm s_138 = NULL,t_138 = NULL,v_138 = NULL,w_138 = NULL;
  t = run_time_0_0(t);
  s_138 = t;
  t = term_p_17;
  t = whoami_0_0(t);
  t_138 = t;
  t = term_q_17;
  v_138 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_40), s_138), term_l_40), t_138);
  w_138 = t;
  t = SSL_printnl(v_138, w_138);
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_40), s_138), term_l_40), t_138));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_138 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_29;
  x_138 = t;
  t = SSL_exit(x_138);
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm f_139 = NULL,g_139 = NULL;
  g_139 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = g_139;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          f_139 = ATgetArgument(t, 0);
          {
            ATerm x_66 = NULL,l_13 = NULL;
            t = SSLgetAnnotations(g_139);
            x_66 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, f_139);
            l_13 = t;
            t = SSLsetAnnotations(l_13, x_66);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = g_139;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_124 (ATerm), ATerm t)
{
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      t = fetch_1_0(i_15, t);
    }
  t = n_124(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm j_139 = NULL,k_139 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_139 = ATgetFirst((ATermList) t);
      k_139 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_139 = NULL,p_139 = NULL;
        ATerm j_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_139)), not_null(p_139));
          return(t);
        }
        t = k_139;
        t = k_0(t);
        if(((o_139 != NULL) && (o_139 != t)))
          _fail(t);
        else
          o_139 = t;
        t = j_139;
        t = j_0(t);
        if(((p_139 != NULL) && (p_139 != t)))
          _fail(t);
        else
          p_139 = t;
        t = k_139;
        t = reverse_acc_2_0(j_0, j_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_17;
      t = k_0(t);
    }
  return(t);
}
ATerm s_11 (ATerm d_46, ATerm e_46, ATerm t)
{
  t = SSL_table_get(d_46, e_46);
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm t_139 = NULL,u_139 = NULL,v_139 = NULL,o_13 = NULL;
  v_139 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_139);
  t_139 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_139);
  o_13 = t;
  t = SSLsetAnnotations(o_13, t_139);
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm x_139 = NULL;
  x_139 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_139), term_q_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_139 = NULL,s_139 = NULL;
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_40);
    }
  else
    {
      t = r_40;
      t = fetch_1_0(l_15, t);
    }
  t = term_u_40;
  t = echo_0_0(t);
  t = term_g_39;
  r_139 = t;
  t = term_h_39;
  s_139 = t;
  t = term_v_40;
  t = s_11(r_139, s_139, t);
  t = reverse_acc_2_0(_id, m_15, t);
  t = map_1_0(n_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_139 = NULL,a_140 = NULL,b_140 = NULL;
  z_139 = t;
  {
    ATerm y_40 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_139;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_41 = ATgetFirst((ATermList) t);
                ATerm g_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_139;
          }
        ;
        LocalPopChoice(b_41);
      }
    else
      {
        t = y_40;
        t = (ATerm) ATinsert(ATempty, z_139);
      }
    a_140 = t;
    t = term_g_36;
    b_140 = t;
    t = SSL_printnl(b_140, a_140);
    t = z_139;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_v_39;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm o_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm f_140 = NULL,g_140 = NULL;
  t = term_h_41;
  f_140 = t;
  t = term_p_17;
  g_140 = t;
  t = term_i_41;
  t = v_11(f_140, g_140, t);
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = term_j_41;
  return(t);
}
ATerm s_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL,k_140 = NULL;
  t = term_h_41;
  j_140 = t;
  t = term_p_17;
  k_140 = t;
  t = term_i_41;
  t = v_11(j_140, k_140, t);
  t = term_k_41;
  h_140 = t;
  t = term_p_17;
  i_140 = t;
  t = term_l_41;
  t = v_11(h_140, i_140, t);
  t = term_m_41;
  return(t);
}
ATerm d_16 (ATerm t)
{
  t = term_n_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_15, p_15, r_15, t);
      ;
      LocalPopChoice(p_41);
    }
  else
    {
      t = o_41;
      t = Option_3_0(s_15, c_16, d_16, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_126 (ATerm), ATerm t)
{
  ATerm p_140 = NULL,q_140 = NULL,r_140 = NULL,s_140 = NULL,u_140 = NULL,v_140 = NULL,q_13 = NULL;
  p_140 = t;
  {
    ATerm q_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_41;
        t = q_126(t);
        ;
        LocalPopChoice(s_41);
      }
    else
      {
        t = q_41;
      }
    t = p_140;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_140 = ATgetFirst((ATermList) t);
        s_140 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_140);
    q_140 = t;
    t = term_v_39;
    v_140 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_v_39, r_140);
    t = v_11(v_140, r_140, t);
    t = s_140;
    {
      ATerm f_141 (ATerm t)
      {
        ATerm u_41 = t;
        int v_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_42 = t;
            int b_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_140 = NULL;
                y_140 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = y_140;
                ;
                LocalPopChoice(b_42);
              }
            else
              {
                t = a_42;
                t = q_126(t);
                t = Cons_2_0(_id, f_141, t);
              }
            ;
            LocalPopChoice(v_41);
          }
        else
          {
            t = u_41;
            {
              ATerm b_141 = NULL,c_141 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_141 = ATgetFirst((ATermList) t);
                  c_141 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_141), (ATerm) ATmakeAppl(sym_Undefined_1, b_141));
            }
          }
        return(t);
      }
      t = f_141(t);
      u_140 = t;
      t = (ATerm) ATinsert(CheckATermList(u_140), (ATerm) ATmakeAppl(sym_Program_1, r_140));
      q_13 = t;
      t = SSLsetAnnotations(q_13, q_140);
    }
  }
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm r_141 = NULL;
  r_141 = t;
  if(match_string(t, "--help"))
    {
      t = r_141;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_141;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_141;
        }
    }
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm s_141 = NULL,t_141 = NULL;
  t = term_p_40;
  s_141 = t;
  t = term_p_17;
  t_141 = t;
  t = term_c_42;
  t = v_11(s_141, t_141, t);
  t = term_d_42;
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = term_e_42;
  return(t);
}
ATerm i_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_126 (ATerm), ATerm t)
{
  ATerm k_141 = NULL,l_141 = NULL,m_141 = NULL,n_141 = NULL,o_141 = NULL,p_141 = NULL,q_141 = NULL;
  m_141 = t;
  t = term_g_39;
  o_141 = t;
  t = term_h_39;
  p_141 = t;
  t = (ATerm) ATempty;
  q_141 = t;
  t = SSL_table_put(o_141, p_141, q_141);
  t = m_141;
  {
    ATerm e_16 (ATerm t)
    {
      ATerm f_42 = t;
      int g_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_126(t);
          ;
          LocalPopChoice(g_42);
        }
      else
        {
          t = f_42;
          {
            ATerm h_42 = t;
            int i_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_16, g_16, h_16, t);
                ;
                LocalPopChoice(i_42);
              }
            else
              {
                t = h_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_16, t);
    {
      ATerm m_42 = t;
      int o_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_142 = NULL;
          a_142 = t;
          {
            ATerm p_42 = t;
            int u_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_67 = NULL;
                t = a_142;
                {
                  ATerm w_42 = t;
                  int x_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_40;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(x_42);
                    }
                  else
                    {
                      t = w_42;
                      t = fetch_1_0(i_16, t);
                    }
                  t = a_142;
                  t = default_system_usage_0_0(t);
                  t = term_k_29;
                  g_67 = t;
                  t = SSL_exit(g_67);
                }
                ;
                LocalPopChoice(u_42);
              }
            else
              {
                t = p_42;
                {
                  ATerm k_67 = NULL;
                  t = term_h_41;
                  t = get_config_0_0(t);
                  t = a_142;
                  t = default_system_about_0_0(t);
                  t = term_k_29;
                  k_67 = t;
                  t = SSL_exit(k_67);
                }
              }
          }
          ;
          LocalPopChoice(o_42);
        }
      else
        {
          t = m_42;
          {
            ATerm y_42 = t;
            int g_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_142 = NULL,c_142 = NULL,d_142 = NULL;
                ATerm n_16 (ATerm t)
                {
                  ATerm e_142 = NULL,f_142 = NULL,g_142 = NULL,t_13 = NULL;
                  g_142 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      f_142 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(g_142);
                  e_142 = t;
                  t = f_142;
                  if(((k_141 != NULL) && (k_141 != t)))
                    _fail(t);
                  else
                    k_141 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, f_142);
                  t_13 = t;
                  t = SSLsetAnnotations(t_13, e_142);
                  return(t);
                }
                t = fetch_1_0(n_16, t);
                t = term_q_17;
                c_142 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_141)), term_h_43);
                d_142 = t;
                t = SSL_printnl(c_142, d_142);
                t = (ATerm) ATmakeAppl(sym__2, term_q_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_141)), term_h_43));
                t = default_system_usage_0_0(t);
                t = term_v_17;
                b_142 = t;
                t = SSL_exit(b_142);
                ;
                LocalPopChoice(g_43);
              }
            else
              {
                t = y_42;
              }
          }
        }
      l_141 = t;
      t = term_g_39;
      n_141 = t;
      t = SSL_table_destroy(n_141);
      t = l_141;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t)
{
  ATerm l_142 = NULL,m_142 = NULL,n_142 = NULL,o_142 = NULL;
  t = parse_options_1_0(p_124, t);
  l_142 = t;
  t = term_k_43;
  o_142 = t;
  t = SSL_table_create(o_142);
  t = term_k_43;
  m_142 = t;
  t = term_l_43;
  n_142 = t;
  t = SSL_table_put(m_142, n_142, l_142);
  t = l_142;
  t = r_124(t);
  {
    ATerm m_43 = t;
    int n_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_124, t);
        ;
        LocalPopChoice(n_43);
      }
    else
      {
        t = m_43;
        {
          ATerm o_43 = t;
          int w_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_124(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(w_43);
            }
          else
            {
              t = o_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_16 (ATerm t)
{
  t = if_verbose2_1_0(e_17, t);
  return(t);
}
ATerm z_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_17 (ATerm t)
{
  ATerm p_142 = NULL,q_142 = NULL;
  t = term_x_43;
  p_142 = t;
  t = term_p_17;
  q_142 = t;
  t = term_y_43;
  t = v_11(p_142, q_142, t);
  t = term_z_43;
  return(t);
}
ATerm b_17 (ATerm t)
{
  t = term_a_44;
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm r_142 = NULL,s_142 = NULL,t_142 = NULL,u_142 = NULL;
  r_142 = t;
  t = term_v_39;
  t = get_config_0_0(t);
  s_142 = t;
  t = term_q_17;
  t_142 = t;
  t = (ATerm) ATinsert(ATempty, s_142);
  u_142 = t;
  t = SSL_printnl(t_142, u_142);
  t = r_142;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm a_124 (ATerm), ATerm t)
{
  ATerm o_16 (ATerm t)
  {
    ATerm d_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_123(t);
        ;
        LocalPopChoice(g_44);
      }
    else
      {
        t = d_44;
        {
          ATerm h_44 = t;
          int i_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(i_44);
            }
          else
            {
              t = h_44;
              {
                ATerm j_44 = t;
                int p_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(p_44);
                  }
                else
                  {
                    t = j_44;
                    {
                      ATerm q_44 = t;
                      int t_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_16, a_17, b_17, t);
                          ;
                          LocalPopChoice(t_44);
                        }
                      else
                        {
                          t = q_44;
                          {
                            ATerm v_44 = t;
                            int w_44 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(w_44);
                              }
                            else
                              {
                                t = v_44;
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
  ATerm r_16 (ATerm t)
  {
    ATerm v_142 = NULL,w_142 = NULL,x_142 = NULL;
    w_142 = t;
    {
      ATerm z_44 = t;
      int c_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_17 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((v_142 != NULL) && (v_142 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_142 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(g_17, t);
          ;
          LocalPopChoice(c_45);
        }
      else
        {
          t = z_44;
          t = term_e_45;
          v_142 = t;
        }
      t = not_null(v_142);
      t = ReadFromFile_0_0(t);
      x_142 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_142, x_142);
      t = apply_strategy_1_0(y_123, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(o_16, a_124, p_16, r_16, t);
  return(t);
}
ATerm i_17 (ATerm t)
{
  ATerm a_143 = NULL,b_143 = NULL,c_143 = NULL,d_143 = NULL,e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL,i_143 = NULL,j_143 = NULL,k_143 = NULL,l_143 = NULL,f_14 = NULL,e_14 = NULL,d_14 = NULL;
  l_143 = t;
  if(match_cons(t, sym__2))
    {
      b_143 = ATgetArgument(t, 0);
      c_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_143);
  a_143 = t;
  t = c_143;
  if(match_cons(t, sym_Specification_1))
    {
      e_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_143);
  d_143 = t;
  t = e_143;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_143 = ATgetFirst((ATermList) t);
      i_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_143);
  g_143 = t;
  t = i_143;
  t = Cons_2_0(j_17, k_17, t);
  j_143 = t;
  t = (ATerm) ATinsert(CheckATermList(j_143), h_143);
  d_14 = t;
  t = SSLsetAnnotations(d_14, g_143);
  k_143 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_143);
  e_14 = t;
  t = SSLsetAnnotations(e_14, d_143);
  f_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_143, f_143);
  f_14 = t;
  t = SSLsetAnnotations(f_14, a_143);
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm m_143 = NULL,n_143 = NULL,o_143 = NULL,p_143 = NULL,c_14 = NULL;
  p_143 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_143);
  m_143 = t;
  t = n_143;
  t = map_1_0(l_17, t);
  o_143 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_143);
  c_14 = t;
  t = SSLsetAnnotations(c_14, m_143);
  return(t);
}
ATerm k_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm q_143 = NULL,s_143 = NULL,t_143 = NULL,u_143 = NULL,v_143 = NULL,w_143 = NULL,x_143 = NULL,b_14 = NULL;
  x_143 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_143 = ATgetArgument(t, 0);
      t_143 = ATgetArgument(t, 1);
      u_143 = ATgetArgument(t, 2);
      v_143 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_143);
  q_143 = t;
  t = v_143;
  t = topdown_1_0(m_17, t);
  t = match_to_dfa_0_0(t);
  w_143 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, s_143, t_143, u_143, w_143);
  b_14 = t;
  t = SSLsetAnnotations(b_14, q_143);
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm y_143 = NULL;
  y_143 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm f_45 = t;
      int l_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_143 = NULL;
          t = y_143;
          t = new_0_0(t);
          z_143 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_143), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_143)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_143))));
          ;
          LocalPopChoice(l_45);
        }
      else
        {
          t = f_45;
          t = y_143;
        }
    }
  else
    {
      t = y_143;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(i_17, _fail, default_usage_0_0, t);
  return(t);
}
