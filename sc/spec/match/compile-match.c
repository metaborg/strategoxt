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
ATerm term_n_43;
ATerm term_q_42;
ATerm term_p_42;
ATerm term_m_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_x_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_s_40;
ATerm term_g_40;
ATerm term_x_39;
ATerm term_w_39;
ATerm term_v_39;
ATerm term_s_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_n_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_g_39;
ATerm term_f_39;
ATerm term_c_39;
ATerm term_b_39;
ATerm term_j_38;
ATerm term_c_38;
ATerm term_a_38;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_y_36;
ATerm term_i_35;
ATerm term_t_32;
ATerm term_b_28;
ATerm term_y_27;
ATerm term_j_25;
ATerm term_j_24;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_o_21;
ATerm term_u_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_f_20;
void init_constant_terms (void)
{
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Op_2, term_f_20, (ATerm) ATempty);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("f_1", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_39));
  term_b_39 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_20);
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym__3, term_w_41, term_x_41, term_y_36);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm spaste_1_0 (ATerm p_113 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm);
ATerm Let_2_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm j_102 (ATerm), ATerm);
ATerm srename_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm l_113 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm n_127 (ATerm), ATerm o_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm h_127 (ATerm), ATerm i_127 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm s_127 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm l_128 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm v_127 (ATerm), ATerm);
ATerm rename_4_0 (ATerm c_127 (ATerm (ATerm), ATerm), ATerm d_127 (ATerm), ATerm e_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_127 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm Seqs_1_0 (ATerm r_106 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm);
ATerm Prim_2_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm);
ATerm Var_1_0 (ATerm a_99 (ATerm), ATerm);
ATerm Match_1_0 (ATerm r_102 (ATerm), ATerm);
ATerm Assign_2_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm);
ATerm list_1_0 (ATerm q_120 (ATerm), ATerm);
ATerm Op_2_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm);
ATerm Str_1_0 (ATerm e_99 (ATerm), ATerm);
ATerm Real_1_0 (ATerm d_99 (ATerm), ATerm);
ATerm Int_1_0 (ATerm c_99 (ATerm), ATerm);
ATerm Build_1_0 (ATerm s_102 (ATerm), ATerm);
ATerm simple_strategy_0_0 (ATerm);
ATerm isect_1_0 (ATerm i_122 (ATerm), ATerm);
ATerm isect_0_0 (ATerm);
ATerm Matrix_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm);
ATerm tvars_matrix_boundin_3_0 (ATerm n_143 (ATerm), ATerm o_143 (ATerm), ATerm p_143 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm DynamicRules_1_0 (ATerm r_101 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_matrix_0_0 (ATerm);
ATerm RowLet_1_0 (ATerm u_0 (ATerm), ATerm);
ATerm MatrixScope_0_0 (ATerm);
ATerm assert_1_0 (ATerm m_126 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm default_state_0_0 (ATerm);
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm);
ATerm ConsTransition_1_0 (ATerm y_142 (ATerm), ATerm);
ATerm Transition_0_0 (ATerm);
ATerm rzip_1_0 (ATerm l_119 (ATerm), ATerm);
ATerm transitions_0_0 (ATerm);
ATerm Uniq_0_0 (ATerm);
ATerm listtd_1_0 (ATerm w_121 (ATerm), ATerm);
ATerm uniq_0_0 (ATerm);
ATerm offsets_0_0 (ATerm);
ATerm length_0_0 (ATerm);
ATerm ConsArgs_0_0 (ATerm);
ATerm filter_1_0 (ATerm q_126 (ATerm), ATerm);
ATerm outedges_0_0 (ATerm);
ATerm get_path_0_0 (ATerm);
ATerm Mixture_0_0 (ATerm);
ATerm ShiftColumn_0_0 (ATerm);
ATerm As_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm);
ATerm Row_3_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm);
ATerm SkipWild_0_0 (ATerm);
ATerm MatrixRowsEmpty_0_0 (ATerm);
ATerm reduce_matrix_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm j_126 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm i_126 (ATerm), ATerm);
ATerm scope_2_0 (ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm);
ATerm matrix_to_dfa_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm zip_1_0 (ATerm c_119 (ATerm), ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_115 (ATerm), ATerm);
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
ATerm repeat_1_0 (ATerm w_130 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm m_114 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm);
ATerm crush_3_0 (ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm);
ATerm collect_om_1_0 (ATerm z_123 (ATerm), ATerm);
ATerm collect_1_0 (ATerm a_124 (ATerm), ATerm);
ATerm collect_offsets_0_0 (ATerm);
ATerm CollectSubst_0_0 (ATerm);
ATerm IgnoreVar_0_0 (ATerm);
ATerm union_0_0 (ATerm);
ATerm HdMember_p__2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm);
ATerm union_1_0 (ATerm o_122 (ATerm), ATerm);
ATerm unions_1_0 (ATerm q_122 (ATerm), ATerm);
ATerm unions_0_0 (ATerm);
ATerm unzip_1_0 (ATerm h_119 (ATerm), ATerm);
ATerm CollectSplit_2_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm);
ATerm collect_split_2_0 (ATerm n_124 (ATerm), ATerm o_124 (ATerm), ATerm);
ATerm collect_substitutions_0_0 (ATerm);
ATerm Annotate_1_0 (ATerm p_112 (ATerm), ATerm);
ATerm NZip2_0_0 (ATerm);
ATerm genzip_4_0 (ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm);
ATerm nzip0_1_0 (ATerm i_119 (ATerm), ATerm);
ATerm Propagate_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_114 (ATerm), ATerm);
ATerm term_to_matrix_0_0 (ATerm);
ATerm MatchToMatrix_0_0 (ATerm);
ATerm Scope_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm);
ATerm match_to_matrix_0_0 (ATerm);
ATerm match_to_dfa_0_0 (ATerm);
ATerm SDefT_4_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm c_98 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm apply_to_bodies_1_0 (ATerm m_112 (ATerm), ATerm);
ATerm _2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm d_121 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_137 (ATerm), ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm k_136 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_139 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm w_135 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm);
ATerm crush_2_0 (ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_137 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm k_140 (ATerm), ATerm);
ATerm map_1_0 (ATerm m_120 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm g_112 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_112 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm x_120 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_141 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm d_117 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_142 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_142 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm m_142 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm q_139 (ATerm), ATerm);
ATerm compile_match_comp_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm spaste_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  ATerm j_10 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2_0(_id, p_113, t);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm z_0 = NULL,b_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL;
            if(match_cons(t, sym__2))
              {
                z_0 = ATgetArgument(t, 0);
                e_1 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_0;
            {
              ATerm e_12 = t;
              int f_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm g_12 = ATgetArgument(t, 0);
                      b_1 = ATgetArgument(t, 1);
                      c_1 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_12);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, e_1, b_1, c_1);
                }
              else
                {
                  t = e_12;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm k_12 = ATgetArgument(t, 0);
                      b_1 = ATgetArgument(t, 1);
                      c_1 = ATgetArgument(t, 2);
                      d_1 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_1, b_1, c_1, d_1);
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
      LocalPopChoice(d_12);
    }
  else
    {
      t = j_10;
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
            {
              t = split_2_0(_id, p_113, t);
              {
                ATerm j_0 (ATerm t)
                {
                  ATerm q_1 = NULL,s_1 = NULL,t_1 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      q_1 = ATgetArgument(t, 0);
                      t_1 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_1;
                  {
                    ATerm n_12 = t;
                    int q_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm r_12 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_12);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_1);
                      }
                    else
                      {
                        t = n_12;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm s_12 = ATgetArgument(t, 0);
                            s_1 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, t_1, s_1);
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
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            {
              ATerm x_12 = t;
              int y_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_0 (ATerm t)
                  {
                    t = split_2_0(_id, p_113, t);
                    {
                      ATerm x_0 (ATerm t)
                      {
                        ATerm a_2 = NULL,c_2 = NULL,d_2 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            a_2 = ATgetArgument(t, 0);
                            d_2 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = a_2;
                        {
                          ATerm b_13 = t;
                          int c_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm d_13 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(c_13);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_2);
                            }
                          else
                            {
                              t = b_13;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm e_13 = ATgetArgument(t, 0);
                                  c_2 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, d_2, c_2);
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
                  LocalPopChoice(y_12);
                }
              else
                {
                  t = x_12;
                  {
                    ATerm f_13 = t;
                    int j_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_0 (ATerm t)
                        {
                          t = split_2_0(_id, p_113, t);
                          {
                            ATerm a_1 (ATerm t)
                            {
                              ATerm i_2 = NULL,k_2 = NULL,l_2 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  i_2 = ATgetArgument(t, 0);
                                  l_2 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = i_2;
                              {
                                ATerm k_13 = t;
                                int l_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm m_13 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(l_13);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_2);
                                  }
                                else
                                  {
                                    t = k_13;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm n_13 = ATgetArgument(t, 0);
                                        k_2 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, l_2, k_2);
                                  }
                              }
                              return(t);
                            }
                            t = zip_1_0(a_1, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, y_0, _id, _id, t);
                        ;
                        LocalPopChoice(j_13);
                      }
                    else
                      {
                        t = f_13;
                        {
                          ATerm g_1 (ATerm t)
                          {
                            ATerm p_2 = NULL;
                            t = p_113(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                p_2 = ATgetFirst((ATermList) t);
                                {
                                  ATerm p_13 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = p_2;
                            return(t);
                          }
                          t = Rec_2_0(g_1, _id, t);
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
ATerm Rec_2_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL;
  v_2 = t;
  if(match_cons(t, sym_Rec_2))
    {
      r_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_2);
  q_2 = t;
  t = r_2;
  t = h_103(t);
  t_2 = t;
  t = s_2;
  t = i_103(t);
  u_2 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, t_2, u_2), q_2);
  return(t);
}
ATerm Let_2_0 (ATerm k_102 (ATerm), ATerm l_102 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  e_3 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_3);
  y_2 = t;
  t = z_2;
  t = k_102(t);
  c_3 = t;
  t = a_3;
  t = l_102(t);
  d_3 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, c_3, d_3), y_2);
  return(t);
}
ATerm sboundin_3_0 (ATerm q_113 (ATerm), ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t)
{
  ATerm q_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(q_113, q_113, t);
      ;
      LocalPopChoice(r_13);
    }
  else
    {
      t = q_13;
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(s_113, s_113, q_113, t);
            ;
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm u_13 = t;
              int v_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(s_113, s_113, s_113, q_113, t);
                  ;
                  LocalPopChoice(v_13);
                }
              else
                {
                  t = u_13;
                  t = Rec_2_0(s_113, q_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm h_3 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
      {
        ATerm x_13 = ATgetArgument(t, 2);
      }
      {
        ATerm y_13 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = h_3;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm j_3 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm z_13 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      {
        ATerm a_14 = ATgetArgument(t, 2);
      }
      {
        ATerm c_14 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = j_3;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm k_3 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm d_14 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
      {
        ATerm e_14 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = k_3;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm m_3 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      m_3 = ATgetArgument(t, 0);
      {
        ATerm g_14 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_3;
  {
    ATerm h_1 (ATerm t)
    {
      ATerm q_3 = NULL;
      ATerm h_14 = t;
      int i_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              q_3 = ATgetArgument(t, 0);
              {
                ATerm j_14 = ATgetArgument(t, 1);
              }
              {
                ATerm k_14 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(i_14);
          t = q_3;
        }
      else
        {
          t = h_14;
          if(match_cons(t, sym_SDefT_4))
            {
              q_3 = ATgetArgument(t, 0);
              {
                ATerm l_14 = ATgetArgument(t, 1);
              }
              {
                ATerm m_14 = ATgetArgument(t, 2);
              }
              {
                ATerm n_14 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = q_3;
        }
      return(t);
    }
    t = map_1_0(h_1, t);
  }
  return(t);
}
ATerm SVar_1_0 (ATerm j_102 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,d_4 = NULL,j_4 = NULL,k_4 = NULL;
  k_4 = t;
  if(match_cons(t, sym_SVar_1))
    {
      d_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_4);
  b_4 = t;
  t = d_4;
  t = j_102(t);
  j_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, j_4), b_4);
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              {
                ATerm s_14 = t;
                int t_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_4 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        z_4 = ATgetArgument(t, 0);
                        {
                          ATerm u_14 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, z_4);
                    ;
                    LocalPopChoice(t_14);
                  }
                else
                  {
                    t = s_14;
                    {
                      ATerm v_14 = t;
                      int w_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(w_14);
                        }
                      else
                        {
                          t = v_14;
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
  t = rename_4_0(SVar_1_0, i_1, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm tpaste_1_0 (ATerm l_113 (ATerm), ATerm t)
{
  ATerm x_14 = t;
  int z_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(l_113, _id, t);
      ;
      LocalPopChoice(z_14);
    }
  else
    {
      t = x_14;
      {
        ATerm b_15 = t;
        int d_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_1 (ATerm t)
            {
              t = split_2_0(_id, l_113, t);
              {
                ATerm k_1 (ATerm t)
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
                    ATerm e_15 = t;
                    int f_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm g_15 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(f_15);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_5);
                      }
                    else
                      {
                        t = e_15;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm h_15 = ATgetArgument(t, 0);
                            l_5 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_5, l_5);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(k_1, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, j_1, _id, t);
            ;
            LocalPopChoice(d_15);
          }
        else
          {
            t = b_15;
            {
              ATerm l_1 (ATerm t)
              {
                t = split_2_0(_id, l_113, t);
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm u_5 = NULL,w_5 = NULL,y_5 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        u_5 = ATgetArgument(t, 0);
                        y_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = u_5;
                    {
                      ATerm i_15 = t;
                      int j_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm k_15 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_15);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_5);
                        }
                      else
                        {
                          t = i_15;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm m_15 = ATgetArgument(t, 0);
                              w_5 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, y_5, w_5);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(m_1, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, l_1, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DistBinding_2_0 (ATerm n_127 (ATerm), ATerm o_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  if(match_cons(t, sym__3))
    {
      f_6 = ATgetArgument(t, 0);
      e_6 = ATgetArgument(t, 1);
      d_6 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_6;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm g_6 = NULL;
      g_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_6, d_6);
      t = n_127(t);
      return(t);
    }
    ATerm o_1 (ATerm t)
    {
      ATerm h_6 = NULL;
      h_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_6, e_6);
      t = n_127(t);
      return(t);
    }
    t = o_127(n_1, o_1, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm h_127 (ATerm), ATerm i_127 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,s_6 = NULL,u_6 = NULL,y_6 = NULL,a_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      k_6 = ATgetArgument(t, 0);
      l_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6;
  t = h_127(t);
  s_6 = t;
  t = map_1_0(new_0_0, t);
  u_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_6, u_6);
  t = zip_1_0(_id, t);
  y_6 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_6, l_6);
  t = conc_0_0(t);
  a_7 = t;
  t = k_6;
  {
    ATerm p_1 (ATerm t)
    {
      t = u_6;
      return(t);
    }
    t = i_127(p_1, t);
    i_7 = t;
    t = (ATerm) ATmakeAppl(sym__3, i_7, l_6, a_7);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm u_7 = NULL,a_8 = NULL,i_8 = NULL,k_8 = NULL,o_8 = NULL,s_8 = NULL;
  if(match_cons(t, sym__2))
    {
      i_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_8;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_8 = ATgetFirst((ATermList) t);
      s_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_8;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_7;
            if((i_8 != t))
              {
                _fail(t);
              }
            t = a_8;
            ;
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            t = (ATerm) ATmakeAppl(sym__2, i_8, s_8);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, i_8, s_8);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm s_127 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      l_10 = ATgetArgument(t, 0);
      k_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_10;
  {
    ATerm r_1 (ATerm t)
    {
      ATerm u_1 (ATerm t)
      {
        t = k_10;
        return(t);
      }
      t = split_2_0(_id, u_1, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = s_127(r_1, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm l_128 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      p_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_10;
  {
    ATerm v_1 (ATerm t)
    {
      ATerm u_10 = NULL;
      u_10 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_10, m_10);
      t = l_128(t);
      return(t);
    }
    t = SRTS_all(v_1, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm v_127 (ATerm), ATerm t)
{
  ATerm f_11 (ATerm t)
  {
    ATerm p_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_127(t);
        ;
        LocalPopChoice(q_15);
      }
    else
      {
        t = p_15;
        t = all_dist_1_0(f_11, t);
      }
    return(t);
  }
  t = f_11(t);
  return(t);
}
ATerm rename_4_0 (ATerm c_127 (ATerm (ATerm), ATerm), ATerm d_127 (ATerm), ATerm e_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm f_127 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_11 = NULL;
  x_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_11, (ATerm) ATempty);
  {
    ATerm z_11 (ATerm t)
    {
      ATerm w_1 (ATerm t)
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(c_127, t);
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            t = RnBinding_2_0(d_127, f_127, t);
            t = DistBinding_2_0(z_11, e_127, t);
          }
        return(t);
      }
      t = env_alltd_1_0(w_1, t);
      return(t);
    }
    t = z_11(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm t_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(u_15);
      }
    else
      {
        t = t_15;
        {
          ATerm v_15 = t;
          int w_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(w_15);
            }
          else
            {
              t = v_15;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, x_1, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm Seqs_1_0 (ATerm r_106 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  j_12 = t;
  if(match_cons(t, sym_Seqs_1))
    {
      h_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_12);
  a_12 = t;
  t = h_12;
  t = r_106(t);
  i_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seqs_1, i_12), a_12);
  return(t);
}
ATerm CallT_3_0 (ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm q_102 (ATerm), ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,z_12 = NULL,a_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym_CallT_3))
    {
      p_12 = ATgetArgument(t, 0);
      t_12 = ATgetArgument(t, 1);
      u_12 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_13);
  o_12 = t;
  t = p_12;
  t = o_102(t);
  v_12 = t;
  t = t_12;
  t = p_102(t);
  w_12 = t;
  t = u_12;
  t = q_102(t);
  z_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_CallT_3, v_12, w_12, z_12), o_12);
  return(t);
}
ATerm Prim_2_0 (ATerm o_103 (ATerm), ATerm p_103 (ATerm), ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,o_13 = NULL,b_14 = NULL,f_14 = NULL;
  f_14 = t;
  if(match_cons(t, sym_Prim_2))
    {
      h_13 = ATgetArgument(t, 0);
      i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_14);
  g_13 = t;
  t = h_13;
  t = o_103(t);
  o_13 = t;
  t = i_13;
  t = p_103(t);
  b_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, o_13, b_14), g_13);
  return(t);
}
ATerm Var_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm y_14 = NULL,a_15 = NULL,c_15 = NULL,l_15 = NULL;
  l_15 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_15);
  y_14 = t;
  t = a_15;
  t = a_99(t);
  c_15 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, c_15), y_14);
  return(t);
}
ATerm Match_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,v_16 = NULL,w_16 = NULL;
  w_16 = t;
  if(match_cons(t, sym_Match_1))
    {
      z_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_16);
  y_15 = t;
  t = z_15;
  t = r_102(t);
  v_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, v_16), y_15);
  return(t);
}
ATerm Assign_2_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm t)
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,m_17 = NULL,r_17 = NULL,x_17 = NULL;
  x_17 = t;
  if(match_cons(t, sym_Assign_2))
    {
      j_17 = ATgetArgument(t, 0);
      k_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_17);
  i_17 = t;
  t = j_17;
  t = c_106(t);
  m_17 = t;
  t = k_17;
  t = d_106(t);
  r_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Assign_2, m_17, r_17), i_17);
  return(t);
}
ATerm list_1_0 (ATerm q_120 (ATerm), ATerm t)
{
  ATerm e_18 (ATerm t)
  {
    ATerm x_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = x_15;
        t = Cons_2_0(q_120, e_18, t);
      }
    return(t);
  }
  t = e_18(t);
  return(t);
}
ATerm Op_2_0 (ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,k_18 = NULL,o_18 = NULL,t_18 = NULL,u_18 = NULL;
  u_18 = t;
  if(match_cons(t, sym_Op_2))
    {
      g_18 = ATgetArgument(t, 0);
      k_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_18);
  f_18 = t;
  t = g_18;
  t = g_99(t);
  o_18 = t;
  t = k_18;
  t = h_99(t);
  t_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, o_18, t_18), f_18);
  return(t);
}
ATerm Str_1_0 (ATerm e_99 (ATerm), ATerm t)
{
  ATerm f_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL;
  k_19 = t;
  if(match_cons(t, sym_Str_1))
    {
      i_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_19);
  f_19 = t;
  t = i_19;
  t = e_99(t);
  j_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, j_19), f_19);
  return(t);
}
ATerm Real_1_0 (ATerm d_99 (ATerm), ATerm t)
{
  ATerm c_20 = NULL,g_20 = NULL,i_20 = NULL,m_20 = NULL;
  m_20 = t;
  if(match_cons(t, sym_Real_1))
    {
      g_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_20);
  c_20 = t;
  t = g_20;
  t = d_99(t);
  i_20 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, i_20), c_20);
  return(t);
}
ATerm Int_1_0 (ATerm c_99 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,c_21 = NULL,f_21 = NULL;
  f_21 = t;
  if(match_cons(t, sym_Int_1))
    {
      q_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_21);
  p_20 = t;
  t = q_20;
  t = c_99(t);
  c_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, c_21), p_20);
  return(t);
}
ATerm Build_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm i_21 = NULL,k_21 = NULL,m_21 = NULL,r_21 = NULL;
  r_21 = t;
  if(match_cons(t, sym_Build_1))
    {
      k_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_21);
  i_21 = t;
  t = k_21;
  t = s_102(t);
  m_21 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, m_21), i_21);
  return(t);
}
ATerm simple_strategy_0_0 (ATerm t)
{
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(!(match_cons(t, sym_Fail_0)))
              _fail(t);
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm f_16 = t;
              int g_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_1 (ATerm t)
                  {
                    ATerm h_16 = t;
                    int i_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Var_1_0(_id, t);
                        ;
                        LocalPopChoice(i_16);
                      }
                    else
                      {
                        t = h_16;
                        {
                          ATerm j_16 = t;
                          int k_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Int_1_0(_id, t);
                              ;
                              LocalPopChoice(k_16);
                            }
                          else
                            {
                              t = j_16;
                              {
                                ATerm l_16 = t;
                                int m_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Real_1_0(_id, t);
                                    ;
                                    LocalPopChoice(m_16);
                                  }
                                else
                                  {
                                    t = l_16;
                                    {
                                      ATerm n_16 = t;
                                      int o_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = Str_1_0(_id, t);
                                          ;
                                          LocalPopChoice(o_16);
                                        }
                                      else
                                        {
                                          t = n_16;
                                          {
                                            ATerm z_1 (ATerm t)
                                            {
                                              t = list_1_0(y_1, t);
                                              return(t);
                                            }
                                            t = Op_2_0(_id, z_1, t);
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
                  t = Build_1_0(y_1, t);
                  ;
                  LocalPopChoice(g_16);
                }
              else
                {
                  t = f_16;
                  {
                    ATerm p_16 = t;
                    int q_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_2 (ATerm t)
                        {
                          t = Var_1_0(_id, t);
                          return(t);
                        }
                        ATerm e_2 (ATerm t)
                        {
                          t = Var_1_0(_id, t);
                          return(t);
                        }
                        t = Assign_2_0(b_2, e_2, t);
                        ;
                        LocalPopChoice(q_16);
                      }
                    else
                      {
                        t = p_16;
                        {
                          ATerm r_16 = t;
                          int s_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_2 (ATerm t)
                              {
                                t = Var_1_0(_id, t);
                                return(t);
                              }
                              t = Match_1_0(f_2, t);
                              ;
                              LocalPopChoice(s_16);
                            }
                          else
                            {
                              t = r_16;
                              {
                                ATerm t_16 = t;
                                int u_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Prim_2_0(_id, _id, t);
                                    ;
                                    LocalPopChoice(u_16);
                                  }
                                else
                                  {
                                    t = t_16;
                                    {
                                      ATerm x_16 = t;
                                      int y_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = CallT_3_0(_id, _id, _id, t);
                                          ;
                                          LocalPopChoice(y_16);
                                        }
                                      else
                                        {
                                          t = x_16;
                                          {
                                            ATerm z_16 = t;
                                            int a_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = Seq_2_0(simple_strategy_0_0, simple_strategy_0_0, t);
                                                ;
                                                LocalPopChoice(a_17);
                                              }
                                            else
                                              {
                                                t = z_16;
                                                {
                                                  ATerm b_17 = t;
                                                  int c_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_2 (ATerm t)
                                                      {
                                                        t = map_1_0(simple_strategy_0_0, t);
                                                        return(t);
                                                      }
                                                      t = Seqs_1_0(g_2, t);
                                                      ;
                                                      LocalPopChoice(c_17);
                                                    }
                                                  else
                                                    {
                                                      t = b_17;
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
ATerm isect_1_0 (ATerm i_122 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      e_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_22;
  {
    ATerm r_22 (ATerm t)
    {
      ATerm d_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(e_17);
        }
      else
        {
          t = d_17;
          {
            ATerm f_22 = NULL,j_22 = NULL;
            f_22 = t;
            {
              ATerm f_17 = t;
              int g_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm h_17 = ATgetFirst((ATermList) t);
                      j_22 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_17);
                  {
                    ATerm l_17 = t;
                    int n_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_22;
                        {
                          ATerm h_2 (ATerm t)
                          {
                            t = d_22;
                            return(t);
                          }
                          t = HdMember_p__2_0(i_122, h_2, t);
                          t = f_22;
                          t = Cons_2_0(_id, r_22, t);
                        }
                        ;
                        LocalPopChoice(n_17);
                      }
                    else
                      {
                        t = l_17;
                        t = j_22;
                        t = r_22(t);
                      }
                  }
                }
              else
                {
                  t = f_17;
                  t = f_22;
                  {
                    ATerm j_2 (ATerm t)
                    {
                      t = d_22;
                      return(t);
                    }
                    t = HdMember_p__2_0(i_122, j_2, t);
                    t = f_22;
                    t = Cons_2_0(_id, r_22, t);
                  }
                }
            }
          }
        }
      return(t);
    }
    t = r_22(t);
  }
  return(t);
}
ATerm isect_0_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm s_22 = NULL;
    if(match_cons(t, sym__2))
      {
        s_22 = ATgetArgument(t, 0);
        if((s_22 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = isect_1_0(m_2, t);
  return(t);
}
ATerm Matrix_2_0 (ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,j_23 = NULL;
  j_23 = t;
  if(match_cons(t, sym_Matrix_2))
    {
      y_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_23);
  x_22 = t;
  t = y_22;
  t = l_105(t);
  a_23 = t;
  t = z_22;
  t = m_105(t);
  b_23 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Matrix_2, a_23, b_23), x_22);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm n_143 (ATerm), ATerm o_143 (ATerm), ATerm p_143 (ATerm), ATerm t)
{
  ATerm o_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(n_143, o_143, p_143, t);
      ;
      LocalPopChoice(p_17);
    }
  else
    {
      t = o_17;
      t = Matrix_2_0(p_143, n_143, t);
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm m_23 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm q_17 = ATgetArgument(t, 0);
      ATerm s_17 = ATgetArgument(t, 1);
      m_23 = ATgetArgument(t, 2);
      {
        ATerm t_17 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = m_23;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    ATerm u_23 = NULL;
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            u_23 = ATgetArgument(t, 0);
            {
              ATerm w_17 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(v_17);
        t = u_23;
      }
    else
      {
        t = u_17;
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
  t = map_1_0(n_2, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm y_23 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm y_17 = ATgetArgument(t, 0);
      ATerm z_17 = ATgetArgument(t, 1);
      y_23 = ATgetArgument(t, 2);
      {
        ATerm a_18 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = y_23;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm a_24 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      a_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_24;
  t = tvars_0_0(t);
  return(t);
}
ATerm DynamicRules_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  ATerm c_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  g_24 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      e_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_24);
  c_24 = t;
  t = e_24;
  t = r_101(t);
  f_24 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, f_24), c_24);
  return(t);
}
ATerm RDefT_4_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm l_101 (ATerm), ATerm t)
{
  ATerm c_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  t_25 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      l_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
      n_25 = ATgetArgument(t, 2);
      o_25 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_25);
  c_25 = t;
  t = l_25;
  t = i_101(t);
  p_25 = t;
  t = m_25;
  t = j_101(t);
  q_25 = t;
  t = n_25;
  t = k_101(t);
  r_25 = t;
  t = o_25;
  t = l_101(t);
  s_25 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, p_25, q_25, r_25, s_25), c_25);
  return(t);
}
ATerm tboundin_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(o_113, m_113, t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      {
        ATerm d_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(o_113, o_113, o_113, m_113, t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = d_18;
            {
              ATerm i_18 = t;
              int j_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(o_113, o_113, o_113, m_113, t);
                  ;
                  LocalPopChoice(j_18);
                }
              else
                {
                  t = i_18;
                  t = DynamicRules_1_0(m_113, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm o_2 (ATerm t)
  {
    ATerm w_25 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        w_25 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, w_25);
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        {
          ATerm n_18 = t;
          int p_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(p_18);
            }
          else
            {
              t = n_18;
              {
                ATerm q_18 = t;
                int r_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(r_18);
                  }
                else
                  {
                    t = q_18;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(o_2, w_2, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_25 = NULL,d_26 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      d_26 = ATgetArgument(t, 0);
      t = d_26;
      if(match_cons(t, sym_Rule_3))
        {
          z_25 = ATgetArgument(t, 0);
          {
            ATerm s_18 = ATgetArgument(t, 1);
          }
          {
            ATerm v_18 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_25;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          d_26 = ATgetArgument(t, 0);
          {
            ATerm w_18 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_26;
    }
  return(t);
}
ATerm diff_1_0 (ATerm k_122 (ATerm), ATerm t)
{
  ATerm h_26 = NULL,i_26 = NULL;
  if(match_cons(t, sym__2))
    {
      i_26 = ATgetArgument(t, 0);
      h_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_26;
  {
    ATerm j_26 (ATerm t)
    {
      ATerm x_18 = t;
      int y_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(y_18);
        }
      else
        {
          t = x_18;
          {
            ATerm z_18 = t;
            int a_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_2 (ATerm t)
                {
                  t = h_26;
                  return(t);
                }
                t = HdMember_p__2_0(k_122, x_2, t);
                t = j_26(t);
                ;
                LocalPopChoice(a_19);
              }
            else
              {
                t = z_18;
                t = Cons_2_0(_id, j_26, t);
              }
          }
        }
      return(t);
    }
    t = j_26(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_19 = ATgetFirst((ATermList) t);
      if(match_cons(b_19, sym__2))
        {
          k_26 = ATgetArgument(b_19, 0);
          l_26 = ATgetArgument(b_19, 1);
        }
      else
        _fail(t);
      m_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(l_26);
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_26);
  if(match_cons(t, sym__2))
    {
      if((n_26 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_26, o_26);
  t = zip_1_0(_id, t);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_26, m_26);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm t)
{
  ATerm r_26 (ATerm t)
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_131(t);
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        t = m_131(t);
        t = r_26(t);
      }
    return(t);
  }
  t = r_26(t);
  return(t);
}
ATerm for_3_0 (ATerm o_131 (ATerm), ATerm p_131 (ATerm), ATerm q_131 (ATerm), ATerm t)
{
  t = o_131(t);
  t = while_not_2_0(p_131, q_131, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm e_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm w_26 = NULL;
        w_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_26);
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, i_3, t);
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        ATerm h_19 = t;
        int l_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm m_19 = t;
              int n_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_26 = ATgetFirst((ATermList) t);
                      b_27 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = y_26;
                  if(match_cons(t, sym__2))
                    {
                      z_26 = ATgetArgument(t, 0);
                      a_27 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = a_27;
                  if((z_26 != t))
                    {
                      _fail(t);
                    }
                  t = b_27;
                  ;
                  LocalPopChoice(n_19);
                }
              else
                {
                  t = m_19;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, l_3, t);
            ;
            LocalPopChoice(l_19);
          }
        else
          {
            t = h_19;
            {
              ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL;
              if(match_cons(t, sym__2))
                {
                  f_27 = ATgetArgument(t, 0);
                  g_27 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_27;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_27 = ATgetFirst((ATermList) t);
                  i_27 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_27), h_27), i_27);
            }
          }
        return(t);
      }
      t = for_3_0(b_3, f_3, g_3, t);
      ;
      LocalPopChoice(g_19);
    }
  else
    {
      t = e_19;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm m_27 = NULL;
          if(match_cons(t, sym__2))
            {
              m_27 = ATgetArgument(t, 0);
              if((m_27 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(n_3, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm h_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_27 (ATerm t)
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_129(t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        {
          ATerm q_19 = t;
          int r_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_27 = NULL,p_27 = NULL;
              n_27 = t;
              t = g_129(t);
              p_27 = t;
              t = n_27;
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm r_3 (ATerm t)
                  {
                    t = p_27;
                    return(t);
                  }
                  t = split_2_0(q_27, r_3, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm p_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = h_129(o_3, q_27, p_3, t);
                {
                  ATerm s_3 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(s_3, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(r_19);
            }
          else
            {
              t = q_19;
              {
                ATerm t_3 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(t_3, union_0_0, q_27, t);
              }
            }
        }
      }
    return(t);
  }
  t = q_27(t);
  return(t);
}
ATerm tvars_matrix_0_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
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
  ATerm v_3 (ATerm t)
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        {
          ATerm u_19 = t;
          int v_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(v_19);
            }
          else
            {
              t = u_19;
              {
                ATerm w_19 = t;
                int x_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(x_19);
                  }
                else
                  {
                    t = w_19;
                    {
                      ATerm y_19 = t;
                      int z_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind8_0_0(t);
                          ;
                          LocalPopChoice(z_19);
                        }
                      else
                        {
                          t = y_19;
                          {
                            ATerm u_27 = NULL;
                            if(match_cons(t, sym_Matrix_2))
                              {
                                u_27 = ATgetArgument(t, 0);
                                {
                                  ATerm a_20 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            t = u_27;
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
  t = free_vars_3_0(u_3, v_3, tvars_matrix_boundin_3_0, t);
  return(t);
}
ATerm RowLet_1_0 (ATerm u_0 (ATerm), ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  if(match_cons(t, sym_Row_2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL,v_0 = NULL;
        t = m_28;
        {
          ATerm e_20 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_20;
            }
          t = new_0_0(t);
          o_0 = t;
          t = m_28;
          t = tvars_matrix_0_0(t);
          p_0 = t;
          t = u_0(t);
          r_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_0, r_0);
          t = isect_0_0(t);
          {
            ATerm w_3 (ATerm t)
            {
              ATerm w_0 = NULL;
              w_0 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, w_0, term_j_20), (ATerm) ATmakeAppl(sym_Var_1, w_0));
              return(t);
            }
            t = unzip_1_0(w_3, t);
            if(match_cons(t, sym__2))
              {
                s_0 = ATgetArgument(t, 0);
                v_0 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, o_0, (ATerm)ATempty, s_0, m_28)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, l_28, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_0), (ATerm)ATempty, v_0)));
          }
        }
        ;
        LocalPopChoice(d_20);
      }
    else
      {
        t = b_20;
        t = m_28;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, l_28, m_28));
      }
  }
  return(t);
}
ATerm MatrixScope_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  if(match_cons(t, sym_Matrix_2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_28;
  {
    ATerm x_3 (ATerm t)
    {
      ATerm y_3 (ATerm t)
      {
        t = q_28;
        return(t);
      }
      t = RowLet_1_0(y_3, t);
      return(t);
    }
    t = unzip_1_0(x_3, t);
    t = _2_0(concat_0_0, _id, t);
    if(match_cons(t, sym__2))
      {
        s_28 = ATgetArgument(t, 0);
        t_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Let_2, s_28, (ATerm) ATmakeAppl(sym_Scope_2, q_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_k_20))), (ATerm) ATmakeAppl(sym_Matrix_1, t_28))));
  }
  return(t);
}
ATerm assert_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  if(match_cons(t, sym__2))
    {
      u_28 = ATgetArgument(t, 0);
      v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_126(t);
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_28, u_28, v_28);
  t = table_push_0_0(t);
  {
    ATerm l_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_28, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = l_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_28 = ATgetFirst((ATermList) t);
        y_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_28, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(y_28), (ATerm) ATinsert(CheckATermList(x_28), u_28)));
    t = (ATerm) ATmakeAppl(sym__2, u_28, v_28);
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
  ATerm z_28 = NULL;
  ATerm z_3 (ATerm t)
  {
    ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
    if(match_cons(t, sym_Row_3))
      {
        ATerm o_20 = ATgetArgument(t, 0);
        if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
          {
            ATerm r_20 = ATgetFirst((ATermList) o_20);
            if(match_cons(r_20, sym_As_2))
              {
                ATerm s_20 = ATgetArgument(r_20, 0);
                ATerm t_20 = ATgetArgument(r_20, 1);
                if(!(match_cons(t_20, sym_Wld_0)))
                  _fail(t);
              }
            else
              _fail(t);
            a_29 = (ATerm) ATgetNext((ATermList) o_20);
          }
        else
          _fail(t);
        b_29 = ATgetArgument(t, 1);
        c_29 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Row_3, a_29, b_29, c_29);
    return(t);
  }
  t = filter_1_0(z_3, t);
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, z_28);
  return(t);
}
ATerm MatchCons_2_0 (ATerm q_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
  y_29 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = y_29;
      t = t_0(t);
      {
        ATerm e_4 (ATerm t)
        {
          ATerm b_30 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              b_30 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, b_30), term_u_20);
          return(t);
        }
        t = map_1_0(e_4, t);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          z_29 = ATgetArgument(t, 0);
          t = y_29;
          t = q_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((z_29 != ATgetArgument(t, 0)))
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
              z_29 = ATgetArgument(t, 0);
              t = y_29;
              t = q_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((z_29 != ATgetArgument(t, 0)))
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
                  z_29 = ATgetArgument(t, 0);
                  t = y_29;
                  t = q_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((z_29 != ATgetArgument(t, 0)))
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
                  ATerm a_4 = NULL,c_4 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      z_29 = ATgetArgument(t, 0);
                      a_30 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_29;
                  t = q_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((z_29 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      a_4 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = a_30;
                  t = length_0_0(t);
                  c_4 = t;
                  t = a_4;
                  if((c_4 != t))
                    {
                      _fail(t);
                    }
                  t = a_30;
                }
            }
        }
    }
  return(t);
}
ATerm ConsTransition_1_0 (ATerm y_142 (ATerm), ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL,l_30 = NULL,m_30 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm v_20 = ATgetArgument(t, 0);
      if(((ATgetType(v_20) == AT_LIST) && !(ATisEmpty(v_20))))
        {
          ATerm w_20 = ATgetFirst((ATermList) v_20);
          if(match_cons(w_20, sym_As_2))
            {
              ATerm x_20 = ATgetArgument(w_20, 0);
              g_30 = ATgetArgument(w_20, 1);
            }
          else
            _fail(t);
          h_30 = (ATerm) ATgetNext((ATermList) v_20);
        }
      else
        _fail(t);
      i_30 = ATgetArgument(t, 1);
      j_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_30;
  t = y_142(t);
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_30, i_30);
  t = conc_0_0(t);
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, h_30, m_30, j_30);
  return(t);
}
ATerm Transition_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL;
  if(match_cons(t, sym__2))
    {
      n_30 = ATgetArgument(t, 0);
      {
        ATerm y_20 = ATgetArgument(t, 1);
        if(match_cons(y_20, sym__2))
          {
            o_30 = ATgetArgument(y_20, 0);
            p_30 = ATgetArgument(y_20, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_30;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm i_4 (ATerm t)
      {
        ATerm l_4 (ATerm t)
        {
          t = o_30;
          return(t);
        }
        ATerm m_4 (ATerm t)
        {
          t = p_30;
          return(t);
        }
        t = MatchCons_2_0(l_4, m_4, t);
        return(t);
      }
      t = ConsTransition_1_0(i_4, t);
      return(t);
    }
    t = filter_1_0(g_4, t);
    q_30 = t;
    t = (ATerm) ATmakeAppl(sym_Alt_3, o_30, p_30, (ATerm) ATmakeAppl(sym_Matrix_1, q_30));
  }
  return(t);
}
ATerm rzip_1_0 (ATerm l_119 (ATerm), ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm z_20 = ATgetArgument(t, 0);
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) != AT_LIST) || !(ATisEmpty(a_21))))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
    if(match_cons(t, sym__2))
      {
        s_30 = ATgetArgument(t, 0);
        {
          ATerm b_21 = ATgetArgument(t, 1);
          if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
            {
              r_30 = ATgetFirst((ATermList) b_21);
              t_30 = (ATerm) ATgetNext((ATermList) b_21);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_30, r_30), (ATerm) ATmakeAppl(sym__2, s_30, t_30));
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm u_30 = NULL,v_30 = NULL;
    if(match_cons(t, sym__2))
      {
        u_30 = ATgetArgument(t, 0);
        v_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(v_30), u_30);
    return(t);
  }
  t = genzip_4_0(n_4, o_4, p_4, l_119, t);
  return(t);
}
ATerm transitions_0_0 (ATerm t)
{
  t = rzip_1_0(Transition_0_0, t);
  return(t);
}
ATerm Uniq_0_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_30 = ATgetFirst((ATermList) t);
      x_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_30;
  {
    ATerm q_4 (ATerm t)
    {
      ATerm d_21 = t;
      if((PushChoice() == 0))
        {
          if((w_30 != t))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_21;
        }
      return(t);
    }
    t = filter_1_0(q_4, t);
    y_30 = t;
    t = (ATerm) ATinsert(CheckATermList(y_30), w_30);
  }
  return(t);
}
ATerm listtd_1_0 (ATerm w_121 (ATerm), ATerm t)
{
  ATerm z_30 (ATerm t)
  {
    t = w_121(t);
    {
      ATerm e_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(g_21);
        }
      else
        {
          t = e_21;
          t = Cons_2_0(_id, z_30, t);
        }
    }
    return(t);
  }
  t = z_30(t);
  return(t);
}
ATerm uniq_0_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    t = try_1_0(Uniq_0_0, t);
    return(t);
  }
  t = listtd_1_0(r_4, t);
  return(t);
}
ATerm offsets_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm a_31 = NULL;
    if(match_cons(t, sym_As_2))
      {
        ATerm h_21 = ATgetArgument(t, 0);
        if(match_cons(h_21, sym_Off_1))
          {
            a_31 = ATgetArgument(h_21, 0);
          }
        else
          _fail(t);
        {
          ATerm j_21 = ATgetArgument(t, 1);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Var_1, a_31);
    return(t);
  }
  t = map_1_0(s_4, t);
  return(t);
}
ATerm length_0_0 (ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    t = term_k_20;
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm b_31 = NULL,c_31 = NULL;
    if(match_cons(t, sym__2))
      {
        b_31 = ATgetArgument(t, 0);
        c_31 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm l_21 = t;
      int n_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_addi(b_31, c_31);
          ;
          LocalPopChoice(n_21);
        }
      else
        {
          t = l_21;
          t = SSL_addr(b_31, c_31);
        }
    }
    return(t);
  }
  ATerm v_4 (ATerm t)
  {
    t = term_o_21;
    return(t);
  }
  t = foldr_3_0(t_4, u_4, v_4, t);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  h_31 = t;
  if(match_cons(t, sym_Row_3))
    {
      i_31 = ATgetArgument(t, 0);
      {
        ATerm p_21 = ATgetArgument(t, 1);
      }
      {
        ATerm q_21 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = i_31;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_31 = ATgetFirst((ATermList) t);
      {
        ATerm s_21 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_31;
  if(match_cons(t, sym_As_2))
    {
      ATerm t_21 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_31;
  if(match_cons(t, sym_Str_1))
    {
      m_31 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, m_31), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          m_31 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, m_31), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              m_31 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, m_31), (ATerm) ATempty);
            }
          else
            {
              ATerm x_31 = NULL,y_31 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  m_31 = ATgetArgument(t, 0);
                  n_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_31;
              t = length_0_0(t);
              x_31 = t;
              t = n_31;
              t = offsets_0_0(t);
              y_31 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, m_31, x_31), y_31);
            }
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm q_126 (ATerm), ATerm t)
{
  ATerm u_21 = t;
  int v_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(v_21);
    }
  else
    {
      t = u_21;
      {
        ATerm w_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_4 (ATerm t)
            {
              t = filter_1_0(q_126, t);
              return(t);
            }
            t = Cons_2_0(q_126, w_4, t);
            ;
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
            {
              ATerm c_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm y_21 = ATgetFirst((ATermList) t);
                  c_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_32;
              t = filter_1_0(q_126, t);
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
  ATerm z_32 (ATerm k_32, ATerm t)
  {
    ATerm m_32 = NULL;
    t = SSL_explode_string(k_32);
    {
      ATerm z_21 = t;
      int a_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_33 (ATerm t)
          {
            ATerm b_22 = t;
            int c_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2_0(_id, a_33, t);
                ;
                LocalPopChoice(c_22);
              }
            else
              {
                t = b_22;
                {
                  ATerm x_4 (ATerm t)
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                      _fail(t);
                    return(t);
                  }
                  ATerm y_4 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = Cons_2_0(x_4, y_4, t);
                }
              }
            return(t);
          }
          t = a_33(t);
          ;
          LocalPopChoice(a_22);
        }
      else
        {
          t = z_21;
          t = (ATerm) ATempty;
        }
      m_32 = t;
      t = SSL_implode_string(m_32);
    }
    return(t);
  }
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,x_32 = NULL;
  x_32 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_32 = ATgetFirst((ATermList) t);
            {
              ATerm i_22 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_22);
        t = n_32;
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  o_32 = ATgetArgument(t, 0);
                  {
                    ATerm m_22 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm n_22 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(l_22);
              t = o_32;
              {
                ATerm o_22 = t;
                int p_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        p_32 = ATgetFirst((ATermList) t);
                        {
                          ATerm q_22 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_22);
                    t = p_32;
                    {
                      ATerm t_22 = t;
                      int u_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              q_32 = ATgetArgument(t, 0);
                              {
                                ATerm v_22 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(u_22);
                          t = q_32;
                          if(match_cons(t, sym_Off_1))
                            {
                              r_32 = ATgetArgument(t, 0);
                              {
                                ATerm w_22 = t;
                                int c_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = r_32;
                                    ;
                                    LocalPopChoice(c_23);
                                  }
                                else
                                  {
                                    t = w_22;
                                    t = z_32(x_32, t);
                                  }
                              }
                            }
                          else
                            {
                              t = z_32(x_32, t);
                            }
                        }
                      else
                        {
                          t = t_22;
                          t = z_32(x_32, t);
                        }
                    }
                  }
                else
                  {
                    t = o_22;
                    t = z_32(x_32, t);
                  }
              }
            }
          else
            {
              t = k_22;
              t = z_32(x_32, t);
            }
        }
      }
    else
      {
        t = g_22;
        t = z_32(x_32, t);
      }
  }
  return(t);
}
ATerm Mixture_0_0 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      b_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_33;
  t = get_path_0_0(t);
  c_33 = t;
  t = b_33;
  t = outedges_0_0(t);
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_33, d_33);
  t = transitions_0_0(t);
  e_33 = t;
  t = b_33;
  t = default_state_0_0(t);
  f_33 = t;
  t = new_0_0(t);
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, b_33), (ATerm) ATmakeAppl(sym_Defined_2, term_d_23, g_33));
  {
    ATerm a_5 (ATerm t)
    {
      t = term_e_23;
      return(t);
    }
    t = assert_1_0(a_5, t);
    t = (ATerm) ATmakeAppl(sym_Case_4, g_33, (ATerm)ATmakeAppl(sym_Var_1, c_33), e_33, f_33);
  }
  return(t);
}
ATerm ShiftColumn_0_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      h_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_33;
  {
    ATerm f_23 = t;
    if((PushChoice() == 0))
      {
        ATerm b_5 (ATerm t)
        {
          ATerm c_5 (ATerm t)
          {
            ATerm d_5 (ATerm t)
            {
              ATerm e_5 (ATerm t)
              {
                ATerm g_23 = t;
                if((PushChoice() == 0))
                  {
                    if(!(match_cons(t, sym_Wld_0)))
                      _fail(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_23;
                  }
                return(t);
              }
              t = As_2_0(_id, e_5, t);
              return(t);
            }
            t = Cons_2_0(d_5, _id, t);
            return(t);
          }
          t = Row_3_0(c_5, _id, _id, t);
          return(t);
        }
        t = map_1_0(b_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_23;
      }
    t = h_33;
    {
      ATerm f_5 (ATerm t)
      {
        ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
        if(match_cons(t, sym_Row_3))
          {
            k_33 = ATgetArgument(t, 0);
            {
              ATerm h_23 = ATgetArgument(t, 1);
              if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
                {
                  j_33 = ATgetFirst((ATermList) h_23);
                  l_33 = (ATerm) ATgetNext((ATermList) h_23);
                }
              else
                _fail(t);
            }
            m_33 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(k_33), j_33), l_33, m_33);
        return(t);
      }
      t = map_1_0(f_5, t);
      i_33 = t;
      t = (ATerm) ATmakeAppl(sym_Matrix_1, i_33);
    }
  }
  return(t);
}
ATerm As_2_0 (ATerm r_99 (ATerm), ATerm s_99 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  s_33 = t;
  if(match_cons(t, sym_As_2))
    {
      o_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_33);
  n_33 = t;
  t = o_33;
  t = r_99(t);
  q_33 = t;
  t = p_33;
  t = s_99(t);
  r_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, q_33, r_33), n_33);
  return(t);
}
ATerm Row_3_0 (ATerm i_105 (ATerm), ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,c_34 = NULL;
  c_34 = t;
  if(match_cons(t, sym_Row_3))
    {
      w_33 = ATgetArgument(t, 0);
      x_33 = ATgetArgument(t, 1);
      y_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_34);
  v_33 = t;
  t = w_33;
  t = i_105(t);
  z_33 = t;
  t = x_33;
  t = j_105(t);
  a_34 = t;
  t = y_33;
  t = k_105(t);
  b_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Row_3, z_33, a_34, b_34), v_33);
  return(t);
}
ATerm SkipWild_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      f_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_34;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm h_5 (ATerm t)
      {
        ATerm h_34 = NULL;
        ATerm k_5 (ATerm t)
        {
          ATerm n_5 (ATerm t)
          {
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
            return(t);
          }
          t = As_2_0(_id, n_5, t);
          return(t);
        }
        t = Cons_2_0(k_5, _id, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_23 = ATgetFirst((ATermList) t);
            h_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_34;
        return(t);
      }
      t = Row_3_0(_id, h_5, _id, t);
      return(t);
    }
    t = map_1_0(g_5, t);
    g_34 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, g_34);
  }
  return(t);
}
ATerm MatrixRowsEmpty_0_0 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  if(match_cons(t, sym_Matrix_1))
    {
      i_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_34;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm k_34 = NULL;
      if(match_cons(t, sym_Row_3))
        {
          ATerm k_23 = ATgetArgument(t, 0);
          if(((ATgetType(k_23) != AT_LIST) || !(ATisEmpty(k_23))))
            _fail(t);
          {
            ATerm l_23 = ATgetArgument(t, 1);
            if(((ATgetType(l_23) != AT_LIST) || !(ATisEmpty(l_23))))
              _fail(t);
          }
          k_34 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_34;
      return(t);
    }
    t = map_1_0(p_5, t);
    j_34 = t;
    t = (ATerm) ATmakeAppl(sym_LChoices_1, j_34);
  }
  return(t);
}
ATerm reduce_matrix_0_0 (ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0_0(t);
      ;
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SkipWild_0_0(t);
            ;
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
                  t = ShiftColumn_0_0(t);
                  ;
                  LocalPopChoice(s_23);
                }
              else
                {
                  t = r_23;
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
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  if(match_cons(t, sym__2))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_23 = ATgetArgument(t, 0);
            ATerm x_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(n_34, o_34);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_23 = ATgetFirst((ATermList) t);
            f_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_4;
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = t_23;
        t = (ATerm) ATempty;
      }
    p_34 = t;
    t = SSL_table_put(n_34, o_34, p_34);
    t = (ATerm) ATmakeAppl(sym__2, n_34, o_34);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm j_126 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  v_34 = t;
  t = j_126(t);
  w_34 = t;
  {
    ATerm b_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(w_34, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(d_24);
      }
    else
      {
        t = b_24;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_34 = ATgetFirst((ATermList) t);
        x_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(w_34, (ATerm)ATmakeAppl(sym_Scopes_0), x_34);
    t = y_34;
    {
      ATerm q_5 (ATerm t)
      {
        ATerm z_34 = NULL;
        z_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_34, z_34);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(q_5, t);
      t = v_34;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_117 (ATerm), ATerm t_117 (ATerm), ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_117(t);
      t = t_117(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      t = t_117(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_126 (ATerm), ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  t = i_126(t);
  d_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_35, term_j_24);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_24 = ATgetArgument(t, 0);
            ATerm n_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(d_35, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = (ATerm) ATempty;
      }
    e_35 = t;
    t = SSL_table_put(d_35, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(e_35), (ATerm) ATempty));
    t = c_35;
  }
  return(t);
}
ATerm scope_2_0 (ATerm k_126 (ATerm), ATerm l_126 (ATerm), ATerm t)
{
  t = begin_scope_1_0(k_126, t);
  {
    ATerm r_5 (ATerm t)
    {
      t = end_scope_1_0(k_126, t);
      return(t);
    }
    t = restore_always_2_0(l_126, r_5, t);
  }
  return(t);
}
ATerm matrix_to_dfa_0_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    t = term_e_23;
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm v_5 (ATerm t)
    {
      ATerm o_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0_0(t);
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
                t = MatrixScope_0_0(t);
                ;
                LocalPopChoice(r_24);
              }
            else
              {
                t = q_24;
                t = Simplify_0_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1_0(v_5, t);
    t = SRTS_all(t_5, t);
    return(t);
  }
  t = scope_2_0(s_5, t_5, t);
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,s_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
  if(match_cons(t, sym__2))
    {
      s_35 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_35;
  if(match_cons(t, sym_Build_1))
    {
      ATerm s_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_35;
  if(match_cons(t, sym_Where_1))
    {
      v_35 = ATgetArgument(t, 0);
      t = v_35;
      if(match_cons(t, sym_Prim_2))
        {
          p_35 = ATgetArgument(t, 0);
          q_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          v_35 = ATgetArgument(t, 0);
          w_35 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, v_35, w_35);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              v_35 = ATgetArgument(t, 0);
              w_35 = ATgetArgument(t, 1);
              x_35 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm zip_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm t_24 = ATgetArgument(t, 0);
        if(((ATgetType(t_24) != AT_LIST) || !(ATisEmpty(t_24))))
          _fail(t);
        {
          ATerm u_24 = ATgetArgument(t, 1);
          if(((ATgetType(u_24) != AT_LIST) || !(ATisEmpty(u_24))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm v_24 = ATgetArgument(t, 0);
        if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
          {
            f_36 = ATgetFirst((ATermList) v_24);
            h_36 = (ATerm) ATgetNext((ATermList) v_24);
          }
        else
          _fail(t);
        {
          ATerm w_24 = ATgetArgument(t, 1);
          if(((ATgetType(w_24) == AT_LIST) && !(ATisEmpty(w_24))))
            {
              g_36 = ATgetFirst((ATermList) w_24);
              i_36 = (ATerm) ATgetNext((ATermList) w_24);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_36, g_36), (ATerm) ATmakeAppl(sym__2, h_36, i_36));
    return(t);
  }
  ATerm a_6 (ATerm t)
  {
    ATerm j_36 = NULL,k_36 = NULL;
    if(match_cons(t, sym__2))
      {
        j_36 = ATgetArgument(t, 0);
        k_36 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(k_36), j_36);
    return(t);
  }
  t = genzip_4_0(x_5, z_5, a_6, c_119, t);
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if(match_cons(x_24, sym_Build_1))
        {
          ATerm z_24 = ATgetArgument(x_24, 0);
          if(match_cons(z_24, sym_Op_2))
            {
              m_36 = ATgetArgument(z_24, 0);
              l_36 = ATgetArgument(z_24, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm y_24 = ATgetArgument(t, 1);
        if(match_cons(y_24, sym_Match_1))
          {
            ATerm a_25 = ATgetArgument(y_24, 0);
            if(match_cons(a_25, sym_Op_2))
              {
                if((m_36 != ATgetArgument(a_25, 0)))
                  {
                    _fail(ATgetArgument(a_25, 0));
                  }
                n_36 = ATgetArgument(a_25, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, l_36, n_36);
  {
    ATerm b_6 (ATerm t)
    {
      ATerm p_36 = NULL,q_36 = NULL;
      if(match_cons(t, sym__2))
        {
          p_36 = ATgetArgument(t, 0);
          q_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_36), (ATerm) ATmakeAppl(sym_Match_1, q_36));
      return(t);
    }
    t = zip_1_0(b_6, t);
    o_36 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_36), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, m_36, l_36)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_25 = ATgetArgument(t, 0);
      if(match_cons(b_25, sym_Build_1))
        {
          ATerm e_25 = ATgetArgument(b_25, 0);
          if(match_cons(e_25, sym_Op_2))
            {
              r_36 = ATgetArgument(e_25, 0);
              {
                ATerm f_25 = ATgetArgument(e_25, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm d_25 = ATgetArgument(t, 1);
        if(match_cons(d_25, sym_Match_1))
          {
            ATerm g_25 = ATgetArgument(d_25, 0);
            if(match_cons(g_25, sym_Op_2))
              {
                s_36 = ATgetArgument(g_25, 0);
                {
                  ATerm h_25 = ATgetArgument(g_25, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  {
    ATerm i_25 = t;
    if((PushChoice() == 0))
      {
        ATerm t_36 = NULL;
        if(match_cons(t, sym__2))
          {
            t_36 = ATgetArgument(t, 0);
            if((t_36 != ATgetArgument(t, 1)))
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
        t = i_25;
      }
    t = term_j_25;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm k_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = k_25;
      {
        ATerm v_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(x_25);
          }
        else
          {
            t = v_25;
            {
              ATerm y_25 = t;
              int a_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_37 = NULL,e_37 = NULL,f_37 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      c_37 = ATgetArgument(t, 0);
                      e_37 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_37;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm b_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_37;
                  if(match_cons(t, sym_Build_1))
                    {
                      f_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(a_26);
                }
              else
                {
                  t = y_25;
                  {
                    ATerm c_26 = t;
                    int e_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(e_26);
                      }
                    else
                      {
                        t = c_26;
                        {
                          ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              i_37 = ATgetArgument(t, 0);
                              k_37 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = i_37;
                          if(match_cons(t, sym_Match_1))
                            {
                              j_37 = ATgetArgument(t, 0);
                              t = k_37;
                              if(match_cons(t, sym_Match_1))
                                {
                                  l_37 = ATgetArgument(t, 0);
                                  t = l_37;
                                  if((j_37 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_37);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      l_37 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = l_37;
                                  if((j_37 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_37);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  j_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = k_37;
                              if(match_cons(t, sym_Match_1))
                                {
                                  l_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = l_37;
                              if((j_37 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, j_37);
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
  ATerm r_37 = NULL,s_37 = NULL,u_37 = NULL,v_37 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_37 = ATgetArgument(t, 0);
      v_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_37;
  if(match_cons(t, sym_Seq_2))
    {
      r_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
      {
        ATerm f_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_37 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, u_37, r_37);
            t = BMF_0_0(t);
            z_37 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, z_37, s_37);
            ;
            LocalPopChoice(g_26);
          }
        else
          {
            t = f_26;
            t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, u_37, v_37);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm e_38 (ATerm t)
  {
    ATerm s_26 = t;
    int t_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_115(t);
        ;
        LocalPopChoice(t_26);
      }
    else
      {
        t = s_26;
        t = SRTS_one(e_38, t);
      }
    return(t);
  }
  t = e_38(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm u_26 = ATgetArgument(t, 0);
      if(((ATgetType(u_26) == AT_LIST) && !(ATisEmpty(u_26))))
        {
          ATerm x_26 = ATgetFirst((ATermList) u_26);
          if(match_cons(x_26, sym_SDefT_4))
            {
              g_38 = ATgetArgument(x_26, 0);
              {
                ATerm d_27 = ATgetArgument(x_26, 1);
                if(((ATgetType(d_27) != AT_LIST) || !(ATisEmpty(d_27))))
                  _fail(t);
              }
              {
                ATerm e_27 = ATgetArgument(x_26, 2);
                if(((ATgetType(e_27) != AT_LIST) || !(ATisEmpty(e_27))))
                  _fail(t);
              }
              f_38 = ATgetArgument(x_26, 3);
            }
          else
            _fail(t);
          {
            ATerm c_27 = (ATerm) ATgetNext((ATermList) u_26);
            if(((ATgetType(c_27) != AT_LIST) || !(ATisEmpty(c_27))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm v_26 = ATgetArgument(t, 1);
        if(match_cons(v_26, sym_CallT_3))
          {
            ATerm j_27 = ATgetArgument(v_26, 0);
            if(match_cons(j_27, sym_SVar_1))
              {
                if((g_38 != ATgetArgument(j_27, 0)))
                  {
                    _fail(ATgetArgument(j_27, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm k_27 = ATgetArgument(v_26, 1);
              if(((ATgetType(k_27) != AT_LIST) || !(ATisEmpty(k_27))))
                _fail(t);
            }
            {
              ATerm l_27 = ATgetArgument(v_26, 2);
              if(((ATgetType(l_27) != AT_LIST) || !(ATisEmpty(l_27))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_38;
  {
    ATerm o_27 = t;
    if((PushChoice() == 0))
      {
        ATerm c_6 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm r_27 = ATgetArgument(t, 0);
              if(match_cons(r_27, sym_SVar_1))
                {
                  if((g_38 != ATgetArgument(r_27, 0)))
                    {
                      _fail(ATgetArgument(r_27, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm t_27 = ATgetArgument(t, 1);
                if(((ATgetType(t_27) != AT_LIST) || !(ATisEmpty(t_27))))
                  _fail(t);
              }
              {
                ATerm v_27 = ATgetArgument(t, 2);
                if(((ATgetType(v_27) != AT_LIST) || !(ATisEmpty(v_27))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(c_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_27;
      }
    t = f_38;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,h_40 = NULL,l_40 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      h_40 = ATgetArgument(t, 0);
      t = h_40;
      if(match_cons(t, sym_Seq_2))
        {
          f_40 = ATgetArgument(t, 0);
          p_38 = ATgetArgument(t, 1);
          t = f_40;
          if(match_cons(t, sym_Where_1))
            {
              o_38 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_38;
          if(match_cons(t, sym_Seq_2))
            {
              c_40 = ATgetArgument(t, 0);
              e_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_40;
          if(match_cons(t, sym_Build_1))
            {
              d_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, o_38, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_40), e_40)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              f_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          h_40 = ATgetArgument(t, 0);
          t = h_40;
          if(match_cons(t, sym_Test_1))
            {
              f_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              h_40 = ATgetArgument(t, 0);
              t = h_40;
              if(match_cons(t, sym_Not_1))
                {
                  f_40 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, f_40);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  h_40 = ATgetArgument(t, 0);
                  l_40 = ATgetArgument(t, 1);
                  t = l_40;
                  if((h_40 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      h_40 = ATgetArgument(t, 0);
                      l_40 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = l_40;
                  if((h_40 != t))
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
  ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      r_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
      t = r_41;
      if(match_cons(t, sym_LChoice_2))
        {
          s_41 = ATgetArgument(t, 0);
          t_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, s_41, (ATerm) ATmakeAppl(sym_LChoice_2, t_41, u_41));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          r_41 = ATgetArgument(t, 0);
          u_41 = ATgetArgument(t, 1);
          t = r_41;
          if(match_cons(t, sym_Seq_2))
            {
              s_41 = ATgetArgument(t, 0);
              t_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, s_41, (ATerm) ATmakeAppl(sym_Seq_2, t_41, u_41));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              r_41 = ATgetArgument(t, 0);
              u_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_41;
          if(match_cons(t, sym_Choice_2))
            {
              s_41 = ATgetArgument(t, 0);
              t_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, s_41, (ATerm) ATmakeAppl(sym_Choice_2, t_41, u_41));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm i_6 (ATerm t)
        {
          ATerm j_6 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(j_6, t);
          return(t);
        }
        t = Cons_2_0(_id, i_6, t);
      }
      ;
      LocalPopChoice(x_27);
    }
  else
    {
      t = w_27;
      {
        ATerm m_6 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, m_6, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,n_42 = NULL,o_42 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      n_42 = ATgetArgument(t, 0);
      o_42 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, n_42, o_42);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          n_42 = ATgetArgument(t, 0);
          t = n_42;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_42 = ATgetFirst((ATermList) t);
              j_42 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_42, (ATerm) ATmakeAppl(sym_LChoices_1, j_42));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_j_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              n_42 = ATgetArgument(t, 0);
              t = n_42;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_42 = ATgetFirst((ATermList) t);
                  j_42 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, i_42, (ATerm) ATmakeAppl(sym_Choices_1, j_42));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_j_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  n_42 = ATgetArgument(t, 0);
                  t = n_42;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_42 = ATgetFirst((ATermList) t);
                      j_42 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_42, (ATerm) ATmakeAppl(sym_Seqs_1, j_42));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_y_27;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      n_42 = ATgetArgument(t, 0);
                      o_42 = ATgetArgument(t, 1);
                      l_42 = ATgetArgument(t, 2);
                      k_42 = ATgetArgument(t, 3);
                      {
                        ATerm b_43 = NULL,c_43 = NULL;
                        t = o_42;
                        {
                          ATerm n_6 (ATerm t)
                          {
                            ATerm d_43 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                d_43 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, d_43, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_20), term_j_20));
                            return(t);
                          }
                          t = map1_1_0(n_6, t);
                          b_43 = t;
                          t = l_42;
                          {
                            ATerm o_6 (ATerm t)
                            {
                              ATerm p_6 (ATerm t)
                              {
                                ATerm e_43 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    e_43 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, e_43, term_j_20);
                                return(t);
                              }
                              t = try_1_0(p_6, t);
                              return(t);
                            }
                            t = map1_1_0(o_6, t);
                            c_43 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, n_42, b_43, c_43, k_42);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          n_42 = ATgetArgument(t, 0);
                          o_42 = ATgetArgument(t, 1);
                          l_42 = ATgetArgument(t, 2);
                          k_42 = ATgetArgument(t, 3);
                          {
                            ATerm z_27 = t;
                            int a_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm j_43 = NULL,k_43 = NULL;
                                t = l_42;
                                {
                                  ATerm q_6 (ATerm t)
                                  {
                                    ATerm l_43 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        l_43 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, l_43, term_j_20);
                                    return(t);
                                  }
                                  t = map1_1_0(q_6, t);
                                  j_43 = t;
                                  t = o_42;
                                  {
                                    ATerm r_6 (ATerm t)
                                    {
                                      ATerm t_6 (ATerm t)
                                      {
                                        ATerm m_43 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            m_43 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_43, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_20), term_j_20));
                                        return(t);
                                      }
                                      t = try_1_0(t_6, t);
                                      return(t);
                                    }
                                    t = map_1_0(r_6, t);
                                    k_43 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, n_42, k_43, j_43, k_42);
                                  }
                                }
                                ;
                                LocalPopChoice(a_28);
                              }
                            else
                              {
                                t = z_27;
                                {
                                  ATerm r_43 = NULL,s_43 = NULL;
                                  t = o_42;
                                  {
                                    ATerm v_6 (ATerm t)
                                    {
                                      ATerm t_43 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          t_43 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, t_43, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_j_20), term_j_20));
                                      return(t);
                                    }
                                    t = map1_1_0(v_6, t);
                                    r_43 = t;
                                    t = l_42;
                                    {
                                      ATerm w_6 (ATerm t)
                                      {
                                        ATerm x_6 (ATerm t)
                                        {
                                          ATerm u_43 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              u_43 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, u_43, term_j_20);
                                          return(t);
                                        }
                                        t = try_1_0(x_6, t);
                                        return(t);
                                      }
                                      t = map_1_0(w_6, t);
                                      s_43 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, n_42, r_43, s_43, k_42);
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
                              n_42 = ATgetArgument(t, 0);
                              o_42 = ATgetArgument(t, 1);
                              l_42 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, o_42, (ATerm) ATmakeAppl(sym_Op_2, term_b_28, (ATerm) ATinsert(ATinsert(ATempty, l_42), n_42)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  n_42 = ATgetArgument(t, 0);
                                  o_42 = ATgetArgument(t, 1);
                                  l_42 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, l_42)), n_42), (ATerm) ATmakeAppl(sym_Build_1, o_42)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      n_42 = ATgetArgument(t, 0);
                                      o_42 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_42, (ATerm) ATmakeAppl(sym_Match_1, o_42));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          n_42 = ATgetArgument(t, 0);
                                          o_42 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_42), o_42);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              n_42 = ATgetArgument(t, 0);
                                              o_42 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_42), n_42);
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
  ATerm h_44 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm c_28 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_44;
  {
    ATerm z_6 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(z_6, t);
    t = term_j_25;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_45 = NULL,c_45 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          b_45 = ATgetArgument(t, 0);
          t = b_45;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              b_45 = ATgetArgument(t, 0);
              t = b_45;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_y_27;
            }
          else
            {
              ATerm f_28 = t;
              int g_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      b_45 = ATgetArgument(t, 0);
                      {
                        ATerm h_28 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_28);
                  t = b_45;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = f_28;
                  {
                    ATerm i_28 = t;
                    int j_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm n_28 = ATgetArgument(t, 0);
                            c_45 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(j_28);
                        t = c_45;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = i_28;
                        {
                          ATerm o_28 = t;
                          int p_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm d_29 = ATgetArgument(t, 0);
                                  c_45 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(p_28);
                              t = c_45;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = o_28;
                              if(match_cons(t, sym_Some_1))
                                {
                                  b_45 = ATgetArgument(t, 0);
                                  t = b_45;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      b_45 = ATgetArgument(t, 0);
                                      t = b_45;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm e_29 = ATgetArgument(t, 0);
                                          c_45 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = c_45;
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
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      {
        ATerm f_29 = t;
        int g_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(g_29);
          }
        else
          {
            t = f_29;
            {
              ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  e_45 = ATgetArgument(t, 0);
                  f_45 = ATgetArgument(t, 1);
                  t = f_45;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = e_45;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm h_29 = t;
                          int i_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = f_45;
                              ;
                              LocalPopChoice(i_29);
                            }
                          else
                            {
                              t = h_29;
                              t = e_45;
                            }
                        }
                      else
                        {
                          t = e_45;
                        }
                    }
                  else
                    {
                      t = e_45;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = f_45;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      e_45 = ATgetArgument(t, 0);
                      f_45 = ATgetArgument(t, 1);
                      t = f_45;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = e_45;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm j_29 = t;
                              int k_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = f_45;
                                  ;
                                  LocalPopChoice(k_29);
                                }
                              else
                                {
                                  t = j_29;
                                  t = e_45;
                                }
                            }
                          else
                            {
                              t = e_45;
                            }
                        }
                      else
                        {
                          t = e_45;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = f_45;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          e_45 = ATgetArgument(t, 0);
                          t = e_45;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              e_45 = ATgetArgument(t, 0);
                              f_45 = ATgetArgument(t, 1);
                              g_45 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = g_45;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_45, f_45);
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
  ATerm h_47 = NULL,r_47 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      r_47 = ATgetArgument(t, 0);
      t = r_47;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          r_47 = ATgetArgument(t, 0);
          t = r_47;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_j_25;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              r_47 = ATgetArgument(t, 0);
              h_47 = ATgetArgument(t, 1);
              t = h_47;
              if(match_cons(t, sym_Id_0))
                {
                  t = r_47;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm l_29 = t;
                      int m_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_47;
                          ;
                          LocalPopChoice(m_29);
                        }
                      else
                        {
                          t = l_29;
                          t = r_47;
                        }
                    }
                  else
                    {
                      t = r_47;
                    }
                }
              else
                {
                  t = r_47;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = h_47;
                }
            }
          else
            {
              ATerm n_29 = t;
              int o_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      r_47 = ATgetArgument(t, 0);
                      {
                        ATerm p_29 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_29);
                  t = r_47;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = n_29;
                  {
                    ATerm q_29 = t;
                    int r_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm s_29 = ATgetArgument(t, 0);
                            h_47 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_29);
                        t = h_47;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = q_29;
                        {
                          ATerm t_29 = t;
                          int u_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm v_29 = ATgetArgument(t, 0);
                                  h_47 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(u_29);
                              t = h_47;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = t_29;
                              if(match_cons(t, sym_All_1))
                                {
                                  r_47 = ATgetArgument(t, 0);
                                  t = r_47;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      r_47 = ATgetArgument(t, 0);
                                      t = r_47;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          r_47 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = r_47;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_y_27;
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
  ATerm w_29 = t;
  int x_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(x_29);
    }
  else
    {
      t = w_29;
      {
        ATerm c_30 = t;
        int d_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(d_30);
          }
        else
          {
            t = c_30;
            {
              ATerm e_30 = t;
              int f_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(f_30);
                }
              else
                {
                  t = e_30;
                  {
                    ATerm k_30 = t;
                    int d_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(d_31);
                      }
                    else
                      {
                        t = k_30;
                        {
                          ATerm e_31 = t;
                          int f_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(f_31);
                            }
                          else
                            {
                              t = e_31;
                              {
                                ATerm g_31 = t;
                                int k_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_48 = NULL,b_48 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        a_48 = ATgetArgument(t, 0);
                                        b_48 = ATgetArgument(t, 1);
                                        t = a_48;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = b_48;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            a_48 = ATgetArgument(t, 0);
                                            b_48 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = a_48;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = b_48;
                                      }
                                    ;
                                    LocalPopChoice(k_31);
                                  }
                                else
                                  {
                                    t = g_31;
                                    {
                                      ATerm o_31 = t;
                                      int p_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(p_31);
                                        }
                                      else
                                        {
                                          t = o_31;
                                          {
                                            ATerm q_31 = t;
                                            int r_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(r_31);
                                              }
                                            else
                                              {
                                                t = q_31;
                                                {
                                                  ATerm h_4 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm s_31 = ATgetArgument(t, 0);
                                                      if(!(match_cons(s_31, sym_Wld_0)))
                                                        _fail(t);
                                                      h_4 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = h_4;
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
  ATerm g_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      n_49 = ATgetArgument(t, 0);
      u_49 = ATgetArgument(t, 1);
      t = n_49;
      if(match_cons(t, sym_Matrix_2))
        {
          o_49 = ATgetArgument(t, 0);
          p_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_49;
      if(match_cons(t, sym_Choice_2))
        {
          j_49 = ATgetArgument(t, 0);
          k_49 = ATgetArgument(t, 1);
          {
            ATerm a_50 = NULL,b_50 = NULL;
            t = j_49;
            if(match_cons(t, sym_Matrix_2))
              {
                g_49 = ATgetArgument(t, 0);
                i_49 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, o_49, g_49);
            t = union_0_0(t);
            a_50 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_49, i_49);
            t = conc_0_0(t);
            b_50 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, a_50, b_50), k_49);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              j_49 = ATgetArgument(t, 0);
              k_49 = ATgetArgument(t, 1);
              {
                ATerm h_50 = NULL,i_50 = NULL;
                t = j_49;
                if(match_cons(t, sym_Matrix_2))
                  {
                    g_49 = ATgetArgument(t, 0);
                    i_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, o_49, g_49);
                t = union_0_0(t);
                h_50 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_49, i_49);
                t = conc_0_0(t);
                i_50 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, h_50, i_50), k_49);
              }
            }
          else
            {
              ATerm n_50 = NULL,o_50 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  j_49 = ATgetArgument(t, 0);
                  k_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, o_49, j_49);
              t = union_0_0(t);
              n_50 = t;
              t = (ATerm) ATmakeAppl(sym__2, p_49, k_49);
              t = conc_0_0(t);
              o_50 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, n_50, o_50);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          n_49 = ATgetArgument(t, 0);
          u_49 = ATgetArgument(t, 1);
          t = n_49;
          if(match_cons(t, sym_Matrix_2))
            {
              o_49 = ATgetArgument(t, 0);
              p_49 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_49;
          if(match_cons(t, sym_LChoice_2))
            {
              j_49 = ATgetArgument(t, 0);
              k_49 = ATgetArgument(t, 1);
              {
                ATerm u_50 = NULL,v_50 = NULL;
                t = j_49;
                if(match_cons(t, sym_Matrix_2))
                  {
                    g_49 = ATgetArgument(t, 0);
                    i_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, o_49, g_49);
                t = union_0_0(t);
                u_50 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_49, i_49);
                t = conc_0_0(t);
                v_50 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, u_50, v_50), k_49);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  j_49 = ATgetArgument(t, 0);
                  k_49 = ATgetArgument(t, 1);
                  {
                    ATerm c_51 = NULL,d_51 = NULL;
                    t = j_49;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        g_49 = ATgetArgument(t, 0);
                        i_49 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, o_49, g_49);
                    t = union_0_0(t);
                    c_51 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_49, i_49);
                    t = conc_0_0(t);
                    d_51 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, c_51, d_51), k_49);
                  }
                }
              else
                {
                  ATerm i_51 = NULL,j_51 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      j_49 = ATgetArgument(t, 0);
                      k_49 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, o_49, j_49);
                  t = union_0_0(t);
                  i_51 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_49, k_49);
                  t = conc_0_0(t);
                  j_51 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, i_51, j_51);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              n_49 = ATgetArgument(t, 0);
              u_49 = ATgetArgument(t, 1);
              {
                ATerm n_51 = NULL;
                t = u_49;
                if(match_cons(t, sym_Matrix_2))
                  {
                    j_49 = ATgetArgument(t, 0);
                    k_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_49;
                {
                  ATerm b_7 (ATerm t)
                  {
                    ATerm o_51 = NULL,p_51 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        o_51 = ATgetArgument(t, 0);
                        p_51 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, o_51, (ATerm) ATmakeAppl(sym_Scope_2, n_49, p_51));
                    return(t);
                  }
                  t = map_1_0(b_7, t);
                  n_51 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, j_49, n_51);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  n_49 = ATgetArgument(t, 0);
                  u_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_49;
              if(match_cons(t, sym_Matrix_2))
                {
                  o_49 = ATgetArgument(t, 0);
                  p_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_49;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_49 = ATgetFirst((ATermList) t);
                  t_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_49;
              if(match_cons(t, sym_Row_2))
                {
                  r_49 = ATgetArgument(t, 0);
                  s_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_49;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, o_49, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, r_49, (ATerm) ATmakeAppl(sym_Seq_2, s_49, u_49))));
            }
        }
    }
  return(t);
}
ATerm repeat_1_0 (ATerm w_130 (ATerm), ATerm t)
{
  ATerm u_51 (ATerm t)
  {
    ATerm c_7 (ATerm t)
    {
      t = w_130(t);
      t = u_51(t);
      return(t);
    }
    t = try_1_0(c_7, t);
    return(t);
  }
  t = u_51(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    t = bottomup_1_0(m_114, t);
    return(t);
  }
  t = SRTS_all(d_7, t);
  t = m_114(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm f_125 (ATerm), ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_125(t);
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      {
        ATerm x_51 = NULL,y_51 = NULL,b_52 = NULL,c_52 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_51 = ATgetFirst((ATermList) t);
            y_51 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_51;
        t = f_125(t);
        b_52 = t;
        t = y_51;
        t = foldr_3_0(d_125, e_125, f_125, t);
        c_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_52, c_52);
        t = e_125(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL;
  d_52 = t;
  t = SSL_explode_term(d_52);
  if(match_cons(t, sym__2))
    {
      ATerm v_31 = ATgetArgument(t, 0);
      e_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_52;
  t = foldr_3_0(b_123, c_123, d_123, t);
  return(t);
}
ATerm collect_om_1_0 (ATerm z_123 (ATerm), ATerm t)
{
  ATerm w_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_52 = NULL;
      t = z_123(t);
      f_52 = t;
      t = (ATerm) ATinsert(ATempty, f_52);
      ;
      LocalPopChoice(z_31);
    }
  else
    {
      t = w_31;
      {
        ATerm e_7 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm f_7 (ATerm t)
        {
          t = collect_om_1_0(z_123, t);
          return(t);
        }
        t = crush_3_0(e_7, union_0_0, f_7, t);
      }
    }
  return(t);
}
ATerm collect_1_0 (ATerm a_124 (ATerm), ATerm t)
{
  t = collect_om_1_0(a_124, t);
  return(t);
}
ATerm collect_offsets_0_0 (ATerm t)
{
  ATerm g_7 (ATerm t)
  {
    ATerm g_52 = NULL;
    if(match_cons(t, sym_Off_1))
      {
        g_52 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = g_52;
    return(t);
  }
  t = collect_1_0(g_7, t);
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm m_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
  if(match_cons(t, sym_As_2))
    {
      p_52 = ATgetArgument(t, 0);
      r_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_52;
  if(match_cons(t, sym_Var_1))
    {
      q_52 = ATgetArgument(t, 0);
      t = r_52;
      if(match_cons(t, sym_As_2))
        {
          s_52 = ATgetArgument(t, 0);
          {
            ATerm a_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_52;
      if(match_cons(t, sym_Off_1))
        {
          m_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, q_52), (ATerm) ATmakeAppl(sym_Var_1, m_52)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          q_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_52;
      if(match_cons(t, sym_Var_1))
        {
          s_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, s_52), (ATerm) ATmakeAppl(sym_Var_1, q_52)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,o_53 = NULL,p_53 = NULL,q_53 = NULL;
  m_53 = t;
  if(match_cons(t, sym_As_2))
    {
      n_53 = ATgetArgument(t, 0);
      p_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_53;
  {
    ATerm b_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_32);
        t = p_53;
        if(match_cons(t, sym_As_2))
          {
            q_53 = ATgetArgument(t, 0);
            l_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_53;
        if(match_cons(t, sym_Off_1))
          {
            k_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, k_53), l_53);
      }
    else
      {
        t = b_32;
        if(match_cons(t, sym_Off_1))
          {
            o_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_53;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_53;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm g_32 = ATgetFirst((ATermList) t);
                ATerm h_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_53;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_53), term_u_20);
      }
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm h_7 (ATerm t)
  {
    ATerm u_53 = NULL;
    if(match_cons(t, sym__2))
      {
        u_53 = ATgetArgument(t, 0);
        if((u_53 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(h_7, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_53 = ATgetFirst((ATermList) t);
      w_53 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_122(t);
  {
    ATerm j_7 (ATerm t)
    {
      ATerm x_53 = NULL;
      x_53 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_53, x_53);
      t = s_122(t);
      return(t);
    }
    t = fetch_1_0(j_7, t);
    t = w_53;
  }
  return(t);
}
ATerm union_1_0 (ATerm o_122 (ATerm), ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL;
  if(match_cons(t, sym__2))
    {
      c_54 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_54;
  {
    ATerm d_54 (ATerm t)
    {
      ATerm i_32 = t;
      int j_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_54;
          ;
          LocalPopChoice(j_32);
        }
      else
        {
          t = i_32;
          {
            ATerm l_32 = t;
            int s_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_7 (ATerm t)
                {
                  t = b_54;
                  return(t);
                }
                t = HdMember_p__2_0(o_122, k_7, t);
                t = d_54(t);
                ;
                LocalPopChoice(s_32);
              }
            else
              {
                t = l_32;
                t = Cons_2_0(_id, d_54, t);
              }
          }
        }
      return(t);
    }
    t = d_54(t);
  }
  return(t);
}
ATerm unions_1_0 (ATerm q_122 (ATerm), ATerm t)
{
  ATerm l_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm m_7 (ATerm t)
  {
    t = union_1_0(q_122, t);
    return(t);
  }
  t = foldr_2_0(l_7, m_7, t);
  return(t);
}
ATerm unions_0_0 (ATerm t)
{
  ATerm n_7 (ATerm t)
  {
    ATerm e_54 = NULL;
    if(match_cons(t, sym__2))
      {
        e_54 = ATgetArgument(t, 0);
        if((e_54 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = unions_1_0(n_7, t);
  return(t);
}
ATerm unzip_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm o_7 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_t_32;
    return(t);
  }
  ATerm p_7 (ATerm t)
  {
    ATerm f_54 = NULL,g_54 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_54 = ATgetFirst((ATermList) t);
        g_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, f_54, g_54);
    return(t);
  }
  ATerm q_7 (ATerm t)
  {
    ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm u_32 = ATgetArgument(t, 0);
        if(match_cons(u_32, sym__2))
          {
            h_54 = ATgetArgument(u_32, 0);
            j_54 = ATgetArgument(u_32, 1);
          }
        else
          _fail(t);
        {
          ATerm v_32 = ATgetArgument(t, 1);
          if(match_cons(v_32, sym__2))
            {
              i_54 = ATgetArgument(v_32, 0);
              k_54 = ATgetArgument(v_32, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_54), h_54), (ATerm) ATinsert(CheckATermList(k_54), j_54));
    return(t);
  }
  t = genzip_4_0(o_7, p_7, q_7, h_119, t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm m_123 (ATerm), ATerm n_123 (ATerm), ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL;
  l_54 = t;
  m_54 = t;
  t = SSL_explode_term(m_54);
  if(match_cons(t, sym__2))
    {
      o_54 = ATgetArgument(t, 0);
      p_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_54);
  q_54 = t;
  t = p_54;
  t = unzip_1_0(m_123, t);
  if(match_cons(t, sym__2))
    {
      r_54 = ATgetArgument(t, 0);
      s_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(o_54, r_54);
  t_54 = t;
  t = SSLsetAnnotations(t_54, q_54);
  t = n_123(t);
  if(match_cons(t, sym__2))
    {
      u_54 = ATgetArgument(t, 0);
      a_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_54;
  t = unions_0_0(t);
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_55, b_55);
  t = union_0_0(t);
  c_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_54, c_55);
  return(t);
}
ATerm collect_split_2_0 (ATerm n_124 (ATerm), ATerm o_124 (ATerm), ATerm t)
{
  ATerm g_55 (ATerm t)
  {
    ATerm r_7 (ATerm t)
    {
      ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
      d_55 = t;
      t = try_1_0(n_124, t);
      e_55 = t;
      t = d_55;
      {
        ATerm w_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_124(t);
            ;
            LocalPopChoice(y_32);
          }
        else
          {
            t = w_32;
            t = (ATerm) ATempty;
          }
        f_55 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_55, f_55);
      }
      return(t);
    }
    t = CollectSplit_2_0(g_55, r_7, t);
    return(t);
  }
  t = g_55(t);
  return(t);
}
ATerm collect_substitutions_0_0 (ATerm t)
{
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  return(t);
}
ATerm Annotate_1_0 (ATerm p_112 (ATerm), ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
  if(match_cons(t, sym__2))
    {
      h_55 = ATgetArgument(t, 0);
      i_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_112(t);
  j_55 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(j_55), h_55)), i_55);
  return(t);
}
ATerm NZip2_0_0 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL;
  if(match_cons(t, sym__2))
    {
      k_55 = ATgetArgument(t, 0);
      {
        ATerm t_33 = ATgetArgument(t, 1);
        if(((ATgetType(t_33) == AT_LIST) && !(ATisEmpty(t_33))))
          {
            l_55 = ATgetFirst((ATermList) t_33);
            m_55 = (ATerm) ATgetNext((ATermList) t_33);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_55, term_o_21);
  {
    ATerm u_33 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(k_55, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(d_34);
      }
    else
      {
        t = u_33;
        t = SSL_addr(k_55, (ATerm) ATmakeInt(1));
      }
    n_55 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_55, l_55), (ATerm) ATmakeAppl(sym__2, n_55, m_55));
  }
  return(t);
}
ATerm genzip_4_0 (ATerm x_118 (ATerm), ATerm y_118 (ATerm), ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t)
{
  ATerm q_55 (ATerm t)
  {
    ATerm e_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_118(t);
        ;
        LocalPopChoice(l_34);
      }
    else
      {
        t = e_34;
        t = y_118(t);
        t = _2_0(a_119, q_55, t);
        t = z_118(t);
      }
    return(t);
  }
  t = q_55(t);
  return(t);
}
ATerm nzip0_1_0 (ATerm i_119 (ATerm), ATerm t)
{
  ATerm r_55 = NULL;
  r_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_20, r_55);
  {
    ATerm s_7 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm m_34 = ATgetArgument(t, 0);
          ATerm q_34 = ATgetArgument(t, 1);
          if(((ATgetType(q_34) != AT_LIST) || !(ATisEmpty(q_34))))
            _fail(t);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm t_7 (ATerm t)
    {
      ATerm s_55 = NULL,t_55 = NULL;
      if(match_cons(t, sym__2))
        {
          s_55 = ATgetArgument(t, 0);
          t_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(t_55), s_55);
      return(t);
    }
    t = genzip_4_0(s_7, NZip2_0_0, t_7, i_119, t);
  }
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm e_56 = NULL,j_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL;
  if(match_cons(t, sym_As_2))
    {
      j_56 = ATgetArgument(t, 0);
      n_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_56;
  if(match_cons(t, sym_Off_1))
    {
      m_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_56;
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm t_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_34);
        {
          ATerm u_34 = t;
          int a_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_56;
              {
                ATerm v_7 (ATerm t)
                {
                  ATerm w_7 (ATerm t)
                  {
                    t = m_56;
                    return(t);
                  }
                  t = Annotate_1_0(w_7, t);
                  return(t);
                }
                t = nzip0_1_0(v_7, t);
              }
              ;
              LocalPopChoice(a_35);
            }
          else
            {
              t = u_34;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, m_56), term_u_20);
            }
        }
      }
    else
      {
        t = r_34;
        if(match_cons(t, sym_As_2))
          {
            o_56 = ATgetArgument(t, 0);
            p_56 = ATgetArgument(t, 1);
            t = o_56;
            if(match_cons(t, sym_Var_1))
              {
                e_56 = ATgetArgument(t, 0);
                {
                  ATerm b_35 = t;
                  int f_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = n_56;
                      {
                        ATerm x_7 (ATerm t)
                        {
                          ATerm y_7 (ATerm t)
                          {
                            t = m_56;
                            return(t);
                          }
                          t = Annotate_1_0(y_7, t);
                          return(t);
                        }
                        t = nzip0_1_0(x_7, t);
                      }
                      ;
                      LocalPopChoice(f_35);
                    }
                  else
                    {
                      t = b_35;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_56), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, m_56), p_56));
                    }
                }
              }
            else
              {
                t = n_56;
                {
                  ATerm z_7 (ATerm t)
                  {
                    ATerm b_8 (ATerm t)
                    {
                      t = m_56;
                      return(t);
                    }
                    t = Annotate_1_0(b_8, t);
                    return(t);
                  }
                  t = nzip0_1_0(z_7, t);
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                o_56 = ATgetArgument(t, 0);
                p_56 = ATgetArgument(t, 1);
                {
                  ATerm g_35 = t;
                  int h_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = n_56;
                      {
                        ATerm c_8 (ATerm t)
                        {
                          ATerm d_8 (ATerm t)
                          {
                            t = m_56;
                            return(t);
                          }
                          t = Annotate_1_0(d_8, t);
                          return(t);
                        }
                        t = nzip0_1_0(c_8, t);
                      }
                      ;
                      LocalPopChoice(h_35);
                    }
                  else
                    {
                      t = g_35;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, m_56), (ATerm) ATmakeAppl(sym_Op_2, o_56, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, m_56), p_56)));
                    }
                }
              }
            else
              {
                t = n_56;
                {
                  ATerm e_8 (ATerm t)
                  {
                    ATerm f_8 (ATerm t)
                    {
                      t = m_56;
                      return(t);
                    }
                    t = Annotate_1_0(f_8, t);
                    return(t);
                  }
                  t = nzip0_1_0(e_8, t);
                }
              }
          }
      }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm l_114 (ATerm), ATerm t)
{
  t = l_114(t);
  {
    ATerm g_8 (ATerm t)
    {
      t = topdown_1_0(l_114, t);
      return(t);
    }
    t = SRTS_all(g_8, t);
  }
  return(t);
}
ATerm term_to_matrix_0_0 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL;
  s_57 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_i_35, (ATerm) ATinsert(ATempty, s_57));
  {
    ATerm h_8 (ATerm t)
    {
      ATerm j_8 (ATerm t)
      {
        ATerm w_57 = NULL;
        if(match_cons(t, sym_As_2))
          {
            ATerm j_35 = ATgetArgument(t, 0);
            if(!(match_cons(j_35, sym_Wld_0)))
              _fail(t);
            w_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_57;
        return(t);
      }
      t = try_1_0(j_8, t);
      return(t);
    }
    t = topdown_1_0(h_8, t);
    {
      ATerm l_8 (ATerm t)
      {
        t = try_1_0(Propagate_0_0, t);
        return(t);
      }
      t = topdown_1_0(l_8, t);
      t = collect_substitutions_0_0(t);
      if(match_cons(t, sym__2))
        {
          t_57 = ATgetArgument(t, 0);
          u_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_57;
      t = collect_offsets_0_0(t);
      v_57 = t;
      t = (ATerm) ATmakeAppl(sym_Matrix_2, v_57, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, t_57, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_57), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_k_20)))))));
    }
  }
  return(t);
}
ATerm MatchToMatrix_0_0 (ATerm t)
{
  ATerm x_57 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      x_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_57;
  t = term_to_matrix_0_0(t);
  return(t);
}
ATerm Scope_2_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t)
{
  ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL;
  d_58 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_57 = ATgetArgument(t, 0);
      a_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_58);
  y_57 = t;
  t = z_57;
  t = u_102(t);
  b_58 = t;
  t = a_58;
  t = v_102(t);
  c_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, b_58, c_58), y_57);
  return(t);
}
ATerm Seq_2_0 (ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL;
  l_58 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_58 = ATgetArgument(t, 0);
      i_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_58);
  g_58 = t;
  t = h_58;
  t = y_102(t);
  j_58 = t;
  t = i_58;
  t = z_102(t);
  k_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, j_58, k_58), g_58);
  return(t);
}
ATerm LChoice_2_0 (ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
  t_58 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      p_58 = ATgetArgument(t, 0);
      q_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_58);
  o_58 = t;
  t = p_58;
  t = a_103(t);
  r_58 = t;
  t = q_58;
  t = b_103(t);
  s_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, r_58, s_58), o_58);
  return(t);
}
ATerm Choice_2_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL;
  b_59 = t;
  if(match_cons(t, sym_Choice_2))
    {
      x_58 = ATgetArgument(t, 0);
      y_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_59);
  w_58 = t;
  t = x_58;
  t = y_101(t);
  z_58 = t;
  t = y_58;
  t = z_101(t);
  a_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, z_58, a_59), w_58);
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm k_35 = t;
  int l_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_35 = t;
      int n_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Choice_2_0(_id, _id, t);
          ;
          LocalPopChoice(n_35);
        }
      else
        {
          t = m_35;
          t = LChoice_2_0(_id, _id, t);
        }
      {
        ATerm e_59 (ATerm t)
        {
          ATerm o_35 = t;
          int r_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Choice_2_0(e_59, e_59, t);
              ;
              LocalPopChoice(r_35);
            }
          else
            {
              t = o_35;
              {
                ATerm t_35 = t;
                int y_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2_0(e_59, e_59, t);
                    ;
                    LocalPopChoice(y_35);
                  }
                else
                  {
                    t = t_35;
                    {
                      ATerm f_59 (ATerm t)
                      {
                        ATerm z_35 = t;
                        int a_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Seq_2_0(f_59, match_to_matrix_0_0, t);
                            ;
                            LocalPopChoice(a_36);
                          }
                        else
                          {
                            t = z_35;
                            {
                              ATerm b_36 = t;
                              int c_36 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Scope_2_0(_id, f_59, t);
                                  ;
                                  LocalPopChoice(c_36);
                                }
                              else
                                {
                                  t = b_36;
                                  {
                                    ATerm d_36 = t;
                                    int e_36 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = MatchToMatrix_0_0(t);
                                        ;
                                        LocalPopChoice(e_36);
                                      }
                                    else
                                      {
                                        t = d_36;
                                        t = SRTS_all(match_to_matrix_0_0, t);
                                      }
                                  }
                                }
                            }
                          }
                        return(t);
                      }
                      t = f_59(t);
                    }
                  }
              }
            }
          return(t);
        }
        t = e_59(t);
      }
      ;
      LocalPopChoice(l_35);
    }
  else
    {
      t = k_35;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  {
    ATerm m_8 (ATerm t)
    {
      ATerm n_8 (ATerm t)
      {
        ATerm u_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = MatrixMerge_0_0(t);
            ;
            LocalPopChoice(v_36);
          }
        else
          {
            t = u_36;
            t = Simplify_0_0(t);
          }
        return(t);
      }
      t = repeat_1_0(n_8, t);
      return(t);
    }
    t = bottomup_1_0(m_8, t);
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
ATerm SDefT_4_0 (ATerm c_105 (ATerm), ATerm d_105 (ATerm), ATerm e_105 (ATerm), ATerm f_105 (ATerm), ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL;
  p_59 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      h_59 = ATgetArgument(t, 0);
      i_59 = ATgetArgument(t, 1);
      j_59 = ATgetArgument(t, 2);
      k_59 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_59);
  g_59 = t;
  t = h_59;
  t = c_105(t);
  l_59 = t;
  t = i_59;
  t = d_105(t);
  m_59 = t;
  t = j_59;
  t = e_105(t);
  n_59 = t;
  t = k_59;
  t = f_105(t);
  o_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, l_59, m_59, n_59, o_59), g_59);
  return(t);
}
ATerm SDef_3_0 (ATerm z_104 (ATerm), ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL;
  z_59 = t;
  if(match_cons(t, sym_SDef_3))
    {
      t_59 = ATgetArgument(t, 0);
      u_59 = ATgetArgument(t, 1);
      v_59 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_59);
  s_59 = t;
  t = t_59;
  t = z_104(t);
  w_59 = t;
  t = u_59;
  t = a_105(t);
  x_59 = t;
  t = v_59;
  t = b_105(t);
  y_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, w_59, x_59, y_59), s_59);
  return(t);
}
ATerm Strategies_1_0 (ATerm c_98 (ATerm), ATerm t)
{
  ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL;
  f_60 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_60);
  c_60 = t;
  t = d_60;
  t = c_98(t);
  e_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, e_60), c_60);
  return(t);
}
ATerm Specification_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL;
  l_60 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_60);
  i_60 = t;
  t = j_60;
  t = h_98(t);
  k_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, k_60), i_60);
  return(t);
}
ATerm apply_to_bodies_1_0 (ATerm m_112 (ATerm), ATerm t)
{
  ATerm p_8 (ATerm t)
  {
    ATerm q_8 (ATerm t)
    {
      ATerm r_8 (ATerm t)
      {
        ATerm u_8 (ATerm t)
        {
          ATerm v_8 (ATerm t)
          {
            ATerm w_36 = t;
            int x_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SDef_3_0(_id, _id, m_112, t);
                ;
                LocalPopChoice(x_36);
              }
            else
              {
                t = w_36;
                t = SDefT_4_0(_id, _id, _id, m_112, t);
              }
            return(t);
          }
          t = map_1_0(v_8, t);
          return(t);
        }
        t = Strategies_1_0(u_8, t);
        return(t);
      }
      ATerm t_8 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(r_8, t_8, t);
      return(t);
    }
    t = Cons_2_0(_id, q_8, t);
    return(t);
  }
  t = Specification_1_0(p_8, t);
  return(t);
}
ATerm _2_0 (ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL,s_60 = NULL,t_60 = NULL;
  t_60 = t;
  if(match_cons(t, sym__2))
    {
      p_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_60);
  o_60 = t;
  t = p_60;
  t = p_96(t);
  r_60 = t;
  t = q_60;
  t = q_96(t);
  s_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, r_60, s_60), o_60);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_60 = NULL,i_61 = NULL;
  w_60 = t;
  t = term_y_36;
  t = whoami_0_0(t);
  i_61 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), i_61), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = w_60;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(a_37);
    }
  else
    {
      t = z_36;
      {
        ATerm l_61 = NULL,r_61 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_61 = ATgetFirst((ATermList) t);
            r_61 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_61;
        {
          ATerm w_8 (ATerm t)
          {
            t = r_61;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(w_8, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL;
  v_61 = t;
  t = SSL_explode_term(v_61);
  if(match_cons(t, sym__2))
    {
      ATerm b_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_61;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  ATerm x_61 (ATerm t)
  {
    ATerm d_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, x_61, t);
        ;
        LocalPopChoice(g_37);
      }
    else
      {
        t = d_37;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_121(t);
      }
    return(t);
  }
  t = x_61(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm y_61 = NULL,z_61 = NULL;
  if(match_cons(t, sym__2))
    {
      z_61 = ATgetArgument(t, 0);
      y_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_61;
  {
    ATerm x_8 (ATerm t)
    {
      t = y_61;
      return(t);
    }
    t = at_end_1_0(x_8, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(m_37);
    }
  else
    {
      t = h_37;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm a_62 = NULL;
  ATerm y_8 (ATerm t)
  {
    ATerm b_62 = NULL;
    b_62 = t;
    t = SSL_explode_string(b_62);
    return(t);
  }
  ATerm z_8 (ATerm t)
  {
    ATerm c_62 = NULL;
    c_62 = t;
    t = SSL_explode_string(c_62);
    return(t);
  }
  t = _2_0(y_8, z_8, t);
  t = conc_0_0(t);
  a_62 = t;
  t = SSL_implode_string(a_62);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_62 = NULL;
      i_62 = t;
      t = SSL_is_string(i_62);
      ;
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_9 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(b_9, t);
            ;
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            {
              ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
              m_62 = t;
              if(match_cons(t, sym_Path_1))
                {
                  n_62 = ATgetArgument(t, 0);
                  t = n_62;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      n_62 = ATgetArgument(t, 0);
                      t = n_62;
                      {
                        ATerm t_37 = t;
                        int w_37 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_37);
                          }
                        else
                          {
                            t = t_37;
                            {
                              ATerm c_9 (ATerm t)
                              {
                                t = term_x_37;
                                return(t);
                              }
                              t = debug_1_0(c_9, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_62 = NULL,t_62 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          n_62 = ATgetArgument(t, 0);
                          o_62 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = n_62;
                      t = eval_config_0_0(t);
                      s_62 = t;
                      t = o_62;
                      t = eval_config_0_0(t);
                      t_62 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_62, t_62);
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
  ATerm w_62 = NULL;
  w_62 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_62);
  {
    ATerm d_9 (ATerm t)
    {
      ATerm x_62 = NULL;
      t = eval_config_0_0(t);
      x_62 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), w_62, x_62);
      t = x_62;
      return(t);
    }
    t = try_1_0(d_9, t);
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_137 (ATerm), ATerm t)
{
  ATerm e_9 (ATerm t)
  {
    ATerm y_62 = NULL,z_62 = NULL;
    y_62 = t;
    t = term_y_37;
    t = get_config_0_0(t);
    z_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_62, term_a_38);
    t = geq_0_0(t);
    t = y_62;
    t = o_137(t);
    return(t);
  }
  t = try_1_0(e_9, t);
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm f_9 (ATerm t)
  {
    ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_38 = ATgetArgument(t, 0);
        if(match_cons(b_38, sym_Stream_1))
          {
            a_63 = ATgetArgument(b_38, 0);
          }
        else
          _fail(t);
        b_63 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(a_63, b_63);
    c_63 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), c_63);
    d_63 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, d_63);
    return(t);
  }
  t = WriteToFile_1_0(f_9, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_136 (ATerm), ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL;
  if(match_cons(t, sym__2))
    {
      e_63 = ATgetArgument(t, 0);
      f_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_63, term_c_38);
  t = open_stream_0_0(t);
  g_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_63, f_63);
  t = k_136(t);
  t = fclose_0_0(t);
  t = f_63;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm g_9 (ATerm t)
  {
    ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm d_38 = ATgetArgument(t, 0);
        if(match_cons(d_38, sym_Stream_1))
          {
            h_63 = ATgetArgument(d_38, 0);
          }
        else
          _fail(t);
        i_63 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(h_63, i_63);
    j_63 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, j_63);
    return(t);
  }
  t = WriteToFile_1_0(g_9, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL;
  k_63 = t;
  {
    ATerm h_9 (ATerm t)
    {
      ATerm h_38 = t;
      int i_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_9 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                l_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(i_9, t);
          ;
          LocalPopChoice(i_38);
        }
      else
        {
          t = h_38;
          t = term_j_38;
          l_63 = t;
        }
      return(t);
    }
    t = _2_0(h_9, _id, t);
    t = k_63;
    {
      ATerm j_9 (ATerm t)
      {
        ATerm k_9 (ATerm t)
        {
          t = not_null(l_63);
          return(t);
        }
        t = split_2_0(k_9, _id, t);
        return(t);
      }
      t = _2_0(_id, j_9, t);
      {
        ATerm k_38 = t;
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_9 (ATerm t)
            {
              ATerm m_9 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(m_9, t);
              return(t);
            }
            t = _2_0(l_9, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(l_38);
          }
        else
          {
            t = k_38;
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
ATerm apply_strategy_1_0 (ATerm m_139 (ATerm), ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,u_63 = NULL,a_64 = NULL,d_64 = NULL;
  m_63 = t;
  t = dtime_0_0(t);
  t = m_63;
  t = m_139(t);
  n_63 = t;
  t = dtime_0_0(t);
  u_63 = t;
  t = n_63;
  if(match_cons(t, sym__2))
    {
      a_64 = ATgetArgument(t, 0);
      d_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_64), (ATerm) ATmakeAppl(sym_Runtime_1, u_63)), d_64);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_64 (ATerm l_64, ATerm t)
  {
    t = SSL_fclose(l_64);
    return(t);
  }
  ATerm r_64 = NULL,s_64 = NULL;
  s_64 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_64 = ATgetArgument(t, 0);
      {
        ATerm m_38 = t;
        int n_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_64);
            ;
            LocalPopChoice(n_38);
          }
        else
          {
            t = m_38;
            t = u_64(s_64, t);
          }
      }
    }
  else
    {
      t = u_64(s_64, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm w_135 (ATerm), ATerm t)
{
  ATerm v_64 = NULL,w_64 = NULL;
  v_64 = t;
  t = w_135(t);
  w_64 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_64), w_64));
  t = v_64;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_64 = NULL;
  t = SSL_stdin_stream();
  x_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_64);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_64 = NULL;
  t = SSL_stdout_stream();
  y_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_64);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_64 = NULL;
  t = SSL_stderr_stream();
  z_64 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_64);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm b_65 = NULL;
  b_65 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_65;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_65;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_65;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_38 = ATgetArgument(t, 0);
      ATerm r_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 = NULL,o_5 = NULL;
        i_5 = t;
        t = SSL_explode_term(i_5);
        if(match_cons(t, sym__2))
          {
            ATerm u_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_38) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm v_38 = ATgetArgument(t, 1);
              if(((ATgetType(v_38) == AT_LIST) && !(ATisEmpty(v_38))))
                {
                  o_5 = ATgetFirst((ATermList) v_38);
                  {
                    ATerm w_38 = (ATerm) ATgetNext((ATermList) v_38);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_5;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        {
          ATerm x_38 = t;
          int y_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_65 = NULL,g_65 = NULL,h_65 = NULL;
              ATerm n_9 (ATerm t)
              {
                ATerm i_65 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    i_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = i_65;
                return(t);
              }
              t = _2_0(n_9, _id, t);
              if(match_cons(t, sym__2))
                {
                  f_65 = ATgetArgument(t, 0);
                  g_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(f_65, g_65);
              h_65 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, h_65);
              ;
              LocalPopChoice(y_38);
            }
          else
            {
              t = x_38;
              {
                ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL;
                ATerm o_9 (ATerm t)
                {
                  ATerm m_65 = NULL;
                  m_65 = t;
                  t = SSL_is_string(m_65);
                  return(t);
                }
                t = _2_0(o_9, _id, t);
                if(match_cons(t, sym__2))
                  {
                    j_65 = ATgetArgument(t, 0);
                    k_65 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(j_65, k_65);
                l_65 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, l_65);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_65 = NULL,o_65 = NULL,p_65 = NULL;
  ATerm z_38 = t;
  int a_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_65 = NULL;
      q_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_65, term_b_39);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(a_39);
    }
  else
    {
      t = z_38;
      {
        ATerm p_9 (ATerm t)
        {
          t = term_c_39;
          return(t);
        }
        t = debug_1_0(p_9, t);
        _fail(t);
      }
    }
  n_65 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(p_65);
  o_65 = t;
  t = n_65;
  t = fclose_0_0(t);
  t = o_65;
  return(t);
}
ATerm split_2_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL;
  s_65 = t;
  t = x_117(t);
  t_65 = t;
  t = s_65;
  t = y_117(t);
  u_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_65, u_65);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL;
  v_65 = t;
  {
    ATerm d_39 = t;
    int e_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_9 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              w_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(q_9, t);
        ;
        LocalPopChoice(e_39);
      }
    else
      {
        t = d_39;
        t = term_f_39;
        w_65 = t;
      }
    t = v_65;
    {
      ATerm r_9 (ATerm t)
      {
        t = not_null(w_65);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, r_9, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm s_9 (ATerm t)
  {
    ATerm y_65 = NULL;
    y_65 = t;
    if(match_string(t, "-k"))
      {
        t = y_65;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = y_65;
      }
    return(t);
  }
  ATerm t_9 (ATerm t)
  {
    ATerm z_65 = NULL,a_66 = NULL;
    z_65 = t;
    t = SSL_string_to_int(z_65);
    a_66 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), a_66);
    t = z_65;
    return(t);
  }
  ATerm u_9 (ATerm t)
  {
    t = term_g_39;
    return(t);
  }
  t = ArgOption_3_0(s_9, t_9, u_9, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm h_39 = t;
  int i_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_9 (ATerm t)
      {
        ATerm c_66 = NULL;
        c_66 = t;
        if(match_string(t, "-S"))
          {
            t = c_66;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = c_66;
          }
        return(t);
      }
      ATerm w_9 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_j_39;
        return(t);
      }
      ATerm x_9 (ATerm t)
      {
        t = term_k_39;
        return(t);
      }
      t = Option_3_0(v_9, w_9, x_9, t);
      ;
      LocalPopChoice(i_39);
    }
  else
    {
      t = h_39;
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_9 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm z_9 (ATerm t)
            {
              ATerm d_66 = NULL,e_66 = NULL;
              d_66 = t;
              t = SSL_string_to_int(d_66);
              e_66 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_66);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, d_66);
              return(t);
            }
            ATerm a_10 (ATerm t)
            {
              t = term_n_39;
              return(t);
            }
            t = ArgOption_3_0(y_9, z_9, a_10, t);
            ;
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            {
              ATerm b_10 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm c_10 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_o_39;
                return(t);
              }
              ATerm d_10 (ATerm t)
              {
                t = term_p_39;
                return(t);
              }
              t = Option_3_0(b_10, c_10, d_10, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm e_10 (ATerm t)
  {
    ATerm g_66 = NULL;
    g_66 = t;
    if(match_string(t, "-o"))
      {
        t = g_66;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = g_66;
      }
    return(t);
  }
  ATerm f_10 (ATerm t)
  {
    ATerm h_66 = NULL;
    h_66 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), h_66);
    t = (ATerm) ATmakeAppl(sym_Output_1, h_66);
    return(t);
  }
  ATerm g_10 (ATerm t)
  {
    t = term_s_39;
    return(t);
  }
  t = ArgOption_3_0(e_10, f_10, g_10, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm t_39 = t;
  int u_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(u_39);
    }
  else
    {
      t = t_39;
      {
        ATerm h_10 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm i_10 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_v_39;
          return(t);
        }
        ATerm n_10 (ATerm t)
        {
          t = term_w_39;
          return(t);
        }
        t = Option_3_0(h_10, i_10, n_10, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL;
  k_66 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = k_66;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm s_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_66 = ATgetFirst((ATermList) t);
          m_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_66;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_66 = ATgetFirst((ATermList) t);
          o_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_66;
      t = i_0(t);
      t = n_66;
      t = k_0(t);
      s_66 = t;
      t = (ATerm) ATinsert(CheckATermList(o_66), s_66);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm o_10 (ATerm t)
  {
    ATerm u_66 = NULL;
    u_66 = t;
    if(match_string(t, "-i"))
      {
        t = u_66;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_66;
      }
    return(t);
  }
  ATerm q_10 (ATerm t)
  {
    ATerm v_66 = NULL;
    v_66 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_66);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_66);
    return(t);
  }
  ATerm r_10 (ATerm t)
  {
    t = term_x_39;
    return(t);
  }
  t = ArgOption_3_0(o_10, q_10, r_10, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      {
        ATerm a_40 = t;
        int b_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(b_40);
          }
        else
          {
            t = a_40;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_66 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_36;
  t = whoami_0_0(t);
  w_66 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_66));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_g_40;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm b_125 (ATerm), ATerm c_125 (ATerm), ATerm t)
{
  ATerm i_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_125(t);
      ;
      LocalPopChoice(j_40);
    }
  else
    {
      t = i_40;
      {
        ATerm z_66 = NULL,a_67 = NULL,d_67 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_66 = ATgetFirst((ATermList) t);
            a_67 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_67;
        t = foldr_2_0(b_125, c_125, t);
        d_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_66, d_67);
        t = c_125(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm t)
{
  ATerm e_67 = NULL,f_67 = NULL;
  e_67 = t;
  t = SSL_explode_term(e_67);
  if(match_cons(t, sym__2))
    {
      ATerm k_40 = ATgetArgument(t, 0);
      f_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_67;
  t = foldr_2_0(z_122, a_123, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_67 = NULL;
  t = times_0_0(t);
  {
    ATerm s_10 (ATerm t)
    {
      t = term_k_20;
      return(t);
    }
    ATerm t_10 (ATerm t)
    {
      ATerm h_67 = NULL,i_67 = NULL;
      if(match_cons(t, sym__2))
        {
          h_67 = ATgetArgument(t, 0);
          i_67 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm m_40 = t;
        int n_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(h_67, i_67);
            ;
            LocalPopChoice(n_40);
          }
        else
          {
            t = m_40;
            t = SSL_addr(h_67, i_67);
          }
      }
      return(t);
    }
    t = crush_2_0(s_10, t_10, t);
    g_67 = t;
    t = SSL_TicksToSeconds(g_67);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL;
  r_67 = t;
  if(match_cons(t, sym__2))
    {
      s_67 = ATgetArgument(t, 0);
      t_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_67;
        if((s_67 != t))
          {
            _fail(t);
          }
        t = r_67;
        ;
        LocalPopChoice(p_40);
      }
    else
      {
        t = o_40;
        t = r_67;
        {
          ATerm q_40 = t;
          int r_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_67, t_67);
              ;
              LocalPopChoice(r_40);
            }
          else
            {
              t = q_40;
              t = SSL_gtr(s_67, t_67);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_67, t_67);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_137 (ATerm), ATerm t)
{
  ATerm v_10 (ATerm t)
  {
    ATerm w_67 = NULL,x_67 = NULL;
    w_67 = t;
    t = term_y_37;
    t = get_config_0_0(t);
    x_67 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_67, term_o_21);
    t = geq_0_0(t);
    t = w_67;
    t = n_137(t);
    return(t);
  }
  t = try_1_0(v_10, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm w_10 (ATerm t)
  {
    ATerm z_67 = NULL,a_68 = NULL;
    t = run_time_0_0(t);
    z_67 = t;
    t = term_y_36;
    t = whoami_0_0(t);
    a_68 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), z_67), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), a_68));
    t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_40), z_67), term_t_40), a_68));
    return(t);
  }
  t = if_verbose1_1_0(w_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm k_140 (ATerm), ATerm t)
{
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_40);
    }
  else
    {
      t = v_40;
      {
        ATerm x_10 (ATerm t)
        {
          ATerm y_40 = t;
          int z_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
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
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_41);
                  }
                else
                  {
                    t = a_41;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(x_10, t);
      }
    }
  t = k_140(t);
  return(t);
}
ATerm map_1_0 (ATerm m_120 (ATerm), ATerm t)
{
  ATerm c_68 (ATerm t)
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = Cons_2_0(m_120, c_68, t);
      }
    return(t);
  }
  t = c_68(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_68 = ATgetFirst((ATermList) t);
      f_68 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_68 = NULL,k_68 = NULL;
        t = f_68;
        t = g_0(t);
        j_68 = t;
        t = e_68;
        t = e_0(t);
        k_68 = t;
        t = f_68;
        {
          ATerm y_10 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(j_68), k_68);
            return(t);
          }
          t = reverse_acc_2_0(e_0, y_10, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_36;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm z_10 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, z_10, t);
  return(t);
}
ATerm Program_1_0 (ATerm g_112 (ATerm), ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL;
  o_68 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_68);
  l_68 = t;
  t = m_68;
  t = g_112(t);
  n_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, n_68), l_68);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_40;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_41);
    }
  else
    {
      t = e_41;
      {
        ATerm a_11 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(a_11, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_g_41;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm b_11 (ATerm t)
    {
      ATerm r_68 = NULL;
      r_68 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, r_68), term_h_41);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(b_11, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
  v_68 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      t_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_68);
  s_68 = t;
  t = t_68;
  t = h_112(t);
  u_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, u_68), s_68);
  return(t);
}
ATerm fetch_1_0 (ATerm x_120 (ATerm), ATerm t)
{
  ATerm y_68 (ATerm t)
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(x_120, _id, t);
        ;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        t = Cons_2_0(_id, y_68, t);
      }
    return(t);
  }
  t = y_68(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_141 (ATerm), ATerm t)
{
  t = fetch_1_0(k_141, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL;
  a_69 = t;
  {
    ATerm k_41 = t;
    int l_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_69;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_41 = ATgetFirst((ATermList) t);
                ATerm n_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_69;
          }
        ;
        LocalPopChoice(l_41);
      }
    else
      {
        t = k_41;
        t = (ATerm) ATinsert(ATempty, a_69);
      }
    b_69 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), b_69);
    t = a_69;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_g_40;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_117(t);
      ;
      LocalPopChoice(p_41);
    }
  else
    {
      t = o_41;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm q_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_11 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm d_11 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_y_41;
        return(t);
      }
      ATerm e_11 (ATerm t)
      {
        t = term_z_41;
        return(t);
      }
      t = Option_3_0(c_11, d_11, e_11, t);
      ;
      LocalPopChoice(v_41);
    }
  else
    {
      t = q_41;
      {
        ATerm g_11 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm h_11 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_a_42;
          return(t);
        }
        ATerm i_11 (ATerm t)
        {
          t = term_b_42;
          return(t);
        }
        t = Option_3_0(g_11, h_11, i_11, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL;
  if(match_cons(t, sym__3))
    {
      h_69 = ATgetArgument(t, 0);
      i_69 = ATgetArgument(t, 1);
      j_69 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_69, i_69);
  {
    ATerm c_42 = t;
    int d_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_42 = ATgetArgument(t, 0);
            ATerm f_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_69, i_69);
        ;
        LocalPopChoice(d_42);
      }
    else
      {
        t = c_42;
        t = (ATerm) ATempty;
      }
    k_69 = t;
    t = SSL_table_put(h_69, i_69, (ATerm) ATinsert(CheckATermList(k_69), j_69));
    t = (ATerm) ATmakeAppl(sym__3, h_69, i_69, j_69);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_142 (ATerm), ATerm t)
{
  ATerm p_69 = NULL;
  t = term_y_36;
  t = p_142(t);
  p_69 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_g_42, term_h_42, p_69);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL;
  r_69 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = r_69;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm w_69 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_69 = ATgetFirst((ATermList) t);
          t_69 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_69;
      t = a_0(t);
      t = term_y_36;
      t = c_0(t);
      w_69 = t;
      t = (ATerm) ATinsert(CheckATermList(t_69), w_69);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm j_11 (ATerm t)
  {
    ATerm y_69 = NULL;
    y_69 = t;
    if(match_string(t, "--help"))
      {
        t = y_69;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = y_69;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = y_69;
          }
      }
    return(t);
  }
  ATerm k_11 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_m_42;
    return(t);
  }
  ATerm l_11 (ATerm t)
  {
    t = term_p_42;
    return(t);
  }
  t = Option_3_0(j_11, k_11, l_11, t);
  return(t);
}
ATerm Cons_2_0 (ATerm y_97 (ATerm), ATerm z_97 (ATerm), ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL;
  e_70 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_70 = ATgetFirst((ATermList) t);
      b_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_70);
  z_69 = t;
  t = a_70;
  t = y_97(t);
  c_70 = t;
  t = b_70;
  t = z_97(t);
  d_70 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(d_70), c_70), z_69);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_142 (ATerm), ATerm t)
{
  ATerm n_70 = NULL;
  n_70 = t;
  {
    ATerm m_11 (ATerm t)
    {
      t = term_q_42;
      t = n_142(t);
      return(t);
    }
    t = try_1_0(m_11, t);
    t = n_70;
    {
      ATerm n_11 (ATerm t)
      {
        ATerm o_70 = NULL;
        o_70 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), o_70);
        t = (ATerm) ATmakeAppl(sym_Program_1, o_70);
        return(t);
      }
      ATerm o_11 (ATerm t)
      {
        ATerm r_42 = t;
        int s_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_42 = t;
            int u_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_42);
              }
            else
              {
                t = t_42;
                t = n_142(t);
                t = Cons_2_0(_id, o_11, t);
              }
            ;
            LocalPopChoice(s_42);
          }
        else
          {
            t = r_42;
            {
              ATerm q_70 = NULL,r_70 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_70 = ATgetFirst((ATermList) t);
                  r_70 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_70), (ATerm) ATmakeAppl(sym_Undefined_1, q_70));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_11, o_11, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm m_142 (ATerm), ATerm t)
{
  ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL;
  x_70 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = x_70;
  {
    ATerm p_11 (ATerm t)
    {
      ATerm v_42 = t;
      int w_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_142(t);
          ;
          LocalPopChoice(w_42);
        }
      else
        {
          t = v_42;
          {
            ATerm x_42 = t;
            int y_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(y_42);
              }
            else
              {
                t = x_42;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_11, t);
    {
      ATerm q_11 (ATerm t)
      {
        ATerm z_42 = t;
        int a_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_71 = NULL;
            e_71 = t;
            {
              ATerm f_43 = t;
              int g_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_71;
                  {
                    ATerm h_43 = t;
                    int i_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_x_40;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(i_43);
                      }
                    else
                      {
                        t = h_43;
                        {
                          ATerm r_11 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(r_11, t);
                        }
                      }
                    t = e_71;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(g_43);
                }
              else
                {
                  t = f_43;
                  t = term_x_41;
                  t = get_config_0_0(t);
                  t = e_71;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(a_43);
          }
        else
          {
            t = z_42;
            {
              ATerm s_11 (ATerm t)
              {
                ATerm t_11 (ATerm t)
                {
                  y_70 = t;
                  return(t);
                }
                t = Undefined_1_0(t_11, t);
                return(t);
              }
              t = option_defined_1_0(s_11, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_70)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_70)), term_n_43));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(q_11, t);
      z_70 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = z_70;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm t)
{
  ATerm a_9 = NULL;
  t = parse_options_1_0(m_140, t);
  a_9 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), a_9);
  t = a_9;
  t = o_140(t);
  {
    ATerm o_43 = t;
    int p_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_140, t);
        ;
        LocalPopChoice(p_43);
      }
    else
      {
        t = o_43;
        {
          ATerm q_43 = t;
          int v_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_140(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(v_43);
            }
          else
            {
              t = q_43;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm t)
{
  ATerm u_11 (ATerm t)
  {
    ATerm w_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_140(t);
        ;
        LocalPopChoice(x_43);
      }
    else
      {
        t = w_43;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm v_11 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(b_140, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(u_11, d_140, e_140, v_11, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm t)
{
  ATerm w_11 (ATerm t)
  {
    ATerm y_11 (ATerm t)
    {
      ATerm h_71 = NULL,i_71 = NULL;
      h_71 = t;
      t = term_g_40;
      t = get_config_0_0(t);
      i_71 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, i_71));
      t = h_71;
      return(t);
    }
    t = if_verbose2_1_0(y_11, t);
    return(t);
  }
  t = iowrap_4_0(v_139, w_139, x_139, w_11, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm t_139 (ATerm), ATerm u_139 (ATerm), ATerm t)
{
  t = iowrap_3_0(t_139, u_139, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm q_139 (ATerm), ATerm t)
{
  ATerm b_12 (ATerm t)
  {
    t = _2_0(_id, q_139, t);
    return(t);
  }
  t = iowrap_2_0(b_12, _fail, t);
  return(t);
}
ATerm compile_match_comp_0_0 (ATerm t)
{
  ATerm c_12 (ATerm t)
  {
    t = apply_to_bodies_1_0(match_to_dfa_0_0, t);
    return(t);
  }
  t = iowrap_1_0(c_12, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = compile_match_comp_0_0(t);
  return(t);
}
