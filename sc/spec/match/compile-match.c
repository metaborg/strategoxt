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
ATerm term_h_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_m_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_p_58;
ATerm term_m_58;
ATerm term_l_58;
ATerm term_k_58;
ATerm term_j_58;
ATerm term_i_58;
ATerm term_h_58;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_g_57;
ATerm term_q_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_g_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_z_55;
ATerm term_y_55;
ATerm term_z_54;
ATerm term_c_54;
ATerm term_y_53;
ATerm term_o_51;
ATerm term_j_48;
ATerm term_r_47;
ATerm term_q_47;
ATerm term_h_44;
ATerm term_e_44;
ATerm term_s_43;
ATerm term_k_43;
ATerm term_y_30;
ATerm term_e_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_e_27;
ATerm term_t_17;
void init_constant_terms (void)
{
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Op_2, term_b_30, (ATerm) ATempty);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_ConstType_1, term_c_30);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_55));
  term_y_55 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_43);
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_58));
  term_j_58 = (ATerm) ATmakeAppl(sym__3, term_h_58, term_i_58, term_t_17);
  ATprotect(&(term_k_58));
  term_k_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_58));
  term_l_58 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_58));
  term_m_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm spaste_1_0 (ATerm b_120 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm);
ATerm Let_2_0 (ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm v_108 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm t_133 (ATerm), ATerm u_133 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm h_134 (ATerm), ATerm);
ATerm rename_4_0 (ATerm o_133 (ATerm (ATerm), ATerm), ATerm p_133 (ATerm), ATerm q_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_133 (ATerm (ATerm), ATerm), ATerm);
ATerm tpaste_1_0 (ATerm x_119 (ATerm), ATerm);
ATerm strename_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm b_122 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm Seqs_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm);
ATerm Prim_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm);
ATerm Var_1_0 (ATerm m_105 (ATerm), ATerm);
ATerm Match_1_0 (ATerm d_109 (ATerm), ATerm);
ATerm Assign_2_0 (ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm);
ATerm list_1_0 (ATerm c_127 (ATerm), ATerm);
ATerm Op_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm);
ATerm Str_1_0 (ATerm q_105 (ATerm), ATerm);
ATerm Real_1_0 (ATerm p_105 (ATerm), ATerm);
ATerm Int_1_0 (ATerm o_105 (ATerm), ATerm);
ATerm Build_1_0 (ATerm e_109 (ATerm), ATerm);
ATerm simple_strategy_0_0 (ATerm);
ATerm isect_1_0 (ATerm u_128 (ATerm), ATerm);
ATerm Matrix_2_0 (ATerm x_111 (ATerm), ATerm y_111 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm d_108 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm diff_1_0 (ATerm w_128 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm);
ATerm for_3_0 (ATerm a_138 (ATerm), ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm RowLet_1_0 (ATerm v_0 (ATerm), ATerm);
ATerm MatrixScope_0_0 (ATerm);
ATerm assert_1_0 (ATerm y_132 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm default_state_0_0 (ATerm);
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm ConsTransition_1_0 (ATerm k_149 (ATerm), ATerm);
ATerm Transition_0_0 (ATerm);
ATerm filter_1_0 (ATerm c_133 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm i_128 (ATerm), ATerm);
ATerm ConsArgs_0_0 (ATerm);
ATerm outedges_0_0 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm Mixture_0_0 (ATerm);
ATerm ShiftColumn_0_0 (ATerm);
ATerm As_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm);
ATerm Row_3_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm);
ATerm SkipWild_0_0 (ATerm);
ATerm repeat_1_0 (ATerm i_137 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm v_132 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm u_132 (ATerm), ATerm);
ATerm scope_2_0 (ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm);
ATerm MatrixMerge_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm y_120 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm r_131 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm l_130 (ATerm), ATerm);
ATerm CollectSubst_0_0 (ATerm);
ATerm IgnoreVar_0_0 (ATerm);
ATerm union_1_0 (ATerm a_129 (ATerm), ATerm);
ATerm CollectSplit_2_0 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm);
ATerm collect_split_2_0 (ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm);
ATerm NZip2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm);
ATerm nzip0_1_0 (ATerm u_125 (ATerm), ATerm);
ATerm Propagate_0_0 (ATerm);
ATerm topdown_1_0 (ATerm x_120 (ATerm), ATerm);
ATerm term_to_matrix_0_0 (ATerm);
ATerm Scope_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm);
ATerm match_to_matrix_0_0 (ATerm);
ATerm match_to_dfa_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm o_104 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm t_104 (ATerm), ATerm);
ATerm apply_to_bodies_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm _2_0 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm w_142 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm y_145 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm j_127 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_127 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_144 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_143 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm w_146 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_126 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_118 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_118 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm z_148 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm y_148 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm y_146 (ATerm), ATerm z_146 (ATerm), ATerm a_147 (ATerm), ATerm b_147 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm h_146 (ATerm), ATerm i_146 (ATerm), ATerm j_146 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  c_0 = t;
  t = term_t_17;
  t = whoami_0_0(t);
  e_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), e_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = c_0;
  return(t);
}
ATerm spaste_1_0 (ATerm b_120 (ATerm), ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_0 (ATerm t)
      {
        ATerm h_0 = NULL,l_0 = NULL;
        h_0 = t;
        t = b_120(t);
        l_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_0, l_0);
        {
          ATerm o_0 (ATerm t)
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
          ATerm p_0 (ATerm t)
          {
            ATerm b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm b_18 = ATgetArgument(t, 0);
                if(((ATgetType(b_18) == AT_LIST) && !(ATisEmpty(b_18))))
                  {
                    b_1 = ATgetFirst((ATermList) b_18);
                    d_1 = (ATerm) ATgetNext((ATermList) b_18);
                  }
                else
                  _fail(t);
                {
                  ATerm c_18 = ATgetArgument(t, 1);
                  if(((ATgetType(c_18) == AT_LIST) && !(ATisEmpty(c_18))))
                    {
                      c_1 = ATgetFirst((ATermList) c_18);
                      e_1 = (ATerm) ATgetNext((ATermList) c_18);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_1, c_1), (ATerm) ATmakeAppl(sym__2, d_1, e_1));
            return(t);
          }
          ATerm s_0 (ATerm t)
          {
            ATerm g_1 = NULL,h_1 = NULL;
            if(match_cons(t, sym__2))
              {
                g_1 = ATgetArgument(t, 0);
                h_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_1), g_1);
            return(t);
          }
          ATerm w_0 (ATerm t)
          {
            ATerm k_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
            if(match_cons(t, sym__2))
              {
                k_1 = ATgetArgument(t, 0);
                r_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = k_1;
            {
              ATerm d_18 = t;
              int e_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm f_18 = ATgetArgument(t, 0);
                      o_1 = ATgetArgument(t, 1);
                      p_1 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_18);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, r_1, o_1, p_1);
                }
              else
                {
                  t = d_18;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm g_18 = ATgetArgument(t, 0);
                      o_1 = ATgetArgument(t, 1);
                      p_1 = ATgetArgument(t, 2);
                      q_1 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_1, o_1, p_1, q_1);
                }
            }
            return(t);
          }
          t = genzip_4_0(o_0, p_0, s_0, w_0, t);
        }
        return(t);
      }
      t = Let_2_0(j_0, _id, t);
      ;
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_0 (ATerm t)
            {
              ATerm r_0 = NULL,u_0 = NULL;
              r_0 = t;
              t = b_120(t);
              u_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_0, u_0);
              {
                ATerm z_0 (ATerm t)
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
                ATerm i_1 (ATerm t)
                {
                  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL,e_2 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm m_18 = ATgetArgument(t, 0);
                      if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
                        {
                          b_2 = ATgetFirst((ATermList) m_18);
                          d_2 = (ATerm) ATgetNext((ATermList) m_18);
                        }
                      else
                        _fail(t);
                      {
                        ATerm n_18 = ATgetArgument(t, 1);
                        if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
                          {
                            c_2 = ATgetFirst((ATermList) n_18);
                            e_2 = (ATerm) ATgetNext((ATermList) n_18);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_2, c_2), (ATerm) ATmakeAppl(sym__2, d_2, e_2));
                  return(t);
                }
                ATerm j_1 (ATerm t)
                {
                  ATerm f_2 = NULL,g_2 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      f_2 = ATgetArgument(t, 0);
                      g_2 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(g_2), f_2);
                  return(t);
                }
                ATerm l_1 (ATerm t)
                {
                  ATerm j_2 = NULL,l_2 = NULL,m_2 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      j_2 = ATgetArgument(t, 0);
                      m_2 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_2;
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
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_2);
                      }
                    else
                      {
                        t = o_18;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm r_18 = ATgetArgument(t, 0);
                            l_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_2, l_2);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(z_0, i_1, j_1, l_1, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, x_0, _id, t);
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              ATerm s_18 = t;
              int t_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm y_0 = NULL,a_1 = NULL;
                    y_0 = t;
                    t = b_120(t);
                    a_1 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_0, a_1);
                    {
                      ATerm s_1 (ATerm t)
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm u_18 = ATgetArgument(t, 0);
                            if(((ATgetType(u_18) != AT_LIST) || !(ATisEmpty(u_18))))
                              _fail(t);
                            {
                              ATerm y_18 = ATgetArgument(t, 1);
                              if(((ATgetType(y_18) != AT_LIST) || !(ATisEmpty(y_18))))
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
                        ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            ATerm z_18 = ATgetArgument(t, 0);
                            if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
                              {
                                q_2 = ATgetFirst((ATermList) z_18);
                                s_2 = (ATerm) ATgetNext((ATermList) z_18);
                              }
                            else
                              _fail(t);
                            {
                              ATerm a_19 = ATgetArgument(t, 1);
                              if(((ATgetType(a_19) == AT_LIST) && !(ATisEmpty(a_19))))
                                {
                                  r_2 = ATgetFirst((ATermList) a_19);
                                  t_2 = (ATerm) ATgetNext((ATermList) a_19);
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_2, r_2), (ATerm) ATmakeAppl(sym__2, s_2, t_2));
                        return(t);
                      }
                      ATerm u_1 (ATerm t)
                      {
                        ATerm u_2 = NULL,v_2 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            u_2 = ATgetArgument(t, 0);
                            v_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATinsert(CheckATermList(v_2), u_2);
                        return(t);
                      }
                      ATerm v_1 (ATerm t)
                      {
                        ATerm x_2 = NULL,z_2 = NULL,a_3 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            x_2 = ATgetArgument(t, 0);
                            a_3 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = x_2;
                        {
                          ATerm b_19 = t;
                          int c_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm d_19 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(c_19);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_3);
                            }
                          else
                            {
                              t = b_19;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm e_19 = ATgetArgument(t, 0);
                                  z_2 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, a_3, z_2);
                            }
                        }
                        return(t);
                      }
                      t = genzip_4_0(s_1, t_1, u_1, v_1, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, m_1, _id, _id, t);
                  ;
                  LocalPopChoice(t_18);
                }
              else
                {
                  t = s_18;
                  {
                    ATerm f_19 = t;
                    int g_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_1 (ATerm t)
                        {
                          ATerm n_1 = NULL,x_1 = NULL;
                          n_1 = t;
                          t = b_120(t);
                          x_1 = t;
                          t = (ATerm) ATmakeAppl(sym__2, n_1, x_1);
                          {
                            ATerm y_1 (ATerm t)
                            {
                              if(match_cons(t, sym__2))
                                {
                                  ATerm h_19 = ATgetArgument(t, 0);
                                  if(((ATgetType(h_19) != AT_LIST) || !(ATisEmpty(h_19))))
                                    _fail(t);
                                  {
                                    ATerm j_19 = ATgetArgument(t, 1);
                                    if(((ATgetType(j_19) != AT_LIST) || !(ATisEmpty(j_19))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATempty;
                              return(t);
                            }
                            ATerm z_1 (ATerm t)
                            {
                              ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,j_3 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm k_19 = ATgetArgument(t, 0);
                                  if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
                                    {
                                      f_3 = ATgetFirst((ATermList) k_19);
                                      h_3 = (ATerm) ATgetNext((ATermList) k_19);
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm l_19 = ATgetArgument(t, 1);
                                    if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
                                      {
                                        g_3 = ATgetFirst((ATermList) l_19);
                                        j_3 = (ATerm) ATgetNext((ATermList) l_19);
                                      }
                                    else
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_3, g_3), (ATerm) ATmakeAppl(sym__2, h_3, j_3));
                              return(t);
                            }
                            ATerm a_2 (ATerm t)
                            {
                              ATerm l_3 = NULL,m_3 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  l_3 = ATgetArgument(t, 0);
                                  m_3 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATinsert(CheckATermList(m_3), l_3);
                              return(t);
                            }
                            ATerm h_2 (ATerm t)
                            {
                              ATerm q_3 = NULL,t_3 = NULL,u_3 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  q_3 = ATgetArgument(t, 0);
                                  u_3 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = q_3;
                              {
                                ATerm m_19 = t;
                                int n_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm r_19 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(n_19);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_3);
                                  }
                                else
                                  {
                                    t = m_19;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm s_19 = ATgetArgument(t, 0);
                                        t_3 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, u_3, t_3);
                                  }
                              }
                              return(t);
                            }
                            t = genzip_4_0(y_1, z_1, a_2, h_2, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, w_1, _id, _id, t);
                        ;
                        LocalPopChoice(g_19);
                      }
                    else
                      {
                        t = f_19;
                        {
                          ATerm i_2 (ATerm t)
                          {
                            ATerm k_4 = NULL;
                            t = b_120(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                k_4 = ATgetFirst((ATermList) t);
                                {
                                  ATerm u_19 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = k_4;
                            return(t);
                          }
                          t = Rec_2_0(i_2, _id, t);
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
ATerm Rec_2_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,t_4 = NULL,w_4 = NULL,x_4 = NULL,z_4 = NULL,a_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_Rec_2))
    {
      t_4 = ATgetArgument(t, 0);
      w_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_5);
  p_4 = t;
  t = t_4;
  t = t_109(t);
  x_4 = t;
  t = w_4;
  t = u_109(t);
  z_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, x_4, z_4), p_4);
  return(t);
}
ATerm Let_2_0 (ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm t)
{
  ATerm e_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
  l_5 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_5 = ATgetArgument(t, 0);
      h_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_5);
  e_5 = t;
  t = g_5;
  t = w_108(t);
  j_5 = t;
  t = h_5;
  t = x_108(t);
  k_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, j_5, k_5), e_5);
  return(t);
}
ATerm sboundin_3_0 (ATerm c_120 (ATerm), ATerm d_120 (ATerm), ATerm e_120 (ATerm), ATerm t)
{
  ATerm v_19 = t;
  int z_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(c_120, c_120, t);
      ;
      LocalPopChoice(z_19);
    }
  else
    {
      t = v_19;
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(e_120, e_120, c_120, t);
            ;
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm d_20 = t;
              int e_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(e_120, e_120, e_120, c_120, t);
                  ;
                  LocalPopChoice(e_20);
                }
              else
                {
                  t = d_20;
                  t = Rec_2_0(e_120, c_120, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm s_5 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      s_5 = ATgetArgument(t, 0);
      {
        ATerm f_20 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_5;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm v_5 = NULL;
      ATerm g_20 = t;
      int k_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              v_5 = ATgetArgument(t, 0);
              {
                ATerm n_20 = ATgetArgument(t, 1);
              }
              {
                ATerm o_20 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(k_20);
          t = v_5;
        }
      else
        {
          t = g_20;
          if(match_cons(t, sym_SDefT_4))
            {
              v_5 = ATgetArgument(t, 0);
              {
                ATerm p_20 = ATgetArgument(t, 1);
              }
              {
                ATerm q_20 = ATgetArgument(t, 2);
              }
              {
                ATerm r_20 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = v_5;
        }
      return(t);
    }
    t = map_1_0(k_2, t);
  }
  return(t);
}
ATerm SVar_1_0 (ATerm v_108 (ATerm), ATerm t)
{
  ATerm e_6 = NULL,g_6 = NULL,h_6 = NULL,k_6 = NULL;
  k_6 = t;
  if(match_cons(t, sym_SVar_1))
    {
      g_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_6);
  e_6 = t;
  t = g_6;
  t = v_108(t);
  h_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, h_6), e_6);
  return(t);
}
ATerm DistBinding_2_0 (ATerm z_133 (ATerm), ATerm a_134 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_7 = NULL,a_8 = NULL,f_8 = NULL;
  if(match_cons(t, sym__3))
    {
      f_8 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
      d_7 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_8;
  {
    ATerm n_2 (ATerm t)
    {
      ATerm h_8 = NULL;
      h_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_8, d_7);
      t = z_133(t);
      return(t);
    }
    ATerm o_2 (ATerm t)
    {
      ATerm o_8 = NULL;
      o_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_8, a_8);
      t = z_133(t);
      return(t);
    }
    t = a_134(n_2, o_2, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm t_133 (ATerm), ATerm u_133 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm c_9 = NULL,e_9 = NULL,r_9 = NULL,z_9 = NULL,b_10 = NULL,i_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym__2))
    {
      c_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_9;
  t = t_133(t);
  r_9 = t;
  t = map_1_0(new_0_0, t);
  z_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_9, z_9);
  {
    ATerm p_2 (ATerm t)
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
    ATerm w_2 (ATerm t)
    {
      ATerm y_10 = NULL,f_11 = NULL,m_11 = NULL,t_11 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm w_20 = ATgetArgument(t, 0);
          if(((ATgetType(w_20) == AT_LIST) && !(ATisEmpty(w_20))))
            {
              y_10 = ATgetFirst((ATermList) w_20);
              m_11 = (ATerm) ATgetNext((ATermList) w_20);
            }
          else
            _fail(t);
          {
            ATerm x_20 = ATgetArgument(t, 1);
            if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
              {
                f_11 = ATgetFirst((ATermList) x_20);
                t_11 = (ATerm) ATgetNext((ATermList) x_20);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_10, f_11), (ATerm) ATmakeAppl(sym__2, m_11, t_11));
      return(t);
    }
    ATerm y_2 (ATerm t)
    {
      ATerm c_12 = NULL,n_12 = NULL;
      if(match_cons(t, sym__2))
        {
          c_12 = ATgetArgument(t, 0);
          n_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(n_12), c_12);
      return(t);
    }
    t = genzip_4_0(p_2, w_2, y_2, _id, t);
    b_10 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_10, e_9);
    {
      ATerm d_21 = t;
      int f_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm g_21 = ATgetArgument(t, 0);
              ATerm j_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_10;
          {
            ATerm b_3 (ATerm t)
            {
              t = e_9;
              return(t);
            }
            t = at_end_1_0(b_3, t);
          }
          ;
          LocalPopChoice(f_21);
        }
      else
        {
          t = d_21;
          {
            ATerm p_3 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_10, e_9));
            if(match_cons(t, sym__2))
              {
                ATerm m_21 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) m_21) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                p_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = p_3;
            t = concat_0_0(t);
          }
        }
      i_10 = t;
      t = c_9;
      {
        ATerm c_3 (ATerm t)
        {
          t = z_9;
          return(t);
        }
        t = u_133(c_3, t);
        r_10 = t;
        t = (ATerm) ATmakeAppl(sym__3, r_10, e_9, i_10);
      }
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL,m_15 = NULL,v_15 = NULL,e_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_15;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_16 = ATgetFirst((ATermList) t);
      n_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_16;
  if(match_cons(t, sym__2))
    {
      n_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_14;
            if((m_15 != t))
              {
                _fail(t);
              }
            t = o_14;
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            t = (ATerm) ATmakeAppl(sym__2, m_15, n_16);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_15, n_16);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm h_134 (ATerm), ATerm t)
{
  ATerm t_19 (ATerm t)
  {
    ATerm t_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_134(t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = t_21;
        {
          ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
          o_19 = t;
          if(match_cons(t, sym__2))
            {
              p_19 = ATgetArgument(t, 0);
              q_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_19;
          {
            ATerm d_3 (ATerm t)
            {
              ATerm a_4 = NULL;
              a_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_4, q_19);
              t = t_19(t);
              return(t);
            }
            t = SRTS_all(d_3, t);
          }
        }
      }
    return(t);
  }
  t = t_19(t);
  return(t);
}
ATerm rename_4_0 (ATerm o_133 (ATerm (ATerm), ATerm), ATerm p_133 (ATerm), ATerm q_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_133 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_20, (ATerm) ATempty);
  {
    ATerm s_20 (ATerm t)
    {
      ATerm e_3 (ATerm t)
      {
        ATerm a_22 = t;
        int d_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_20 = NULL,m_20 = NULL;
            if(match_cons(t, sym__2))
              {
                l_20 = ATgetArgument(t, 0);
                m_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_20;
            {
              ATerm i_3 (ATerm t)
              {
                ATerm b_4 = NULL;
                b_4 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_4, m_20);
                t = lookup_0_0(t);
                return(t);
              }
              t = o_133(i_3, t);
            }
            ;
            LocalPopChoice(d_22);
          }
        else
          {
            t = a_22;
            t = RnBinding_2_0(p_133, r_133, t);
            t = DistBinding_2_0(s_20, q_133, t);
          }
        return(t);
      }
      t = env_alltd_1_0(e_3, t);
      return(t);
    }
    t = s_20(t);
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm x_119 (ATerm), ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(x_119, _id, t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              ATerm h_4 = NULL,l_4 = NULL;
              h_4 = t;
              t = x_119(t);
              l_4 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_4, l_4);
              {
                ATerm n_3 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm i_22 = ATgetArgument(t, 0);
                      if(((ATgetType(i_22) != AT_LIST) || !(ATisEmpty(i_22))))
                        _fail(t);
                      {
                        ATerm j_22 = ATgetArgument(t, 1);
                        if(((ATgetType(j_22) != AT_LIST) || !(ATisEmpty(j_22))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm o_3 (ATerm t)
                {
                  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm o_22 = ATgetArgument(t, 0);
                      if(((ATgetType(o_22) == AT_LIST) && !(ATisEmpty(o_22))))
                        {
                          y_20 = ATgetFirst((ATermList) o_22);
                          a_21 = (ATerm) ATgetNext((ATermList) o_22);
                        }
                      else
                        _fail(t);
                      {
                        ATerm p_22 = ATgetArgument(t, 1);
                        if(((ATgetType(p_22) == AT_LIST) && !(ATisEmpty(p_22))))
                          {
                            z_20 = ATgetFirst((ATermList) p_22);
                            b_21 = (ATerm) ATgetNext((ATermList) p_22);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_20, z_20), (ATerm) ATmakeAppl(sym__2, a_21, b_21));
                  return(t);
                }
                ATerm r_3 (ATerm t)
                {
                  ATerm c_21 = NULL,e_21 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      c_21 = ATgetArgument(t, 0);
                      e_21 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(e_21), c_21);
                  return(t);
                }
                ATerm s_3 (ATerm t)
                {
                  ATerm i_21 = NULL,k_21 = NULL,l_21 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      i_21 = ATgetArgument(t, 0);
                      l_21 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_21;
                  {
                    ATerm q_22 = t;
                    int r_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm s_22 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_22);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_21);
                      }
                    else
                      {
                        t = q_22;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm t_22 = ATgetArgument(t, 0);
                            k_21 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_21, k_21);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(n_3, o_3, r_3, s_3, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, k_3, _id, t);
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm v_3 (ATerm t)
              {
                ATerm o_4 = NULL,r_4 = NULL;
                o_4 = t;
                t = x_119(t);
                r_4 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_4, r_4);
                {
                  ATerm w_3 (ATerm t)
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
                  ATerm x_3 (ATerm t)
                  {
                    ATerm q_21 = NULL,r_21 = NULL,u_21 = NULL,v_21 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm x_22 = ATgetArgument(t, 0);
                        if(((ATgetType(x_22) == AT_LIST) && !(ATisEmpty(x_22))))
                          {
                            q_21 = ATgetFirst((ATermList) x_22);
                            u_21 = (ATerm) ATgetNext((ATermList) x_22);
                          }
                        else
                          _fail(t);
                        {
                          ATerm y_22 = ATgetArgument(t, 1);
                          if(((ATgetType(y_22) == AT_LIST) && !(ATisEmpty(y_22))))
                            {
                              r_21 = ATgetFirst((ATermList) y_22);
                              v_21 = (ATerm) ATgetNext((ATermList) y_22);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_21, r_21), (ATerm) ATmakeAppl(sym__2, u_21, v_21));
                    return(t);
                  }
                  ATerm y_3 (ATerm t)
                  {
                    ATerm w_21 = NULL,x_21 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        w_21 = ATgetArgument(t, 0);
                        x_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(CheckATermList(x_21), w_21);
                    return(t);
                  }
                  ATerm z_3 (ATerm t)
                  {
                    ATerm z_21 = NULL,b_22 = NULL,c_22 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        z_21 = ATgetArgument(t, 0);
                        c_22 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = z_21;
                    {
                      ATerm a_23 = t;
                      int b_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm c_23 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_23);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_22);
                        }
                      else
                        {
                          t = a_23;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm e_23 = ATgetArgument(t, 0);
                              b_22 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, c_22, b_22);
                        }
                    }
                    return(t);
                  }
                  t = genzip_4_0(w_3, x_3, y_3, z_3, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, v_3, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm u_22 = NULL,z_22 = NULL,d_23 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        z_22 = ATgetArgument(t, 0);
        t = z_22;
        if(match_cons(t, sym_Rule_3))
          {
            u_22 = ATgetArgument(t, 0);
            {
              ATerm f_23 = ATgetArgument(t, 1);
            }
            {
              ATerm h_23 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = u_22;
        {
          ATerm d_4 (ATerm t)
          {
            ATerm g_23 = NULL;
            if(match_cons(t, sym_Var_1))
              {
                g_23 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, g_23);
            return(t);
          }
          ATerm e_4 (ATerm t)
          {
            ATerm j_23 = t;
            int k_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Bind0_0_0(t);
                ;
                LocalPopChoice(k_23);
              }
            else
              {
                t = j_23;
                {
                  ATerm i_23 = NULL,l_23 = NULL;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      i_23 = ATgetArgument(t, 0);
                      t = i_23;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm m_23 = t;
                      int p_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm r_23 = ATgetArgument(t, 0);
                              ATerm s_23 = ATgetArgument(t, 1);
                              l_23 = ATgetArgument(t, 2);
                              {
                                ATerm t_23 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(p_23);
                          t = l_23;
                          {
                            ATerm f_4 (ATerm t)
                            {
                              ATerm u_23 = NULL;
                              ATerm v_23 = t;
                              int w_23 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      u_23 = ATgetArgument(t, 0);
                                      {
                                        ATerm x_23 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(w_23);
                                  t = u_23;
                                }
                              else
                                {
                                  t = v_23;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      u_23 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = u_23;
                                }
                              return(t);
                            }
                            t = map_1_0(f_4, t);
                          }
                        }
                      else
                        {
                          t = m_23;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm y_23 = ATgetArgument(t, 0);
                              ATerm z_23 = ATgetArgument(t, 1);
                              l_23 = ATgetArgument(t, 2);
                              {
                                ATerm a_24 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = l_23;
                          {
                            ATerm g_4 (ATerm t)
                            {
                              ATerm d_24 = NULL;
                              ATerm b_24 = t;
                              int c_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      d_24 = ATgetArgument(t, 0);
                                      {
                                        ATerm e_24 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(c_24);
                                  t = d_24;
                                }
                              else
                                {
                                  t = b_24;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      d_24 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = d_24;
                                }
                              return(t);
                            }
                            t = map_1_0(g_4, t);
                          }
                        }
                    }
                }
              }
            return(t);
          }
          t = free_vars_3_0(d_4, e_4, tboundin_3_0, t);
        }
      }
    else
      {
        ATerm f_24 = t;
        int g_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                z_22 = ATgetArgument(t, 0);
                {
                  ATerm h_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_24);
            t = z_22;
          }
        else
          {
            t = f_24;
            {
              ATerm i_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm k_24 = ATgetArgument(t, 0);
                      ATerm m_24 = ATgetArgument(t, 1);
                      d_23 = ATgetArgument(t, 2);
                      {
                        ATerm p_24 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_24);
                  t = d_23;
                  {
                    ATerm i_4 (ATerm t)
                    {
                      ATerm l_24 = NULL;
                      ATerm q_24 = t;
                      int r_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              l_24 = ATgetArgument(t, 0);
                              {
                                ATerm s_24 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(r_24);
                          t = l_24;
                        }
                      else
                        {
                          t = q_24;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              l_24 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = l_24;
                        }
                      return(t);
                    }
                    t = map_1_0(i_4, t);
                  }
                }
              else
                {
                  t = i_24;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm u_24 = ATgetArgument(t, 0);
                      ATerm v_24 = ATgetArgument(t, 1);
                      d_23 = ATgetArgument(t, 2);
                      {
                        ATerm w_24 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = d_23;
                  {
                    ATerm j_4 (ATerm t)
                    {
                      ATerm t_24 = NULL;
                      ATerm x_24 = t;
                      int z_24 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              t_24 = ATgetArgument(t, 0);
                              {
                                ATerm a_25 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(z_24);
                          t = t_24;
                        }
                      else
                        {
                          t = x_24;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              t_24 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = t_24;
                        }
                      return(t);
                    }
                    t = map_1_0(j_4, t);
                  }
                }
            }
          }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, c_4, tboundin_3_0, tpaste_1_0, t);
  {
    ATerm m_4 (ATerm t)
    {
      ATerm c_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Bind1_0_0(t);
          ;
          LocalPopChoice(d_25);
        }
      else
        {
          t = c_25;
          {
            ATerm y_24 = NULL,b_25 = NULL;
            ATerm e_25 = t;
            int f_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDef_3))
                  {
                    ATerm g_25 = ATgetArgument(t, 0);
                    b_25 = ATgetArgument(t, 1);
                    {
                      ATerm h_25 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(f_25);
                t = b_25;
                {
                  ATerm n_4 (ATerm t)
                  {
                    ATerm i_25 = NULL;
                    ATerm j_25 = t;
                    int k_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_VarDec_2))
                          {
                            i_25 = ATgetArgument(t, 0);
                            {
                              ATerm l_25 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_25);
                        t = i_25;
                      }
                    else
                      {
                        t = j_25;
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            i_25 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = i_25;
                      }
                    return(t);
                  }
                  t = map_1_0(n_4, t);
                }
              }
            else
              {
                t = e_25;
                {
                  ATerm m_25 = t;
                  int n_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          y_24 = ATgetArgument(t, 0);
                          {
                            ATerm o_25 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(n_25);
                      t = (ATerm) ATinsert(ATempty, y_24);
                    }
                  else
                    {
                      t = m_25;
                      {
                        ATerm p_25 = t;
                        int r_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_SDefT_4))
                              {
                                ATerm s_25 = ATgetArgument(t, 0);
                                b_25 = ATgetArgument(t, 1);
                                {
                                  ATerm t_25 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm u_25 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(r_25);
                            t = b_25;
                            {
                              ATerm q_4 (ATerm t)
                              {
                                ATerm q_25 = NULL;
                                ATerm v_25 = t;
                                int w_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        q_25 = ATgetArgument(t, 0);
                                        {
                                          ATerm x_25 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(w_25);
                                    t = q_25;
                                  }
                                else
                                  {
                                    t = v_25;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        q_25 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = q_25;
                                  }
                                return(t);
                              }
                              t = map_1_0(q_4, t);
                            }
                          }
                        else
                          {
                            t = p_25;
                            if(match_cons(t, sym_RDefT_4))
                              {
                                ATerm y_25 = ATgetArgument(t, 0);
                                b_25 = ATgetArgument(t, 1);
                                {
                                  ATerm a_26 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm b_26 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            t = b_25;
                            {
                              ATerm s_4 (ATerm t)
                              {
                                ATerm z_25 = NULL;
                                ATerm c_26 = t;
                                int d_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        z_25 = ATgetArgument(t, 0);
                                        {
                                          ATerm e_26 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(d_26);
                                    t = z_25;
                                  }
                                else
                                  {
                                    t = c_26;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        z_25 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = z_25;
                                  }
                                return(t);
                              }
                              t = map_1_0(s_4, t);
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
    t = rename_4_0(SVar_1_0, m_4, sboundin_3_0, spaste_1_0, t);
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm j_26 = NULL,k_26 = NULL,m_26 = NULL,s_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL;
  if(match_cons(t, sym__2))
    {
      m_26 = ATgetArgument(t, 0);
      s_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_26;
  if(match_cons(t, sym_Build_1))
    {
      ATerm f_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_26;
  if(match_cons(t, sym_Where_1))
    {
      v_26 = ATgetArgument(t, 0);
      t = v_26;
      if(match_cons(t, sym_Prim_2))
        {
          j_26 = ATgetArgument(t, 0);
          k_26 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          v_26 = ATgetArgument(t, 0);
          w_26 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, v_26, w_26);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              v_26 = ATgetArgument(t, 0);
              w_26 = ATgetArgument(t, 1);
              x_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm l_27 = NULL,n_27 = NULL,p_27 = NULL,q_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if(match_cons(g_26, sym_Build_1))
        {
          ATerm i_26 = ATgetArgument(g_26, 0);
          if(match_cons(i_26, sym_Op_2))
            {
              n_27 = ATgetArgument(i_26, 0);
              l_27 = ATgetArgument(i_26, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(match_cons(h_26, sym_Match_1))
          {
            ATerm l_26 = ATgetArgument(h_26, 0);
            if(match_cons(l_26, sym_Op_2))
              {
                if((n_27 != ATgetArgument(l_26, 0)))
                  {
                    _fail(ATgetArgument(l_26, 0));
                  }
                p_27 = ATgetArgument(l_26, 1);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_27, p_27);
  {
    ATerm u_4 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm o_26 = ATgetArgument(t, 0);
          if(((ATgetType(o_26) != AT_LIST) || !(ATisEmpty(o_26))))
            _fail(t);
          {
            ATerm p_26 = ATgetArgument(t, 1);
            if(((ATgetType(p_26) != AT_LIST) || !(ATisEmpty(p_26))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm v_4 (ATerm t)
    {
      ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm q_26 = ATgetArgument(t, 0);
          if(((ATgetType(q_26) == AT_LIST) && !(ATisEmpty(q_26))))
            {
              r_27 = ATgetFirst((ATermList) q_26);
              t_27 = (ATerm) ATgetNext((ATermList) q_26);
            }
          else
            _fail(t);
          {
            ATerm r_26 = ATgetArgument(t, 1);
            if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
              {
                s_27 = ATgetFirst((ATermList) r_26);
                u_27 = (ATerm) ATgetNext((ATermList) r_26);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_27, s_27), (ATerm) ATmakeAppl(sym__2, t_27, u_27));
      return(t);
    }
    ATerm y_4 (ATerm t)
    {
      ATerm v_27 = NULL,w_27 = NULL;
      if(match_cons(t, sym__2))
        {
          v_27 = ATgetArgument(t, 0);
          w_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(w_27), v_27);
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      ATerm x_27 = NULL,y_27 = NULL;
      if(match_cons(t, sym__2))
        {
          x_27 = ATgetArgument(t, 0);
          y_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_27), (ATerm) ATmakeAppl(sym_Match_1, y_27));
      return(t);
    }
    t = genzip_4_0(u_4, v_4, y_4, b_5, t);
    q_27 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_27), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, n_27, l_27)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_26 = ATgetArgument(t, 0);
      if(match_cons(t_26, sym_Build_1))
        {
          ATerm y_26 = ATgetArgument(t_26, 0);
          if(match_cons(y_26, sym_Op_2))
            {
              z_27 = ATgetArgument(y_26, 0);
              {
                ATerm z_26 = ATgetArgument(y_26, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm u_26 = ATgetArgument(t, 1);
        if(match_cons(u_26, sym_Match_1))
          {
            ATerm a_27 = ATgetArgument(u_26, 0);
            if(match_cons(a_27, sym_Op_2))
              {
                a_28 = ATgetArgument(a_27, 0);
                {
                  ATerm b_27 = ATgetArgument(a_27, 1);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_27, a_28);
  {
    ATerm d_27 = t;
    if((PushChoice() == 0))
      {
        ATerm b_28 = NULL;
        if(match_cons(t, sym__2))
          {
            b_28 = ATgetArgument(t, 0);
            if((b_28 != ATgetArgument(t, 1)))
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
        t = d_27;
      }
    t = term_e_27;
  }
  return(t);
}
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm p_30 (ATerm q_29, ATerm r_29, ATerm s_29, ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, q_29, r_29);
    {
      ATerm f_27 = t;
      int g_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MisMatch_0_0(t);
          ;
          LocalPopChoice(g_27);
        }
      else
        {
          t = f_27;
          {
            ATerm h_27 = t;
            int i_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = BuildMatchFusion_0_0(t);
                ;
                LocalPopChoice(i_27);
              }
            else
              {
                t = h_27;
                {
                  ATerm j_27 = t;
                  int c_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_29 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          ATerm d_28 = ATgetArgument(t, 0);
                          ATerm g_28 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_29;
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm h_28 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = r_29;
                      if(match_cons(t, sym_Build_1))
                        {
                          z_29 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      ;
                      LocalPopChoice(c_28);
                    }
                  else
                    {
                      t = j_27;
                      {
                        ATerm i_28 = t;
                        int j_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = BuildPrim_0_0(t);
                            ;
                            LocalPopChoice(j_28);
                          }
                        else
                          {
                            t = i_28;
                            {
                              ATerm d_30 = NULL,f_30 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm k_28 = ATgetArgument(t, 0);
                                  ATerm l_28 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = q_29;
                              if(match_cons(t, sym_Match_1))
                                {
                                  d_30 = ATgetArgument(t, 0);
                                  t = r_29;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      f_30 = ATgetArgument(t, 0);
                                      t = f_30;
                                      if((d_30 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, d_30);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Build_1))
                                        {
                                          f_30 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = f_30;
                                      if((d_30 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, d_30);
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      d_30 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = r_29;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      f_30 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_30;
                                  if((d_30 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Build_1, d_30);
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
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  l_30 = t;
  if(match_cons(t, sym_Seq_2))
    {
      m_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_30;
  if(match_cons(t, sym_Seq_2))
    {
      j_30 = ATgetArgument(t, 0);
      k_30 = ATgetArgument(t, 1);
      {
        ATerm m_28 = t;
        int n_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_5 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, m_30, j_30);
            {
              ATerm o_28 = t;
              int q_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(q_28);
                }
              else
                {
                  t = o_28;
                  {
                    ATerm r_28 = t;
                    int s_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(s_28);
                      }
                    else
                      {
                        t = r_28;
                        {
                          ATerm u_28 = t;
                          int v_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_5 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm w_28 = ATgetArgument(t, 0);
                                  ATerm x_28 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = m_30;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm y_28 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = j_30;
                              if(match_cons(t, sym_Build_1))
                                {
                                  z_5 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              ;
                              LocalPopChoice(v_28);
                            }
                          else
                            {
                              t = u_28;
                              {
                                ATerm z_28 = t;
                                int a_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(a_29);
                                  }
                                else
                                  {
                                    t = z_28;
                                    {
                                      ATerm m_6 = NULL,p_6 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm b_29 = ATgetArgument(t, 0);
                                          ATerm c_29 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = m_30;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          m_6 = ATgetArgument(t, 0);
                                          t = j_30;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              p_6 = ATgetArgument(t, 0);
                                              t = p_6;
                                              if((m_6 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, m_6);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  p_6 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = p_6;
                                              if((m_6 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, m_6);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              m_6 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = j_30;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              p_6 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = p_6;
                                          if((m_6 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_6);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              q_5 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, q_5, k_30);
            }
            ;
            LocalPopChoice(n_28);
          }
        else
          {
            t = m_28;
            t = p_30(m_30, n_30, l_30, t);
          }
      }
    }
  else
    {
      t = p_30(m_30, n_30, l_30, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm b_122 (ATerm), ATerm t)
{
  ATerm q_30 (ATerm t)
  {
    ATerm d_29 = t;
    int e_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_122(t);
        ;
        LocalPopChoice(e_29);
      }
    else
      {
        t = d_29;
        t = SRTS_one(q_30, t);
      }
    return(t);
  }
  t = q_30(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
        {
          ATerm h_29 = ATgetFirst((ATermList) f_29);
          if(match_cons(h_29, sym_SDefT_4))
            {
              s_30 = ATgetArgument(h_29, 0);
              {
                ATerm j_29 = ATgetArgument(h_29, 1);
                if(((ATgetType(j_29) != AT_LIST) || !(ATisEmpty(j_29))))
                  _fail(t);
              }
              {
                ATerm k_29 = ATgetArgument(h_29, 2);
                if(((ATgetType(k_29) != AT_LIST) || !(ATisEmpty(k_29))))
                  _fail(t);
              }
              r_30 = ATgetArgument(h_29, 3);
            }
          else
            _fail(t);
          {
            ATerm i_29 = (ATerm) ATgetNext((ATermList) f_29);
            if(((ATgetType(i_29) != AT_LIST) || !(ATisEmpty(i_29))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm g_29 = ATgetArgument(t, 1);
        if(match_cons(g_29, sym_CallT_3))
          {
            ATerm l_29 = ATgetArgument(g_29, 0);
            if(match_cons(l_29, sym_SVar_1))
              {
                if((s_30 != ATgetArgument(l_29, 0)))
                  {
                    _fail(ATgetArgument(l_29, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm m_29 = ATgetArgument(g_29, 1);
              if(((ATgetType(m_29) != AT_LIST) || !(ATisEmpty(m_29))))
                _fail(t);
            }
            {
              ATerm n_29 = ATgetArgument(g_29, 2);
              if(((ATgetType(n_29) != AT_LIST) || !(ATisEmpty(n_29))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_30;
  {
    ATerm o_29 = t;
    if((PushChoice() == 0))
      {
        ATerm c_5 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm p_29 = ATgetArgument(t, 0);
              if(match_cons(p_29, sym_SVar_1))
                {
                  if((s_30 != ATgetArgument(p_29, 0)))
                    {
                      _fail(ATgetArgument(p_29, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm t_29 = ATgetArgument(t, 1);
                if(((ATgetType(t_29) != AT_LIST) || !(ATisEmpty(t_29))))
                  _fail(t);
              }
              {
                ATerm u_29 = ATgetArgument(t, 2);
                if(((ATgetType(u_29) != AT_LIST) || !(ATisEmpty(u_29))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(c_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_29;
      }
    t = r_30;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,h_31 = NULL,i_31 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      h_31 = ATgetArgument(t, 0);
      t = h_31;
      if(match_cons(t, sym_Seq_2))
        {
          f_31 = ATgetArgument(t, 0);
          b_31 = ATgetArgument(t, 1);
          t = f_31;
          if(match_cons(t, sym_Where_1))
            {
              a_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_31;
          if(match_cons(t, sym_Seq_2))
            {
              c_31 = ATgetArgument(t, 0);
              e_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_31;
          if(match_cons(t, sym_Build_1))
            {
              d_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, a_31, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_31), e_31)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              f_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          h_31 = ATgetArgument(t, 0);
          t = h_31;
          if(match_cons(t, sym_Test_1))
            {
              f_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              h_31 = ATgetArgument(t, 0);
              t = h_31;
              if(match_cons(t, sym_Not_1))
                {
                  f_31 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, f_31);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  h_31 = ATgetArgument(t, 0);
                  i_31 = ATgetArgument(t, 1);
                  t = i_31;
                  if((h_31 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      h_31 = ATgetArgument(t, 0);
                      i_31 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_31;
                  if((h_31 != t))
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
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      w_31 = ATgetArgument(t, 0);
      z_31 = ATgetArgument(t, 1);
      t = w_31;
      if(match_cons(t, sym_LChoice_2))
        {
          x_31 = ATgetArgument(t, 0);
          y_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, x_31, (ATerm) ATmakeAppl(sym_LChoice_2, y_31, z_31));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          w_31 = ATgetArgument(t, 0);
          z_31 = ATgetArgument(t, 1);
          t = w_31;
          if(match_cons(t, sym_Seq_2))
            {
              x_31 = ATgetArgument(t, 0);
              y_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, x_31, (ATerm) ATmakeAppl(sym_Seq_2, y_31, z_31));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              w_31 = ATgetArgument(t, 0);
              z_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_31;
          if(match_cons(t, sym_Choice_2))
            {
              x_31 = ATgetArgument(t, 0);
              y_31 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, x_31, (ATerm) ATmakeAppl(sym_Choice_2, y_31, z_31));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm v_29 = t;
  int w_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm d_5 (ATerm t)
        {
          ATerm x_29 = t;
          int y_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(y_29);
            }
          else
            {
              t = x_29;
            }
          return(t);
        }
        t = Cons_2_0(_id, d_5, t);
      }
      ;
      LocalPopChoice(w_29);
    }
  else
    {
      t = v_29;
      {
        ATerm f_5 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, f_5, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm u_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,a_33 = NULL,b_33 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      a_33 = ATgetArgument(t, 0);
      b_33 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, a_33, b_33);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          a_33 = ATgetArgument(t, 0);
          t = a_33;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_32 = ATgetFirst((ATermList) t);
              w_32 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, u_32, (ATerm) ATmakeAppl(sym_LChoices_1, w_32));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_27;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              a_33 = ATgetArgument(t, 0);
              t = a_33;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_32 = ATgetFirst((ATermList) t);
                  w_32 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, u_32, (ATerm) ATmakeAppl(sym_Choices_1, w_32));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_27;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  a_33 = ATgetArgument(t, 0);
                  t = a_33;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_32 = ATgetFirst((ATermList) t);
                      w_32 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_32, (ATerm) ATmakeAppl(sym_Seqs_1, w_32));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_a_30;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_33 = ATgetArgument(t, 0);
                      b_33 = ATgetArgument(t, 1);
                      y_32 = ATgetArgument(t, 2);
                      x_32 = ATgetArgument(t, 3);
                      {
                        ATerm u_33 = NULL,w_33 = NULL;
                        t = b_33;
                        {
                          ATerm i_5 (ATerm t)
                          {
                            ATerm y_33 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                y_33 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, y_33, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_30), term_e_30));
                            return(t);
                          }
                          t = map1_1_0(i_5, t);
                          u_33 = t;
                          t = y_32;
                          {
                            ATerm m_5 (ATerm t)
                            {
                              ATerm g_30 = t;
                              int h_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_34 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      a_34 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_34, term_e_30);
                                  ;
                                  LocalPopChoice(h_30);
                                }
                              else
                                {
                                  t = g_30;
                                }
                              return(t);
                            }
                            t = map1_1_0(m_5, t);
                            w_33 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_33, u_33, w_33, x_32);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          a_33 = ATgetArgument(t, 0);
                          b_33 = ATgetArgument(t, 1);
                          y_32 = ATgetArgument(t, 2);
                          x_32 = ATgetArgument(t, 3);
                          {
                            ATerm i_30 = t;
                            int o_30 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_34 = NULL,j_34 = NULL;
                                t = y_32;
                                {
                                  ATerm n_5 (ATerm t)
                                  {
                                    ATerm k_34 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        k_34 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, k_34, term_e_30);
                                    return(t);
                                  }
                                  t = map1_1_0(n_5, t);
                                  i_34 = t;
                                  t = b_33;
                                  {
                                    ATerm o_5 (ATerm t)
                                    {
                                      ATerm t_30 = t;
                                      int u_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_34 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              m_34 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, m_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_30), term_e_30));
                                          ;
                                          LocalPopChoice(u_30);
                                        }
                                      else
                                        {
                                          t = t_30;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(o_5, t);
                                    j_34 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, a_33, j_34, i_34, x_32);
                                  }
                                }
                                ;
                                LocalPopChoice(o_30);
                              }
                            else
                              {
                                t = i_30;
                                {
                                  ATerm v_34 = NULL,w_34 = NULL;
                                  t = b_33;
                                  {
                                    ATerm p_5 (ATerm t)
                                    {
                                      ATerm x_34 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          x_34 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, x_34, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_30), term_e_30));
                                      return(t);
                                    }
                                    t = map1_1_0(p_5, t);
                                    v_34 = t;
                                    t = y_32;
                                    {
                                      ATerm r_5 (ATerm t)
                                      {
                                        ATerm v_30 = t;
                                        int x_30 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm z_34 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                z_34 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, z_34, term_e_30);
                                            ;
                                            LocalPopChoice(x_30);
                                          }
                                        else
                                          {
                                            t = v_30;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(r_5, t);
                                      w_34 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, a_33, v_34, w_34, x_32);
                                    }
                                  }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              a_33 = ATgetArgument(t, 0);
                              b_33 = ATgetArgument(t, 1);
                              y_32 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, b_33, (ATerm) ATmakeAppl(sym_Op_2, term_y_30, (ATerm) ATinsert(ATinsert(ATempty, y_32), a_33)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  a_33 = ATgetArgument(t, 0);
                                  b_33 = ATgetArgument(t, 1);
                                  y_32 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, y_32)), a_33), (ATerm) ATmakeAppl(sym_Build_1, b_33)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      a_33 = ATgetArgument(t, 0);
                                      b_33 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_33, (ATerm) ATmakeAppl(sym_Match_1, b_33));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          a_33 = ATgetArgument(t, 0);
                                          b_33 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_33), b_33);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              a_33 = ATgetArgument(t, 0);
                                              b_33 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_33), a_33);
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
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm v_36 = NULL,y_36 = NULL,z_36 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_36 = ATgetArgument(t, 0);
      t = v_36;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_36 = ATgetArgument(t, 0);
          t = v_36;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_a_30;
        }
      else
        {
          ATerm z_30 = t;
          int g_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  v_36 = ATgetArgument(t, 0);
                  {
                    ATerm j_31 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(g_31);
              t = v_36;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
            }
          else
            {
              t = z_30;
              {
                ATerm k_31 = t;
                int l_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm m_31 = ATgetArgument(t, 0);
                        y_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(l_31);
                    t = y_36;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                  }
                else
                  {
                    t = k_31;
                    {
                      ATerm n_31 = t;
                      int o_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm p_31 = ATgetArgument(t, 0);
                              y_36 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(o_31);
                          t = y_36;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          t = n_31;
                          if(match_cons(t, sym_Some_1))
                            {
                              v_36 = ATgetArgument(t, 0);
                              t = v_36;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  v_36 = ATgetArgument(t, 0);
                                  t = v_36;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  ATerm q_31 = t;
                                  int s_31 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm t_31 = ATgetArgument(t, 0);
                                          y_36 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(s_31);
                                      t = y_36;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      t = q_31;
                                      {
                                        ATerm u_31 = t;
                                        int v_31 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm a_32 = ATgetArgument(t, 0);
                                                y_36 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(v_31);
                                            t = y_36;
                                            {
                                              ATerm t_5 (ATerm t)
                                              {
                                                if(!(match_cons(t, sym_Fail_0)))
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = fetch_1_0(t_5, t);
                                              t = term_e_27;
                                            }
                                          }
                                        else
                                          {
                                            t = u_31;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                v_36 = ATgetArgument(t, 0);
                                                y_36 = ATgetArgument(t, 1);
                                                t = y_36;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = v_36;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm b_32 = t;
                                                        int c_32 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = y_36;
                                                            ;
                                                            LocalPopChoice(c_32);
                                                          }
                                                        else
                                                          {
                                                            t = b_32;
                                                            t = v_36;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = v_36;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = v_36;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = y_36;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    v_36 = ATgetArgument(t, 0);
                                                    y_36 = ATgetArgument(t, 1);
                                                    t = y_36;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = v_36;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm d_32 = t;
                                                            int e_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = y_36;
                                                                ;
                                                                LocalPopChoice(e_32);
                                                              }
                                                            else
                                                              {
                                                                t = d_32;
                                                                t = v_36;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = v_36;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = v_36;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = y_36;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        v_36 = ATgetArgument(t, 0);
                                                        t = v_36;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            v_36 = ATgetArgument(t, 0);
                                                            y_36 = ATgetArgument(t, 1);
                                                            z_36 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = z_36;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_36, y_36);
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm h_38 = NULL,m_38 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      m_38 = ATgetArgument(t, 0);
      t = m_38;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          m_38 = ATgetArgument(t, 0);
          t = m_38;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_e_27;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              m_38 = ATgetArgument(t, 0);
              h_38 = ATgetArgument(t, 1);
              t = h_38;
              if(match_cons(t, sym_Id_0))
                {
                  t = m_38;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm f_32 = t;
                      int g_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_38;
                          ;
                          LocalPopChoice(g_32);
                        }
                      else
                        {
                          t = f_32;
                          t = m_38;
                        }
                    }
                  else
                    {
                      t = m_38;
                    }
                }
              else
                {
                  t = m_38;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = h_38;
                }
            }
          else
            {
              ATerm h_32 = t;
              int i_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      m_38 = ATgetArgument(t, 0);
                      {
                        ATerm j_32 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_32);
                  t = m_38;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = h_32;
                  {
                    ATerm k_32 = t;
                    int l_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm m_32 = ATgetArgument(t, 0);
                            h_38 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_32);
                        t = h_38;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = k_32;
                        {
                          ATerm n_32 = t;
                          int o_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm p_32 = ATgetArgument(t, 0);
                                  h_38 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(o_32);
                              t = h_38;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = n_32;
                              if(match_cons(t, sym_All_1))
                                {
                                  m_38 = ATgetArgument(t, 0);
                                  t = m_38;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      m_38 = ATgetArgument(t, 0);
                                      t = m_38;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          m_38 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = m_38;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_a_30;
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
      {
        ATerm s_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(v_32);
          }
        else
          {
            t = s_32;
            {
              ATerm z_32 = t;
              int c_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(c_33);
                }
              else
                {
                  t = z_32;
                  {
                    ATerm d_33 = t;
                    int e_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(e_33);
                      }
                    else
                      {
                        t = d_33;
                        {
                          ATerm f_33 = t;
                          int g_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(g_33);
                            }
                          else
                            {
                              t = f_33;
                              {
                                ATerm h_33 = t;
                                int i_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_38 = NULL,a_39 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        z_38 = ATgetArgument(t, 0);
                                        a_39 = ATgetArgument(t, 1);
                                        t = z_38;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = a_39;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            z_38 = ATgetArgument(t, 0);
                                            a_39 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = z_38;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = a_39;
                                      }
                                    ;
                                    LocalPopChoice(i_33);
                                  }
                                else
                                  {
                                    t = h_33;
                                    {
                                      ATerm j_33 = t;
                                      int k_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(k_33);
                                        }
                                      else
                                        {
                                          t = j_33;
                                          {
                                            ATerm l_33 = t;
                                            int m_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(m_33);
                                              }
                                            else
                                              {
                                                t = l_33;
                                                {
                                                  ATerm e_39 = NULL,f_39 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      e_39 = ATgetArgument(t, 0);
                                                      f_39 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = e_39;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = f_39;
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
ATerm Seqs_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  k_39 = t;
  if(match_cons(t, sym_Seqs_1))
    {
      i_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_39);
  h_39 = t;
  t = i_39;
  t = d_113(t);
  j_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seqs_1, j_39), h_39);
  return(t);
}
ATerm CallT_3_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL;
  u_39 = t;
  if(match_cons(t, sym_CallT_3))
    {
      o_39 = ATgetArgument(t, 0);
      p_39 = ATgetArgument(t, 1);
      q_39 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_39);
  n_39 = t;
  t = o_39;
  t = a_109(t);
  r_39 = t;
  t = p_39;
  t = b_109(t);
  s_39 = t;
  t = q_39;
  t = c_109(t);
  t_39 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, r_39, s_39, t_39), n_39);
  return(t);
}
ATerm Prim_2_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  c_40 = t;
  if(match_cons(t, sym_Prim_2))
    {
      y_39 = ATgetArgument(t, 0);
      z_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_40);
  x_39 = t;
  t = y_39;
  t = a_110(t);
  a_40 = t;
  t = z_39;
  t = b_110(t);
  b_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, a_40, b_40), x_39);
  return(t);
}
ATerm Var_1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,k_40 = NULL,l_40 = NULL;
  l_40 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_40);
  h_40 = t;
  t = i_40;
  t = m_105(t);
  k_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, k_40), h_40);
  return(t);
}
ATerm Match_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,s_40 = NULL,u_40 = NULL;
  u_40 = t;
  if(match_cons(t, sym_Match_1))
    {
      p_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_40);
  o_40 = t;
  t = p_40;
  t = d_109(t);
  s_40 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, s_40), o_40);
  return(t);
}
ATerm Assign_2_0 (ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,f_41 = NULL,g_41 = NULL,j_41 = NULL;
  j_41 = t;
  if(match_cons(t, sym_Assign_2))
    {
      a_41 = ATgetArgument(t, 0);
      b_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_41);
  z_40 = t;
  t = a_41;
  t = o_112(t);
  f_41 = t;
  t = b_41;
  t = p_112(t);
  g_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, f_41, g_41), z_40);
  return(t);
}
ATerm list_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  ATerm m_41 (ATerm t)
  {
    ATerm n_33 = t;
    int o_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(o_33);
      }
    else
      {
        t = n_33;
        t = Cons_2_0(c_127, m_41, t);
      }
    return(t);
  }
  t = m_41(t);
  return(t);
}
ATerm Op_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm t)
{
  ATerm r_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,i_43 = NULL;
  i_43 = t;
  if(match_cons(t, sym_Op_2))
    {
      t_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_43);
  r_41 = t;
  t = t_41;
  t = s_105(t);
  v_41 = t;
  t = u_41;
  t = t_105(t);
  w_41 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, v_41, w_41), r_41);
  return(t);
}
ATerm Str_1_0 (ATerm q_105 (ATerm), ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,r_43 = NULL,u_43 = NULL;
  u_43 = t;
  if(match_cons(t, sym_Str_1))
    {
      n_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_43);
  m_43 = t;
  t = n_43;
  t = q_105(t);
  r_43 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, r_43), m_43);
  return(t);
}
ATerm Real_1_0 (ATerm p_105 (ATerm), ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  c_44 = t;
  if(match_cons(t, sym_Real_1))
    {
      a_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_44);
  z_43 = t;
  t = a_44;
  t = p_105(t);
  b_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, b_44), z_43);
  return(t);
}
ATerm Int_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,t_44 = NULL;
  t_44 = t;
  if(match_cons(t, sym_Int_1))
    {
      p_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_44);
  o_44 = t;
  t = p_44;
  t = o_105(t);
  q_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, q_44), o_44);
  return(t);
}
ATerm Build_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL;
  z_44 = t;
  if(match_cons(t, sym_Build_1))
    {
      x_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_44);
  w_44 = t;
  t = x_44;
  t = e_109(t);
  y_44 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, y_44), w_44);
  return(t);
}
ATerm simple_strategy_0_0 (ATerm t)
{
  ATerm p_33 = t;
  int q_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(q_33);
    }
  else
    {
      t = p_33;
      {
        ATerm r_33 = t;
        int t_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(t_33);
          }
        else
          {
            t = r_33;
            {
              ATerm v_33 = t;
              int x_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_5 (ATerm t)
                  {
                    ATerm z_33 = t;
                    int b_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Var_1_0(_id, t);
                        ;
                        LocalPopChoice(b_34);
                      }
                    else
                      {
                        t = z_33;
                        {
                          ATerm c_34 = t;
                          int d_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Int_1_0(_id, t);
                              ;
                              LocalPopChoice(d_34);
                            }
                          else
                            {
                              t = c_34;
                              {
                                ATerm e_34 = t;
                                int g_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Real_1_0(_id, t);
                                    ;
                                    LocalPopChoice(g_34);
                                  }
                                else
                                  {
                                    t = e_34;
                                    {
                                      ATerm h_34 = t;
                                      int l_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Str_1_0(_id, t);
                                          ;
                                          LocalPopChoice(l_34);
                                        }
                                      else
                                        {
                                          t = h_34;
                                          {
                                            ATerm w_5 (ATerm t)
                                            {
                                              t = list_1_0(u_5, t);
                                              return(t);
                                            }
                                            t = Op_2_0(_id, w_5, t);
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
                  t = Build_1_0(u_5, t);
                  ;
                  LocalPopChoice(x_33);
                }
              else
                {
                  t = v_33;
                  {
                    ATerm n_34 = t;
                    int o_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_5 (ATerm t)
                        {
                          t = Var_1_0(_id, t);
                          return(t);
                        }
                        ATerm y_5 (ATerm t)
                        {
                          t = Var_1_0(_id, t);
                          return(t);
                        }
                        t = Assign_2_0(x_5, y_5, t);
                        ;
                        LocalPopChoice(o_34);
                      }
                    else
                      {
                        t = n_34;
                        {
                          ATerm p_34 = t;
                          int q_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_6 (ATerm t)
                              {
                                t = Var_1_0(_id, t);
                                return(t);
                              }
                              t = Match_1_0(a_6, t);
                              ;
                              LocalPopChoice(q_34);
                            }
                          else
                            {
                              t = p_34;
                              {
                                ATerm r_34 = t;
                                int s_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Prim_2_0(_id, _id, t);
                                    ;
                                    LocalPopChoice(s_34);
                                  }
                                else
                                  {
                                    t = r_34;
                                    {
                                      ATerm u_34 = t;
                                      int y_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = CallT_3_0(_id, _id, _id, t);
                                          ;
                                          LocalPopChoice(y_34);
                                        }
                                      else
                                        {
                                          t = u_34;
                                          {
                                            ATerm a_35 = t;
                                            int b_35 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Seq_2_0(simple_strategy_0_0, simple_strategy_0_0, t);
                                                ;
                                                LocalPopChoice(b_35);
                                              }
                                            else
                                              {
                                                t = a_35;
                                                {
                                                  ATerm c_35 = t;
                                                  int d_35 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_6 (ATerm t)
                                                      {
                                                        t = map_1_0(simple_strategy_0_0, t);
                                                        return(t);
                                                      }
                                                      t = Seqs_1_0(b_6, t);
                                                      ;
                                                      LocalPopChoice(d_35);
                                                    }
                                                  else
                                                    {
                                                      t = c_35;
                                                      t = Scope_2_0(_id, simple_strategy_0_0, t);
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
ATerm isect_1_0 (ATerm u_128 (ATerm), ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL;
  if(match_cons(t, sym__2))
    {
      g_45 = ATgetArgument(t, 0);
      f_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_45;
  {
    ATerm n_45 (ATerm t)
    {
      ATerm e_35 = t;
      int f_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(f_35);
        }
      else
        {
          t = e_35;
          {
            ATerm h_45 = NULL,j_45 = NULL;
            h_45 = t;
            {
              ATerm g_35 = t;
              int h_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm i_35 = ATgetFirst((ATermList) t);
                      j_45 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_35);
                  {
                    ATerm j_35 = t;
                    int k_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_6 = NULL;
                        t = h_45;
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            t_6 = ATgetFirst((ATermList) t);
                            {
                              ATerm l_35 = (ATerm) ATgetNext((ATermList) t);
                            }
                          }
                        else
                          _fail(t);
                        t = f_45;
                        {
                          ATerm c_6 (ATerm t)
                          {
                            ATerm v_6 = NULL;
                            v_6 = t;
                            t = (ATerm) ATmakeAppl(sym__2, t_6, v_6);
                            t = u_128(t);
                            return(t);
                          }
                          t = fetch_1_0(c_6, t);
                          t = h_45;
                          t = Cons_2_0(_id, n_45, t);
                        }
                        ;
                        LocalPopChoice(k_35);
                      }
                    else
                      {
                        t = j_35;
                        t = j_45;
                        t = n_45(t);
                      }
                  }
                }
              else
                {
                  t = g_35;
                  {
                    ATerm y_6 = NULL;
                    t = h_45;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        y_6 = ATgetFirst((ATermList) t);
                        {
                          ATerm m_35 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    t = f_45;
                    {
                      ATerm d_6 (ATerm t)
                      {
                        ATerm a_7 = NULL;
                        a_7 = t;
                        t = (ATerm) ATmakeAppl(sym__2, y_6, a_7);
                        t = u_128(t);
                        return(t);
                      }
                      t = fetch_1_0(d_6, t);
                      t = h_45;
                      t = Cons_2_0(_id, n_45, t);
                    }
                  }
                }
            }
          }
        }
      return(t);
    }
    t = n_45(t);
  }
  return(t);
}
ATerm Matrix_2_0 (ATerm x_111 (ATerm), ATerm y_111 (ATerm), ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  t_45 = t;
  if(match_cons(t, sym_Matrix_2))
    {
      p_45 = ATgetArgument(t, 0);
      q_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_45);
  o_45 = t;
  t = p_45;
  t = x_111(t);
  r_45 = t;
  t = q_45;
  t = y_111(t);
  s_45 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Matrix_2, r_45, s_45), o_45);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm d_108 (ATerm), ATerm t)
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  z_45 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      x_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_45);
  w_45 = t;
  t = x_45;
  t = d_108(t);
  y_45 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, y_45), w_45);
  return(t);
}
ATerm RDefT_4_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm x_107 (ATerm), ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,q_46 = NULL,r_46 = NULL;
  r_46 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      d_46 = ATgetArgument(t, 0);
      e_46 = ATgetArgument(t, 1);
      f_46 = ATgetArgument(t, 2);
      i_46 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_46);
  c_46 = t;
  t = d_46;
  t = u_107(t);
  j_46 = t;
  t = e_46;
  t = v_107(t);
  k_46 = t;
  t = f_46;
  t = w_107(t);
  l_46 = t;
  t = i_46;
  t = x_107(t);
  q_46 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, j_46, k_46, l_46, q_46), c_46);
  return(t);
}
ATerm tboundin_3_0 (ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm a_120 (ATerm), ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(a_120, y_119, t);
      ;
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
            t = SDefT_4_0(a_120, a_120, a_120, y_119, t);
            ;
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            {
              ATerm r_35 = t;
              int s_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(a_120, a_120, a_120, y_119, t);
                  ;
                  LocalPopChoice(s_35);
                }
              else
                {
                  t = r_35;
                  t = DynamicRules_1_0(y_119, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm c_47 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      c_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_47;
  {
    ATerm f_6 (ATerm t)
    {
      ATerm d_47 = NULL;
      if(match_cons(t, sym_Var_1))
        {
          d_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, d_47);
      return(t);
    }
    ATerm i_6 (ATerm t)
    {
      ATerm t_35 = t;
      int u_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_47 = NULL,i_47 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              i_47 = ATgetArgument(t, 0);
              t = i_47;
              if(match_cons(t, sym_Rule_3))
                {
                  e_47 = ATgetArgument(t, 0);
                  {
                    ATerm v_35 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm w_35 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = e_47;
              t = tvars_0_0(t);
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  i_47 = ATgetArgument(t, 0);
                  {
                    ATerm x_35 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = i_47;
            }
          ;
          LocalPopChoice(u_35);
        }
      else
        {
          t = t_35;
          {
            ATerm y_35 = t;
            int z_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Bind4_0_0(t);
                ;
                LocalPopChoice(z_35);
              }
            else
              {
                t = y_35;
                {
                  ATerm u_47 = NULL;
                  ATerm a_36 = t;
                  int b_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          ATerm c_36 = ATgetArgument(t, 0);
                          ATerm d_36 = ATgetArgument(t, 1);
                          u_47 = ATgetArgument(t, 2);
                          {
                            ATerm e_36 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(b_36);
                      t = u_47;
                      {
                        ATerm j_6 (ATerm t)
                        {
                          ATerm d_48 = NULL;
                          ATerm f_36 = t;
                          int g_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  d_48 = ATgetArgument(t, 0);
                                  {
                                    ATerm h_36 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(g_36);
                              t = d_48;
                            }
                          else
                            {
                              t = f_36;
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
                        t = map_1_0(j_6, t);
                      }
                    }
                  else
                    {
                      t = a_36;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          ATerm i_36 = ATgetArgument(t, 0);
                          ATerm j_36 = ATgetArgument(t, 1);
                          u_47 = ATgetArgument(t, 2);
                          {
                            ATerm k_36 = ATgetArgument(t, 3);
                          }
                        }
                      else
                        _fail(t);
                      t = u_47;
                      {
                        ATerm l_6 (ATerm t)
                        {
                          ATerm n_48 = NULL;
                          ATerm l_36 = t;
                          int m_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  n_48 = ATgetArgument(t, 0);
                                  {
                                    ATerm n_36 = ATgetArgument(t, 1);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(m_36);
                              t = n_48;
                            }
                          else
                            {
                              t = l_36;
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  n_48 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = n_48;
                            }
                          return(t);
                        }
                        t = map_1_0(l_6, t);
                      }
                    }
                }
              }
          }
        }
      return(t);
    }
    t = free_vars_3_0(f_6, i_6, tboundin_3_0, t);
  }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm v_48 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        v_48 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, v_48);
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    ATerm w_48 = NULL,a_49 = NULL,d_49 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        a_49 = ATgetArgument(t, 0);
        t = a_49;
        if(match_cons(t, sym_Rule_3))
          {
            w_48 = ATgetArgument(t, 0);
            {
              ATerm o_36 = ATgetArgument(t, 1);
            }
            {
              ATerm p_36 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = w_48;
        t = tvars_0_0(t);
      }
    else
      {
        ATerm q_36 = t;
        int r_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                a_49 = ATgetArgument(t, 0);
                {
                  ATerm s_36 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(r_36);
            t = a_49;
          }
        else
          {
            t = q_36;
            if(match_cons(t, sym_DynamicRules_1))
              {
                a_49 = ATgetArgument(t, 0);
                t = a_49;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm t_36 = t;
                int u_36 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm w_36 = ATgetArgument(t, 0);
                        ATerm x_36 = ATgetArgument(t, 1);
                        d_49 = ATgetArgument(t, 2);
                        {
                          ATerm a_37 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_36);
                    t = d_49;
                    {
                      ATerm q_6 (ATerm t)
                      {
                        ATerm b_51 = NULL;
                        ATerm b_37 = t;
                        int c_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                b_51 = ATgetArgument(t, 0);
                                {
                                  ATerm d_37 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(c_37);
                            t = b_51;
                          }
                        else
                          {
                            t = b_37;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                b_51 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = b_51;
                          }
                        return(t);
                      }
                      t = map_1_0(q_6, t);
                    }
                  }
                else
                  {
                    t = t_36;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm e_37 = ATgetArgument(t, 0);
                        ATerm f_37 = ATgetArgument(t, 1);
                        d_49 = ATgetArgument(t, 2);
                        {
                          ATerm g_37 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = d_49;
                    {
                      ATerm r_6 (ATerm t)
                      {
                        ATerm i_51 = NULL;
                        ATerm h_37 = t;
                        int i_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                i_51 = ATgetArgument(t, 0);
                                {
                                  ATerm j_37 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(i_37);
                            t = i_51;
                          }
                        else
                          {
                            t = h_37;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                i_51 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = i_51;
                          }
                        return(t);
                      }
                      t = map_1_0(r_6, t);
                    }
                  }
              }
          }
      }
    return(t);
  }
  t = free_vars_3_0(n_6, o_6, tboundin_3_0, t);
  return(t);
}
ATerm diff_1_0 (ATerm w_128 (ATerm), ATerm t)
{
  ATerm l_51 = NULL,m_51 = NULL;
  if(match_cons(t, sym__2))
    {
      m_51 = ATgetArgument(t, 0);
      l_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_51;
  {
    ATerm n_51 (ATerm t)
    {
      ATerm k_37 = t;
      int l_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
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
                ATerm e_7 = NULL,f_7 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    e_7 = ATgetFirst((ATermList) t);
                    f_7 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = l_51;
                {
                  ATerm s_6 (ATerm t)
                  {
                    ATerm g_7 = NULL;
                    g_7 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_7, g_7);
                    t = w_128(t);
                    return(t);
                  }
                  t = fetch_1_0(s_6, t);
                  t = f_7;
                  t = n_51(t);
                }
                ;
                LocalPopChoice(n_37);
              }
            else
              {
                t = m_37;
                t = Cons_2_0(_id, n_51, t);
              }
          }
        }
      return(t);
    }
    t = n_51(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm p_51 = NULL,r_51 = NULL,s_51 = NULL,u_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_37 = ATgetFirst((ATermList) t);
      if(match_cons(o_37, sym__2))
        {
          p_51 = ATgetArgument(o_37, 0);
          r_51 = ATgetArgument(o_37, 1);
        }
      else
        _fail(t);
      s_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_51);
  if(match_cons(t, sym__2))
    {
      u_51 = ATgetArgument(t, 0);
      w_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_51);
  if(match_cons(t, sym__2))
    {
      if((u_51 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_51, w_51);
  {
    ATerm u_6 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm p_37 = ATgetArgument(t, 0);
          if(((ATgetType(p_37) != AT_LIST) || !(ATisEmpty(p_37))))
            _fail(t);
          {
            ATerm q_37 = ATgetArgument(t, 1);
            if(((ATgetType(q_37) != AT_LIST) || !(ATisEmpty(q_37))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm w_6 (ATerm t)
    {
      ATerm z_51 = NULL,a_52 = NULL,c_52 = NULL,d_52 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm r_37 = ATgetArgument(t, 0);
          if(((ATgetType(r_37) == AT_LIST) && !(ATisEmpty(r_37))))
            {
              z_51 = ATgetFirst((ATermList) r_37);
              c_52 = (ATerm) ATgetNext((ATermList) r_37);
            }
          else
            _fail(t);
          {
            ATerm s_37 = ATgetArgument(t, 1);
            if(((ATgetType(s_37) == AT_LIST) && !(ATisEmpty(s_37))))
              {
                a_52 = ATgetFirst((ATermList) s_37);
                d_52 = (ATerm) ATgetNext((ATermList) s_37);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_51, a_52), (ATerm) ATmakeAppl(sym__2, c_52, d_52));
      return(t);
    }
    ATerm x_6 (ATerm t)
    {
      ATerm e_52 = NULL,f_52 = NULL;
      if(match_cons(t, sym__2))
        {
          e_52 = ATgetArgument(t, 0);
          f_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(f_52), e_52);
      return(t);
    }
    t = genzip_4_0(u_6, w_6, x_6, _id, t);
    y_51 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_51, s_51);
    {
      ATerm t_37 = t;
      int u_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm v_37 = ATgetArgument(t, 0);
              ATerm w_37 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_51;
          {
            ATerm z_6 (ATerm t)
            {
              t = s_51;
              return(t);
            }
            t = at_end_1_0(z_6, t);
          }
          ;
          LocalPopChoice(u_37);
        }
      else
        {
          t = t_37;
          {
            ATerm m_7 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, y_51, s_51));
            if(match_cons(t, sym__2))
              {
                ATerm x_37 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) x_37) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                m_7 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_7;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm x_137 (ATerm), ATerm y_137 (ATerm), ATerm t)
{
  ATerm j_52 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_137(t);
        ;
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = y_137(t);
        t = j_52(t);
      }
    return(t);
  }
  t = j_52(t);
  return(t);
}
ATerm for_3_0 (ATerm a_138 (ATerm), ATerm b_138 (ATerm), ATerm c_138 (ATerm), ATerm t)
{
  t = a_138(t);
  t = while_not_2_0(b_138, c_138, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 (ATerm t)
      {
        ATerm o_52 = NULL;
        o_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, o_52);
        return(t);
      }
      ATerm c_7 (ATerm t)
      {
        ATerm i_7 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, i_7, t);
        return(t);
      }
      ATerm h_7 (ATerm t)
      {
        ATerm c_38 = t;
        int d_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_7 (ATerm t)
            {
              ATerm e_38 = t;
              int f_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,u_52 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_52 = ATgetFirst((ATermList) t);
                      u_52 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = q_52;
                  if(match_cons(t, sym__2))
                    {
                      r_52 = ATgetArgument(t, 0);
                      s_52 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_52;
                  if((r_52 != t))
                    {
                      _fail(t);
                    }
                  t = u_52;
                  ;
                  LocalPopChoice(f_38);
                }
              else
                {
                  t = e_38;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, j_7, t);
            ;
            LocalPopChoice(d_38);
          }
        else
          {
            t = c_38;
            {
              ATerm a_53 = NULL,b_53 = NULL,c_53 = NULL,d_53 = NULL;
              if(match_cons(t, sym__2))
                {
                  a_53 = ATgetArgument(t, 0);
                  b_53 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_53;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_53 = ATgetFirst((ATermList) t);
                  d_53 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_53), c_53), d_53);
            }
          }
        return(t);
      }
      t = for_3_0(b_7, c_7, h_7, t);
      ;
      LocalPopChoice(b_38);
    }
  else
    {
      t = a_38;
      {
        ATerm k_7 (ATerm t)
        {
          ATerm k_53 = NULL;
          if(match_cons(t, sym__2))
            {
              k_53 = ATgetArgument(t, 0);
              if((k_53 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(k_7, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t_135 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm r_53 (ATerm t)
  {
    ATerm g_38 = t;
    int i_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_135(t);
        ;
        LocalPopChoice(i_38);
      }
    else
      {
        t = g_38;
        {
          ATerm j_38 = t;
          int k_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_53 = NULL,o_53 = NULL,s_7 = NULL,t_7 = NULL;
              m_53 = t;
              t = s_135(t);
              o_53 = t;
              t = m_53;
              {
                ATerm l_7 (ATerm t)
                {
                  ATerm o_7 = NULL;
                  t = r_53(t);
                  o_7 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_7, o_53);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm n_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = t_135(l_7, r_53, n_7, t);
                s_7 = t;
                t = SSL_explode_term(s_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_38 = ATgetArgument(t, 0);
                    t_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_7;
                {
                  ATerm p_7 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm q_7 (ATerm t)
                  {
                    ATerm r_7 (ATerm t)
                    {
                      ATerm x_7 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          x_7 = ATgetArgument(t, 0);
                          if((x_7 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(r_7, t);
                    return(t);
                  }
                  t = foldr_3_0(p_7, q_7, _id, t);
                }
              }
              ;
              LocalPopChoice(k_38);
            }
          else
            {
              t = j_38;
              {
                ATerm y_7 = NULL,z_7 = NULL;
                y_7 = t;
                t = SSL_explode_term(y_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_38 = ATgetArgument(t, 0);
                    z_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_7;
                {
                  ATerm u_7 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm v_7 (ATerm t)
                  {
                    ATerm w_7 (ATerm t)
                    {
                      ATerm e_8 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          e_8 = ATgetArgument(t, 0);
                          if((e_8 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(w_7, t);
                    return(t);
                  }
                  t = foldr_3_0(u_7, v_7, r_53, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = r_53(t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_53 = NULL,e_54 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_54 = ATgetArgument(t, 0);
      t = e_54;
      if(match_cons(t, sym_Rule_3))
        {
          z_53 = ATgetArgument(t, 0);
          {
            ATerm o_38 = ATgetArgument(t, 1);
          }
          {
            ATerm p_38 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_53;
      {
        ATerm b_8 (ATerm t)
        {
          ATerm i_54 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              i_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, i_54);
          return(t);
        }
        ATerm c_8 (ATerm t)
        {
          ATerm q_38 = t;
          int r_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind0_0_0(t);
              ;
              LocalPopChoice(r_38);
            }
          else
            {
              t = q_38;
              {
                ATerm k_54 = NULL,n_54 = NULL;
                if(match_cons(t, sym_DynamicRules_1))
                  {
                    k_54 = ATgetArgument(t, 0);
                    t = k_54;
                    t = tvars_0_0(t);
                  }
                else
                  {
                    ATerm s_38 = t;
                    int t_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm u_38 = ATgetArgument(t, 0);
                            ATerm v_38 = ATgetArgument(t, 1);
                            n_54 = ATgetArgument(t, 2);
                            {
                              ATerm w_38 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_38);
                        t = n_54;
                        {
                          ATerm d_8 (ATerm t)
                          {
                            ATerm u_54 = NULL;
                            ATerm x_38 = t;
                            int y_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    u_54 = ATgetArgument(t, 0);
                                    {
                                      ATerm b_39 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(y_38);
                                t = u_54;
                              }
                            else
                              {
                                t = x_38;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    u_54 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = u_54;
                              }
                            return(t);
                          }
                          t = map_1_0(d_8, t);
                        }
                      }
                    else
                      {
                        t = s_38;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm c_39 = ATgetArgument(t, 0);
                            ATerm d_39 = ATgetArgument(t, 1);
                            n_54 = ATgetArgument(t, 2);
                            {
                              ATerm g_39 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = n_54;
                        {
                          ATerm g_8 (ATerm t)
                          {
                            ATerm b_55 = NULL;
                            ATerm l_39 = t;
                            int m_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    b_55 = ATgetArgument(t, 0);
                                    {
                                      ATerm v_39 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(m_39);
                                t = b_55;
                              }
                            else
                              {
                                t = l_39;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    b_55 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = b_55;
                              }
                            return(t);
                          }
                          t = map_1_0(g_8, t);
                        }
                      }
                  }
              }
            }
          return(t);
        }
        t = free_vars_3_0(b_8, c_8, tboundin_3_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          e_54 = ATgetArgument(t, 0);
          {
            ATerm w_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_54;
    }
  return(t);
}
ATerm RowLet_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
  f_61 = t;
  if(match_cons(t, sym_Row_2))
    {
      g_61 = ATgetArgument(t, 0);
      h_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_40 = t;
    int e_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
        t = h_61;
        {
          ATerm f_40 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_40;
            }
          t = new_0_0(t);
          r_8 = t;
          t = h_61;
          {
            ATerm i_8 (ATerm t)
            {
              ATerm w_8 = NULL;
              if(match_cons(t, sym_Var_1))
                {
                  w_8 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, w_8);
              return(t);
            }
            ATerm j_8 (ATerm t)
            {
              ATerm x_8 = NULL,a_9 = NULL,f_9 = NULL;
              if(match_cons(t, sym_LRule_1))
                {
                  f_9 = ATgetArgument(t, 0);
                  t = f_9;
                  if(match_cons(t, sym_Rule_3))
                    {
                      x_8 = ATgetArgument(t, 0);
                      {
                        ATerm g_40 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm j_40 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = x_8;
                  {
                    ATerm k_8 (ATerm t)
                    {
                      ATerm i_9 = NULL;
                      if(match_cons(t, sym_Var_1))
                        {
                          i_9 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATinsert(ATempty, i_9);
                      return(t);
                    }
                    ATerm l_8 (ATerm t)
                    {
                      ATerm m_40 = t;
                      int n_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind0_0_0(t);
                          ;
                          LocalPopChoice(n_40);
                        }
                      else
                        {
                          t = m_40;
                          {
                            ATerm k_9 = NULL,m_9 = NULL;
                            if(match_cons(t, sym_DynamicRules_1))
                              {
                                k_9 = ATgetArgument(t, 0);
                                t = k_9;
                                t = tvars_0_0(t);
                              }
                            else
                              {
                                ATerm q_40 = t;
                                int r_40 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_SDefT_4))
                                      {
                                        ATerm t_40 = ATgetArgument(t, 0);
                                        ATerm v_40 = ATgetArgument(t, 1);
                                        m_9 = ATgetArgument(t, 2);
                                        {
                                          ATerm w_40 = ATgetArgument(t, 3);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(r_40);
                                    t = m_9;
                                    {
                                      ATerm m_8 (ATerm t)
                                      {
                                        ATerm t_9 = NULL;
                                        ATerm x_40 = t;
                                        int y_40 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_VarDec_2))
                                              {
                                                t_9 = ATgetArgument(t, 0);
                                                {
                                                  ATerm c_41 = ATgetArgument(t, 1);
                                                }
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(y_40);
                                            t = t_9;
                                          }
                                        else
                                          {
                                            t = x_40;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                t_9 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = t_9;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(m_8, t);
                                    }
                                  }
                                else
                                  {
                                    t = q_40;
                                    if(match_cons(t, sym_RDefT_4))
                                      {
                                        ATerm d_41 = ATgetArgument(t, 0);
                                        ATerm e_41 = ATgetArgument(t, 1);
                                        m_9 = ATgetArgument(t, 2);
                                        {
                                          ATerm h_41 = ATgetArgument(t, 3);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    t = m_9;
                                    {
                                      ATerm n_8 (ATerm t)
                                      {
                                        ATerm a_10 = NULL;
                                        ATerm i_41 = t;
                                        int k_41 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_VarDec_2))
                                              {
                                                a_10 = ATgetArgument(t, 0);
                                                {
                                                  ATerm l_41 = ATgetArgument(t, 1);
                                                }
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(k_41);
                                            t = a_10;
                                          }
                                        else
                                          {
                                            t = i_41;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                a_10 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = a_10;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(n_8, t);
                                    }
                                  }
                              }
                          }
                        }
                      return(t);
                    }
                    t = free_vars_3_0(k_8, l_8, tboundin_3_0, t);
                  }
                }
              else
                {
                  ATerm n_41 = t;
                  int o_41 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Scope_2))
                        {
                          f_9 = ATgetArgument(t, 0);
                          {
                            ATerm p_41 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(o_41);
                      t = f_9;
                    }
                  else
                    {
                      t = n_41;
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          f_9 = ATgetArgument(t, 0);
                          t = f_9;
                          {
                            ATerm p_8 (ATerm t)
                            {
                              ATerm g_10 = NULL;
                              if(match_cons(t, sym_Var_1))
                                {
                                  g_10 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATinsert(ATempty, g_10);
                              return(t);
                            }
                            ATerm q_8 (ATerm t)
                            {
                              ATerm q_41 = t;
                              int s_41 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_10 = NULL,m_10 = NULL;
                                  if(match_cons(t, sym_LRule_1))
                                    {
                                      m_10 = ATgetArgument(t, 0);
                                      t = m_10;
                                      if(match_cons(t, sym_Rule_3))
                                        {
                                          h_10 = ATgetArgument(t, 0);
                                          {
                                            ATerm x_41 = ATgetArgument(t, 1);
                                          }
                                          {
                                            ATerm y_41 = ATgetArgument(t, 2);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = h_10;
                                      t = tvars_0_0(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          m_10 = ATgetArgument(t, 0);
                                          {
                                            ATerm z_41 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      t = m_10;
                                    }
                                  ;
                                  LocalPopChoice(s_41);
                                }
                              else
                                {
                                  t = q_41;
                                  {
                                    ATerm a_42 = t;
                                    int b_42 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Bind4_0_0(t);
                                        ;
                                        LocalPopChoice(b_42);
                                      }
                                    else
                                      {
                                        t = a_42;
                                        {
                                          ATerm u_10 = NULL;
                                          ATerm c_42 = t;
                                          int d_42 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              if(match_cons(t, sym_SDefT_4))
                                                {
                                                  ATerm e_42 = ATgetArgument(t, 0);
                                                  ATerm f_42 = ATgetArgument(t, 1);
                                                  u_10 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm g_42 = ATgetArgument(t, 3);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              LocalPopChoice(d_42);
                                              t = u_10;
                                              {
                                                ATerm y_8 (ATerm t)
                                                {
                                                  ATerm a_11 = NULL;
                                                  ATerm h_42 = t;
                                                  int i_42 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_VarDec_2))
                                                        {
                                                          a_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm j_42 = ATgetArgument(t, 1);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(i_42);
                                                      t = a_11;
                                                    }
                                                  else
                                                    {
                                                      t = h_42;
                                                      if(match_cons(t, sym_DefaultVarDec_1))
                                                        {
                                                          a_11 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = a_11;
                                                    }
                                                  return(t);
                                                }
                                                t = map_1_0(y_8, t);
                                              }
                                            }
                                          else
                                            {
                                              t = c_42;
                                              if(match_cons(t, sym_RDefT_4))
                                                {
                                                  ATerm k_42 = ATgetArgument(t, 0);
                                                  ATerm l_42 = ATgetArgument(t, 1);
                                                  u_10 = ATgetArgument(t, 2);
                                                  {
                                                    ATerm m_42 = ATgetArgument(t, 3);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                              t = u_10;
                                              {
                                                ATerm z_8 (ATerm t)
                                                {
                                                  ATerm h_11 = NULL;
                                                  ATerm n_42 = t;
                                                  int o_42 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_VarDec_2))
                                                        {
                                                          h_11 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm p_42 = ATgetArgument(t, 1);
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(o_42);
                                                      t = h_11;
                                                    }
                                                  else
                                                    {
                                                      t = n_42;
                                                      if(match_cons(t, sym_DefaultVarDec_1))
                                                        {
                                                          h_11 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = h_11;
                                                    }
                                                  return(t);
                                                }
                                                t = map_1_0(z_8, t);
                                              }
                                            }
                                        }
                                      }
                                  }
                                }
                              return(t);
                            }
                            t = free_vars_3_0(p_8, q_8, tboundin_3_0, t);
                          }
                        }
                      else
                        {
                          ATerm q_42 = t;
                          int r_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  ATerm s_42 = ATgetArgument(t, 0);
                                  ATerm t_42 = ATgetArgument(t, 1);
                                  a_9 = ATgetArgument(t, 2);
                                  {
                                    ATerm u_42 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(r_42);
                              t = a_9;
                              {
                                ATerm b_9 (ATerm t)
                                {
                                  ATerm o_11 = NULL;
                                  ATerm v_42 = t;
                                  int w_42 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          o_11 = ATgetArgument(t, 0);
                                          {
                                            ATerm x_42 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(w_42);
                                      t = o_11;
                                    }
                                  else
                                    {
                                      t = v_42;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          o_11 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = o_11;
                                    }
                                  return(t);
                                }
                                t = map_1_0(b_9, t);
                              }
                            }
                          else
                            {
                              t = q_42;
                              {
                                ATerm y_42 = t;
                                int z_42 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_RDefT_4))
                                      {
                                        ATerm a_43 = ATgetArgument(t, 0);
                                        ATerm b_43 = ATgetArgument(t, 1);
                                        a_9 = ATgetArgument(t, 2);
                                        {
                                          ATerm c_43 = ATgetArgument(t, 3);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(z_42);
                                    t = a_9;
                                    {
                                      ATerm d_9 (ATerm t)
                                      {
                                        ATerm v_11 = NULL;
                                        ATerm d_43 = t;
                                        int e_43 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_VarDec_2))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                                {
                                                  ATerm f_43 = ATgetArgument(t, 1);
                                                }
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(e_43);
                                            t = v_11;
                                          }
                                        else
                                          {
                                            t = d_43;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                v_11 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = v_11;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(d_9, t);
                                    }
                                  }
                                else
                                  {
                                    t = y_42;
                                    if(match_cons(t, sym_Matrix_2))
                                      {
                                        f_9 = ATgetArgument(t, 0);
                                        {
                                          ATerm g_43 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    t = f_9;
                                  }
                              }
                            }
                        }
                    }
                }
              return(t);
            }
            ATerm q_12 (ATerm m_12 (ATerm), ATerm o_12 (ATerm), ATerm p_12 (ATerm), ATerm t)
            {
              ATerm h_43 = t;
              int j_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = tboundin_3_0(m_12, o_12, p_12, t);
                  ;
                  LocalPopChoice(j_43);
                }
              else
                {
                  t = h_43;
                  t = Matrix_2_0(p_12, m_12, t);
                }
              return(t);
            }
            t = free_vars_3_0(i_8, j_8, q_12, t);
            s_8 = t;
            t = v_0(t);
            t_8 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_8, t_8);
            {
              ATerm g_9 (ATerm t)
              {
                ATerm z_11 = NULL;
                if(match_cons(t, sym__2))
                  {
                    z_11 = ATgetArgument(t, 0);
                    if((z_11 != ATgetArgument(t, 1)))
                      {
                        _fail(ATgetArgument(t, 1));
                      }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = isect_1_0(g_9, t);
              {
                ATerm h_9 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_k_43;
                  return(t);
                }
                ATerm j_9 (ATerm t)
                {
                  ATerm a_12 = NULL,b_12 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_12 = ATgetFirst((ATermList) t);
                      b_12 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, a_12, b_12);
                  return(t);
                }
                ATerm l_9 (ATerm t)
                {
                  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm l_43 = ATgetArgument(t, 0);
                      if(match_cons(l_43, sym__2))
                        {
                          d_12 = ATgetArgument(l_43, 0);
                          f_12 = ATgetArgument(l_43, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm o_43 = ATgetArgument(t, 1);
                        if(match_cons(o_43, sym__2))
                          {
                            e_12 = ATgetArgument(o_43, 0);
                            g_12 = ATgetArgument(o_43, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_12), d_12), (ATerm) ATinsert(CheckATermList(g_12), f_12));
                  return(t);
                }
                ATerm n_9 (ATerm t)
                {
                  ATerm h_12 = NULL;
                  h_12 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, h_12, term_e_30), (ATerm) ATmakeAppl(sym_Var_1, h_12));
                  return(t);
                }
                t = genzip_4_0(h_9, j_9, l_9, n_9, t);
                if(match_cons(t, sym__2))
                  {
                    u_8 = ATgetArgument(t, 0);
                    v_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, r_8, (ATerm)ATempty, u_8, h_61)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, g_61, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_8), (ATerm)ATempty, v_8)));
              }
            }
          }
        }
        ;
        LocalPopChoice(e_40);
      }
    else
      {
        t = d_40;
        t = h_61;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, g_61, h_61));
      }
  }
  return(t);
}
ATerm MatrixScope_0_0 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL;
  if(match_cons(t, sym_Matrix_2))
    {
      r_61 = ATgetArgument(t, 0);
      s_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_61;
  {
    ATerm o_9 (ATerm t)
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_43;
      return(t);
    }
    ATerm p_9 (ATerm t)
    {
      ATerm v_61 = NULL,w_61 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_61 = ATgetFirst((ATermList) t);
          w_61 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, v_61, w_61);
      return(t);
    }
    ATerm q_9 (ATerm t)
    {
      ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm p_43 = ATgetArgument(t, 0);
          if(match_cons(p_43, sym__2))
            {
              x_61 = ATgetArgument(p_43, 0);
              z_61 = ATgetArgument(p_43, 1);
            }
          else
            _fail(t);
          {
            ATerm q_43 = ATgetArgument(t, 1);
            if(match_cons(q_43, sym__2))
              {
                y_61 = ATgetArgument(q_43, 0);
                a_62 = ATgetArgument(q_43, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_61), x_61), (ATerm) ATinsert(CheckATermList(a_62), z_61));
      return(t);
    }
    ATerm s_9 (ATerm t)
    {
      ATerm u_9 (ATerm t)
      {
        t = r_61;
        return(t);
      }
      t = RowLet_1_0(u_9, t);
      return(t);
    }
    t = genzip_4_0(o_9, p_9, q_9, s_9, t);
    t = _2_0(concat_0_0, _id, t);
    if(match_cons(t, sym__2))
      {
        t_61 = ATgetArgument(t, 0);
        u_61 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Let_2, t_61, (ATerm) ATmakeAppl(sym_Scope_2, r_61, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_s_43))), (ATerm) ATmakeAppl(sym_Matrix_1, u_61))));
  }
  return(t);
}
ATerm assert_1_0 (ATerm y_132 (ATerm), ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL;
  if(match_cons(t, sym__2))
    {
      b_62 = ATgetArgument(t, 0);
      c_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_132(t);
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_62, b_62, c_62);
  t = table_push_0_0(t);
  {
    ATerm t_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(d_62, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(v_43);
      }
    else
      {
        t = t_43;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_62 = ATgetFirst((ATermList) t);
        f_62 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(d_62, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(f_62), (ATerm) ATinsert(CheckATermList(e_62), b_62)));
    t = (ATerm) ATmakeAppl(sym__2, b_62, c_62);
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm g_62 = NULL;
  ATerm v_9 (ATerm t)
  {
    ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
    if(match_cons(t, sym_Row_3))
      {
        ATerm w_43 = ATgetArgument(t, 0);
        if(((ATgetType(w_43) == AT_LIST) && !(ATisEmpty(w_43))))
          {
            ATerm x_43 = ATgetFirst((ATermList) w_43);
            if(match_cons(x_43, sym_As_2))
              {
                ATerm y_43 = ATgetArgument(x_43, 0);
                ATerm d_44 = ATgetArgument(x_43, 1);
                if(!(match_cons(d_44, sym_Wld_0)))
                  _fail(t);
              }
            else
              _fail(t);
            h_62 = (ATerm) ATgetNext((ATermList) w_43);
          }
        else
          _fail(t);
        i_62 = ATgetArgument(t, 1);
        j_62 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Row_3, h_62, i_62, j_62);
    return(t);
  }
  t = filter_1_0(v_9, t);
  g_62 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, g_62);
  return(t);
}
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
  n_63 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = n_63;
      t = t_0(t);
      {
        ATerm w_9 (ATerm t)
        {
          ATerm r_63 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              r_63 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, r_63), term_e_44);
          return(t);
        }
        t = map_1_0(w_9, t);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          o_63 = ATgetArgument(t, 0);
          t = n_63;
          t = q_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((o_63 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
            }
          else
            _fail(t);
          t = t_0(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              o_63 = ATgetArgument(t, 0);
              t = n_63;
              t = q_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((o_63 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                }
              else
                _fail(t);
              t = t_0(t);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  o_63 = ATgetArgument(t, 0);
                  t = n_63;
                  t = q_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((o_63 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                    }
                  else
                    _fail(t);
                  t = t_0(t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                }
              else
                {
                  ATerm h_13 = NULL,i_13 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      o_63 = ATgetArgument(t, 0);
                      p_63 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_63;
                  t = q_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((o_63 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      h_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = p_63;
                  {
                    ATerm x_9 (ATerm t)
                    {
                      t = term_s_43;
                      return(t);
                    }
                    ATerm y_9 (ATerm t)
                    {
                      ATerm j_13 = NULL,k_13 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          j_13 = ATgetArgument(t, 0);
                          k_13 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm f_44 = t;
                        int g_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_addi(j_13, k_13);
                            ;
                            LocalPopChoice(g_44);
                          }
                        else
                          {
                            t = f_44;
                            t = SSL_addr(j_13, k_13);
                          }
                      }
                      return(t);
                    }
                    ATerm c_10 (ATerm t)
                    {
                      t = term_h_44;
                      return(t);
                    }
                    t = foldr_3_0(x_9, y_9, c_10, t);
                    i_13 = t;
                    t = h_13;
                    if((i_13 != t))
                      {
                        _fail(t);
                      }
                    t = p_63;
                  }
                }
            }
        }
    }
  return(t);
}
ATerm ConsTransition_1_0 (ATerm k_149 (ATerm), ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,c_64 = NULL,o_64 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm i_44 = ATgetArgument(t, 0);
      if(((ATgetType(i_44) == AT_LIST) && !(ATisEmpty(i_44))))
        {
          ATerm j_44 = ATgetFirst((ATermList) i_44);
          if(match_cons(j_44, sym_As_2))
            {
              ATerm k_44 = ATgetArgument(j_44, 0);
              x_63 = ATgetArgument(j_44, 1);
            }
          else
            _fail(t);
          y_63 = (ATerm) ATgetNext((ATermList) i_44);
        }
      else
        _fail(t);
      z_63 = ATgetArgument(t, 1);
      a_64 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_63;
  t = k_149(t);
  c_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_64, z_63);
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_44 = ATgetArgument(t, 0);
            ATerm r_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_64;
        {
          ATerm d_10 (ATerm t)
          {
            t = z_63;
            return(t);
          }
          t = at_end_1_0(d_10, t);
        }
        ;
        LocalPopChoice(m_44);
      }
    else
      {
        t = l_44;
        {
          ATerm p_13 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_64, z_63));
          if(match_cons(t, sym__2))
            {
              ATerm s_44 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_44) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              p_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_13;
          t = concat_0_0(t);
        }
      }
    o_64 = t;
    t = (ATerm) ATmakeAppl(sym_Row_3, y_63, o_64, a_64);
  }
  return(t);
}
ATerm Transition_0_0 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL,h_65 = NULL;
  if(match_cons(t, sym__2))
    {
      b_65 = ATgetArgument(t, 0);
      {
        ATerm u_44 = ATgetArgument(t, 1);
        if(match_cons(u_44, sym__2))
          {
            c_65 = ATgetArgument(u_44, 0);
            d_65 = ATgetArgument(u_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_65;
  {
    ATerm e_10 (ATerm t)
    {
      ATerm f_10 (ATerm t)
      {
        ATerm j_10 (ATerm t)
        {
          t = c_65;
          return(t);
        }
        ATerm k_10 (ATerm t)
        {
          t = d_65;
          return(t);
        }
        t = MatchCons_2_0(j_10, k_10, t);
        return(t);
      }
      t = ConsTransition_1_0(f_10, t);
      return(t);
    }
    t = filter_1_0(e_10, t);
    h_65 = t;
    t = (ATerm) ATmakeAppl(sym_Alt_3, c_65, d_65, (ATerm) ATmakeAppl(sym_Matrix_1, h_65));
  }
  return(t);
}
ATerm filter_1_0 (ATerm c_133 (ATerm), ATerm t)
{
  ATerm v_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(a_45);
    }
  else
    {
      t = v_44;
      {
        ATerm b_45 = t;
        int c_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_10 (ATerm t)
            {
              t = filter_1_0(c_133, t);
              return(t);
            }
            t = Cons_2_0(c_133, l_10, t);
            ;
            LocalPopChoice(c_45);
          }
        else
          {
            t = b_45;
            {
              ATerm m_65 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm d_45 = ATgetFirst((ATermList) t);
                  m_65 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_65;
              t = filter_1_0(c_133, t);
            }
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm i_128 (ATerm), ATerm t)
{
  ATerm o_65 (ATerm t)
  {
    t = i_128(t);
    {
      ATerm e_45 = t;
      int i_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(i_45);
        }
      else
        {
          t = e_45;
          t = Cons_2_0(_id, o_65, t);
        }
    }
    return(t);
  }
  t = o_65(t);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL;
  t_65 = t;
  if(match_cons(t, sym_Row_3))
    {
      u_65 = ATgetArgument(t, 0);
      {
        ATerm k_45 = ATgetArgument(t, 1);
      }
      {
        ATerm l_45 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = u_65;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_65 = ATgetFirst((ATermList) t);
      {
        ATerm m_45 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_65;
  if(match_cons(t, sym_As_2))
    {
      ATerm u_45 = ATgetArgument(t, 0);
      x_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_65;
  if(match_cons(t, sym_Str_1))
    {
      y_65 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, y_65), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          y_65 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, y_65), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              y_65 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, y_65), (ATerm) ATempty);
            }
          else
            {
              ATerm j_66 = NULL,k_66 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  y_65 = ATgetArgument(t, 0);
                  z_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_65;
              {
                ATerm n_10 (ATerm t)
                {
                  t = term_s_43;
                  return(t);
                }
                ATerm o_10 (ATerm t)
                {
                  ATerm l_66 = NULL,m_66 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      l_66 = ATgetArgument(t, 0);
                      m_66 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm v_45 = t;
                    int a_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SSL_addi(l_66, m_66);
                        ;
                        LocalPopChoice(a_46);
                      }
                    else
                      {
                        t = v_45;
                        t = SSL_addr(l_66, m_66);
                      }
                  }
                  return(t);
                }
                ATerm p_10 (ATerm t)
                {
                  t = term_h_44;
                  return(t);
                }
                t = foldr_3_0(n_10, o_10, p_10, t);
                j_66 = t;
                t = z_65;
                {
                  ATerm q_10 (ATerm t)
                  {
                    ATerm n_66 = NULL;
                    if(match_cons(t, sym_As_2))
                      {
                        ATerm b_46 = ATgetArgument(t, 0);
                        if(match_cons(b_46, sym_Off_1))
                          {
                            n_66 = ATgetArgument(b_46, 0);
                          }
                        else
                          _fail(t);
                        {
                          ATerm g_46 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_66);
                    return(t);
                  }
                  t = map_1_0(q_10, t);
                  k_66 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, y_65, j_66), k_66);
                }
              }
            }
        }
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  {
    ATerm s_10 (ATerm t)
    {
      ATerm h_46 = t;
      int m_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_66 = NULL,r_66 = NULL,a_67 = NULL;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_66 = ATgetFirst((ATermList) t);
              r_66 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_66;
          {
            ATerm t_10 (ATerm t)
            {
              ATerm n_46 = t;
              if((PushChoice() == 0))
                {
                  if((q_66 != t))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = n_46;
                }
              return(t);
            }
            t = filter_1_0(t_10, t);
            a_67 = t;
            t = (ATerm) ATinsert(CheckATermList(a_67), q_66);
          }
          ;
          LocalPopChoice(m_46);
        }
      else
        {
          t = h_46;
        }
      return(t);
    }
    t = listtd_1_0(s_10, t);
  }
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm b_68 (ATerm m_67, ATerm t)
  {
    ATerm o_67 = NULL;
    t = SSL_explode_string(m_67);
    {
      ATerm o_46 = t;
      int p_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_68 (ATerm t)
          {
            ATerm s_46 = t;
            int t_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, c_68, t);
                ;
                LocalPopChoice(t_46);
              }
            else
              {
                t = s_46;
                {
                  ATerm v_10 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                      _fail(t);
                    return(t);
                  }
                  ATerm w_10 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = Cons_2_0(v_10, w_10, t);
                }
              }
            return(t);
          }
          t = c_68(t);
          ;
          LocalPopChoice(p_46);
        }
      else
        {
          t = o_46;
          t = (ATerm) ATempty;
        }
      o_67 = t;
      t = SSL_implode_string(o_67);
    }
    return(t);
  }
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,z_67 = NULL;
  z_67 = t;
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_67 = ATgetFirst((ATermList) t);
            {
              ATerm w_46 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_46);
        t = p_67;
        {
          ATerm x_46 = t;
          int y_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  q_67 = ATgetArgument(t, 0);
                  {
                    ATerm z_46 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm a_47 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_46);
              t = q_67;
              {
                ATerm b_47 = t;
                int f_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        r_67 = ATgetFirst((ATermList) t);
                        {
                          ATerm g_47 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(f_47);
                    t = r_67;
                    {
                      ATerm h_47 = t;
                      int j_47 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              s_67 = ATgetArgument(t, 0);
                              {
                                ATerm k_47 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_47);
                          t = s_67;
                          if(match_cons(t, sym_Off_1))
                            {
                              t_67 = ATgetArgument(t, 0);
                              {
                                ATerm l_47 = t;
                                int m_47 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = t_67;
                                    ;
                                    LocalPopChoice(m_47);
                                  }
                                else
                                  {
                                    t = l_47;
                                    t = b_68(z_67, t);
                                  }
                              }
                            }
                          else
                            {
                              t = b_68(z_67, t);
                            }
                        }
                      else
                        {
                          t = h_47;
                          t = b_68(z_67, t);
                        }
                    }
                  }
                else
                  {
                    t = b_47;
                    t = b_68(z_67, t);
                  }
              }
            }
          else
            {
              t = x_46;
              t = b_68(z_67, t);
            }
        }
      }
    else
      {
        t = u_46;
        t = b_68(z_67, t);
      }
  }
  return(t);
}
ATerm Mixture_0_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,j_68 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      d_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_68;
  t = get_path_0_0(t);
  e_68 = t;
  t = d_68;
  t = outedges_0_0(t);
  f_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_68, f_68);
  {
    ATerm x_10 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm n_47 = ATgetArgument(t, 0);
          ATerm o_47 = ATgetArgument(t, 1);
          if(((ATgetType(o_47) != AT_LIST) || !(ATisEmpty(o_47))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm z_10 (ATerm t)
    {
      ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL;
      if(match_cons(t, sym__2))
        {
          l_68 = ATgetArgument(t, 0);
          {
            ATerm p_47 = ATgetArgument(t, 1);
            if(((ATgetType(p_47) == AT_LIST) && !(ATisEmpty(p_47))))
              {
                k_68 = ATgetFirst((ATermList) p_47);
                m_68 = (ATerm) ATgetNext((ATermList) p_47);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_68, k_68), (ATerm) ATmakeAppl(sym__2, l_68, m_68));
      return(t);
    }
    ATerm b_11 (ATerm t)
    {
      ATerm n_68 = NULL,o_68 = NULL;
      if(match_cons(t, sym__2))
        {
          n_68 = ATgetArgument(t, 0);
          o_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(o_68), n_68);
      return(t);
    }
    t = genzip_4_0(x_10, z_10, b_11, Transition_0_0, t);
    g_68 = t;
    t = d_68;
    t = default_state_0_0(t);
    h_68 = t;
    t = new_0_0(t);
    j_68 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, d_68), (ATerm) ATmakeAppl(sym_Defined_2, term_q_47, j_68));
    {
      ATerm c_11 (ATerm t)
      {
        t = term_r_47;
        return(t);
      }
      t = assert_1_0(c_11, t);
      t = (ATerm) ATmakeAppl(sym_Case_4, j_68, (ATerm)ATmakeAppl(sym_Var_1, e_68), g_68, h_68);
    }
  }
  return(t);
}
ATerm ShiftColumn_0_0 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      p_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_68;
  {
    ATerm s_47 = t;
    if((PushChoice() == 0))
      {
        ATerm d_11 (ATerm t)
        {
          ATerm e_11 (ATerm t)
          {
            ATerm g_11 (ATerm t)
            {
              ATerm i_11 (ATerm t)
              {
                ATerm t_47 = t;
                if((PushChoice() == 0))
                  {
                    if(!(match_cons(t, sym_Wld_0)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = t_47;
                  }
                return(t);
              }
              t = As_2_0(_id, i_11, t);
              return(t);
            }
            t = Cons_2_0(g_11, _id, t);
            return(t);
          }
          t = Row_3_0(e_11, _id, _id, t);
          return(t);
        }
        t = map_1_0(d_11, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_47;
      }
    t = p_68;
    {
      ATerm j_11 (ATerm t)
      {
        ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL;
        if(match_cons(t, sym_Row_3))
          {
            s_68 = ATgetArgument(t, 0);
            {
              ATerm v_47 = ATgetArgument(t, 1);
              if(((ATgetType(v_47) == AT_LIST) && !(ATisEmpty(v_47))))
                {
                  r_68 = ATgetFirst((ATermList) v_47);
                  t_68 = (ATerm) ATgetNext((ATermList) v_47);
                }
              else
                _fail(t);
            }
            u_68 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(s_68), r_68), t_68, u_68);
        return(t);
      }
      t = map_1_0(j_11, t);
      q_68 = t;
      t = (ATerm) ATmakeAppl(sym_Matrix_1, q_68);
    }
  }
  return(t);
}
ATerm As_2_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL;
  a_69 = t;
  if(match_cons(t, sym_As_2))
    {
      w_68 = ATgetArgument(t, 0);
      x_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_69);
  v_68 = t;
  t = w_68;
  t = d_106(t);
  y_68 = t;
  t = x_68;
  t = e_106(t);
  z_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, y_68, z_68), v_68);
  return(t);
}
ATerm Row_3_0 (ATerm u_111 (ATerm), ATerm v_111 (ATerm), ATerm w_111 (ATerm), ATerm t)
{
  ATerm d_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL;
  l_69 = t;
  if(match_cons(t, sym_Row_3))
    {
      e_69 = ATgetArgument(t, 0);
      f_69 = ATgetArgument(t, 1);
      g_69 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_69);
  d_69 = t;
  t = e_69;
  t = u_111(t);
  h_69 = t;
  t = f_69;
  t = v_111(t);
  j_69 = t;
  t = g_69;
  t = w_111(t);
  k_69 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Row_3, h_69, j_69, k_69), d_69);
  return(t);
}
ATerm SkipWild_0_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      o_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_69;
  {
    ATerm k_11 (ATerm t)
    {
      ATerm l_11 (ATerm t)
      {
        ATerm q_69 = NULL;
        ATerm n_11 (ATerm t)
        {
          ATerm p_11 (ATerm t)
          {
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
            return(t);
          }
          t = As_2_0(_id, p_11, t);
          return(t);
        }
        t = Cons_2_0(n_11, _id, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_47 = ATgetFirst((ATermList) t);
            q_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_69;
        return(t);
      }
      t = Row_3_0(_id, l_11, _id, t);
      return(t);
    }
    t = map_1_0(k_11, t);
    p_69 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, p_69);
  }
  return(t);
}
ATerm repeat_1_0 (ATerm i_137 (ATerm), ATerm t)
{
  ATerm u_69 (ATerm t)
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_137(t);
        t = u_69(t);
        ;
        LocalPopChoice(y_47);
      }
    else
      {
        t = x_47;
      }
    return(t);
  }
  t = u_69(t);
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
  if(match_cons(t, sym__2))
    {
      x_69 = ATgetArgument(t, 0);
      y_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_47 = t;
    int a_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_13 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_48 = ATgetArgument(t, 0);
            ATerm c_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_69, y_69);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_48 = ATgetFirst((ATermList) t);
            r_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_13;
        ;
        LocalPopChoice(a_48);
      }
    else
      {
        t = z_47;
        t = (ATerm) ATempty;
      }
    z_69 = t;
    t = SSL_table_put(x_69, y_69, z_69);
    t = (ATerm) ATmakeAppl(sym__2, x_69, y_69);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm v_132 (ATerm), ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  f_70 = t;
  t = v_132(t);
  g_70 = t;
  {
    ATerm f_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(g_70, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(g_48);
      }
    else
      {
        t = f_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_70 = ATgetFirst((ATermList) t);
        h_70 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(g_70, (ATerm)ATmakeAppl(sym_Scopes_0), h_70);
    t = i_70;
    {
      ATerm q_11 (ATerm t)
      {
        ATerm j_70 = NULL;
        j_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_70, j_70);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(q_11, t);
      t = f_70;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm t)
{
  ATerm h_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_124(t);
      t = f_124(t);
      ;
      LocalPopChoice(i_48);
    }
  else
    {
      t = h_48;
      t = f_124(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_132 (ATerm), ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
  m_70 = t;
  t = u_132(t);
  n_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_70, term_j_48);
  {
    ATerm k_48 = t;
    int l_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_48 = ATgetArgument(t, 0);
            ATerm o_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_70, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_48);
      }
    else
      {
        t = k_48;
        t = (ATerm) ATempty;
      }
    o_70 = t;
    t = SSL_table_put(n_70, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_70), (ATerm) ATempty));
    t = m_70;
  }
  return(t);
}
ATerm scope_2_0 (ATerm w_132 (ATerm), ATerm x_132 (ATerm), ATerm t)
{
  t = begin_scope_1_0(w_132, t);
  {
    ATerm r_11 (ATerm t)
    {
      t = end_scope_1_0(w_132, t);
      return(t);
    }
    t = restore_always_2_0(x_132, r_11, t);
  }
  return(t);
}
ATerm MatrixMerge_0_0 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,i_76 = NULL,j_76 = NULL;
  z_75 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      a_76 = ATgetArgument(t, 0);
      j_76 = ATgetArgument(t, 1);
      t = a_76;
      if(match_cons(t, sym_Matrix_2))
        {
          b_76 = ATgetArgument(t, 0);
          c_76 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_76;
      if(match_cons(t, sym_Choice_2))
        {
          x_75 = ATgetArgument(t, 0);
          y_75 = ATgetArgument(t, 1);
          {
            ATerm e_15 = NULL,f_15 = NULL;
            t = x_75;
            if(match_cons(t, sym_Matrix_2))
              {
                v_75 = ATgetArgument(t, 0);
                w_75 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, b_76, v_75);
            {
              ATerm s_11 (ATerm t)
              {
                ATerm g_15 = NULL;
                if(match_cons(t, sym__2))
                  {
                    g_15 = ATgetArgument(t, 0);
                    if((g_15 != ATgetArgument(t, 1)))
                      {
                        _fail(ATgetArgument(t, 1));
                      }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = union_1_0(s_11, t);
              e_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, c_76, w_75);
              {
                ATerm p_48 = t;
                int q_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym__2))
                      {
                        ATerm r_48 = ATgetArgument(t, 0);
                        ATerm s_48 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = c_76;
                    {
                      ATerm u_11 (ATerm t)
                      {
                        t = w_75;
                        return(t);
                      }
                      t = at_end_1_0(u_11, t);
                    }
                    ;
                    LocalPopChoice(q_48);
                  }
                else
                  {
                    t = p_48;
                    {
                      ATerm o_15 = NULL;
                      t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_76, w_75));
                      if(match_cons(t, sym__2))
                        {
                          ATerm t_48 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) t_48) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          o_15 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_15;
                      t = concat_0_0(t);
                    }
                  }
                f_15 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, e_15, f_15), y_75);
              }
            }
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              x_75 = ATgetArgument(t, 0);
              y_75 = ATgetArgument(t, 1);
              {
                ATerm b_16 = NULL,c_16 = NULL;
                t = x_75;
                if(match_cons(t, sym_Matrix_2))
                  {
                    v_75 = ATgetArgument(t, 0);
                    w_75 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, b_76, v_75);
                {
                  ATerm w_11 (ATerm t)
                  {
                    ATerm d_16 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        d_16 = ATgetArgument(t, 0);
                        if((d_16 != ATgetArgument(t, 1)))
                          {
                            _fail(ATgetArgument(t, 1));
                          }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = union_1_0(w_11, t);
                  b_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_76, w_75);
                  {
                    ATerm u_48 = t;
                    int x_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm y_48 = ATgetArgument(t, 0);
                            ATerm z_48 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = c_76;
                        {
                          ATerm x_11 (ATerm t)
                          {
                            t = w_75;
                            return(t);
                          }
                          t = at_end_1_0(x_11, t);
                        }
                        ;
                        LocalPopChoice(x_48);
                      }
                    else
                      {
                        t = u_48;
                        {
                          ATerm l_16 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_76, w_75));
                          if(match_cons(t, sym__2))
                            {
                              ATerm b_49 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) b_49) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              l_16 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = l_16;
                          t = concat_0_0(t);
                        }
                      }
                    c_16 = t;
                    t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, b_16, c_16), y_75);
                  }
                }
              }
            }
          else
            {
              ATerm w_16 = NULL,x_16 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  x_75 = ATgetArgument(t, 0);
                  y_75 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, b_76, x_75);
              {
                ATerm y_11 (ATerm t)
                {
                  ATerm y_16 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      y_16 = ATgetArgument(t, 0);
                      if((y_16 != ATgetArgument(t, 1)))
                        {
                          _fail(ATgetArgument(t, 1));
                        }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = union_1_0(y_11, t);
                w_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, c_76, y_75);
                {
                  ATerm c_49 = t;
                  int e_49 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym__2))
                        {
                          ATerm f_49 = ATgetArgument(t, 0);
                          ATerm g_49 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_76;
                      {
                        ATerm i_12 (ATerm t)
                        {
                          t = y_75;
                          return(t);
                        }
                        t = at_end_1_0(i_12, t);
                      }
                      ;
                      LocalPopChoice(e_49);
                    }
                  else
                    {
                      t = c_49;
                      {
                        ATerm g_17 = NULL;
                        t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_76, y_75));
                        if(match_cons(t, sym__2))
                          {
                            ATerm h_49 = ATgetArgument(t, 0);
                            if((ATgetSymbol((ATermAppl) h_49) != ATmakeSymbol("", 0, ATtrue)))
                              _fail(t);
                            g_17 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = g_17;
                        t = concat_0_0(t);
                      }
                    }
                  x_16 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, w_16, x_16);
                }
              }
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          a_76 = ATgetArgument(t, 0);
          j_76 = ATgetArgument(t, 1);
          t = a_76;
          if(match_cons(t, sym_Matrix_2))
            {
              b_76 = ATgetArgument(t, 0);
              c_76 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_76;
          if(match_cons(t, sym_LChoice_2))
            {
              x_75 = ATgetArgument(t, 0);
              y_75 = ATgetArgument(t, 1);
              {
                ATerm u_17 = NULL,v_17 = NULL;
                t = x_75;
                if(match_cons(t, sym_Matrix_2))
                  {
                    v_75 = ATgetArgument(t, 0);
                    w_75 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, b_76, v_75);
                {
                  ATerm j_12 (ATerm t)
                  {
                    ATerm w_17 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        w_17 = ATgetArgument(t, 0);
                        if((w_17 != ATgetArgument(t, 1)))
                          {
                            _fail(ATgetArgument(t, 1));
                          }
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = union_1_0(j_12, t);
                  u_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_76, w_75);
                  {
                    ATerm i_49 = t;
                    int j_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm k_49 = ATgetArgument(t, 0);
                            ATerm l_49 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = c_76;
                        {
                          ATerm k_12 (ATerm t)
                          {
                            t = w_75;
                            return(t);
                          }
                          t = at_end_1_0(k_12, t);
                        }
                        ;
                        LocalPopChoice(j_49);
                      }
                    else
                      {
                        t = i_49;
                        {
                          ATerm h_18 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_76, w_75));
                          if(match_cons(t, sym__2))
                            {
                              ATerm m_49 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) m_49) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              h_18 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = h_18;
                          t = concat_0_0(t);
                        }
                      }
                    v_17 = t;
                    t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, u_17, v_17), y_75);
                  }
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  x_75 = ATgetArgument(t, 0);
                  y_75 = ATgetArgument(t, 1);
                  {
                    ATerm v_18 = NULL,w_18 = NULL;
                    t = x_75;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        v_75 = ATgetArgument(t, 0);
                        w_75 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, b_76, v_75);
                    {
                      ATerm l_12 (ATerm t)
                      {
                        ATerm x_18 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            x_18 = ATgetArgument(t, 0);
                            if((x_18 != ATgetArgument(t, 1)))
                              {
                                _fail(ATgetArgument(t, 1));
                              }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = union_1_0(l_12, t);
                      v_18 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_76, w_75);
                      {
                        ATerm n_49 = t;
                        int o_49 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym__2))
                              {
                                ATerm p_49 = ATgetArgument(t, 0);
                                ATerm q_49 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = c_76;
                            {
                              ATerm r_12 (ATerm t)
                              {
                                t = w_75;
                                return(t);
                              }
                              t = at_end_1_0(r_12, t);
                            }
                            ;
                            LocalPopChoice(o_49);
                          }
                        else
                          {
                            t = n_49;
                            {
                              ATerm i_19 = NULL;
                              t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_76, w_75));
                              if(match_cons(t, sym__2))
                                {
                                  ATerm r_49 = ATgetArgument(t, 0);
                                  if((ATgetSymbol((ATermAppl) r_49) != ATmakeSymbol("", 0, ATtrue)))
                                    _fail(t);
                                  i_19 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = i_19;
                              t = concat_0_0(t);
                            }
                          }
                        w_18 = t;
                        t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, v_18, w_18), y_75);
                      }
                    }
                  }
                }
              else
                {
                  ATerm w_19 = NULL,x_19 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      x_75 = ATgetArgument(t, 0);
                      y_75 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, b_76, x_75);
                  {
                    ATerm s_12 (ATerm t)
                    {
                      ATerm y_19 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          y_19 = ATgetArgument(t, 0);
                          if((y_19 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(s_12, t);
                    w_19 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_76, y_75);
                    {
                      ATerm s_49 = t;
                      int t_49 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym__2))
                            {
                              ATerm u_49 = ATgetArgument(t, 0);
                              ATerm v_49 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = c_76;
                          {
                            ATerm t_12 (ATerm t)
                            {
                              t = y_75;
                              return(t);
                            }
                            t = at_end_1_0(t_12, t);
                          }
                          ;
                          LocalPopChoice(t_49);
                        }
                      else
                        {
                          t = s_49;
                          {
                            ATerm h_20 = NULL;
                            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_76, y_75));
                            if(match_cons(t, sym__2))
                              {
                                ATerm w_49 = ATgetArgument(t, 0);
                                if((ATgetSymbol((ATermAppl) w_49) != ATmakeSymbol("", 0, ATtrue)))
                                  _fail(t);
                                h_20 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = h_20;
                            t = concat_0_0(t);
                          }
                        }
                      x_19 = t;
                      t = (ATerm) ATmakeAppl(sym_Matrix_2, w_19, x_19);
                    }
                  }
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              a_76 = ATgetArgument(t, 0);
              j_76 = ATgetArgument(t, 1);
              {
                ATerm n_76 = NULL;
                t = j_76;
                if(match_cons(t, sym_Matrix_2))
                  {
                    x_75 = ATgetArgument(t, 0);
                    y_75 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_75;
                {
                  ATerm u_12 (ATerm t)
                  {
                    ATerm o_76 = NULL,p_76 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        o_76 = ATgetArgument(t, 0);
                        p_76 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, o_76, (ATerm) ATmakeAppl(sym_Scope_2, a_76, p_76));
                    return(t);
                  }
                  t = map_1_0(u_12, t);
                  n_76 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, x_75, n_76);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  a_76 = ATgetArgument(t, 0);
                  j_76 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = a_76;
              if(match_cons(t, sym_Matrix_2))
                {
                  b_76 = ATgetArgument(t, 0);
                  c_76 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_76;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_76 = ATgetFirst((ATermList) t);
                  i_76 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_76;
              if(match_cons(t, sym_Row_2))
                {
                  e_76 = ATgetArgument(t, 0);
                  f_76 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_76;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, b_76, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, e_76, (ATerm) ATmakeAppl(sym_Seq_2, f_76, j_76))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm y_120 (ATerm), ATerm t)
{
  ATerm v_12 (ATerm t)
  {
    t = bottomup_1_0(y_120, t);
    return(t);
  }
  t = SRTS_all(v_12, t);
  t = y_120(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm r_131 (ATerm), ATerm t)
{
  ATerm x_49 = t;
  int y_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_131(t);
      ;
      LocalPopChoice(y_49);
    }
  else
    {
      t = x_49;
      {
        ATerm c_77 = NULL,f_77 = NULL,i_77 = NULL,j_77 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_77 = ATgetFirst((ATermList) t);
            f_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_77;
        t = r_131(t);
        i_77 = t;
        t = f_77;
        t = foldr_3_0(p_131, q_131, r_131, t);
        j_77 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_77, j_77);
        t = q_131(t);
      }
    }
  return(t);
}
ATerm collect_om_1_0 (ATerm l_130 (ATerm), ATerm t)
{
  ATerm z_49 = t;
  int a_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_77 = NULL;
      t = l_130(t);
      m_77 = t;
      t = (ATerm) ATinsert(ATempty, m_77);
      ;
      LocalPopChoice(a_50);
    }
  else
    {
      t = z_49;
      {
        ATerm i_20 = NULL,j_20 = NULL;
        i_20 = t;
        t = SSL_explode_term(i_20);
        if(match_cons(t, sym__2))
          {
            ATerm b_50 = ATgetArgument(t, 0);
            j_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_20;
        {
          ATerm w_12 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm x_12 (ATerm t)
          {
            ATerm z_12 (ATerm t)
            {
              ATerm t_20 = NULL;
              if(match_cons(t, sym__2))
                {
                  t_20 = ATgetArgument(t, 0);
                  if((t_20 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              return(t);
            }
            t = union_1_0(z_12, t);
            return(t);
          }
          ATerm y_12 (ATerm t)
          {
            t = collect_om_1_0(l_130, t);
            return(t);
          }
          t = foldr_3_0(w_12, x_12, y_12, t);
        }
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm t_77 = NULL,w_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL;
  if(match_cons(t, sym_As_2))
    {
      w_77 = ATgetArgument(t, 0);
      z_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_77;
  if(match_cons(t, sym_Var_1))
    {
      y_77 = ATgetArgument(t, 0);
      t = z_77;
      if(match_cons(t, sym_As_2))
        {
          a_78 = ATgetArgument(t, 0);
          {
            ATerm c_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_78;
      if(match_cons(t, sym_Off_1))
        {
          t_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, y_77), (ATerm) ATmakeAppl(sym_Var_1, t_77)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          y_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_77;
      if(match_cons(t, sym_Var_1))
        {
          a_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, a_78), (ATerm) ATmakeAppl(sym_Var_1, y_77)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL;
  w_78 = t;
  if(match_cons(t, sym_As_2))
    {
      x_78 = ATgetArgument(t, 0);
      z_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_78;
  {
    ATerm d_50 = t;
    int e_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_50);
        t = z_78;
        if(match_cons(t, sym_As_2))
          {
            a_79 = ATgetArgument(t, 0);
            v_78 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_79;
        if(match_cons(t, sym_Off_1))
          {
            u_78 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, u_78), v_78);
      }
    else
      {
        t = d_50;
        if(match_cons(t, sym_Off_1))
          {
            y_78 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_78;
        if(match_cons(t, sym_Var_1))
          {
            ATerm g_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_78;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_78;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm h_50 = ATgetFirst((ATermList) t);
                ATerm i_50 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_78;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, y_78), term_e_44);
      }
  }
  return(t);
}
ATerm union_1_0 (ATerm a_129 (ATerm), ATerm t)
{
  ATerm h_79 = NULL,i_79 = NULL;
  if(match_cons(t, sym__2))
    {
      i_79 = ATgetArgument(t, 0);
      h_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_79;
  {
    ATerm j_79 (ATerm t)
    {
      ATerm j_50 = t;
      int k_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_79;
          ;
          LocalPopChoice(k_50);
        }
      else
        {
          t = j_50;
          {
            ATerm l_50 = t;
            int m_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_21 = NULL,p_21 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    h_21 = ATgetFirst((ATermList) t);
                    p_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_79;
                {
                  ATerm a_13 (ATerm t)
                  {
                    ATerm s_21 = NULL;
                    s_21 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_21, s_21);
                    t = a_129(t);
                    return(t);
                  }
                  t = fetch_1_0(a_13, t);
                  t = p_21;
                  t = j_79(t);
                }
                ;
                LocalPopChoice(m_50);
              }
            else
              {
                t = l_50;
                t = Cons_2_0(_id, j_79, t);
              }
          }
        }
      return(t);
    }
    t = j_79(t);
  }
  return(t);
}
ATerm CollectSplit_2_0 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm t)
{
  ATerm k_79 = NULL,l_79 = NULL,p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL;
  k_79 = t;
  l_79 = t;
  t = SSL_explode_term(l_79);
  if(match_cons(t, sym__2))
    {
      p_79 = ATgetArgument(t, 0);
      q_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_79);
  r_79 = t;
  t = q_79;
  {
    ATerm b_13 (ATerm t)
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_43;
      return(t);
    }
    ATerm c_13 (ATerm t)
    {
      ATerm z_79 = NULL,a_80 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_79 = ATgetFirst((ATermList) t);
          a_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, z_79, a_80);
      return(t);
    }
    ATerm d_13 (ATerm t)
    {
      ATerm b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm n_50 = ATgetArgument(t, 0);
          if(match_cons(n_50, sym__2))
            {
              b_80 = ATgetArgument(n_50, 0);
              d_80 = ATgetArgument(n_50, 1);
            }
          else
            _fail(t);
          {
            ATerm o_50 = ATgetArgument(t, 1);
            if(match_cons(o_50, sym__2))
              {
                c_80 = ATgetArgument(o_50, 0);
                e_80 = ATgetArgument(o_50, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_80), b_80), (ATerm) ATinsert(CheckATermList(e_80), d_80));
      return(t);
    }
    t = genzip_4_0(b_13, c_13, d_13, y_129, t);
    if(match_cons(t, sym__2))
      {
        s_79 = ATgetArgument(t, 0);
        t_79 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_mkterm(p_79, s_79);
    u_79 = t;
    t = SSLsetAnnotations(u_79, r_79);
    t = z_129(t);
    if(match_cons(t, sym__2))
      {
        v_79 = ATgetArgument(t, 0);
        w_79 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = t_79;
    {
      ATerm e_13 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm f_13 (ATerm t)
      {
        ATerm g_13 (ATerm t)
        {
          ATerm f_80 = NULL;
          if(match_cons(t, sym__2))
            {
              f_80 = ATgetArgument(t, 0);
              if((f_80 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = union_1_0(g_13, t);
        return(t);
      }
      t = foldr_2_0(e_13, f_13, t);
      x_79 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_79, x_79);
      {
        ATerm l_13 (ATerm t)
        {
          ATerm g_80 = NULL;
          if(match_cons(t, sym__2))
            {
              g_80 = ATgetArgument(t, 0);
              if((g_80 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = union_1_0(l_13, t);
        y_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_79, y_79);
      }
    }
  }
  return(t);
}
ATerm collect_split_2_0 (ATerm z_130 (ATerm), ATerm a_131 (ATerm), ATerm t)
{
  ATerm k_80 (ATerm t)
  {
    ATerm m_13 (ATerm t)
    {
      ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
      h_80 = t;
      {
        ATerm p_50 = t;
        int q_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_130(t);
            ;
            LocalPopChoice(q_50);
          }
        else
          {
            t = p_50;
          }
        i_80 = t;
        t = h_80;
        {
          ATerm r_50 = t;
          int s_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_131(t);
              ;
              LocalPopChoice(s_50);
            }
          else
            {
              t = r_50;
              t = (ATerm) ATempty;
            }
          j_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_80, j_80);
        }
      }
      return(t);
    }
    t = CollectSplit_2_0(k_80, m_13, t);
    return(t);
  }
  t = k_80(t);
  return(t);
}
ATerm NZip2_0_0 (ATerm t)
{
  ATerm n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL;
  if(match_cons(t, sym__2))
    {
      n_80 = ATgetArgument(t, 0);
      {
        ATerm t_50 = ATgetArgument(t, 1);
        if(((ATgetType(t_50) == AT_LIST) && !(ATisEmpty(t_50))))
          {
            o_80 = ATgetFirst((ATermList) t_50);
            p_80 = (ATerm) ATgetNext((ATermList) t_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_80, term_h_44);
  {
    ATerm u_50 = t;
    int v_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(n_80, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(v_50);
      }
    else
      {
        t = u_50;
        t = SSL_addr(n_80, (ATerm) ATmakeInt(1));
      }
    q_80 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_80, o_80), (ATerm) ATmakeAppl(sym__2, q_80, p_80));
  }
  return(t);
}
ATerm genzip_4_0 (ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm t)
{
  ATerm r_80 (ATerm t)
  {
    ATerm w_50 = t;
    int x_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_125(t);
        ;
        LocalPopChoice(x_50);
      }
    else
      {
        t = w_50;
        t = k_125(t);
        t = _2_0(m_125, r_80, t);
        t = l_125(t);
      }
    return(t);
  }
  t = r_80(t);
  return(t);
}
ATerm nzip0_1_0 (ATerm u_125 (ATerm), ATerm t)
{
  ATerm s_80 = NULL;
  s_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_43, s_80);
  {
    ATerm n_13 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm y_50 = ATgetArgument(t, 0);
          ATerm z_50 = ATgetArgument(t, 1);
          if(((ATgetType(z_50) != AT_LIST) || !(ATisEmpty(z_50))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm o_13 (ATerm t)
    {
      ATerm t_80 = NULL,u_80 = NULL;
      if(match_cons(t, sym__2))
        {
          t_80 = ATgetArgument(t, 0);
          u_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(u_80), t_80);
      return(t);
    }
    t = genzip_4_0(n_13, NZip2_0_0, o_13, u_125, t);
  }
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm z_80 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL;
  if(match_cons(t, sym_As_2))
    {
      b_81 = ATgetArgument(t, 0);
      d_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_81;
  if(match_cons(t, sym_Off_1))
    {
      c_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_81;
  {
    ATerm a_51 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm d_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_51);
        {
          ATerm e_51 = t;
          int f_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_81;
              {
                ATerm q_13 (ATerm t)
                {
                  ATerm i_81 = NULL,j_81 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      i_81 = ATgetArgument(t, 0);
                      j_81 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(c_81), i_81)), j_81);
                  return(t);
                }
                t = nzip0_1_0(q_13, t);
              }
              ;
              LocalPopChoice(f_51);
            }
          else
            {
              t = e_51;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, c_81), term_e_44);
            }
        }
      }
    else
      {
        t = a_51;
        if(match_cons(t, sym_As_2))
          {
            e_81 = ATgetArgument(t, 0);
            f_81 = ATgetArgument(t, 1);
            t = e_81;
            if(match_cons(t, sym_Var_1))
              {
                z_80 = ATgetArgument(t, 0);
                {
                  ATerm g_51 = t;
                  int h_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = d_81;
                      {
                        ATerm s_13 (ATerm t)
                        {
                          ATerm n_81 = NULL,o_81 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              n_81 = ATgetArgument(t, 0);
                              o_81 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(c_81), n_81)), o_81);
                          return(t);
                        }
                        t = nzip0_1_0(s_13, t);
                      }
                      ;
                      LocalPopChoice(h_51);
                    }
                  else
                    {
                      t = g_51;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_80), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, c_81), f_81));
                    }
                }
              }
            else
              {
                t = d_81;
                {
                  ATerm t_13 (ATerm t)
                  {
                    ATerm u_81 = NULL,v_81 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        u_81 = ATgetArgument(t, 0);
                        v_81 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(c_81), u_81)), v_81);
                    return(t);
                  }
                  t = nzip0_1_0(t_13, t);
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                e_81 = ATgetArgument(t, 0);
                f_81 = ATgetArgument(t, 1);
                {
                  ATerm j_51 = t;
                  int k_51 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = d_81;
                      {
                        ATerm u_13 (ATerm t)
                        {
                          ATerm y_81 = NULL,z_81 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              y_81 = ATgetArgument(t, 0);
                              z_81 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(c_81), y_81)), z_81);
                          return(t);
                        }
                        t = nzip0_1_0(u_13, t);
                      }
                      ;
                      LocalPopChoice(k_51);
                    }
                  else
                    {
                      t = j_51;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, c_81), (ATerm) ATmakeAppl(sym_Op_2, e_81, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, c_81), f_81)));
                    }
                }
              }
            else
              {
                t = d_81;
                {
                  ATerm v_13 (ATerm t)
                  {
                    ATerm h_82 = NULL,i_82 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        h_82 = ATgetArgument(t, 0);
                        i_82 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(c_81), h_82)), i_82);
                    return(t);
                  }
                  t = nzip0_1_0(v_13, t);
                }
              }
          }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm x_120 (ATerm), ATerm t)
{
  t = x_120(t);
  {
    ATerm w_13 (ATerm t)
    {
      t = topdown_1_0(x_120, t);
      return(t);
    }
    t = SRTS_all(w_13, t);
  }
  return(t);
}
ATerm term_to_matrix_0_0 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL;
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_o_51, (ATerm) ATinsert(ATempty, l_82));
  {
    ATerm x_13 (ATerm t)
    {
      ATerm q_51 = t;
      int t_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_82 = NULL,r_82 = NULL;
          if(match_cons(t, sym_As_2))
            {
              q_82 = ATgetArgument(t, 0);
              r_82 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_82;
          if(!(match_cons(t, sym_Wld_0)))
            _fail(t);
          t = r_82;
          ;
          LocalPopChoice(t_51);
        }
      else
        {
          t = q_51;
        }
      return(t);
    }
    t = topdown_1_0(x_13, t);
    {
      ATerm y_13 (ATerm t)
      {
        ATerm v_51 = t;
        int b_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Propagate_0_0(t);
            ;
            LocalPopChoice(b_52);
          }
        else
          {
            t = v_51;
          }
        return(t);
      }
      t = topdown_1_0(y_13, t);
      t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
      if(match_cons(t, sym__2))
        {
          m_82 = ATgetArgument(t, 0);
          n_82 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_82;
      {
        ATerm z_13 (ATerm t)
        {
          ATerm t_82 = NULL;
          if(match_cons(t, sym_Off_1))
            {
              t_82 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_82;
          return(t);
        }
        t = collect_om_1_0(z_13, t);
        o_82 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, o_82, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, m_82, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_82), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_s_43)))))));
      }
    }
  }
  return(t);
}
ATerm Scope_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t)
{
  ATerm u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,y_82 = NULL,z_82 = NULL;
  z_82 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_82 = ATgetArgument(t, 0);
      w_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_82);
  u_82 = t;
  t = v_82;
  t = g_109(t);
  x_82 = t;
  t = w_82;
  t = h_109(t);
  y_82 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, x_82, y_82), u_82);
  return(t);
}
ATerm Seq_2_0 (ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm t)
{
  ATerm c_83 = NULL,d_83 = NULL,e_83 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL;
  h_83 = t;
  if(match_cons(t, sym_Seq_2))
    {
      d_83 = ATgetArgument(t, 0);
      e_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_83);
  c_83 = t;
  t = d_83;
  t = k_109(t);
  f_83 = t;
  t = e_83;
  t = l_109(t);
  g_83 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, f_83, g_83), c_83);
  return(t);
}
ATerm LChoice_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t)
{
  ATerm p_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL;
  u_83 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      q_83 = ATgetArgument(t, 0);
      r_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_83);
  p_83 = t;
  t = q_83;
  t = m_109(t);
  s_83 = t;
  t = r_83;
  t = n_109(t);
  t_83 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, s_83, t_83), p_83);
  return(t);
}
ATerm Choice_2_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm t)
{
  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL,c_84 = NULL;
  c_84 = t;
  if(match_cons(t, sym_Choice_2))
    {
      y_83 = ATgetArgument(t, 0);
      z_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_84);
  x_83 = t;
  t = y_83;
  t = k_108(t);
  a_84 = t;
  t = z_83;
  t = l_108(t);
  b_84 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, a_84, b_84), x_83);
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm g_52 = t;
  int h_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_52 = t;
      int k_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Choice_2_0(_id, _id, t);
          ;
          LocalPopChoice(k_52);
        }
      else
        {
          t = i_52;
          t = LChoice_2_0(_id, _id, t);
        }
      {
        ATerm j_84 (ATerm t)
        {
          ATerm l_52 = t;
          int m_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Choice_2_0(j_84, j_84, t);
              ;
              LocalPopChoice(m_52);
            }
          else
            {
              t = l_52;
              {
                ATerm n_52 = t;
                int p_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2_0(j_84, j_84, t);
                    ;
                    LocalPopChoice(p_52);
                  }
                else
                  {
                    t = n_52;
                    {
                      ATerm k_84 (ATerm t)
                      {
                        ATerm t_52 = t;
                        int v_52 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Seq_2_0(k_84, match_to_matrix_0_0, t);
                            ;
                            LocalPopChoice(v_52);
                          }
                        else
                          {
                            t = t_52;
                            {
                              ATerm w_52 = t;
                              int x_52 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Scope_2_0(_id, k_84, t);
                                  ;
                                  LocalPopChoice(x_52);
                                }
                              else
                                {
                                  t = w_52;
                                  {
                                    ATerm y_52 = t;
                                    int z_52 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm h_84 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            h_84 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = h_84;
                                        t = term_to_matrix_0_0(t);
                                        ;
                                        LocalPopChoice(z_52);
                                      }
                                    else
                                      {
                                        t = y_52;
                                        t = SRTS_all(match_to_matrix_0_0, t);
                                      }
                                  }
                                }
                            }
                          }
                        return(t);
                      }
                      t = k_84(t);
                    }
                  }
              }
            }
          return(t);
        }
        t = j_84(t);
      }
      ;
      LocalPopChoice(h_52);
    }
  else
    {
      t = g_52;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  {
    ATerm a_14 (ATerm t)
    {
      ATerm b_14 (ATerm t)
      {
        ATerm e_53 = t;
        int f_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MatrixMerge_0_0(t);
            ;
            LocalPopChoice(f_53);
          }
        else
          {
            t = e_53;
            t = Simplify_0_0(t);
          }
        return(t);
      }
      t = repeat_1_0(b_14, t);
      return(t);
    }
    t = bottomup_1_0(a_14, t);
  }
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    ATerm c_14 (ATerm t)
    {
      t = term_r_47;
      return(t);
    }
    ATerm d_14 (ATerm t)
    {
      ATerm e_14 (ATerm t)
      {
        ATerm g_53 = t;
        int h_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_53 = t;
            int j_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_22 = NULL,l_22 = NULL;
                if(match_cons(t, sym_Matrix_1))
                  {
                    k_22 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = k_22;
                {
                  ATerm f_14 (ATerm t)
                  {
                    ATerm m_22 = NULL;
                    if(match_cons(t, sym_Row_3))
                      {
                        ATerm l_53 = ATgetArgument(t, 0);
                        if(((ATgetType(l_53) != AT_LIST) || !(ATisEmpty(l_53))))
                          _fail(t);
                        {
                          ATerm n_53 = ATgetArgument(t, 1);
                          if(((ATgetType(n_53) != AT_LIST) || !(ATisEmpty(n_53))))
                            _fail(t);
                        }
                        m_22 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = m_22;
                    return(t);
                  }
                  t = map_1_0(f_14, t);
                  l_22 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoices_1, l_22);
                }
                ;
                LocalPopChoice(j_53);
              }
            else
              {
                t = i_53;
                {
                  ATerm p_53 = t;
                  int q_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SkipWild_0_0(t);
                      ;
                      LocalPopChoice(q_53);
                    }
                  else
                    {
                      t = p_53;
                      {
                        ATerm s_53 = t;
                        int t_53 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = ShiftColumn_0_0(t);
                            ;
                            LocalPopChoice(t_53);
                          }
                        else
                          {
                            t = s_53;
                            t = Mixture_0_0(t);
                          }
                      }
                    }
                }
              }
            ;
            LocalPopChoice(h_53);
          }
        else
          {
            t = g_53;
            {
              ATerm u_53 = t;
              int v_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MatrixScope_0_0(t);
                  ;
                  LocalPopChoice(v_53);
                }
              else
                {
                  t = u_53;
                  t = Simplify_0_0(t);
                }
            }
          }
        return(t);
      }
      t = repeat_1_0(e_14, t);
      t = SRTS_all(d_14, t);
      return(t);
    }
    t = scope_2_0(c_14, d_14, t);
    t = strename_0_0(t);
  }
  return(t);
}
ATerm SDefT_4_0 (ATerm o_111 (ATerm), ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL;
  z_84 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_84 = ATgetArgument(t, 0);
      o_84 = ATgetArgument(t, 1);
      p_84 = ATgetArgument(t, 2);
      q_84 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_84);
  m_84 = t;
  t = n_84;
  t = o_111(t);
  r_84 = t;
  t = o_84;
  t = p_111(t);
  s_84 = t;
  t = p_84;
  t = q_111(t);
  x_84 = t;
  t = q_84;
  t = r_111(t);
  y_84 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, r_84, s_84, x_84, y_84), m_84);
  return(t);
}
ATerm SDef_3_0 (ATerm l_111 (ATerm), ATerm m_111 (ATerm), ATerm n_111 (ATerm), ATerm t)
{
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL;
  j_85 = t;
  if(match_cons(t, sym_SDef_3))
    {
      d_85 = ATgetArgument(t, 0);
      e_85 = ATgetArgument(t, 1);
      f_85 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_85);
  c_85 = t;
  t = d_85;
  t = l_111(t);
  g_85 = t;
  t = e_85;
  t = m_111(t);
  h_85 = t;
  t = f_85;
  t = n_111(t);
  i_85 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, g_85, h_85, i_85), c_85);
  return(t);
}
ATerm Strategies_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL,p_85 = NULL;
  p_85 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_85);
  m_85 = t;
  t = n_85;
  t = o_104(t);
  o_85 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, o_85), m_85);
  return(t);
}
ATerm Specification_1_0 (ATerm t_104 (ATerm), ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL;
  v_85 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_85 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_85);
  s_85 = t;
  t = t_85;
  t = t_104(t);
  u_85 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, u_85), s_85);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm g_14 (ATerm t)
  {
    ATerm h_14 (ATerm t)
    {
      ATerm i_14 (ATerm t)
      {
        ATerm k_14 (ATerm t)
        {
          ATerm l_14 (ATerm t)
          {
            ATerm w_53 = t;
            int x_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, y_118, t);
                ;
                LocalPopChoice(x_53);
              }
            else
              {
                t = w_53;
                t = SDefT_4_0(_id, _id, _id, y_118, t);
              }
            return(t);
          }
          t = map_1_0(l_14, t);
          return(t);
        }
        t = Strategies_1_0(k_14, t);
        return(t);
      }
      ATerm j_14 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(i_14, j_14, t);
      return(t);
    }
    t = Cons_2_0(_id, h_14, t);
    return(t);
  }
  t = Specification_1_0(g_14, t);
  return(t);
}
ATerm _2_0 (ATerm v_99 (ATerm), ATerm w_99 (ATerm), ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,a_86 = NULL,b_86 = NULL,c_86 = NULL,d_86 = NULL;
  d_86 = t;
  if(match_cons(t, sym__2))
    {
      z_85 = ATgetArgument(t, 0);
      a_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_86);
  y_85 = t;
  t = z_85;
  t = v_99(t);
  b_86 = t;
  t = a_86;
  t = w_99(t);
  c_86 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, b_86, c_86), y_85);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm w_142 (ATerm), ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
  if(match_cons(t, sym__2))
    {
      g_86 = ATgetArgument(t, 0);
      h_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_86, term_y_53);
  t = open_stream_0_0(t);
  i_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_86, h_86);
  t = w_142(t);
  t = fclose_0_0(t);
  t = h_86;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_86 = NULL,k_86 = NULL;
  j_86 = t;
  {
    ATerm m_14 (ATerm t)
    {
      ATerm a_54 = t;
      int b_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_14 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((k_86 != NULL) && (k_86 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_86 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_14, t);
          ;
          LocalPopChoice(b_54);
        }
      else
        {
          t = a_54;
          t = term_c_54;
          if(((k_86 != NULL) && (k_86 != t)))
            _fail(t);
          else
            k_86 = t;
        }
      return(t);
    }
    t = _2_0(m_14, _id, t);
    t = j_86;
    {
      ATerm q_14 (ATerm t)
      {
        ATerm n_22 = NULL;
        n_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_86), n_22);
        return(t);
      }
      t = _2_0(_id, q_14, t);
      {
        ATerm d_54 = t;
        int f_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_14 (ATerm t)
            {
              ATerm t_14 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(t_14, t);
              return(t);
            }
            ATerm s_14 (ATerm t)
            {
              ATerm u_14 (ATerm t)
              {
                ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm g_54 = ATgetArgument(t, 0);
                    if(match_cons(g_54, sym_Stream_1))
                      {
                        l_86 = ATgetArgument(g_54, 0);
                      }
                    else
                      _fail(t);
                    m_86 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(l_86, m_86);
                n_86 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, n_86);
                return(t);
              }
              t = WriteToFile_1_0(u_14, t);
              return(t);
            }
            t = _2_0(r_14, s_14, t);
            ;
            LocalPopChoice(f_54);
          }
        else
          {
            t = d_54;
            {
              ATerm v_14 (ATerm t)
              {
                ATerm w_14 (ATerm t)
                {
                  ATerm o_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm h_54 = ATgetArgument(t, 0);
                      if(match_cons(h_54, sym_Stream_1))
                        {
                          o_86 = ATgetArgument(h_54, 0);
                        }
                      else
                        _fail(t);
                      p_86 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(o_86, p_86);
                  q_86 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), q_86);
                  r_86 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, r_86);
                  return(t);
                }
                t = WriteToFile_1_0(w_14, t);
                return(t);
              }
              t = _2_0(_id, v_14, t);
            }
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
ATerm apply_strategy_1_0 (ATerm y_145 (ATerm), ATerm t)
{
  ATerm s_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL;
  s_86 = t;
  t = dtime_0_0(t);
  t = s_86;
  t = y_145(t);
  t_86 = t;
  t = dtime_0_0(t);
  u_86 = t;
  t = t_86;
  if(match_cons(t, sym__2))
    {
      v_86 = ATgetArgument(t, 0);
      w_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_86), (ATerm) ATmakeAppl(sym_Runtime_1, u_86)), w_86);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_87 (ATerm e_87, ATerm t)
  {
    t = SSL_fclose(e_87);
    return(t);
  }
  ATerm h_87 = NULL,n_87 = NULL;
  n_87 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_87 = ATgetArgument(t, 0);
      {
        ATerm j_54 = t;
        int l_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_87);
            ;
            LocalPopChoice(l_54);
          }
        else
          {
            t = j_54;
            t = p_87(n_87, t);
          }
      }
    }
  else
    {
      t = p_87(n_87, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_87 = NULL;
  t = SSL_stdin_stream();
  q_87 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_87);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_87 = NULL;
  t = SSL_stdout_stream();
  r_87 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_87);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_87 = NULL;
  t = SSL_stderr_stream();
  s_87 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_87);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_54 = ATgetArgument(t, 0);
      ATerm o_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL,o_23 = NULL;
        n_23 = t;
        t = SSL_explode_term(n_23);
        if(match_cons(t, sym__2))
          {
            ATerm r_54 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_54) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_54 = ATgetArgument(t, 1);
              if(((ATgetType(s_54) == AT_LIST) && !(ATisEmpty(s_54))))
                {
                  o_23 = ATgetFirst((ATermList) s_54);
                  {
                    ATerm t_54 = (ATerm) ATgetNext((ATermList) s_54);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_23;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_23;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_23;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_23;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(q_54);
      }
    else
      {
        t = p_54;
        {
          ATerm v_54 = t;
          int w_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_87 = NULL,z_87 = NULL,a_88 = NULL;
              ATerm x_14 (ATerm t)
              {
                ATerm b_88 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    b_88 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = b_88;
                return(t);
              }
              t = _2_0(x_14, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_87 = ATgetArgument(t, 0);
                  z_87 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(y_87, z_87);
              a_88 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, a_88);
              ;
              LocalPopChoice(w_54);
            }
          else
            {
              t = v_54;
              {
                ATerm c_88 = NULL,d_88 = NULL,e_88 = NULL;
                ATerm y_14 (ATerm t)
                {
                  ATerm f_88 = NULL;
                  f_88 = t;
                  t = SSL_is_string(f_88);
                  return(t);
                }
                t = _2_0(y_14, _id, t);
                if(match_cons(t, sym__2))
                  {
                    c_88 = ATgetArgument(t, 0);
                    d_88 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(c_88, d_88);
                e_88 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, e_88);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL;
  ATerm x_54 = t;
  int y_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_88 = NULL;
      j_88 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_88, term_z_54);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(y_54);
    }
  else
    {
      t = x_54;
      {
        ATerm q_23 = NULL;
        q_23 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_23), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = q_23;
        _fail(t);
      }
    }
  g_88 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(i_88);
  h_88 = t;
  t = g_88;
  t = fclose_0_0(t);
  t = h_88;
  return(t);
}
ATerm fetch_1_0 (ATerm j_127 (ATerm), ATerm t)
{
  ATerm o_88 (ATerm t)
  {
    ATerm a_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_127, _id, t);
        ;
        LocalPopChoice(c_55);
      }
    else
      {
        t = a_55;
        t = Cons_2_0(_id, o_88, t);
      }
    return(t);
  }
  t = o_88(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_55 = t;
  int e_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_55);
    }
  else
    {
      t = d_55;
      {
        ATerm r_88 = NULL,s_88 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_88 = ATgetFirst((ATermList) t);
            s_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_88;
        {
          ATerm z_14 (ATerm t)
          {
            t = s_88;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(z_14, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_127 (ATerm), ATerm t)
{
  ATerm z_88 (ATerm t)
  {
    ATerm f_55 = t;
    int g_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_88, t);
        ;
        LocalPopChoice(g_55);
      }
    else
      {
        t = f_55;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_127(t);
      }
    return(t);
  }
  t = z_88(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm f_89 = NULL;
  ATerm a_15 (ATerm t)
  {
    ATerm p_89 = NULL;
    p_89 = t;
    t = SSL_explode_string(p_89);
    return(t);
  }
  ATerm b_15 (ATerm t)
  {
    ATerm q_89 = NULL;
    q_89 = t;
    t = SSL_explode_string(q_89);
    return(t);
  }
  t = _2_0(a_15, b_15, t);
  {
    ATerm h_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_90 = NULL,b_90 = NULL;
        if(match_cons(t, sym__2))
          {
            a_90 = ATgetArgument(t, 0);
            b_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_90;
        {
          ATerm c_15 (ATerm t)
          {
            t = b_90;
            return(t);
          }
          t = at_end_1_0(c_15, t);
        }
        ;
        LocalPopChoice(i_55);
      }
    else
      {
        t = h_55;
        {
          ATerm n_24 = NULL,o_24 = NULL;
          n_24 = t;
          t = SSL_explode_term(n_24);
          if(match_cons(t, sym__2))
            {
              ATerm j_55 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_55) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              o_24 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_24;
          t = concat_0_0(t);
        }
      }
    f_89 = t;
    t = SSL_implode_string(f_89);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm k_55 = t;
  int l_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_90 = NULL;
      l_90 = t;
      t = SSL_is_string(l_90);
      ;
      LocalPopChoice(l_55);
    }
  else
    {
      t = k_55;
      {
        ATerm m_55 = t;
        int n_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_15 (ATerm t)
            {
              ATerm o_55 = t;
              int p_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(p_55);
                }
              else
                {
                  t = o_55;
                }
              return(t);
            }
            t = map_1_0(d_15, t);
            ;
            LocalPopChoice(n_55);
          }
        else
          {
            t = m_55;
            {
              ATerm p_90 = NULL,q_90 = NULL,r_90 = NULL;
              p_90 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_90 = ATgetArgument(t, 0);
                  t = q_90;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_90 = ATgetArgument(t, 0);
                      t = q_90;
                      {
                        ATerm q_55 = t;
                        int r_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_90);
                            {
                              ATerm s_55 = t;
                              int t_55 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_26 = NULL;
                                  t = eval_config_0_0(t);
                                  n_26 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_90, n_26);
                                  t = n_26;
                                  ;
                                  LocalPopChoice(t_55);
                                }
                              else
                                {
                                  t = s_55;
                                }
                            }
                            ;
                            LocalPopChoice(r_55);
                          }
                        else
                          {
                            t = q_55;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_90), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = q_90;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_90 = NULL,w_90 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_90 = ATgetArgument(t, 0);
                          r_90 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_90;
                      t = eval_config_0_0(t);
                      v_90 = t;
                      t = r_90;
                      t = eval_config_0_0(t);
                      w_90 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_90, w_90);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_144 (ATerm), ATerm t)
{
  ATerm u_55 = t;
  int v_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_91 = NULL,d_91 = NULL;
      b_91 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm w_55 = t;
        int x_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_27 = NULL;
            t = eval_config_0_0(t);
            c_27 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), c_27);
            t = c_27;
            ;
            LocalPopChoice(x_55);
          }
        else
          {
            t = w_55;
          }
        d_91 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_91, term_y_55);
        t = geq_0_0(t);
        t = b_91;
        t = a_144(t);
      }
      ;
      LocalPopChoice(v_55);
    }
  else
    {
      t = u_55;
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm h_15 (ATerm t)
  {
    ATerm f_91 = NULL;
    f_91 = t;
    if(match_string(t, "-k"))
      {
        t = f_91;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = f_91;
      }
    return(t);
  }
  ATerm i_15 (ATerm t)
  {
    ATerm g_91 = NULL,h_91 = NULL;
    g_91 = t;
    t = SSL_string_to_int(g_91);
    h_91 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), h_91);
    t = g_91;
    return(t);
  }
  ATerm j_15 (ATerm t)
  {
    t = term_z_55;
    return(t);
  }
  t = ArgOption_3_0(h_15, i_15, j_15, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_56 = t;
  int b_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_15 (ATerm t)
      {
        ATerm j_91 = NULL;
        j_91 = t;
        if(match_string(t, "-S"))
          {
            t = j_91;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = j_91;
          }
        return(t);
      }
      ATerm l_15 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_c_56;
        return(t);
      }
      ATerm n_15 (ATerm t)
      {
        t = term_d_56;
        return(t);
      }
      t = Option_3_0(k_15, l_15, n_15, t);
      ;
      LocalPopChoice(b_56);
    }
  else
    {
      t = a_56;
      {
        ATerm e_56 = t;
        int f_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_15 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_15 (ATerm t)
            {
              ATerm k_91 = NULL,l_91 = NULL;
              k_91 = t;
              t = SSL_string_to_int(k_91);
              l_91 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_91);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, k_91);
              return(t);
            }
            ATerm r_15 (ATerm t)
            {
              t = term_g_56;
              return(t);
            }
            t = ArgOption_3_0(p_15, q_15, r_15, t);
            ;
            LocalPopChoice(f_56);
          }
        else
          {
            t = e_56;
            {
              ATerm s_15 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm t_15 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_h_56;
                return(t);
              }
              ATerm u_15 (ATerm t)
              {
                t = term_i_56;
                return(t);
              }
              t = Option_3_0(s_15, t_15, u_15, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_91 = NULL,p_91 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_91 = NULL;
      t = term_t_17;
      t = d_0(t);
      q_91 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_56, term_k_56, q_91);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_91 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_91 = ATgetFirst((ATermList) t);
          p_91 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_91;
      t = a_0(t);
      t = term_t_17;
      t = b_0(t);
      t_91 = t;
      t = (ATerm) ATinsert(CheckATermList(p_91), t_91);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm w_15 (ATerm t)
  {
    ATerm v_91 = NULL;
    v_91 = t;
    if(match_string(t, "-o"))
      {
        t = v_91;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_91;
      }
    return(t);
  }
  ATerm x_15 (ATerm t)
  {
    ATerm w_91 = NULL;
    w_91 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_91);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_91);
    return(t);
  }
  ATerm y_15 (ATerm t)
  {
    t = term_l_56;
    return(t);
  }
  t = ArgOption_3_0(w_15, x_15, y_15, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_91 = NULL,a_92 = NULL,b_92 = NULL,c_92 = NULL;
  if(match_cons(t, sym__3))
    {
      z_91 = ATgetArgument(t, 0);
      a_92 = ATgetArgument(t, 1);
      b_92 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_91, a_92);
  {
    ATerm m_56 = t;
    int n_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_56 = ATgetArgument(t, 0);
            ATerm p_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_91, a_92);
        ;
        LocalPopChoice(n_56);
      }
    else
      {
        t = m_56;
        t = (ATerm) ATempty;
      }
    c_92 = t;
    t = SSL_table_put(z_91, a_92, (ATerm) ATinsert(CheckATermList(c_92), b_92));
    t = (ATerm) ATmakeAppl(sym__3, z_91, a_92, b_92);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_92 = NULL;
      t = term_t_17;
      t = m_0(t);
      o_92 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_j_56, term_k_56, o_92);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_92 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_92 = ATgetFirst((ATermList) t);
          l_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_92;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_92 = ATgetFirst((ATermList) t);
          n_92 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_92;
      t = i_0(t);
      t = m_92;
      t = k_0(t);
      s_92 = t;
      t = (ATerm) ATinsert(CheckATermList(n_92), s_92);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm z_15 (ATerm t)
  {
    ATerm u_92 = NULL;
    u_92 = t;
    if(match_string(t, "-i"))
      {
        t = u_92;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_92;
      }
    return(t);
  }
  ATerm a_16 (ATerm t)
  {
    ATerm v_92 = NULL;
    v_92 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_92);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_92);
    return(t);
  }
  ATerm f_16 (ATerm t)
  {
    t = term_q_56;
    return(t);
  }
  t = ArgOption_3_0(z_15, a_16, f_16, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_92 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_17;
  t = whoami_0_0(t);
  w_92 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_92));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_56 = t;
    int s_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_27 = NULL;
        t = eval_config_0_0(t);
        k_27 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_27);
        t = k_27;
        ;
        LocalPopChoice(s_56);
      }
    else
      {
        t = r_56;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t)
{
  ATerm t_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_131(t);
      ;
      LocalPopChoice(u_56);
    }
  else
    {
      t = t_56;
      {
        ATerm z_92 = NULL,a_93 = NULL,d_93 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_92 = ATgetFirst((ATermList) t);
            a_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_93;
        t = foldr_2_0(n_131, o_131, t);
        d_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_92, d_93);
        t = o_131(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_93 = NULL,m_27 = NULL,o_27 = NULL;
  t = times_0_0(t);
  m_27 = t;
  t = SSL_explode_term(m_27);
  if(match_cons(t, sym__2))
    {
      ATerm v_56 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_27;
  {
    ATerm g_16 (ATerm t)
    {
      t = term_s_43;
      return(t);
    }
    ATerm h_16 (ATerm t)
    {
      ATerm e_28 = NULL,f_28 = NULL;
      if(match_cons(t, sym__2))
        {
          e_28 = ATgetArgument(t, 0);
          f_28 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm w_56 = t;
        int x_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(e_28, f_28);
            ;
            LocalPopChoice(x_56);
          }
        else
          {
            t = w_56;
            t = SSL_addr(e_28, f_28);
          }
      }
      return(t);
    }
    t = foldr_2_0(g_16, h_16, t);
    g_93 = t;
    t = SSL_TicksToSeconds(g_93);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_93 = NULL,s_93 = NULL,t_93 = NULL;
  r_93 = t;
  if(match_cons(t, sym__2))
    {
      s_93 = ATgetArgument(t, 0);
      t_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_56 = t;
    int z_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_93;
        if((s_93 != t))
          {
            _fail(t);
          }
        t = r_93;
        ;
        LocalPopChoice(z_56);
      }
    else
      {
        t = y_56;
        t = r_93;
        {
          ATerm a_57 = t;
          int b_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_93, t_93);
              ;
              LocalPopChoice(b_57);
            }
          else
            {
              t = a_57;
              t = SSL_gtr(s_93, t_93);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_93, t_93);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_143 (ATerm), ATerm t)
{
  ATerm c_57 = t;
  int d_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_93 = NULL,y_93 = NULL;
      w_93 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm e_57 = t;
        int f_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_28 = NULL;
            t = eval_config_0_0(t);
            p_28 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), p_28);
            t = p_28;
            ;
            LocalPopChoice(f_57);
          }
        else
          {
            t = e_57;
          }
        y_93 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_93, term_h_44);
        t = geq_0_0(t);
        t = w_93;
        t = z_143(t);
      }
      ;
      LocalPopChoice(d_57);
    }
  else
    {
      t = c_57;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm i_16 (ATerm t)
  {
    ATerm c_94 = NULL,d_94 = NULL;
    t = run_time_0_0(t);
    c_94 = t;
    t = term_t_17;
    t = whoami_0_0(t);
    d_94 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), c_94), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), d_94));
    t = (ATerm) ATmakeAppl(sym__2, term_g_57, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_57), c_94), term_h_57), d_94));
    return(t);
  }
  t = if_verbose1_1_0(i_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm w_146 (ATerm), ATerm t)
{
  ATerm j_57 = t;
  int k_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm l_57 = t;
        int m_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_28 = NULL;
            t = eval_config_0_0(t);
            t_28 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_28);
            t = t_28;
            ;
            LocalPopChoice(m_57);
          }
        else
          {
            t = l_57;
          }
      }
      ;
      LocalPopChoice(k_57);
    }
  else
    {
      t = j_57;
      {
        ATerm j_16 (ATerm t)
        {
          ATerm n_57 = t;
          int o_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(o_57);
            }
          else
            {
              t = n_57;
              {
                ATerm p_57 = t;
                int q_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(q_57);
                  }
                else
                  {
                    t = p_57;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(j_16, t);
      }
    }
  t = w_146(t);
  return(t);
}
ATerm map_1_0 (ATerm y_126 (ATerm), ATerm t)
{
  ATerm e_94 (ATerm t)
  {
    ATerm r_57 = t;
    int s_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(s_57);
      }
    else
      {
        t = r_57;
        t = Cons_2_0(y_126, e_94, t);
      }
    return(t);
  }
  t = e_94(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_94 = NULL,h_94 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_94 = ATgetFirst((ATermList) t);
      h_94 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_94 = NULL,m_94 = NULL;
        t = h_94;
        t = g_0(t);
        l_94 = t;
        t = g_94;
        t = f_0(t);
        m_94 = t;
        t = h_94;
        {
          ATerm k_16 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(l_94), m_94);
            return(t);
          }
          t = reverse_acc_2_0(f_0, k_16, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_17;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm s_118 (ATerm), ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL;
  q_94 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_94);
  n_94 = t;
  t = o_94;
  t = s_118(t);
  p_94 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, p_94), n_94);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_57 = t;
  int u_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm v_57 = t;
        int w_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_30 = NULL;
            t = eval_config_0_0(t);
            w_30 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_30);
            t = w_30;
            ;
            LocalPopChoice(w_57);
          }
        else
          {
            t = v_57;
          }
      }
      ;
      LocalPopChoice(u_57);
    }
  else
    {
      t = t_57;
      {
        ATerm m_16 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(m_16, t);
      }
    }
  t = term_x_57;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm o_16 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, o_16, t);
    {
      ATerm p_16 (ATerm t)
      {
        ATerm t_94 = NULL;
        t_94 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, t_94), term_y_57);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(p_16, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm t_118 (ATerm), ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL;
  x_94 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      v_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_94);
  u_94 = t;
  t = v_94;
  t = t_118(t);
  w_94 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, w_94), u_94);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_95 = NULL,c_95 = NULL;
  b_95 = t;
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_95;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_58 = ATgetFirst((ATermList) t);
                ATerm c_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_95;
          }
        ;
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        t = (ATerm) ATinsert(ATempty, b_95);
      }
    c_95 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), c_95);
    t = b_95;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm d_58 = t;
    int e_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_31 = NULL;
        t = eval_config_0_0(t);
        r_31 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), r_31);
        t = r_31;
        ;
        LocalPopChoice(e_58);
      }
    else
      {
        t = d_58;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_58 = t;
  int g_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_16 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm r_16 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_j_58;
        return(t);
      }
      ATerm s_16 (ATerm t)
      {
        t = term_k_58;
        return(t);
      }
      t = Option_3_0(q_16, r_16, s_16, t);
      ;
      LocalPopChoice(g_58);
    }
  else
    {
      t = f_58;
      {
        ATerm t_16 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm u_16 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_l_58;
          return(t);
        }
        ATerm v_16 (ATerm t)
        {
          t = term_m_58;
          return(t);
        }
        t = Option_3_0(t_16, u_16, v_16, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_104 (ATerm), ATerm l_104 (ATerm), ATerm t)
{
  ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL;
  l_95 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_95 = ATgetFirst((ATermList) t);
      i_95 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_95);
  g_95 = t;
  t = h_95;
  t = k_104(t);
  j_95 = t;
  t = i_95;
  t = l_104(t);
  k_95 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(k_95), j_95), g_95);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_148 (ATerm), ATerm t)
{
  ATerm p_95 = NULL;
  p_95 = t;
  {
    ATerm n_58 = t;
    int o_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_58;
        t = z_148(t);
        ;
        LocalPopChoice(o_58);
      }
    else
      {
        t = n_58;
      }
    t = p_95;
    {
      ATerm z_16 (ATerm t)
      {
        ATerm q_95 = NULL;
        q_95 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_95);
        t = (ATerm) ATmakeAppl(sym_Program_1, q_95);
        return(t);
      }
      ATerm a_17 (ATerm t)
      {
        ATerm q_58 = t;
        int r_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_58 = t;
            int t_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_58);
              }
            else
              {
                t = s_58;
                t = z_148(t);
                t = Cons_2_0(_id, a_17, t);
              }
            ;
            LocalPopChoice(r_58);
          }
        else
          {
            t = q_58;
            {
              ATerm s_95 = NULL,t_95 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_95 = ATgetFirst((ATermList) t);
                  t_95 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_95), (ATerm) ATmakeAppl(sym_Undefined_1, s_95));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_16, a_17, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm y_148 (ATerm), ATerm t)
{
  ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL;
  a_96 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = a_96;
  {
    ATerm b_17 (ATerm t)
    {
      ATerm u_58 = t;
      int v_58 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_148(t);
          ;
          LocalPopChoice(v_58);
        }
      else
        {
          t = u_58;
          {
            ATerm w_58 = t;
            int x_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_17 (ATerm t)
                {
                  ATerm d_96 = NULL;
                  d_96 = t;
                  if(match_string(t, "--help"))
                    {
                      t = d_96;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = d_96;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = d_96;
                        }
                    }
                  return(t);
                }
                ATerm d_17 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_y_58;
                  return(t);
                }
                ATerm e_17 (ATerm t)
                {
                  t = term_z_58;
                  return(t);
                }
                t = Option_3_0(c_17, d_17, e_17, t);
                ;
                LocalPopChoice(x_58);
              }
            else
              {
                t = w_58;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_17, t);
    {
      ATerm a_59 = t;
      int b_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_96 = NULL;
          t_96 = t;
          {
            ATerm c_59 = t;
            int d_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = t_96;
                {
                  ATerm e_59 = t;
                  int f_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm g_59 = t;
                        int h_59 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_32 = NULL;
                            t = eval_config_0_0(t);
                            t_32 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), t_32);
                            t = t_32;
                            ;
                            LocalPopChoice(h_59);
                          }
                        else
                          {
                            t = g_59;
                          }
                      }
                      ;
                      LocalPopChoice(f_59);
                    }
                  else
                    {
                      t = e_59;
                      {
                        ATerm f_17 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(f_17, t);
                      }
                    }
                  t = t_96;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(d_59);
              }
            else
              {
                t = c_59;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm i_59 = t;
                  int j_59 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm s_33 = NULL;
                      t = eval_config_0_0(t);
                      s_33 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), s_33);
                      t = s_33;
                      ;
                      LocalPopChoice(j_59);
                    }
                  else
                    {
                      t = i_59;
                    }
                  t = t_96;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(b_59);
        }
      else
        {
          t = a_59;
          {
            ATerm k_59 = t;
            int l_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_17 (ATerm t)
                {
                  ATerm i_17 (ATerm t)
                  {
                    if(((b_96 != NULL) && (b_96 != t)))
                      _fail(t);
                    else
                      b_96 = t;
                    return(t);
                  }
                  t = Undefined_1_0(i_17, t);
                  return(t);
                }
                t = fetch_1_0(h_17, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_96)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_g_57, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_96)), term_m_59));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(l_59);
              }
            else
              {
                t = k_59;
              }
          }
        }
      c_96 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = c_96;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_146 (ATerm), ATerm z_146 (ATerm), ATerm a_147 (ATerm), ATerm b_147 (ATerm), ATerm t)
{
  ATerm w_96 = NULL;
  t = parse_options_1_0(y_146, t);
  w_96 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), w_96);
  t = w_96;
  t = a_147(t);
  {
    ATerm n_59 = t;
    int o_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_146, t);
        ;
        LocalPopChoice(o_59);
      }
    else
      {
        t = n_59;
        {
          ATerm p_59 = t;
          int q_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_147(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(q_59);
            }
          else
            {
              t = p_59;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm h_146 (ATerm), ATerm i_146 (ATerm), ATerm j_146 (ATerm), ATerm t)
{
  ATerm j_17 (ATerm t)
  {
    ATerm r_59 = t;
    int s_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_146(t);
        ;
        LocalPopChoice(s_59);
      }
    else
      {
        t = r_59;
        {
          ATerm t_59 = t;
          int u_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(u_59);
            }
          else
            {
              t = t_59;
              {
                ATerm v_59 = t;
                int w_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(w_59);
                  }
                else
                  {
                    t = v_59;
                    {
                      ATerm x_59 = t;
                      int y_59 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_17 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm n_17 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_z_59;
                            return(t);
                          }
                          ATerm o_17 (ATerm t)
                          {
                            t = term_a_60;
                            return(t);
                          }
                          t = Option_3_0(m_17, n_17, o_17, t);
                          ;
                          LocalPopChoice(y_59);
                        }
                      else
                        {
                          t = x_59;
                          {
                            ATerm b_60 = t;
                            int c_60 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(c_60);
                              }
                            else
                              {
                                t = b_60;
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
  ATerm k_17 (ATerm t)
  {
    ATerm p_17 (ATerm t)
    {
      ATerm x_96 = NULL,b_97 = NULL;
      x_96 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm d_60 = t;
        int e_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_34 = NULL;
            t = eval_config_0_0(t);
            f_34 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_34);
            t = f_34;
            ;
            LocalPopChoice(e_60);
          }
        else
          {
            t = d_60;
          }
        b_97 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, b_97));
        t = x_96;
      }
      return(t);
    }
    t = if_verbose2_1_0(p_17, t);
    return(t);
  }
  ATerm l_17 (ATerm t)
  {
    ATerm e_97 = NULL,h_97 = NULL,t_34 = NULL;
    e_97 = t;
    {
      ATerm f_60 = t;
      int g_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_17 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_97 != NULL) && (h_97 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_97 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_17, t);
          ;
          LocalPopChoice(g_60);
        }
      else
        {
          t = f_60;
          t = term_h_60;
          h_97 = t;
        }
      t = not_null(h_97);
      t = ReadFromFile_0_0(t);
      t_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_97, t_34);
      t = apply_strategy_1_0(h_146, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(j_17, j_146, k_17, l_17, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm r_17 (ATerm t)
  {
    ATerm s_17 (ATerm t)
    {
      t = apply_to_bodies_1_0(match_to_dfa_0_0, t);
      return(t);
    }
    t = _2_0(_id, s_17, t);
    return(t);
  }
  t = iowrap_3_0(r_17, _fail, default_usage_0_0, t);
  return(t);
}
