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
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_RDefT_4;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
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
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Some_1;
Symbol sym_Undefined_0;
Symbol sym_Anno_2;
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
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
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
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_y_35;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_i_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_a_35;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_f_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_b_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_n_31;
ATerm term_k_31;
ATerm term_t_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_m_30;
ATerm term_j_30;
ATerm term_c_30;
ATerm term_y_29;
ATerm term_z_28;
ATerm term_b_25;
ATerm term_l_7;
ATerm term_f_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
void init_constant_terms (void)
{
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_Sort_2, term_w_6, (ATerm) ATempty);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_6);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym__2, term_a_32, term_b_32);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_32);
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym__2, term_g_32, term_s_31);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_q_32, term_r_32);
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym__2, term_o_34, term_s_31);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym__2, term_r_34, term_s_31);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(sym__2, term_p_33, term_s_31);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym__2, term_t_30, term_s_31);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm e_0 (ATerm);
ATerm h_0 (ATerm);
ATerm l_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm a_1 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm Anno__Cong_____2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm i_1 (ATerm);
ATerm h_5 (ATerm l_91, ATerm k_91, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm z_1 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm g_12 (ATerm m_90, ATerm s_90, ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm at_end_1_0 (ATerm w_125 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm m_81 (ATerm e_81, ATerm);
ATerm conc_0_0 (ATerm);
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm j_12 (ATerm x_90, ATerm f_91, ATerm e_91, ATerm);
ATerm pat_td_1_0 (ATerm k_112 (ATerm), ATerm);
ATerm new_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm MatchingCongruence_0_0 (ATerm);
ATerm repeat_1_0 (ATerm t_123 (ATerm), ATerm);
ATerm bottomup_1_0 (ATerm f_114 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm k_3 (ATerm);
ATerm define_congruences_0_0 (ATerm);
ATerm map_1_0 (ATerm g_125 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm);
ATerm k_12 (ATerm b_74, ATerm c_74, ATerm);
ATerm l_12 (ATerm p_77, ATerm q_77, ATerm);
ATerm n_12 (ATerm m_135 (ATerm), ATerm t_555, ATerm t_77, ATerm);
ATerm m_12 (ATerm l_77, ATerm m_77, ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm output_1_0 (ATerm v_139 (ATerm), ATerm);
ATerm i_91 (ATerm f_90, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm p_12 (ATerm r_77, ATerm);
ATerm q_12 (ATerm d_74, ATerm e_74, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_94 (ATerm u_91, ATerm);
ATerm b_94 (ATerm f_92, ATerm k_92, ATerm l_92, ATerm);
ATerm c_94 (ATerm m_93, ATerm n_93, ATerm p_93, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm w_139 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm y_12 (ATerm s_78, ATerm t_78, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm j_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm w_12 (ATerm f_69, ATerm g_69, ATerm e_69, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm r_12 (ATerm j_67, ATerm k_67, ATerm);
ATerm foldr_2_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm w_136 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_4 (ATerm);
ATerm need_help_1_0 (ATerm m_139 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm q_125 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm u_12 (ATerm c_60, ATerm d_60, ATerm);
ATerm debug_1_0 (ATerm k_135 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm y_4 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm v_12 (ATerm w_70, ATerm x_70, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm j_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm p_141 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm u_5 (ATerm);
ATerm parse_options_1_0 (ATerm o_141 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_139 (ATerm), ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm);
ATerm w_5 (ATerm);
ATerm y_5 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm b_6 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm e_0 (ATerm t)
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_8 = NULL,b_9 = NULL,h_9 = NULL,j_0 = NULL,a_5 = NULL;
      y_8 = t;
      if(match_cons(t, sym_Op_2))
        {
          b_9 = ATgetArgument(t, 0);
          h_9 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_8);
      j_0 = t;
      t = b_9;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, b_9, h_9);
      a_5 = t;
      t = SSLsetAnnotations(a_5, j_0);
      ;
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      t = Anno__Cong_____2_0(h_0, l_0, t);
    }
  return(t);
}
ATerm h_0 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL,o_9 = NULL,c_5 = NULL;
  o_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_9);
  i_9 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_9);
  c_5 = t;
  t = SSLsetAnnotations(c_5, i_9);
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm q_10 = NULL,z_10 = NULL,i_11 = NULL;
  q_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_10;
    }
  else
    {
      ATerm w_0 = NULL,d_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_10 = ATgetFirst((ATermList) t);
          i_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_10);
      w_0 = t;
      t = z_10;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      t = i_11;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(i_11), z_10);
      d_5 = t;
      t = SSLsetAnnotations(d_5, w_0);
    }
  return(t);
}
ATerm o_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_6 = ATgetArgument(t, 0);
      if(((ATgetType(l_6) != AT_LIST) || !(ATisEmpty(l_6))))
        _fail(t);
      {
        ATerm m_6 = ATgetArgument(t, 1);
        if(((ATgetType(m_6) != AT_LIST) || !(ATisEmpty(m_6))))
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
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_6 = ATgetArgument(t, 0);
      if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
        {
          m_17 = ATgetFirst((ATermList) n_6);
          n_17 = (ATerm) ATgetNext((ATermList) n_6);
        }
      else
        _fail(t);
      {
        ATerm o_6 = ATgetArgument(t, 1);
        if(((ATgetType(o_6) == AT_LIST) && !(ATisEmpty(o_6))))
          {
            o_17 = ATgetFirst((ATermList) o_6);
            p_17 = (ATerm) ATgetNext((ATermList) o_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_17, o_17), (ATerm) ATmakeAppl(sym__2, n_17, p_17));
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym__2))
    {
      q_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_17), q_17);
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm s_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym__2))
    {
      s_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_17), (ATerm) ATmakeAppl(sym_Match_1, z_17));
  return(t);
}
ATerm s_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      if(((ATgetType(p_6) != AT_LIST) || !(ATisEmpty(p_6))))
        _fail(t);
      {
        ATerm s_6 = ATgetArgument(t, 1);
        if(((ATgetType(s_6) != AT_LIST) || !(ATisEmpty(s_6))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL,e_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
        {
          x_24 = ATgetFirst((ATermList) t_6);
          y_24 = (ATerm) ATgetNext((ATermList) t_6);
        }
      else
        _fail(t);
      {
        ATerm v_6 = ATgetArgument(t, 1);
        if(((ATgetType(v_6) == AT_LIST) && !(ATisEmpty(v_6))))
          {
            z_24 = ATgetFirst((ATermList) v_6);
            e_25 = (ATerm) ATgetNext((ATermList) v_6);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_24, z_24), (ATerm) ATmakeAppl(sym__2, y_24, e_25));
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_25), f_25);
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL;
  if(match_cons(t, sym__2))
    {
      h_25 = ATgetArgument(t, 0);
      i_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_25), (ATerm) ATmakeAppl(sym_Match_1, i_25));
  return(t);
}
ATerm x_0 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm y_54 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_54, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_6), term_y_6));
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL;
  a_55 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_54 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, z_54, term_y_6);
    }
  else
    {
      t = a_55;
    }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm l_55 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_55, term_y_6);
  return(t);
}
ATerm b_1 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL;
  n_55 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_55 = ATgetArgument(t, 0);
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, m_55, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_6), term_y_6));
            ;
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
            t = n_55;
          }
      }
    }
  else
    {
      t = n_55;
    }
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm y_55 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_55, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_6), term_y_6));
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL;
  a_56 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_55 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, z_55, term_y_6);
    }
  else
    {
      t = a_56;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm z_58 (ATerm q_6, ATerm t)
    {
      t = q_6;
      {
        ATerm b_7 = t;
        if((PushChoice() == 0))
          {
            t = oncetd_1_0(e_0, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_7;
          }
        t = (ATerm) ATmakeAppl(sym_Build_1, q_6);
        t = bottomup_1_0(c_0, t);
      }
      return(t);
    }
    ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,h_12 = NULL;
    h_12 = t;
    if(match_cons(t, sym_Test_1))
      {
        f_12 = ATgetArgument(t, 0);
        t = f_12;
        if(match_cons(t, sym_Id_0))
          {
            ATerm c_7 = t;
            int e_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_f_7;
                t = c_0(t);
                ;
                LocalPopChoice(e_7);
              }
            else
              {
                t = c_7;
                {
                  ATerm g_7 = t;
                  int i_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_12 = NULL,s_12 = NULL,t_12 = NULL,x_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
                      t = h_12;
                      t = new_0_0(t);
                      o_12 = t;
                      t = bottomup_1_0(c_0, t);
                      g_13 = t;
                      t = (ATerm) ATempty;
                      t = c_0(t);
                      h_13 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_13), g_13);
                      t = c_0(t);
                      s_12 = t;
                      t = o_12;
                      t = bottomup_1_0(c_0, t);
                      f_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, f_13);
                      t = c_0(t);
                      e_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, e_13);
                      t = c_0(t);
                      x_12 = t;
                      t = f_12;
                      t = bottomup_1_0(c_0, t);
                      a_13 = t;
                      t = o_12;
                      t = bottomup_1_0(c_0, t);
                      d_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, d_13);
                      t = c_0(t);
                      c_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, c_13);
                      t = c_0(t);
                      b_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, b_13);
                      t = c_0(t);
                      z_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, z_12);
                      t = c_0(t);
                      t_12 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, s_12, t_12);
                      t = c_0(t);
                      ;
                      LocalPopChoice(i_7);
                    }
                  else
                    {
                      t = g_7;
                      t = h_12;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm j_7 = t;
                int k_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_7;
                    t = c_0(t);
                    ;
                    LocalPopChoice(k_7);
                  }
                else
                  {
                    t = j_7;
                    {
                      ATerm m_7 = t;
                      int n_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
                          t = h_12;
                          t = new_0_0(t);
                          k_13 = t;
                          t = bottomup_1_0(c_0, t);
                          v_13 = t;
                          t = (ATerm) ATempty;
                          t = c_0(t);
                          w_13 = t;
                          t = (ATerm) ATinsert(CheckATermList(w_13), v_13);
                          t = c_0(t);
                          l_13 = t;
                          t = k_13;
                          t = bottomup_1_0(c_0, t);
                          u_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, u_13);
                          t = c_0(t);
                          t_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, t_13);
                          t = c_0(t);
                          n_13 = t;
                          t = f_12;
                          t = bottomup_1_0(c_0, t);
                          p_13 = t;
                          t = k_13;
                          t = bottomup_1_0(c_0, t);
                          s_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, s_13);
                          t = c_0(t);
                          r_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, r_13);
                          t = c_0(t);
                          q_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_13, q_13);
                          t = c_0(t);
                          o_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_13, o_13);
                          t = c_0(t);
                          m_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, l_13, m_13);
                          t = c_0(t);
                          ;
                          LocalPopChoice(n_7);
                        }
                      else
                        {
                          t = m_7;
                          t = h_12;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    c_12 = ATgetArgument(t, 0);
                    {
                      ATerm o_7 = t;
                      int p_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, c_12);
                          t = c_0(t);
                          ;
                          LocalPopChoice(p_7);
                        }
                      else
                        {
                          t = o_7;
                          {
                            ATerm r_7 = t;
                            int s_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,n_14 = NULL;
                                t = h_12;
                                t = new_0_0(t);
                                a_14 = t;
                                t = bottomup_1_0(c_0, t);
                                l_14 = t;
                                t = (ATerm) ATempty;
                                t = c_0(t);
                                n_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(n_14), l_14);
                                t = c_0(t);
                                b_14 = t;
                                t = a_14;
                                t = bottomup_1_0(c_0, t);
                                k_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, k_14);
                                t = c_0(t);
                                j_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, j_14);
                                t = c_0(t);
                                d_14 = t;
                                t = f_12;
                                t = bottomup_1_0(c_0, t);
                                f_14 = t;
                                t = a_14;
                                t = bottomup_1_0(c_0, t);
                                i_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, i_14);
                                t = c_0(t);
                                h_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, h_14);
                                t = c_0(t);
                                g_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_14, g_14);
                                t = c_0(t);
                                e_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, d_14, e_14);
                                t = c_0(t);
                                c_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, b_14, c_14);
                                t = c_0(t);
                                ;
                                LocalPopChoice(s_7);
                              }
                            else
                              {
                                t = r_7;
                                t = h_12;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm t_7 = t;
                    int v_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_14 = NULL,s_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,z_14 = NULL,a_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,g_15 = NULL,h_15 = NULL;
                        t = h_12;
                        t = new_0_0(t);
                        r_14 = t;
                        t = bottomup_1_0(c_0, t);
                        g_15 = t;
                        t = (ATerm) ATempty;
                        t = c_0(t);
                        h_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(h_15), g_15);
                        t = c_0(t);
                        s_14 = t;
                        t = r_14;
                        t = bottomup_1_0(c_0, t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_15);
                        t = c_0(t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, d_15);
                        t = c_0(t);
                        v_14 = t;
                        t = f_12;
                        t = bottomup_1_0(c_0, t);
                        x_14 = t;
                        t = r_14;
                        t = bottomup_1_0(c_0, t);
                        c_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_15);
                        t = c_0(t);
                        a_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, a_15);
                        t = c_0(t);
                        z_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_14, z_14);
                        t = c_0(t);
                        w_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_14, w_14);
                        t = c_0(t);
                        u_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, s_14, u_14);
                        t = c_0(t);
                        ;
                        LocalPopChoice(v_7);
                      }
                    else
                      {
                        t = t_7;
                        t = h_12;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            f_12 = ATgetArgument(t, 0);
            t = f_12;
            if(match_cons(t, sym_Id_0))
              {
                ATerm w_7 = t;
                int x_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_l_7;
                    t = c_0(t);
                    ;
                    LocalPopChoice(x_7);
                  }
                else
                  {
                    t = w_7;
                    t = h_12;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm y_7 = t;
                    int z_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_f_7;
                        t = c_0(t);
                        ;
                        LocalPopChoice(z_7);
                      }
                    else
                      {
                        t = y_7;
                        t = h_12;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        c_12 = ATgetArgument(t, 0);
                        {
                          ATerm a_8 = t;
                          int b_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, c_12);
                              t = c_0(t);
                              ;
                              LocalPopChoice(b_8);
                            }
                          else
                            {
                              t = a_8;
                              t = h_12;
                            }
                        }
                      }
                    else
                      {
                        t = h_12;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                f_12 = ATgetArgument(t, 0);
                e_12 = ATgetArgument(t, 1);
                t = e_12;
                if(match_cons(t, sym_Id_0))
                  {
                    t = f_12;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = e_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = f_12;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                c_12 = ATgetArgument(t, 0);
                                d_12 = ATgetArgument(t, 1);
                                t = f_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    c_12 = ATgetArgument(t, 0);
                                    d_12 = ATgetArgument(t, 1);
                                    t = f_12;
                                  }
                                else
                                  {
                                    t = f_12;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        a_12 = ATgetArgument(t, 0);
                        b_12 = ATgetArgument(t, 1);
                        t = a_12;
                        if(match_cons(t, sym_Match_1))
                          {
                            z_11 = ATgetArgument(t, 0);
                            t = z_11;
                            if(match_cons(t, sym_Op_2))
                              {
                                x_11 = ATgetArgument(t, 0);
                                s_11 = ATgetArgument(t, 1);
                                t = f_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = e_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm c_8 = t;
                                        int d_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_l_7;
                                            t = c_0(t);
                                            ;
                                            LocalPopChoice(d_8);
                                          }
                                        else
                                          {
                                            t = c_8;
                                            t = h_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            c_12 = ATgetArgument(t, 0);
                                            d_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm f_8 = t;
                                              int g_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_17 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                  t = c_0(t);
                                                  f_17 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, f_17);
                                                  t = c_0(t);
                                                  ;
                                                  LocalPopChoice(g_8);
                                                }
                                              else
                                                {
                                                  t = f_8;
                                                  t = h_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                t = c_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    y_11 = ATgetArgument(t, 0);
                                                    t_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm h_8 = t;
                                                      int j_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, y_11, x_11);
                                                          {
                                                            ATerm k_8 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    h_1 = ATgetArgument(t, 0);
                                                                    if((h_1 != ATgetArgument(t, 1)))
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
                                                                t = k_8;
                                                              }
                                                            t = term_l_7;
                                                            t = bottomup_1_0(c_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(j_8);
                                                        }
                                                      else
                                                        {
                                                          t = h_8;
                                                          {
                                                            ATerm l_8 = t;
                                                            int m_8 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm l_17 = NULL;
                                                                t = x_11;
                                                                if((y_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, t_11, s_11);
                                                                t = genzip_4_0(o_0, p_0, q_0, r_0, t);
                                                                l_17 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, y_11, t_11)), b_12));
                                                                t = bottomup_1_0(c_0, t);
                                                                ;
                                                                LocalPopChoice(m_8);
                                                              }
                                                            else
                                                              {
                                                                t = l_8;
                                                                {
                                                                  ATerm n_8 = t;
                                                                  int o_8 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm c_18 = NULL;
                                                                      t = z_11;
                                                                      if((c_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                                      t = c_0(t);
                                                                      c_18 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_18, b_12);
                                                                      t = c_0(t);
                                                                      ;
                                                                      LocalPopChoice(o_8);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = n_8;
                                                                      t = h_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm p_8 = t;
                                                    int q_8 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm g_18 = NULL;
                                                        t = z_11;
                                                        if((c_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                        t = c_0(t);
                                                        g_18 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, g_18, b_12);
                                                        t = c_0(t);
                                                        ;
                                                        LocalPopChoice(q_8);
                                                      }
                                                    else
                                                      {
                                                        t = p_8;
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_8 = t;
                                                      int u_8 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm m_18 = NULL;
                                                          t = z_11;
                                                          if((c_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, c_12);
                                                          t = c_0(t);
                                                          m_18 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_18, b_12);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(u_8);
                                                        }
                                                      else
                                                        {
                                                          t = s_8;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_8 = t;
                                                          int z_8 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_18 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                              t = c_0(t);
                                                              x_18 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, x_18);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(z_8);
                                                            }
                                                          else
                                                            {
                                                              t = w_8;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = f_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = e_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm a_9 = t;
                                        int d_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_l_7;
                                            t = c_0(t);
                                            ;
                                            LocalPopChoice(d_9);
                                          }
                                        else
                                          {
                                            t = a_9;
                                            t = h_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            c_12 = ATgetArgument(t, 0);
                                            d_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_9 = t;
                                              int f_9 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm i_19 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                  t = c_0(t);
                                                  i_19 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, i_19);
                                                  t = c_0(t);
                                                  ;
                                                  LocalPopChoice(f_9);
                                                }
                                              else
                                                {
                                                  t = e_9;
                                                  t = h_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm g_9 = t;
                                                  int k_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_19 = NULL;
                                                      t = z_11;
                                                      if((c_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, c_12);
                                                      t = c_0(t);
                                                      o_19 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_19, b_12);
                                                      t = c_0(t);
                                                      ;
                                                      LocalPopChoice(k_9);
                                                    }
                                                  else
                                                    {
                                                      t = g_9;
                                                      t = h_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm l_9 = t;
                                                      int m_9 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_19 = NULL;
                                                          t = z_11;
                                                          if((c_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                          t = c_0(t);
                                                          s_19 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_19, b_12);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(m_9);
                                                        }
                                                      else
                                                        {
                                                          t = l_9;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_9 = t;
                                                          int t_9 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_19 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                              t = c_0(t);
                                                              x_19 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, x_19);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(t_9);
                                                            }
                                                          else
                                                            {
                                                              t = s_9;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                z_11 = ATgetArgument(t, 0);
                                t = z_11;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    x_11 = ATgetArgument(t, 0);
                                    t = f_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = e_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_9 = t;
                                            int z_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_l_7;
                                                t = c_0(t);
                                                ;
                                                LocalPopChoice(z_9);
                                              }
                                            else
                                              {
                                                t = y_9;
                                                t = h_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                d_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_10 = t;
                                                  int b_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_20 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                      t = c_0(t);
                                                      h_20 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, h_20);
                                                      t = c_0(t);
                                                      ;
                                                      LocalPopChoice(b_10);
                                                    }
                                                  else
                                                    {
                                                      t = a_10;
                                                      t = h_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_10 = t;
                                                int d_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_10);
                                                    {
                                                      ATerm f_10 = t;
                                                      int g_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_20 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, z_11);
                                                          t = c_0(t);
                                                          n_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_20, b_12);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(g_10);
                                                        }
                                                      else
                                                        {
                                                          t = f_10;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_10;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        t = c_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            y_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm h_10 = t;
                                                              int i_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_20 = NULL,u_20 = NULL;
                                                                  t = x_11;
                                                                  if((y_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, y_11);
                                                                  t = c_0(t);
                                                                  u_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, u_20);
                                                                  t = c_0(t);
                                                                  s_20 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_20, b_12);
                                                                  t = c_0(t);
                                                                  ;
                                                                  LocalPopChoice(i_10);
                                                                }
                                                              else
                                                                {
                                                                  t = h_10;
                                                                  t = h_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = h_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            d_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_10 = t;
                                                              int m_10 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_21 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                                  t = c_0(t);
                                                                  b_21 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, b_21);
                                                                  t = c_0(t);
                                                                  ;
                                                                  LocalPopChoice(m_10);
                                                                }
                                                              else
                                                                {
                                                                  t = l_10;
                                                                  t = h_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = h_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = f_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = e_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm o_10 = t;
                                            int r_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_l_7;
                                                t = c_0(t);
                                                ;
                                                LocalPopChoice(r_10);
                                              }
                                            else
                                              {
                                                t = o_10;
                                                t = h_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                d_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm s_10 = t;
                                                  int t_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_21 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                      t = c_0(t);
                                                      q_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, q_21);
                                                      t = c_0(t);
                                                      ;
                                                      LocalPopChoice(t_10);
                                                    }
                                                  else
                                                    {
                                                      t = s_10;
                                                      t = h_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm u_10 = t;
                                                int v_10 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm w_10 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_10);
                                                    {
                                                      ATerm x_10 = t;
                                                      int y_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_21 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, z_11);
                                                          t = c_0(t);
                                                          v_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_21, b_12);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(y_10);
                                                        }
                                                      else
                                                        {
                                                          t = x_10;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_10;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_11 = t;
                                                          int b_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_22 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                              t = c_0(t);
                                                              f_22 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, f_22);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(b_11);
                                                            }
                                                          else
                                                            {
                                                              t = a_11;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    z_11 = ATgetArgument(t, 0);
                                    u_11 = ATgetArgument(t, 1);
                                    v_11 = ATgetArgument(t, 2);
                                    t = f_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = e_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm c_11 = t;
                                            int e_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_l_7;
                                                t = c_0(t);
                                                ;
                                                LocalPopChoice(e_11);
                                              }
                                            else
                                              {
                                                t = c_11;
                                                t = h_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                d_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_11 = t;
                                                  int g_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                      t = c_0(t);
                                                      s_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, s_22);
                                                      t = c_0(t);
                                                      ;
                                                      LocalPopChoice(g_11);
                                                    }
                                                  else
                                                    {
                                                      t = f_11;
                                                      t = h_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm h_11 = t;
                                                int j_11 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm k_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_11);
                                                    {
                                                      ATerm i_12 = t;
                                                      int i_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, z_11, u_11, v_11);
                                                          t = c_0(t);
                                                          a_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, b_12);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(i_13);
                                                        }
                                                      else
                                                        {
                                                          t = i_12;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_11;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_13 = t;
                                                          int x_13 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm j_23 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                              t = c_0(t);
                                                              j_23 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, j_23);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(x_13);
                                                            }
                                                          else
                                                            {
                                                              t = j_13;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = f_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = e_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_13 = t;
                                            int z_13 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_l_7;
                                                t = c_0(t);
                                                ;
                                                LocalPopChoice(z_13);
                                              }
                                            else
                                              {
                                                t = y_13;
                                                t = h_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                d_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_14 = t;
                                                  int o_14 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm t_23 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                      t = c_0(t);
                                                      t_23 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, t_23);
                                                      t = c_0(t);
                                                      ;
                                                      LocalPopChoice(o_14);
                                                    }
                                                  else
                                                    {
                                                      t = m_14;
                                                      t = h_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    d_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm p_14 = t;
                                                      int t_14 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm z_23 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                          t = c_0(t);
                                                          z_23 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, z_23);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(t_14);
                                                        }
                                                      else
                                                        {
                                                          t = p_14;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = h_12;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            a_12 = ATgetArgument(t, 0);
                            t = a_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                z_11 = ATgetArgument(t, 0);
                                u_11 = ATgetArgument(t, 1);
                                t = f_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = e_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm y_14 = t;
                                        int f_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_l_7;
                                            t = c_0(t);
                                            ;
                                            LocalPopChoice(f_15);
                                          }
                                        else
                                          {
                                            t = y_14;
                                            t = h_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            c_12 = ATgetArgument(t, 0);
                                            d_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm i_15 = t;
                                              int j_15 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_24 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                  t = c_0(t);
                                                  m_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, m_24);
                                                  t = c_0(t);
                                                  ;
                                                  LocalPopChoice(j_15);
                                                }
                                              else
                                                {
                                                  t = i_15;
                                                  t = h_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                t = c_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    y_11 = ATgetArgument(t, 0);
                                                    t_11 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm k_15 = t;
                                                      int l_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, y_11, z_11);
                                                          {
                                                            ATerm m_15 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_1 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    o_1 = ATgetArgument(t, 0);
                                                                    if((o_1 != ATgetArgument(t, 1)))
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
                                                                t = m_15;
                                                              }
                                                            t = term_l_7;
                                                            t = bottomup_1_0(c_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(l_15);
                                                        }
                                                      else
                                                        {
                                                          t = k_15;
                                                          {
                                                            ATerm n_15 = t;
                                                            int o_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm t_24 = NULL;
                                                                t = z_11;
                                                                if((y_11 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, t_11, u_11);
                                                                t = genzip_4_0(s_0, t_0, u_0, v_0, t);
                                                                t_24 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_24), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, y_11, t_11)));
                                                                t = bottomup_1_0(c_0, t);
                                                                ;
                                                                LocalPopChoice(o_15);
                                                              }
                                                            else
                                                              {
                                                                t = n_15;
                                                                {
                                                                  ATerm q_15 = t;
                                                                  int r_15 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = a_12;
                                                                      if((c_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                                      t = c_0(t);
                                                                      ;
                                                                      LocalPopChoice(r_15);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_15;
                                                                      t = h_12;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm s_15 = t;
                                                    int t_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = a_12;
                                                        if((c_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                        t = c_0(t);
                                                        ;
                                                        LocalPopChoice(t_15);
                                                      }
                                                    else
                                                      {
                                                        t = s_15;
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm u_15 = t;
                                                      int v_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = a_12;
                                                          if((c_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, c_12);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(v_15);
                                                        }
                                                      else
                                                        {
                                                          t = u_15;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_15 = t;
                                                          int x_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_25 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                              t = c_0(t);
                                                              u_25 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, u_25);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(x_15);
                                                            }
                                                          else
                                                            {
                                                              t = w_15;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = f_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = e_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm y_15 = t;
                                        int z_15 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_l_7;
                                            t = c_0(t);
                                            ;
                                            LocalPopChoice(z_15);
                                          }
                                        else
                                          {
                                            t = y_15;
                                            t = h_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            c_12 = ATgetArgument(t, 0);
                                            d_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm a_16 = t;
                                              int c_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm m_26 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                  t = c_0(t);
                                                  m_26 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, m_26);
                                                  t = c_0(t);
                                                  ;
                                                  LocalPopChoice(c_16);
                                                }
                                              else
                                                {
                                                  t = a_16;
                                                  t = h_12;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm d_16 = t;
                                                  int e_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = a_12;
                                                      if((c_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, c_12);
                                                      t = c_0(t);
                                                      ;
                                                      LocalPopChoice(e_16);
                                                    }
                                                  else
                                                    {
                                                      t = d_16;
                                                      t = h_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm f_16 = t;
                                                      int g_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = a_12;
                                                          if((c_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_12);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(g_16);
                                                        }
                                                      else
                                                        {
                                                          t = f_16;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_16 = t;
                                                          int i_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                              t = c_0(t);
                                                              z_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, z_26);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(i_16);
                                                            }
                                                          else
                                                            {
                                                              t = h_16;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                a_12 = ATgetArgument(t, 0);
                                t = a_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    z_11 = ATgetArgument(t, 0);
                                    t = f_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = e_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_16 = t;
                                            int k_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_l_7;
                                                t = c_0(t);
                                                ;
                                                LocalPopChoice(k_16);
                                              }
                                            else
                                              {
                                                t = j_16;
                                                t = h_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                d_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_16 = t;
                                                  int m_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm p_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                      t = c_0(t);
                                                      p_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, p_27);
                                                      t = c_0(t);
                                                      ;
                                                      LocalPopChoice(m_16);
                                                    }
                                                  else
                                                    {
                                                      t = l_16;
                                                      t = h_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_16 = t;
                                                int o_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_16 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_16);
                                                    {
                                                      ATerm q_16 = t;
                                                      int r_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_12);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(r_16);
                                                        }
                                                      else
                                                        {
                                                          t = q_16;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_16;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        t = c_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            y_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm s_16 = t;
                                                              int t_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_27 = NULL;
                                                                  t = z_11;
                                                                  if((y_11 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, y_11);
                                                                  t = c_0(t);
                                                                  u_27 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, u_27);
                                                                  t = c_0(t);
                                                                  ;
                                                                  LocalPopChoice(t_16);
                                                                }
                                                              else
                                                                {
                                                                  t = s_16;
                                                                  t = h_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = h_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            d_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_16 = t;
                                                              int v_16 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_28 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                                  t = c_0(t);
                                                                  i_28 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, i_28);
                                                                  t = c_0(t);
                                                                  ;
                                                                  LocalPopChoice(v_16);
                                                                }
                                                              else
                                                                {
                                                                  t = u_16;
                                                                  t = h_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = h_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = f_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = e_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_16 = t;
                                            int x_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_l_7;
                                                t = c_0(t);
                                                ;
                                                LocalPopChoice(x_16);
                                              }
                                            else
                                              {
                                                t = w_16;
                                                t = h_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                d_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_16 = t;
                                                  int z_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_29 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                      t = c_0(t);
                                                      a_29 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, a_29);
                                                      t = c_0(t);
                                                      ;
                                                      LocalPopChoice(z_16);
                                                    }
                                                  else
                                                    {
                                                      t = y_16;
                                                      t = h_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_17 = t;
                                                int b_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm c_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_17);
                                                    {
                                                      ATerm d_17 = t;
                                                      int e_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, a_12);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(e_17);
                                                        }
                                                      else
                                                        {
                                                          t = d_17;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm g_17 = t;
                                                          int h_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                              t = c_0(t);
                                                              h_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, h_29);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(h_17);
                                                            }
                                                          else
                                                            {
                                                              t = g_17;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    a_12 = ATgetArgument(t, 0);
                                    b_12 = ATgetArgument(t, 1);
                                    w_11 = ATgetArgument(t, 2);
                                    t = f_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = e_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm i_17 = t;
                                            int j_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_l_7;
                                                t = c_0(t);
                                                ;
                                                LocalPopChoice(j_17);
                                              }
                                            else
                                              {
                                                t = i_17;
                                                t = h_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                d_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_17 = t;
                                                  int t_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                      t = c_0(t);
                                                      b_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, b_30);
                                                      t = c_0(t);
                                                      ;
                                                      LocalPopChoice(t_17);
                                                    }
                                                  else
                                                    {
                                                      t = k_17;
                                                      t = h_12;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm u_17 = t;
                                                int v_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm w_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(v_17);
                                                    {
                                                      ATerm x_17 = t;
                                                      int y_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, a_12, b_12, w_11);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(y_17);
                                                        }
                                                      else
                                                        {
                                                          t = x_17;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_17;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_18 = t;
                                                          int b_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                              t = c_0(t);
                                                              u_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, u_30);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(b_18);
                                                            }
                                                          else
                                                            {
                                                              t = a_18;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Let_2))
                                      {
                                        a_12 = ATgetArgument(t, 0);
                                        b_12 = ATgetArgument(t, 1);
                                        t = f_12;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = e_12;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm d_18 = t;
                                                int e_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_l_7;
                                                    t = c_0(t);
                                                    ;
                                                    LocalPopChoice(e_18);
                                                  }
                                                else
                                                  {
                                                    t = d_18;
                                                    {
                                                      ATerm f_18 = t;
                                                      int h_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_31 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, b_12);
                                                          t = c_0(t);
                                                          v_31 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, a_12, v_31);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(h_18);
                                                        }
                                                      else
                                                        {
                                                          t = f_18;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    d_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_18 = t;
                                                      int k_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_32 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                          t = c_0(t);
                                                          i_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, i_32);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(k_18);
                                                        }
                                                      else
                                                        {
                                                          t = j_18;
                                                          {
                                                            ATerm l_18 = t;
                                                            int n_18 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_32 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, b_12);
                                                                t = c_0(t);
                                                                w_32 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, a_12, w_32);
                                                                t = c_0(t);
                                                                ;
                                                                LocalPopChoice(n_18);
                                                              }
                                                            else
                                                              {
                                                                t = l_18;
                                                                t = h_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_18 = t;
                                                          int p_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, b_12);
                                                              t = c_0(t);
                                                              i_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, a_12, i_33);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(p_18);
                                                            }
                                                          else
                                                            {
                                                              t = o_18;
                                                              {
                                                                ATerm q_18 = t;
                                                                int s_18 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm s_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                                    t = c_0(t);
                                                                    s_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, s_33);
                                                                    t = c_0(t);
                                                                    ;
                                                                    LocalPopChoice(s_18);
                                                                  }
                                                                else
                                                                  {
                                                                    t = q_18;
                                                                    t = h_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm t_18 = t;
                                                        int u_18 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm b_34 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, b_12);
                                                            t = c_0(t);
                                                            b_34 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, a_12, b_34);
                                                            t = c_0(t);
                                                            ;
                                                            LocalPopChoice(u_18);
                                                          }
                                                        else
                                                          {
                                                            t = t_18;
                                                            t = h_12;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            a_12 = ATgetArgument(t, 0);
                                            b_12 = ATgetArgument(t, 1);
                                            t = f_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = e_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_18 = t;
                                                    int w_18 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_l_7;
                                                        t = c_0(t);
                                                        ;
                                                        LocalPopChoice(w_18);
                                                      }
                                                    else
                                                      {
                                                        t = v_18;
                                                        {
                                                          ATerm y_18 = t;
                                                          int z_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, b_12);
                                                              t = c_0(t);
                                                              y_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, a_12, y_34);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(z_18);
                                                            }
                                                          else
                                                            {
                                                              t = y_18;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_19 = t;
                                                          int b_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_35 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                              t = c_0(t);
                                                              h_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, h_35);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(b_19);
                                                            }
                                                          else
                                                            {
                                                              t = a_19;
                                                              {
                                                                ATerm c_19 = t;
                                                                int d_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm n_35 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, b_12);
                                                                    t = c_0(t);
                                                                    n_35 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, a_12, n_35);
                                                                    t = c_0(t);
                                                                    ;
                                                                    LocalPopChoice(d_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_19;
                                                                    t = h_12;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            d_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm f_19 = t;
                                                              int g_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, b_12);
                                                                  t = c_0(t);
                                                                  e_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_12, e_36);
                                                                  t = c_0(t);
                                                                  ;
                                                                  LocalPopChoice(g_19);
                                                                }
                                                              else
                                                                {
                                                                  t = f_19;
                                                                  {
                                                                    ATerm h_19 = t;
                                                                    int j_19 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm k_36 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                                        t = c_0(t);
                                                                        k_36 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, k_36);
                                                                        t = c_0(t);
                                                                        ;
                                                                        LocalPopChoice(j_19);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_19;
                                                                        t = h_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm l_19 = t;
                                                            int m_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_36 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, b_12);
                                                                t = c_0(t);
                                                                u_36 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, a_12, u_36);
                                                                t = c_0(t);
                                                                ;
                                                                LocalPopChoice(m_19);
                                                              }
                                                            else
                                                              {
                                                                t = l_19;
                                                                t = h_12;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = f_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = e_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm n_19 = t;
                                                    int p_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_l_7;
                                                        t = c_0(t);
                                                        ;
                                                        LocalPopChoice(p_19);
                                                      }
                                                    else
                                                      {
                                                        t = n_19;
                                                        t = h_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        c_12 = ATgetArgument(t, 0);
                                                        d_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm q_19 = t;
                                                          int r_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                              t = c_0(t);
                                                              f_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, f_37);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(r_19);
                                                            }
                                                          else
                                                            {
                                                              t = q_19;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            c_12 = ATgetArgument(t, 0);
                                                            d_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm t_19 = t;
                                                              int u_19 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_37 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_12, e_12);
                                                                  t = c_0(t);
                                                                  l_37 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, c_12, l_37);
                                                                  t = c_0(t);
                                                                  ;
                                                                  LocalPopChoice(u_19);
                                                                }
                                                              else
                                                                {
                                                                  t = t_19;
                                                                  t = h_12;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = h_12;
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
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    f_12 = ATgetArgument(t, 0);
                    e_12 = ATgetArgument(t, 1);
                    t = e_12;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = f_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm v_19 = t;
                            int w_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_f_7;
                                t = c_0(t);
                                ;
                                LocalPopChoice(w_19);
                              }
                            else
                              {
                                t = v_19;
                                t = f_12;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = e_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    c_12 = ATgetArgument(t, 0);
                                    d_12 = ATgetArgument(t, 1);
                                    t = f_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        c_12 = ATgetArgument(t, 0);
                                        t = f_12;
                                      }
                                    else
                                      {
                                        t = f_12;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = f_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm y_19 = t;
                            int z_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_f_7;
                                t = c_0(t);
                                ;
                                LocalPopChoice(z_19);
                              }
                            else
                              {
                                t = y_19;
                                {
                                  ATerm a_20 = t;
                                  int b_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = e_12;
                                      if((f_12 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(b_20);
                                    }
                                  else
                                    {
                                      t = a_20;
                                      t = h_12;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = e_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    c_12 = ATgetArgument(t, 0);
                                    d_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm c_20 = t;
                                      int d_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_39 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, d_12, e_12);
                                          t = c_0(t);
                                          j_39 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, c_12, j_39);
                                          t = c_0(t);
                                          ;
                                          LocalPopChoice(d_20);
                                        }
                                      else
                                        {
                                          t = c_20;
                                          {
                                            ATerm f_20 = t;
                                            int g_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = e_12;
                                                if((f_12 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(g_20);
                                              }
                                            else
                                              {
                                                t = f_20;
                                                t = h_12;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        c_12 = ATgetArgument(t, 0);
                                        {
                                          ATerm j_20 = t;
                                          int k_20 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = e_12;
                                              if((f_12 != t))
                                                {
                                                  _fail(t);
                                                }
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
                                                    t = z_58(c_12, t);
                                                    ;
                                                    LocalPopChoice(m_20);
                                                  }
                                                else
                                                  {
                                                    t = l_20;
                                                    t = h_12;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm o_20 = t;
                                        int p_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = e_12;
                                            if((f_12 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(p_20);
                                          }
                                        else
                                          {
                                            t = o_20;
                                            t = h_12;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        f_12 = ATgetArgument(t, 0);
                        e_12 = ATgetArgument(t, 1);
                        t = e_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = f_12;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm q_20 = t;
                                int r_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_f_7;
                                    t = c_0(t);
                                    ;
                                    LocalPopChoice(r_20);
                                  }
                                else
                                  {
                                    t = q_20;
                                    t = e_12;
                                  }
                              }
                            else
                              {
                                ATerm v_20 = t;
                                int w_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_f_7;
                                    t = c_0(t);
                                    ;
                                    LocalPopChoice(w_20);
                                  }
                                else
                                  {
                                    t = v_20;
                                    t = h_12;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = f_12;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm x_20 = t;
                                    int y_20 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_l_7;
                                        t = c_0(t);
                                        ;
                                        LocalPopChoice(y_20);
                                      }
                                    else
                                      {
                                        t = x_20;
                                        t = e_12;
                                      }
                                  }
                                else
                                  {
                                    ATerm z_20 = t;
                                    int a_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_l_7;
                                        t = c_0(t);
                                        ;
                                        LocalPopChoice(a_21);
                                      }
                                    else
                                      {
                                        t = z_20;
                                        t = h_12;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    a_12 = ATgetArgument(t, 0);
                                    b_12 = ATgetArgument(t, 1);
                                    t = f_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = e_12;
                                      }
                                    else
                                      {
                                        ATerm c_21 = t;
                                        int e_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm w_41 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, f_12, a_12);
                                            t = conc_0_0(t);
                                            w_41 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, w_41, b_12);
                                            t = bottomup_1_0(c_0, t);
                                            ;
                                            LocalPopChoice(e_21);
                                          }
                                        else
                                          {
                                            t = c_21;
                                            t = h_12;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = f_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = e_12;
                                      }
                                    else
                                      {
                                        t = h_12;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm g_21 = t;
                        int h_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm i_21 = ATgetArgument(t, 0);
                                e_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(h_21);
                            t = e_12;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm k_21 = t;
                                int l_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_f_7;
                                    t = c_0(t);
                                    ;
                                    LocalPopChoice(l_21);
                                  }
                                else
                                  {
                                    t = k_21;
                                    t = h_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm m_21 = t;
                                    int n_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_l_7;
                                        t = c_0(t);
                                        ;
                                        LocalPopChoice(n_21);
                                      }
                                    else
                                      {
                                        t = m_21;
                                        t = h_12;
                                      }
                                  }
                                else
                                  {
                                    t = h_12;
                                  }
                              }
                          }
                        else
                          {
                            t = g_21;
                            if(match_cons(t, sym_All_1))
                              {
                                f_12 = ATgetArgument(t, 0);
                                t = f_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm o_21 = t;
                                    int p_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_f_7;
                                        t = c_0(t);
                                        ;
                                        LocalPopChoice(p_21);
                                      }
                                    else
                                      {
                                        t = o_21;
                                        t = h_12;
                                      }
                                  }
                                else
                                  {
                                    t = h_12;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    f_12 = ATgetArgument(t, 0);
                                    t = f_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm s_21 = t;
                                        int t_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_f_7;
                                            t = c_0(t);
                                            ;
                                            LocalPopChoice(t_21);
                                          }
                                        else
                                          {
                                            t = s_21;
                                            {
                                              ATerm u_21 = t;
                                              int w_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,d_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,w_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL;
                                                  t = h_12;
                                                  t = new_0_0(t);
                                                  w_42 = t;
                                                  t = bottomup_1_0(c_0, t);
                                                  a_44 = t;
                                                  t = (ATerm) ATempty;
                                                  t = c_0(t);
                                                  b_44 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(b_44), a_44);
                                                  t = c_0(t);
                                                  x_42 = t;
                                                  t = w_42;
                                                  t = bottomup_1_0(c_0, t);
                                                  z_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, z_43);
                                                  t = c_0(t);
                                                  w_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, w_43);
                                                  t = c_0(t);
                                                  z_42 = t;
                                                  t = f_12;
                                                  t = bottomup_1_0(c_0, t);
                                                  d_43 = t;
                                                  t = w_42;
                                                  t = bottomup_1_0(c_0, t);
                                                  m_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, m_43);
                                                  t = c_0(t);
                                                  l_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, l_43);
                                                  t = c_0(t);
                                                  k_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_43, k_43);
                                                  t = c_0(t);
                                                  a_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_42, a_43);
                                                  t = c_0(t);
                                                  y_42 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_42, y_42);
                                                  t = c_0(t);
                                                  ;
                                                  LocalPopChoice(w_21);
                                                }
                                              else
                                                {
                                                  t = u_21;
                                                  t = h_12;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_21 = t;
                                            int z_21 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_l_7;
                                                t = c_0(t);
                                                ;
                                                LocalPopChoice(z_21);
                                              }
                                            else
                                              {
                                                t = y_21;
                                                {
                                                  ATerm b_22 = t;
                                                  int c_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,c_45 = NULL,e_45 = NULL,g_45 = NULL,k_45 = NULL,n_45 = NULL,s_46 = NULL,t_46 = NULL,c_47 = NULL,d_47 = NULL;
                                                      t = h_12;
                                                      t = new_0_0(t);
                                                      u_44 = t;
                                                      t = bottomup_1_0(c_0, t);
                                                      c_47 = t;
                                                      t = (ATerm) ATempty;
                                                      t = c_0(t);
                                                      d_47 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(d_47), c_47);
                                                      t = c_0(t);
                                                      w_44 = t;
                                                      t = u_44;
                                                      t = bottomup_1_0(c_0, t);
                                                      t_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, t_46);
                                                      t = c_0(t);
                                                      s_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, s_46);
                                                      t = c_0(t);
                                                      y_44 = t;
                                                      t = f_12;
                                                      t = bottomup_1_0(c_0, t);
                                                      e_45 = t;
                                                      t = u_44;
                                                      t = bottomup_1_0(c_0, t);
                                                      n_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, n_45);
                                                      t = c_0(t);
                                                      k_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, k_45);
                                                      t = c_0(t);
                                                      g_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_45, g_45);
                                                      t = c_0(t);
                                                      c_45 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_44, c_45);
                                                      t = c_0(t);
                                                      x_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, w_44, x_44);
                                                      t = c_0(t);
                                                      ;
                                                      LocalPopChoice(c_22);
                                                    }
                                                  else
                                                    {
                                                      t = b_22;
                                                      t = h_12;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                c_12 = ATgetArgument(t, 0);
                                                d_12 = ATgetArgument(t, 1);
                                                t = d_12;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    n_11 = ATgetArgument(t, 0);
                                                    p_11 = ATgetArgument(t, 1);
                                                    t = n_11;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        o_11 = ATgetArgument(t, 0);
                                                        t = c_12;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            y_11 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm d_22 = t;
                                                              int g_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, o_11);
                                                                  t = c_0(t);
                                                                  p_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_47, p_11);
                                                                  t = c_0(t);
                                                                  o_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_11, o_47);
                                                                  t = c_0(t);
                                                                  n_47 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, n_47);
                                                                  t = c_0(t);
                                                                  ;
                                                                  LocalPopChoice(g_22);
                                                                }
                                                              else
                                                                {
                                                                  t = d_22;
                                                                  {
                                                                    ATerm i_22 = t;
                                                                    int j_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm u_47 = NULL,v_47 = NULL,w_47 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,h_48 = NULL,m_48 = NULL,n_48 = NULL,t_48 = NULL,v_48 = NULL,z_48 = NULL,b_49 = NULL;
                                                                        t = h_12;
                                                                        t = new_0_0(t);
                                                                        u_47 = t;
                                                                        t = bottomup_1_0(c_0, t);
                                                                        z_48 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = c_0(t);
                                                                        b_49 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(b_49), z_48);
                                                                        t = c_0(t);
                                                                        v_47 = t;
                                                                        t = u_47;
                                                                        t = bottomup_1_0(c_0, t);
                                                                        v_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, v_48);
                                                                        t = c_0(t);
                                                                        t_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, t_48);
                                                                        t = c_0(t);
                                                                        c_48 = t;
                                                                        t = f_12;
                                                                        t = bottomup_1_0(c_0, t);
                                                                        e_48 = t;
                                                                        t = u_47;
                                                                        t = bottomup_1_0(c_0, t);
                                                                        n_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, n_48);
                                                                        t = c_0(t);
                                                                        m_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, m_48);
                                                                        t = c_0(t);
                                                                        h_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_48, h_48);
                                                                        t = c_0(t);
                                                                        d_48 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, c_48, d_48);
                                                                        t = c_0(t);
                                                                        w_47 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_47, w_47);
                                                                        t = c_0(t);
                                                                        ;
                                                                        LocalPopChoice(j_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_22;
                                                                        t = h_12;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm l_22 = t;
                                                            int m_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm f_49 = NULL,g_49 = NULL,i_49 = NULL,j_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
                                                                t = h_12;
                                                                t = new_0_0(t);
                                                                f_49 = t;
                                                                t = bottomup_1_0(c_0, t);
                                                                s_49 = t;
                                                                t = (ATerm) ATempty;
                                                                t = c_0(t);
                                                                t_49 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(t_49), s_49);
                                                                t = c_0(t);
                                                                g_49 = t;
                                                                t = f_49;
                                                                t = bottomup_1_0(c_0, t);
                                                                r_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, r_49);
                                                                t = c_0(t);
                                                                q_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, q_49);
                                                                t = c_0(t);
                                                                j_49 = t;
                                                                t = f_12;
                                                                t = bottomup_1_0(c_0, t);
                                                                m_49 = t;
                                                                t = f_49;
                                                                t = bottomup_1_0(c_0, t);
                                                                p_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, p_49);
                                                                t = c_0(t);
                                                                o_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, o_49);
                                                                t = c_0(t);
                                                                n_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_49, n_49);
                                                                t = c_0(t);
                                                                l_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, j_49, l_49);
                                                                t = c_0(t);
                                                                i_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, g_49, i_49);
                                                                t = c_0(t);
                                                                ;
                                                                LocalPopChoice(m_22);
                                                              }
                                                            else
                                                              {
                                                                t = l_22;
                                                                t = h_12;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = c_12;
                                                        {
                                                          ATerm n_22 = t;
                                                          int o_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
                                                              t = h_12;
                                                              t = new_0_0(t);
                                                              w_49 = t;
                                                              t = bottomup_1_0(c_0, t);
                                                              h_50 = t;
                                                              t = (ATerm) ATempty;
                                                              t = c_0(t);
                                                              i_50 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(i_50), h_50);
                                                              t = c_0(t);
                                                              x_49 = t;
                                                              t = w_49;
                                                              t = bottomup_1_0(c_0, t);
                                                              g_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, g_50);
                                                              t = c_0(t);
                                                              f_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, f_50);
                                                              t = c_0(t);
                                                              z_49 = t;
                                                              t = f_12;
                                                              t = bottomup_1_0(c_0, t);
                                                              b_50 = t;
                                                              t = w_49;
                                                              t = bottomup_1_0(c_0, t);
                                                              e_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, e_50);
                                                              t = c_0(t);
                                                              d_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, d_50);
                                                              t = c_0(t);
                                                              c_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_50, c_50);
                                                              t = c_0(t);
                                                              a_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_49, a_50);
                                                              t = c_0(t);
                                                              y_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_49, y_49);
                                                              t = c_0(t);
                                                              ;
                                                              LocalPopChoice(o_22);
                                                            }
                                                          else
                                                            {
                                                              t = n_22;
                                                              t = h_12;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = c_12;
                                                    {
                                                      ATerm p_22 = t;
                                                      int q_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
                                                          t = h_12;
                                                          t = new_0_0(t);
                                                          l_50 = t;
                                                          t = bottomup_1_0(c_0, t);
                                                          w_50 = t;
                                                          t = (ATerm) ATempty;
                                                          t = c_0(t);
                                                          x_50 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(x_50), w_50);
                                                          t = c_0(t);
                                                          m_50 = t;
                                                          t = l_50;
                                                          t = bottomup_1_0(c_0, t);
                                                          v_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, v_50);
                                                          t = c_0(t);
                                                          u_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, u_50);
                                                          t = c_0(t);
                                                          o_50 = t;
                                                          t = f_12;
                                                          t = bottomup_1_0(c_0, t);
                                                          q_50 = t;
                                                          t = l_50;
                                                          t = bottomup_1_0(c_0, t);
                                                          t_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, t_50);
                                                          t = c_0(t);
                                                          s_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_50);
                                                          t = c_0(t);
                                                          r_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_50, r_50);
                                                          t = c_0(t);
                                                          p_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_50, p_50);
                                                          t = c_0(t);
                                                          n_50 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_50, n_50);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(q_22);
                                                        }
                                                      else
                                                        {
                                                          t = p_22;
                                                          t = h_12;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    c_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm r_22 = t;
                                                      int t_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, c_12);
                                                          t = c_0(t);
                                                          ;
                                                          LocalPopChoice(t_22);
                                                        }
                                                      else
                                                        {
                                                          t = r_22;
                                                          {
                                                            ATerm u_22 = t;
                                                            int v_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
                                                                t = h_12;
                                                                t = new_0_0(t);
                                                                b_51 = t;
                                                                t = bottomup_1_0(c_0, t);
                                                                m_51 = t;
                                                                t = (ATerm) ATempty;
                                                                t = c_0(t);
                                                                n_51 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(n_51), m_51);
                                                                t = c_0(t);
                                                                c_51 = t;
                                                                t = b_51;
                                                                t = bottomup_1_0(c_0, t);
                                                                l_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_51);
                                                                t = c_0(t);
                                                                k_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, k_51);
                                                                t = c_0(t);
                                                                e_51 = t;
                                                                t = f_12;
                                                                t = bottomup_1_0(c_0, t);
                                                                g_51 = t;
                                                                t = b_51;
                                                                t = bottomup_1_0(c_0, t);
                                                                j_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, j_51);
                                                                t = c_0(t);
                                                                i_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, i_51);
                                                                t = c_0(t);
                                                                h_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, g_51, h_51);
                                                                t = c_0(t);
                                                                f_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_51, f_51);
                                                                t = c_0(t);
                                                                d_51 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, c_51, d_51);
                                                                t = c_0(t);
                                                                ;
                                                                LocalPopChoice(v_22);
                                                              }
                                                            else
                                                              {
                                                                t = u_22;
                                                                t = h_12;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm w_22 = t;
                                                    int x_22 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,w_51 = NULL,x_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
                                                        t = h_12;
                                                        t = new_0_0(t);
                                                        q_51 = t;
                                                        t = bottomup_1_0(c_0, t);
                                                        d_52 = t;
                                                        t = (ATerm) ATempty;
                                                        t = c_0(t);
                                                        e_52 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(e_52), d_52);
                                                        t = c_0(t);
                                                        r_51 = t;
                                                        t = q_51;
                                                        t = bottomup_1_0(c_0, t);
                                                        c_52 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, c_52);
                                                        t = c_0(t);
                                                        b_52 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, b_52);
                                                        t = c_0(t);
                                                        t_51 = t;
                                                        t = f_12;
                                                        t = bottomup_1_0(c_0, t);
                                                        w_51 = t;
                                                        t = q_51;
                                                        t = bottomup_1_0(c_0, t);
                                                        a_52 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_52);
                                                        t = c_0(t);
                                                        z_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_51);
                                                        t = c_0(t);
                                                        x_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_51, x_51);
                                                        t = c_0(t);
                                                        u_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_51, u_51);
                                                        t = c_0(t);
                                                        s_51 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, r_51, s_51);
                                                        t = c_0(t);
                                                        ;
                                                        LocalPopChoice(x_22);
                                                      }
                                                    else
                                                      {
                                                        t = w_22;
                                                        t = h_12;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        f_12 = ATgetArgument(t, 0);
                                        t = f_12;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm y_22 = t;
                                            int z_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_f_7;
                                                t = c_0(t);
                                                ;
                                                LocalPopChoice(z_22);
                                              }
                                            else
                                              {
                                                t = y_22;
                                                t = h_12;
                                              }
                                          }
                                        else
                                          {
                                            t = h_12;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            f_12 = ATgetArgument(t, 0);
                                            t = f_12;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm b_23 = t;
                                                int c_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_l_7;
                                                    t = c_0(t);
                                                    ;
                                                    LocalPopChoice(c_23);
                                                  }
                                                else
                                                  {
                                                    t = b_23;
                                                    t = h_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = h_12;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                f_12 = ATgetArgument(t, 0);
                                                t = f_12;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm d_23 = t;
                                                    int e_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_l_7;
                                                        t = c_0(t);
                                                        ;
                                                        LocalPopChoice(e_23);
                                                      }
                                                    else
                                                      {
                                                        t = d_23;
                                                        t = h_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = h_12;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm f_23 = t;
                                                int g_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm h_23 = ATgetArgument(t, 0);
                                                        e_12 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(g_23);
                                                    t = e_12;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm i_23 = t;
                                                        int k_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_l_7;
                                                            t = c_0(t);
                                                            ;
                                                            LocalPopChoice(k_23);
                                                          }
                                                        else
                                                          {
                                                            t = i_23;
                                                            t = h_12;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = h_12;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = f_23;
                                                    {
                                                      ATerm l_23 = t;
                                                      int m_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm n_23 = ATgetArgument(t, 0);
                                                              e_12 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(m_23);
                                                          {
                                                            ATerm o_23 = t;
                                                            int p_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = e_12;
                                                                t = fetch_1_0(x_0, t);
                                                                t = term_l_7;
                                                                t = bottomup_1_0(c_0, t);
                                                                ;
                                                                LocalPopChoice(p_23);
                                                              }
                                                            else
                                                              {
                                                                t = o_23;
                                                                t = h_12;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = l_23;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              f_12 = ATgetArgument(t, 0);
                                                              e_12 = ATgetArgument(t, 1);
                                                              t = e_12;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = f_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = e_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          c_12 = ATgetArgument(t, 0);
                                                                          d_12 = ATgetArgument(t, 1);
                                                                          t = f_12;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = f_12;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = f_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = e_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          c_12 = ATgetArgument(t, 0);
                                                                          d_12 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm q_23 = t;
                                                                            int r_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm o_53 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, d_12, e_12);
                                                                                t = c_0(t);
                                                                                o_53 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, c_12, o_53);
                                                                                t = c_0(t);
                                                                                ;
                                                                                LocalPopChoice(r_23);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = q_23;
                                                                                {
                                                                                  ATerm s_23 = t;
                                                                                  int u_23 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = e_12;
                                                                                      if((f_12 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(u_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_23;
                                                                                      t = h_12;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm v_23 = t;
                                                                          int w_23 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = e_12;
                                                                              if((f_12 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(w_23);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = v_23;
                                                                              t = h_12;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  f_12 = ATgetArgument(t, 0);
                                                                  e_12 = ATgetArgument(t, 1);
                                                                  m_11 = ATgetArgument(t, 2);
                                                                  t = m_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm x_23 = t;
                                                                      int y_23 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, e_12);
                                                                          t = c_0(t);
                                                                          ;
                                                                          LocalPopChoice(y_23);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = x_23;
                                                                          t = h_12;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = h_12;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      f_12 = ATgetArgument(t, 0);
                                                                      e_12 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm a_24 = t;
                                                                        int b_24 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, f_12, e_12);
                                                                            t = c_0(t);
                                                                            ;
                                                                            LocalPopChoice(b_24);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = a_24;
                                                                            t = h_12;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          f_12 = ATgetArgument(t, 0);
                                                                          t = f_12;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              c_12 = ATgetFirst((ATermList) t);
                                                                              d_12 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm c_24 = t;
                                                                                int d_24 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm c_54 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, d_12);
                                                                                    t = c_0(t);
                                                                                    c_54 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, c_12, c_54);
                                                                                    t = c_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(d_24);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_24;
                                                                                    t = h_12;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm e_24 = t;
                                                                                  int f_24 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_l_7;
                                                                                      t = c_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(f_24);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = e_24;
                                                                                      t = h_12;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = h_12;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              f_12 = ATgetArgument(t, 0);
                                                                              t = f_12;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  c_12 = ATgetFirst((ATermList) t);
                                                                                  d_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm g_24 = t;
                                                                                    int h_24 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm i_54 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, d_12);
                                                                                        t = c_0(t);
                                                                                        i_54 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, c_12, i_54);
                                                                                        t = c_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(h_24);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = g_24;
                                                                                        t = h_12;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm i_24 = t;
                                                                                      int j_24 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_l_7;
                                                                                          t = c_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(j_24);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = i_24;
                                                                                          t = h_12;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = h_12;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  f_12 = ATgetArgument(t, 0);
                                                                                  t = f_12;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      c_12 = ATgetFirst((ATermList) t);
                                                                                      d_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm k_24 = t;
                                                                                        int l_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm o_54 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, d_12);
                                                                                            t = c_0(t);
                                                                                            o_54 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, c_12, o_54);
                                                                                            t = c_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(l_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = k_24;
                                                                                            t = h_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm n_24 = t;
                                                                                          int o_24 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_f_7;
                                                                                              t = c_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(o_24);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = n_24;
                                                                                              t = h_12;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = h_12;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      f_12 = ATgetArgument(t, 0);
                                                                                      e_12 = ATgetArgument(t, 1);
                                                                                      m_11 = ATgetArgument(t, 2);
                                                                                      l_11 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm p_24 = t;
                                                                                        int q_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm v_54 = NULL,x_54 = NULL;
                                                                                            t = e_12;
                                                                                            t = map1_1_0(y_0, t);
                                                                                            v_54 = t;
                                                                                            t = m_11;
                                                                                            t = map1_1_0(z_0, t);
                                                                                            x_54 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, f_12, v_54, x_54, l_11);
                                                                                            t = bottomup_1_0(c_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(q_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_24;
                                                                                            t = h_12;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          f_12 = ATgetArgument(t, 0);
                                                                                          e_12 = ATgetArgument(t, 1);
                                                                                          m_11 = ATgetArgument(t, 2);
                                                                                          l_11 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm r_24 = t;
                                                                                            int s_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm i_55 = NULL,k_55 = NULL;
                                                                                                t = m_11;
                                                                                                t = map1_1_0(a_1, t);
                                                                                                i_55 = t;
                                                                                                t = e_12;
                                                                                                t = map_1_0(b_1, t);
                                                                                                k_55 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_12, k_55, i_55, l_11);
                                                                                                t = bottomup_1_0(c_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(s_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_24;
                                                                                                {
                                                                                                  ATerm u_24 = t;
                                                                                                  int v_24 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm v_55 = NULL,x_55 = NULL;
                                                                                                      t = e_12;
                                                                                                      t = map1_1_0(c_1, t);
                                                                                                      v_55 = t;
                                                                                                      t = m_11;
                                                                                                      t = map_1_0(d_1, t);
                                                                                                      x_55 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, f_12, v_55, x_55, l_11);
                                                                                                      t = bottomup_1_0(c_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(v_24);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = u_24;
                                                                                                      t = h_12;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              f_12 = ATgetArgument(t, 0);
                                                                                              e_12 = ATgetArgument(t, 1);
                                                                                              m_11 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm w_24 = t;
                                                                                                int a_25 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL;
                                                                                                    t = term_b_25;
                                                                                                    t = bottomup_1_0(c_0, t);
                                                                                                    j_56 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = c_0(t);
                                                                                                    m_56 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(m_56), m_11);
                                                                                                    t = c_0(t);
                                                                                                    l_56 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(l_56), f_12);
                                                                                                    t = c_0(t);
                                                                                                    k_56 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, j_56, k_56);
                                                                                                    t = c_0(t);
                                                                                                    i_56 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, e_12, i_56);
                                                                                                    t = c_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(a_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = w_24;
                                                                                                    t = h_12;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  f_12 = ATgetArgument(t, 0);
                                                                                                  e_12 = ATgetArgument(t, 1);
                                                                                                  m_11 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm c_25 = t;
                                                                                                    int d_25 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                                                                        t = c_0(t);
                                                                                                        s_56 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, m_11);
                                                                                                        t = c_0(t);
                                                                                                        v_56 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = c_0(t);
                                                                                                        w_56 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(w_56), v_56);
                                                                                                        t = c_0(t);
                                                                                                        u_56 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(u_56), f_12);
                                                                                                        t = c_0(t);
                                                                                                        t_56 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(t_56), s_56);
                                                                                                        t = c_0(t);
                                                                                                        r_56 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, r_56);
                                                                                                        t = c_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(d_25);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = c_25;
                                                                                                        t = h_12;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      f_12 = ATgetArgument(t, 0);
                                                                                                      e_12 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm j_25 = t;
                                                                                                        int k_25 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm b_57 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, e_12);
                                                                                                            t = c_0(t);
                                                                                                            b_57 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, f_12, b_57);
                                                                                                            t = c_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(k_25);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = j_25;
                                                                                                            t = h_12;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          f_12 = ATgetArgument(t, 0);
                                                                                                          e_12 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm l_25 = t;
                                                                                                            int m_25 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm f_57 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, f_12);
                                                                                                                t = c_0(t);
                                                                                                                f_57 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, f_57, e_12);
                                                                                                                t = c_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(m_25);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = l_25;
                                                                                                                t = h_12;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              f_12 = ATgetArgument(t, 0);
                                                                                                              e_12 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm n_25 = t;
                                                                                                                int o_25 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm j_57 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, e_12);
                                                                                                                    t = c_0(t);
                                                                                                                    j_57 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, j_57, f_12);
                                                                                                                    t = c_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(o_25);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = n_25;
                                                                                                                    t = h_12;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  f_12 = ATgetArgument(t, 0);
                                                                                                                  e_12 = ATgetArgument(t, 1);
                                                                                                                  t = e_12;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      a_12 = ATgetArgument(t, 0);
                                                                                                                      b_12 = ATgetArgument(t, 1);
                                                                                                                      t = f_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = e_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm p_25 = t;
                                                                                                                          int q_25 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm u_57 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, f_12, a_12);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              u_57 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, u_57, b_12);
                                                                                                                              t = bottomup_1_0(c_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(q_25);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_25;
                                                                                                                              t = h_12;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          a_12 = ATgetArgument(t, 0);
                                                                                                                          b_12 = ATgetArgument(t, 1);
                                                                                                                          w_11 = ATgetArgument(t, 2);
                                                                                                                          t = w_11;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = b_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = a_12;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      z_11 = ATgetArgument(t, 0);
                                                                                                                                      t = f_12;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = e_12;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              c_12 = ATgetFirst((ATermList) t);
                                                                                                                                              d_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = d_12;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = c_12;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      y_11 = ATgetArgument(t, 0);
                                                                                                                                                      t_11 = ATgetArgument(t, 1);
                                                                                                                                                      q_11 = ATgetArgument(t, 2);
                                                                                                                                                      r_11 = ATgetArgument(t, 3);
                                                                                                                                                      t = q_11;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = t_11;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm r_25 = t;
                                                                                                                                                              int s_25 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = z_11;
                                                                                                                                                                  if((y_11 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = r_11;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm t_25 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm e_1 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm v_25 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(v_25, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if(((y_11 != NULL) && (y_11 != ATgetArgument(v_25, 0))))
                                                                                                                                                                                    _fail(ATgetArgument(v_25, 0));
                                                                                                                                                                                  else
                                                                                                                                                                                    y_11 = ATgetArgument(v_25, 0);
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm w_25 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(w_25) != AT_LIST) || !(ATisEmpty(w_25))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm x_25 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(x_25) != AT_LIST) || !(ATisEmpty(x_25))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(e_1, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = t_25;
                                                                                                                                                                      }
                                                                                                                                                                    t = not_null(r_11);
                                                                                                                                                                    t = bottomup_1_0(c_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(s_25);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = r_25;
                                                                                                                                                                  t = h_12;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = h_12;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = h_12;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = h_12;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = h_12;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = h_12;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = f_12;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = e_12;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = h_12;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = f_12;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = e_12;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = h_12;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = f_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = e_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = h_12;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = f_12;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = e_12;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_12;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      f_12 = ATgetArgument(t, 0);
                                                                                                                      e_12 = ATgetArgument(t, 1);
                                                                                                                      t = f_12;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = e_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = h_12;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = h_12;
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
  t = bottomup_1_0(c_0, t);
  return(t);
}
ATerm Anno__Cong_____2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  g_59 = t;
  c_59 = t;
  t = SSLgetAnnotations(g_59);
  e_59 = t;
  t = c_59;
  t = f_112(t);
  d_59 = t;
  t = e_59;
  t = g_112(t);
  f_59 = t;
  t = SSLsetAnnotations(d_59, f_59);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,e_2 = NULL,i_5 = NULL;
      u_59 = t;
      if(match_cons(t, sym_Op_2))
        {
          v_59 = ATgetArgument(t, 0);
          w_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_59);
      e_2 = t;
      t = v_59;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, v_59, w_59);
      i_5 = t;
      t = SSLsetAnnotations(i_5, e_2);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      t = Anno__Cong_____2_0(g_1, i_1, t);
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,m_5 = NULL;
  z_59 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_59);
  x_59 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_59);
  m_5 = t;
  t = SSLsetAnnotations(m_5, x_59);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL;
  j_60 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_60;
    }
  else
    {
      ATerm o_2 = NULL,n_5 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_60 = ATgetFirst((ATermList) t);
          l_60 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_60);
      o_2 = t;
      t = k_60;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      t = l_60;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(l_60), k_60);
      n_5 = t;
      t = SSLsetAnnotations(n_5, o_2);
    }
  return(t);
}
ATerm h_5 (ATerm l_91, ATerm k_91, ATerm t)
{
  t = l_91;
  {
    ATerm a_26 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(f_1, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_26;
      }
    t = (ATerm) ATmakeAppl(sym_Build_1, l_91);
  }
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm w_60 = NULL,x_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,d_61 = NULL,e_61 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      z_60 = ATgetArgument(t, 0);
      c_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_60;
  if(match_cons(t, sym_Match_1))
    {
      a_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_61;
  if(match_cons(t, sym_Var_1))
    {
      b_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_61;
  if(match_cons(t, sym_Seq_2))
    {
      d_61 = ATgetArgument(t, 0);
      x_60 = ATgetArgument(t, 1);
      t = d_61;
      if(match_cons(t, sym_Build_1))
        {
          e_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_61;
      if(match_cons(t, sym_Var_1))
        {
          w_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_60;
      if((b_61 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_61)), x_60);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          d_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_61;
      if(match_cons(t, sym_Var_1))
        {
          e_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_61;
      if((b_61 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_61));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm r_61 = NULL,s_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_61 = ATgetArgument(t, 0);
      w_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_61;
  if(match_cons(t, sym_Build_1))
    {
      v_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_61;
  if(match_cons(t, sym_Seq_2))
    {
      x_61 = ATgetArgument(t, 0);
      s_61 = ATgetArgument(t, 1);
      t = x_61;
      if(match_cons(t, sym_Match_1))
        {
          r_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_61;
      if((v_61 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_61), s_61);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          x_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_61;
      if((v_61 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, v_61);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_62 = ATgetArgument(t, 0);
      n_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_62;
  if(match_cons(t, sym_Match_1))
    {
      m_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_62;
  if(match_cons(t, sym_Seq_2))
    {
      o_62 = ATgetArgument(t, 0);
      i_62 = ATgetArgument(t, 1);
      t = o_62;
      if(match_cons(t, sym_Match_1))
        {
          h_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_62;
      if((m_62 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_62), i_62);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          o_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_62;
      if((m_62 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, m_62);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,a_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_63 = ATgetArgument(t, 0);
      c_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_63;
  if(match_cons(t, sym_Build_1))
    {
      ATerm b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_63;
  if(match_cons(t, sym_Seq_2))
    {
      d_63 = ATgetArgument(t, 0);
      e_63 = ATgetArgument(t, 1);
      t = d_63;
      if(match_cons(t, sym_PrimT_3))
        {
          w_62 = ATgetArgument(t, 0);
          x_62 = ATgetArgument(t, 1);
          y_62 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, w_62, x_62, y_62), e_63);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          d_63 = ATgetArgument(t, 0);
          e_63 = ATgetArgument(t, 1);
          f_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, d_63, e_63, f_63);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,w_63 = NULL,z_63 = NULL,a_64 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_63 = ATgetArgument(t, 0);
      z_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_63;
  if(match_cons(t, sym_Build_1))
    {
      ATerm c_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_63;
  if(match_cons(t, sym_Seq_2))
    {
      a_64 = ATgetArgument(t, 0);
      t_63 = ATgetArgument(t, 1);
      t = a_64;
      if(match_cons(t, sym_Build_1))
        {
          s_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_63), t_63);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          a_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, a_64);
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if(((ATgetType(d_26) != AT_LIST) || !(ATisEmpty(d_26))))
        _fail(t);
      {
        ATerm e_26 = ATgetArgument(t, 1);
        if(((ATgetType(e_26) != AT_LIST) || !(ATisEmpty(e_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,h_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if(((ATgetType(f_26) == AT_LIST) && !(ATisEmpty(f_26))))
        {
          c_65 = ATgetFirst((ATermList) f_26);
          d_65 = (ATerm) ATgetNext((ATermList) f_26);
        }
      else
        _fail(t);
      {
        ATerm g_26 = ATgetArgument(t, 1);
        if(((ATgetType(g_26) == AT_LIST) && !(ATisEmpty(g_26))))
          {
            e_65 = ATgetFirst((ATermList) g_26);
            h_65 = (ATerm) ATgetNext((ATermList) g_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_65, e_65), (ATerm) ATmakeAppl(sym__2, d_65, h_65));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL;
  if(match_cons(t, sym__2))
    {
      i_65 = ATgetArgument(t, 0);
      j_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_65), i_65);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL;
  if(match_cons(t, sym__2))
    {
      k_65 = ATgetArgument(t, 0);
      l_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_65), (ATerm) ATmakeAppl(sym_Match_1, l_65));
  return(t);
}
ATerm n_1 (ATerm t)
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
ATerm p_1 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
        {
          q_65 = ATgetFirst((ATermList) j_26);
          r_65 = (ATerm) ATgetNext((ATermList) j_26);
        }
      else
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
          {
            s_65 = ATgetFirst((ATermList) k_26);
            t_65 = (ATerm) ATgetNext((ATermList) k_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_65, s_65), (ATerm) ATmakeAppl(sym__2, r_65, t_65));
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL;
  if(match_cons(t, sym__2))
    {
      u_65 = ATgetArgument(t, 0);
      v_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_65), u_65);
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL;
  if(match_cons(t, sym__2))
    {
      w_65 = ATgetArgument(t, 0);
      x_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_65), (ATerm) ATmakeAppl(sym_Match_1, x_65));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_64 = ATgetArgument(t, 0);
      t_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_64;
  if(match_cons(t, sym_Build_1))
    {
      q_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_64;
  if(match_cons(t, sym_Op_2))
    {
      r_64 = ATgetArgument(t, 0);
      s_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_64;
  if(match_cons(t, sym_Seq_2))
    {
      u_64 = ATgetArgument(t, 0);
      n_64 = ATgetArgument(t, 1);
      {
        ATerm b_65 = NULL;
        t = u_64;
        if(match_cons(t, sym_Match_1))
          {
            v_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_64;
        if(match_cons(t, sym_Op_2))
          {
            l_64 = ATgetArgument(t, 0);
            m_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_64;
        if((r_64 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, s_64, m_64);
        t = genzip_4_0(j_1, k_1, l_1, m_1, t);
        b_65 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_65), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_64, s_64)), n_64));
      }
    }
  else
    {
      ATerm p_65 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          u_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_64;
      if(match_cons(t, sym_Op_2))
        {
          v_64 = ATgetArgument(t, 0);
          w_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_64;
      if((r_64 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, s_64, w_64);
      t = genzip_4_0(n_1, p_1, q_1, r_1, t);
      p_65 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_65), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_64, s_64)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm t_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL;
  w_66 = t;
  if(match_cons(t, sym_Seq_2))
    {
      x_66 = ATgetArgument(t, 0);
      b_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_66;
  if(match_cons(t, sym_Build_1))
    {
      y_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_66;
  if(match_cons(t, sym_Op_2))
    {
      z_66 = ATgetArgument(t, 0);
      {
        ATerm l_26 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = b_67;
  {
    ATerm n_26 = t;
    int o_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            c_67 = ATgetArgument(t, 0);
            {
              ATerm p_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(o_26);
        t = c_67;
        if(match_cons(t, sym_Match_1))
          {
            d_67 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_67;
        if(match_cons(t, sym_Op_2))
          {
            t_66 = ATgetArgument(t, 0);
            {
              ATerm q_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_66, t_66);
        {
          ATerm r_26 = t;
          if((PushChoice() == 0))
            {
              ATerm a_3 = NULL;
              if(match_cons(t, sym__2))
                {
                  a_3 = ATgetArgument(t, 0);
                  if((a_3 != ATgetArgument(t, 1)))
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
              t = r_26;
            }
          t = term_l_7;
        }
      }
    else
      {
        t = n_26;
        if(match_cons(t, sym_Match_1))
          {
            c_67 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_67;
        if(match_cons(t, sym_Op_2))
          {
            d_67 = ATgetArgument(t, 0);
            {
              ATerm s_26 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_66, d_67);
        {
          ATerm t_26 = t;
          if((PushChoice() == 0))
            {
              ATerm j_3 = NULL;
              if(match_cons(t, sym__2))
                {
                  j_3 = ATgetArgument(t, 0);
                  if((j_3 != ATgetArgument(t, 1)))
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
              t = t_26;
            }
          t = term_l_7;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm i_115 (ATerm), ATerm t)
{
  ATerm h_67 (ATerm t)
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_115(t);
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        t = SRTS_one(h_67, t);
      }
    return(t);
  }
  t = h_67(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL;
  c_68 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_68 = ATgetArgument(t, 0);
      k_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_68;
  if(match_cons(t, sym_Let_2))
    {
      l_68 = ATgetArgument(t, 0);
      n_68 = ATgetArgument(t, 1);
      {
        ATerm t_68 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, d_68, l_68);
        t = conc_0_0(t);
        t_68 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_68, n_68);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          l_68 = ATgetArgument(t, 0);
          n_68 = ATgetArgument(t, 1);
          o_68 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_68;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_68 = ATgetFirst((ATermList) t);
          j_68 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_68;
      if(match_cons(t, sym_SDefT_4))
        {
          f_68 = ATgetArgument(t, 0);
          g_68 = ATgetArgument(t, 1);
          h_68 = ATgetArgument(t, 2);
          i_68 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = g_68;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_68;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_68;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_68;
      if(match_cons(t, sym_SVar_1))
        {
          m_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_68;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_68;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_68;
      if((f_68 != t))
        {
          _fail(t);
        }
      t = i_68;
      {
        ATerm w_26 = t;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm x_26 = ATgetArgument(t, 0);
                  if(match_cons(x_26, sym_SVar_1))
                    {
                      if(((f_68 != NULL) && (f_68 != ATgetArgument(x_26, 0))))
                        _fail(ATgetArgument(x_26, 0));
                      else
                        f_68 = ATgetArgument(x_26, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm y_26 = ATgetArgument(t, 1);
                    if(((ATgetType(y_26) != AT_LIST) || !(ATisEmpty(y_26))))
                      _fail(t);
                  }
                  {
                    ATerm a_27 = ATgetArgument(t, 2);
                    if(((ATgetType(a_27) != AT_LIST) || !(ATisEmpty(a_27))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(s_1, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = w_26;
          }
        t = not_null(i_68);
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm c_69 = NULL,d_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,m_69 = NULL,n_69 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      m_69 = ATgetArgument(t, 0);
      t = m_69;
      if(match_cons(t, sym_Seq_2))
        {
          k_69 = ATgetArgument(t, 0);
          d_69 = ATgetArgument(t, 1);
          t = k_69;
          if(match_cons(t, sym_Where_1))
            {
              c_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_69;
          if(match_cons(t, sym_Seq_2))
            {
              h_69 = ATgetArgument(t, 0);
              j_69 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_69;
          if(match_cons(t, sym_Build_1))
            {
              i_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, c_69, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, i_69), j_69)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              k_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, k_69);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          m_69 = ATgetArgument(t, 0);
          t = m_69;
          if(match_cons(t, sym_Test_1))
            {
              k_69 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, k_69);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              m_69 = ATgetArgument(t, 0);
              t = m_69;
              if(match_cons(t, sym_Not_1))
                {
                  k_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, k_69);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  m_69 = ATgetArgument(t, 0);
                  n_69 = ATgetArgument(t, 1);
                  t = n_69;
                  if((m_69 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      m_69 = ATgetArgument(t, 0);
                      n_69 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = n_69;
                  if((m_69 != t))
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
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      b_70 = ATgetArgument(t, 0);
      e_70 = ATgetArgument(t, 1);
      t = b_70;
      if(match_cons(t, sym_LChoice_2))
        {
          c_70 = ATgetArgument(t, 0);
          d_70 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, c_70, (ATerm) ATmakeAppl(sym_LChoice_2, d_70, e_70));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          b_70 = ATgetArgument(t, 0);
          e_70 = ATgetArgument(t, 1);
          t = b_70;
          if(match_cons(t, sym_Seq_2))
            {
              c_70 = ATgetArgument(t, 0);
              d_70 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, c_70, (ATerm) ATmakeAppl(sym_Seq_2, d_70, e_70));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              b_70 = ATgetArgument(t, 0);
              e_70 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_70;
          if(match_cons(t, sym_Choice_2))
            {
              c_70 = ATgetArgument(t, 0);
              d_70 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, c_70, (ATerm) ATmakeAppl(sym_Choice_2, d_70, e_70));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL,u_71 = NULL;
  s_71 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_71 = ATgetFirst((ATermList) t);
      u_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,h_4 = NULL,i_4 = NULL,s_5 = NULL,r_5 = NULL;
        t = SSLgetAnnotations(s_71);
        e_4 = t;
        t = t_71;
        t = n_0(t);
        h_4 = t;
        t = (ATerm) ATinsert(CheckATermList(u_71), h_4);
        r_5 = t;
        t = SSLsetAnnotations(r_5, e_4);
        i_4 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_4 = ATgetFirst((ATermList) t);
            c_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_4);
        a_4 = t;
        t = c_4;
        {
          ATerm d_27 = t;
          int e_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(e_27);
            }
          else
            {
              t = d_27;
            }
          d_4 = t;
          t = (ATerm) ATinsert(CheckATermList(d_4), b_4);
          s_5 = t;
          t = SSLsetAnnotations(s_5, a_4);
        }
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        {
          ATerm s_4 = NULL,v_4 = NULL,t_5 = NULL;
          t = SSLgetAnnotations(s_71);
          s_4 = t;
          t = u_71;
          t = map1_1_0(n_0, t);
          v_4 = t;
          t = (ATerm) ATinsert(CheckATermList(v_4), t_71);
          t_5 = t;
          t = SSLsetAnnotations(t_5, s_4);
        }
      }
  }
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm c_73 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, c_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_6), term_y_6));
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL;
  e_73 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_73 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, d_73, term_y_6);
    }
  else
    {
      t = e_73;
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm o_73 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, o_73, term_y_6);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL;
  q_73 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      p_73 = ATgetArgument(t, 0);
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, p_73, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_6), term_y_6));
            ;
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            t = q_73;
          }
      }
    }
  else
    {
      t = q_73;
    }
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm a_74 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_74, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_6), term_y_6));
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm h_74 = NULL,i_74 = NULL;
  i_74 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_74 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, h_74, term_y_6);
    }
  else
    {
      t = i_74;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,m_72 = NULL,n_72 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      m_72 = ATgetArgument(t, 0);
      n_72 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, m_72, n_72);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          m_72 = ATgetArgument(t, 0);
          t = m_72;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_72 = ATgetFirst((ATermList) t);
              i_72 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, h_72, (ATerm) ATmakeAppl(sym_LChoices_1, i_72));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_l_7;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              m_72 = ATgetArgument(t, 0);
              t = m_72;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_72 = ATgetFirst((ATermList) t);
                  i_72 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, h_72, (ATerm) ATmakeAppl(sym_Choices_1, i_72));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_l_7;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  m_72 = ATgetArgument(t, 0);
                  t = m_72;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_72 = ATgetFirst((ATermList) t);
                      i_72 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_72, (ATerm) ATmakeAppl(sym_Seqs_1, i_72));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_f_7;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      m_72 = ATgetArgument(t, 0);
                      n_72 = ATgetArgument(t, 1);
                      k_72 = ATgetArgument(t, 2);
                      j_72 = ATgetArgument(t, 3);
                      {
                        ATerm z_72 = NULL,b_73 = NULL;
                        t = n_72;
                        t = map1_1_0(t_1, t);
                        z_72 = t;
                        t = k_72;
                        t = map1_1_0(u_1, t);
                        b_73 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, m_72, z_72, b_73, j_72);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          m_72 = ATgetArgument(t, 0);
                          n_72 = ATgetArgument(t, 1);
                          k_72 = ATgetArgument(t, 2);
                          j_72 = ATgetArgument(t, 3);
                          {
                            ATerm h_27 = t;
                            int i_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm l_73 = NULL,n_73 = NULL;
                                t = k_72;
                                t = map1_1_0(v_1, t);
                                l_73 = t;
                                t = n_72;
                                t = map_1_0(w_1, t);
                                n_73 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_72, n_73, l_73, j_72);
                                ;
                                LocalPopChoice(i_27);
                              }
                            else
                              {
                                t = h_27;
                                {
                                  ATerm x_73 = NULL,z_73 = NULL;
                                  t = n_72;
                                  t = map1_1_0(x_1, t);
                                  x_73 = t;
                                  t = k_72;
                                  t = map_1_0(y_1, t);
                                  z_73 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_72, x_73, z_73, j_72);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              m_72 = ATgetArgument(t, 0);
                              n_72 = ATgetArgument(t, 1);
                              k_72 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, n_72, (ATerm) ATmakeAppl(sym_Op_2, term_b_25, (ATerm) ATinsert(ATinsert(ATempty, k_72), m_72)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  m_72 = ATgetArgument(t, 0);
                                  n_72 = ATgetArgument(t, 1);
                                  k_72 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, k_72)), m_72), (ATerm) ATmakeAppl(sym_Build_1, n_72)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      m_72 = ATgetArgument(t, 0);
                                      n_72 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_72, (ATerm) ATmakeAppl(sym_Match_1, n_72));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          m_72 = ATgetArgument(t, 0);
                                          n_72 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_72), n_72);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              m_72 = ATgetArgument(t, 0);
                                              n_72 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_72), m_72);
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
ATerm z_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_75 = ATgetArgument(t, 0);
      t = q_75;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_l_7;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          q_75 = ATgetArgument(t, 0);
          t = q_75;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_f_7;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              q_75 = ATgetArgument(t, 0);
              r_75 = ATgetArgument(t, 1);
              t = q_75;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_l_7;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  q_75 = ATgetArgument(t, 0);
                  r_75 = ATgetArgument(t, 1);
                  t = r_75;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_l_7;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      q_75 = ATgetArgument(t, 0);
                      r_75 = ATgetArgument(t, 1);
                      t = r_75;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_l_7;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          q_75 = ATgetArgument(t, 0);
                          t = q_75;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_l_7;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              q_75 = ATgetArgument(t, 0);
                              t = q_75;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_l_7;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  q_75 = ATgetArgument(t, 0);
                                  r_75 = ATgetArgument(t, 1);
                                  t = r_75;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_l_7;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      q_75 = ATgetArgument(t, 0);
                                      r_75 = ATgetArgument(t, 1);
                                      t = r_75;
                                      t = fetch_1_0(z_1, t);
                                      t = term_l_7;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          q_75 = ATgetArgument(t, 0);
                                          r_75 = ATgetArgument(t, 1);
                                          t = r_75;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = q_75;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = r_75;
                                                }
                                              else
                                                {
                                                  t = q_75;
                                                }
                                            }
                                          else
                                            {
                                              t = q_75;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = r_75;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              q_75 = ATgetArgument(t, 0);
                                              r_75 = ATgetArgument(t, 1);
                                              t = r_75;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = q_75;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = r_75;
                                                    }
                                                  else
                                                    {
                                                      t = q_75;
                                                    }
                                                }
                                              else
                                                {
                                                  t = q_75;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = r_75;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  q_75 = ATgetArgument(t, 0);
                                                  t = q_75;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_l_7;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      q_75 = ATgetArgument(t, 0);
                                                      r_75 = ATgetArgument(t, 1);
                                                      s_75 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = s_75;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_75, r_75);
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
  ATerm v_76 = NULL,x_76 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      x_76 = ATgetArgument(t, 0);
      t = x_76;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_f_7;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          x_76 = ATgetArgument(t, 0);
          t = x_76;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_l_7;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              x_76 = ATgetArgument(t, 0);
              v_76 = ATgetArgument(t, 1);
              t = v_76;
              if(match_cons(t, sym_Id_0))
                {
                  t = x_76;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = v_76;
                    }
                  else
                    {
                      t = x_76;
                    }
                }
              else
                {
                  t = x_76;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = v_76;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  x_76 = ATgetArgument(t, 0);
                  v_76 = ATgetArgument(t, 1);
                  t = x_76;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_f_7;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      x_76 = ATgetArgument(t, 0);
                      v_76 = ATgetArgument(t, 1);
                      t = v_76;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_f_7;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          x_76 = ATgetArgument(t, 0);
                          v_76 = ATgetArgument(t, 1);
                          t = v_76;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_f_7;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              x_76 = ATgetArgument(t, 0);
                              t = x_76;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_f_7;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  x_76 = ATgetArgument(t, 0);
                                  t = x_76;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_f_7;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      x_76 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = x_76;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_f_7;
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
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm l_27 = t;
        int m_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(m_27);
          }
        else
          {
            t = l_27;
            {
              ATerm n_27 = t;
              int o_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(o_27);
                }
              else
                {
                  t = n_27;
                  {
                    ATerm q_27 = t;
                    int r_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(r_27);
                      }
                    else
                      {
                        t = q_27;
                        {
                          ATerm s_27 = t;
                          int t_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(t_27);
                            }
                          else
                            {
                              t = s_27;
                              {
                                ATerm v_27 = t;
                                int w_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_77 = NULL,u_77 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        o_77 = ATgetArgument(t, 0);
                                        u_77 = ATgetArgument(t, 1);
                                        t = o_77;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = u_77;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            o_77 = ATgetArgument(t, 0);
                                            u_77 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = o_77;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = u_77;
                                      }
                                    ;
                                    LocalPopChoice(w_27);
                                  }
                                else
                                  {
                                    t = v_27;
                                    {
                                      ATerm x_27 = t;
                                      int y_27 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(y_27);
                                        }
                                      else
                                        {
                                          t = x_27;
                                          {
                                            ATerm z_27 = t;
                                            int a_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(a_28);
                                              }
                                            else
                                              {
                                                t = z_27;
                                                {
                                                  ATerm b_28 = t;
                                                  int c_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(c_28);
                                                    }
                                                  else
                                                    {
                                                      t = b_28;
                                                      {
                                                        ATerm d_28 = t;
                                                        int e_28 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(e_28);
                                                          }
                                                        else
                                                          {
                                                            t = d_28;
                                                            {
                                                              ATerm f_28 = t;
                                                              int g_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(g_28);
                                                                }
                                                              else
                                                                {
                                                                  t = f_28;
                                                                  {
                                                                    ATerm h_28 = t;
                                                                    int j_28 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(j_28);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_28;
                                                                        {
                                                                          ATerm k_28 = t;
                                                                          int l_28 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
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
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(n_28);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = m_28;
                                                                                    {
                                                                                      ATerm x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL;
                                                                                      y_77 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          z_77 = ATgetArgument(t, 0);
                                                                                          a_78 = ATgetArgument(t, 1);
                                                                                          t = z_77;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              x_77 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = y_77;
                                                                                          t = h_5(x_77, a_78, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              z_77 = ATgetArgument(t, 0);
                                                                                              a_78 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = z_77;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = a_78;
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
ATerm a_2 (ATerm t)
{
  ATerm q_78 = NULL;
  q_78 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_78);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm r_78 = NULL;
  r_78 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_78);
  return(t);
}
ATerm c_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      if(((ATgetType(o_28) != AT_LIST) || !(ATisEmpty(o_28))))
        _fail(t);
      {
        ATerm p_28 = ATgetArgument(t, 1);
        if(((ATgetType(p_28) != AT_LIST) || !(ATisEmpty(p_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_28 = ATgetArgument(t, 0);
      if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
        {
          u_78 = ATgetFirst((ATermList) q_28);
          v_78 = (ATerm) ATgetNext((ATermList) q_28);
        }
      else
        _fail(t);
      {
        ATerm r_28 = ATgetArgument(t, 1);
        if(((ATgetType(r_28) == AT_LIST) && !(ATisEmpty(r_28))))
          {
            w_78 = ATgetFirst((ATermList) r_28);
            x_78 = (ATerm) ATgetNext((ATermList) r_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_78, w_78), (ATerm) ATmakeAppl(sym__2, v_78, x_78));
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm y_78 = NULL,z_78 = NULL;
  if(match_cons(t, sym__2))
    {
      y_78 = ATgetArgument(t, 0);
      z_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_78), y_78);
  return(t);
}
ATerm g_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_28 = ATgetArgument(t, 0);
      if(((ATgetType(s_28) != AT_LIST) || !(ATisEmpty(s_28))))
        _fail(t);
      {
        ATerm t_28 = ATgetArgument(t, 1);
        if(((ATgetType(t_28) != AT_LIST) || !(ATisEmpty(t_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
        {
          g_79 = ATgetFirst((ATermList) u_28);
          h_79 = (ATerm) ATgetNext((ATermList) u_28);
        }
      else
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
          {
            i_79 = ATgetFirst((ATermList) v_28);
            j_79 = (ATerm) ATgetNext((ATermList) v_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_79, i_79), (ATerm) ATmakeAppl(sym__2, h_79, j_79));
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm k_79 = NULL,l_79 = NULL;
  if(match_cons(t, sym__2))
    {
      k_79 = ATgetArgument(t, 0);
      l_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_79), k_79);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm m_79 = NULL,n_79 = NULL,o_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if(match_cons(w_28, sym__2))
        {
          m_79 = ATgetArgument(w_28, 0);
          n_79 = ATgetArgument(w_28, 1);
        }
      else
        _fail(t);
      o_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_79)), (ATerm) ATmakeAppl(sym_Seq_2, o_79, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_79))));
  return(t);
}
ATerm g_12 (ATerm m_90, ATerm s_90, ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,p_78 = NULL;
  t = s_90;
  t = map_1_0(new_0_0, t);
  i_78 = t;
  t = map_1_0(a_2, t);
  f_78 = t;
  t = new_0_0(t);
  g_78 = t;
  t = s_90;
  t = map_1_0(new_0_0, t);
  j_78 = t;
  t = map_1_0(b_2, t);
  h_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_78, j_78);
  t = genzip_4_0(c_2, d_2, f_2, _id, t);
  p_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_78, s_90);
  t = genzip_4_0(g_2, h_2, i_2, j_2, t);
  k_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_78, j_78);
  t = conc_0_0(t);
  l_78 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, m_90, f_78), (ATerm) ATmakeAppl(sym_Var_1, g_78)));
  t = Mapp2_0_0(t);
  m_78 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, m_90, h_78), (ATerm) ATmakeAppl(sym_Var_1, g_78)));
  t = Bapp_0_0(t);
  n_78 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(l_78), g_78), (ATerm) ATmakeAppl(sym_Seq_2, m_78, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_78), n_78)));
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL;
  if(((q_79 != NULL) && (q_79 != t)))
    _fail(t);
  else
    q_79 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((r_79 != NULL) && (r_79 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_28 = t;
    int y_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_79 = NULL,t_79 = NULL,v_79 = NULL,w_79 = NULL;
        t = not_null(q_79);
        t = new_0_0(t);
        if(((v_79 != NULL) && (v_79 != t)))
          _fail(t);
        else
          v_79 = t;
        t = not_null(r_79);
        {
          ATerm k_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_79 != NULL) && (s_79 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_79 = ATgetArgument(t, 0);
                if(((t_79 != NULL) && (t_79 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_79 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(v_79));
            return(t);
          }
          t = pat_td_1_0(k_2, t);
          if(((w_79 != NULL) && (w_79 != t)))
            _fail(t);
          else
            w_79 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_79)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_79)), not_null(s_79))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_79))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(w_79))));
        }
        ;
        LocalPopChoice(y_28);
      }
    else
      {
        t = x_28;
        {
          ATerm b_29 = t;
          int c_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_79 = NULL,z_79 = NULL,a_80 = NULL;
              t = not_null(q_79);
              t = new_0_0(t);
              if(((z_79 != NULL) && (z_79 != t)))
                _fail(t);
              else
                z_79 = t;
              t = not_null(r_79);
              {
                ATerm l_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_79 != NULL) && (x_79 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_79 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_79));
                  return(t);
                }
                t = pat_td_1_0(l_2, t);
                if(((a_80 != NULL) && (a_80 != t)))
                  _fail(t);
                else
                  a_80 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_79)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_79), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_79))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_80))));
              }
              ;
              LocalPopChoice(c_29);
            }
          else
            {
              t = b_29;
              {
                ATerm b_80 = NULL,c_80 = NULL,e_80 = NULL,f_80 = NULL;
                t = not_null(q_79);
                t = new_0_0(t);
                if(((e_80 != NULL) && (e_80 != t)))
                  _fail(t);
                else
                  e_80 = t;
                t = not_null(r_79);
                {
                  ATerm m_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((b_80 != NULL) && (b_80 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_80 = ATgetArgument(t, 0);
                        if(((c_80 != NULL) && (c_80 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_80 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_80));
                    return(t);
                  }
                  t = pat_td_1_0(m_2, t);
                  if(((f_80 != NULL) && (f_80 != t)))
                    _fail(t);
                  else
                    f_80 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_80)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(b_80), not_null(c_80), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_80)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_80))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm at_end_1_0 (ATerm w_125 (ATerm), ATerm t)
{
  ATerm a_81 (ATerm t)
  {
    ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL;
    z_80 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_80 = ATgetFirst((ATermList) t);
        y_80 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_5 = NULL,x_5 = NULL,r_8 = NULL;
          t = SSLgetAnnotations(z_80);
          l_5 = t;
          t = y_80;
          t = a_81(t);
          x_5 = t;
          t = (ATerm) ATinsert(CheckATermList(x_5), x_80);
          r_8 = t;
          t = SSLsetAnnotations(r_8, l_5);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_80;
        t = w_125(t);
      }
    return(t);
  }
  t = a_81(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_80 = NULL,i_80 = NULL,j_80 = NULL;
  h_80 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_80;
    }
  else
    {
      ATerm n_2 (ATerm t)
      {
        t = not_null(j_80);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_80 != NULL) && (i_80 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_80 = ATgetFirst((ATermList) t);
          if(((j_80 != NULL) && (j_80 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(i_80);
      t = at_end_1_0(n_2, t);
    }
  return(t);
}
ATerm m_81 (ATerm e_81, ATerm t)
{
  ATerm f_81 = NULL;
  t = SSL_explode_term(e_81);
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_81;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_81 = NULL,i_81 = NULL,j_81 = NULL;
  if(((j_81 != NULL) && (j_81 != t)))
    _fail(t);
  else
    j_81 = t;
  if(match_cons(t, sym__2))
    {
      h_81 = ATgetArgument(t, 0);
      i_81 = ATgetArgument(t, 1);
      {
        ATerm e_29 = t;
        int f_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              t = not_null(i_81);
              return(t);
            }
            t = not_null(h_81);
            t = at_end_1_0(p_2, t);
            ;
            LocalPopChoice(f_29);
          }
        else
          {
            t = e_29;
            t = m_81(not_null(j_81), t);
          }
      }
    }
  else
    {
      t = m_81(not_null(j_81), t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm s_118 (ATerm), ATerm t_118 (ATerm), ATerm t)
{
  ATerm t_81 (ATerm t)
  {
    ATerm g_29 = t;
    int i_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_118(t);
        ;
        LocalPopChoice(i_29);
      }
    else
      {
        t = g_29;
        {
          ATerm n_81 = NULL,o_81 = NULL,p_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,t_8 = NULL;
          t = r_118(t);
          s_81 = t;
          if(match_cons(t, sym__2))
            {
              o_81 = ATgetArgument(t, 0);
              p_81 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_81);
          n_81 = t;
          t = o_81;
          t = t_118(t);
          q_81 = t;
          t = p_81;
          t = t_81(t);
          r_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_81, r_81);
          t_8 = t;
          t = SSLsetAnnotations(t_8, n_81);
          t = s_118(t);
        }
      }
    return(t);
  }
  t = t_81(t);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm h_82 = NULL;
  h_82 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_82);
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm i_82 = NULL;
  i_82 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_82);
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      if(((ATgetType(j_29) != AT_LIST) || !(ATisEmpty(j_29))))
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
        if(((ATgetType(k_29) != AT_LIST) || !(ATisEmpty(k_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if(((ATgetType(l_29) == AT_LIST) && !(ATisEmpty(l_29))))
        {
          j_82 = ATgetFirst((ATermList) l_29);
          k_82 = (ATerm) ATgetNext((ATermList) l_29);
        }
      else
        _fail(t);
      {
        ATerm m_29 = ATgetArgument(t, 1);
        if(((ATgetType(m_29) == AT_LIST) && !(ATisEmpty(m_29))))
          {
            l_82 = ATgetFirst((ATermList) m_29);
            m_82 = (ATerm) ATgetNext((ATermList) m_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_82, l_82), (ATerm) ATmakeAppl(sym__2, k_82, m_82));
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm o_82 = NULL,p_82 = NULL;
  if(match_cons(t, sym__2))
    {
      o_82 = ATgetArgument(t, 0);
      p_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_82), o_82);
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if(((ATgetType(n_29) != AT_LIST) || !(ATisEmpty(n_29))))
        _fail(t);
      {
        ATerm o_29 = ATgetArgument(t, 1);
        if(((ATgetType(o_29) != AT_LIST) || !(ATisEmpty(o_29))))
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
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_29 = ATgetArgument(t, 0);
      if(((ATgetType(p_29) == AT_LIST) && !(ATisEmpty(p_29))))
        {
          r_82 = ATgetFirst((ATermList) p_29);
          s_82 = (ATerm) ATgetNext((ATermList) p_29);
        }
      else
        _fail(t);
      {
        ATerm q_29 = ATgetArgument(t, 1);
        if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
          {
            t_82 = ATgetFirst((ATermList) q_29);
            u_82 = (ATerm) ATgetNext((ATermList) q_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_82, t_82), (ATerm) ATmakeAppl(sym__2, s_82, u_82));
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL;
  if(match_cons(t, sym__2))
    {
      v_82 = ATgetArgument(t, 0);
      w_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_82), v_82);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm x_82 = NULL,d_83 = NULL,e_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_29 = ATgetArgument(t, 0);
      if(match_cons(r_29, sym__2))
        {
          x_82 = ATgetArgument(r_29, 0);
          d_83 = ATgetArgument(r_29, 1);
        }
      else
        _fail(t);
      e_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_82)), (ATerm) ATmakeAppl(sym_Seq_2, e_83, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_83))));
  return(t);
}
ATerm j_12 (ATerm x_90, ATerm f_91, ATerm e_91, ATerm t)
{
  ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,g_82 = NULL;
  t = (ATerm) ATinsert(CheckATermList(f_91), e_91);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_81 = ATgetFirst((ATermList) t);
      z_81 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(q_2, t);
  w_81 = t;
  t = (ATerm) ATinsert(CheckATermList(f_91), e_91);
  t = map_1_0(new_0_0, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_81 = ATgetFirst((ATermList) t);
      a_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = map_1_0(r_2, t);
  y_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_81, a_82);
  t = genzip_4_0(s_2, t_2, u_2, _id, t);
  g_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_82, (ATerm) ATinsert(CheckATermList(f_91), e_91));
  t = genzip_4_0(v_2, w_2, x_2, y_2, t);
  b_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_81, a_82);
  t = conc_0_0(t);
  c_82 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, x_90, w_81), (ATerm) ATmakeAppl(sym_Var_1, v_81)));
  t = Mapp2_0_0(t);
  d_82 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Anno_2, (ATerm)ATmakeAppl(sym_Op_2, x_90, y_81), (ATerm) ATmakeAppl(sym_Var_1, x_81)));
  t = Bapp_0_0(t);
  e_82 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(CheckATermList(c_82), x_81), v_81), (ATerm) ATmakeAppl(sym_Seq_2, d_82, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_82), e_82)));
  return(t);
}
ATerm pat_td_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_112(t);
      ;
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL;
        if(((p_85 != NULL) && (p_85 != t)))
          _fail(t);
        else
          p_85 = t;
        if(match_cons(t, sym_Op_2))
          {
            q_85 = ATgetArgument(t, 0);
            r_85 = ATgetArgument(t, 1);
            {
              ATerm f_6 = NULL,i_6 = NULL,x_8 = NULL;
              t = SSLgetAnnotations(not_null(p_85));
              if(((f_6 != NULL) && (f_6 != t)))
                _fail(t);
              else
                f_6 = t;
              t = not_null(r_85);
              {
                ATerm z_2 (ATerm t)
                {
                  t = pat_td_1_0(k_112, t);
                  return(t);
                }
                t = fetch_1_0(z_2, t);
                if(((i_6 != NULL) && (i_6 != t)))
                  _fail(t);
                else
                  i_6 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, not_null(q_85), not_null(i_6));
                if(((x_8 != NULL) && (x_8 != t)))
                  _fail(t);
                else
                  x_8 = t;
                t = SSLsetAnnotations(not_null(x_8), not_null(f_6));
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                q_85 = ATgetArgument(t, 0);
                r_85 = ATgetArgument(t, 1);
                {
                  ATerm u_29 = t;
                  int v_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_6 = NULL,u_6 = NULL,p_9 = NULL;
                      t = SSLgetAnnotations(not_null(p_85));
                      r_6 = t;
                      t = not_null(r_85);
                      t = pat_td_1_0(k_112, t);
                      u_6 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(q_85), u_6);
                      p_9 = t;
                      t = SSLsetAnnotations(p_9, r_6);
                      ;
                      LocalPopChoice(v_29);
                    }
                  else
                    {
                      t = u_29;
                      {
                        ATerm d_7 = NULL,h_7 = NULL,q_9 = NULL;
                        t = SSLgetAnnotations(not_null(p_85));
                        d_7 = t;
                        t = not_null(q_85);
                        t = pat_td_1_0(k_112, t);
                        h_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, h_7, not_null(r_85));
                        q_9 = t;
                        t = SSLsetAnnotations(q_9, d_7);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    q_85 = ATgetArgument(t, 0);
                    r_85 = ATgetArgument(t, 1);
                    o_85 = ATgetArgument(t, 2);
                    {
                      ATerm q_7 = NULL,u_7 = NULL,r_9 = NULL;
                      t = SSLgetAnnotations(not_null(p_85));
                      if(((q_7 != NULL) && (q_7 != t)))
                        _fail(t);
                      else
                        q_7 = t;
                      t = not_null(o_85);
                      {
                        ATerm b_3 (ATerm t)
                        {
                          t = pat_td_1_0(k_112, t);
                          return(t);
                        }
                        t = fetch_1_0(b_3, t);
                        if(((u_7 != NULL) && (u_7 != t)))
                          _fail(t);
                        else
                          u_7 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(q_85), not_null(r_85), not_null(u_7));
                        if(((r_9 != NULL) && (r_9 != t)))
                          _fail(t);
                        else
                          r_9 = t;
                        t = SSLsetAnnotations(not_null(r_9), not_null(q_7));
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        q_85 = ATgetArgument(t, 0);
                        r_85 = ATgetArgument(t, 1);
                        o_85 = ATgetArgument(t, 2);
                        {
                          ATerm e_8 = NULL,i_8 = NULL,u_9 = NULL;
                          t = SSLgetAnnotations(not_null(p_85));
                          if(((e_8 != NULL) && (e_8 != t)))
                            _fail(t);
                          else
                            e_8 = t;
                          t = not_null(o_85);
                          {
                            ATerm c_3 (ATerm t)
                            {
                              t = pat_td_1_0(k_112, t);
                              return(t);
                            }
                            t = fetch_1_0(c_3, t);
                            if(((i_8 != NULL) && (i_8 != t)))
                              _fail(t);
                            else
                              i_8 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(q_85), not_null(r_85), not_null(i_8));
                            if(((u_9 != NULL) && (u_9 != t)))
                              _fail(t);
                            else
                              u_9 = t;
                            t = SSLsetAnnotations(not_null(u_9), not_null(e_8));
                          }
                        }
                      }
                    else
                      {
                        ATerm v_8 = NULL,c_9 = NULL,w_9 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            if(((q_85 != NULL) && (q_85 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              q_85 = ATgetArgument(t, 0);
                            if(((r_85 != NULL) && (r_85 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              r_85 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(not_null(p_85));
                        v_8 = t;
                        t = not_null(r_85);
                        t = pat_td_1_0(k_112, t);
                        c_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, not_null(q_85), c_9);
                        w_9 = t;
                        t = SSLsetAnnotations(w_9, v_8);
                      }
                  }
              }
          }
      }
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm z_85 = NULL,a_86 = NULL;
  if(((z_85 != NULL) && (z_85 != t)))
    _fail(t);
  else
    z_85 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((a_86 != NULL) && (a_86 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        a_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_86 = NULL,d_86 = NULL,e_86 = NULL,f_86 = NULL;
        t = not_null(z_85);
        t = new_0_0(t);
        if(((e_86 != NULL) && (e_86 != t)))
          _fail(t);
        else
          e_86 = t;
        t = not_null(a_86);
        {
          ATerm d_3 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((c_86 != NULL) && (c_86 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_86 = ATgetArgument(t, 0);
                if(((d_86 != NULL) && (d_86 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  d_86 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(e_86)), not_null(c_86));
            return(t);
          }
          t = pat_td_1_0(d_3, t);
          if(((f_86 != NULL) && (f_86 != t)))
            _fail(t);
          else
            f_86 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_86)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_86)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_86)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(d_86))))));
        }
        ;
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        {
          ATerm z_29 = t;
          int a_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL;
              t = not_null(z_85);
              t = new_0_0(t);
              if(((i_86 != NULL) && (i_86 != t)))
                _fail(t);
              else
                i_86 = t;
              t = not_null(a_86);
              {
                ATerm e_3 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((h_86 != NULL) && (h_86 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_86 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_86));
                  return(t);
                }
                t = pat_td_1_0(e_3, t);
                if(((j_86 != NULL) && (j_86 != t)))
                  _fail(t);
                else
                  j_86 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_86)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(j_86)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_86))), not_null(h_86))));
              }
              ;
              LocalPopChoice(a_30);
            }
          else
            {
              t = z_29;
              {
                ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL;
                t = not_null(z_85);
                t = new_0_0(t);
                if(((n_86 != NULL) && (n_86 != t)))
                  _fail(t);
                else
                  n_86 = t;
                t = not_null(a_86);
                {
                  ATerm f_3 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((m_86 != NULL) && (m_86 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_86 = ATgetArgument(t, 0);
                        if(((l_86 != NULL) && (l_86 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_86 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_86));
                    return(t);
                  }
                  t = pat_td_1_0(f_3, t);
                  if(((o_86 != NULL) && (o_86 != t)))
                    _fail(t);
                  else
                    o_86 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_86)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_86)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_86))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_86)), not_null(m_86)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm g_87 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      g_87 = ATgetArgument(t, 0);
      t = g_87;
    }
  else
    {
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_c_30;
    }
  return(t);
}
ATerm MatchingCongruence_0_0 (ATerm t)
{
  ATerm u_86 = NULL,v_86 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      u_86 = ATgetArgument(t, 0);
      v_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_86;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, u_86, (ATerm) ATempty));
    }
  else
    {
      ATerm f_87 = NULL;
      t = v_86;
      t = map_1_0(g_3, t);
      f_87 = t;
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, u_86, f_87));
      t = Mapp2_0_0(t);
    }
  return(t);
}
ATerm repeat_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm n_87 (ATerm t)
  {
    ATerm d_30 = t;
    int e_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_123(t);
        t = n_87(t);
        ;
        LocalPopChoice(e_30);
      }
    else
      {
        t = d_30;
      }
    return(t);
  }
  t = n_87(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm f_114 (ATerm), ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = bottomup_1_0(f_114, t);
    return(t);
  }
  t = SRTS_all(h_3, t);
  t = f_114(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = repeat_1_0(k_3, t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_30 = t;
      int i_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MatchingCongruence_0_0(t);
          ;
          LocalPopChoice(i_30);
        }
      else
        {
          t = h_30;
          {
            ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL;
            c_88 = t;
            if(match_cons(t, sym_Call_2))
              {
                d_88 = ATgetArgument(t, 0);
                e_88 = ATgetArgument(t, 1);
                t = d_88;
                if(match_cons(t, sym_SVar_1))
                  {
                    v_87 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = v_87;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Anno_Cong__", 0, ATtrue)))
                  _fail(t);
                t = e_88;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    w_87 = ATgetFirst((ATermList) t);
                    z_87 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_87;
                if(match_cons(t, sym_Cong_2))
                  {
                    x_87 = ATgetArgument(t, 0);
                    y_87 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_87;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    a_88 = ATgetFirst((ATermList) t);
                    b_88 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_88;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_88;
                t = j_12(x_87, y_87, a_88, t);
              }
            else
              {
                if(match_cons(t, sym_Cong_2))
                  {
                    d_88 = ATgetArgument(t, 0);
                    e_88 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_88;
                t = g_12(d_88, e_88, t);
              }
          }
        }
      ;
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm define_congruences_0_0 (ATerm t)
{
  t = bottomup_1_0(i_3, t);
  t = simplify_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm g_125 (ATerm), ATerm t)
{
  ATerm y_88 (ATerm t)
  {
    ATerm v_88 = NULL,w_88 = NULL,x_88 = NULL;
    v_88 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_88;
      }
    else
      {
        ATerm n_9 = NULL,v_9 = NULL,x_9 = NULL,e_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_88 = ATgetFirst((ATermList) t);
            x_88 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_88);
        n_9 = t;
        t = w_88;
        t = g_125(t);
        v_9 = t;
        t = x_88;
        t = y_88(t);
        x_9 = t;
        t = (ATerm) ATinsert(CheckATermList(x_9), v_9);
        e_19 = t;
        t = SSLsetAnnotations(e_19, n_9);
      }
    return(t);
  }
  t = y_88(t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_97 (ATerm), ATerm a_98 (ATerm), ATerm t)
{
  ATerm a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,k_19 = NULL;
  f_89 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_89 = ATgetFirst((ATermList) t);
      c_89 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_89);
  a_89 = t;
  t = b_89;
  t = z_97(t);
  d_89 = t;
  t = c_89;
  t = a_98(t);
  e_89 = t;
  t = (ATerm) ATinsert(CheckATermList(e_89), d_89);
  k_19 = t;
  t = SSLsetAnnotations(k_19, a_89);
  return(t);
}
ATerm k_12 (ATerm b_74, ATerm c_74, ATerm t)
{
  ATerm g_89 = NULL;
  t = SSL_fputc(b_74, c_74);
  g_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_89);
  return(t);
}
ATerm l_12 (ATerm p_77, ATerm q_77, ATerm t)
{
  ATerm h_89 = NULL;
  t = SSL_write_term_to_stream_text(p_77, q_77);
  h_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_89);
  return(t);
}
ATerm n_12 (ATerm m_135 (ATerm), ATerm t_555, ATerm t_77, ATerm t)
{
  ATerm n_89 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_555, term_j_30);
  t = open_stream_0_0(t);
  n_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_89, t_77);
  t = m_135(t);
  t = fclose_0_0(t);
  t = t_77;
  return(t);
}
ATerm m_12 (ATerm l_77, ATerm m_77, ATerm t)
{
  ATerm o_89 = NULL;
  t = SSL_write_term_to_stream_baf(l_77, m_77);
  o_89 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_89);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm r_89 = NULL,s_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_30 = ATgetArgument(t, 0);
      if(match_cons(k_30, sym_Stream_1))
        {
          r_89 = ATgetArgument(k_30, 0);
        }
      else
        _fail(t);
      s_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_12(r_89, s_89, t);
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_30 = ATgetArgument(t, 0);
      if(match_cons(l_30, sym_Stream_1))
        {
          w_89 = ATgetArgument(l_30, 0);
        }
      else
        _fail(t);
      x_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(w_89, x_89, t);
  t_89 = t;
  t = term_m_30;
  u_89 = t;
  t = t_89;
  if(match_cons(t, sym_Stream_1))
    {
      v_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_30, t_89);
  t = k_12(u_89, v_89, t);
  return(t);
}
ATerm output_1_0 (ATerm v_139 (ATerm), ATerm t)
{
  ATerm p_89 = NULL,q_89 = NULL;
  t = v_139(t);
  q_89 = t;
  {
    ATerm n_30 = t;
    int o_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_30;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(o_30);
      }
    else
      {
        t = n_30;
        t = term_q_30;
      }
    p_89 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_89, q_89);
    {
      ATerm r_30 = t;
      int s_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_t_30;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, p_89, q_89);
          LocalPopChoice(s_30);
          if(match_cons(t, sym__2))
            {
              ATerm v_30 = ATgetArgument(t, 0);
              ATerm w_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_12(l_3, p_89, q_89, t);
        }
      else
        {
          t = r_30;
          if(match_cons(t, sym__2))
            {
              ATerm x_30 = ATgetArgument(t, 0);
              ATerm y_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_12(m_3, p_89, q_89, t);
        }
    }
  }
  return(t);
}
ATerm i_91 (ATerm f_90, ATerm t)
{
  t = SSL_fclose(f_90);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_90 = NULL,w_90 = NULL;
  w_90 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_90 = ATgetArgument(t, 0);
      {
        ATerm z_30 = t;
        int a_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_90);
            ;
            LocalPopChoice(a_31);
          }
        else
          {
            t = z_30;
            t = i_91(w_90, t);
          }
      }
    }
  else
    {
      t = i_91(w_90, t);
    }
  return(t);
}
ATerm p_12 (ATerm r_77, ATerm t)
{
  t = SSL_read_term_from_stream(r_77);
  return(t);
}
ATerm q_12 (ATerm d_74, ATerm e_74, ATerm t)
{
  ATerm j_91 = NULL;
  t = SSL_fopen(d_74, e_74);
  j_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_91);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_91 = NULL;
  t = SSL_stdin_stream();
  m_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_91);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_91 = NULL;
  t = SSL_stdout_stream();
  n_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_91);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_91 = NULL;
  t = SSL_stderr_stream();
  o_91 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_91);
  return(t);
}
ATerm a_94 (ATerm u_91, ATerm t)
{
  ATerm x_91 = NULL;
  t = SSL_explode_term(u_91);
  if(match_cons(t, sym__2))
    {
      ATerm b_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_31 = ATgetArgument(t, 1);
        if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
          {
            x_91 = ATgetFirst((ATermList) c_31);
            {
              ATerm d_31 = (ATerm) ATgetNext((ATermList) c_31);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_91;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_91;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_91;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_91;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_94 (ATerm f_92, ATerm k_92, ATerm l_92, ATerm t)
{
  ATerm m_92 = NULL,o_92 = NULL,r_92 = NULL,k_93 = NULL,e_20 = NULL;
  t = SSLgetAnnotations(l_92);
  r_92 = t;
  t = f_92;
  if(match_cons(t, sym_Path_1))
    {
      k_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_93, k_92);
  e_20 = t;
  t = SSLsetAnnotations(e_20, r_92);
  if(match_cons(t, sym__2))
    {
      m_92 = ATgetArgument(t, 0);
      o_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12(m_92, o_92, t);
  return(t);
}
ATerm c_94 (ATerm m_93, ATerm n_93, ATerm p_93, ATerm t)
{
  ATerm q_93 = NULL,r_93 = NULL,s_93 = NULL,v_93 = NULL,i_20 = NULL;
  t = SSLgetAnnotations(p_93);
  s_93 = t;
  t = SSL_is_string(m_93);
  v_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_93, n_93);
  i_20 = t;
  t = SSLsetAnnotations(i_20, s_93);
  if(match_cons(t, sym__2))
    {
      q_93 = ATgetArgument(t, 0);
      r_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12(q_93, r_93, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm x_93 = NULL,y_93 = NULL,z_93 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_31 = ATgetArgument(t, 0);
      ATerm f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  x_93 = t;
  if(match_cons(t, sym__2))
    {
      y_93 = ATgetArgument(t, 0);
      z_93 = ATgetArgument(t, 1);
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_94(x_93, t);
            ;
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            {
              ATerm i_31 = t;
              int j_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_94(y_93, z_93, x_93, t);
                  ;
                  LocalPopChoice(j_31);
                }
              else
                {
                  t = i_31;
                  t = c_94(y_93, z_93, x_93, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_94(x_93, t);
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL;
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_94 = NULL;
      g_94 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_94, term_n_31);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      t = debug_1_0(n_3, t);
      _fail(t);
    }
  e_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_12(f_94, t);
  d_94 = t;
  t = e_94;
  t = fclose_0_0(t);
  t = d_94;
  return(t);
}
ATerm input_1_0 (ATerm w_139 (ATerm), ATerm t)
{
  ATerm o_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_31;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(p_31);
    }
  else
    {
      t = o_31;
      t = term_r_31;
    }
  t = ReadFromFile_0_0(t);
  t = w_139(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL;
  i_94 = t;
  t = term_s_31;
  t = whoami_0_0(t);
  j_94 = t;
  t = term_t_31;
  l_94 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_31), j_94), term_u_31);
  m_94 = t;
  t = SSL_printnl(l_94, m_94);
  t = term_x_31;
  k_94 = t;
  t = SSL_exit(k_94);
  t = i_94;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm o_94 = NULL;
  o_94 = t;
  if(match_string(t, "-k"))
    {
      t = o_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_94;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL;
  p_94 = t;
  t = SSL_string_to_int(p_94);
  q_94 = t;
  t = term_y_31;
  r_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_31, q_94);
  t = y_12(r_94, q_94, t);
  t = p_94;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_z_31;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_3, p_3, q_3, t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm t_94 = NULL;
  t_94 = t;
  if(match_string(t, "-S"))
    {
      t = t_94;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_94;
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm u_94 = NULL,v_94 = NULL;
  t = term_a_32;
  u_94 = t;
  t = term_b_32;
  v_94 = t;
  t = term_c_32;
  t = y_12(u_94, v_94, t);
  t = term_d_32;
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_e_32;
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL;
  w_94 = t;
  t = SSL_string_to_int(w_94);
  x_94 = t;
  t = term_a_32;
  y_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_32, x_94);
  t = y_12(y_94, x_94, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_94);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_f_32;
  return(t);
}
ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL;
  t = term_g_32;
  z_94 = t;
  t = term_s_31;
  a_95 = t;
  t = term_h_32;
  t = y_12(z_94, a_95, t);
  t = term_j_32;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_3, s_3, t_3, t);
      ;
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_3, v_3, w_3, t);
            ;
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            t = Option_3_0(x_3, y_3, z_3, t);
          }
      }
    }
  return(t);
}
ATerm y_12 (ATerm s_78, ATerm t_78, ATerm t)
{
  ATerm b_95 = NULL;
  t = term_p_32;
  b_95 = t;
  t = SSL_table_put(b_95, s_78, t_78);
  t = (ATerm) ATmakeAppl(sym__3, term_p_32, s_78, t_78);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_95 = NULL,h_95 = NULL,i_95 = NULL;
      t = term_s_31;
      t = d_0(t);
      g_95 = t;
      t = term_q_32;
      h_95 = t;
      t = term_r_32;
      i_95 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_32, term_r_32, g_95);
      t = w_12(h_95, i_95, g_95, t);
      _fail(t);
    }
  else
    {
      ATerm l_95 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_95 = ATgetFirst((ATermList) t);
          f_95 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_95;
      t = a_0(t);
      t = term_s_31;
      t = b_0(t);
      l_95 = t;
      t = (ATerm) ATinsert(CheckATermList(f_95), l_95);
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm n_95 = NULL;
  n_95 = t;
  if(match_string(t, "-o"))
    {
      t = n_95;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_95;
    }
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL;
  o_95 = t;
  t = term_p_30;
  p_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_30, o_95);
  t = y_12(p_95, o_95, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_95);
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_s_32;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_4, g_4, j_4, t);
  return(t);
}
ATerm w_12 (ATerm f_69, ATerm g_69, ATerm e_69, ATerm t)
{
  ATerm s_95 = NULL,u_95 = NULL,v_95 = NULL;
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_69, g_69);
  {
    ATerm t_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_32 = ATgetArgument(t, 0);
            ATerm x_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_69, g_69);
        t = v_12(f_69, g_69, t);
        ;
        LocalPopChoice(u_32);
      }
    else
      {
        t = t_32;
        t = (ATerm) ATempty;
      }
    u_95 = t;
    t = (ATerm) ATinsert(CheckATermList(u_95), e_69);
    v_95 = t;
    t = SSL_table_put(f_69, g_69, v_95);
    t = s_95;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_96 = NULL,d_96 = NULL,e_96 = NULL,f_96 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_96 = NULL,h_96 = NULL,i_96 = NULL;
      t = term_s_31;
      t = m_0(t);
      g_96 = t;
      t = term_q_32;
      h_96 = t;
      t = term_r_32;
      i_96 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_q_32, term_r_32, g_96);
      t = w_12(h_96, i_96, g_96, t);
      _fail(t);
    }
  else
    {
      ATerm m_96 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_96 = ATgetFirst((ATermList) t);
          d_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_96;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_96 = ATgetFirst((ATermList) t);
          f_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_96;
      t = i_0(t);
      t = e_96;
      t = k_0(t);
      m_96 = t;
      t = (ATerm) ATinsert(CheckATermList(f_96), m_96);
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm o_96 = NULL;
  o_96 = t;
  if(match_string(t, "-i"))
    {
      t = o_96;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_96;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm p_96 = NULL,q_96 = NULL;
  p_96 = t;
  t = term_q_31;
  q_96 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_31, p_96);
  t = y_12(q_96, p_96, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_96);
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, m_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL,u_96 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_31;
  t = whoami_0_0(t);
  r_96 = t;
  t = term_t_31;
  t_96 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_32), r_96);
  u_96 = t;
  t = SSL_printnl(t_96, u_96);
  t = term_x_31;
  s_96 = t;
  t = SSL_exit(s_96);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_33;
  t = get_config_0_0(t);
  return(t);
}
ATerm r_12 (ATerm j_67, ATerm k_67, ATerm t)
{
  ATerm b_33 = t;
  int c_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_67, k_67);
      ;
      LocalPopChoice(c_33);
    }
  else
    {
      t = b_33;
      t = SSL_addr(j_67, k_67);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_127 (ATerm), ATerm z_127 (ATerm), ATerm t)
{
  ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL;
  w_96 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_96;
      t = y_127(t);
    }
  else
    {
      ATerm b_97 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_96 = ATgetFirst((ATermList) t);
          y_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_96;
      t = foldr_2_0(y_127, z_127, t);
      b_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_96, b_97);
      t = z_127(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_b_32;
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm n_10 = NULL,p_10 = NULL;
  if(match_cons(t, sym__2))
    {
      n_10 = ATgetArgument(t, 0);
      p_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_12(n_10, p_10, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_97 = NULL,j_10 = NULL,k_10 = NULL;
  t = times_0_0(t);
  k_10 = t;
  t = SSL_explode_term(k_10);
  if(match_cons(t, sym__2))
    {
      ATerm d_33 = ATgetArgument(t, 0);
      j_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_10;
  t = foldr_2_0(n_4, o_4, t);
  e_97 = t;
  t = SSL_TicksToSeconds(e_97);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL;
  q_97 = t;
  if(match_cons(t, sym__2))
    {
      r_97 = ATgetArgument(t, 0);
      s_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_97;
        if((r_97 != t))
          {
            _fail(t);
          }
        t = q_97;
        ;
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        t = (ATerm) ATmakeAppl(sym__2, r_97, s_97);
        {
          ATerm g_33 = t;
          int h_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_97, s_97);
              ;
              LocalPopChoice(h_33);
            }
          else
            {
              t = g_33;
              t = SSL_gtr(r_97, s_97);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_97, s_97);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_136 (ATerm), ATerm t)
{
  ATerm w_97 = NULL;
  w_97 = t;
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_97 = NULL;
        t = term_a_32;
        t = get_config_0_0(t);
        y_97 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_97, term_x_31);
        t = geq_0_0(t);
        t = w_97;
        t = w_136(t);
        ;
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = w_97;
      }
  }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL,f_98 = NULL,g_98 = NULL;
  t = run_time_0_0(t);
  c_98 = t;
  t = term_s_31;
  t = whoami_0_0(t);
  d_98 = t;
  t = term_t_31;
  f_98 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_33), c_98), term_l_33), d_98);
  g_98 = t;
  t = SSL_printnl(f_98, g_98);
  t = (ATerm) ATmakeAppl(sym__2, term_t_31, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_33), c_98), term_l_33), d_98));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_98 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_32;
  h_98 = t;
  t = SSL_exit(h_98);
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL;
  q_98 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_98;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_98 = ATgetArgument(t, 0);
          {
            ATerm d_11 = NULL,t_20 = NULL;
            t = SSLgetAnnotations(q_98);
            d_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_98);
            t_20 = t;
            t = SSLsetAnnotations(t_20, d_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_98;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_139 (ATerm), ATerm t)
{
  ATerm n_33 = t;
  int o_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_33);
    }
  else
    {
      t = n_33;
      t = fetch_1_0(q_4, t);
    }
  t = m_139(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_98 = ATgetFirst((ATermList) t);
      u_98 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_98 = NULL,z_98 = NULL;
        ATerm r_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_98)), not_null(z_98));
          return(t);
        }
        t = not_null(u_98);
        t = g_0(t);
        if(((y_98 != NULL) && (y_98 != t)))
          _fail(t);
        else
          y_98 = t;
        t = not_null(t_98);
        t = f_0(t);
        if(((z_98 != NULL) && (z_98 != t)))
          _fail(t);
        else
          z_98 = t;
        t = not_null(u_98);
        t = reverse_acc_2_0(f_0, r_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_31;
      t = g_0(t);
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL,f_99 = NULL,d_21 = NULL;
  f_99 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_99);
  d_99 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_99);
  d_21 = t;
  t = SSLsetAnnotations(d_21, d_99);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm h_99 = NULL;
  h_99 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_99), term_q_33);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL;
  ATerm r_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_33;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_33);
    }
  else
    {
      t = r_33;
      t = fetch_1_0(t_4, t);
    }
  t = term_u_33;
  t = echo_0_0(t);
  t = term_q_32;
  b_99 = t;
  t = term_r_32;
  c_99 = t;
  t = term_v_33;
  t = v_12(b_99, c_99, t);
  t = reverse_acc_2_0(_id, u_4, t);
  t = map_1_0(w_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm q_125 (ATerm), ATerm t)
{
  ATerm e_100 (ATerm t)
  {
    ATerm b_100 = NULL,c_100 = NULL,d_100 = NULL;
    b_100 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_100 = ATgetFirst((ATermList) t);
        d_100 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_33 = t;
      int x_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_14 = NULL,b_15 = NULL,f_21 = NULL;
          t = SSLgetAnnotations(b_100);
          q_14 = t;
          t = c_100;
          t = q_125(t);
          b_15 = t;
          t = (ATerm) ATinsert(CheckATermList(d_100), b_15);
          f_21 = t;
          t = SSLsetAnnotations(f_21, q_14);
          ;
          LocalPopChoice(x_33);
        }
      else
        {
          t = w_33;
          {
            ATerm p_15 = NULL,b_16 = NULL,j_21 = NULL;
            t = SSLgetAnnotations(b_100);
            p_15 = t;
            t = d_100;
            t = e_100(t);
            b_16 = t;
            t = (ATerm) ATinsert(CheckATermList(b_16), c_100);
            j_21 = t;
            t = SSLsetAnnotations(j_21, p_15);
          }
        }
    }
    return(t);
  }
  t = e_100(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL;
  i_100 = t;
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_100;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_34 = ATgetFirst((ATermList) t);
                ATerm c_34 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_100;
          }
        ;
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        t = (ATerm) ATinsert(ATempty, i_100);
      }
    j_100 = t;
    t = term_q_30;
    k_100 = t;
    t = SSL_printnl(k_100, j_100);
    t = i_100;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_33;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm u_12 (ATerm c_60, ATerm d_60, ATerm t)
{
  t = SSL_strcat(c_60, d_60);
  return(t);
}
ATerm debug_1_0 (ATerm k_135 (ATerm), ATerm t)
{
  ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL,r_100 = NULL;
  o_100 = t;
  t = k_135(t);
  p_100 = t;
  t = term_t_31;
  q_100 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_100), p_100);
  r_100 = t;
  t = SSL_printnl(q_100, r_100);
  t = o_100;
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm d_34 = t;
  int e_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_34);
    }
  else
    {
      t = d_34;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_f_34;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_100 = NULL;
      y_100 = t;
      t = SSL_is_string(y_100);
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
            t = map_1_0(x_4, t);
            ;
            LocalPopChoice(j_34);
          }
        else
          {
            t = i_34;
            {
              ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL;
              e_101 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_101 = ATgetArgument(t, 0);
                  t = f_101;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_101 = ATgetArgument(t, 0);
                      t = f_101;
                      {
                        ATerm k_34 = t;
                        int l_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_34);
                          }
                        else
                          {
                            t = k_34;
                            t = debug_1_0(y_4, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_101 = NULL,m_101 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_101 = ATgetArgument(t, 0);
                          g_101 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_101;
                      t = eval_config_0_0(t);
                      l_101 = t;
                      t = g_101;
                      t = eval_config_0_0(t);
                      m_101 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_101, m_101);
                      t = u_12(l_101, m_101, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_12 (ATerm w_70, ATerm x_70, ATerm t)
{
  t = SSL_table_get(w_70, x_70);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm q_101 = NULL,r_101 = NULL;
  q_101 = t;
  t = term_p_32;
  r_101 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_32, q_101);
  t = v_12(r_101, q_101, t);
  {
    ATerm m_34 = t;
    int n_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_101 = NULL,t_101 = NULL;
        t = eval_config_0_0(t);
        s_101 = t;
        t = term_p_32;
        t_101 = t;
        t = SSL_table_put(t_101, q_101, s_101);
        t = s_101;
        ;
        LocalPopChoice(n_34);
      }
    else
      {
        t = m_34;
      }
  }
  return(t);
}
ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm w_101 = NULL,x_101 = NULL;
  t = term_o_34;
  w_101 = t;
  t = term_s_31;
  x_101 = t;
  t = term_p_34;
  t = y_12(w_101, x_101, t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL;
  t = term_o_34;
  a_102 = t;
  t = term_s_31;
  b_102 = t;
  t = term_p_34;
  t = y_12(a_102, b_102, t);
  t = term_r_34;
  y_101 = t;
  t = term_s_31;
  z_101 = t;
  t = term_s_34;
  t = y_12(y_101, z_101, t);
  t = term_t_34;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_u_34;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_4, b_5, e_5, t);
      ;
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      t = Option_3_0(f_5, g_5, j_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_141 (ATerm), ATerm t)
{
  ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,l_102 = NULL,m_102 = NULL,r_21 = NULL;
  if(((g_102 != NULL) && (g_102 != t)))
    _fail(t);
  else
    g_102 = t;
  {
    ATerm x_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_35;
        t = p_141(t);
        ;
        LocalPopChoice(z_34);
      }
    else
      {
        t = x_34;
      }
    t = not_null(g_102);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((i_102 != NULL) && (i_102 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          i_102 = ATgetFirst((ATermList) t);
        if(((j_102 != NULL) && (j_102 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          j_102 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(g_102));
    if(((h_102 != NULL) && (h_102 != t)))
      _fail(t);
    else
      h_102 = t;
    t = term_a_33;
    if(((m_102 != NULL) && (m_102 != t)))
      _fail(t);
    else
      m_102 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_33, not_null(i_102));
    t = y_12(not_null(m_102), not_null(i_102), t);
    t = not_null(j_102);
    {
      ATerm w_102 (ATerm t)
      {
        ATerm b_35 = t;
        int c_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_35 = t;
            int e_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_102 = NULL;
                p_102 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_102;
                ;
                LocalPopChoice(e_35);
              }
            else
              {
                t = d_35;
                t = p_141(t);
                t = Cons_2_0(_id, w_102, t);
              }
            ;
            LocalPopChoice(c_35);
          }
        else
          {
            t = b_35;
            {
              ATerm s_102 = NULL,t_102 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_102 = ATgetFirst((ATermList) t);
                  t_102 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(t_102), (ATerm) ATmakeAppl(sym_Undefined_1, s_102));
            }
          }
        return(t);
      }
      t = w_102(t);
      if(((l_102 != NULL) && (l_102 != t)))
        _fail(t);
      else
        l_102 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(l_102)), (ATerm) ATmakeAppl(sym_Program_1, not_null(i_102)));
      if(((r_21 != NULL) && (r_21 != t)))
        _fail(t);
      else
        r_21 = t;
      t = SSLsetAnnotations(not_null(r_21), not_null(h_102));
    }
  }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm i_103 = NULL;
  i_103 = t;
  if(match_string(t, "--help"))
    {
      t = i_103;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_103;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_103;
        }
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm j_103 = NULL,k_103 = NULL;
  t = term_p_33;
  j_103 = t;
  t = term_s_31;
  k_103 = t;
  t = term_f_35;
  t = y_12(j_103, k_103, t);
  t = term_g_35;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_i_35;
  return(t);
}
ATerm u_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_141 (ATerm), ATerm t)
{
  ATerm b_103 = NULL,c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL;
  if(((d_103 != NULL) && (d_103 != t)))
    _fail(t);
  else
    d_103 = t;
  t = term_q_32;
  if(((f_103 != NULL) && (f_103 != t)))
    _fail(t);
  else
    f_103 = t;
  t = term_r_32;
  if(((g_103 != NULL) && (g_103 != t)))
    _fail(t);
  else
    g_103 = t;
  t = (ATerm) ATempty;
  if(((h_103 != NULL) && (h_103 != t)))
    _fail(t);
  else
    h_103 = t;
  t = SSL_table_put(not_null(f_103), not_null(g_103), not_null(h_103));
  t = not_null(d_103);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm j_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_141(t);
          ;
          LocalPopChoice(k_35);
        }
      else
        {
          t = j_35;
          {
            ATerm l_35 = t;
            int m_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(o_5, p_5, q_5, t);
                ;
                LocalPopChoice(m_35);
              }
            else
              {
                t = l_35;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_5, t);
    {
      ATerm o_35 = t;
      int p_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_103 = NULL;
          r_103 = t;
          {
            ATerm q_35 = t;
            int r_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_18 = NULL;
                t = r_103;
                {
                  ATerm s_35 = t;
                  int t_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_33;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_35);
                    }
                  else
                    {
                      t = s_35;
                      t = fetch_1_0(u_5, t);
                    }
                  t = r_103;
                  t = default_system_usage_0_0(t);
                  t = term_b_32;
                  i_18 = t;
                  t = SSL_exit(i_18);
                }
                ;
                LocalPopChoice(r_35);
              }
            else
              {
                t = q_35;
                {
                  ATerm r_18 = NULL;
                  t = term_o_34;
                  t = get_config_0_0(t);
                  t = r_103;
                  t = default_system_about_0_0(t);
                  t = term_b_32;
                  r_18 = t;
                  t = SSL_exit(r_18);
                }
              }
          }
          ;
          LocalPopChoice(p_35);
        }
      else
        {
          t = o_35;
          {
            ATerm u_35 = t;
            int v_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_103 = NULL,t_103 = NULL,u_103 = NULL;
                ATerm v_5 (ATerm t)
                {
                  ATerm v_103 = NULL,w_103 = NULL,x_103 = NULL,x_21 = NULL;
                  x_103 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_103 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_103);
                  v_103 = t;
                  t = w_103;
                  if(((b_103 != NULL) && (b_103 != t)))
                    _fail(t);
                  else
                    b_103 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_103);
                  x_21 = t;
                  t = SSLsetAnnotations(x_21, v_103);
                  return(t);
                }
                t = fetch_1_0(v_5, t);
                t = term_t_31;
                if(((t_103 != NULL) && (t_103 != t)))
                  _fail(t);
                else
                  t_103 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_103)), term_w_35);
                if(((u_103 != NULL) && (u_103 != t)))
                  _fail(t);
                else
                  u_103 = t;
                t = SSL_printnl(not_null(t_103), not_null(u_103));
                t = (ATerm) ATmakeAppl(sym__2, term_t_31, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_103)), term_w_35));
                t = default_system_usage_0_0(t);
                t = term_x_31;
                if(((s_103 != NULL) && (s_103 != t)))
                  _fail(t);
                else
                  s_103 = t;
                t = SSL_exit(not_null(s_103));
                ;
                LocalPopChoice(v_35);
              }
            else
              {
                t = u_35;
              }
          }
        }
      if(((c_103 != NULL) && (c_103 != t)))
        _fail(t);
      else
        c_103 = t;
      t = term_q_32;
      if(((e_103 != NULL) && (e_103 != t)))
        _fail(t);
      else
        e_103 = t;
      t = SSL_table_destroy(not_null(e_103));
      t = not_null(c_103);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_139 (ATerm), ATerm p_139 (ATerm), ATerm q_139 (ATerm), ATerm r_139 (ATerm), ATerm t)
{
  ATerm c_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL;
  t = parse_options_1_0(o_139, t);
  c_104 = t;
  t = term_x_35;
  f_104 = t;
  t = SSL_table_create(f_104);
  t = term_x_35;
  d_104 = t;
  t = term_y_35;
  e_104 = t;
  t = SSL_table_put(d_104, e_104, c_104);
  t = c_104;
  t = q_139(t);
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_139, t);
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
              t = r_139(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_36);
            }
          else
            {
              t = b_36;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm d_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(f_36);
    }
  else
    {
      t = d_36;
      {
        ATerm g_36 = t;
        int h_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(h_36);
          }
        else
          {
            t = g_36;
            {
              ATerm i_36 = t;
              int j_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_5, a_6, b_6, t);
                  ;
                  LocalPopChoice(j_36);
                }
              else
                {
                  t = i_36;
                  {
                    ATerm l_36 = t;
                    int m_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(m_36);
                      }
                    else
                      {
                        t = l_36;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = input_1_0(c_6, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm h_104 = NULL,i_104 = NULL;
  t = term_t_30;
  h_104 = t;
  t = term_s_31;
  i_104 = t;
  t = term_n_36;
  t = y_12(h_104, i_104, t);
  t = term_o_36;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_p_36;
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = output_1_0(d_6, t);
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL,r_104 = NULL,k_22 = NULL,h_22 = NULL;
  r_104 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_104);
  k_104 = t;
  t = l_104;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_104 = ATgetFirst((ATermList) t);
      o_104 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_104);
  m_104 = t;
  t = o_104;
  t = Cons_2_0(e_6, g_6, t);
  p_104 = t;
  t = (ATerm) ATinsert(CheckATermList(p_104), n_104);
  h_22 = t;
  t = SSLsetAnnotations(h_22, m_104);
  q_104 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, q_104);
  k_22 = t;
  t = SSLsetAnnotations(k_22, k_104);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,e_22 = NULL;
  w_104 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_104);
  t_104 = t;
  t = u_104;
  t = map_1_0(h_6, t);
  v_104 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_104);
  e_22 = t;
  t = SSLsetAnnotations(e_22, t_104);
  return(t);
}
ATerm g_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm x_104 = NULL,y_104 = NULL,z_104 = NULL,a_105 = NULL,b_105 = NULL,c_105 = NULL,d_105 = NULL,a_22 = NULL;
  d_105 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      y_104 = ATgetArgument(t, 0);
      z_104 = ATgetArgument(t, 1);
      a_105 = ATgetArgument(t, 2);
      b_105 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_105);
  x_104 = t;
  t = b_105;
  t = define_congruences_0_0(t);
  c_105 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, y_104, z_104, a_105, c_105);
  a_22 = t;
  t = SSLsetAnnotations(a_22, x_104);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(w_5, default_usage_0_0, _id, y_5, t);
  return(t);
}
