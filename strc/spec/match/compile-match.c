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
ATerm term_h_45;
ATerm term_g_44;
ATerm term_c_44;
ATerm term_a_44;
ATerm term_z_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_u_41;
ATerm term_o_41;
ATerm term_n_41;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_z_40;
ATerm term_x_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_o_40;
ATerm term_n_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_m_39;
ATerm term_v_38;
ATerm term_t_38;
ATerm term_o_38;
ATerm term_m_38;
ATerm term_l_38;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_q_37;
ATerm term_j_37;
ATerm term_d_37;
ATerm term_a_37;
ATerm term_f_36;
ATerm term_z_35;
ATerm term_p_35;
ATerm term_h_34;
ATerm term_v_31;
ATerm term_s_31;
ATerm term_u_29;
ATerm term_p_29;
ATerm term_m_29;
ATerm term_c_29;
ATerm term_o_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_r_23;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
void init_constant_terms (void)
{
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym_Sort_2, term_e_24, (ATerm) ATempty);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_ConstType_1, term_f_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_37));
  term_j_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym__2, term_c_38, term_m_29);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_29);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym__2, term_m_38, term_o_17);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym__2, term_m_39, term_n_39);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym__2, term_i_41, term_o_17);
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(sym__2, term_l_41, term_o_17);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym__2, term_s_40, term_o_17);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(sym__2, term_z_43, term_o_17);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym_stdin_0);
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
ATerm spaste_1_0 (ATerm q_97 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm i_8 (ATerm s_30, ATerm r_30, ATerm);
ATerm SVar_1_0 (ATerm l_86 (ATerm), ATerm);
ATerm j_8 (ATerm b_112 (ATerm), ATerm c_112 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_47, ATerm z_46, ATerm y_46, ATerm);
ATerm e_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm k_8 (ATerm v_111 (ATerm), ATerm w_111 (ATerm (ATerm), ATerm), ATerm s_46, ATerm v_46, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm j_112 (ATerm), ATerm);
ATerm rename_4_0 (ATerm q_111 (ATerm (ATerm), ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t_111 (ATerm (ATerm), ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm v_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm tpaste_1_0 (ATerm m_97 (ATerm), ATerm);
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
ATerm o_9 (ATerm x_72, ATerm w_72, ATerm);
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
ATerm oncetd_1_0 (ATerm q_99 (ATerm), ATerm);
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
ATerm p_8 (ATerm t_106 (ATerm), ATerm a_39, ATerm z_38, ATerm);
ATerm tvars_matrix_boundin_3_0 (ATerm p_127 (ATerm), ATerm q_127 (ATerm), ATerm r_127 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
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
ATerm v_8 (ATerm v_106 (ATerm), ATerm c_39, ATerm b_39, ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm x_8 (ATerm p_654, ATerm u_654, ATerm y_65, ATerm);
ATerm while_not_2_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm);
ATerm for_3_0 (ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm r_90 (ATerm f_89, ATerm g_89, ATerm h_89, ATerm);
ATerm f_6 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm free_vars_3_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
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
ATerm a_9 (ATerm a_111 (ATerm), ATerm f_44, ATerm d_44, ATerm);
ATerm w_8 (ATerm);
ATerm default_state_0_0 (ATerm);
ATerm y_8 (ATerm);
ATerm b_9 (ATerm);
ATerm f_9 (ATerm);
ATerm h_9 (ATerm);
ATerm MatchCons_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm);
ATerm c_9 (ATerm a_127 (ATerm), ATerm g_75, ATerm d_75, ATerm e_75, ATerm f_75, ATerm);
ATerm d_9 (ATerm z_74, ATerm a_75, ATerm b_75, ATerm);
ATerm filter_1_0 (ATerm e_111 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm w_105 (ATerm), ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm u_9 (ATerm);
ATerm v_9 (ATerm);
ATerm ConsArgs_0_0 (ATerm);
ATerm w_9 (ATerm);
ATerm outedges_0_0 (ATerm);
ATerm c_105 (ATerm u_102, ATerm);
ATerm get_path_0_0 (ATerm);
ATerm a_10 (ATerm);
ATerm i_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm g_9 (ATerm m_76, ATerm);
ATerm p_10 (ATerm);
ATerm s_10 (ATerm);
ATerm i_9 (ATerm c_76, ATerm);
ATerm t_10 (ATerm);
ATerm k_9 (ATerm a_76, ATerm);
ATerm repeat_1_0 (ATerm p_115 (ATerm), ATerm);
ATerm m_9 (ATerm s_44, ATerm t_44, ATerm);
ATerm end_scope_1_0 (ATerm x_110 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm w_110 (ATerm), ATerm);
ATerm scope_2_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm d_105 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm w_112 (ATerm o_112, ATerm);
ATerm conc_0_0 (ATerm);
ATerm j_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm n_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm MatrixMerge_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm n_98 (ATerm), ATerm);
ATerm k_10 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm i_39, ATerm h_39, ATerm);
ATerm l_10 (ATerm a_107 (ATerm), ATerm e_39, ATerm d_39, ATerm);
ATerm foldr_3_0 (ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm);
ATerm y_11 (ATerm);
ATerm collect_om_2_0 (ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm);
ATerm CollectSubst_0_0 (ATerm);
ATerm IgnoreVar_0_0 (ATerm);
ATerm b_12 (ATerm);
ATerm c_12 (ATerm);
ATerm d_12 (ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm CollectSplit_2_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm);
ATerm collect_split_2_0 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm);
ATerm k_12 (ATerm);
ATerm n_12 (ATerm);
ATerm o_12 (ATerm);
ATerm nzip0_1_0 (ATerm j_103 (ATerm), ATerm);
ATerm Propagate_0_0 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm term_to_matrix_0_0 (ATerm);
ATerm g_13 (ATerm);
ATerm i_13 (ATerm);
ATerm match_to_matrix_0_0 (ATerm);
ATerm j_13 (ATerm);
ATerm l_13 (ATerm);
ATerm n_13 (ATerm);
ATerm match_to_dfa_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm topdown_1_0 (ATerm m_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_104 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm);
ATerm w_10 (ATerm g_55, ATerm h_55, ATerm);
ATerm x_10 (ATerm u_58, ATerm v_58, ATerm);
ATerm z_10 (ATerm m_120 (ATerm), ATerm r_527, ATerm y_58, ATerm);
ATerm y_10 (ATerm q_58, ATerm r_58, ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm z_13 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm o_123 (ATerm), ATerm);
ATerm v_130 (ATerm o_130, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm a_11 (ATerm w_58, ATerm);
ATerm b_11 (ATerm i_55, ATerm j_55, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm i_132 (ATerm f_131, ATerm);
ATerm j_132 (ATerm j_131, ATerm k_131, ATerm l_131, ATerm);
ATerm k_132 (ATerm u_131, ATerm v_131, ATerm w_131, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm a_14 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm x_104 (ATerm), ATerm);
ATerm v_10 (ATerm w_52, ATerm x_52, ATerm);
ATerm debug_1_0 (ATerm k_120 (ATerm), ATerm);
ATerm b_14 (ATerm);
ATerm c_14 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm x_121 (ATerm), ATerm);
ATerm d_14 (ATerm);
ATerm g_14 (ATerm);
ATerm i_14 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_14 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_11 (ATerm x_59, ATerm y_59, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm u_14 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_11 (ATerm n_44, ATerm o_44, ATerm m_44, ATerm);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm a_15 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm c_11 (ATerm r_42, ATerm s_42, ATerm);
ATerm foldr_2_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm d_15 (ATerm);
ATerm f_15 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_121 (ATerm), ATerm);
ATerm g_15 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_15 (ATerm);
ATerm need_help_1_0 (ATerm m_124 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm e_11 (ATerm e_46, ATerm f_46, ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm s_15 (ATerm);
ATerm z_15 (ATerm);
ATerm a_16 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_126 (ATerm), ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm g_16 (ATerm);
ATerm h_16 (ATerm);
ATerm parse_options_1_0 (ATerm o_126 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm);
ATerm o_16 (ATerm);
ATerm v_16 (ATerm);
ATerm y_16 (ATerm);
ATerm a_17 (ATerm);
ATerm d_17 (ATerm);
ATerm iowrap_3_0 (ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
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
  t = term_o_17;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_p_17;
  q_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_17), f_0), term_s_17);
  u_0 = t;
  t = SSL_printnl(q_0, u_0);
  t = term_u_17;
  o_0 = t;
  t = SSL_exit(o_0);
  t = e_0;
  return(t);
}
ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      if(((ATgetType(v_17) != AT_LIST) || !(ATisEmpty(v_17))))
        _fail(t);
      {
        ATerm x_17 = ATgetArgument(t, 1);
        if(((ATgetType(x_17) != AT_LIST) || !(ATisEmpty(x_17))))
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
      ATerm z_17 = ATgetArgument(t, 0);
      if(((ATgetType(z_17) == AT_LIST) && !(ATisEmpty(z_17))))
        {
          b_1 = ATgetFirst((ATermList) z_17);
          c_1 = (ATerm) ATgetNext((ATermList) z_17);
        }
      else
        _fail(t);
      {
        ATerm a_18 = ATgetArgument(t, 1);
        if(((ATgetType(a_18) == AT_LIST) && !(ATisEmpty(a_18))))
          {
            d_1 = ATgetFirst((ATermList) a_18);
            e_1 = (ATerm) ATgetNext((ATermList) a_18);
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
    ATerm d_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm g_18 = ATgetArgument(t, 0);
            k_1 = ATgetArgument(t, 1);
            l_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(f_18);
        t = (ATerm) ATmakeAppl(sym_SDef_3, n_1, k_1, l_1);
      }
    else
      {
        t = d_18;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm h_18 = ATgetArgument(t, 0);
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
ATerm a_1 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,b_5 = NULL,d_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_18 = ATgetArgument(t, 0);
      if(((ATgetType(k_18) == AT_LIST) && !(ATisEmpty(k_18))))
        {
          v_4 = ATgetFirst((ATermList) k_18);
          w_4 = (ATerm) ATgetNext((ATermList) k_18);
        }
      else
        _fail(t);
      {
        ATerm l_18 = ATgetArgument(t, 1);
        if(((ATgetType(l_18) == AT_LIST) && !(ATisEmpty(l_18))))
          {
            b_5 = ATgetFirst((ATermList) l_18);
            d_5 = (ATerm) ATgetNext((ATermList) l_18);
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
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_5);
      }
    else
      {
        t = m_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_18 = ATgetArgument(t, 0);
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
      ATerm q_18 = ATgetArgument(t, 0);
      if(((ATgetType(q_18) != AT_LIST) || !(ATisEmpty(q_18))))
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(((ATgetType(r_18) != AT_LIST) || !(ATisEmpty(r_18))))
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
      ATerm s_18 = ATgetArgument(t, 0);
      if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
        {
          l_7 = ATgetFirst((ATermList) s_18);
          o_7 = (ATerm) ATgetNext((ATermList) s_18);
        }
      else
        _fail(t);
      {
        ATerm t_18 = ATgetArgument(t, 1);
        if(((ATgetType(t_18) == AT_LIST) && !(ATisEmpty(t_18))))
          {
            s_7 = ATgetFirst((ATermList) t_18);
            t_7 = (ATerm) ATgetNext((ATermList) t_18);
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
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_18);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_8);
      }
    else
      {
        t = u_18;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_18 = ATgetArgument(t, 0);
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
      ATerm y_18 = ATgetArgument(t, 0);
      if(((ATgetType(y_18) != AT_LIST) || !(ATisEmpty(y_18))))
        _fail(t);
      {
        ATerm z_18 = ATgetArgument(t, 1);
        if(((ATgetType(z_18) != AT_LIST) || !(ATisEmpty(z_18))))
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
      ATerm a_19 = ATgetArgument(t, 0);
      if(((ATgetType(a_19) == AT_LIST) && !(ATisEmpty(a_19))))
        {
          b_10 = ATgetFirst((ATermList) a_19);
          c_10 = (ATerm) ATgetNext((ATermList) a_19);
        }
      else
        _fail(t);
      {
        ATerm g_19 = ATgetArgument(t, 1);
        if(((ATgetType(g_19) == AT_LIST) && !(ATisEmpty(g_19))))
          {
            e_10 = ATgetFirst((ATermList) g_19);
            f_10 = (ATerm) ATgetNext((ATermList) g_19);
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
  ATerm j_10 = NULL,q_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      j_10 = ATgetArgument(t, 0);
      r_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_19);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_10);
      }
    else
      {
        t = h_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_19 = ATgetArgument(t, 0);
            q_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_10, q_10);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm q_97 (ATerm), ATerm t)
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
        t = q_97(t);
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
            t = q_97(t);
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
                t = q_97(t);
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
                    t = q_97(t);
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
                  ATerm u_11 = NULL,a_12 = NULL,z_1 = NULL;
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
                  t = q_97(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_12 = ATgetFirst((ATermList) t);
                      {
                        ATerm n_19 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, a_12, e_9);
                  z_1 = t;
                  t = SSLsetAnnotations(z_1, u_11);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL;
  x_14 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
      {
        ATerm i_12 = NULL,t_12 = NULL,u_12 = NULL,h_2 = NULL;
        t = SSLgetAnnotations(x_14);
        i_12 = t;
        t = y_14;
        t = r_97(t);
        t_12 = t;
        t = z_14;
        t = r_97(t);
        u_12 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_12, u_12);
        h_2 = t;
        t = SSLsetAnnotations(h_2, i_12);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_14 = ATgetArgument(t, 0);
          z_14 = ATgetArgument(t, 1);
          v_14 = ATgetArgument(t, 2);
          {
            ATerm m_13 = NULL,e_14 = NULL,f_14 = NULL,h_14 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(x_14);
            m_13 = t;
            t = y_14;
            t = t_97(t);
            e_14 = t;
            t = z_14;
            t = t_97(t);
            f_14 = t;
            t = v_14;
            t = r_97(t);
            h_14 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, e_14, f_14, h_14);
            i_2 = t;
            t = SSLsetAnnotations(i_2, m_13);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              y_14 = ATgetArgument(t, 0);
              z_14 = ATgetArgument(t, 1);
              v_14 = ATgetArgument(t, 2);
              w_14 = ATgetArgument(t, 3);
              {
                ATerm e_15 = NULL,o_15 = NULL,r_15 = NULL,t_15 = NULL,x_15 = NULL,j_2 = NULL;
                t = SSLgetAnnotations(x_14);
                e_15 = t;
                t = y_14;
                t = t_97(t);
                o_15 = t;
                t = z_14;
                t = t_97(t);
                r_15 = t;
                t = v_14;
                t = t_97(t);
                t_15 = t;
                t = w_14;
                t = r_97(t);
                x_15 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, o_15, r_15, t_15, x_15);
                j_2 = t;
                t = SSLsetAnnotations(j_2, e_15);
              }
            }
          else
            {
              ATerm u_16 = NULL,b_17 = NULL,c_17 = NULL,l_2 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  y_14 = ATgetArgument(t, 0);
                  z_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_14);
              u_16 = t;
              t = y_14;
              t = t_97(t);
              b_17 = t;
              t = z_14;
              t = r_97(t);
              c_17 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, b_17, c_17);
              l_2 = t;
              t = SSLsetAnnotations(l_2, u_16);
            }
        }
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm i_15 = NULL;
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_15 = ATgetArgument(t, 0);
          {
            ATerm q_19 = ATgetArgument(t, 1);
          }
          {
            ATerm r_19 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_19);
      t = i_15;
    }
  else
    {
      t = o_19;
      if(match_cons(t, sym_SDefT_4))
        {
          i_15 = ATgetArgument(t, 0);
          {
            ATerm s_19 = ATgetArgument(t, 1);
          }
          {
            ATerm t_19 = ATgetArgument(t, 2);
          }
          {
            ATerm u_19 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = i_15;
    }
  return(t);
}
ATerm i_8 (ATerm s_30, ATerm r_30, ATerm t)
{
  t = s_30;
  t = map_1_0(b_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm l_86 (ATerm), ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,y_15 = NULL,u_2 = NULL;
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
  t = l_86(t);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, w_15);
  u_2 = t;
  t = SSLsetAnnotations(u_2, u_15);
  return(t);
}
ATerm j_8 (ATerm b_112 (ATerm), ATerm c_112 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_47, ATerm z_46, ATerm y_46, ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm e_16 = NULL;
    e_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_16, y_46);
    t = b_112(t);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm f_16 = NULL;
    f_16 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_16, z_46);
    t = b_112(t);
    return(t);
  }
  t = a_47;
  t = c_112(c_2, d_2, _id, t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_19 = ATgetArgument(t, 0);
      if(((ATgetType(v_19) != AT_LIST) || !(ATisEmpty(v_19))))
        _fail(t);
      {
        ATerm x_19 = ATgetArgument(t, 1);
        if(((ATgetType(x_19) != AT_LIST) || !(ATisEmpty(x_19))))
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
  ATerm q_16 = NULL,r_16 = NULL,t_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
        {
          q_16 = ATgetFirst((ATermList) y_19);
          r_16 = (ATerm) ATgetNext((ATermList) y_19);
        }
      else
        _fail(t);
      {
        ATerm z_19 = ATgetArgument(t, 1);
        if(((ATgetType(z_19) == AT_LIST) && !(ATisEmpty(z_19))))
          {
            t_16 = ATgetFirst((ATermList) z_19);
            w_16 = (ATerm) ATgetNext((ATermList) z_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_16, t_16), (ATerm) ATmakeAppl(sym__2, r_16, w_16));
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm x_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_16), x_16);
  return(t);
}
ATerm k_8 (ATerm v_111 (ATerm), ATerm w_111 (ATerm (ATerm), ATerm), ATerm s_46, ATerm v_46, ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,n_16 = NULL,p_16 = NULL;
  t = s_46;
  t = v_111(t);
  i_16 = t;
  t = map_1_0(new_0_0, t);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_16, j_16);
  t = genzip_4_0(e_2, f_2, g_2, _id, t);
  p_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_16, v_46);
  t = conc_0_0(t);
  k_16 = t;
  t = s_46;
  {
    ATerm k_2 (ATerm t)
    {
      t = j_16;
      return(t);
    }
    t = w_111(k_2, t);
    n_16 = t;
    t = (ATerm) ATmakeAppl(sym__3, n_16, v_46, k_16);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm e_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,q_17 = NULL,w_17 = NULL,y_17 = NULL;
  k_17 = t;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_17;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_17 = ATgetFirst((ATermList) t);
      y_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_17;
  if(match_cons(t, sym__2))
    {
      e_17 = ATgetArgument(t, 0);
      j_17 = ATgetArgument(t, 1);
      {
        ATerm a_20 = t;
        int d_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_17;
            if((l_17 != t))
              {
                _fail(t);
              }
            t = j_17;
            ;
            LocalPopChoice(d_20);
          }
        else
          {
            t = a_20;
            t = (ATerm) ATmakeAppl(sym__2, l_17, y_17);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_17, y_17);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm j_112 (ATerm), ATerm t)
{
  ATerm f_19 (ATerm t)
  {
    ATerm k_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_112(t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = k_20;
        {
          ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
          ATerm m_2 (ATerm t)
          {
            ATerm r_17 = NULL;
            r_17 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_17, not_null(e_19));
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
          t = SRTS_all(m_2, t);
        }
      }
    return(t);
  }
  t = f_19(t);
  return(t);
}
ATerm rename_4_0 (ATerm q_111 (ATerm (ATerm), ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t_111 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_19 = NULL;
  ATerm i_22 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm v_21 = NULL,x_21 = NULL,z_21 = NULL;
      v_21 = t;
      if(match_cons(t, sym__2))
        {
          x_21 = ATgetArgument(t, 0);
          z_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              ATerm g_22 = NULL;
              g_22 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_22, z_21);
              t = lookup_0_0(t);
              return(t);
            }
            t = x_21;
            t = q_111(o_2, t);
            ;
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm b_18 = NULL,c_18 = NULL,e_18 = NULL;
              t = v_21;
              t = k_8(r_111, t_111, x_21, z_21, t);
              if(match_cons(t, sym__3))
                {
                  b_18 = ATgetArgument(t, 0);
                  c_18 = ATgetArgument(t, 1);
                  e_18 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = j_8(i_22, s_111, b_18, c_18, e_18, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(n_2, t);
    return(t);
  }
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_19, (ATerm) ATempty);
  t = i_22(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      if(((ATgetType(r_20) != AT_LIST) || !(ATisEmpty(r_20))))
        _fail(t);
      {
        ATerm s_20 = ATgetArgument(t, 1);
        if(((ATgetType(s_20) != AT_LIST) || !(ATisEmpty(s_20))))
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
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(((ATgetType(t_20) == AT_LIST) && !(ATisEmpty(t_20))))
        {
          e_20 = ATgetFirst((ATermList) t_20);
          f_20 = (ATerm) ATgetNext((ATermList) t_20);
        }
      else
        _fail(t);
      {
        ATerm u_20 = ATgetArgument(t, 1);
        if(((ATgetType(u_20) == AT_LIST) && !(ATisEmpty(u_20))))
          {
            g_20 = ATgetFirst((ATermList) u_20);
            h_20 = (ATerm) ATgetNext((ATermList) u_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_20, g_20), (ATerm) ATmakeAppl(sym__2, f_20, h_20));
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_20), i_20);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL,o_20 = NULL;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_20;
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_20);
      }
    else
      {
        t = v_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_20 = ATgetArgument(t, 0);
            n_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_20, n_20);
      }
  }
  return(t);
}
ATerm t_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if(((ATgetType(z_20) != AT_LIST) || !(ATisEmpty(z_20))))
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
ATerm v_2 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,r_21 = NULL,s_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
        {
          n_21 = ATgetFirst((ATermList) b_21);
          o_21 = (ATerm) ATgetNext((ATermList) b_21);
        }
      else
        _fail(t);
      {
        ATerm c_21 = ATgetArgument(t, 1);
        if(((ATgetType(c_21) == AT_LIST) && !(ATisEmpty(c_21))))
          {
            r_21 = ATgetFirst((ATermList) c_21);
            s_21 = (ATerm) ATgetNext((ATermList) c_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_21, r_21), (ATerm) ATmakeAppl(sym__2, o_21, s_21));
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm t_21 = NULL,w_21 = NULL;
  if(match_cons(t, sym__2))
    {
      t_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_21), t_21);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm a_22 = NULL,d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_22;
  {
    ATerm d_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_22);
      }
    else
      {
        t = d_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_21 = ATgetArgument(t, 0);
            d_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_22, d_22);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm m_97 (ATerm), ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,m_27 = NULL,p_27 = NULL;
  i_27 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
      {
        ATerm b_19 = NULL,j_19 = NULL,w_2 = NULL;
        t = SSLgetAnnotations(i_27);
        b_19 = t;
        t = j_27;
        t = m_97(t);
        j_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_19, k_27);
        w_2 = t;
        t = SSLsetAnnotations(w_2, b_19);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          j_27 = ATgetArgument(t, 0);
          k_27 = ATgetArgument(t, 1);
          m_27 = ATgetArgument(t, 2);
          p_27 = ATgetArgument(t, 3);
          {
            ATerm w_19 = NULL,b_20 = NULL,c_20 = NULL,x_2 = NULL;
            t = SSLgetAnnotations(i_27);
            w_19 = t;
            t = m_27;
            t = m_97(t);
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_27, c_20);
            t = genzip_4_0(p_2, q_2, r_2, s_2, t);
            b_20 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, j_27, k_27, b_20, p_27);
            x_2 = t;
            t = SSLsetAnnotations(x_2, w_19);
          }
        }
      else
        {
          ATerm e_21 = NULL,j_21 = NULL,l_21 = NULL,y_2 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              j_27 = ATgetArgument(t, 0);
              k_27 = ATgetArgument(t, 1);
              m_27 = ATgetArgument(t, 2);
              p_27 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_27);
          e_21 = t;
          t = m_27;
          t = m_97(t);
          l_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_27, l_21);
          t = genzip_4_0(t_2, v_2, z_2, a_3, t);
          j_21 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, j_27, k_27, j_21, p_27);
          y_2 = t;
          t = SSLsetAnnotations(y_2, e_21);
        }
    }
  return(t);
}
ATerm Var_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm w_27 = NULL,y_27 = NULL,f_28 = NULL,w_29 = NULL,d_3 = NULL;
  w_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_29);
  w_27 = t;
  t = y_27;
  t = c_83(t);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_28);
  d_3 = t;
  t = SSLsetAnnotations(d_3, w_27);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm i_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = i_21;
      {
        ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,o_30 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            k_30 = ATgetArgument(t, 0);
            l_30 = ATgetArgument(t, 1);
            m_30 = ATgetArgument(t, 2);
            o_30 = ATgetArgument(t, 3);
            t = m_30;
            t = map_1_0(e_3, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                k_30 = ATgetArgument(t, 0);
                l_30 = ATgetArgument(t, 1);
                m_30 = ATgetArgument(t, 2);
                o_30 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = m_30;
            t = map_1_0(i_3, t);
          }
      }
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm z_30 = NULL;
  ATerm m_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_30 = ATgetArgument(t, 0);
          {
            ATerm q_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_21);
      t = z_30;
    }
  else
    {
      t = m_21;
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
  ATerm u_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_31 = ATgetArgument(t, 0);
          {
            ATerm b_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_21);
      t = i_31;
    }
  else
    {
      t = u_21;
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
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
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
                  p_31 = ATgetArgument(t, 3);
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
                      p_31 = ATgetArgument(t, 3);
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
  ATerm j_32 = NULL;
  ATerm c_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_32 = ATgetArgument(t, 0);
          {
            ATerm h_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_22);
      t = j_32;
    }
  else
    {
      t = c_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_32;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm x_32 = NULL;
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_32 = ATgetArgument(t, 0);
          {
            ATerm l_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_22);
      t = x_32;
    }
  else
    {
      t = j_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_32;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm p_33 = NULL;
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_33 = ATgetArgument(t, 0);
          {
            ATerm o_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_22);
      t = p_33;
    }
  else
    {
      t = m_22;
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
  t = rename_4_0(SVar_1_0, j_3, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm r_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(q_22);
      {
        ATerm u_34 = NULL,v_34 = NULL;
        u_34 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm s_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        v_34 = t;
        t = SSLgetAnnotations(u_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_22 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) t_22) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_22 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(u_22) != AT_LIST) || !(ATisEmpty(u_22))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_34;
      }
    }
  else
    {
      t = p_22;
      {
        ATerm v_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm y_22 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_22) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm z_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_22);
            _fail(t);
          }
        else
          {
            t = v_22;
          }
      }
    }
  return(t);
}
ATerm o_9 (ATerm x_72, ATerm w_72, ATerm t)
{
  t = x_72;
  t = topdown_1_0(d_4, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, x_72);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm m_35 = NULL,o_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,x_35 = NULL,y_35 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_35 = ATgetArgument(t, 0);
      t_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_35;
  if(match_cons(t, sym_Match_1))
    {
      r_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_35;
  if(match_cons(t, sym_Var_1))
    {
      s_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_35;
  if(match_cons(t, sym_Seq_2))
    {
      x_35 = ATgetArgument(t, 0);
      o_35 = ATgetArgument(t, 1);
      t = x_35;
      if(match_cons(t, sym_Build_1))
        {
          y_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_35;
      if(match_cons(t, sym_Var_1))
        {
          m_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_35;
      if((s_35 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_35)), o_35);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          x_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_35;
      if(match_cons(t, sym_Var_1))
        {
          y_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_35;
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
  ATerm k_36 = NULL,l_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_36 = ATgetArgument(t, 0);
      v_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_36;
  if(match_cons(t, sym_Build_1))
    {
      u_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_36;
  if(match_cons(t, sym_Seq_2))
    {
      w_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
      t = w_36;
      if(match_cons(t, sym_Match_1))
        {
          k_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_36;
      if((u_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_36), l_36);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          w_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_36;
      if((u_36 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, u_36);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,w_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_37 = ATgetArgument(t, 0);
      z_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_37;
  if(match_cons(t, sym_Match_1))
    {
      y_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_37;
  if(match_cons(t, sym_Seq_2))
    {
      a_38 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
      t = a_38;
      if(match_cons(t, sym_Match_1))
        {
          r_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_37;
      if((y_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_37), s_37);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          a_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_38;
      if((y_37 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, y_37);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL,u_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,f_39 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_38 = ATgetArgument(t, 0);
      w_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_38;
  if(match_cons(t, sym_Build_1))
    {
      ATerm a_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_38;
  if(match_cons(t, sym_Seq_2))
    {
      x_38 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
      t = x_38;
      if(match_cons(t, sym_PrimT_3))
        {
          q_38 = ATgetArgument(t, 0);
          r_38 = ATgetArgument(t, 1);
          s_38 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, q_38, r_38, s_38), y_38);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          x_38 = ATgetArgument(t, 0);
          y_38 = ATgetArgument(t, 1);
          f_39 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, x_38, y_38, f_39);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm m_40 = NULL,r_40 = NULL,y_40 = NULL,a_41 = NULL,h_41 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_40;
  if(match_cons(t, sym_Build_1))
    {
      ATerm b_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_41;
  if(match_cons(t, sym_Seq_2))
    {
      h_41 = ATgetArgument(t, 0);
      r_40 = ATgetArgument(t, 1);
      t = h_41;
      if(match_cons(t, sym_Build_1))
        {
          m_40 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_40), r_40);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_41 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, h_41);
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if(((ATgetType(c_23) != AT_LIST) || !(ATisEmpty(c_23))))
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(((ATgetType(d_23) != AT_LIST) || !(ATisEmpty(d_23))))
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
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if(((ATgetType(e_23) == AT_LIST) && !(ATisEmpty(e_23))))
        {
          p_43 = ATgetFirst((ATermList) e_23);
          q_43 = (ATerm) ATgetNext((ATermList) e_23);
        }
      else
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(((ATgetType(g_23) == AT_LIST) && !(ATisEmpty(g_23))))
          {
            r_43 = ATgetFirst((ATermList) g_23);
            s_43 = (ATerm) ATgetNext((ATermList) g_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_43, r_43), (ATerm) ATmakeAppl(sym__2, q_43, s_43));
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm t_43 = NULL,v_43 = NULL;
  if(match_cons(t, sym__2))
    {
      t_43 = ATgetArgument(t, 0);
      v_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_43), t_43);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm w_43 = NULL,p_44 = NULL;
  if(match_cons(t, sym__2))
    {
      w_43 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_43), (ATerm) ATmakeAppl(sym_Match_1, p_44));
  return(t);
}
ATerm i_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_23 = ATgetArgument(t, 0);
      if(((ATgetType(h_23) != AT_LIST) || !(ATisEmpty(h_23))))
        _fail(t);
      {
        ATerm i_23 = ATgetArgument(t, 1);
        if(((ATgetType(i_23) != AT_LIST) || !(ATisEmpty(i_23))))
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
  ATerm x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if(((ATgetType(j_23) == AT_LIST) && !(ATisEmpty(j_23))))
        {
          x_44 = ATgetFirst((ATermList) j_23);
          y_44 = (ATerm) ATgetNext((ATermList) j_23);
        }
      else
        _fail(t);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(((ATgetType(k_23) == AT_LIST) && !(ATisEmpty(k_23))))
          {
            z_44 = ATgetFirst((ATermList) k_23);
            a_45 = (ATerm) ATgetNext((ATermList) k_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_44, z_44), (ATerm) ATmakeAppl(sym__2, y_44, a_45));
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm b_45 = NULL,i_45 = NULL;
  if(match_cons(t, sym__2))
    {
      b_45 = ATgetArgument(t, 0);
      i_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_45), b_45);
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
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,m_42 = NULL,q_42 = NULL,u_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,h_43 = NULL,i_43 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_42;
  if(match_cons(t, sym_Build_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_42;
  if(match_cons(t, sym_Op_2))
    {
      u_42 = ATgetArgument(t, 0);
      z_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_43;
  if(match_cons(t, sym_Seq_2))
    {
      b_43 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
      {
        ATerm o_43 = NULL;
        t = b_43;
        if(match_cons(t, sym_Match_1))
          {
            h_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_43;
        if(match_cons(t, sym_Op_2))
          {
            i_42 = ATgetArgument(t, 0);
            j_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_42;
        if((u_42 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, z_42, j_42);
        t = genzip_4_0(e_4, f_4, g_4, h_4, t);
        o_43 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_43), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_42, z_42)), k_42));
      }
    }
  else
    {
      ATerm w_44 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          b_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_43;
      if(match_cons(t, sym_Op_2))
        {
          h_43 = ATgetArgument(t, 0);
          i_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_43;
      if((u_42 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, z_42, i_43);
      t = genzip_4_0(i_4, j_4, k_4, l_4, t);
      w_44 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_44), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_42, z_42)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm g_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,s_47 = NULL,v_47 = NULL,w_47 = NULL;
  k_47 = t;
  if(match_cons(t, sym_Seq_2))
    {
      l_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_47;
  if(match_cons(t, sym_Build_1))
    {
      m_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_47;
  if(match_cons(t, sym_Op_2))
    {
      n_47 = ATgetArgument(t, 0);
      {
        ATerm l_23 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_47;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            v_47 = ATgetArgument(t, 0);
            {
              ATerm o_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(n_23);
        t = v_47;
        if(match_cons(t, sym_Match_1))
          {
            w_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_47;
        if(match_cons(t, sym_Op_2))
          {
            g_47 = ATgetArgument(t, 0);
            {
              ATerm p_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_47, g_47);
        {
          ATerm q_23 = t;
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
              t = q_23;
            }
          t = term_r_23;
        }
      }
    else
      {
        t = m_23;
        if(match_cons(t, sym_Match_1))
          {
            v_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_47;
        if(match_cons(t, sym_Op_2))
          {
            w_47 = ATgetArgument(t, 0);
            {
              ATerm s_23 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_47, w_47);
        {
          ATerm t_23 = t;
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
              t = t_23;
            }
          t = term_r_23;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm g_48 (ATerm t)
  {
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_99(t);
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = SRTS_one(g_48, t);
      }
    return(t);
  }
  t = g_48(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,e_50 = NULL,f_50 = NULL,h_50 = NULL;
  r_49 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_49 = ATgetArgument(t, 0);
      z_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_49;
  if(match_cons(t, sym_Let_2))
    {
      a_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
      {
        ATerm p_50 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, s_49, a_50);
        t = conc_0_0(t);
        p_50 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_50, f_50);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          a_50 = ATgetArgument(t, 0);
          f_50 = ATgetArgument(t, 1);
          h_50 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_49 = ATgetFirst((ATermList) t);
          y_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_49;
      if(match_cons(t, sym_SDefT_4))
        {
          u_49 = ATgetArgument(t, 0);
          v_49 = ATgetArgument(t, 1);
          w_49 = ATgetArgument(t, 2);
          x_49 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_49;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_50;
      if(match_cons(t, sym_SVar_1))
        {
          e_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_50;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_50;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_50;
      if((u_49 != t))
        {
          _fail(t);
        }
      t = x_49;
      {
        ATerm w_23 = t;
        if((PushChoice() == 0))
          {
            ATerm m_4 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm x_23 = ATgetArgument(t, 0);
                  if(match_cons(x_23, sym_SVar_1))
                    {
                      if((u_49 != ATgetArgument(x_23, 0)))
                        {
                          _fail(ATgetArgument(x_23, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm y_23 = ATgetArgument(t, 1);
                    if(((ATgetType(y_23) != AT_LIST) || !(ATisEmpty(y_23))))
                      _fail(t);
                  }
                  {
                    ATerm z_23 = ATgetArgument(t, 2);
                    if(((ATgetType(z_23) != AT_LIST) || !(ATisEmpty(z_23))))
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
            t = w_23;
          }
        t = x_49;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm y_50 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,l_51 = NULL,m_51 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      l_51 = ATgetArgument(t, 0);
      t = l_51;
      if(match_cons(t, sym_Seq_2))
        {
          j_51 = ATgetArgument(t, 0);
          f_51 = ATgetArgument(t, 1);
          t = j_51;
          if(match_cons(t, sym_Where_1))
            {
              y_50 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_51;
          if(match_cons(t, sym_Seq_2))
            {
              g_51 = ATgetArgument(t, 0);
              i_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_51;
          if(match_cons(t, sym_Build_1))
            {
              h_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, y_50, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_51), i_51)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              j_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, j_51);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          l_51 = ATgetArgument(t, 0);
          t = l_51;
          if(match_cons(t, sym_Test_1))
            {
              j_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, j_51);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              l_51 = ATgetArgument(t, 0);
              t = l_51;
              if(match_cons(t, sym_Not_1))
                {
                  j_51 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, j_51);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  l_51 = ATgetArgument(t, 0);
                  m_51 = ATgetArgument(t, 1);
                  t = m_51;
                  if((l_51 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      l_51 = ATgetArgument(t, 0);
                      m_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_51;
                  if((l_51 != t))
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
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
      t = m_52;
      if(match_cons(t, sym_LChoice_2))
        {
          n_52 = ATgetArgument(t, 0);
          o_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, n_52, (ATerm) ATmakeAppl(sym_LChoice_2, o_52, p_52));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          m_52 = ATgetArgument(t, 0);
          p_52 = ATgetArgument(t, 1);
          t = m_52;
          if(match_cons(t, sym_Seq_2))
            {
              n_52 = ATgetArgument(t, 0);
              o_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, n_52, (ATerm) ATmakeAppl(sym_Seq_2, o_52, p_52));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              m_52 = ATgetArgument(t, 0);
              p_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_52;
          if(match_cons(t, sym_Choice_2))
            {
              n_52 = ATgetArgument(t, 0);
              o_52 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, n_52, (ATerm) ATmakeAppl(sym_Choice_2, o_52, p_52));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL;
  e_56 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_56 = ATgetFirst((ATermList) t);
      g_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_24 = NULL,k_24 = NULL,t_24 = NULL,u_24 = NULL,a_25 = NULL,g_25 = NULL,j_25 = NULL,g_3 = NULL,f_3 = NULL;
        t = SSLgetAnnotations(e_56);
        a_25 = t;
        t = f_56;
        t = p_0(t);
        g_25 = t;
        t = (ATerm) ATinsert(CheckATermList(g_56), g_25);
        f_3 = t;
        t = SSLsetAnnotations(f_3, a_25);
        j_25 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_24 = ATgetFirst((ATermList) t);
            t_24 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_25);
        j_24 = t;
        t = t_24;
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(p_0, t);
              ;
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
            }
          u_24 = t;
          t = (ATerm) ATinsert(CheckATermList(u_24), k_24);
          g_3 = t;
          t = SSLsetAnnotations(g_3, j_24);
        }
        ;
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        {
          ATerm m_26 = NULL,p_26 = NULL,h_3 = NULL;
          t = SSLgetAnnotations(e_56);
          m_26 = t;
          t = g_56;
          t = map1_1_0(p_0, t);
          p_26 = t;
          t = (ATerm) ATinsert(CheckATermList(p_26), f_56);
          h_3 = t;
          t = SSLsetAnnotations(h_3, m_26);
        }
      }
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm g_59 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, g_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_24), term_g_24));
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  i_59 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_59 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_59, term_g_24);
    }
  else
    {
      t = i_59;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm a_60 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_60, term_g_24);
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL;
  c_60 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_60 = ATgetArgument(t, 0);
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, b_60, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_24), term_g_24));
            ;
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
            t = c_60;
          }
      }
    }
  else
    {
      t = c_60;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm x_60 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_60, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_g_24), term_g_24));
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL;
  z_60 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_60 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, y_60, term_g_24);
    }
  else
    {
      t = z_60;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,y_57 = NULL,a_58 = NULL,c_58 = NULL,d_58 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      c_58 = ATgetArgument(t, 0);
      d_58 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, c_58, d_58);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          c_58 = ATgetArgument(t, 0);
          t = c_58;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_57 = ATgetFirst((ATermList) t);
              u_57 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, t_57, (ATerm) ATmakeAppl(sym_LChoices_1, u_57));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_r_23;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              c_58 = ATgetArgument(t, 0);
              t = c_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_57 = ATgetFirst((ATermList) t);
                  u_57 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, t_57, (ATerm) ATmakeAppl(sym_Choices_1, u_57));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_r_23;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  c_58 = ATgetArgument(t, 0);
                  t = c_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_57 = ATgetFirst((ATermList) t);
                      u_57 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_57, (ATerm) ATmakeAppl(sym_Seqs_1, u_57));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_l_24;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_58 = ATgetArgument(t, 0);
                      d_58 = ATgetArgument(t, 1);
                      a_58 = ATgetArgument(t, 2);
                      y_57 = ATgetArgument(t, 3);
                      {
                        ATerm z_58 = NULL,f_59 = NULL;
                        t = d_58;
                        t = map1_1_0(n_4, t);
                        z_58 = t;
                        t = a_58;
                        t = map1_1_0(o_4, t);
                        f_59 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, c_58, z_58, f_59, y_57);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          c_58 = ATgetArgument(t, 0);
                          d_58 = ATgetArgument(t, 1);
                          a_58 = ATgetArgument(t, 2);
                          y_57 = ATgetArgument(t, 3);
                          {
                            ATerm m_24 = t;
                            int n_24 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_59 = NULL,z_59 = NULL;
                                t = a_58;
                                t = map1_1_0(p_4, t);
                                v_59 = t;
                                t = d_58;
                                t = map_1_0(r_4, t);
                                z_59 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_58, z_59, v_59, y_57);
                                ;
                                LocalPopChoice(n_24);
                              }
                            else
                              {
                                t = m_24;
                                {
                                  ATerm u_60 = NULL,w_60 = NULL;
                                  t = d_58;
                                  t = map1_1_0(t_4, t);
                                  u_60 = t;
                                  t = a_58;
                                  t = map_1_0(u_4, t);
                                  w_60 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, c_58, u_60, w_60, y_57);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              c_58 = ATgetArgument(t, 0);
                              d_58 = ATgetArgument(t, 1);
                              a_58 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, d_58, (ATerm) ATmakeAppl(sym_Op_2, term_o_24, (ATerm) ATinsert(ATinsert(ATempty, a_58), c_58)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  c_58 = ATgetArgument(t, 0);
                                  d_58 = ATgetArgument(t, 1);
                                  a_58 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, a_58)), c_58), (ATerm) ATmakeAppl(sym_Build_1, d_58)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      c_58 = ATgetArgument(t, 0);
                                      d_58 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_58, (ATerm) ATmakeAppl(sym_Match_1, d_58));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          c_58 = ATgetArgument(t, 0);
                                          d_58 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_58), d_58);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              c_58 = ATgetArgument(t, 0);
                                              d_58 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_58), c_58);
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
  ATerm i_63 = NULL,j_63 = NULL,k_63 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      i_63 = ATgetArgument(t, 0);
      t = i_63;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_r_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          i_63 = ATgetArgument(t, 0);
          t = i_63;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_l_24;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              i_63 = ATgetArgument(t, 0);
              j_63 = ATgetArgument(t, 1);
              t = i_63;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_r_23;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  i_63 = ATgetArgument(t, 0);
                  j_63 = ATgetArgument(t, 1);
                  t = j_63;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_r_23;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      i_63 = ATgetArgument(t, 0);
                      j_63 = ATgetArgument(t, 1);
                      t = j_63;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_r_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          i_63 = ATgetArgument(t, 0);
                          t = i_63;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_r_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              i_63 = ATgetArgument(t, 0);
                              t = i_63;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_r_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  i_63 = ATgetArgument(t, 0);
                                  j_63 = ATgetArgument(t, 1);
                                  t = j_63;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_r_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      i_63 = ATgetArgument(t, 0);
                                      j_63 = ATgetArgument(t, 1);
                                      t = j_63;
                                      t = fetch_1_0(x_4, t);
                                      t = term_r_23;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          i_63 = ATgetArgument(t, 0);
                                          j_63 = ATgetArgument(t, 1);
                                          t = j_63;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = i_63;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = j_63;
                                                }
                                              else
                                                {
                                                  t = i_63;
                                                }
                                            }
                                          else
                                            {
                                              t = i_63;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = j_63;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              i_63 = ATgetArgument(t, 0);
                                              j_63 = ATgetArgument(t, 1);
                                              t = j_63;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = i_63;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = j_63;
                                                    }
                                                  else
                                                    {
                                                      t = i_63;
                                                    }
                                                }
                                              else
                                                {
                                                  t = i_63;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = j_63;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  i_63 = ATgetArgument(t, 0);
                                                  t = i_63;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_r_23;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      i_63 = ATgetArgument(t, 0);
                                                      j_63 = ATgetArgument(t, 1);
                                                      k_63 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = k_63;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_63, j_63);
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
  ATerm k_65 = NULL,n_65 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      n_65 = ATgetArgument(t, 0);
      t = n_65;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_l_24;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          n_65 = ATgetArgument(t, 0);
          t = n_65;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_r_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              n_65 = ATgetArgument(t, 0);
              k_65 = ATgetArgument(t, 1);
              t = k_65;
              if(match_cons(t, sym_Id_0))
                {
                  t = n_65;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = k_65;
                    }
                  else
                    {
                      t = n_65;
                    }
                }
              else
                {
                  t = n_65;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = k_65;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  n_65 = ATgetArgument(t, 0);
                  k_65 = ATgetArgument(t, 1);
                  t = n_65;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_l_24;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      n_65 = ATgetArgument(t, 0);
                      k_65 = ATgetArgument(t, 1);
                      t = k_65;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_l_24;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          n_65 = ATgetArgument(t, 0);
                          k_65 = ATgetArgument(t, 1);
                          t = k_65;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_l_24;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              n_65 = ATgetArgument(t, 0);
                              t = n_65;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_l_24;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  n_65 = ATgetArgument(t, 0);
                                  t = n_65;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_l_24;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      n_65 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = n_65;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_l_24;
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
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
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
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            {
              ATerm v_24 = t;
              int w_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
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
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(y_24);
                      }
                    else
                      {
                        t = x_24;
                        {
                          ATerm z_24 = t;
                          int b_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(b_25);
                            }
                          else
                            {
                              t = z_24;
                              {
                                ATerm c_25 = t;
                                int d_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_67 = NULL,r_67 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        q_67 = ATgetArgument(t, 0);
                                        r_67 = ATgetArgument(t, 1);
                                        t = q_67;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_67;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            q_67 = ATgetArgument(t, 0);
                                            r_67 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = q_67;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = r_67;
                                      }
                                    ;
                                    LocalPopChoice(d_25);
                                  }
                                else
                                  {
                                    t = c_25;
                                    {
                                      ATerm e_25 = t;
                                      int f_25 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(f_25);
                                        }
                                      else
                                        {
                                          t = e_25;
                                          {
                                            ATerm h_25 = t;
                                            int i_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(i_25);
                                              }
                                            else
                                              {
                                                t = h_25;
                                                {
                                                  ATerm k_25 = t;
                                                  int l_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(l_25);
                                                    }
                                                  else
                                                    {
                                                      t = k_25;
                                                      {
                                                        ATerm m_25 = t;
                                                        int n_25 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(n_25);
                                                          }
                                                        else
                                                          {
                                                            t = m_25;
                                                            {
                                                              ATerm o_25 = t;
                                                              int p_25 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(p_25);
                                                                }
                                                              else
                                                                {
                                                                  t = o_25;
                                                                  {
                                                                    ATerm q_25 = t;
                                                                    int r_25 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(r_25);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_25;
                                                                        {
                                                                          ATerm s_25 = t;
                                                                          int t_25 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
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
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(v_25);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_25;
                                                                                    {
                                                                                      ATerm u_67 = NULL,x_67 = NULL,z_67 = NULL,a_68 = NULL;
                                                                                      x_67 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          z_67 = ATgetArgument(t, 0);
                                                                                          a_68 = ATgetArgument(t, 1);
                                                                                          t = z_67;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              u_67 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = x_67;
                                                                                          t = o_9(u_67, a_68, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              z_67 = ATgetArgument(t, 0);
                                                                                              a_68 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = z_67;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = a_68;
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
  ATerm r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL;
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
              t_77 = ATgetArgument(t, 0);
              {
                ATerm g_29 = NULL,i_29 = NULL,q_3 = NULL;
                t = SSLgetAnnotations(s_77);
                g_29 = t;
                t = t_77;
                {
                  ATerm b_32 (ATerm t)
                  {
                    ATerm t_31 = NULL,u_31 = NULL,w_31 = NULL;
                    t_31 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        u_31 = ATgetArgument(t, 0);
                        {
                          ATerm v_32 = NULL,l_3 = NULL;
                          t = SSLgetAnnotations(t_31);
                          v_32 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, u_31);
                          l_3 = t;
                          t = SSLsetAnnotations(l_3, v_32);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            u_31 = ATgetArgument(t, 0);
                            {
                              ATerm m_33 = NULL,m_3 = NULL;
                              t = SSLgetAnnotations(t_31);
                              m_33 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, u_31);
                              m_3 = t;
                              t = SSLsetAnnotations(m_3, m_33);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                u_31 = ATgetArgument(t, 0);
                                {
                                  ATerm u_33 = NULL,n_3 = NULL;
                                  t = SSLgetAnnotations(t_31);
                                  u_33 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, u_31);
                                  n_3 = t;
                                  t = SSLsetAnnotations(n_3, u_33);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    u_31 = ATgetArgument(t, 0);
                                    {
                                      ATerm b_34 = NULL,o_3 = NULL;
                                      t = SSLgetAnnotations(t_31);
                                      b_34 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, u_31);
                                      o_3 = t;
                                      t = SSLsetAnnotations(o_3, b_34);
                                    }
                                  }
                                else
                                  {
                                    ATerm k_34 = NULL,n_34 = NULL,p_3 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        u_31 = ATgetArgument(t, 0);
                                        w_31 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(t_31);
                                    k_34 = t;
                                    t = w_31;
                                    t = map_1_0(b_32, t);
                                    n_34 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, u_31, n_34);
                                    p_3 = t;
                                    t = SSLsetAnnotations(p_3, k_34);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = b_32(t);
                  i_29 = t;
                  t = (ATerm) ATmakeAppl(sym_Build_1, i_29);
                  q_3 = t;
                  t = SSLsetAnnotations(q_3, g_29);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  t_77 = ATgetArgument(t, 0);
                  u_77 = ATgetArgument(t, 1);
                  {
                    ATerm z_34 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,t_3 = NULL,s_3 = NULL,r_3 = NULL;
                    t = SSLgetAnnotations(s_77);
                    z_34 = t;
                    t = t_77;
                    if(match_cons(t, sym_Var_1))
                      {
                        g_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(t_77);
                    f_35 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, g_35);
                    r_3 = t;
                    t = SSLsetAnnotations(r_3, f_35);
                    h_35 = t;
                    t = u_77;
                    if(match_cons(t, sym_Var_1))
                      {
                        d_35 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(u_77);
                    c_35 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_35);
                    s_3 = t;
                    t = SSLsetAnnotations(s_3, c_35);
                    e_35 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, h_35, e_35);
                    t_3 = t;
                    t = SSLsetAnnotations(t_3, z_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      t_77 = ATgetArgument(t, 0);
                      {
                        ATerm v_35 = NULL,a_36 = NULL,c_36 = NULL,d_36 = NULL,v_3 = NULL,u_3 = NULL;
                        t = SSLgetAnnotations(s_77);
                        v_35 = t;
                        t = t_77;
                        if(match_cons(t, sym_Var_1))
                          {
                            c_36 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(t_77);
                        a_36 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_36);
                        u_3 = t;
                        t = SSLsetAnnotations(u_3, a_36);
                        d_36 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, d_36);
                        v_3 = t;
                        t = SSLsetAnnotations(v_3, v_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          t_77 = ATgetArgument(t, 0);
                          u_77 = ATgetArgument(t, 1);
                          {
                            ATerm o_36 = NULL,w_3 = NULL;
                            t = SSLgetAnnotations(s_77);
                            o_36 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, t_77, u_77);
                            w_3 = t;
                            t = SSLsetAnnotations(w_3, o_36);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              t_77 = ATgetArgument(t, 0);
                              u_77 = ATgetArgument(t, 1);
                              r_77 = ATgetArgument(t, 2);
                              {
                                ATerm g_37 = NULL,x_3 = NULL;
                                t = SSLgetAnnotations(s_77);
                                g_37 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, t_77, u_77, r_77);
                                x_3 = t;
                                t = SSLsetAnnotations(x_3, g_37);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  t_77 = ATgetArgument(t, 0);
                                  u_77 = ATgetArgument(t, 1);
                                  {
                                    ATerm v_37 = NULL,e_38 = NULL,f_38 = NULL,y_3 = NULL;
                                    t = SSLgetAnnotations(s_77);
                                    v_37 = t;
                                    t = t_77;
                                    t = simple_strategy_0_0(t);
                                    e_38 = t;
                                    t = u_77;
                                    t = simple_strategy_0_0(t);
                                    f_38 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, e_38, f_38);
                                    y_3 = t;
                                    t = SSLsetAnnotations(y_3, v_37);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      t_77 = ATgetArgument(t, 0);
                                      {
                                        ATerm n_38 = NULL,p_38 = NULL,z_3 = NULL;
                                        t = SSLgetAnnotations(s_77);
                                        n_38 = t;
                                        t = t_77;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        p_38 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, p_38);
                                        z_3 = t;
                                        t = SSLsetAnnotations(z_3, n_38);
                                      }
                                    }
                                  else
                                    {
                                      ATerm q_39 = NULL,u_39 = NULL,a_4 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          t_77 = ATgetArgument(t, 0);
                                          u_77 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(s_77);
                                      q_39 = t;
                                      t = u_77;
                                      t = simple_strategy_0_0(t);
                                      u_39 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, t_77, u_39);
                                      a_4 = t;
                                      t = SSLsetAnnotations(a_4, q_39);
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
ATerm p_8 (ATerm t_106 (ATerm), ATerm a_39, ATerm z_38, ATerm t)
{
  ATerm d_79 (ATerm t)
  {
    ATerm e_79 (ATerm p_78, ATerm t)
    {
      ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_4 = NULL;
      t = p_78;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_78 = ATgetFirst((ATermList) t);
          u_78 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm y_4 (ATerm t)
        {
          t = z_38;
          return(t);
        }
        t = k_10(t_106, y_4, t_78, u_78, t);
        t = p_78;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_78 = ATgetFirst((ATermList) t);
            x_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_78);
        v_78 = t;
        t = x_78;
        t = d_79(t);
        y_78 = t;
        t = (ATerm) ATinsert(CheckATermList(y_78), w_78);
        z_4 = t;
        t = SSLsetAnnotations(z_4, v_78);
      }
      return(t);
    }
    ATerm z_78 = NULL,b_79 = NULL;
    z_78 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_78;
      }
    else
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_25 = ATgetFirst((ATermList) t);
                b_79 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(x_25);
            {
              ATerm z_25 = t;
              int a_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_79(z_78, t);
                  ;
                  LocalPopChoice(a_26);
                }
              else
                {
                  t = z_25;
                  t = b_79;
                  t = d_79(t);
                }
            }
          }
        else
          {
            t = w_25;
            t = e_79(z_78, t);
          }
      }
    return(t);
  }
  t = a_39;
  t = d_79(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm p_127 (ATerm), ATerm q_127 (ATerm), ATerm r_127 (ATerm), ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(p_127, q_127, r_127, t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm q_79 = NULL,r_79 = NULL,s_79 = NULL,g_40 = NULL,j_40 = NULL,k_40 = NULL,c_5 = NULL;
        q_79 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            r_79 = ATgetArgument(t, 0);
            s_79 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_79);
        g_40 = t;
        t = r_79;
        t = r_127(t);
        j_40 = t;
        t = s_79;
        t = p_127(t);
        k_40 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, j_40, k_40);
        c_5 = t;
        t = SSLsetAnnotations(c_5, g_40);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL;
  p_82 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
      {
        ATerm u_40 = NULL,b_41 = NULL,c_41 = NULL,h_5 = NULL;
        t = SSLgetAnnotations(p_82);
        u_40 = t;
        t = q_82;
        t = p_97(t);
        b_41 = t;
        t = m_82;
        t = n_97(t);
        c_41 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_41, c_41);
        h_5 = t;
        t = SSLsetAnnotations(h_5, u_40);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          q_82 = ATgetArgument(t, 0);
          m_82 = ATgetArgument(t, 1);
          n_82 = ATgetArgument(t, 2);
          o_82 = ATgetArgument(t, 3);
          {
            ATerm q_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,j_5 = NULL;
            t = SSLgetAnnotations(p_82);
            q_41 = t;
            t = q_82;
            t = p_97(t);
            v_41 = t;
            t = m_82;
            t = p_97(t);
            w_41 = t;
            t = n_82;
            t = p_97(t);
            x_41 = t;
            t = o_82;
            t = n_97(t);
            y_41 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_41, w_41, x_41, y_41);
            j_5 = t;
            t = SSLsetAnnotations(j_5, q_41);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              q_82 = ATgetArgument(t, 0);
              m_82 = ATgetArgument(t, 1);
              n_82 = ATgetArgument(t, 2);
              o_82 = ATgetArgument(t, 3);
              {
                ATerm p_42 = NULL,y_42 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL,o_5 = NULL;
                t = SSLgetAnnotations(p_82);
                p_42 = t;
                t = q_82;
                t = p_97(t);
                y_42 = t;
                t = m_82;
                t = p_97(t);
                c_43 = t;
                t = n_82;
                t = p_97(t);
                d_43 = t;
                t = o_82;
                t = n_97(t);
                e_43 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, y_42, c_43, d_43, e_43);
                o_5 = t;
                t = SSLsetAnnotations(o_5, p_42);
              }
            }
          else
            {
              ATerm b_44 = NULL,e_44 = NULL,p_5 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  q_82 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_82);
              b_44 = t;
              t = q_82;
              t = n_97(t);
              e_44 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, e_44);
              p_5 = t;
              t = SSLsetAnnotations(p_5, b_44);
            }
        }
    }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm z_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_82);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
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
            ;
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
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
  ATerm p_83 = NULL;
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_83 = ATgetArgument(t, 0);
          {
            ATerm j_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_26);
      t = p_83;
    }
  else
    {
      t = h_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_83;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm b_84 = NULL;
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_84 = ATgetArgument(t, 0);
          {
            ATerm n_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_26);
      t = b_84;
    }
  else
    {
      t = k_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_84;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm y_82 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      y_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_82;
  t = free_vars_3_0(a_5, e_5, tboundin_3_0, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm h_84 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_84);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm o_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = o_26;
      {
        ATerm j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_84 = ATgetArgument(t, 0);
            t = j_84;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                j_84 = ATgetArgument(t, 0);
                k_84 = ATgetArgument(t, 1);
                l_84 = ATgetArgument(t, 2);
                m_84 = ATgetArgument(t, 3);
                t = l_84;
                t = map_1_0(s_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    j_84 = ATgetArgument(t, 0);
                    k_84 = ATgetArgument(t, 1);
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
  ATerm u_84 = NULL;
  ATerm r_26 = t;
  int s_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_84 = ATgetArgument(t, 0);
          {
            ATerm t_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_26);
      t = u_84;
    }
  else
    {
      t = r_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_84;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm e_85 = NULL;
  ATerm u_26 = t;
  int v_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_85 = ATgetArgument(t, 0);
          {
            ATerm w_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_26);
      t = e_85;
    }
  else
    {
      t = u_26;
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
  ATerm y_85 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_85);
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm x_26 = t;
  int y_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_26);
    }
  else
    {
      t = x_26;
      {
        ATerm a_86 = NULL,b_86 = NULL,d_86 = NULL,e_86 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_86 = ATgetArgument(t, 0);
            t = a_86;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_86 = ATgetArgument(t, 0);
                b_86 = ATgetArgument(t, 1);
                d_86 = ATgetArgument(t, 2);
                e_86 = ATgetArgument(t, 3);
                t = d_86;
                t = map_1_0(w_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_86 = ATgetArgument(t, 0);
                    b_86 = ATgetArgument(t, 1);
                    d_86 = ATgetArgument(t, 2);
                    e_86 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = d_86;
                t = map_1_0(x_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm q_86 = NULL;
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_86 = ATgetArgument(t, 0);
          {
            ATerm b_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_27);
      t = q_86;
    }
  else
    {
      t = z_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_86;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm b_87 = NULL;
  ATerm c_27 = t;
  int d_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_87 = ATgetArgument(t, 0);
          {
            ATerm e_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_27);
      t = b_87;
    }
  else
    {
      t = c_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_87;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm o_85 = NULL,v_85 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      v_85 = ATgetArgument(t, 0);
      t = v_85;
      if(match_cons(t, sym_Rule_3))
        {
          o_85 = ATgetArgument(t, 0);
          {
            ATerm f_27 = ATgetArgument(t, 1);
          }
          {
            ATerm g_27 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = o_85;
      t = free_vars_3_0(u_5, v_5, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          v_85 = ATgetArgument(t, 0);
          {
            ATerm h_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_85;
    }
  return(t);
}
ATerm v_8 (ATerm v_106 (ATerm), ATerm c_39, ATerm b_39, ATerm t)
{
  ATerm u_87 (ATerm t)
  {
    ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL;
    p_87 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_87;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_87 = ATgetFirst((ATermList) t);
            r_87 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_27 = t;
          int n_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_87;
              {
                ATerm y_5 (ATerm t)
                {
                  t = b_39;
                  return(t);
                }
                t = k_10(v_106, y_5, q_87, r_87, t);
                t = u_87(t);
              }
              ;
              LocalPopChoice(n_27);
            }
          else
            {
              t = l_27;
              {
                ATerm r_44 = NULL,e_45 = NULL,g_6 = NULL;
                t = SSLgetAnnotations(p_87);
                r_44 = t;
                t = r_87;
                t = u_87(t);
                e_45 = t;
                t = (ATerm) ATinsert(CheckATermList(e_45), q_87);
                g_6 = t;
                t = SSLsetAnnotations(g_6, r_44);
              }
            }
        }
      }
    return(t);
  }
  t = c_39;
  t = u_87(t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      if(((ATgetType(o_27) != AT_LIST) || !(ATisEmpty(o_27))))
        _fail(t);
      {
        ATerm q_27 = ATgetArgument(t, 1);
        if(((ATgetType(q_27) != AT_LIST) || !(ATisEmpty(q_27))))
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
  ATerm g_88 = NULL,h_88 = NULL,j_88 = NULL,k_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_27 = ATgetArgument(t, 0);
      if(((ATgetType(r_27) == AT_LIST) && !(ATisEmpty(r_27))))
        {
          g_88 = ATgetFirst((ATermList) r_27);
          h_88 = (ATerm) ATgetNext((ATermList) r_27);
        }
      else
        _fail(t);
      {
        ATerm s_27 = ATgetArgument(t, 1);
        if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
          {
            j_88 = ATgetFirst((ATermList) s_27);
            k_88 = (ATerm) ATgetNext((ATermList) s_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_88, j_88), (ATerm) ATmakeAppl(sym__2, h_88, k_88));
  return(t);
}
ATerm b_6 (ATerm t)
{
  ATerm m_88 = NULL,n_88 = NULL;
  if(match_cons(t, sym__2))
    {
      m_88 = ATgetArgument(t, 0);
      n_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_88), m_88);
  return(t);
}
ATerm x_8 (ATerm p_654, ATerm u_654, ATerm y_65, ATerm t)
{
  ATerm y_87 = NULL,a_88 = NULL,b_88 = NULL,d_88 = NULL;
  t = SSL_explode_term(u_654);
  if(match_cons(t, sym__2))
    {
      y_87 = ATgetArgument(t, 0);
      b_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_654);
  if(match_cons(t, sym__2))
    {
      if((y_87 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_88, b_88);
  t = genzip_4_0(z_5, a_6, b_6, _id, t);
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_88, y_65);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t)
{
  ATerm q_88 (ATerm t)
  {
    ATerm t_27 = t;
    int u_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_116(t);
        ;
        LocalPopChoice(u_27);
      }
    else
      {
        t = t_27;
        t = f_116(t);
        t = q_88(t);
      }
    return(t);
  }
  t = q_88(t);
  return(t);
}
ATerm for_3_0 (ATerm h_116 (ATerm), ATerm i_116 (ATerm), ATerm j_116 (ATerm), ATerm t)
{
  t = h_116(t);
  t = while_not_2_0(i_116, j_116, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm a_89 = NULL;
  a_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_89);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,i_6 = NULL;
  e_89 = t;
  if(match_cons(t, sym__2))
    {
      c_89 = ATgetArgument(t, 0);
      d_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_89);
  b_89 = t;
  t = d_89;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_89, d_89);
  i_6 = t;
  t = SSLsetAnnotations(i_6, b_89);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL;
  b_90 = t;
  if(match_cons(t, sym__2))
    {
      c_90 = ATgetArgument(t, 0);
      e_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_90;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_90 = ATgetFirst((ATermList) t);
      g_90 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_27 = t;
        int x_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_90(c_90, e_90, b_90, t);
            ;
            LocalPopChoice(x_27);
          }
        else
          {
            t = v_27;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_90), f_90), g_90);
          }
      }
    }
  else
    {
      t = r_90(c_90, e_90, b_90, t);
    }
  return(t);
}
ATerm r_90 (ATerm f_89, ATerm g_89, ATerm h_89, ATerm t)
{
  ATerm j_89 = NULL,m_89 = NULL,k_6 = NULL,p_89 = NULL,q_89 = NULL,s_89 = NULL,t_89 = NULL;
  t = SSLgetAnnotations(h_89);
  j_89 = t;
  t = g_89;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_89 = ATgetFirst((ATermList) t);
      t_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_89;
  if(match_cons(t, sym__2))
    {
      q_89 = ATgetArgument(t, 0);
      s_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_89;
        if((q_89 != t))
          {
            _fail(t);
          }
        t = t_89;
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = g_89;
        t = x_8(q_89, s_89, t_89, t);
      }
    m_89 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_89, m_89);
    k_6 = t;
    t = SSLsetAnnotations(k_6, j_89);
  }
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm q_90 = NULL;
  if(match_cons(t, sym__2))
    {
      q_90 = ATgetArgument(t, 0);
      if((q_90 != ATgetArgument(t, 1)))
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
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_6, d_6, e_6, t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm l_90 = NULL,m_90 = NULL,n_90 = NULL;
        l_90 = t;
        if(match_cons(t, sym__2))
          {
            m_90 = ATgetArgument(t, 0);
            n_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_90;
        t = v_8(f_6, m_90, n_90, t);
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
  ATerm r_45 = NULL,s_45 = NULL;
  if(match_cons(t, sym__2))
    {
      r_45 = ATgetArgument(t, 0);
      s_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(p_6, r_45, s_45, t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm t_45 = NULL;
  if(match_cons(t, sym__2))
    {
      t_45 = ATgetArgument(t, 0);
      if((t_45 != ATgetArgument(t, 1)))
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
  ATerm i_46 = NULL,j_46 = NULL;
  if(match_cons(t, sym__2))
    {
      i_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(u_6, i_46, j_46, t);
  return(t);
}
ATerm u_6 (ATerm t)
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
ATerm free_vars_3_0 (ATerm t_113 (ATerm), ATerm u_113 (ATerm), ATerm v_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_91 (ATerm t)
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_113(t);
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        {
          ATerm g_28 = t;
          int h_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_90 = NULL,u_90 = NULL,m_45 = NULL,n_45 = NULL;
              t_90 = t;
              t = u_113(t);
              u_90 = t;
              t = t_90;
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm w_90 = NULL;
                  t = f_91(t);
                  w_90 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_90, u_90);
                  t = diff_0_0(t);
                  return(t);
                }
                t = v_113(h_6, f_91, l_6, t);
                n_45 = t;
                t = SSL_explode_term(n_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_28 = ATgetArgument(t, 0);
                    m_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = m_45;
                t = foldr_3_0(m_6, n_6, _id, t);
              }
              ;
              LocalPopChoice(h_28);
            }
          else
            {
              t = g_28;
              {
                ATerm v_45 = NULL,z_45 = NULL;
                z_45 = t;
                t = SSL_explode_term(z_45);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_28 = ATgetArgument(t, 0);
                    v_45 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_45;
                t = foldr_3_0(q_6, s_6, f_91, t);
              }
            }
        }
      }
    return(t);
  }
  t = f_91(t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm h_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_47);
  return(t);
}
ATerm x_6 (ATerm t)
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
        ATerm p_47 = NULL,q_47 = NULL,t_47 = NULL,u_47 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_47 = ATgetArgument(t, 0);
            t = t_47;
            t = free_vars_3_0(a_7, c_7, tboundin_3_0, t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                t_47 = ATgetArgument(t, 0);
                u_47 = ATgetArgument(t, 1);
                p_47 = ATgetArgument(t, 2);
                q_47 = ATgetArgument(t, 3);
                t = p_47;
                t = map_1_0(i_7, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    t_47 = ATgetArgument(t, 0);
                    u_47 = ATgetArgument(t, 1);
                    p_47 = ATgetArgument(t, 2);
                    q_47 = ATgetArgument(t, 3);
                    t = p_47;
                    t = map_1_0(j_7, t);
                  }
                else
                  {
                    if(match_cons(t, sym_Matrix_2))
                      {
                        t_47 = ATgetArgument(t, 0);
                        u_47 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = t_47;
                  }
              }
          }
      }
    }
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm z_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_47);
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            ;
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            {
              ATerm c_48 = NULL,d_48 = NULL,f_48 = NULL,h_48 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  c_48 = ATgetArgument(t, 0);
                  d_48 = ATgetArgument(t, 1);
                  f_48 = ATgetArgument(t, 2);
                  h_48 = ATgetArgument(t, 3);
                  t = f_48;
                  t = map_1_0(g_7, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_48 = ATgetArgument(t, 0);
                      d_48 = ATgetArgument(t, 1);
                      f_48 = ATgetArgument(t, 2);
                      h_48 = ATgetArgument(t, 3);
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
  ATerm o_48 = NULL;
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_48 = ATgetArgument(t, 0);
          {
            ATerm s_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_28);
      t = o_48;
    }
  else
    {
      t = q_28;
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
ATerm h_7 (ATerm t)
{
  ATerm x_48 = NULL;
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_48 = ATgetArgument(t, 0);
          {
            ATerm v_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_28);
      t = x_48;
    }
  else
    {
      t = t_28;
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
ATerm i_7 (ATerm t)
{
  ATerm m_49 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_49 = ATgetArgument(t, 0);
          {
            ATerm y_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_28);
      t = m_49;
    }
  else
    {
      t = w_28;
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
  ATerm l_50 = NULL;
  ATerm z_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_50 = ATgetArgument(t, 0);
          {
            ATerm b_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_29);
      t = l_50;
    }
  else
    {
      t = z_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_50;
    }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm s_50 = NULL;
  if(match_cons(t, sym__2))
    {
      s_50 = ATgetArgument(t, 0);
      if((s_50 != ATgetArgument(t, 1)))
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
  t = term_c_29;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_50 = ATgetFirst((ATermList) t);
      u_50 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,z_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      if(match_cons(d_29, sym__2))
        {
          v_50 = ATgetArgument(d_29, 0);
          w_50 = ATgetArgument(d_29, 1);
        }
      else
        _fail(t);
      {
        ATerm e_29 = ATgetArgument(t, 1);
        if(match_cons(e_29, sym__2))
          {
            x_50 = ATgetArgument(e_29, 0);
            z_50 = ATgetArgument(e_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_50), v_50), (ATerm) ATinsert(CheckATermList(z_50), w_50));
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm a_51 = NULL;
  a_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, a_51, term_g_24), (ATerm) ATmakeAppl(sym_Var_1, a_51));
  return(t);
}
ATerm RowLet_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL;
  r_94 = t;
  if(match_cons(t, sym_Row_2))
    {
      s_94 = ATgetArgument(t, 0);
      t_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_29 = t;
    int h_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_46 = NULL,x_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
        t = t_94;
        {
          ATerm j_29 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_29;
            }
          t = new_0_0(t);
          u_46 = t;
          t = t_94;
          t = free_vars_3_0(w_6, x_6, tvars_matrix_boundin_3_0, t);
          d_47 = t;
          t = t_0(t);
          c_47 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_47, c_47);
          t = p_8(p_7, d_47, c_47, t);
          t = genzip_4_0(q_7, r_7, x_7, z_7, t);
          if(match_cons(t, sym__2))
            {
              x_46 = ATgetArgument(t, 0);
              b_47 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, u_46, (ATerm)ATempty, x_46, t_94)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, s_94, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_46), (ATerm)ATempty, b_47)));
        }
        ;
        LocalPopChoice(h_29);
      }
    else
      {
        t = f_29;
        t = t_94;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, s_94, t_94));
      }
  }
  return(t);
}
ATerm a_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_29;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm g_95 = NULL,k_95 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_95 = ATgetFirst((ATermList) t);
      k_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_95, k_95);
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm l_95 = NULL,m_95 = NULL,o_95 = NULL,p_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      if(match_cons(k_29, sym__2))
        {
          l_95 = ATgetArgument(k_29, 0);
          m_95 = ATgetArgument(k_29, 1);
        }
      else
        _fail(t);
      {
        ATerm l_29 = ATgetArgument(t, 1);
        if(match_cons(l_29, sym__2))
          {
            o_95 = ATgetArgument(l_29, 0);
            p_95 = ATgetArgument(l_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_95), l_95), (ATerm) ATinsert(CheckATermList(p_95), m_95));
  return(t);
}
ATerm z_8 (ATerm t_76, ATerm s_76, ATerm t)
{
  ATerm x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,f_95 = NULL,o_6 = NULL;
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
    f_95 = t;
    if(match_cons(t, sym__2))
      {
        a_95 = ATgetArgument(t, 0);
        b_95 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_95);
    z_94 = t;
    t = a_95;
    t = concat_0_0(t);
    c_95 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_95, b_95);
    o_6 = t;
    t = SSLsetAnnotations(o_6, z_94);
    if(match_cons(t, sym__2))
      {
        x_94 = ATgetArgument(t, 0);
        y_94 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Let_2, x_94, (ATerm) ATmakeAppl(sym_Scope_2, t_76, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_m_29))), (ATerm) ATmakeAppl(sym_Matrix_1, y_94))));
  }
  return(t);
}
ATerm a_9 (ATerm a_111 (ATerm), ATerm f_44, ATerm d_44, ATerm t)
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL;
  w_95 = t;
  t = a_111(t);
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_95, f_44, d_44);
  t = f_11(q_95, f_44, d_44, t);
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_95 = NULL;
        t = term_p_29;
        z_95 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_95, term_p_29);
        t = e_11(q_95, z_95, t);
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_95 = ATgetFirst((ATermList) t);
        s_95 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_29;
    x_95 = t;
    t = (ATerm) ATinsert(CheckATermList(s_95), (ATerm) ATinsert(CheckATermList(r_95), f_44));
    y_95 = t;
    t = SSL_table_put(q_95, x_95, y_95);
    t = w_95;
  }
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm q_29 = ATgetArgument(t, 0);
      if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
        {
          ATerm r_29 = ATgetFirst((ATermList) q_29);
          if(match_cons(r_29, sym_As_2))
            {
              ATerm s_29 = ATgetArgument(r_29, 0);
              ATerm t_29 = ATgetArgument(r_29, 1);
              if(!(match_cons(t_29, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          d_96 = (ATerm) ATgetNext((ATermList) q_29);
        }
      else
        _fail(t);
      e_96 = ATgetArgument(t, 1);
      f_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, d_96, e_96, f_96);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm c_96 = NULL;
  t = filter_1_0(w_8, t);
  c_96 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, c_96);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm w_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, w_97), term_u_29);
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL;
  if(match_cons(t, sym__2))
    {
      g_53 = ATgetArgument(t, 0);
      h_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(g_53, h_53, t);
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm MatchCons_2_0 (ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t)
{
  ATerm l_97 = NULL,u_97 = NULL,v_97 = NULL;
  l_97 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = l_97;
      t = s_0(t);
      t = map_1_0(y_8, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          u_97 = ATgetArgument(t, 0);
          t = l_97;
          t = r_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((u_97 != ATgetArgument(t, 0)))
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
              u_97 = ATgetArgument(t, 0);
              t = l_97;
              t = r_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((u_97 != ATgetArgument(t, 0)))
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
                  u_97 = ATgetArgument(t, 0);
                  t = l_97;
                  t = r_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((u_97 != ATgetArgument(t, 0)))
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
                  ATerm d_53 = NULL,e_53 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      u_97 = ATgetArgument(t, 0);
                      v_97 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_97;
                  t = r_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((u_97 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      d_53 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_97;
                  t = foldr_3_0(b_9, f_9, h_9, t);
                  e_53 = t;
                  t = d_53;
                  if((e_53 != t))
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
ATerm c_9 (ATerm a_127 (ATerm), ATerm g_75, ATerm d_75, ATerm e_75, ATerm f_75, ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL;
  t = g_75;
  t = a_127(t);
  c_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_98, e_75);
  t = conc_0_0(t);
  d_98 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, d_75, d_98, f_75);
  return(t);
}
ATerm d_9 (ATerm z_74, ATerm a_75, ATerm b_75, ATerm t)
{
  ATerm i_98 = NULL;
  t = z_74;
  {
    ATerm j_9 (ATerm t)
    {
      ATerm k_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL;
      ATerm l_9 (ATerm t)
      {
        ATerm n_9 (ATerm t)
        {
          t = a_75;
          return(t);
        }
        ATerm p_9 (ATerm t)
        {
          t = b_75;
          return(t);
        }
        t = MatchCons_2_0(n_9, p_9, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm v_29 = ATgetArgument(t, 0);
          if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
            {
              ATerm x_29 = ATgetFirst((ATermList) v_29);
              if(match_cons(x_29, sym_As_2))
                {
                  ATerm y_29 = ATgetArgument(x_29, 0);
                  k_98 = ATgetArgument(x_29, 1);
                }
              else
                _fail(t);
              s_98 = (ATerm) ATgetNext((ATermList) v_29);
            }
          else
            _fail(t);
          t_98 = ATgetArgument(t, 1);
          u_98 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = c_9(l_9, k_98, s_98, t_98, u_98, t);
      return(t);
    }
    t = filter_1_0(j_9, t);
    i_98 = t;
    t = (ATerm) ATmakeAppl(sym_Alt_3, a_75, b_75, (ATerm) ATmakeAppl(sym_Matrix_1, i_98));
  }
  return(t);
}
ATerm filter_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm i_99 = NULL,k_99 = NULL,l_99 = NULL;
  i_99 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_99;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_99 = ATgetFirst((ATermList) t);
          l_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_53 = NULL,t_53 = NULL,u_53 = NULL,r_6 = NULL;
            t = SSLgetAnnotations(i_99);
            o_53 = t;
            t = k_99;
            t = e_111(t);
            t_53 = t;
            t = l_99;
            t = filter_1_0(e_111, t);
            u_53 = t;
            t = (ATerm) ATinsert(CheckATermList(u_53), t_53);
            r_6 = t;
            t = SSLsetAnnotations(r_6, o_53);
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = l_99;
            t = filter_1_0(e_111, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm h_100 (ATerm t)
  {
    ATerm e_100 = NULL,f_100 = NULL,g_100 = NULL;
    t = w_105(t);
    e_100 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_100;
      }
    else
      {
        ATerm k_54 = NULL,n_54 = NULL,t_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_100 = ATgetFirst((ATermList) t);
            g_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_100);
        k_54 = t;
        t = g_100;
        t = h_100(t);
        n_54 = t;
        t = (ATerm) ATinsert(CheckATermList(n_54), f_100);
        t_6 = t;
        t = SSLsetAnnotations(t_6, k_54);
      }
    return(t);
  }
  t = h_100(t);
  return(t);
}
ATerm q_9 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm h_101 = NULL,i_101 = NULL;
  if(match_cons(t, sym__2))
    {
      h_101 = ATgetArgument(t, 0);
      i_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(h_101, i_101, t);
  return(t);
}
ATerm u_9 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm v_9 (ATerm t)
{
  ATerm j_101 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm b_30 = ATgetArgument(t, 0);
      if(match_cons(b_30, sym_Off_1))
        {
          j_101 = ATgetArgument(b_30, 0);
        }
      else
        _fail(t);
      {
        ATerm c_30 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, j_101);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL;
  p_100 = t;
  if(match_cons(t, sym_Row_3))
    {
      q_100 = ATgetArgument(t, 0);
      {
        ATerm d_30 = ATgetArgument(t, 1);
      }
      {
        ATerm e_30 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = q_100;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_100 = ATgetFirst((ATermList) t);
      {
        ATerm f_30 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_100;
  if(match_cons(t, sym_As_2))
    {
      ATerm g_30 = ATgetArgument(t, 0);
      t_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_100;
  if(match_cons(t, sym_Str_1))
    {
      u_100 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, u_100), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          u_100 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, u_100), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              u_100 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, u_100), (ATerm) ATempty);
            }
          else
            {
              ATerm e_101 = NULL,f_101 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  u_100 = ATgetArgument(t, 0);
                  v_100 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_100;
              t = foldr_3_0(q_9, r_9, u_9, t);
              e_101 = t;
              t = v_100;
              t = map_1_0(v_9, t);
              f_101 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, u_100, e_101), f_101);
            }
        }
    }
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm m_101 = NULL,n_101 = NULL,q_101 = NULL;
  q_101 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_101 = ATgetFirst((ATermList) t);
      n_101 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_101 = NULL;
            t = n_101;
            {
              ATerm x_9 (ATerm t)
              {
                ATerm j_30 = t;
                if((PushChoice() == 0))
                  {
                    if((m_101 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_30;
                  }
                return(t);
              }
              t = filter_1_0(x_9, t);
              x_101 = t;
              t = (ATerm) ATinsert(CheckATermList(x_101), m_101);
            }
            ;
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            t = q_101;
          }
      }
    }
  else
    {
      t = q_101;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(w_9, t);
  return(t);
}
ATerm c_105 (ATerm u_102, ATerm t)
{
  ATerm v_102 = NULL;
  t = SSL_explode_string(u_102);
  {
    ATerm n_30 = t;
    int p_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_105 (ATerm t)
        {
          ATerm x_103 = NULL,z_103 = NULL,c_104 = NULL;
          x_103 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_103 = ATgetFirst((ATermList) t);
              c_104 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm q_30 = t;
            int t_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_54 = NULL,z_54 = NULL,v_6 = NULL;
                t = SSLgetAnnotations(x_103);
                w_54 = t;
                t = c_104;
                t = f_105(t);
                z_54 = t;
                t = (ATerm) ATinsert(CheckATermList(z_54), z_103);
                v_6 = t;
                t = SSLsetAnnotations(v_6, w_54);
                ;
                LocalPopChoice(t_30);
              }
            else
              {
                t = q_30;
                {
                  ATerm l_55 = NULL,y_6 = NULL;
                  t = SSLgetAnnotations(x_103);
                  l_55 = t;
                  t = z_103;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, z_103);
                  y_6 = t;
                  t = SSLsetAnnotations(y_6, l_55);
                }
              }
          }
          return(t);
        }
        t = f_105(t);
        ;
        LocalPopChoice(p_30);
      }
    else
      {
        t = n_30;
        t = (ATerm) ATempty;
      }
    v_102 = t;
    t = SSL_implode_string(v_102);
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm e_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL,p_104 = NULL,a_105 = NULL;
  a_105 = t;
  {
    ATerm u_30 = t;
    int v_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_104 = ATgetFirst((ATermList) t);
            {
              ATerm w_30 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_30);
        t = e_104;
        {
          ATerm x_30 = t;
          int y_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  i_104 = ATgetArgument(t, 0);
                  {
                    ATerm a_31 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm b_31 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_30);
              t = i_104;
              {
                ATerm c_31 = t;
                int d_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        j_104 = ATgetFirst((ATermList) t);
                        {
                          ATerm e_31 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_31);
                    t = j_104;
                    {
                      ATerm f_31 = t;
                      int g_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              k_104 = ATgetArgument(t, 0);
                              {
                                ATerm h_31 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(g_31);
                          t = k_104;
                          if(match_cons(t, sym_Off_1))
                            {
                              p_104 = ATgetArgument(t, 0);
                              t = p_104;
                            }
                          else
                            {
                              t = c_105(a_105, t);
                            }
                        }
                      else
                        {
                          t = f_31;
                          t = c_105(a_105, t);
                        }
                    }
                  }
                else
                  {
                    t = c_31;
                    t = c_105(a_105, t);
                  }
              }
            }
          else
            {
              t = x_30;
              t = c_105(a_105, t);
            }
        }
      }
    else
      {
        t = u_30;
        t = c_105(a_105, t);
      }
  }
  return(t);
}
ATerm a_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_31 = ATgetArgument(t, 0);
      ATerm k_31 = ATgetArgument(t, 1);
      if(((ATgetType(k_31) != AT_LIST) || !(ATisEmpty(k_31))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm z_105 = NULL,a_106 = NULL,b_106 = NULL;
  if(match_cons(t, sym__2))
    {
      z_105 = ATgetArgument(t, 0);
      {
        ATerm q_31 = ATgetArgument(t, 1);
        if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
          {
            a_106 = ATgetFirst((ATermList) q_31);
            b_106 = (ATerm) ATgetNext((ATermList) q_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_105, a_106), (ATerm) ATmakeAppl(sym__2, z_105, b_106));
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL;
  if(match_cons(t, sym__2))
    {
      c_106 = ATgetArgument(t, 0);
      d_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_106), c_106);
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL;
  if(match_cons(t, sym__2))
    {
      g_106 = ATgetArgument(t, 0);
      {
        ATerm r_31 = ATgetArgument(t, 1);
        if(match_cons(r_31, sym__2))
          {
            h_106 = ATgetArgument(r_31, 0);
            i_106 = ATgetArgument(r_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_9(g_106, h_106, i_106, t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm g_9 (ATerm m_76, ATerm t)
{
  ATerm k_105 = NULL,p_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL,t_105 = NULL,y_105 = NULL;
  t = m_76;
  t = get_path_0_0(t);
  k_105 = t;
  t = m_76;
  t = outedges_0_0(t);
  p_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_76, p_105);
  t = genzip_4_0(a_10, i_10, m_10, n_10, t);
  q_105 = t;
  t = m_76;
  t = default_state_0_0(t);
  r_105 = t;
  t = new_0_0(t);
  s_105 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, m_76);
  t_105 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_31, s_105);
  y_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, m_76), (ATerm) ATmakeAppl(sym_Defined_2, term_v_31, s_105));
  t = a_9(o_10, t_105, y_105, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, s_105, (ATerm)ATmakeAppl(sym_Var_1, k_105), q_105, r_105);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm m_106 = NULL,n_106 = NULL,p_106 = NULL,q_106 = NULL,r_106 = NULL,s_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL,c_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL,f_7 = NULL,e_7 = NULL,d_7 = NULL;
  i_107 = t;
  if(match_cons(t, sym_Row_3))
    {
      n_106 = ATgetArgument(t, 0);
      p_106 = ATgetArgument(t, 1);
      q_106 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_107);
  m_106 = t;
  t = n_106;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_106 = ATgetFirst((ATermList) t);
      x_106 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_106);
  r_106 = t;
  t = s_106;
  if(match_cons(t, sym_As_2))
    {
      c_107 = ATgetArgument(t, 0);
      f_107 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_106);
  z_106 = t;
  t = f_107;
  {
    ATerm x_31 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_31;
      }
    g_107 = t;
    t = (ATerm) ATmakeAppl(sym_As_2, c_107, g_107);
    d_7 = t;
    t = SSLsetAnnotations(d_7, z_106);
    h_107 = t;
    t = (ATerm) ATinsert(CheckATermList(x_106), h_107);
    e_7 = t;
    t = SSLsetAnnotations(e_7, r_106);
    y_106 = t;
    t = (ATerm) ATmakeAppl(sym_Row_3, y_106, p_106, q_106);
    f_7 = t;
    t = SSLsetAnnotations(f_7, m_106);
  }
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm j_107 = NULL,p_107 = NULL,s_107 = NULL,t_107 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      j_107 = ATgetArgument(t, 0);
      {
        ATerm y_31 = ATgetArgument(t, 1);
        if(((ATgetType(y_31) == AT_LIST) && !(ATisEmpty(y_31))))
          {
            p_107 = ATgetFirst((ATermList) y_31);
            s_107 = (ATerm) ATgetNext((ATermList) y_31);
          }
        else
          _fail(t);
      }
      t_107 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(j_107), p_107), s_107, t_107);
  return(t);
}
ATerm i_9 (ATerm c_76, ATerm t)
{
  ATerm l_106 = NULL;
  t = c_76;
  {
    ATerm z_31 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(p_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_31;
      }
    t = c_76;
    t = map_1_0(s_10, t);
    l_106 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, l_106);
  }
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm v_107 = NULL,w_107 = NULL,z_107 = NULL,a_108 = NULL,b_108 = NULL,c_108 = NULL,d_108 = NULL,f_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL,r_108 = NULL,s_108 = NULL,n_7 = NULL,m_7 = NULL,k_7 = NULL;
  s_108 = t;
  if(match_cons(t, sym_Row_3))
    {
      w_107 = ATgetArgument(t, 0);
      z_107 = ATgetArgument(t, 1);
      a_108 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_108);
  v_107 = t;
  t = z_107;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_108 = ATgetFirst((ATermList) t);
      f_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_107);
  c_108 = t;
  t = d_108;
  if(match_cons(t, sym_As_2))
    {
      h_108 = ATgetArgument(t, 0);
      i_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_108);
  g_108 = t;
  t = i_108;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, h_108, i_108);
  k_7 = t;
  t = SSLsetAnnotations(k_7, g_108);
  r_108 = t;
  t = (ATerm) ATinsert(CheckATermList(f_108), r_108);
  m_7 = t;
  t = SSLsetAnnotations(m_7, c_108);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_32 = ATgetFirst((ATermList) t);
      b_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, w_107, b_108, a_108);
  n_7 = t;
  t = SSLsetAnnotations(n_7, v_107);
  return(t);
}
ATerm k_9 (ATerm a_76, ATerm t)
{
  ATerm u_107 = NULL;
  t = a_76;
  t = map_1_0(t_10, t);
  u_107 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, u_107);
  return(t);
}
ATerm repeat_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm z_108 (ATerm t)
  {
    ATerm c_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_115(t);
        t = z_108(t);
        ;
        LocalPopChoice(d_32);
      }
    else
      {
        t = c_32;
      }
    return(t);
  }
  t = z_108(t);
  return(t);
}
ATerm m_9 (ATerm s_44, ATerm t_44, ATerm t)
{
  ATerm b_109 = NULL,c_109 = NULL;
  c_109 = t;
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_44, t_44);
        t = e_11(s_44, t_44, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_32 = ATgetFirst((ATermList) t);
            b_109 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_32);
        t = SSL_table_put(s_44, t_44, b_109);
        t = (ATerm) ATmakeAppl(sym__3, s_44, t_44, b_109);
      }
    else
      {
        t = e_32;
        t = SSL_table_remove(s_44, t_44);
        t = (ATerm) ATmakeAppl(sym__2, s_44, t_44);
      }
    t = c_109;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm d_109 = NULL,f_109 = NULL,h_109 = NULL,i_109 = NULL,l_109 = NULL;
  i_109 = t;
  t = x_110(t);
  h_109 = t;
  {
    ATerm h_32 = t;
    int i_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_109 = NULL;
        t = term_p_29;
        m_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_109, term_p_29);
        t = e_11(h_109, m_109, t);
        ;
        LocalPopChoice(i_32);
      }
    else
      {
        t = h_32;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_109 = ATgetFirst((ATermList) t);
        d_109 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_p_29;
    l_109 = t;
    t = SSL_table_put(h_109, l_109, d_109);
    t = f_109;
    {
      ATerm u_10 (ATerm t)
      {
        ATerm n_109 = NULL;
        n_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_109, n_109);
        t = m_9(h_109, n_109, t);
        return(t);
      }
      t = map_1_0(u_10, t);
      t = i_109;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm t)
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_101(t);
      t = u_101(t);
      ;
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      t = u_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  ATerm u_109 = NULL,v_109 = NULL,w_109 = NULL,y_109 = NULL,z_109 = NULL;
  v_109 = t;
  t = w_110(t);
  u_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_109, term_p_29);
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_110 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_32 = ATgetArgument(t, 0);
            ATerm p_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_p_29;
        d_110 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_109, term_p_29);
        t = e_11(u_109, d_110, t);
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        t = (ATerm) ATempty;
      }
    w_109 = t;
    t = term_p_29;
    y_109 = t;
    t = (ATerm) ATinsert(CheckATermList(w_109), (ATerm) ATempty);
    z_109 = t;
    t = SSL_table_put(u_109, y_109, z_109);
    t = v_109;
  }
  return(t);
}
ATerm scope_2_0 (ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t)
{
  ATerm d_11 (ATerm t)
  {
    t = end_scope_1_0(y_110, t);
    return(t);
  }
  t = begin_scope_1_0(y_110, t);
  t = restore_always_2_0(z_110, d_11, t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm f_112 (ATerm t)
  {
    ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL;
    z_111 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_111 = ATgetFirst((ATermList) t);
        y_111 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_56 = NULL,m_56 = NULL,u_7 = NULL;
          t = SSLgetAnnotations(z_111);
          j_56 = t;
          t = y_111;
          t = f_112(t);
          m_56 = t;
          t = (ATerm) ATinsert(CheckATermList(m_56), x_111);
          u_7 = t;
          t = SSLsetAnnotations(u_7, j_56);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_111;
        t = d_105(t);
      }
    return(t);
  }
  t = f_112(t);
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
      ATerm g_11 (ATerm t)
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
      t = at_end_1_0(g_11, t);
    }
  return(t);
}
ATerm w_112 (ATerm o_112, ATerm t)
{
  ATerm p_112 = NULL;
  t = SSL_explode_term(o_112);
  if(match_cons(t, sym__2))
    {
      ATerm q_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_112;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_112 = NULL,s_112 = NULL,t_112 = NULL;
  t_112 = t;
  if(match_cons(t, sym__2))
    {
      r_112 = ATgetArgument(t, 0);
      s_112 = ATgetArgument(t, 1);
      {
        ATerm r_32 = t;
        int s_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_11 (ATerm t)
            {
              t = s_112;
              return(t);
            }
            t = r_112;
            t = at_end_1_0(i_11, t);
            ;
            LocalPopChoice(s_32);
          }
        else
          {
            t = r_32;
            t = w_112(t_112, t);
          }
      }
    }
  else
    {
      t = w_112(t_112, t);
    }
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm s_114 = NULL;
  if(match_cons(t, sym__2))
    {
      s_114 = ATgetArgument(t, 0);
      if((s_114 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_11 (ATerm t)
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
ATerm l_11 (ATerm t)
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
ATerm n_11 (ATerm t)
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
ATerm o_11 (ATerm t)
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
ATerm p_11 (ATerm t)
{
  ATerm o_116 = NULL;
  if(match_cons(t, sym__2))
    {
      o_116 = ATgetArgument(t, 0);
      if((o_116 != ATgetArgument(t, 1)))
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
  ATerm r_113 = NULL,y_113 = NULL,z_113 = NULL,b_114 = NULL,d_114 = NULL,e_114 = NULL,f_114 = NULL,g_114 = NULL,h_114 = NULL,i_114 = NULL,j_114 = NULL,k_114 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      d_114 = ATgetArgument(t, 0);
      k_114 = ATgetArgument(t, 1);
      t = d_114;
      if(match_cons(t, sym_Matrix_2))
        {
          e_114 = ATgetArgument(t, 0);
          f_114 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_114;
      if(match_cons(t, sym_Choice_2))
        {
          z_113 = ATgetArgument(t, 0);
          b_114 = ATgetArgument(t, 1);
          {
            ATerm q_114 = NULL,r_114 = NULL;
            t = z_113;
            if(match_cons(t, sym_Matrix_2))
              {
                r_113 = ATgetArgument(t, 0);
                y_113 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, e_114, r_113);
            t = l_10(j_11, e_114, r_113, t);
            q_114 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_114, y_113);
            t = conc_0_0(t);
            r_114 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, q_114, r_114), b_114);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              z_113 = ATgetArgument(t, 0);
              b_114 = ATgetArgument(t, 1);
              {
                ATerm z_114 = NULL,a_115 = NULL;
                t = z_113;
                if(match_cons(t, sym_Matrix_2))
                  {
                    r_113 = ATgetArgument(t, 0);
                    y_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, e_114, r_113);
                t = l_10(k_11, e_114, r_113, t);
                z_114 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_114, y_113);
                t = conc_0_0(t);
                a_115 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, z_114, a_115), b_114);
              }
            }
          else
            {
              ATerm g_115 = NULL,h_115 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  z_113 = ATgetArgument(t, 0);
                  b_114 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, e_114, z_113);
              t = l_10(l_11, e_114, z_113, t);
              g_115 = t;
              t = (ATerm) ATmakeAppl(sym__2, f_114, b_114);
              t = conc_0_0(t);
              h_115 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, g_115, h_115);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          d_114 = ATgetArgument(t, 0);
          k_114 = ATgetArgument(t, 1);
          t = d_114;
          if(match_cons(t, sym_Matrix_2))
            {
              e_114 = ATgetArgument(t, 0);
              f_114 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_114;
          if(match_cons(t, sym_LChoice_2))
            {
              z_113 = ATgetArgument(t, 0);
              b_114 = ATgetArgument(t, 1);
              {
                ATerm o_115 = NULL,r_115 = NULL;
                t = z_113;
                if(match_cons(t, sym_Matrix_2))
                  {
                    r_113 = ATgetArgument(t, 0);
                    y_113 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, e_114, r_113);
                t = l_10(n_11, e_114, r_113, t);
                o_115 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_114, y_113);
                t = conc_0_0(t);
                r_115 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, o_115, r_115), b_114);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  z_113 = ATgetArgument(t, 0);
                  b_114 = ATgetArgument(t, 1);
                  {
                    ATerm z_115 = NULL,a_116 = NULL;
                    t = z_113;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        r_113 = ATgetArgument(t, 0);
                        y_113 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, e_114, r_113);
                    t = l_10(o_11, e_114, r_113, t);
                    z_115 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_114, y_113);
                    t = conc_0_0(t);
                    a_116 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, z_115, a_116), b_114);
                  }
                }
              else
                {
                  ATerm m_116 = NULL,n_116 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      z_113 = ATgetArgument(t, 0);
                      b_114 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, e_114, z_113);
                  t = l_10(p_11, e_114, z_113, t);
                  m_116 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_114, b_114);
                  t = conc_0_0(t);
                  n_116 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, m_116, n_116);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              d_114 = ATgetArgument(t, 0);
              k_114 = ATgetArgument(t, 1);
              {
                ATerm s_116 = NULL;
                t = k_114;
                if(match_cons(t, sym_Matrix_2))
                  {
                    z_113 = ATgetArgument(t, 0);
                    b_114 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_114;
                {
                  ATerm q_11 (ATerm t)
                  {
                    ATerm t_116 = NULL,u_116 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        t_116 = ATgetArgument(t, 0);
                        u_116 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, t_116, (ATerm) ATmakeAppl(sym_Scope_2, d_114, u_116));
                    return(t);
                  }
                  t = map_1_0(q_11, t);
                  s_116 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, z_113, s_116);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  d_114 = ATgetArgument(t, 0);
                  k_114 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_114;
              if(match_cons(t, sym_Matrix_2))
                {
                  e_114 = ATgetArgument(t, 0);
                  f_114 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_114;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_114 = ATgetFirst((ATermList) t);
                  j_114 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = g_114;
              if(match_cons(t, sym_Row_2))
                {
                  h_114 = ATgetArgument(t, 0);
                  i_114 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_114;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, e_114, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, h_114, (ATerm) ATmakeAppl(sym_Seq_2, i_114, k_114))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm n_98 (ATerm), ATerm t)
{
  ATerm r_11 (ATerm t)
  {
    t = bottomup_1_0(n_98, t);
    return(t);
  }
  t = SRTS_all(r_11, t);
  t = n_98(t);
  return(t);
}
ATerm k_10 (ATerm d_107 (ATerm), ATerm e_107 (ATerm), ATerm i_39, ATerm h_39, ATerm t)
{
  t = e_107(t);
  {
    ATerm s_11 (ATerm t)
    {
      ATerm z_116 = NULL;
      z_116 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_39, z_116);
      t = d_107(t);
      return(t);
    }
    t = fetch_1_0(s_11, t);
    t = h_39;
  }
  return(t);
}
ATerm l_10 (ATerm a_107 (ATerm), ATerm e_39, ATerm d_39, ATerm t)
{
  ATerm p_117 (ATerm t)
  {
    ATerm k_117 = NULL,l_117 = NULL,m_117 = NULL;
    k_117 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_39;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_117 = ATgetFirst((ATermList) t);
            m_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_32 = t;
          int u_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_117;
              {
                ATerm v_11 (ATerm t)
                {
                  t = d_39;
                  return(t);
                }
                t = k_10(a_107, v_11, l_117, m_117, t);
                t = p_117(t);
              }
              ;
              LocalPopChoice(u_32);
            }
          else
            {
              t = t_32;
              {
                ATerm v_56 = NULL,y_56 = NULL,b_8 = NULL;
                t = SSLgetAnnotations(k_117);
                v_56 = t;
                t = m_117;
                t = p_117(t);
                y_56 = t;
                t = (ATerm) ATinsert(CheckATermList(y_56), l_117);
                b_8 = t;
                t = SSLsetAnnotations(b_8, v_56);
              }
            }
        }
      }
    return(t);
  }
  t = e_39;
  t = p_117(t);
  return(t);
}
ATerm foldr_3_0 (ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t)
{
  ATerm s_117 = NULL,t_117 = NULL,u_117 = NULL;
  s_117 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_117;
      t = q_109(t);
    }
  else
    {
      ATerm x_117 = NULL,y_117 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_117 = ATgetFirst((ATermList) t);
          u_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_117;
      t = s_109(t);
      x_117 = t;
      t = u_117;
      t = foldr_3_0(q_109, r_109, s_109, t);
      y_117 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_117, y_117);
      t = r_109(t);
    }
  return(t);
}
ATerm y_11 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm u_108 (ATerm), ATerm v_108 (ATerm), ATerm t)
{
  ATerm w_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_118 = NULL;
      t = u_108(t);
      b_118 = t;
      t = (ATerm) ATinsert(ATempty, b_118);
      ;
      LocalPopChoice(y_32);
    }
  else
    {
      t = w_32;
      {
        ATerm d_57 = NULL,e_57 = NULL;
        ATerm z_11 (ATerm t)
        {
          t = collect_om_2_0(u_108, v_108, t);
          return(t);
        }
        e_57 = t;
        t = SSL_explode_term(e_57);
        if(match_cons(t, sym__2))
          {
            ATerm z_32 = ATgetArgument(t, 0);
            d_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_57;
        t = foldr_3_0(y_11, v_108, z_11, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm h_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL;
  if(match_cons(t, sym_As_2))
    {
      k_118 = ATgetArgument(t, 0);
      m_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_118;
  if(match_cons(t, sym_Var_1))
    {
      l_118 = ATgetArgument(t, 0);
      t = m_118;
      if(match_cons(t, sym_As_2))
        {
          n_118 = ATgetArgument(t, 0);
          {
            ATerm a_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_118;
      if(match_cons(t, sym_Off_1))
        {
          h_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, l_118), (ATerm) ATmakeAppl(sym_Var_1, h_118)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          l_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_118;
      if(match_cons(t, sym_Var_1))
        {
          n_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, n_118), (ATerm) ATmakeAppl(sym_Var_1, l_118)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm f_119 = NULL,g_119 = NULL,h_119 = NULL,i_119 = NULL,j_119 = NULL,k_119 = NULL,l_119 = NULL;
  h_119 = t;
  if(match_cons(t, sym_As_2))
    {
      i_119 = ATgetArgument(t, 0);
      k_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_119;
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_33);
        t = k_119;
        if(match_cons(t, sym_As_2))
          {
            l_119 = ATgetArgument(t, 0);
            g_119 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_119;
        if(match_cons(t, sym_Off_1))
          {
            f_119 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, f_119), g_119);
      }
    else
      {
        t = b_33;
        if(match_cons(t, sym_Off_1))
          {
            j_119 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_119;
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_119;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_119;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_33 = ATgetFirst((ATermList) t);
                ATerm g_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_119;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, j_119), term_u_29);
      }
  }
  return(t);
}
ATerm b_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_29;
  return(t);
}
ATerm c_12 (ATerm t)
{
  ATerm c_120 = NULL,d_120 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_120 = ATgetFirst((ATermList) t);
      d_120 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_120, d_120);
  return(t);
}
ATerm d_12 (ATerm t)
{
  ATerm e_120 = NULL,f_120 = NULL,g_120 = NULL,h_120 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_33 = ATgetArgument(t, 0);
      if(match_cons(h_33, sym__2))
        {
          e_120 = ATgetArgument(h_33, 0);
          f_120 = ATgetArgument(h_33, 1);
        }
      else
        _fail(t);
      {
        ATerm i_33 = ATgetArgument(t, 1);
        if(match_cons(i_33, sym__2))
          {
            g_120 = ATgetArgument(i_33, 0);
            h_120 = ATgetArgument(i_33, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_120), e_120), (ATerm) ATinsert(CheckATermList(h_120), f_120));
  return(t);
}
ATerm e_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm i_120 = NULL,j_120 = NULL;
  if(match_cons(t, sym__2))
    {
      i_120 = ATgetArgument(t, 0);
      j_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(g_12, i_120, j_120, t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  ATerm l_120 = NULL;
  if(match_cons(t, sym__2))
    {
      l_120 = ATgetArgument(t, 0);
      if((l_120 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm n_120 = NULL;
  if(match_cons(t, sym__2))
    {
      n_120 = ATgetArgument(t, 0);
      if((n_120 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t)
{
  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL,y_119 = NULL,z_119 = NULL,a_120 = NULL;
  z_119 = t;
  a_120 = t;
  t = SSL_explode_term(a_120);
  if(match_cons(t, sym__2))
    {
      r_119 = ATgetArgument(t, 0);
      p_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_119);
  t_119 = t;
  t = p_119;
  t = genzip_4_0(b_12, c_12, d_12, x_107, t);
  if(match_cons(t, sym__2))
    {
      s_119 = ATgetArgument(t, 0);
      q_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(r_119, s_119);
  y_119 = t;
  t = SSLsetAnnotations(y_119, t_119);
  t = y_107(t);
  if(match_cons(t, sym__2))
    {
      u_119 = ATgetArgument(t, 0);
      v_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_119;
  t = foldr_2_0(e_12, f_12, t);
  x_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_119, x_119);
  t = l_10(h_12, v_119, x_119, t);
  w_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_119, w_119);
  return(t);
}
ATerm collect_split_2_0 (ATerm o_108 (ATerm), ATerm p_108 (ATerm), ATerm t)
{
  ATerm u_120 (ATerm t)
  {
    ATerm j_12 (ATerm t)
    {
      ATerm p_120 = NULL,q_120 = NULL,r_120 = NULL;
      r_120 = t;
      {
        ATerm j_33 = t;
        int k_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_108(t);
            ;
            LocalPopChoice(k_33);
          }
        else
          {
            t = j_33;
          }
        p_120 = t;
        t = r_120;
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
              t = (ATerm) ATempty;
            }
          q_120 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_120, q_120);
        }
      }
      return(t);
    }
    t = CollectSplit_2_0(u_120, j_12, t);
    return(t);
  }
  t = u_120(t);
  return(t);
}
ATerm genzip_4_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm t)
{
  ATerm b_121 (ATerm t)
  {
    ATerm o_33 = t;
    int q_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_102(t);
        ;
        LocalPopChoice(q_33);
      }
    else
      {
        t = o_33;
        {
          ATerm v_120 = NULL,w_120 = NULL,x_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL,e_8 = NULL;
          t = z_102(t);
          a_121 = t;
          if(match_cons(t, sym__2))
            {
              w_120 = ATgetArgument(t, 0);
              x_120 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_121);
          v_120 = t;
          t = w_120;
          t = b_103(t);
          y_120 = t;
          t = x_120;
          t = b_121(t);
          z_120 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_120, z_120);
          e_8 = t;
          t = SSLsetAnnotations(e_8, v_120);
          t = a_103(t);
        }
      }
    return(t);
  }
  t = b_121(t);
  return(t);
}
ATerm k_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_33 = ATgetArgument(t, 0);
      ATerm s_33 = ATgetArgument(t, 1);
      if(((ATgetType(s_33) != AT_LIST) || !(ATisEmpty(s_33))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_12 (ATerm t)
{
  ATerm e_121 = NULL,f_121 = NULL,g_121 = NULL,h_121 = NULL,i_121 = NULL;
  if(match_cons(t, sym__2))
    {
      e_121 = ATgetArgument(t, 0);
      {
        ATerm t_33 = ATgetArgument(t, 1);
        if(((ATgetType(t_33) == AT_LIST) && !(ATisEmpty(t_33))))
          {
            f_121 = ATgetFirst((ATermList) t_33);
            g_121 = (ATerm) ATgetNext((ATermList) t_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_u_17;
  i_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_121, term_u_17);
  t = c_11(e_121, i_121, t);
  h_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_121, f_121), (ATerm) ATmakeAppl(sym__2, h_121, g_121));
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm j_121 = NULL,k_121 = NULL;
  if(match_cons(t, sym__2))
    {
      j_121 = ATgetArgument(t, 0);
      k_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_121), j_121);
  return(t);
}
ATerm nzip0_1_0 (ATerm j_103 (ATerm), ATerm t)
{
  ATerm c_121 = NULL;
  c_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_29, c_121);
  t = genzip_4_0(k_12, n_12, o_12, j_103, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm p_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL;
  if(match_cons(t, sym_As_2))
    {
      r_121 = ATgetArgument(t, 0);
      t_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_121;
  if(match_cons(t, sym_Off_1))
    {
      s_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_121;
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm x_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_33);
        {
          ATerm y_33 = t;
          int z_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_12 (ATerm t)
              {
                ATerm a_122 = NULL,b_122 = NULL;
                if(match_cons(t, sym__2))
                  {
                    a_122 = ATgetArgument(t, 0);
                    b_122 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(s_121), a_122)), b_122);
                return(t);
              }
              t = t_121;
              t = nzip0_1_0(p_12, t);
              ;
              LocalPopChoice(z_33);
            }
          else
            {
              t = y_33;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, s_121), term_u_29);
            }
        }
      }
    else
      {
        t = v_33;
        if(match_cons(t, sym_As_2))
          {
            u_121 = ATgetArgument(t, 0);
            v_121 = ATgetArgument(t, 1);
            t = u_121;
            if(match_cons(t, sym_Var_1))
              {
                p_121 = ATgetArgument(t, 0);
                {
                  ATerm a_34 = t;
                  int c_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_12 (ATerm t)
                      {
                        ATerm f_122 = NULL,g_122 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            f_122 = ATgetArgument(t, 0);
                            g_122 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(s_121), f_122)), g_122);
                        return(t);
                      }
                      t = t_121;
                      t = nzip0_1_0(q_12, t);
                      ;
                      LocalPopChoice(c_34);
                    }
                  else
                    {
                      t = a_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, p_121), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, s_121), v_121));
                    }
                }
              }
            else
              {
                ATerm v_12 (ATerm t)
                {
                  ATerm m_122 = NULL,n_122 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      m_122 = ATgetArgument(t, 0);
                      n_122 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(s_121), m_122)), n_122);
                  return(t);
                }
                t = t_121;
                t = nzip0_1_0(v_12, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                u_121 = ATgetArgument(t, 0);
                v_121 = ATgetArgument(t, 1);
                {
                  ATerm d_34 = t;
                  int e_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_12 (ATerm t)
                      {
                        ATerm q_122 = NULL,r_122 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            q_122 = ATgetArgument(t, 0);
                            r_122 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(s_121), q_122)), r_122);
                        return(t);
                      }
                      t = t_121;
                      t = nzip0_1_0(w_12, t);
                      ;
                      LocalPopChoice(e_34);
                    }
                  else
                    {
                      t = d_34;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, s_121), (ATerm) ATmakeAppl(sym_Op_2, u_121, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, s_121), v_121)));
                    }
                }
              }
            else
              {
                ATerm z_12 (ATerm t)
                {
                  ATerm x_122 = NULL,y_122 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      x_122 = ATgetArgument(t, 0);
                      y_122 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(s_121), x_122)), y_122);
                  return(t);
                }
                t = t_121;
                t = nzip0_1_0(z_12, t);
              }
          }
      }
  }
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm h_123 = NULL,i_123 = NULL,j_123 = NULL;
  j_123 = t;
  if(match_cons(t, sym_As_2))
    {
      h_123 = ATgetArgument(t, 0);
      i_123 = ATgetArgument(t, 1);
      t = h_123;
      if(match_cons(t, sym_Wld_0))
        {
          t = i_123;
        }
      else
        {
          t = j_123;
        }
    }
  else
    {
      t = j_123;
    }
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm f_34 = t;
  int g_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      ;
      LocalPopChoice(g_34);
    }
  else
    {
      t = f_34;
    }
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm r_123 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      r_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_123;
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm s_123 = NULL,t_123 = NULL;
  if(match_cons(t, sym__2))
    {
      s_123 = ATgetArgument(t, 0);
      t_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10(e_13, s_123, t_123, t);
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm u_123 = NULL;
  if(match_cons(t, sym__2))
    {
      u_123 = ATgetArgument(t, 0);
      if((u_123 != ATgetArgument(t, 1)))
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
  ATerm d_123 = NULL,e_123 = NULL,f_123 = NULL,g_123 = NULL;
  g_123 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_h_34, (ATerm) ATinsert(ATempty, g_123));
  t = topdown_1_0(a_13, t);
  t = topdown_1_0(b_13, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      d_123 = ATgetArgument(t, 0);
      e_123 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_123;
  t = collect_om_2_0(c_13, d_13, t);
  f_123 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, f_123, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, d_123, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_123), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_m_29)))))));
  return(t);
}
ATerm g_13 (ATerm t)
{
  t = repeat_1_0(i_13, t);
  return(t);
}
ATerm i_13 (ATerm t)
{
  ATerm i_34 = t;
  int j_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      ;
      LocalPopChoice(j_34);
    }
  else
    {
      t = i_34;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_126 (ATerm t)
      {
        ATerm o_34 = t;
        int p_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_125 = NULL,k_125 = NULL,l_125 = NULL;
            j_125 = t;
            if(match_cons(t, sym_Choice_2))
              {
                k_125 = ATgetArgument(t, 0);
                l_125 = ATgetArgument(t, 1);
                {
                  ATerm v_57 = NULL,z_57 = NULL,h_58 = NULL,l_8 = NULL;
                  t = SSLgetAnnotations(j_125);
                  v_57 = t;
                  t = k_125;
                  t = h_126(t);
                  z_57 = t;
                  t = l_125;
                  t = h_126(t);
                  h_58 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, z_57, h_58);
                  l_8 = t;
                  t = SSLsetAnnotations(l_8, v_57);
                }
              }
            else
              {
                ATerm p_59 = NULL,s_59 = NULL,t_59 = NULL,m_8 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    k_125 = ATgetArgument(t, 0);
                    l_125 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_125);
                p_59 = t;
                t = k_125;
                t = h_126(t);
                s_59 = t;
                t = l_125;
                t = h_126(t);
                t_59 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, s_59, t_59);
                m_8 = t;
                t = SSLsetAnnotations(m_8, p_59);
              }
            ;
            LocalPopChoice(p_34);
          }
        else
          {
            t = o_34;
            {
              ATerm k_126 (ATerm t)
              {
                ATerm q_34 = t;
                int r_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_126 = NULL,e_126 = NULL,f_126 = NULL;
                    e_126 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        f_126 = ATgetArgument(t, 0);
                        d_126 = ATgetArgument(t, 1);
                        {
                          ATerm n_60 = NULL,q_60 = NULL,r_60 = NULL,s_9 = NULL;
                          t = SSLgetAnnotations(e_126);
                          n_60 = t;
                          t = f_126;
                          t = k_126(t);
                          q_60 = t;
                          t = d_126;
                          t = match_to_matrix_0_0(t);
                          r_60 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_60, r_60);
                          s_9 = t;
                          t = SSLsetAnnotations(s_9, n_60);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            f_126 = ATgetArgument(t, 0);
                            d_126 = ATgetArgument(t, 1);
                            {
                              ATerm o_61 = NULL,r_61 = NULL,d_10 = NULL;
                              t = SSLgetAnnotations(e_126);
                              o_61 = t;
                              t = d_126;
                              t = k_126(t);
                              r_61 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, f_126, r_61);
                              d_10 = t;
                              t = SSLsetAnnotations(d_10, o_61);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                f_126 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = f_126;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    ;
                    LocalPopChoice(r_34);
                  }
                else
                  {
                    t = q_34;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = k_126(t);
            }
          }
        return(t);
      }
      ATerm s_34 = t;
      int t_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_124 = NULL,f_124 = NULL,g_124 = NULL,h_124 = NULL,g_8 = NULL;
          h_124 = t;
          if(match_cons(t, sym_Choice_2))
            {
              f_124 = ATgetArgument(t, 0);
              g_124 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_124);
          e_124 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, f_124, g_124);
          g_8 = t;
          t = SSLsetAnnotations(g_8, e_124);
          ;
          LocalPopChoice(t_34);
        }
      else
        {
          t = s_34;
          {
            ATerm i_124 = NULL,j_124 = NULL,k_124 = NULL,l_124 = NULL,h_8 = NULL;
            l_124 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                j_124 = ATgetArgument(t, 0);
                k_124 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_124);
            i_124 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, j_124, k_124);
            h_8 = t;
            t = SSLsetAnnotations(h_8, i_124);
          }
        }
      t = h_126(t);
      ;
      LocalPopChoice(m_34);
    }
  else
    {
      t = l_34;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(g_13, t);
  return(t);
}
ATerm j_13 (ATerm t)
{
  t = term_s_31;
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_126 = NULL,r_126 = NULL,s_126 = NULL;
      q_126 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          r_126 = ATgetArgument(t, 0);
          {
            ATerm y_34 = t;
            int a_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_126 = NULL;
                t = r_126;
                t = map_1_0(n_13, t);
                u_126 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, u_126);
                ;
                LocalPopChoice(a_35);
              }
            else
              {
                t = y_34;
                {
                  ATerm b_35 = t;
                  int i_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = q_126;
                      t = k_9(r_126, t);
                      ;
                      LocalPopChoice(i_35);
                    }
                  else
                    {
                      t = b_35;
                      {
                        ATerm j_35 = t;
                        int k_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = q_126;
                            t = i_9(r_126, t);
                            ;
                            LocalPopChoice(k_35);
                          }
                        else
                          {
                            t = j_35;
                            t = q_126;
                            t = g_9(r_126, t);
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
              r_126 = ATgetArgument(t, 0);
              s_126 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_126;
          t = z_8(r_126, s_126, t);
        }
      ;
      LocalPopChoice(x_34);
    }
  else
    {
      t = w_34;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm v_126 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      if(((ATgetType(l_35) != AT_LIST) || !(ATisEmpty(l_35))))
        _fail(t);
      {
        ATerm n_35 = ATgetArgument(t, 1);
        if(((ATgetType(n_35) != AT_LIST) || !(ATisEmpty(n_35))))
          _fail(t);
      }
      v_126 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_126;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    ATerm k_13 (ATerm t)
    {
      t = repeat_1_0(l_13, t);
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
ATerm topdown_1_0 (ATerm m_98 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    t = topdown_1_0(m_98, t);
    return(t);
  }
  t = m_98(t);
  t = SRTS_all(p_13, t);
  return(t);
}
ATerm map_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  ATerm v_127 (ATerm t)
  {
    ATerm s_127 = NULL,t_127 = NULL,u_127 = NULL;
    s_127 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_127;
      }
    else
      {
        ATerm h_62 = NULL,k_62 = NULL,l_62 = NULL,m_11 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_127 = ATgetFirst((ATermList) t);
            u_127 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_127);
        h_62 = t;
        t = t_127;
        t = n_104(t);
        k_62 = t;
        t = u_127;
        t = v_127(t);
        l_62 = t;
        t = (ATerm) ATinsert(CheckATermList(l_62), k_62);
        m_11 = t;
        t = SSLsetAnnotations(m_11, h_62);
      }
    return(t);
  }
  t = v_127(t);
  return(t);
}
ATerm Cons_2_0 (ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm t)
{
  ATerm y_127 = NULL,z_127 = NULL,a_128 = NULL,b_128 = NULL,c_128 = NULL,d_128 = NULL,t_11 = NULL;
  d_128 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_127 = ATgetFirst((ATermList) t);
      a_128 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_128);
  y_127 = t;
  t = z_127;
  t = v_81(t);
  b_128 = t;
  t = a_128;
  t = w_81(t);
  c_128 = t;
  t = (ATerm) ATinsert(CheckATermList(c_128), b_128);
  t_11 = t;
  t = SSLsetAnnotations(t_11, y_127);
  return(t);
}
ATerm w_10 (ATerm g_55, ATerm h_55, ATerm t)
{
  ATerm e_128 = NULL;
  t = SSL_fputc(g_55, h_55);
  e_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_128);
  return(t);
}
ATerm x_10 (ATerm u_58, ATerm v_58, ATerm t)
{
  ATerm f_128 = NULL;
  t = SSL_write_term_to_stream_text(u_58, v_58);
  f_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_128);
  return(t);
}
ATerm z_10 (ATerm m_120 (ATerm), ATerm r_527, ATerm y_58, ATerm t)
{
  ATerm g_128 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_527, term_p_35);
  t = open_stream_0_0(t);
  g_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_128, y_58);
  t = m_120(t);
  t = fclose_0_0(t);
  t = y_58;
  return(t);
}
ATerm y_10 (ATerm q_58, ATerm r_58, ATerm t)
{
  ATerm h_128 = NULL;
  t = SSL_write_term_to_stream_baf(q_58, r_58);
  h_128 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_128);
  return(t);
}
ATerm v_13 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm z_62 = NULL,a_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_35 = ATgetArgument(t, 0);
      if(match_cons(u_35, sym_Stream_1))
        {
          z_62 = ATgetArgument(u_35, 0);
        }
      else
        _fail(t);
      a_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(z_62, a_63, t);
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,d_64 = NULL,e_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_35 = ATgetArgument(t, 0);
      if(match_cons(w_35, sym_Stream_1))
        {
          d_64 = ATgetArgument(w_35, 0);
        }
      else
        _fail(t);
      e_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_10(d_64, e_64, t);
  u_63 = t;
  t = term_z_35;
  v_63 = t;
  t = u_63;
  if(match_cons(t, sym_Stream_1))
    {
      w_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_35, u_63);
  t = w_10(v_63, w_63, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_128 = NULL,m_128 = NULL,n_128 = NULL,o_128 = NULL,p_128 = NULL,r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL,v_128 = NULL,x_129 = NULL,y_129 = NULL,x_11 = NULL,w_11 = NULL;
  m_128 = t;
  if(match_cons(t, sym__2))
    {
      t_128 = ATgetArgument(t, 0);
      u_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_128);
  s_128 = t;
  t = t_128;
  {
    ATerm b_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_13 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_128 != NULL) && (l_128 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_128 = ATgetArgument(t, 0);
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
        t = b_36;
        t = term_f_36;
        l_128 = t;
      }
    v_128 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_128, u_128);
    w_11 = t;
    t = SSLsetAnnotations(w_11, s_128);
    t = m_128;
    if(match_cons(t, sym__2))
      {
        o_128 = ATgetArgument(t, 0);
        p_128 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_128);
    n_128 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_128, (ATerm) ATmakeAppl(sym__2, not_null(l_128), p_128));
    x_11 = t;
    t = SSLsetAnnotations(x_11, n_128);
    r_128 = t;
    if(match_cons(t, sym__2))
      {
        x_129 = ATgetArgument(t, 0);
        y_129 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm g_36 = t;
      int h_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,l_12 = NULL;
          t = SSLgetAnnotations(r_128);
          s_62 = t;
          t = x_129;
          t = fetch_1_0(v_13, t);
          v_62 = t;
          t = y_129;
          if(match_cons(t, sym__2))
            {
              x_62 = ATgetArgument(t, 0);
              y_62 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_10(w_13, x_62, y_62, t);
          w_62 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_62, w_62);
          l_12 = t;
          t = SSLsetAnnotations(l_12, s_62);
          ;
          LocalPopChoice(h_36);
        }
      else
        {
          t = g_36;
          {
            ATerm f_63 = NULL,n_63 = NULL,o_63 = NULL,t_63 = NULL,m_12 = NULL;
            t = SSLgetAnnotations(r_128);
            f_63 = t;
            t = y_129;
            if(match_cons(t, sym__2))
              {
                o_63 = ATgetArgument(t, 0);
                t_63 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_10(z_13, o_63, t_63, t);
            n_63 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_129, n_63);
            m_12 = t;
            t = SSLsetAnnotations(m_12, f_63);
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
ATerm apply_strategy_1_0 (ATerm o_123 (ATerm), ATerm t)
{
  ATerm b_130 = NULL,c_130 = NULL,d_130 = NULL,e_130 = NULL,f_130 = NULL;
  f_130 = t;
  t = dtime_0_0(t);
  t = f_130;
  t = o_123(t);
  e_130 = t;
  t = dtime_0_0(t);
  b_130 = t;
  t = e_130;
  if(match_cons(t, sym__2))
    {
      c_130 = ATgetArgument(t, 0);
      d_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_130), (ATerm) ATmakeAppl(sym_Runtime_1, b_130)), d_130);
  return(t);
}
ATerm v_130 (ATerm o_130, ATerm t)
{
  t = SSL_fclose(o_130);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_130 = NULL,s_130 = NULL;
  s_130 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_130 = ATgetArgument(t, 0);
      {
        ATerm i_36 = t;
        int j_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_130);
            ;
            LocalPopChoice(j_36);
          }
        else
          {
            t = i_36;
            t = v_130(s_130, t);
          }
      }
    }
  else
    {
      t = v_130(s_130, t);
    }
  return(t);
}
ATerm a_11 (ATerm w_58, ATerm t)
{
  t = SSL_read_term_from_stream(w_58);
  return(t);
}
ATerm b_11 (ATerm i_55, ATerm j_55, ATerm t)
{
  ATerm w_130 = NULL;
  t = SSL_fopen(i_55, j_55);
  w_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_130);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_130 = NULL;
  t = SSL_stdin_stream();
  x_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_130);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_130 = NULL;
  t = SSL_stdout_stream();
  y_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_130);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_130 = NULL;
  t = SSL_stderr_stream();
  z_130 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_130);
  return(t);
}
ATerm i_132 (ATerm f_131, ATerm t)
{
  ATerm g_131 = NULL;
  t = SSL_explode_term(f_131);
  if(match_cons(t, sym__2))
    {
      ATerm m_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_36 = ATgetArgument(t, 1);
        if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
          {
            g_131 = ATgetFirst((ATermList) n_36);
            {
              ATerm p_36 = (ATerm) ATgetNext((ATermList) n_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_131;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_131;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_131;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_131;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm j_132 (ATerm j_131, ATerm k_131, ATerm l_131, ATerm t)
{
  ATerm m_131 = NULL,n_131 = NULL,p_131 = NULL,s_131 = NULL,r_12 = NULL;
  t = SSLgetAnnotations(l_131);
  p_131 = t;
  t = j_131;
  if(match_cons(t, sym_Path_1))
    {
      s_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_131, k_131);
  r_12 = t;
  t = SSLsetAnnotations(r_12, p_131);
  if(match_cons(t, sym__2))
    {
      m_131 = ATgetArgument(t, 0);
      n_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(m_131, n_131, t);
  return(t);
}
ATerm k_132 (ATerm u_131, ATerm v_131, ATerm w_131, ATerm t)
{
  ATerm x_131 = NULL,y_131 = NULL,z_131 = NULL,d_132 = NULL,s_12 = NULL;
  t = SSLgetAnnotations(w_131);
  z_131 = t;
  t = SSL_is_string(u_131);
  d_132 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_132, v_131);
  s_12 = t;
  t = SSLsetAnnotations(s_12, z_131);
  if(match_cons(t, sym__2))
    {
      x_131 = ATgetArgument(t, 0);
      y_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(x_131, y_131, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm f_132 = NULL,g_132 = NULL,h_132 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_36 = ATgetArgument(t, 0);
      ATerm r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  f_132 = t;
  if(match_cons(t, sym__2))
    {
      g_132 = ATgetArgument(t, 0);
      h_132 = ATgetArgument(t, 1);
      {
        ATerm s_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_132(f_132, t);
            ;
            LocalPopChoice(x_36);
          }
        else
          {
            t = s_36;
            {
              ATerm y_36 = t;
              int z_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_132(g_132, h_132, f_132, t);
                  ;
                  LocalPopChoice(z_36);
                }
              else
                {
                  t = y_36;
                  t = k_132(g_132, h_132, f_132, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_132(f_132, t);
    }
  return(t);
}
ATerm a_14 (ATerm t)
{
  t = term_a_37;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_132 = NULL,m_132 = NULL,n_132 = NULL;
  ATerm b_37 = t;
  int c_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_132 = NULL;
      o_132 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_132, term_d_37);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_37);
    }
  else
    {
      t = b_37;
      t = debug_1_0(a_14, t);
      _fail(t);
    }
  m_132 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_11(n_132, t);
  l_132 = t;
  t = m_132;
  t = fclose_0_0(t);
  t = l_132;
  return(t);
}
ATerm fetch_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm o_133 (ATerm t)
  {
    ATerm l_133 = NULL,m_133 = NULL,n_133 = NULL;
    l_133 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_133 = ATgetFirst((ATermList) t);
        n_133 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_37 = t;
      int f_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_64 = NULL,y_64 = NULL,x_12 = NULL;
          t = SSLgetAnnotations(l_133);
          v_64 = t;
          t = m_133;
          t = x_104(t);
          y_64 = t;
          t = (ATerm) ATinsert(CheckATermList(n_133), y_64);
          x_12 = t;
          t = SSLsetAnnotations(x_12, v_64);
          ;
          LocalPopChoice(f_37);
        }
      else
        {
          t = e_37;
          {
            ATerm g_65 = NULL,j_65 = NULL,y_12 = NULL;
            t = SSLgetAnnotations(l_133);
            g_65 = t;
            t = n_133;
            t = o_133(t);
            j_65 = t;
            t = (ATerm) ATinsert(CheckATermList(j_65), m_133);
            y_12 = t;
            t = SSLsetAnnotations(y_12, g_65);
          }
        }
    }
    return(t);
  }
  t = o_133(t);
  return(t);
}
ATerm v_10 (ATerm w_52, ATerm x_52, ATerm t)
{
  t = SSL_strcat(w_52, x_52);
  return(t);
}
ATerm debug_1_0 (ATerm k_120 (ATerm), ATerm t)
{
  ATerm r_133 = NULL,s_133 = NULL,t_133 = NULL,u_133 = NULL;
  r_133 = t;
  t = k_120(t);
  s_133 = t;
  t = term_p_17;
  t_133 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_133), s_133);
  u_133 = t;
  t = SSL_printnl(t_133, u_133);
  t = r_133;
  return(t);
}
ATerm b_14 (ATerm t)
{
  ATerm h_37 = t;
  int i_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(i_37);
    }
  else
    {
      t = h_37;
    }
  return(t);
}
ATerm c_14 (ATerm t)
{
  t = term_j_37;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_37 = t;
  int l_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_134 = NULL;
      b_134 = t;
      t = SSL_is_string(b_134);
      ;
      LocalPopChoice(l_37);
    }
  else
    {
      t = k_37;
      {
        ATerm m_37 = t;
        int n_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_14, t);
            ;
            LocalPopChoice(n_37);
          }
        else
          {
            t = m_37;
            {
              ATerm i_134 = NULL,j_134 = NULL,k_134 = NULL;
              i_134 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_134 = ATgetArgument(t, 0);
                  t = j_134;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_134 = ATgetArgument(t, 0);
                      t = j_134;
                      {
                        ATerm o_37 = t;
                        int p_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(p_37);
                          }
                        else
                          {
                            t = o_37;
                            t = debug_1_0(c_14, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_134 = NULL,q_134 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_134 = ATgetArgument(t, 0);
                          k_134 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_134;
                      t = eval_config_0_0(t);
                      p_134 = t;
                      t = k_134;
                      t = eval_config_0_0(t);
                      q_134 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_134, q_134);
                      t = v_10(p_134, q_134, t);
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
  ATerm u_134 = NULL,v_134 = NULL;
  u_134 = t;
  t = term_q_37;
  v_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_37, u_134);
  t = e_11(v_134, u_134, t);
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_134 = NULL,x_134 = NULL;
        t = eval_config_0_0(t);
        w_134 = t;
        t = term_q_37;
        x_134 = t;
        t = SSL_table_put(x_134, u_134, w_134);
        t = w_134;
        ;
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_121 (ATerm), ATerm t)
{
  ATerm b_135 = NULL;
  b_135 = t;
  {
    ATerm x_37 = t;
    int b_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_135 = NULL;
        t = term_c_38;
        t = get_config_0_0(t);
        d_135 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_135, term_d_38);
        t = geq_0_0(t);
        t = b_135;
        t = x_121(t);
        ;
        LocalPopChoice(b_38);
      }
    else
      {
        t = x_37;
        t = b_135;
      }
  }
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm g_135 = NULL;
  g_135 = t;
  if(match_string(t, "-k"))
    {
      t = g_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_135;
    }
  return(t);
}
ATerm g_14 (ATerm t)
{
  ATerm h_135 = NULL,i_135 = NULL,k_135 = NULL;
  h_135 = t;
  t = SSL_string_to_int(h_135);
  i_135 = t;
  t = term_g_38;
  k_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_38, i_135);
  t = h_11(k_135, i_135, t);
  t = h_135;
  return(t);
}
ATerm i_14 (ATerm t)
{
  t = term_h_38;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_14, g_14, i_14, t);
  return(t);
}
ATerm j_14 (ATerm t)
{
  ATerm m_135 = NULL;
  m_135 = t;
  if(match_string(t, "-S"))
    {
      t = m_135;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = m_135;
    }
  return(t);
}
ATerm k_14 (ATerm t)
{
  ATerm n_135 = NULL,o_135 = NULL;
  t = term_c_38;
  n_135 = t;
  t = term_m_29;
  o_135 = t;
  t = term_i_38;
  t = h_11(n_135, o_135, t);
  t = term_j_38;
  return(t);
}
ATerm l_14 (ATerm t)
{
  t = term_k_38;
  return(t);
}
ATerm m_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm p_135 = NULL,q_135 = NULL,r_135 = NULL;
  p_135 = t;
  t = SSL_string_to_int(p_135);
  q_135 = t;
  t = term_c_38;
  r_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_38, q_135);
  t = h_11(r_135, q_135, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_135);
  return(t);
}
ATerm o_14 (ATerm t)
{
  t = term_l_38;
  return(t);
}
ATerm p_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm s_135 = NULL,t_135 = NULL;
  t = term_m_38;
  s_135 = t;
  t = term_o_17;
  t_135 = t;
  t = term_o_38;
  t = h_11(s_135, t_135, t);
  t = term_t_38;
  return(t);
}
ATerm r_14 (ATerm t)
{
  t = term_v_38;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm g_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_14, k_14, l_14, t);
      ;
      LocalPopChoice(j_39);
    }
  else
    {
      t = g_39;
      {
        ATerm k_39 = t;
        int l_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_14, n_14, o_14, t);
            ;
            LocalPopChoice(l_39);
          }
        else
          {
            t = k_39;
            t = Option_3_0(p_14, q_14, r_14, t);
          }
      }
    }
  return(t);
}
ATerm h_11 (ATerm x_59, ATerm y_59, ATerm t)
{
  ATerm u_135 = NULL;
  t = term_q_37;
  u_135 = t;
  t = SSL_table_put(u_135, x_59, y_59);
  t = (ATerm) ATmakeAppl(sym__3, term_q_37, x_59, y_59);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm y_135 = NULL,z_135 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_136 = NULL,b_136 = NULL,c_136 = NULL;
      t = term_o_17;
      t = i_0(t);
      a_136 = t;
      t = term_m_39;
      b_136 = t;
      t = term_n_39;
      c_136 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_39, term_n_39, a_136);
      t = f_11(b_136, c_136, a_136, t);
      _fail(t);
    }
  else
    {
      ATerm f_136 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_135 = ATgetFirst((ATermList) t);
          z_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_135;
      t = d_0(t);
      t = term_o_17;
      t = g_0(t);
      f_136 = t;
      t = (ATerm) ATinsert(CheckATermList(z_135), f_136);
    }
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm h_136 = NULL;
  h_136 = t;
  if(match_string(t, "-o"))
    {
      t = h_136;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_136;
    }
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm i_136 = NULL,j_136 = NULL;
  i_136 = t;
  t = term_o_39;
  j_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_39, i_136);
  t = h_11(j_136, i_136, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_136);
  return(t);
}
ATerm u_14 (ATerm t)
{
  t = term_p_39;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_14, t_14, u_14, t);
  return(t);
}
ATerm f_11 (ATerm n_44, ATerm o_44, ATerm m_44, ATerm t)
{
  ATerm l_136 = NULL,m_136 = NULL,n_136 = NULL;
  l_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_39 = ATgetArgument(t, 0);
            ATerm v_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_44, o_44);
        t = e_11(n_44, o_44, t);
        ;
        LocalPopChoice(s_39);
      }
    else
      {
        t = r_39;
        t = (ATerm) ATempty;
      }
    m_136 = t;
    t = (ATerm) ATinsert(CheckATermList(m_136), m_44);
    n_136 = t;
    t = SSL_table_put(n_44, o_44, n_136);
    t = l_136;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_136 = NULL,v_136 = NULL,w_136 = NULL,x_136 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL;
      t = term_o_17;
      t = n_0(t);
      y_136 = t;
      t = term_m_39;
      z_136 = t;
      t = term_n_39;
      a_137 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_39, term_n_39, y_136);
      t = f_11(z_136, a_137, y_136, t);
      _fail(t);
    }
  else
    {
      ATerm e_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_136 = ATgetFirst((ATermList) t);
          v_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_136;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_136 = ATgetFirst((ATermList) t);
          x_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_136;
      t = l_0(t);
      t = w_136;
      t = m_0(t);
      e_137 = t;
      t = (ATerm) ATinsert(CheckATermList(x_136), e_137);
    }
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm g_137 = NULL;
  g_137 = t;
  if(match_string(t, "-i"))
    {
      t = g_137;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_137;
    }
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm h_137 = NULL,i_137 = NULL;
  h_137 = t;
  t = term_w_39;
  i_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_39, h_137);
  t = h_11(i_137, h_137, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_137);
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = term_x_39;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_15, b_15, c_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_137 = NULL,k_137 = NULL,l_137 = NULL,m_137 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_17;
  t = whoami_0_0(t);
  j_137 = t;
  t = term_p_17;
  l_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_39), j_137);
  m_137 = t;
  t = SSL_printnl(l_137, m_137);
  t = term_u_17;
  k_137 = t;
  t = SSL_exit(k_137);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_39;
  t = get_config_0_0(t);
  return(t);
}
ATerm c_11 (ATerm r_42, ATerm s_42, ATerm t)
{
  ATerm a_40 = t;
  int b_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_42, s_42);
      ;
      LocalPopChoice(b_40);
    }
  else
    {
      t = a_40;
      t = SSL_addr(r_42, s_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t)
{
  ATerm o_137 = NULL,p_137 = NULL,q_137 = NULL;
  o_137 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_137;
      t = o_109(t);
    }
  else
    {
      ATerm t_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_137 = ATgetFirst((ATermList) t);
          q_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_137;
      t = foldr_2_0(o_109, p_109, t);
      t_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_137, t_137);
      t = p_109(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm d_15 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL;
  if(match_cons(t, sym__2))
    {
      g_66 = ATgetArgument(t, 0);
      h_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_11(g_66, h_66, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_137 = NULL,c_66 = NULL,d_66 = NULL;
  t = times_0_0(t);
  d_66 = t;
  t = SSL_explode_term(d_66);
  if(match_cons(t, sym__2))
    {
      ATerm c_40 = ATgetArgument(t, 0);
      c_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_66;
  t = foldr_2_0(d_15, f_15, t);
  w_137 = t;
  t = SSL_TicksToSeconds(w_137);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_138 = NULL,i_138 = NULL,j_138 = NULL;
  h_138 = t;
  if(match_cons(t, sym__2))
    {
      i_138 = ATgetArgument(t, 0);
      j_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_138;
        if((i_138 != t))
          {
            _fail(t);
          }
        t = h_138;
        ;
        LocalPopChoice(e_40);
      }
    else
      {
        t = d_40;
        t = (ATerm) ATmakeAppl(sym__2, i_138, j_138);
        {
          ATerm f_40 = t;
          int h_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_138, j_138);
              ;
              LocalPopChoice(h_40);
            }
          else
            {
              t = f_40;
              t = SSL_gtr(i_138, j_138);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_138, j_138);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_121 (ATerm), ATerm t)
{
  ATerm n_138 = NULL;
  n_138 = t;
  {
    ATerm i_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_138 = NULL;
        t = term_c_38;
        t = get_config_0_0(t);
        p_138 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_138, term_u_17);
        t = geq_0_0(t);
        t = n_138;
        t = w_121(t);
        ;
        LocalPopChoice(l_40);
      }
    else
      {
        t = i_40;
        t = n_138;
      }
  }
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm r_138 = NULL,s_138 = NULL,u_138 = NULL,v_138 = NULL;
  t = run_time_0_0(t);
  r_138 = t;
  t = term_o_17;
  t = whoami_0_0(t);
  s_138 = t;
  t = term_p_17;
  u_138 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_40), r_138), term_n_40), s_138);
  v_138 = t;
  t = SSL_printnl(u_138, v_138);
  t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_40), r_138), term_n_40), s_138));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_15, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_138 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_29;
  w_138 = t;
  t = SSL_exit(w_138);
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm e_139 = NULL,f_139 = NULL;
  f_139 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_139;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_139 = ATgetArgument(t, 0);
          {
            ATerm t_66 = NULL,f_13 = NULL;
            t = SSLgetAnnotations(f_139);
            t_66 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_139);
            f_13 = t;
            t = SSLsetAnnotations(f_13, t_66);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_139;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_124 (ATerm), ATerm t)
{
  ATerm p_40 = t;
  int q_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_40);
    }
  else
    {
      t = p_40;
      t = fetch_1_0(h_15, t);
    }
  t = m_124(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_139 = ATgetFirst((ATermList) t);
      j_139 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_139 = NULL,o_139 = NULL;
        ATerm j_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_139)), not_null(o_139));
          return(t);
        }
        t = j_139;
        t = k_0(t);
        if(((n_139 != NULL) && (n_139 != t)))
          _fail(t);
        else
          n_139 = t;
        t = i_139;
        t = j_0(t);
        if(((o_139 != NULL) && (o_139 != t)))
          _fail(t);
        else
          o_139 = t;
        t = j_139;
        t = reverse_acc_2_0(j_0, j_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_17;
      t = k_0(t);
    }
  return(t);
}
ATerm e_11 (ATerm e_46, ATerm f_46, ATerm t)
{
  t = SSL_table_get(e_46, f_46);
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm s_139 = NULL,t_139 = NULL,u_139 = NULL,h_13 = NULL;
  u_139 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_139);
  s_139 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_139);
  h_13 = t;
  t = SSLsetAnnotations(h_13, s_139);
  return(t);
}
ATerm l_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm w_139 = NULL;
  w_139 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_139), term_t_40);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_139 = NULL,r_139 = NULL;
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_40);
    }
  else
    {
      t = v_40;
      t = fetch_1_0(k_15, t);
    }
  t = term_x_40;
  t = echo_0_0(t);
  t = term_m_39;
  q_139 = t;
  t = term_n_39;
  r_139 = t;
  t = term_z_40;
  t = e_11(q_139, r_139, t);
  t = reverse_acc_2_0(_id, l_15, t);
  t = map_1_0(m_15, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_139 = NULL,z_139 = NULL,a_140 = NULL;
  y_139 = t;
  {
    ATerm d_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_139;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_41 = ATgetFirst((ATermList) t);
                ATerm g_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_139;
          }
        ;
        LocalPopChoice(e_41);
      }
    else
      {
        t = d_41;
        t = (ATerm) ATinsert(ATempty, y_139);
      }
    z_139 = t;
    t = term_f_36;
    a_140 = t;
    t = SSL_printnl(a_140, z_139);
    t = y_139;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_39;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm n_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm e_140 = NULL,f_140 = NULL;
  t = term_i_41;
  e_140 = t;
  t = term_o_17;
  f_140 = t;
  t = term_j_41;
  t = h_11(e_140, f_140, t);
  return(t);
}
ATerm q_15 (ATerm t)
{
  t = term_k_41;
  return(t);
}
ATerm s_15 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm g_140 = NULL,h_140 = NULL,i_140 = NULL,j_140 = NULL;
  t = term_i_41;
  i_140 = t;
  t = term_o_17;
  j_140 = t;
  t = term_j_41;
  t = h_11(i_140, j_140, t);
  t = term_l_41;
  g_140 = t;
  t = term_o_17;
  h_140 = t;
  t = term_m_41;
  t = h_11(g_140, h_140, t);
  t = term_n_41;
  return(t);
}
ATerm a_16 (ATerm t)
{
  t = term_o_41;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_15, p_15, q_15, t);
      ;
      LocalPopChoice(r_41);
    }
  else
    {
      t = p_41;
      t = Option_3_0(s_15, z_15, a_16, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_126 (ATerm), ATerm t)
{
  ATerm o_140 = NULL,p_140 = NULL,q_140 = NULL,r_140 = NULL,t_140 = NULL,u_140 = NULL,o_13 = NULL;
  o_140 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_41;
        t = p_126(t);
        ;
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
      }
    t = o_140;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_140 = ATgetFirst((ATermList) t);
        r_140 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_140);
    p_140 = t;
    t = term_z_39;
    u_140 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_z_39, q_140);
    t = h_11(u_140, q_140, t);
    t = r_140;
    {
      ATerm e_141 (ATerm t)
      {
        ATerm z_41 = t;
        int a_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_42 = t;
            int c_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_140 = NULL;
                x_140 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_140;
                ;
                LocalPopChoice(c_42);
              }
            else
              {
                t = b_42;
                t = p_126(t);
                t = Cons_2_0(_id, e_141, t);
              }
            ;
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            {
              ATerm a_141 = NULL,b_141 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_141 = ATgetFirst((ATermList) t);
                  b_141 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_141), (ATerm) ATmakeAppl(sym_Undefined_1, a_141));
            }
          }
        return(t);
      }
      t = e_141(t);
      t_140 = t;
      t = (ATerm) ATinsert(CheckATermList(t_140), (ATerm) ATmakeAppl(sym_Program_1, q_140));
      o_13 = t;
      t = SSLsetAnnotations(o_13, p_140);
    }
  }
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm q_141 = NULL;
  q_141 = t;
  if(match_string(t, "--help"))
    {
      t = q_141;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_141;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_141;
        }
    }
  return(t);
}
ATerm d_16 (ATerm t)
{
  ATerm r_141 = NULL,s_141 = NULL;
  t = term_s_40;
  r_141 = t;
  t = term_o_17;
  s_141 = t;
  t = term_d_42;
  t = h_11(r_141, s_141, t);
  t = term_e_42;
  return(t);
}
ATerm g_16 (ATerm t)
{
  t = term_f_42;
  return(t);
}
ATerm h_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_126 (ATerm), ATerm t)
{
  ATerm j_141 = NULL,k_141 = NULL,l_141 = NULL,m_141 = NULL,n_141 = NULL,o_141 = NULL,p_141 = NULL;
  l_141 = t;
  t = term_m_39;
  n_141 = t;
  t = term_n_39;
  o_141 = t;
  t = (ATerm) ATempty;
  p_141 = t;
  t = SSL_table_put(n_141, o_141, p_141);
  t = l_141;
  {
    ATerm b_16 (ATerm t)
    {
      ATerm g_42 = t;
      int h_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_126(t);
          ;
          LocalPopChoice(h_42);
        }
      else
        {
          t = g_42;
          {
            ATerm l_42 = t;
            int n_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_16, d_16, g_16, t);
                ;
                LocalPopChoice(n_42);
              }
            else
              {
                t = l_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_16, t);
    {
      ATerm o_42 = t;
      int t_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_141 = NULL;
          z_141 = t;
          {
            ATerm v_42 = t;
            int w_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_67 = NULL;
                t = z_141;
                {
                  ATerm x_42 = t;
                  int f_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_s_40;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_43);
                    }
                  else
                    {
                      t = x_42;
                      t = fetch_1_0(h_16, t);
                    }
                  t = z_141;
                  t = default_system_usage_0_0(t);
                  t = term_m_29;
                  c_67 = t;
                  t = SSL_exit(c_67);
                }
                ;
                LocalPopChoice(w_42);
              }
            else
              {
                t = v_42;
                {
                  ATerm j_67 = NULL;
                  t = term_i_41;
                  t = get_config_0_0(t);
                  t = z_141;
                  t = default_system_about_0_0(t);
                  t = term_m_29;
                  j_67 = t;
                  t = SSL_exit(j_67);
                }
              }
          }
          ;
          LocalPopChoice(t_42);
        }
      else
        {
          t = o_42;
          {
            ATerm g_43 = t;
            int j_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_142 = NULL,b_142 = NULL,c_142 = NULL;
                ATerm l_16 (ATerm t)
                {
                  ATerm d_142 = NULL,e_142 = NULL,f_142 = NULL,q_13 = NULL;
                  f_142 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      e_142 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_142);
                  d_142 = t;
                  t = e_142;
                  if(((j_141 != NULL) && (j_141 != t)))
                    _fail(t);
                  else
                    j_141 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, e_142);
                  q_13 = t;
                  t = SSLsetAnnotations(q_13, d_142);
                  return(t);
                }
                t = fetch_1_0(l_16, t);
                t = term_p_17;
                b_142 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_141)), term_k_43);
                c_142 = t;
                t = SSL_printnl(b_142, c_142);
                t = (ATerm) ATmakeAppl(sym__2, term_p_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_141)), term_k_43));
                t = default_system_usage_0_0(t);
                t = term_u_17;
                a_142 = t;
                t = SSL_exit(a_142);
                ;
                LocalPopChoice(j_43);
              }
            else
              {
                t = g_43;
              }
          }
        }
      k_141 = t;
      t = term_m_39;
      m_141 = t;
      t = SSL_table_destroy(m_141);
      t = k_141;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_124 (ATerm), ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm t)
{
  ATerm k_142 = NULL,l_142 = NULL,m_142 = NULL,n_142 = NULL;
  t = parse_options_1_0(o_124, t);
  k_142 = t;
  t = term_l_43;
  n_142 = t;
  t = SSL_table_create(n_142);
  t = term_l_43;
  l_142 = t;
  t = term_m_43;
  m_142 = t;
  t = SSL_table_put(l_142, m_142, k_142);
  t = k_142;
  t = q_124(t);
  {
    ATerm n_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_124, t);
        ;
        LocalPopChoice(u_43);
      }
    else
      {
        t = n_43;
        {
          ATerm x_43 = t;
          int y_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_124(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(y_43);
            }
          else
            {
              t = x_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm o_16 (ATerm t)
{
  t = if_verbose2_1_0(d_17, t);
  return(t);
}
ATerm v_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm o_142 = NULL,p_142 = NULL;
  t = term_z_43;
  o_142 = t;
  t = term_o_17;
  p_142 = t;
  t = term_a_44;
  t = h_11(o_142, p_142, t);
  t = term_c_44;
  return(t);
}
ATerm a_17 (ATerm t)
{
  t = term_g_44;
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm q_142 = NULL,r_142 = NULL,s_142 = NULL,t_142 = NULL;
  q_142 = t;
  t = term_z_39;
  t = get_config_0_0(t);
  r_142 = t;
  t = term_p_17;
  s_142 = t;
  t = (ATerm) ATinsert(ATempty, r_142);
  t_142 = t;
  t = SSL_printnl(s_142, t_142);
  t = q_142;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm t)
{
  ATerm m_16 (ATerm t)
  {
    ATerm h_44 = t;
    int i_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_123(t);
        ;
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_44);
            }
          else
            {
              t = j_44;
              {
                ATerm l_44 = t;
                int q_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_44);
                  }
                else
                  {
                    t = l_44;
                    {
                      ATerm u_44 = t;
                      int v_44 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_16, y_16, a_17, t);
                          ;
                          LocalPopChoice(v_44);
                        }
                      else
                        {
                          t = u_44;
                          {
                            ATerm c_45 = t;
                            int d_45 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(d_45);
                              }
                            else
                              {
                                t = c_45;
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
  ATerm s_16 (ATerm t)
  {
    ATerm u_142 = NULL,v_142 = NULL,w_142 = NULL;
    v_142 = t;
    {
      ATerm f_45 = t;
      int g_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_17 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_142 != NULL) && (u_142 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_142 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_17, t);
          ;
          LocalPopChoice(g_45);
        }
      else
        {
          t = f_45;
          t = term_h_45;
          u_142 = t;
        }
      t = not_null(u_142);
      t = ReadFromFile_0_0(t);
      w_142 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_142, w_142);
      t = apply_strategy_1_0(x_123, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(m_16, z_123, o_16, s_16, t);
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm z_142 = NULL,a_143 = NULL,b_143 = NULL,c_143 = NULL,d_143 = NULL,e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL,i_143 = NULL,j_143 = NULL,k_143 = NULL,y_13 = NULL,x_13 = NULL,u_13 = NULL;
  k_143 = t;
  if(match_cons(t, sym__2))
    {
      a_143 = ATgetArgument(t, 0);
      b_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_143);
  z_142 = t;
  t = b_143;
  if(match_cons(t, sym_Specification_1))
    {
      d_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_143);
  c_143 = t;
  t = d_143;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_143 = ATgetFirst((ATermList) t);
      h_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_143);
  f_143 = t;
  t = h_143;
  t = Cons_2_0(h_17, i_17, t);
  i_143 = t;
  t = (ATerm) ATinsert(CheckATermList(i_143), g_143);
  u_13 = t;
  t = SSLsetAnnotations(u_13, f_143);
  j_143 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_143);
  x_13 = t;
  t = SSLsetAnnotations(x_13, c_143);
  e_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_143, e_143);
  y_13 = t;
  t = SSLsetAnnotations(y_13, z_142);
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm l_143 = NULL,m_143 = NULL,n_143 = NULL,o_143 = NULL,t_13 = NULL;
  o_143 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_143);
  l_143 = t;
  t = m_143;
  t = map_1_0(m_17, t);
  n_143 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, n_143);
  t_13 = t;
  t = SSLsetAnnotations(t_13, l_143);
  return(t);
}
ATerm i_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm p_143 = NULL,r_143 = NULL,s_143 = NULL,t_143 = NULL,u_143 = NULL,v_143 = NULL,w_143 = NULL,s_13 = NULL;
  w_143 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_143 = ATgetArgument(t, 0);
      s_143 = ATgetArgument(t, 1);
      t_143 = ATgetArgument(t, 2);
      u_143 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_143);
  p_143 = t;
  t = u_143;
  t = topdown_1_0(n_17, t);
  t = match_to_dfa_0_0(t);
  v_143 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_143, s_143, t_143, v_143);
  s_13 = t;
  t = SSLsetAnnotations(s_13, p_143);
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm x_143 = NULL;
  x_143 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm l_45 = t;
      int o_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_143 = NULL;
          t = x_143;
          t = new_0_0(t);
          y_143 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_143), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_143)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_143))));
          ;
          LocalPopChoice(o_45);
        }
      else
        {
          t = l_45;
          t = x_143;
        }
    }
  else
    {
      t = x_143;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_17, _fail, default_usage_0_0, t);
  return(t);
}
