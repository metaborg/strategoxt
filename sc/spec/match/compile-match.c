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
ATerm term_n_42;
ATerm term_m_41;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_d_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_x_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_x_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_i_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_y_38;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_q_38;
ATerm term_p_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_w_37;
ATerm term_r_37;
ATerm term_q_36;
ATerm term_j_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_r_35;
ATerm term_b_34;
ATerm term_g_32;
ATerm term_d_31;
ATerm term_u_25;
ATerm term_r_25;
ATerm term_x_22;
ATerm term_a_21;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_n_18;
ATerm term_v_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
void init_constant_terms (void)
{
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Op_2, term_l_17, (ATerm) ATempty);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_37));
  term_w_37 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_17);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym__3, term_x_40, term_y_40, term_b_34);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_41));
  term_m_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm spaste_1_0 (ATerm i_113 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm);
ATerm Let_2_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm c_102 (ATerm), ATerm);
ATerm srename_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm e_113 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm f_127 (ATerm), ATerm g_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm z_126 (ATerm), ATerm a_127 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm k_127 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm d_128 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm n_127 (ATerm), ATerm);
ATerm rename_4_0 (ATerm u_126 (ATerm (ATerm), ATerm), ATerm v_126 (ATerm), ATerm w_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_126 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm Seqs_1_0 (ATerm k_106 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm);
ATerm Prim_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm);
ATerm Var_1_0 (ATerm t_98 (ATerm), ATerm);
ATerm Match_1_0 (ATerm k_102 (ATerm), ATerm);
ATerm Assign_2_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm);
ATerm list_1_0 (ATerm i_120 (ATerm), ATerm);
ATerm Op_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm);
ATerm Str_1_0 (ATerm x_98 (ATerm), ATerm);
ATerm Real_1_0 (ATerm w_98 (ATerm), ATerm);
ATerm Int_1_0 (ATerm v_98 (ATerm), ATerm);
ATerm Build_1_0 (ATerm l_102 (ATerm), ATerm);
ATerm simple_strategy_0_0 (ATerm);
ATerm isect_1_0 (ATerm a_122 (ATerm), ATerm);
ATerm isect_0_0 (ATerm);
ATerm Matrix_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm);
ATerm tvars_matrix_boundin_3_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm k_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm diff_1_0 (ATerm c_122 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm i_131 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_matrix_0_0 (ATerm);
ATerm RowLet_1_0 (ATerm u_0 (ATerm), ATerm);
ATerm MatrixScope_0_0 (ATerm);
ATerm assert_1_0 (ATerm e_126 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm default_state_0_0 (ATerm);
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm ConsTransition_1_0 (ATerm n_142 (ATerm), ATerm);
ATerm Transition_0_0 (ATerm);
ATerm rzip_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm transitions_0_0 (ATerm);
ATerm Uniq_0_0 (ATerm);
ATerm listtd_1_0 (ATerm o_121 (ATerm), ATerm);
ATerm uniq_0_0 (ATerm);
ATerm offsets_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm ConsArgs_0_0 (ATerm);
ATerm filter_1_0 (ATerm i_126 (ATerm), ATerm);
ATerm outedges_0_0 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm Mixture_0_0 (ATerm);
ATerm ShiftColumn_0_0 (ATerm);
ATerm As_2_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm);
ATerm Row_3_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm);
ATerm SkipWild_0_0 (ATerm);
ATerm MatrixRowsEmpty_0_0 (ATerm);
ATerm reduce_matrix_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_126 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_126 (ATerm), ATerm);
ATerm scope_2_0 (ATerm c_126 (ATerm), ATerm d_126 (ATerm), ATerm);
ATerm matrix_to_dfa_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm zip_1_0 (ATerm v_118 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm F10_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm MatrixMerge_0_0 (ATerm);
ATerm repeat_1_0 (ATerm o_130 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm f_114 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm);
ATerm crush_3_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm r_123 (ATerm), ATerm);
ATerm collect_1_0 (ATerm s_123 (ATerm), ATerm);
ATerm collect_offsets_0_0 (ATerm);
ATerm CollectSubst_0_0 (ATerm);
ATerm IgnoreVar_0_0 (ATerm);
ATerm union_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm);
ATerm union_1_0 (ATerm g_122 (ATerm), ATerm);
ATerm unions_1_0 (ATerm i_122 (ATerm), ATerm);
ATerm unions_0_0 (ATerm);
ATerm unzip_1_0 (ATerm a_119 (ATerm), ATerm);
ATerm CollectSplit_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm);
ATerm collect_split_2_0 (ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm);
ATerm collect_substitutions_0_0 (ATerm);
ATerm Annotate_1_0 (ATerm i_112 (ATerm), ATerm);
ATerm NZip2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm);
ATerm nzip0_1_0 (ATerm b_119 (ATerm), ATerm);
ATerm Propagate_0_0 (ATerm);
ATerm topdown_1_0 (ATerm e_114 (ATerm), ATerm);
ATerm term_to_matrix_0_0 (ATerm);
ATerm MatchToMatrix_0_0 (ATerm);
ATerm Scope_2_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm);
ATerm match_to_matrix_0_0 (ATerm);
ATerm match_to_dfa_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm v_97 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm a_98 (ATerm), ATerm);
ATerm apply_to_bodies_1_0 (ATerm f_112 (ATerm), ATerm);
ATerm _2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm v_120 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_137 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm z_135 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm b_139 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm l_135 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm);
ATerm crush_2_0 (ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_137 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm z_139 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_120 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm z_111 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_112 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm p_120 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm z_140 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm w_116 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm e_142 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_142 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm b_142 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm k_139 (ATerm), ATerm l_139 (ATerm), ATerm m_139 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm i_139 (ATerm), ATerm j_139 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm f_139 (ATerm), ATerm);
ATerm compile_match_comp_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm spaste_1_0 (ATerm i_113 (ATerm), ATerm t)
{
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2_0(_id, i_113, t);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm t_3 = NULL,w_3 = NULL,y_3 = NULL,b_4 = NULL,d_4 = NULL;
            if(match_cons(t, sym__2))
              {
                t_3 = ATgetArgument(t, 0);
                d_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_3;
            {
              ATerm r_10 = t;
              int s_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm t_10 = ATgetArgument(t, 0);
                      w_3 = ATgetArgument(t, 1);
                      y_3 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(s_10);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, d_4, w_3, y_3);
                }
              else
                {
                  t = r_10;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm u_10 = ATgetArgument(t, 0);
                      w_3 = ATgetArgument(t, 1);
                      y_3 = ATgetArgument(t, 2);
                      b_4 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_4, w_3, y_3, b_4);
                }
            }
            return(t);
          }
          t = zip_1_0(f_0, t);
        }
        return(t);
      }
      t = Let_2_0(b_0, _id, t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
            {
              t = split_2_0(_id, i_113, t);
              {
                ATerm j_0 (ATerm t)
                {
                  ATerm b_5 = NULL,e_5 = NULL,f_5 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      b_5 = ATgetArgument(t, 0);
                      f_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_5;
                  {
                    ATerm x_10 = t;
                    int y_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm z_10 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(y_10);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_5);
                      }
                    else
                      {
                        t = x_10;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm a_11 = ATgetArgument(t, 0);
                            e_5 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_5, e_5);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(j_0, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, h_0, _id, t);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            {
              ATerm b_11 = t;
              int c_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = split_2_0(_id, i_113, t);
                    {
                      ATerm x_0 (ATerm t)
                      {
                        ATerm l_5 = NULL,n_5 = NULL,q_5 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            l_5 = ATgetArgument(t, 0);
                            q_5 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = l_5;
                        {
                          ATerm d_11 = t;
                          int e_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm f_11 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(e_11);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_5);
                            }
                          else
                            {
                              t = d_11;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm g_11 = ATgetArgument(t, 0);
                                  n_5 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, q_5, n_5);
                            }
                        }
                        return(t);
                      }
                      t = zip_1_0(x_0, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, m_0, _id, _id, t);
                  ;
                  LocalPopChoice(c_11);
                }
              else
                {
                  t = b_11;
                  {
                    ATerm h_11 = t;
                    int i_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_0 (ATerm t)
                        {
                          t = split_2_0(_id, i_113, t);
                          {
                            ATerm z_0 (ATerm t)
                            {
                              ATerm w_5 = NULL,a_6 = NULL,b_6 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  w_5 = ATgetArgument(t, 0);
                                  b_6 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = w_5;
                              {
                                ATerm j_11 = t;
                                int k_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm l_11 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(k_11);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_6);
                                  }
                                else
                                  {
                                    t = j_11;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm m_11 = ATgetArgument(t, 0);
                                        a_6 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, b_6, a_6);
                                  }
                              }
                              return(t);
                            }
                            t = zip_1_0(z_0, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, y_0, _id, _id, t);
                        ;
                        LocalPopChoice(i_11);
                      }
                    else
                      {
                        t = h_11;
                        {
                          ATerm a_1 (ATerm t)
                          {
                            ATerm f_6 = NULL;
                            t = i_113(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                f_6 = ATgetFirst((ATermList) t);
                                {
                                  ATerm n_11 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = f_6;
                            return(t);
                          }
                          t = Rec_2_0(a_1, _id, t);
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
ATerm Rec_2_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,k_6 = NULL,l_6 = NULL,s_6 = NULL,y_6 = NULL;
  y_6 = t;
  if(match_cons(t, sym_Rec_2))
    {
      h_6 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_6);
  g_6 = t;
  t = h_6;
  t = a_103(t);
  l_6 = t;
  t = k_6;
  t = b_103(t);
  s_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, l_6, s_6), g_6);
  return(t);
}
ATerm Let_2_0 (ATerm d_102 (ATerm), ATerm e_102 (ATerm), ATerm t)
{
  ATerm s_7 = NULL,u_7 = NULL,b_8 = NULL,i_8 = NULL,k_8 = NULL,s_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_7 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_8);
  s_7 = t;
  t = u_7;
  t = d_102(t);
  i_8 = t;
  t = b_8;
  t = e_102(t);
  k_8 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, i_8, k_8), s_7);
  return(t);
}
ATerm sboundin_3_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(j_113, j_113, t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(l_113, l_113, j_113, t);
            ;
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm s_11 = t;
              int t_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(l_113, l_113, l_113, j_113, t);
                  ;
                  LocalPopChoice(t_11);
                }
              else
                {
                  t = s_11;
                  t = Rec_2_0(l_113, j_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm e_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      e_10 = ATgetArgument(t, 1);
      {
        ATerm v_11 = ATgetArgument(t, 2);
      }
      {
        ATerm w_11 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = e_10;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm j_10 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm x_11 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
      {
        ATerm y_11 = ATgetArgument(t, 2);
      }
      {
        ATerm a_12 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = j_10;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm k_10 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm b_12 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
      {
        ATerm c_12 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = k_10;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm m_10 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      m_10 = ATgetArgument(t, 0);
      {
        ATerm d_12 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_10;
  {
    ATerm b_1 (ATerm t)
    {
      ATerm z_11 = NULL;
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              z_11 = ATgetArgument(t, 0);
              {
                ATerm g_12 = ATgetArgument(t, 1);
              }
              {
                ATerm h_12 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(f_12);
          t = z_11;
        }
      else
        {
          t = e_12;
          if(match_cons(t, sym_SDefT_4))
            {
              z_11 = ATgetArgument(t, 0);
              {
                ATerm i_12 = ATgetArgument(t, 1);
              }
              {
                ATerm j_12 = ATgetArgument(t, 2);
              }
              {
                ATerm k_12 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = z_11;
        }
      return(t);
    }
    t = map_1_0(b_1, t);
  }
  return(t);
}
ATerm SVar_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,t_12 = NULL,u_12 = NULL;
  u_12 = t;
  if(match_cons(t, sym_SVar_1))
    {
      o_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_12);
  n_12 = t;
  t = o_12;
  t = c_102(t);
  t_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, t_12), n_12);
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
        {
          ATerm p_12 = t;
          int q_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(q_12);
            }
          else
            {
              t = p_12;
              {
                ATerm r_12 = t;
                int s_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_13 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        g_13 = ATgetArgument(t, 0);
                        {
                          ATerm v_12 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, g_13);
                    ;
                    LocalPopChoice(s_12);
                  }
                else
                  {
                    t = r_12;
                    {
                      ATerm w_12 = t;
                      int x_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(x_12);
                        }
                      else
                        {
                          t = w_12;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = rename_4_0(SVar_1_0, c_1, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm tpaste_1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(e_113, _id, t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_1 (ATerm t)
            {
              t = split_2_0(_id, e_113, t);
              {
                ATerm e_1 (ATerm t)
                {
                  ATerm u_15 = NULL,y_15 = NULL,v_16 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      u_15 = ATgetArgument(t, 0);
                      v_16 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_15;
                  {
                    ATerm c_13 = t;
                    int d_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm e_13 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_13);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_16);
                      }
                    else
                      {
                        t = c_13;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm f_13 = ATgetArgument(t, 0);
                            y_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_16, y_15);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(e_1, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, d_1, _id, t);
            ;
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm g_1 (ATerm t)
              {
                t = split_2_0(_id, e_113, t);
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm k_17 = NULL,x_17 = NULL,y_17 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        k_17 = ATgetArgument(t, 0);
                        y_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = k_17;
                    {
                      ATerm h_13 = t;
                      int i_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm j_13 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(i_13);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_17);
                        }
                      else
                        {
                          t = h_13;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm k_13 = ATgetArgument(t, 0);
                              x_17 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, y_17, x_17);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(h_1, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, g_1, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DistBinding_2_0 (ATerm f_127 (ATerm), ATerm g_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm g_18 = NULL,o_18 = NULL,t_18 = NULL;
  if(match_cons(t, sym__3))
    {
      t_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
      g_18 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_18;
  {
    ATerm i_1 (ATerm t)
    {
      ATerm u_18 = NULL;
      u_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_18, g_18);
      t = f_127(t);
      return(t);
    }
    ATerm j_1 (ATerm t)
    {
      ATerm w_18 = NULL;
      w_18 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_18, o_18);
      t = f_127(t);
      return(t);
    }
    t = g_127(i_1, j_1, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm z_126 (ATerm), ATerm a_127 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,s_19 = NULL,c_20 = NULL,g_20 = NULL;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_19;
  t = z_126(t);
  j_19 = t;
  t = map_1_0(new_0_0, t);
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_19, k_19);
  t = zip_1_0(_id, t);
  s_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_19, i_19);
  t = conc_0_0(t);
  c_20 = t;
  t = e_19;
  {
    ATerm k_1 (ATerm t)
    {
      t = k_19;
      return(t);
    }
    t = a_127(k_1, t);
    g_20 = t;
    t = (ATerm) ATmakeAppl(sym__3, g_20, i_19, c_20);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm o_20 = NULL,q_20 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,k_21 = NULL;
  if(match_cons(t, sym__2))
    {
      g_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_21;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_21 = ATgetFirst((ATermList) t);
      k_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_21;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_20;
            if((g_21 != t))
              {
                _fail(t);
              }
            t = q_20;
            ;
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            t = (ATerm) ATmakeAppl(sym__2, g_21, k_21);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, g_21, k_21);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm k_127 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_22;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = z_21;
        return(t);
      }
      t = split_2_0(_id, o_1, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = k_127(l_1, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm d_128 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_22;
  {
    ATerm q_1 (ATerm t)
    {
      ATerm d_22 = NULL;
      d_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_22, b_22);
      t = d_128(t);
      return(t);
    }
    t = SRTS_all(q_1, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm n_127 (ATerm), ATerm t)
{
  ATerm e_22 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_127(t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        t = all_dist_1_0(e_22, t);
      }
    return(t);
  }
  t = e_22(t);
  return(t);
}
ATerm rename_4_0 (ATerm u_126 (ATerm (ATerm), ATerm), ATerm v_126 (ATerm), ATerm w_126 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_126 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_22, (ATerm) ATempty);
  {
    ATerm g_22 (ATerm t)
    {
      ATerm s_1 (ATerm t)
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(u_126, t);
            ;
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            t = RnBinding_2_0(v_126, x_126, t);
            t = DistBinding_2_0(g_22, w_126, t);
          }
        return(t);
      }
      t = env_alltd_1_0(s_1, t);
      return(t);
    }
    t = g_22(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(s_13);
      }
    else
      {
        t = r_13;
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, t_1, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm Seqs_1_0 (ATerm k_106 (ATerm), ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  k_22 = t;
  if(match_cons(t, sym_Seqs_1))
    {
      i_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_22);
  h_22 = t;
  t = i_22;
  t = k_106(t);
  j_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seqs_1, j_22), h_22);
  return(t);
}
ATerm CallT_3_0 (ATerm h_102 (ATerm), ATerm i_102 (ATerm), ATerm j_102 (ATerm), ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
      r_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_22);
  o_22 = t;
  t = p_22;
  t = h_102(t);
  s_22 = t;
  t = q_22;
  t = i_102(t);
  t_22 = t;
  t = r_22;
  t = j_102(t);
  u_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, s_22, t_22, u_22), o_22);
  return(t);
}
ATerm Prim_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,f_23 = NULL,g_23 = NULL;
  g_23 = t;
  if(match_cons(t, sym_Prim_2))
    {
      a_23 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_23);
  z_22 = t;
  t = a_23;
  t = h_103(t);
  c_23 = t;
  t = b_23;
  t = i_103(t);
  f_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, c_23, f_23), z_22);
  return(t);
}
ATerm Var_1_0 (ATerm t_98 (ATerm), ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  n_23 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_23);
  k_23 = t;
  t = l_23;
  t = t_98(t);
  m_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, m_23), k_23);
  return(t);
}
ATerm Match_1_0 (ATerm k_102 (ATerm), ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  u_23 = t;
  if(match_cons(t, sym_Match_1))
    {
      s_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_23);
  r_23 = t;
  t = s_23;
  t = k_102(t);
  t_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, t_23), r_23);
  return(t);
}
ATerm Assign_2_0 (ATerm v_105 (ATerm), ATerm w_105 (ATerm), ATerm t)
{
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
  d_24 = t;
  if(match_cons(t, sym_Assign_2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_24);
  y_23 = t;
  t = z_23;
  t = v_105(t);
  b_24 = t;
  t = a_24;
  t = w_105(t);
  c_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, b_24, c_24), y_23);
  return(t);
}
ATerm list_1_0 (ATerm i_120 (ATerm), ATerm t)
{
  ATerm h_24 (ATerm t)
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = Cons_2_0(i_120, h_24, t);
      }
    return(t);
  }
  t = h_24(t);
  return(t);
}
ATerm Op_2_0 (ATerm z_98 (ATerm), ATerm a_99 (ATerm), ATerm t)
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  n_24 = t;
  if(match_cons(t, sym_Op_2))
    {
      j_24 = ATgetArgument(t, 0);
      k_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_24);
  i_24 = t;
  t = j_24;
  t = z_98(t);
  l_24 = t;
  t = k_24;
  t = a_99(t);
  m_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, l_24, m_24), i_24);
  return(t);
}
ATerm Str_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL;
  u_24 = t;
  if(match_cons(t, sym_Str_1))
    {
      s_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_24);
  r_24 = t;
  t = s_24;
  t = x_98(t);
  t_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, t_24), r_24);
  return(t);
}
ATerm Real_1_0 (ATerm w_98 (ATerm), ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL,b_25 = NULL;
  b_25 = t;
  if(match_cons(t, sym_Real_1))
    {
      z_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_25);
  y_24 = t;
  t = z_24;
  t = w_98(t);
  a_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, a_25), y_24);
  return(t);
}
ATerm Int_1_0 (ATerm v_98 (ATerm), ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  i_25 = t;
  if(match_cons(t, sym_Int_1))
    {
      g_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_25);
  f_25 = t;
  t = g_25;
  t = v_98(t);
  h_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, h_25), f_25);
  return(t);
}
ATerm Build_1_0 (ATerm l_102 (ATerm), ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL;
  p_25 = t;
  if(match_cons(t, sym_Build_1))
    {
      n_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_25);
  m_25 = t;
  t = n_25;
  t = l_102(t);
  o_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, o_25), m_25);
  return(t);
}
ATerm simple_strategy_0_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    ATerm d_14 = t;
                    int e_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Var_1_0(_id, t);
                        ;
                        LocalPopChoice(e_14);
                      }
                    else
                      {
                        t = d_14;
                        {
                          ATerm f_14 = t;
                          int g_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Int_1_0(_id, t);
                              ;
                              LocalPopChoice(g_14);
                            }
                          else
                            {
                              t = f_14;
                              {
                                ATerm h_14 = t;
                                int i_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Real_1_0(_id, t);
                                    ;
                                    LocalPopChoice(i_14);
                                  }
                                else
                                  {
                                    t = h_14;
                                    {
                                      ATerm j_14 = t;
                                      int k_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Str_1_0(_id, t);
                                          ;
                                          LocalPopChoice(k_14);
                                        }
                                      else
                                        {
                                          t = j_14;
                                          {
                                            ATerm v_1 (ATerm t)
                                            {
                                              t = list_1_0(u_1, t);
                                              return(t);
                                            }
                                            t = Op_2_0(_id, v_1, t);
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
                  t = Build_1_0(u_1, t);
                  ;
                  LocalPopChoice(c_14);
                }
              else
                {
                  t = b_14;
                  {
                    ATerm l_14 = t;
                    int m_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_1 (ATerm t)
                        {
                          t = Var_1_0(_id, t);
                          return(t);
                        }
                        ATerm x_1 (ATerm t)
                        {
                          t = Var_1_0(_id, t);
                          return(t);
                        }
                        t = Assign_2_0(w_1, x_1, t);
                        ;
                        LocalPopChoice(m_14);
                      }
                    else
                      {
                        t = l_14;
                        {
                          ATerm n_14 = t;
                          int o_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_1 (ATerm t)
                              {
                                t = Var_1_0(_id, t);
                                return(t);
                              }
                              t = Match_1_0(y_1, t);
                              ;
                              LocalPopChoice(o_14);
                            }
                          else
                            {
                              t = n_14;
                              {
                                ATerm p_14 = t;
                                int q_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Prim_2_0(_id, _id, t);
                                    ;
                                    LocalPopChoice(q_14);
                                  }
                                else
                                  {
                                    t = p_14;
                                    {
                                      ATerm r_14 = t;
                                      int s_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = CallT_3_0(_id, _id, _id, t);
                                          ;
                                          LocalPopChoice(s_14);
                                        }
                                      else
                                        {
                                          t = r_14;
                                          {
                                            ATerm t_14 = t;
                                            int u_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Seq_2_0(simple_strategy_0_0, simple_strategy_0_0, t);
                                                ;
                                                LocalPopChoice(u_14);
                                              }
                                            else
                                              {
                                                t = t_14;
                                                {
                                                  ATerm v_14 = t;
                                                  int w_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm z_1 (ATerm t)
                                                      {
                                                        t = map_1_0(simple_strategy_0_0, t);
                                                        return(t);
                                                      }
                                                      t = Seqs_1_0(z_1, t);
                                                      ;
                                                      LocalPopChoice(w_14);
                                                    }
                                                  else
                                                    {
                                                      t = v_14;
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
ATerm isect_1_0 (ATerm a_122 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  if(match_cons(t, sym__2))
    {
      x_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_25;
  {
    ATerm e_26 (ATerm t)
    {
      ATerm x_14 = t;
      int y_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(y_14);
        }
      else
        {
          t = x_14;
          {
            ATerm y_25 = NULL,a_26 = NULL;
            y_25 = t;
            {
              ATerm z_14 = t;
              int a_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm b_15 = ATgetFirst((ATermList) t);
                      a_26 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_15);
                  {
                    ATerm c_15 = t;
                    int d_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_25;
                        {
                          ATerm a_2 (ATerm t)
                          {
                            t = w_25;
                            return(t);
                          }
                          t = HdMember_p__2_0(a_122, a_2, t);
                          t = y_25;
                          t = Cons_2_0(_id, e_26, t);
                        }
                        ;
                        LocalPopChoice(d_15);
                      }
                    else
                      {
                        t = c_15;
                        t = a_26;
                        t = e_26(t);
                      }
                  }
                }
              else
                {
                  t = z_14;
                  t = y_25;
                  {
                    ATerm b_2 (ATerm t)
                    {
                      t = w_25;
                      return(t);
                    }
                    t = HdMember_p__2_0(a_122, b_2, t);
                    t = y_25;
                    t = Cons_2_0(_id, e_26, t);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = e_26(t);
  }
  return(t);
}
ATerm isect_0_0 (ATerm t)
{
  ATerm c_2 (ATerm t)
  {
    ATerm f_26 = NULL;
    if(match_cons(t, sym__2))
      {
        f_26 = ATgetArgument(t, 0);
        if((f_26 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = isect_1_0(c_2, t);
  return(t);
}
ATerm Matrix_2_0 (ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
  l_26 = t;
  if(match_cons(t, sym_Matrix_2))
    {
      h_26 = ATgetArgument(t, 0);
      i_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_26);
  g_26 = t;
  t = h_26;
  t = e_105(t);
  j_26 = t;
  t = i_26;
  t = f_105(t);
  k_26 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Matrix_2, j_26, k_26), g_26);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm e_143 (ATerm), ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(c_143, d_143, e_143, t);
      ;
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      t = Matrix_2_0(e_143, c_143, t);
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm p_26 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm g_15 = ATgetArgument(t, 0);
      ATerm h_15 = ATgetArgument(t, 1);
      p_26 = ATgetArgument(t, 2);
      {
        ATerm i_15 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = p_26;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm t_26 = NULL;
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            t_26 = ATgetArgument(t, 0);
            {
              ATerm l_15 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(k_15);
        t = t_26;
      }
    else
      {
        t = j_15;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            t_26 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_26;
      }
    return(t);
  }
  t = map_1_0(d_2, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm w_26 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm m_15 = ATgetArgument(t, 0);
      ATerm n_15 = ATgetArgument(t, 1);
      w_26 = ATgetArgument(t, 2);
      {
        ATerm o_15 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = w_26;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm x_26 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      x_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_26;
  t = tvars_0_0(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm k_101 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
  b_27 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      z_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_27);
  y_26 = t;
  t = z_26;
  t = k_101(t);
  a_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, a_27), y_26);
  return(t);
}
ATerm RDefT_4_0 (ATerm b_101 (ATerm), ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm e_101 (ATerm), ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL;
  o_27 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      g_27 = ATgetArgument(t, 0);
      h_27 = ATgetArgument(t, 1);
      i_27 = ATgetArgument(t, 2);
      j_27 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_27);
  f_27 = t;
  t = g_27;
  t = b_101(t);
  k_27 = t;
  t = h_27;
  t = c_101(t);
  l_27 = t;
  t = i_27;
  t = d_101(t);
  m_27 = t;
  t = j_27;
  t = e_101(t);
  n_27 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, k_27, l_27, m_27, n_27), f_27);
  return(t);
}
ATerm tboundin_3_0 (ATerm f_113 (ATerm), ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t)
{
  ATerm p_15 = t;
  int q_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(h_113, f_113, t);
      ;
      LocalPopChoice(q_15);
    }
  else
    {
      t = p_15;
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(h_113, h_113, h_113, f_113, t);
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            {
              ATerm t_15 = t;
              int v_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(h_113, h_113, h_113, f_113, t);
                  ;
                  LocalPopChoice(v_15);
                }
              else
                {
                  t = t_15;
                  t = DynamicRules_1_0(f_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm s_27 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        s_27 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, s_27);
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        {
          ATerm z_15 = t;
          int a_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(a_16);
            }
          else
            {
              t = z_15;
              {
                ATerm b_16 = t;
                int c_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(c_16);
                  }
                else
                  {
                    t = b_16;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(e_2, f_2, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm v_27 = NULL,z_27 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      z_27 = ATgetArgument(t, 0);
      t = z_27;
      if(match_cons(t, sym_Rule_3))
        {
          v_27 = ATgetArgument(t, 0);
          {
            ATerm d_16 = ATgetArgument(t, 1);
          }
          {
            ATerm e_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_27;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          z_27 = ATgetArgument(t, 0);
          {
            ATerm f_16 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_27;
    }
  return(t);
}
ATerm diff_1_0 (ATerm c_122 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL;
  if(match_cons(t, sym__2))
    {
      e_28 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_28;
  {
    ATerm f_28 (ATerm t)
    {
      ATerm g_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(h_16);
        }
      else
        {
          t = g_16;
          {
            ATerm i_16 = t;
            int j_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_2 (ATerm t)
                {
                  t = d_28;
                  return(t);
                }
                t = HdMember_p__2_0(c_122, g_2, t);
                t = f_28(t);
                ;
                LocalPopChoice(j_16);
              }
            else
              {
                t = i_16;
                t = Cons_2_0(_id, f_28, t);
              }
          }
        }
      return(t);
    }
    t = f_28(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_16 = ATgetFirst((ATermList) t);
      if(match_cons(k_16, sym__2))
        {
          g_28 = ATgetArgument(k_16, 0);
          h_28 = ATgetArgument(k_16, 1);
        }
      else
        _fail(t);
      i_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_28);
  if(match_cons(t, sym__2))
    {
      j_28 = ATgetArgument(t, 0);
      k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_28);
  if(match_cons(t, sym__2))
    {
      if((j_28 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_28, k_28);
  t = zip_1_0(_id, t);
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_28, i_28);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_131 (ATerm), ATerm e_131 (ATerm), ATerm t)
{
  ATerm n_28 (ATerm t)
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_131(t);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = e_131(t);
        t = n_28(t);
      }
    return(t);
  }
  t = n_28(t);
  return(t);
}
ATerm for_3_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm i_131 (ATerm), ATerm t)
{
  t = g_131(t);
  t = while_not_2_0(h_131, i_131, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm s_28 = NULL;
        s_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_28);
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, m_2, t);
        return(t);
      }
      ATerm l_2 (ATerm t)
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_2 (ATerm t)
            {
              ATerm r_16 = t;
              int s_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      u_28 = ATgetFirst((ATermList) t);
                      x_28 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = u_28;
                  if(match_cons(t, sym__2))
                    {
                      v_28 = ATgetArgument(t, 0);
                      w_28 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = w_28;
                  if((v_28 != t))
                    {
                      _fail(t);
                    }
                  t = x_28;
                  ;
                  LocalPopChoice(s_16);
                }
              else
                {
                  t = r_16;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, n_2, t);
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            {
              ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
              if(match_cons(t, sym__2))
                {
                  b_29 = ATgetArgument(t, 0);
                  c_29 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_29;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_29 = ATgetFirst((ATermList) t);
                  e_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_29), d_29), e_29);
            }
          }
        return(t);
      }
      t = for_3_0(h_2, i_2, l_2, t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm i_29 = NULL;
          if(match_cons(t, sym__2))
            {
              i_29 = ATgetArgument(t, 0);
              if((i_29 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(o_2, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_29 (ATerm t)
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_128(t);
        ;
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        {
          ATerm w_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_29 = NULL,l_29 = NULL;
              j_29 = t;
              t = y_128(t);
              l_29 = t;
              t = j_29;
              {
                ATerm p_2 (ATerm t)
                {
                  ATerm r_2 (ATerm t)
                  {
                    t = l_29;
                    return(t);
                  }
                  t = split_2_0(m_29, r_2, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm q_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = z_128(p_2, m_29, q_2, t);
                {
                  ATerm s_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(s_2, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(x_16);
            }
          else
            {
              t = w_16;
              {
                ATerm t_2 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(t_2, union_0_0, m_29, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_29(t);
  return(t);
}
ATerm tvars_matrix_0_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm o_29 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        o_29 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, o_29);
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        {
          ATerm a_17 = t;
          int b_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(b_17);
            }
          else
            {
              t = a_17;
              {
                ATerm c_17 = t;
                int d_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(d_17);
                  }
                else
                  {
                    t = c_17;
                    {
                      ATerm e_17 = t;
                      int f_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind8_0_0(t);
                          ;
                          LocalPopChoice(f_17);
                        }
                      else
                        {
                          t = e_17;
                          {
                            ATerm q_29 = NULL;
                            if(match_cons(t, sym_Matrix_2))
                              {
                                q_29 = ATgetArgument(t, 0);
                                {
                                  ATerm g_17 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            t = q_29;
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
  t = free_vars_3_0(u_2, v_2, tvars_matrix_boundin_3_0, t);
  return(t);
}
ATerm RowLet_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  if(match_cons(t, sym_Row_2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL,v_0 = NULL;
        t = i_30;
        {
          ATerm j_17 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_17;
            }
          t = new_0_0(t);
          o_0 = t;
          t = i_30;
          t = tvars_matrix_0_0(t);
          p_0 = t;
          t = u_0(t);
          r_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_0, r_0);
          t = isect_0_0(t);
          {
            ATerm w_2 (ATerm t)
            {
              ATerm w_0 = NULL;
              w_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, w_0, term_n_17), (ATerm) ATmakeAppl(sym_Var_1, w_0));
              return(t);
            }
            t = unzip_1_0(w_2, t);
            if(match_cons(t, sym__2))
              {
                s_0 = ATgetArgument(t, 0);
                v_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, o_0, (ATerm)ATempty, s_0, i_30)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, h_30, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_0), (ATerm)ATempty, v_0)));
          }
        }
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        t = i_30;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, h_30, i_30));
      }
  }
  return(t);
}
ATerm MatrixScope_0_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL,p_30 = NULL;
  if(match_cons(t, sym_Matrix_2))
    {
      m_30 = ATgetArgument(t, 0);
      n_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_30;
  {
    ATerm x_2 (ATerm t)
    {
      ATerm y_2 (ATerm t)
      {
        t = m_30;
        return(t);
      }
      t = RowLet_1_0(y_2, t);
      return(t);
    }
    t = unzip_1_0(x_2, t);
    t = _2_0(concat_0_0, _id, t);
    if(match_cons(t, sym__2))
      {
        o_30 = ATgetArgument(t, 0);
        p_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Let_2, o_30, (ATerm) ATmakeAppl(sym_Scope_2, m_30, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_o_17))), (ATerm) ATmakeAppl(sym_Matrix_1, p_30))));
  }
  return(t);
}
ATerm assert_1_0 (ATerm e_126 (ATerm), ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__2))
    {
      q_30 = ATgetArgument(t, 0);
      r_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_126(t);
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_30, q_30, r_30);
  t = table_push_0_0(t);
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(s_30, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_30 = ATgetFirst((ATermList) t);
        u_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(s_30, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(u_30), (ATerm) ATinsert(CheckATermList(t_30), q_30)));
    t = (ATerm) ATmakeAppl(sym__2, q_30, r_30);
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
  ATerm v_30 = NULL;
  ATerm z_2 (ATerm t)
  {
    ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
    if(match_cons(t, sym_Row_3))
      {
        ATerm r_17 = ATgetArgument(t, 0);
        if(((ATgetType(r_17) == AT_LIST) && !(ATisEmpty(r_17))))
          {
            ATerm s_17 = ATgetFirst((ATermList) r_17);
            if(match_cons(s_17, sym_As_2))
              {
                ATerm t_17 = ATgetArgument(s_17, 0);
                ATerm u_17 = ATgetArgument(s_17, 1);
                if(!(match_cons(u_17, sym_Wld_0)))
                  _fail(t);
              }
            else
              _fail(t);
            w_30 = (ATerm) ATgetNext((ATermList) r_17);
          }
        else
          _fail(t);
        x_30 = ATgetArgument(t, 1);
        y_30 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Row_3, w_30, x_30, y_30);
    return(t);
  }
  t = filter_1_0(z_2, t);
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, v_30);
  return(t);
}
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = u_31;
      t = t_0(t);
      {
        ATerm a_3 (ATerm t)
        {
          ATerm x_31 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              x_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, x_31), term_v_17);
          return(t);
        }
        t = map_1_0(a_3, t);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          v_31 = ATgetArgument(t, 0);
          t = u_31;
          t = q_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((v_31 != ATgetArgument(t, 0)))
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
              v_31 = ATgetArgument(t, 0);
              t = u_31;
              t = q_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((v_31 != ATgetArgument(t, 0)))
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
                  v_31 = ATgetArgument(t, 0);
                  t = u_31;
                  t = q_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((v_31 != ATgetArgument(t, 0)))
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
                  ATerm m_1 = NULL,n_1 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      v_31 = ATgetArgument(t, 0);
                      w_31 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_31;
                  t = q_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((v_31 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      m_1 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = w_31;
                  t = length_0_0(t);
                  n_1 = t;
                  t = m_1;
                  if((n_1 != t))
                    {
                      _fail(t);
                    }
                  t = w_31;
                }
            }
        }
    }
  return(t);
}
ATerm ConsTransition_1_0 (ATerm n_142 (ATerm), ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,h_32 = NULL,i_32 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm w_17 = ATgetArgument(t, 0);
      if(((ATgetType(w_17) == AT_LIST) && !(ATisEmpty(w_17))))
        {
          ATerm z_17 = ATgetFirst((ATermList) w_17);
          if(match_cons(z_17, sym_As_2))
            {
              ATerm a_18 = ATgetArgument(z_17, 0);
              c_32 = ATgetArgument(z_17, 1);
            }
          else
            _fail(t);
          d_32 = (ATerm) ATgetNext((ATermList) w_17);
        }
      else
        _fail(t);
      e_32 = ATgetArgument(t, 1);
      f_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = c_32;
  t = n_142(t);
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_32, e_32);
  t = conc_0_0(t);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, d_32, i_32, f_32);
  return(t);
}
ATerm Transition_0_0 (ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  if(match_cons(t, sym__2))
    {
      j_32 = ATgetArgument(t, 0);
      {
        ATerm b_18 = ATgetArgument(t, 1);
        if(match_cons(b_18, sym__2))
          {
            k_32 = ATgetArgument(b_18, 0);
            l_32 = ATgetArgument(b_18, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_32;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm c_3 (ATerm t)
      {
        ATerm d_3 (ATerm t)
        {
          t = k_32;
          return(t);
        }
        ATerm e_3 (ATerm t)
        {
          t = l_32;
          return(t);
        }
        t = MatchCons_2_0(d_3, e_3, t);
        return(t);
      }
      t = ConsTransition_1_0(c_3, t);
      return(t);
    }
    t = filter_1_0(b_3, t);
    m_32 = t;
    t = (ATerm) ATmakeAppl(sym_Alt_3, k_32, l_32, (ATerm) ATmakeAppl(sym_Matrix_1, m_32));
  }
  return(t);
}
ATerm rzip_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm c_18 = ATgetArgument(t, 0);
        ATerm d_18 = ATgetArgument(t, 1);
        if(((ATgetType(d_18) != AT_LIST) || !(ATisEmpty(d_18))))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
    if(match_cons(t, sym__2))
      {
        o_32 = ATgetArgument(t, 0);
        {
          ATerm e_18 = ATgetArgument(t, 1);
          if(((ATgetType(e_18) == AT_LIST) && !(ATisEmpty(e_18))))
            {
              n_32 = ATgetFirst((ATermList) e_18);
              p_32 = (ATerm) ATgetNext((ATermList) e_18);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_32, n_32), (ATerm) ATmakeAppl(sym__2, o_32, p_32));
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm q_32 = NULL,r_32 = NULL;
    if(match_cons(t, sym__2))
      {
        q_32 = ATgetArgument(t, 0);
        r_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(r_32), q_32);
    return(t);
  }
  t = genzip_4_0(f_3, g_3, h_3, e_119, t);
  return(t);
}
ATerm transitions_0_0 (ATerm t)
{
  t = rzip_1_0(Transition_0_0, t);
  return(t);
}
ATerm Uniq_0_0 (ATerm t)
{
  ATerm s_32 = NULL,t_32 = NULL,u_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_32 = ATgetFirst((ATermList) t);
      t_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_32;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm f_18 = t;
      if((PushChoice() == 0))
        {
          if((s_32 != t))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_18;
        }
      return(t);
    }
    t = filter_1_0(i_3, t);
    u_32 = t;
    t = (ATerm) ATinsert(CheckATermList(u_32), s_32);
  }
  return(t);
}
ATerm listtd_1_0 (ATerm o_121 (ATerm), ATerm t)
{
  ATerm v_32 (ATerm t)
  {
    t = o_121(t);
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          t = Cons_2_0(_id, v_32, t);
        }
    }
    return(t);
  }
  t = v_32(t);
  return(t);
}
ATerm uniq_0_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    t = try_1_0(Uniq_0_0, t);
    return(t);
  }
  t = listtd_1_0(j_3, t);
  return(t);
}
ATerm offsets_0_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm w_32 = NULL;
    if(match_cons(t, sym_As_2))
      {
        ATerm j_18 = ATgetArgument(t, 0);
        if(match_cons(j_18, sym_Off_1))
          {
            w_32 = ATgetArgument(j_18, 0);
          }
        else
          _fail(t);
        {
          ATerm k_18 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Var_1, w_32);
    return(t);
  }
  t = map_1_0(k_3, t);
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    t = term_o_17;
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    ATerm x_32 = NULL,y_32 = NULL;
    if(match_cons(t, sym__2))
      {
        x_32 = ATgetArgument(t, 0);
        y_32 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm l_18 = t;
      int m_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(x_32, y_32);
          ;
          LocalPopChoice(m_18);
        }
      else
        {
          t = l_18;
          t = SSL_addr(x_32, y_32);
        }
    }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_n_18;
    return(t);
  }
  t = foldr_3_0(l_3, m_3, n_3, t);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
  d_33 = t;
  if(match_cons(t, sym_Row_3))
    {
      e_33 = ATgetArgument(t, 0);
      {
        ATerm p_18 = ATgetArgument(t, 1);
      }
      {
        ATerm q_18 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = e_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_33 = ATgetFirst((ATermList) t);
      {
        ATerm r_18 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_33;
  if(match_cons(t, sym_As_2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_33;
  if(match_cons(t, sym_Str_1))
    {
      i_33 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, i_33), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          i_33 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, i_33), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              i_33 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, i_33), (ATerm) ATempty);
            }
          else
            {
              ATerm t_33 = NULL,u_33 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  i_33 = ATgetArgument(t, 0);
                  j_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_33;
              t = length_0_0(t);
              t_33 = t;
              t = j_33;
              t = offsets_0_0(t);
              u_33 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, i_33, t_33), u_33);
            }
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm i_126 (ATerm), ATerm t)
{
  ATerm v_18 = t;
  int x_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(x_18);
    }
  else
    {
      t = v_18;
      {
        ATerm y_18 = t;
        int z_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_3 (ATerm t)
            {
              t = filter_1_0(i_126, t);
              return(t);
            }
            t = Cons_2_0(i_126, o_3, t);
            ;
            LocalPopChoice(z_18);
          }
        else
          {
            t = y_18;
            {
              ATerm y_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm a_19 = ATgetFirst((ATermList) t);
                  y_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = y_33;
              t = filter_1_0(i_126, t);
            }
          }
      }
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = uniq_0_0(t);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm v_34 (ATerm g_34, ATerm t)
  {
    ATerm i_34 = NULL;
    t = SSL_explode_string(g_34);
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_34 (ATerm t)
          {
            ATerm d_19 = t;
            int f_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, w_34, t);
                ;
                LocalPopChoice(f_19);
              }
            else
              {
                t = d_19;
                {
                  ATerm p_3 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                      _fail(t);
                    return(t);
                  }
                  ATerm q_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = Cons_2_0(p_3, q_3, t);
                }
              }
            return(t);
          }
          t = w_34(t);
          ;
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
          t = (ATerm) ATempty;
        }
      i_34 = t;
      t = SSL_implode_string(i_34);
    }
    return(t);
  }
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,t_34 = NULL;
  t_34 = t;
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_34 = ATgetFirst((ATermList) t);
            {
              ATerm l_19 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_19);
        t = j_34;
        {
          ATerm m_19 = t;
          int n_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  k_34 = ATgetArgument(t, 0);
                  {
                    ATerm o_19 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm p_19 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(n_19);
              t = k_34;
              {
                ATerm q_19 = t;
                int r_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        l_34 = ATgetFirst((ATermList) t);
                        {
                          ATerm t_19 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_19);
                    t = l_34;
                    {
                      ATerm u_19 = t;
                      int v_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              m_34 = ATgetArgument(t, 0);
                              {
                                ATerm w_19 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(v_19);
                          t = m_34;
                          if(match_cons(t, sym_Off_1))
                            {
                              n_34 = ATgetArgument(t, 0);
                              {
                                ATerm x_19 = t;
                                int y_19 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_34;
                                    ;
                                    LocalPopChoice(y_19);
                                  }
                                else
                                  {
                                    t = x_19;
                                    t = v_34(t_34, t);
                                  }
                              }
                            }
                          else
                            {
                              t = v_34(t_34, t);
                            }
                        }
                      else
                        {
                          t = u_19;
                          t = v_34(t_34, t);
                        }
                    }
                  }
                else
                  {
                    t = q_19;
                    t = v_34(t_34, t);
                  }
              }
            }
          else
            {
              t = m_19;
              t = v_34(t_34, t);
            }
        }
      }
    else
      {
        t = g_19;
        t = v_34(t_34, t);
      }
  }
  return(t);
}
ATerm Mixture_0_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      x_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_34;
  t = get_path_0_0(t);
  y_34 = t;
  t = x_34;
  t = outedges_0_0(t);
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_34, z_34);
  t = transitions_0_0(t);
  a_35 = t;
  t = x_34;
  t = default_state_0_0(t);
  b_35 = t;
  t = new_0_0(t);
  c_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, x_34), (ATerm) ATmakeAppl(sym_Defined_2, term_z_19, c_35));
  {
    ATerm r_3 (ATerm t)
    {
      t = term_a_20;
      return(t);
    }
    t = assert_1_0(r_3, t);
    t = (ATerm) ATmakeAppl(sym_Case_4, c_35, (ATerm)ATmakeAppl(sym_Var_1, y_34), a_35, b_35);
  }
  return(t);
}
ATerm ShiftColumn_0_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      d_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_35;
  {
    ATerm b_20 = t;
    if((PushChoice() == 0))
      {
        ATerm s_3 (ATerm t)
        {
          ATerm u_3 (ATerm t)
          {
            ATerm v_3 (ATerm t)
            {
              ATerm x_3 (ATerm t)
              {
                ATerm d_20 = t;
                if((PushChoice() == 0))
                  {
                    if(!(match_cons(t, sym_Wld_0)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = d_20;
                  }
                return(t);
              }
              t = As_2_0(_id, x_3, t);
              return(t);
            }
            t = Cons_2_0(v_3, _id, t);
            return(t);
          }
          t = Row_3_0(u_3, _id, _id, t);
          return(t);
        }
        t = map_1_0(s_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_20;
      }
    t = d_35;
    {
      ATerm z_3 (ATerm t)
      {
        ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL;
        if(match_cons(t, sym_Row_3))
          {
            g_35 = ATgetArgument(t, 0);
            {
              ATerm e_20 = ATgetArgument(t, 1);
              if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
                {
                  f_35 = ATgetFirst((ATermList) e_20);
                  h_35 = (ATerm) ATgetNext((ATermList) e_20);
                }
              else
                _fail(t);
            }
            i_35 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(g_35), f_35), h_35, i_35);
        return(t);
      }
      t = map_1_0(z_3, t);
      e_35 = t;
      t = (ATerm) ATmakeAppl(sym_Matrix_1, e_35);
    }
  }
  return(t);
}
ATerm As_2_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL;
  o_35 = t;
  if(match_cons(t, sym_As_2))
    {
      k_35 = ATgetArgument(t, 0);
      l_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_35);
  j_35 = t;
  t = k_35;
  t = k_99(t);
  m_35 = t;
  t = l_35;
  t = l_99(t);
  n_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, m_35, n_35), j_35);
  return(t);
}
ATerm Row_3_0 (ATerm b_105 (ATerm), ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL;
  z_35 = t;
  if(match_cons(t, sym_Row_3))
    {
      t_35 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
      v_35 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_35);
  s_35 = t;
  t = t_35;
  t = b_105(t);
  w_35 = t;
  t = u_35;
  t = c_105(t);
  x_35 = t;
  t = v_35;
  t = d_105(t);
  y_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Row_3, w_35, x_35, y_35), s_35);
  return(t);
}
ATerm SkipWild_0_0 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      d_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_36;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm c_4 (ATerm t)
      {
        ATerm f_36 = NULL;
        ATerm e_4 (ATerm t)
        {
          ATerm f_4 (ATerm t)
          {
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
            return(t);
          }
          t = As_2_0(_id, f_4, t);
          return(t);
        }
        t = Cons_2_0(e_4, _id, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_20 = ATgetFirst((ATermList) t);
            f_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_36;
        return(t);
      }
      t = Row_3_0(_id, c_4, _id, t);
      return(t);
    }
    t = map_1_0(a_4, t);
    e_36 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, e_36);
  }
  return(t);
}
ATerm MatrixRowsEmpty_0_0 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_36;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm i_36 = NULL;
      if(match_cons(t, sym_Row_3))
        {
          ATerm h_20 = ATgetArgument(t, 0);
          if(((ATgetType(h_20) != AT_LIST) || !(ATisEmpty(h_20))))
            _fail(t);
          {
            ATerm i_20 = ATgetArgument(t, 1);
            if(((ATgetType(i_20) != AT_LIST) || !(ATisEmpty(i_20))))
              _fail(t);
          }
          i_36 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_36;
      return(t);
    }
    t = map_1_0(g_4, t);
    h_36 = t;
    t = (ATerm) ATmakeAppl(sym_LChoices_1, h_36);
  }
  return(t);
}
ATerm reduce_matrix_0_0 (ATerm t)
{
  ATerm j_20 = t;
  int k_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0_0(t);
      ;
      LocalPopChoice(k_20);
    }
  else
    {
      t = j_20;
      {
        ATerm l_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SkipWild_0_0(t);
            ;
            LocalPopChoice(m_20);
          }
        else
          {
            t = l_20;
            {
              ATerm n_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0_0(t);
                  ;
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = n_20;
                  t = Mixture_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
  if(match_cons(t, sym__2))
    {
      l_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_1 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm t_20 = ATgetArgument(t, 0);
            ATerm u_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(l_36, m_36);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_20 = ATgetFirst((ATermList) t);
            p_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_1;
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = (ATerm) ATempty;
      }
    n_36 = t;
    t = SSL_table_put(l_36, m_36, n_36);
    t = (ATerm) ATmakeAppl(sym__2, l_36, m_36);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_126 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL;
  t_36 = t;
  t = b_126(t);
  u_36 = t;
  {
    ATerm w_20 = t;
    int x_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_36, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(x_20);
      }
    else
      {
        t = w_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_36 = ATgetFirst((ATermList) t);
        v_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_36, (ATerm)ATmakeAppl(sym_Scopes_0), v_36);
    t = w_36;
    {
      ATerm h_4 (ATerm t)
      {
        ATerm x_36 = NULL;
        x_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_36, x_36);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(h_4, t);
      t = t_36;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_117(t);
      t = m_117(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      t = m_117(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_126 (ATerm), ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  t = a_126(t);
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_37, term_a_21);
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_21 = ATgetArgument(t, 0);
            ATerm e_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_37, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        t = (ATerm) ATempty;
      }
    c_37 = t;
    t = SSL_table_put(b_37, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(c_37), (ATerm) ATempty));
    t = a_37;
  }
  return(t);
}
ATerm scope_2_0 (ATerm c_126 (ATerm), ATerm d_126 (ATerm), ATerm t)
{
  t = begin_scope_1_0(c_126, t);
  {
    ATerm i_4 (ATerm t)
    {
      t = end_scope_1_0(c_126, t);
      return(t);
    }
    t = restore_always_2_0(d_126, i_4, t);
  }
  return(t);
}
ATerm matrix_to_dfa_0_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    t = term_a_20;
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      ATerm f_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0_0(t);
          ;
          LocalPopChoice(j_21);
        }
      else
        {
          t = f_21;
          {
            ATerm l_21 = t;
            int m_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0_0(t);
                ;
                LocalPopChoice(m_21);
              }
            else
              {
                t = l_21;
                t = Simplify_0_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1_0(l_4, t);
    t = SRTS_all(k_4, t);
    return(t);
  }
  t = scope_2_0(j_4, k_4, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,q_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL;
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_37;
  if(match_cons(t, sym_Build_1))
    {
      ATerm n_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_37;
  if(match_cons(t, sym_Where_1))
    {
      t_37 = ATgetArgument(t, 0);
      t = t_37;
      if(match_cons(t, sym_Prim_2))
        {
          n_37 = ATgetArgument(t, 0);
          o_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          t_37 = ATgetArgument(t, 0);
          u_37 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, t_37, u_37);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              t_37 = ATgetArgument(t, 0);
              u_37 = ATgetArgument(t, 1);
              v_37 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm zip_1_0 (ATerm v_118 (ATerm), ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm o_21 = ATgetArgument(t, 0);
        if(((ATgetType(o_21) != AT_LIST) || !(ATisEmpty(o_21))))
          _fail(t);
        {
          ATerm p_21 = ATgetArgument(t, 1);
          if(((ATgetType(p_21) != AT_LIST) || !(ATisEmpty(p_21))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm q_21 = ATgetArgument(t, 0);
        if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
          {
            d_38 = ATgetFirst((ATermList) q_21);
            f_38 = (ATerm) ATgetNext((ATermList) q_21);
          }
        else
          _fail(t);
        {
          ATerm r_21 = ATgetArgument(t, 1);
          if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
            {
              e_38 = ATgetFirst((ATermList) r_21);
              g_38 = (ATerm) ATgetNext((ATermList) r_21);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_38, e_38), (ATerm) ATmakeAppl(sym__2, f_38, g_38));
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm h_38 = NULL,i_38 = NULL;
    if(match_cons(t, sym__2))
      {
        h_38 = ATgetArgument(t, 0);
        i_38 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(i_38), h_38);
    return(t);
  }
  t = genzip_4_0(m_4, n_4, o_4, v_118, t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,m_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if(match_cons(s_21, sym_Build_1))
        {
          ATerm u_21 = ATgetArgument(s_21, 0);
          if(match_cons(u_21, sym_Op_2))
            {
              k_38 = ATgetArgument(u_21, 0);
              j_38 = ATgetArgument(u_21, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm t_21 = ATgetArgument(t, 1);
        if(match_cons(t_21, sym_Match_1))
          {
            ATerm v_21 = ATgetArgument(t_21, 0);
            if(match_cons(v_21, sym_Op_2))
              {
                if((k_38 != ATgetArgument(v_21, 0)))
                  {
                    _fail(ATgetArgument(v_21, 0));
                  }
                l_38 = ATgetArgument(v_21, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, j_38, l_38);
  {
    ATerm p_4 (ATerm t)
    {
      ATerm n_38 = NULL,o_38 = NULL;
      if(match_cons(t, sym__2))
        {
          n_38 = ATgetArgument(t, 0);
          o_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_38), (ATerm) ATmakeAppl(sym_Match_1, o_38));
      return(t);
    }
    t = zip_1_0(p_4, t);
    m_38 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_38), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, k_38, j_38)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      if(match_cons(w_21, sym_Build_1))
        {
          ATerm y_21 = ATgetArgument(w_21, 0);
          if(match_cons(y_21, sym_Op_2))
            {
              b_40 = ATgetArgument(y_21, 0);
              {
                ATerm l_22 = ATgetArgument(y_21, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm x_21 = ATgetArgument(t, 1);
        if(match_cons(x_21, sym_Match_1))
          {
            ATerm m_22 = ATgetArgument(x_21, 0);
            if(match_cons(m_22, sym_Op_2))
              {
                c_40 = ATgetArgument(m_22, 0);
                {
                  ATerm n_22 = ATgetArgument(m_22, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, b_40, c_40);
  {
    ATerm w_22 = t;
    if((PushChoice() == 0))
      {
        ATerm d_40 = NULL;
        if(match_cons(t, sym__2))
          {
            d_40 = ATgetArgument(t, 0);
            if((d_40 != ATgetArgument(t, 1)))
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
        t = w_22;
      }
    t = term_x_22;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm y_22 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = y_22;
      {
        ATerm e_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(h_23);
          }
        else
          {
            t = e_23;
            {
              ATerm i_23 = t;
              int j_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_40 = NULL,v_40 = NULL,c_41 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      t_40 = ATgetArgument(t, 0);
                      v_40 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = t_40;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm o_23 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = v_40;
                  if(match_cons(t, sym_Build_1))
                    {
                      c_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(j_23);
                }
              else
                {
                  t = i_23;
                  {
                    ATerm p_23 = t;
                    int q_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(q_23);
                      }
                    else
                      {
                        t = p_23;
                        {
                          ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              n_41 = ATgetArgument(t, 0);
                              p_41 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = n_41;
                          if(match_cons(t, sym_Match_1))
                            {
                              o_41 = ATgetArgument(t, 0);
                              t = p_41;
                              if(match_cons(t, sym_Match_1))
                                {
                                  q_41 = ATgetArgument(t, 0);
                                  t = q_41;
                                  if((o_41 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, o_41);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      q_41 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_41;
                                  if((o_41 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, o_41);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  o_41 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = p_41;
                              if(match_cons(t, sym_Match_1))
                                {
                                  q_41 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = q_41;
                              if((o_41 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, o_41);
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
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,z_41 = NULL,a_42 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      z_41 = ATgetArgument(t, 0);
      a_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_42;
  if(match_cons(t, sym_Seq_2))
    {
      w_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_42 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, z_41, w_41);
            t = BMF_0_0(t);
            e_42 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, e_42, x_41);
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            t = (ATerm) ATmakeAppl(sym__2, z_41, a_42);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, z_41, a_42);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm j_42 (ATerm t)
  {
    ATerm x_23 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_115(t);
        ;
        LocalPopChoice(e_24);
      }
    else
      {
        t = x_23;
        t = SRTS_one(j_42, t);
      }
    return(t);
  }
  t = j_42(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm f_24 = ATgetArgument(t, 0);
      if(((ATgetType(f_24) == AT_LIST) && !(ATisEmpty(f_24))))
        {
          ATerm o_24 = ATgetFirst((ATermList) f_24);
          if(match_cons(o_24, sym_SDefT_4))
            {
              l_42 = ATgetArgument(o_24, 0);
              {
                ATerm q_24 = ATgetArgument(o_24, 1);
                if(((ATgetType(q_24) != AT_LIST) || !(ATisEmpty(q_24))))
                  _fail(t);
              }
              {
                ATerm v_24 = ATgetArgument(o_24, 2);
                if(((ATgetType(v_24) != AT_LIST) || !(ATisEmpty(v_24))))
                  _fail(t);
              }
              k_42 = ATgetArgument(o_24, 3);
            }
          else
            _fail(t);
          {
            ATerm p_24 = (ATerm) ATgetNext((ATermList) f_24);
            if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm g_24 = ATgetArgument(t, 1);
        if(match_cons(g_24, sym_CallT_3))
          {
            ATerm w_24 = ATgetArgument(g_24, 0);
            if(match_cons(w_24, sym_SVar_1))
              {
                if((l_42 != ATgetArgument(w_24, 0)))
                  {
                    _fail(ATgetArgument(w_24, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm x_24 = ATgetArgument(g_24, 1);
              if(((ATgetType(x_24) != AT_LIST) || !(ATisEmpty(x_24))))
                _fail(t);
            }
            {
              ATerm c_25 = ATgetArgument(g_24, 2);
              if(((ATgetType(c_25) != AT_LIST) || !(ATisEmpty(c_25))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_42;
  {
    ATerm d_25 = t;
    if((PushChoice() == 0))
      {
        ATerm q_4 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm e_25 = ATgetArgument(t, 0);
              if(match_cons(e_25, sym_SVar_1))
                {
                  if((l_42 != ATgetArgument(e_25, 0)))
                    {
                      _fail(ATgetArgument(e_25, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm j_25 = ATgetArgument(t, 1);
                if(((ATgetType(j_25) != AT_LIST) || !(ATisEmpty(j_25))))
                  _fail(t);
              }
              {
                ATerm k_25 = ATgetArgument(t, 2);
                if(((ATgetType(k_25) != AT_LIST) || !(ATisEmpty(k_25))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(q_4, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_25;
      }
    t = k_42;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,a_43 = NULL,b_43 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      a_43 = ATgetArgument(t, 0);
      t = a_43;
      if(match_cons(t, sym_Seq_2))
        {
          y_42 = ATgetArgument(t, 0);
          u_42 = ATgetArgument(t, 1);
          t = y_42;
          if(match_cons(t, sym_Where_1))
            {
              t_42 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_42;
          if(match_cons(t, sym_Seq_2))
            {
              v_42 = ATgetArgument(t, 0);
              x_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_42;
          if(match_cons(t, sym_Build_1))
            {
              w_42 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, t_42, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_42), x_42)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              y_42 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          a_43 = ATgetArgument(t, 0);
          t = a_43;
          if(match_cons(t, sym_Test_1))
            {
              y_42 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              a_43 = ATgetArgument(t, 0);
              t = a_43;
              if(match_cons(t, sym_Not_1))
                {
                  y_42 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, y_42);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_43 = ATgetArgument(t, 0);
                  b_43 = ATgetArgument(t, 1);
                  t = b_43;
                  if((a_43 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      a_43 = ATgetArgument(t, 0);
                      b_43 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_43;
                  if((a_43 != t))
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
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      p_43 = ATgetArgument(t, 0);
      s_43 = ATgetArgument(t, 1);
      t = p_43;
      if(match_cons(t, sym_LChoice_2))
        {
          q_43 = ATgetArgument(t, 0);
          r_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, q_43, (ATerm) ATmakeAppl(sym_LChoice_2, r_43, s_43));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          p_43 = ATgetArgument(t, 0);
          s_43 = ATgetArgument(t, 1);
          t = p_43;
          if(match_cons(t, sym_Seq_2))
            {
              q_43 = ATgetArgument(t, 0);
              r_43 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, q_43, (ATerm) ATmakeAppl(sym_Seq_2, r_43, s_43));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              p_43 = ATgetArgument(t, 0);
              s_43 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_43;
          if(match_cons(t, sym_Choice_2))
            {
              q_43 = ATgetArgument(t, 0);
              r_43 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, q_43, (ATerm) ATmakeAppl(sym_Choice_2, r_43, s_43));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm r_4 (ATerm t)
        {
          ATerm s_4 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(s_4, t);
          return(t);
        }
        t = Cons_2_0(_id, r_4, t);
      }
      ;
      LocalPopChoice(q_25);
    }
  else
    {
      t = l_25;
      {
        ATerm t_4 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, t_4, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,l_44 = NULL,m_44 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      l_44 = ATgetArgument(t, 0);
      m_44 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, l_44, m_44);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          l_44 = ATgetArgument(t, 0);
          t = l_44;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_44 = ATgetFirst((ATermList) t);
              h_44 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, g_44, (ATerm) ATmakeAppl(sym_LChoices_1, h_44));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_x_22;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              l_44 = ATgetArgument(t, 0);
              t = l_44;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_44 = ATgetFirst((ATermList) t);
                  h_44 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, g_44, (ATerm) ATmakeAppl(sym_Choices_1, h_44));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_x_22;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  l_44 = ATgetArgument(t, 0);
                  t = l_44;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_44 = ATgetFirst((ATermList) t);
                      h_44 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_44, (ATerm) ATmakeAppl(sym_Seqs_1, h_44));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_r_25;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_44 = ATgetArgument(t, 0);
                      m_44 = ATgetArgument(t, 1);
                      j_44 = ATgetArgument(t, 2);
                      i_44 = ATgetArgument(t, 3);
                      {
                        ATerm z_44 = NULL,a_45 = NULL;
                        t = m_44;
                        {
                          ATerm u_4 (ATerm t)
                          {
                            ATerm b_45 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                b_45 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, b_45, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_17), term_n_17));
                            return(t);
                          }
                          t = map1_1_0(u_4, t);
                          z_44 = t;
                          t = j_44;
                          {
                            ATerm v_4 (ATerm t)
                            {
                              ATerm w_4 (ATerm t)
                              {
                                ATerm c_45 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    c_45 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, c_45, term_n_17);
                                return(t);
                              }
                              t = try_1_0(w_4, t);
                              return(t);
                            }
                            t = map1_1_0(v_4, t);
                            a_45 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, l_44, z_44, a_45, i_44);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          l_44 = ATgetArgument(t, 0);
                          m_44 = ATgetArgument(t, 1);
                          j_44 = ATgetArgument(t, 2);
                          i_44 = ATgetArgument(t, 3);
                          {
                            ATerm s_25 = t;
                            int t_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_45 = NULL,i_45 = NULL;
                                t = j_44;
                                {
                                  ATerm x_4 (ATerm t)
                                  {
                                    ATerm j_45 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        j_45 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, j_45, term_n_17);
                                    return(t);
                                  }
                                  t = map1_1_0(x_4, t);
                                  h_45 = t;
                                  t = m_44;
                                  {
                                    ATerm y_4 (ATerm t)
                                    {
                                      ATerm z_4 (ATerm t)
                                      {
                                        ATerm k_45 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            k_45 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_45, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_17), term_n_17));
                                        return(t);
                                      }
                                      t = try_1_0(z_4, t);
                                      return(t);
                                    }
                                    t = map_1_0(y_4, t);
                                    i_45 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_44, i_45, h_45, i_44);
                                  }
                                }
                                ;
                                LocalPopChoice(t_25);
                              }
                            else
                              {
                                t = s_25;
                                {
                                  ATerm p_45 = NULL,q_45 = NULL;
                                  t = m_44;
                                  {
                                    ATerm a_5 (ATerm t)
                                    {
                                      ATerm r_45 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          r_45 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_45, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_17), term_n_17));
                                      return(t);
                                    }
                                    t = map1_1_0(a_5, t);
                                    p_45 = t;
                                    t = j_44;
                                    {
                                      ATerm c_5 (ATerm t)
                                      {
                                        ATerm d_5 (ATerm t)
                                        {
                                          ATerm s_45 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              s_45 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, s_45, term_n_17);
                                          return(t);
                                        }
                                        t = try_1_0(d_5, t);
                                        return(t);
                                      }
                                      t = map_1_0(c_5, t);
                                      q_45 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, l_44, p_45, q_45, i_44);
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
                              l_44 = ATgetArgument(t, 0);
                              m_44 = ATgetArgument(t, 1);
                              j_44 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, m_44, (ATerm) ATmakeAppl(sym_Op_2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, j_44), l_44)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  l_44 = ATgetArgument(t, 0);
                                  m_44 = ATgetArgument(t, 1);
                                  j_44 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, j_44)), l_44), (ATerm) ATmakeAppl(sym_Build_1, m_44)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      l_44 = ATgetArgument(t, 0);
                                      m_44 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_44, (ATerm) ATmakeAppl(sym_Match_1, m_44));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          l_44 = ATgetArgument(t, 0);
                                          m_44 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_44), m_44);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              l_44 = ATgetArgument(t, 0);
                                              m_44 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_44), l_44);
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
ATerm F10_0_0 (ATerm t)
{
  ATerm r_47 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      r_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_47;
  {
    ATerm g_5 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(g_5, t);
    t = term_x_22;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm z_25 = t;
  int b_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_48 = NULL,z_48 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          x_48 = ATgetArgument(t, 0);
          t = x_48;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              x_48 = ATgetArgument(t, 0);
              t = x_48;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_r_25;
            }
          else
            {
              ATerm c_26 = t;
              int d_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      x_48 = ATgetArgument(t, 0);
                      {
                        ATerm m_26 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_26);
                  t = x_48;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = c_26;
                  {
                    ATerm n_26 = t;
                    int o_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm q_26 = ATgetArgument(t, 0);
                            z_48 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_26);
                        t = z_48;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = n_26;
                        {
                          ATerm r_26 = t;
                          int s_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm u_26 = ATgetArgument(t, 0);
                                  z_48 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(s_26);
                              t = z_48;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = r_26;
                              if(match_cons(t, sym_Some_1))
                                {
                                  x_48 = ATgetArgument(t, 0);
                                  t = x_48;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      x_48 = ATgetArgument(t, 0);
                                      t = x_48;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm v_26 = ATgetArgument(t, 0);
                                          z_48 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = z_48;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                }
                            }
                        }
                      }
                  }
                }
            }
        }
      ;
      LocalPopChoice(b_26);
    }
  else
    {
      t = z_25;
      {
        ATerm c_27 = t;
        int d_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(d_27);
          }
        else
          {
            t = c_27;
            {
              ATerm b_49 = NULL,d_49 = NULL,e_49 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  b_49 = ATgetArgument(t, 0);
                  d_49 = ATgetArgument(t, 1);
                  t = d_49;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = b_49;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm e_27 = t;
                          int p_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = d_49;
                              ;
                              LocalPopChoice(p_27);
                            }
                          else
                            {
                              t = e_27;
                              t = b_49;
                            }
                        }
                      else
                        {
                          t = b_49;
                        }
                    }
                  else
                    {
                      t = b_49;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = d_49;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      b_49 = ATgetArgument(t, 0);
                      d_49 = ATgetArgument(t, 1);
                      t = d_49;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = b_49;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm q_27 = t;
                              int r_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = d_49;
                                  ;
                                  LocalPopChoice(r_27);
                                }
                              else
                                {
                                  t = q_27;
                                  t = b_49;
                                }
                            }
                          else
                            {
                              t = b_49;
                            }
                        }
                      else
                        {
                          t = b_49;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = d_49;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          b_49 = ATgetArgument(t, 0);
                          t = b_49;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              b_49 = ATgetArgument(t, 0);
                              d_49 = ATgetArgument(t, 1);
                              e_49 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = e_49;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_49, d_49);
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
  ATerm d_50 = NULL,f_50 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      f_50 = ATgetArgument(t, 0);
      t = f_50;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          f_50 = ATgetArgument(t, 0);
          t = f_50;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_x_22;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              f_50 = ATgetArgument(t, 0);
              d_50 = ATgetArgument(t, 1);
              t = d_50;
              if(match_cons(t, sym_Id_0))
                {
                  t = f_50;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm t_27 = t;
                      int u_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = d_50;
                          ;
                          LocalPopChoice(u_27);
                        }
                      else
                        {
                          t = t_27;
                          t = f_50;
                        }
                    }
                  else
                    {
                      t = f_50;
                    }
                }
              else
                {
                  t = f_50;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = d_50;
                }
            }
          else
            {
              ATerm w_27 = t;
              int x_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      f_50 = ATgetArgument(t, 0);
                      {
                        ATerm y_27 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(x_27);
                  t = f_50;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = w_27;
                  {
                    ATerm a_28 = t;
                    int b_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm c_28 = ATgetArgument(t, 0);
                            d_50 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(b_28);
                        t = d_50;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = a_28;
                        {
                          ATerm o_28 = t;
                          int p_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm q_28 = ATgetArgument(t, 0);
                                  d_50 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(p_28);
                              t = d_50;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = o_28;
                              if(match_cons(t, sym_All_1))
                                {
                                  f_50 = ATgetArgument(t, 0);
                                  t = f_50;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      f_50 = ATgetArgument(t, 0);
                                      t = f_50;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          f_50 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = f_50;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_r_25;
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
  ATerm r_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(t_28);
    }
  else
    {
      t = r_28;
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            {
              ATerm a_29 = t;
              int f_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(f_29);
                }
              else
                {
                  t = a_29;
                  {
                    ATerm g_29 = t;
                    int h_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(h_29);
                      }
                    else
                      {
                        t = g_29;
                        {
                          ATerm k_29 = t;
                          int n_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(n_29);
                            }
                          else
                            {
                              t = k_29;
                              {
                                ATerm p_29 = t;
                                int r_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_50 = NULL,p_50 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        o_50 = ATgetArgument(t, 0);
                                        p_50 = ATgetArgument(t, 1);
                                        t = o_50;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_50;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            o_50 = ATgetArgument(t, 0);
                                            p_50 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_50;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = p_50;
                                      }
                                    ;
                                    LocalPopChoice(r_29);
                                  }
                                else
                                  {
                                    t = p_29;
                                    {
                                      ATerm s_29 = t;
                                      int t_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(t_29);
                                        }
                                      else
                                        {
                                          t = s_29;
                                          {
                                            ATerm u_29 = t;
                                            int v_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(v_29);
                                              }
                                            else
                                              {
                                                t = u_29;
                                                {
                                                  ATerm r_1 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm w_29 = ATgetArgument(t, 0);
                                                      if(!(match_cons(w_29, sym_Wld_0)))
                                                        _fail(t);
                                                      r_1 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = r_1;
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
ATerm MatrixMerge_0_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_51 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
      t = m_51;
      if(match_cons(t, sym_Matrix_2))
        {
          n_51 = ATgetArgument(t, 0);
          o_51 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_51;
      if(match_cons(t, sym_Choice_2))
        {
          j_51 = ATgetArgument(t, 0);
          k_51 = ATgetArgument(t, 1);
          {
            ATerm z_51 = NULL,a_52 = NULL;
            t = j_51;
            if(match_cons(t, sym_Matrix_2))
              {
                h_51 = ATgetArgument(t, 0);
                i_51 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, n_51, h_51);
            t = union_0_0(t);
            z_51 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_51, i_51);
            t = conc_0_0(t);
            a_52 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, z_51, a_52), k_51);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              j_51 = ATgetArgument(t, 0);
              k_51 = ATgetArgument(t, 1);
              {
                ATerm g_52 = NULL,h_52 = NULL;
                t = j_51;
                if(match_cons(t, sym_Matrix_2))
                  {
                    h_51 = ATgetArgument(t, 0);
                    i_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_51, h_51);
                t = union_0_0(t);
                g_52 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_51, i_51);
                t = conc_0_0(t);
                h_52 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, g_52, h_52), k_51);
              }
            }
          else
            {
              ATerm m_52 = NULL,n_52 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  j_51 = ATgetArgument(t, 0);
                  k_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, n_51, j_51);
              t = union_0_0(t);
              m_52 = t;
              t = (ATerm) ATmakeAppl(sym__2, o_51, k_51);
              t = conc_0_0(t);
              n_52 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, m_52, n_52);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          m_51 = ATgetArgument(t, 0);
          t_51 = ATgetArgument(t, 1);
          t = m_51;
          if(match_cons(t, sym_Matrix_2))
            {
              n_51 = ATgetArgument(t, 0);
              o_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_51;
          if(match_cons(t, sym_LChoice_2))
            {
              j_51 = ATgetArgument(t, 0);
              k_51 = ATgetArgument(t, 1);
              {
                ATerm t_52 = NULL,u_52 = NULL;
                t = j_51;
                if(match_cons(t, sym_Matrix_2))
                  {
                    h_51 = ATgetArgument(t, 0);
                    i_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_51, h_51);
                t = union_0_0(t);
                t_52 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_51, i_51);
                t = conc_0_0(t);
                u_52 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, t_52, u_52), k_51);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  j_51 = ATgetArgument(t, 0);
                  k_51 = ATgetArgument(t, 1);
                  {
                    ATerm a_53 = NULL,b_53 = NULL;
                    t = j_51;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        h_51 = ATgetArgument(t, 0);
                        i_51 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, n_51, h_51);
                    t = union_0_0(t);
                    a_53 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_51, i_51);
                    t = conc_0_0(t);
                    b_53 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, a_53, b_53), k_51);
                  }
                }
              else
                {
                  ATerm g_53 = NULL,h_53 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      j_51 = ATgetArgument(t, 0);
                      k_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, n_51, j_51);
                  t = union_0_0(t);
                  g_53 = t;
                  t = (ATerm) ATmakeAppl(sym__2, o_51, k_51);
                  t = conc_0_0(t);
                  h_53 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, g_53, h_53);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              m_51 = ATgetArgument(t, 0);
              t_51 = ATgetArgument(t, 1);
              {
                ATerm l_53 = NULL;
                t = t_51;
                if(match_cons(t, sym_Matrix_2))
                  {
                    j_51 = ATgetArgument(t, 0);
                    k_51 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_51;
                {
                  ATerm h_5 (ATerm t)
                  {
                    ATerm m_53 = NULL,n_53 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        m_53 = ATgetArgument(t, 0);
                        n_53 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, m_53, (ATerm) ATmakeAppl(sym_Scope_2, m_51, n_53));
                    return(t);
                  }
                  t = map_1_0(h_5, t);
                  l_53 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, j_51, l_53);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  m_51 = ATgetArgument(t, 0);
                  t_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_51;
              if(match_cons(t, sym_Matrix_2))
                {
                  n_51 = ATgetArgument(t, 0);
                  o_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_51;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_51 = ATgetFirst((ATermList) t);
                  s_51 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_51;
              if(match_cons(t, sym_Row_2))
                {
                  q_51 = ATgetArgument(t, 0);
                  r_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_51;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, n_51, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, q_51, (ATerm) ATmakeAppl(sym_Seq_2, r_51, t_51))));
            }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm s_53 (ATerm t)
  {
    ATerm i_5 (ATerm t)
    {
      t = o_130(t);
      t = s_53(t);
      return(t);
    }
    t = try_1_0(i_5, t);
    return(t);
  }
  t = s_53(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    t = bottomup_1_0(f_114, t);
    return(t);
  }
  t = SRTS_all(j_5, t);
  t = f_114(t);
  return(t);
}
ATerm foldr_3_0 (ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm t)
{
  ATerm x_29 = t;
  int y_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_124(t);
      ;
      LocalPopChoice(y_29);
    }
  else
    {
      t = x_29;
      {
        ATerm v_53 = NULL,w_53 = NULL,c_54 = NULL,d_54 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_53 = ATgetFirst((ATermList) t);
            w_53 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_53;
        t = x_124(t);
        c_54 = t;
        t = w_53;
        t = foldr_3_0(v_124, w_124, x_124, t);
        d_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_54, d_54);
        t = w_124(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm t_122 (ATerm), ATerm u_122 (ATerm), ATerm v_122 (ATerm), ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL;
  e_54 = t;
  t = SSL_explode_term(e_54);
  if(match_cons(t, sym__2))
    {
      ATerm z_29 = ATgetArgument(t, 0);
      f_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_54;
  t = foldr_3_0(t_122, u_122, v_122, t);
  return(t);
}
ATerm collect_om_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_54 = NULL;
      t = r_123(t);
      g_54 = t;
      t = (ATerm) ATinsert(ATempty, g_54);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      {
        ATerm k_5 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm m_5 (ATerm t)
        {
          t = collect_om_1_0(r_123, t);
          return(t);
        }
        t = crush_3_0(k_5, union_0_0, m_5, t);
      }
    }
  return(t);
}
ATerm collect_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  t = collect_om_1_0(s_123, t);
  return(t);
}
ATerm collect_offsets_0_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm h_54 = NULL;
    if(match_cons(t, sym_Off_1))
      {
        h_54 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = h_54;
    return(t);
  }
  t = collect_1_0(o_5, t);
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm n_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL;
  if(match_cons(t, sym_As_2))
    {
      q_54 = ATgetArgument(t, 0);
      s_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_54;
  if(match_cons(t, sym_Var_1))
    {
      r_54 = ATgetArgument(t, 0);
      t = s_54;
      if(match_cons(t, sym_As_2))
        {
          t_54 = ATgetArgument(t, 0);
          {
            ATerm c_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_54;
      if(match_cons(t, sym_Off_1))
        {
          n_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, r_54), (ATerm) ATmakeAppl(sym_Var_1, n_54)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          r_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_54;
      if(match_cons(t, sym_Var_1))
        {
          t_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, t_54), (ATerm) ATmakeAppl(sym_Var_1, r_54)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,d_56 = NULL,e_56 = NULL;
  u_55 = t;
  if(match_cons(t, sym_As_2))
    {
      v_55 = ATgetArgument(t, 0);
      d_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_55;
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_30);
        t = d_56;
        if(match_cons(t, sym_As_2))
          {
            e_56 = ATgetArgument(t, 0);
            t_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_56;
        if(match_cons(t, sym_Off_1))
          {
            s_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, s_55), t_55);
      }
    else
      {
        t = d_30;
        if(match_cons(t, sym_Off_1))
          {
            w_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_56;
        if(match_cons(t, sym_Var_1))
          {
            ATerm j_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_55;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_55;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_30 = ATgetFirst((ATermList) t);
                ATerm l_30 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_55;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, w_55), term_v_17);
      }
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm n_56 = NULL;
    if(match_cons(t, sym__2))
      {
        n_56 = ATgetArgument(t, 0);
        if((n_56 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(p_5, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm k_122 (ATerm), ATerm l_122 (ATerm), ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_56 = ATgetFirst((ATermList) t);
      p_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_122(t);
  {
    ATerm r_5 (ATerm t)
    {
      ATerm q_56 = NULL;
      q_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_56, q_56);
      t = k_122(t);
      return(t);
    }
    t = fetch_1_0(r_5, t);
    t = p_56;
  }
  return(t);
}
ATerm union_1_0 (ATerm g_122 (ATerm), ATerm t)
{
  ATerm r_56 = NULL,z_56 = NULL;
  if(match_cons(t, sym__2))
    {
      z_56 = ATgetArgument(t, 0);
      r_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_56;
  {
    ATerm a_57 (ATerm t)
    {
      ATerm z_30 = t;
      int a_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_56;
          ;
          LocalPopChoice(a_31);
        }
      else
        {
          t = z_30;
          {
            ATerm b_31 = t;
            int c_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_5 (ATerm t)
                {
                  t = r_56;
                  return(t);
                }
                t = HdMember_p__2_0(g_122, s_5, t);
                t = a_57(t);
                ;
                LocalPopChoice(c_31);
              }
            else
              {
                t = b_31;
                t = Cons_2_0(_id, a_57, t);
              }
          }
        }
      return(t);
    }
    t = a_57(t);
  }
  return(t);
}
ATerm unions_1_0 (ATerm i_122 (ATerm), ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = union_1_0(i_122, t);
    return(t);
  }
  t = foldr_2_0(t_5, u_5, t);
  return(t);
}
ATerm unions_0_0 (ATerm t)
{
  ATerm v_5 (ATerm t)
  {
    ATerm b_57 = NULL;
    if(match_cons(t, sym__2))
      {
        b_57 = ATgetArgument(t, 0);
        if((b_57 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = unions_1_0(v_5, t);
  return(t);
}
ATerm unzip_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_d_31;
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    ATerm c_57 = NULL,d_57 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_57 = ATgetFirst((ATermList) t);
        d_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, c_57, d_57);
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm e_31 = ATgetArgument(t, 0);
        if(match_cons(e_31, sym__2))
          {
            e_57 = ATgetArgument(e_31, 0);
            g_57 = ATgetArgument(e_31, 1);
          }
        else
          _fail(t);
        {
          ATerm f_31 = ATgetArgument(t, 1);
          if(match_cons(f_31, sym__2))
            {
              f_57 = ATgetArgument(f_31, 0);
              h_57 = ATgetArgument(f_31, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_57), e_57), (ATerm) ATinsert(CheckATermList(h_57), g_57));
    return(t);
  }
  t = genzip_4_0(x_5, y_5, c_6, a_119, t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm e_123 (ATerm), ATerm f_123 (ATerm), ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
  i_57 = t;
  j_57 = t;
  t = SSL_explode_term(j_57);
  if(match_cons(t, sym__2))
    {
      p_57 = ATgetArgument(t, 0);
      q_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_57);
  r_57 = t;
  t = q_57;
  t = unzip_1_0(e_123, t);
  if(match_cons(t, sym__2))
    {
      s_57 = ATgetArgument(t, 0);
      t_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(p_57, s_57);
  u_57 = t;
  t = SSLsetAnnotations(u_57, r_57);
  t = f_123(t);
  if(match_cons(t, sym__2))
    {
      v_57 = ATgetArgument(t, 0);
      w_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_57;
  t = unions_0_0(t);
  x_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_57, x_57);
  t = union_0_0(t);
  y_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_57, y_57);
  return(t);
}
ATerm collect_split_2_0 (ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm t)
{
  ATerm c_58 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL;
      z_57 = t;
      t = try_1_0(f_124, t);
      a_58 = t;
      t = z_57;
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_124(t);
            ;
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            t = (ATerm) ATempty;
          }
        b_58 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_58, b_58);
      }
      return(t);
    }
    t = CollectSplit_2_0(c_58, d_6, t);
    return(t);
  }
  t = c_58(t);
  return(t);
}
ATerm collect_substitutions_0_0 (ATerm t)
{
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  return(t);
}
ATerm Annotate_1_0 (ATerm i_112 (ATerm), ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL;
  if(match_cons(t, sym__2))
    {
      d_58 = ATgetArgument(t, 0);
      e_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_112(t);
  f_58 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(f_58), d_58)), e_58);
  return(t);
}
ATerm NZip2_0_0 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
  if(match_cons(t, sym__2))
    {
      g_58 = ATgetArgument(t, 0);
      {
        ATerm i_31 = ATgetArgument(t, 1);
        if(((ATgetType(i_31) == AT_LIST) && !(ATisEmpty(i_31))))
          {
            h_58 = ATgetFirst((ATermList) i_31);
            i_58 = (ATerm) ATgetNext((ATermList) i_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_58, term_n_18);
  {
    ATerm j_31 = t;
    int k_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(g_58, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(k_31);
      }
    else
      {
        t = j_31;
        t = SSL_addr(g_58, (ATerm) ATmakeInt(1));
      }
    j_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_58, h_58), (ATerm) ATmakeAppl(sym__2, j_58, i_58));
  }
  return(t);
}
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  ATerm k_58 (ATerm t)
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_118(t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = r_118(t);
        t = _2_0(t_118, k_58, t);
        t = s_118(t);
      }
    return(t);
  }
  t = k_58(t);
  return(t);
}
ATerm nzip0_1_0 (ATerm b_119 (ATerm), ATerm t)
{
  ATerm l_58 = NULL;
  l_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_17, l_58);
  {
    ATerm e_6 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm n_31 = ATgetArgument(t, 0);
          ATerm o_31 = ATgetArgument(t, 1);
          if(((ATgetType(o_31) != AT_LIST) || !(ATisEmpty(o_31))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm i_6 (ATerm t)
    {
      ATerm m_58 = NULL,n_58 = NULL;
      if(match_cons(t, sym__2))
        {
          m_58 = ATgetArgument(t, 0);
          n_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(n_58), m_58);
      return(t);
    }
    t = genzip_4_0(e_6, NZip2_0_0, i_6, b_119, t);
  }
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm s_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL;
  if(match_cons(t, sym_As_2))
    {
      u_58 = ATgetArgument(t, 0);
      w_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_58;
  if(match_cons(t, sym_Off_1))
    {
      v_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_58;
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm r_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_31);
        {
          ATerm s_31 = t;
          int t_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_58;
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm m_6 (ATerm t)
                  {
                    t = v_58;
                    return(t);
                  }
                  t = Annotate_1_0(m_6, t);
                  return(t);
                }
                t = nzip0_1_0(j_6, t);
              }
              ;
              LocalPopChoice(t_31);
            }
          else
            {
              t = s_31;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, v_58), term_v_17);
            }
        }
      }
    else
      {
        t = p_31;
        if(match_cons(t, sym_As_2))
          {
            x_58 = ATgetArgument(t, 0);
            y_58 = ATgetArgument(t, 1);
            t = x_58;
            if(match_cons(t, sym_Var_1))
              {
                s_58 = ATgetArgument(t, 0);
                {
                  ATerm y_31 = t;
                  int z_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_58;
                      {
                        ATerm n_6 (ATerm t)
                        {
                          ATerm o_6 (ATerm t)
                          {
                            t = v_58;
                            return(t);
                          }
                          t = Annotate_1_0(o_6, t);
                          return(t);
                        }
                        t = nzip0_1_0(n_6, t);
                      }
                      ;
                      LocalPopChoice(z_31);
                    }
                  else
                    {
                      t = y_31;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_58), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, v_58), y_58));
                    }
                }
              }
            else
              {
                t = w_58;
                {
                  ATerm p_6 (ATerm t)
                  {
                    ATerm q_6 (ATerm t)
                    {
                      t = v_58;
                      return(t);
                    }
                    t = Annotate_1_0(q_6, t);
                    return(t);
                  }
                  t = nzip0_1_0(p_6, t);
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                x_58 = ATgetArgument(t, 0);
                y_58 = ATgetArgument(t, 1);
                {
                  ATerm a_32 = t;
                  int b_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_58;
                      {
                        ATerm r_6 (ATerm t)
                        {
                          ATerm t_6 (ATerm t)
                          {
                            t = v_58;
                            return(t);
                          }
                          t = Annotate_1_0(t_6, t);
                          return(t);
                        }
                        t = nzip0_1_0(r_6, t);
                      }
                      ;
                      LocalPopChoice(b_32);
                    }
                  else
                    {
                      t = a_32;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, v_58), (ATerm) ATmakeAppl(sym_Op_2, x_58, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, v_58), y_58)));
                    }
                }
              }
            else
              {
                t = w_58;
                {
                  ATerm u_6 (ATerm t)
                  {
                    ATerm v_6 (ATerm t)
                    {
                      t = v_58;
                      return(t);
                    }
                    t = Annotate_1_0(v_6, t);
                    return(t);
                  }
                  t = nzip0_1_0(u_6, t);
                }
              }
          }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm e_114 (ATerm), ATerm t)
{
  t = e_114(t);
  {
    ATerm w_6 (ATerm t)
    {
      t = topdown_1_0(e_114, t);
      return(t);
    }
    t = SRTS_all(w_6, t);
  }
  return(t);
}
ATerm term_to_matrix_0_0 (ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL;
  q_59 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_g_32, (ATerm) ATinsert(ATempty, q_59));
  {
    ATerm x_6 (ATerm t)
    {
      ATerm z_6 (ATerm t)
      {
        ATerm u_59 = NULL;
        if(match_cons(t, sym_As_2))
          {
            ATerm z_32 = ATgetArgument(t, 0);
            if(!(match_cons(z_32, sym_Wld_0)))
              _fail(t);
            u_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_59;
        return(t);
      }
      t = try_1_0(z_6, t);
      return(t);
    }
    t = topdown_1_0(x_6, t);
    {
      ATerm a_7 (ATerm t)
      {
        t = try_1_0(Propagate_0_0, t);
        return(t);
      }
      t = topdown_1_0(a_7, t);
      t = collect_substitutions_0_0(t);
      if(match_cons(t, sym__2))
        {
          r_59 = ATgetArgument(t, 0);
          s_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_59;
      t = collect_offsets_0_0(t);
      t_59 = t;
      t = (ATerm) ATmakeAppl(sym_Matrix_2, t_59, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, r_59, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_59), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_o_17)))))));
    }
  }
  return(t);
}
ATerm MatchToMatrix_0_0 (ATerm t)
{
  ATerm v_59 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      v_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_59;
  t = term_to_matrix_0_0(t);
  return(t);
}
ATerm Scope_2_0 (ATerm n_102 (ATerm), ATerm o_102 (ATerm), ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL;
  b_60 = t;
  if(match_cons(t, sym_Scope_2))
    {
      x_59 = ATgetArgument(t, 0);
      y_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_60);
  w_59 = t;
  t = x_59;
  t = n_102(t);
  z_59 = t;
  t = y_59;
  t = o_102(t);
  a_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, z_59, a_60), w_59);
  return(t);
}
ATerm Seq_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  ATerm f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
  k_60 = t;
  if(match_cons(t, sym_Seq_2))
    {
      g_60 = ATgetArgument(t, 0);
      h_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_60);
  f_60 = t;
  t = g_60;
  t = r_102(t);
  i_60 = t;
  t = h_60;
  t = s_102(t);
  j_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, i_60, j_60), f_60);
  return(t);
}
ATerm LChoice_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
  t_60 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      p_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_60);
  o_60 = t;
  t = p_60;
  t = t_102(t);
  r_60 = t;
  t = q_60;
  t = u_102(t);
  s_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, r_60, s_60), o_60);
  return(t);
}
ATerm Choice_2_0 (ATerm r_101 (ATerm), ATerm s_101 (ATerm), ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL;
  s_61 = t;
  if(match_cons(t, sym_Choice_2))
    {
      j_61 = ATgetArgument(t, 0);
      k_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_61);
  i_61 = t;
  t = j_61;
  t = r_101(t);
  q_61 = t;
  t = k_61;
  t = s_101(t);
  r_61 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, q_61, r_61), i_61);
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_33 = t;
      int g_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Choice_2_0(_id, _id, t);
          ;
          LocalPopChoice(g_33);
        }
      else
        {
          t = c_33;
          t = LChoice_2_0(_id, _id, t);
        }
      {
        ATerm w_61 (ATerm t)
        {
          ATerm k_33 = t;
          int l_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Choice_2_0(w_61, w_61, t);
              ;
              LocalPopChoice(l_33);
            }
          else
            {
              t = k_33;
              {
                ATerm m_33 = t;
                int n_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2_0(w_61, w_61, t);
                    ;
                    LocalPopChoice(n_33);
                  }
                else
                  {
                    t = m_33;
                    {
                      ATerm x_61 (ATerm t)
                      {
                        ATerm o_33 = t;
                        int p_33 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Seq_2_0(x_61, match_to_matrix_0_0, t);
                            ;
                            LocalPopChoice(p_33);
                          }
                        else
                          {
                            t = o_33;
                            {
                              ATerm q_33 = t;
                              int r_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Scope_2_0(_id, x_61, t);
                                  ;
                                  LocalPopChoice(r_33);
                                }
                              else
                                {
                                  t = q_33;
                                  {
                                    ATerm s_33 = t;
                                    int v_33 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = MatchToMatrix_0_0(t);
                                        ;
                                        LocalPopChoice(v_33);
                                      }
                                    else
                                      {
                                        t = s_33;
                                        t = SRTS_all(match_to_matrix_0_0, t);
                                      }
                                  }
                                }
                            }
                          }
                        return(t);
                      }
                      t = x_61(t);
                    }
                  }
              }
            }
          return(t);
        }
        t = w_61(t);
      }
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  {
    ATerm b_7 (ATerm t)
    {
      ATerm c_7 (ATerm t)
      {
        ATerm w_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MatrixMerge_0_0(t);
            ;
            LocalPopChoice(x_33);
          }
        else
          {
            t = w_33;
            t = Simplify_0_0(t);
          }
        return(t);
      }
      t = repeat_1_0(c_7, t);
      return(t);
    }
    t = bottomup_1_0(b_7, t);
  }
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  t = matrix_to_dfa_0_0(t);
  t = strename_0_0(t);
  return(t);
}
ATerm SDefT_4_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL;
  h_62 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      z_61 = ATgetArgument(t, 0);
      a_62 = ATgetArgument(t, 1);
      b_62 = ATgetArgument(t, 2);
      c_62 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_62);
  y_61 = t;
  t = z_61;
  t = v_104(t);
  d_62 = t;
  t = a_62;
  t = w_104(t);
  e_62 = t;
  t = b_62;
  t = x_104(t);
  f_62 = t;
  t = c_62;
  t = y_104(t);
  g_62 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, d_62, e_62, f_62, g_62), y_61);
  return(t);
}
ATerm SDef_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL;
  s_62 = t;
  if(match_cons(t, sym_SDef_3))
    {
      m_62 = ATgetArgument(t, 0);
      n_62 = ATgetArgument(t, 1);
      o_62 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_62);
  l_62 = t;
  t = m_62;
  t = s_104(t);
  p_62 = t;
  t = n_62;
  t = t_104(t);
  q_62 = t;
  t = o_62;
  t = u_104(t);
  r_62 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, p_62, q_62, r_62), l_62);
  return(t);
}
ATerm Strategies_1_0 (ATerm v_97 (ATerm), ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  z_62 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_62);
  w_62 = t;
  t = x_62;
  t = v_97(t);
  y_62 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, y_62), w_62);
  return(t);
}
ATerm Specification_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
  g_63 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_63);
  d_63 = t;
  t = e_63;
  t = a_98(t);
  f_63 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, f_63), d_63);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm f_112 (ATerm), ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm e_7 (ATerm t)
    {
      ATerm f_7 (ATerm t)
      {
        ATerm h_7 (ATerm t)
        {
          ATerm i_7 (ATerm t)
          {
            ATerm z_33 = t;
            int a_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, f_112, t);
                ;
                LocalPopChoice(a_34);
              }
            else
              {
                t = z_33;
                t = SDefT_4_0(_id, _id, _id, f_112, t);
              }
            return(t);
          }
          t = map_1_0(i_7, t);
          return(t);
        }
        t = Strategies_1_0(h_7, t);
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(f_7, g_7, t);
      return(t);
    }
    t = Cons_2_0(_id, e_7, t);
    return(t);
  }
  t = Specification_1_0(d_7, t);
  return(t);
}
ATerm _2_0 (ATerm i_96 (ATerm), ATerm j_96 (ATerm), ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL,t_63 = NULL,z_63 = NULL,c_64 = NULL;
  c_64 = t;
  if(match_cons(t, sym__2))
    {
      l_63 = ATgetArgument(t, 0);
      m_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_64);
  k_63 = t;
  t = l_63;
  t = i_96(t);
  t_63 = t;
  t = m_63;
  t = j_96(t);
  z_63 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, t_63, z_63), k_63);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL;
  g_64 = t;
  t = term_b_34;
  t = whoami_0_0(t);
  h_64 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), h_64), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = g_64;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_34 = t;
  int d_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_34);
    }
  else
    {
      t = c_34;
      {
        ATerm k_64 = NULL,o_64 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_64 = ATgetFirst((ATermList) t);
            o_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_64;
        {
          ATerm j_7 (ATerm t)
          {
            t = o_64;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(j_7, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm s_64 = NULL,t_64 = NULL;
  s_64 = t;
  t = SSL_explode_term(s_64);
  if(match_cons(t, sym__2))
    {
      ATerm e_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_64;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_120 (ATerm), ATerm t)
{
  ATerm u_64 (ATerm t)
  {
    ATerm f_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_64, t);
        ;
        LocalPopChoice(h_34);
      }
    else
      {
        t = f_34;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_120(t);
      }
    return(t);
  }
  t = u_64(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL;
  if(match_cons(t, sym__2))
    {
      w_64 = ATgetArgument(t, 0);
      v_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_64;
  {
    ATerm k_7 (ATerm t)
    {
      t = v_64;
      return(t);
    }
    t = at_end_1_0(k_7, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_34 = t;
  int p_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(p_34);
    }
  else
    {
      t = o_34;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm x_64 = NULL;
  ATerm l_7 (ATerm t)
  {
    ATerm y_64 = NULL;
    y_64 = t;
    t = SSL_explode_string(y_64);
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    ATerm z_64 = NULL;
    z_64 = t;
    t = SSL_explode_string(z_64);
    return(t);
  }
  t = _2_0(l_7, m_7, t);
  t = conc_0_0(t);
  x_64 = t;
  t = SSL_implode_string(x_64);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_65 = NULL;
      g_65 = t;
      t = SSL_is_string(g_65);
      ;
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
      {
        ATerm s_34 = t;
        int u_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_7 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(n_7, t);
            ;
            LocalPopChoice(u_34);
          }
        else
          {
            t = s_34;
            {
              ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
              k_65 = t;
              if(match_cons(t, sym_Path_1))
                {
                  l_65 = ATgetArgument(t, 0);
                  t = l_65;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      l_65 = ATgetArgument(t, 0);
                      t = l_65;
                      {
                        ATerm p_35 = t;
                        int q_35 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_35);
                          }
                        else
                          {
                            t = p_35;
                            {
                              ATerm o_7 (ATerm t)
                              {
                                t = term_r_35;
                                return(t);
                              }
                              t = debug_1_0(o_7, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm q_65 = NULL,r_65 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          l_65 = ATgetArgument(t, 0);
                          m_65 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_65;
                      t = eval_config_0_0(t);
                      q_65 = t;
                      t = m_65;
                      t = eval_config_0_0(t);
                      r_65 = t;
                      t = (ATerm) ATmakeAppl(sym__2, q_65, r_65);
                      t = conc_strings_0_0(t);
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
  ATerm u_65 = NULL;
  u_65 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_65);
  {
    ATerm p_7 (ATerm t)
    {
      ATerm v_65 = NULL;
      t = eval_config_0_0(t);
      v_65 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), u_65, v_65);
      t = v_65;
      return(t);
    }
    t = try_1_0(p_7, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_137 (ATerm), ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm w_65 = NULL,x_65 = NULL;
    w_65 = t;
    t = term_a_36;
    t = get_config_0_0(t);
    x_65 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_65, term_b_36);
    t = geq_0_0(t);
    t = w_65;
    t = d_137(t);
    return(t);
  }
  t = try_1_0(q_7, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm r_7 (ATerm t)
  {
    ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm c_36 = ATgetArgument(t, 0);
        if(match_cons(c_36, sym_Stream_1))
          {
            y_65 = ATgetArgument(c_36, 0);
          }
        else
          _fail(t);
        z_65 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(y_65, z_65);
    a_66 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), a_66);
    b_66 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, b_66);
    return(t);
  }
  t = WriteToFile_1_0(r_7, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm z_135 (ATerm), ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
  if(match_cons(t, sym__2))
    {
      c_66 = ATgetArgument(t, 0);
      d_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_66, term_j_36);
  t = open_stream_0_0(t);
  e_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_66, d_66);
  t = z_135(t);
  t = fclose_0_0(t);
  t = d_66;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm k_36 = ATgetArgument(t, 0);
        if(match_cons(k_36, sym_Stream_1))
          {
            f_66 = ATgetArgument(k_36, 0);
          }
        else
          _fail(t);
        g_66 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(f_66, g_66);
    h_66 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, h_66);
    return(t);
  }
  t = WriteToFile_1_0(t_7, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_66 = NULL,j_66 = NULL;
  i_66 = t;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm o_36 = t;
      int p_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_7 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                j_66 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(w_7, t);
          ;
          LocalPopChoice(p_36);
        }
      else
        {
          t = o_36;
          t = term_q_36;
          j_66 = t;
        }
      return(t);
    }
    t = _2_0(v_7, _id, t);
    t = i_66;
    {
      ATerm x_7 (ATerm t)
      {
        ATerm y_7 (ATerm t)
        {
          t = not_null(j_66);
          return(t);
        }
        t = split_2_0(y_7, _id, t);
        return(t);
      }
      t = _2_0(_id, x_7, t);
      {
        ATerm r_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_7 (ATerm t)
            {
              ATerm a_8 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(a_8, t);
              return(t);
            }
            t = _2_0(z_7, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(s_36);
          }
        else
          {
            t = r_36;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm b_139 (ATerm), ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
  k_66 = t;
  t = dtime_0_0(t);
  t = k_66;
  t = b_139(t);
  l_66 = t;
  t = dtime_0_0(t);
  m_66 = t;
  t = l_66;
  if(match_cons(t, sym__2))
    {
      n_66 = ATgetArgument(t, 0);
      o_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_66), (ATerm) ATmakeAppl(sym_Runtime_1, m_66)), o_66);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_67 (ATerm w_66, ATerm t)
  {
    t = SSL_fclose(w_66);
    return(t);
  }
  ATerm z_66 = NULL,a_67 = NULL;
  a_67 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_66 = ATgetArgument(t, 0);
      {
        ATerm y_36 = t;
        int z_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_66);
            ;
            LocalPopChoice(z_36);
          }
        else
          {
            t = y_36;
            t = c_67(a_67, t);
          }
      }
    }
  else
    {
      t = c_67(a_67, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm l_135 (ATerm), ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL;
  d_67 = t;
  t = l_135(t);
  e_67 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, d_67), e_67));
  t = d_67;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_67 = NULL;
  t = SSL_stdin_stream();
  f_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_67);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_67 = NULL;
  t = SSL_stdout_stream();
  g_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_67);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_67 = NULL;
  t = SSL_stderr_stream();
  h_67 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_67);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm j_67 = NULL;
  j_67 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_67;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_67;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_67;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_37 = ATgetArgument(t, 0);
      ATerm e_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 = NULL,k_2 = NULL;
        j_2 = t;
        t = SSL_explode_term(j_2);
        if(match_cons(t, sym__2))
          {
            ATerm h_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_37) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_37 = ATgetArgument(t, 1);
              if(((ATgetType(i_37) == AT_LIST) && !(ATisEmpty(i_37))))
                {
                  k_2 = ATgetFirst((ATermList) i_37);
                  {
                    ATerm j_37 = (ATerm) ATgetNext((ATermList) i_37);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = k_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(g_37);
      }
    else
      {
        t = f_37;
        {
          ATerm k_37 = t;
          int l_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
              ATerm c_8 (ATerm t)
              {
                ATerm p_67 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    p_67 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = p_67;
                return(t);
              }
              t = _2_0(c_8, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_67 = ATgetArgument(t, 0);
                  n_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(m_67, n_67);
              o_67 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_67);
              ;
              LocalPopChoice(l_37);
            }
          else
            {
              t = k_37;
              {
                ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL;
                ATerm d_8 (ATerm t)
                {
                  ATerm t_67 = NULL;
                  t_67 = t;
                  t = SSL_is_string(t_67);
                  return(t);
                }
                t = _2_0(d_8, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_67 = ATgetArgument(t, 0);
                    r_67 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_67, r_67);
                s_67 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, s_67);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL;
  ATerm m_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_67 = NULL;
      x_67 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_67, term_r_37);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_37);
    }
  else
    {
      t = m_37;
      {
        ATerm e_8 (ATerm t)
        {
          t = term_w_37;
          return(t);
        }
        t = debug_1_0(e_8, t);
        _fail(t);
      }
    }
  u_67 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(w_67);
  v_67 = t;
  t = u_67;
  t = fclose_0_0(t);
  t = v_67;
  return(t);
}
ATerm split_2_0 (ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL;
  z_67 = t;
  t = q_117(t);
  a_68 = t;
  t = z_67;
  t = r_117(t);
  b_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_68, b_68);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL;
  c_68 = t;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              d_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(f_8, t);
        ;
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        t = term_z_37;
        d_68 = t;
      }
    t = c_68;
    {
      ATerm g_8 (ATerm t)
      {
        t = not_null(d_68);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, g_8, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm h_8 (ATerm t)
  {
    ATerm f_68 = NULL;
    f_68 = t;
    if(match_string(t, "-k"))
      {
        t = f_68;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = f_68;
      }
    return(t);
  }
  ATerm j_8 (ATerm t)
  {
    ATerm g_68 = NULL,h_68 = NULL;
    g_68 = t;
    t = SSL_string_to_int(g_68);
    h_68 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), h_68);
    t = g_68;
    return(t);
  }
  ATerm l_8 (ATerm t)
  {
    t = term_a_38;
    return(t);
  }
  t = ArgOption_3_0(h_8, j_8, l_8, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_8 (ATerm t)
      {
        ATerm j_68 = NULL;
        j_68 = t;
        if(match_string(t, "-S"))
          {
            t = j_68;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = j_68;
          }
        return(t);
      }
      ATerm n_8 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_p_38;
        return(t);
      }
      ATerm o_8 (ATerm t)
      {
        t = term_q_38;
        return(t);
      }
      t = Option_3_0(m_8, n_8, o_8, t);
      ;
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
      {
        ATerm r_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_8 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm q_8 (ATerm t)
            {
              ATerm k_68 = NULL,l_68 = NULL;
              k_68 = t;
              t = SSL_string_to_int(k_68);
              l_68 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_68);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, k_68);
              return(t);
            }
            ATerm r_8 (ATerm t)
            {
              t = term_t_38;
              return(t);
            }
            t = ArgOption_3_0(p_8, q_8, r_8, t);
            ;
            LocalPopChoice(s_38);
          }
        else
          {
            t = r_38;
            {
              ATerm t_8 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm u_8 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_38;
                return(t);
              }
              ATerm v_8 (ATerm t)
              {
                t = term_v_38;
                return(t);
              }
              t = Option_3_0(t_8, u_8, v_8, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm w_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(x_38);
    }
  else
    {
      t = w_38;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm w_8 (ATerm t)
  {
    ATerm n_68 = NULL;
    n_68 = t;
    if(match_string(t, "-o"))
      {
        t = n_68;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = n_68;
      }
    return(t);
  }
  ATerm x_8 (ATerm t)
  {
    ATerm o_68 = NULL;
    o_68 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), o_68);
    t = (ATerm) ATmakeAppl(sym_Output_1, o_68);
    return(t);
  }
  ATerm y_8 (ATerm t)
  {
    t = term_y_38;
    return(t);
  }
  t = ArgOption_3_0(w_8, x_8, y_8, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm z_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(a_39);
    }
  else
    {
      t = z_38;
      {
        ATerm z_8 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm a_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_39;
          return(t);
        }
        ATerm b_9 (ATerm t)
        {
          t = term_c_39;
          return(t);
        }
        t = Option_3_0(z_8, a_9, b_9, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
  r_68 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = r_68;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm z_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_68 = ATgetFirst((ATermList) t);
          t_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_68;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_68 = ATgetFirst((ATermList) t);
          v_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_68;
      t = i_0(t);
      t = u_68;
      t = k_0(t);
      z_68 = t;
      t = (ATerm) ATinsert(CheckATermList(v_68), z_68);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm c_9 (ATerm t)
  {
    ATerm b_69 = NULL;
    b_69 = t;
    if(match_string(t, "-i"))
      {
        t = b_69;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = b_69;
      }
    return(t);
  }
  ATerm d_9 (ATerm t)
  {
    ATerm c_69 = NULL;
    c_69 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), c_69);
    t = (ATerm) ATmakeAppl(sym_Input_1, c_69);
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    t = term_d_39;
    return(t);
  }
  t = ArgOption_3_0(c_9, d_9, e_9, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
      {
        ATerm g_39 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(h_39);
          }
        else
          {
            t = g_39;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_69 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_34;
  t = whoami_0_0(t);
  d_69 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), d_69));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_i_39;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm t)
{
  ATerm j_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_124(t);
      ;
      LocalPopChoice(k_39);
    }
  else
    {
      t = j_39;
      {
        ATerm g_69 = NULL,h_69 = NULL,k_69 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_69 = ATgetFirst((ATermList) t);
            h_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_69;
        t = foldr_2_0(t_124, u_124, t);
        k_69 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_69, k_69);
        t = u_124(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm r_122 (ATerm), ATerm s_122 (ATerm), ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL;
  l_69 = t;
  t = SSL_explode_term(l_69);
  if(match_cons(t, sym__2))
    {
      ATerm l_39 = ATgetArgument(t, 0);
      m_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_69;
  t = foldr_2_0(r_122, s_122, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_69 = NULL;
  t = times_0_0(t);
  {
    ATerm f_9 (ATerm t)
    {
      t = term_o_17;
      return(t);
    }
    ATerm g_9 (ATerm t)
    {
      ATerm o_69 = NULL,p_69 = NULL;
      if(match_cons(t, sym__2))
        {
          o_69 = ATgetArgument(t, 0);
          p_69 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_39 = t;
        int n_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(o_69, p_69);
            ;
            LocalPopChoice(n_39);
          }
        else
          {
            t = m_39;
            t = SSL_addr(o_69, p_69);
          }
      }
      return(t);
    }
    t = crush_2_0(f_9, g_9, t);
    n_69 = t;
    t = SSL_TicksToSeconds(n_69);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
  y_69 = t;
  if(match_cons(t, sym__2))
    {
      z_69 = ATgetArgument(t, 0);
      a_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_70;
        if((z_69 != t))
          {
            _fail(t);
          }
        t = y_69;
        ;
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = y_69;
        {
          ATerm q_39 = t;
          int r_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_69, a_70);
              ;
              LocalPopChoice(r_39);
            }
          else
            {
              t = q_39;
              t = SSL_gtr(z_69, a_70);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_69, a_70);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_137 (ATerm), ATerm t)
{
  ATerm h_9 (ATerm t)
  {
    ATerm d_70 = NULL,e_70 = NULL;
    d_70 = t;
    t = term_a_36;
    t = get_config_0_0(t);
    e_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_70, term_n_18);
    t = geq_0_0(t);
    t = d_70;
    t = c_137(t);
    return(t);
  }
  t = try_1_0(h_9, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm i_9 (ATerm t)
  {
    ATerm j_70 = NULL,k_70 = NULL;
    t = run_time_0_0(t);
    j_70 = t;
    t = term_b_34;
    t = whoami_0_0(t);
    k_70 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), j_70), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), k_70));
    t = (ATerm) ATmakeAppl(sym__2, term_s_39, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_39), j_70), term_t_39), k_70));
    return(t);
  }
  t = if_verbose1_1_0(i_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm z_139 (ATerm), ATerm t)
{
  ATerm v_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_39);
    }
  else
    {
      t = v_39;
      {
        ATerm j_9 (ATerm t)
        {
          ATerm y_39 = t;
          int z_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(z_39);
            }
          else
            {
              t = y_39;
              {
                ATerm a_40 = t;
                int e_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(e_40);
                  }
                else
                  {
                    t = a_40;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(j_9, t);
      }
    }
  t = z_139(t);
  return(t);
}
ATerm map_1_0 (ATerm f_120 (ATerm), ATerm t)
{
  ATerm m_70 (ATerm t)
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        t = Cons_2_0(f_120, m_70, t);
      }
    return(t);
  }
  t = m_70(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_70 = ATgetFirst((ATermList) t);
      p_70 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_70 = NULL,u_70 = NULL;
        t = p_70;
        t = g_0(t);
        t_70 = t;
        t = o_70;
        t = e_0(t);
        u_70 = t;
        t = p_70;
        {
          ATerm k_9 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(t_70), u_70);
            return(t);
          }
          t = reverse_acc_2_0(e_0, k_9, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_34;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm l_9 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, l_9, t);
  return(t);
}
ATerm Program_1_0 (ATerm z_111 (ATerm), ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL;
  y_70 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_70);
  v_70 = t;
  t = w_70;
  t = z_111(t);
  x_70 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, x_70), v_70);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_39;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_40);
    }
  else
    {
      t = h_40;
      {
        ATerm m_9 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(m_9, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_j_40;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm n_9 (ATerm t)
    {
      ATerm c_71 = NULL;
      c_71 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, c_71), term_k_40);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(n_9, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL;
  g_71 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      e_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_71);
  d_71 = t;
  t = e_71;
  t = a_112(t);
  f_71 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, f_71), d_71);
  return(t);
}
ATerm fetch_1_0 (ATerm p_120 (ATerm), ATerm t)
{
  ATerm k_71 (ATerm t)
  {
    ATerm l_40 = t;
    int m_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(p_120, _id, t);
        ;
        LocalPopChoice(m_40);
      }
    else
      {
        t = l_40;
        t = Cons_2_0(_id, k_71, t);
      }
    return(t);
  }
  t = k_71(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm z_140 (ATerm), ATerm t)
{
  t = fetch_1_0(z_140, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL;
  m_71 = t;
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_71;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_40 = ATgetFirst((ATermList) t);
                ATerm q_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_71;
          }
        ;
        LocalPopChoice(o_40);
      }
    else
      {
        t = n_40;
        t = (ATerm) ATinsert(ATempty, m_71);
      }
    n_71 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), n_71);
    t = m_71;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_i_39;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_116(t);
      ;
      LocalPopChoice(s_40);
    }
  else
    {
      t = r_40;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_9 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm p_9 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_z_40;
        return(t);
      }
      ATerm q_9 (ATerm t)
      {
        t = term_a_41;
        return(t);
      }
      t = Option_3_0(o_9, p_9, q_9, t);
      ;
      LocalPopChoice(w_40);
    }
  else
    {
      t = u_40;
      {
        ATerm r_9 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm s_9 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_41;
          return(t);
        }
        ATerm t_9 (ATerm t)
        {
          t = term_d_41;
          return(t);
        }
        t = Option_3_0(r_9, s_9, t_9, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL;
  if(match_cons(t, sym__3))
    {
      t_71 = ATgetArgument(t, 0);
      u_71 = ATgetArgument(t, 1);
      v_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_71, u_71);
  {
    ATerm e_41 = t;
    int f_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_41 = ATgetArgument(t, 0);
            ATerm h_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_71, u_71);
        ;
        LocalPopChoice(f_41);
      }
    else
      {
        t = e_41;
        t = (ATerm) ATempty;
      }
    w_71 = t;
    t = SSL_table_put(t_71, u_71, (ATerm) ATinsert(CheckATermList(w_71), v_71));
    t = (ATerm) ATmakeAppl(sym__3, t_71, u_71, v_71);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm e_142 (ATerm), ATerm t)
{
  ATerm b_72 = NULL;
  t = term_b_34;
  t = e_142(t);
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_41, term_j_41, b_72);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
  d_72 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = d_72;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm i_72 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_72 = ATgetFirst((ATermList) t);
          f_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_72;
      t = a_0(t);
      t = term_b_34;
      t = c_0(t);
      i_72 = t;
      t = (ATerm) ATinsert(CheckATermList(f_72), i_72);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm u_9 (ATerm t)
  {
    ATerm k_72 = NULL;
    k_72 = t;
    if(match_string(t, "--help"))
      {
        t = k_72;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = k_72;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = k_72;
          }
      }
    return(t);
  }
  ATerm v_9 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_k_41;
    return(t);
  }
  ATerm w_9 (ATerm t)
  {
    t = term_l_41;
    return(t);
  }
  t = Option_3_0(u_9, v_9, w_9, t);
  return(t);
}
ATerm Cons_2_0 (ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t)
{
  ATerm l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
  q_72 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_72 = ATgetFirst((ATermList) t);
      n_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_72);
  l_72 = t;
  t = m_72;
  t = r_97(t);
  o_72 = t;
  t = n_72;
  t = s_97(t);
  p_72 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(p_72), o_72), l_72);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_142 (ATerm), ATerm t)
{
  ATerm x_72 = NULL;
  x_72 = t;
  {
    ATerm x_9 (ATerm t)
    {
      t = term_m_41;
      t = c_142(t);
      return(t);
    }
    t = try_1_0(x_9, t);
    t = x_72;
    {
      ATerm y_9 (ATerm t)
      {
        ATerm y_72 = NULL;
        y_72 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_72);
        t = (ATerm) ATmakeAppl(sym_Program_1, y_72);
        return(t);
      }
      ATerm z_9 (ATerm t)
      {
        ATerm r_41 = t;
        int s_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_41 = t;
            int u_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_41);
              }
            else
              {
                t = t_41;
                t = c_142(t);
                t = Cons_2_0(_id, z_9, t);
              }
            ;
            LocalPopChoice(s_41);
          }
        else
          {
            t = r_41;
            {
              ATerm a_73 = NULL,b_73 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_73 = ATgetFirst((ATermList) t);
                  b_73 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_73), (ATerm) ATmakeAppl(sym_Undefined_1, a_73));
            }
          }
        return(t);
      }
      t = Cons_2_0(y_9, z_9, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm b_142 (ATerm), ATerm t)
{
  ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL;
  h_73 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = h_73;
  {
    ATerm a_10 (ATerm t)
    {
      ATerm v_41 = t;
      int y_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_142(t);
          ;
          LocalPopChoice(y_41);
        }
      else
        {
          t = v_41;
          {
            ATerm b_42 = t;
            int c_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(c_42);
              }
            else
              {
                t = b_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_10, t);
    {
      ATerm b_10 (ATerm t)
      {
        ATerm d_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_73 = NULL;
            o_73 = t;
            {
              ATerm g_42 = t;
              int h_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_73;
                  {
                    ATerm i_42 = t;
                    int m_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_x_39;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(m_42);
                      }
                    else
                      {
                        t = i_42;
                        {
                          ATerm c_10 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(c_10, t);
                        }
                      }
                    t = o_73;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(h_42);
                }
              else
                {
                  t = g_42;
                  t = term_y_40;
                  t = get_config_0_0(t);
                  t = o_73;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(f_42);
          }
        else
          {
            t = d_42;
            {
              ATerm d_10 (ATerm t)
              {
                ATerm f_10 (ATerm t)
                {
                  i_73 = t;
                  return(t);
                }
                t = Undefined_1_0(f_10, t);
                return(t);
              }
              t = option_defined_1_0(d_10, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_73)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_s_39, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_73)), term_n_42));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(b_10, t);
      j_73 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = j_73;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm t)
{
  ATerm z_5 = NULL;
  t = parse_options_1_0(b_140, t);
  z_5 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), z_5);
  t = z_5;
  t = d_140(t);
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_140, t);
        ;
        LocalPopChoice(p_42);
      }
    else
      {
        t = o_42;
        {
          ATerm q_42 = t;
          int r_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_140(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_42);
            }
          else
            {
              t = q_42;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm t)
{
  ATerm g_10 (ATerm t)
  {
    ATerm s_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_139(t);
        ;
        LocalPopChoice(z_42);
      }
    else
      {
        t = s_42;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm h_10 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(q_139, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_10, s_139, t_139, h_10, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm k_139 (ATerm), ATerm l_139 (ATerm), ATerm m_139 (ATerm), ATerm t)
{
  ATerm i_10 (ATerm t)
  {
    ATerm l_10 (ATerm t)
    {
      ATerm r_73 = NULL,s_73 = NULL;
      r_73 = t;
      t = term_i_39;
      t = get_config_0_0(t);
      s_73 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, s_73));
      t = r_73;
      return(t);
    }
    t = if_verbose2_1_0(l_10, t);
    return(t);
  }
  t = iowrap_4_0(k_139, l_139, m_139, i_10, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm i_139 (ATerm), ATerm j_139 (ATerm), ATerm t)
{
  t = iowrap_3_0(i_139, j_139, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm f_139 (ATerm), ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    t = _2_0(_id, f_139, t);
    return(t);
  }
  t = iowrap_2_0(n_10, _fail, t);
  return(t);
}
ATerm compile_match_comp_0_0 (ATerm t)
{
  ATerm o_10 (ATerm t)
  {
    t = apply_to_bodies_1_0(match_to_dfa_0_0, t);
    return(t);
  }
  t = iowrap_1_0(o_10, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = compile_match_comp_0_0(t);
  return(t);
}
