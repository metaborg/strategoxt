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
Symbol sym_App_2;
Symbol sym_As_2;
Symbol sym_RDefT_4;
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
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
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
ATerm term_q_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_a_32;
ATerm term_v_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_o_31;
ATerm term_e_31;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_c_28;
ATerm term_z_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_w_26;
ATerm term_x_25;
ATerm term_c_25;
ATerm term_i_9;
ATerm term_c_9;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
void init_constant_terms (void)
{
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Sort_2, term_u_8, (ATerm) ATempty);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym__2, term_y_28, term_z_28);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_28);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym__2, term_e_29, term_i_28);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(sym__2, term_o_29, term_p_29);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(sym__2, term_o_31, term_i_28);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_i_28);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_i_28);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym__2, term_h_27, term_i_28);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm bottomup_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm k_93 (ATerm), ATerm);
ATerm t_0 (ATerm e_0, ATerm);
ATerm conc_0_0 (ATerm);
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm);
ATerm r_0 (ATerm);
ATerm s_0 (ATerm);
ATerm v_0 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm q_1 (ATerm);
ATerm r_1 (ATerm);
ATerm s_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm simplify_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm q_11 (ATerm j_25, ATerm k_25, ATerm l_25, ATerm);
ATerm genzip_4_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm r_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm m_58 (ATerm y_57, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm p_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm topdown_1_0 (ATerm g_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_107 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm);
ATerm t_11 (ATerm j_49, ATerm k_49, ATerm);
ATerm u_11 (ATerm x_52, ATerm y_52, ATerm);
ATerm x_11 (ATerm c_113 (ATerm), ATerm t_474, ATerm b_53, ATerm);
ATerm v_11 (ATerm t_52, ATerm u_52, ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm output_1_0 (ATerm l_117 (ATerm), ATerm);
ATerm n_63 (ATerm h_63, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm y_11 (ATerm z_52, ATerm);
ATerm z_11 (ATerm l_49, ATerm m_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm z_64 (ATerm y_63, ATerm);
ATerm a_65 (ATerm c_64, ATerm d_64, ATerm e_64, ATerm);
ATerm b_65 (ATerm m_64, ATerm n_64, ATerm o_64, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm k_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm m_117 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm h_12 (ATerm a_54, ATerm b_54, ATerm);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm f_12 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm a_12 (ATerm j_46, ATerm k_46, ATerm);
ATerm foldr_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm m_114 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm need_help_1_0 (ATerm c_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm d_12 (ATerm l_40, ATerm m_40, ATerm);
ATerm debug_1_0 (ATerm a_113 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm m_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm e_12 (ATerm p_60, ATerm q_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_119 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm parse_options_1_0 (ATerm e_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm c_7 (ATerm);
ATerm d_7 (ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(h_92, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = h_92(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm k_93 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_93(t);
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = l_7;
        t = SRTS_one(u_0, t);
      }
    return(t);
  }
  t = u_0(t);
  return(t);
}
ATerm t_0 (ATerm e_0, ATerm t)
{
  ATerm m_0 = NULL;
  t = SSL_explode_term(e_0);
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_0;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm o_0 = NULL,p_0 = NULL,q_0 = NULL;
  q_0 = t;
  if(match_cons(t, sym__2))
    {
      o_0 = ATgetArgument(t, 0);
      p_0 = ATgetArgument(t, 1);
      {
        ATerm o_7 = t;
        int p_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = p_0;
              return(t);
            }
            t = o_0;
            t = at_end_1_0(c_0, t);
            ;
            LocalPopChoice(p_7);
          }
        else
          {
            t = o_7;
            t = t_0(q_0, t);
          }
      }
    }
  else
    {
      t = t_0(q_0, t);
    }
  return(t);
}
ATerm map1_1_0 (ATerm l_0 (ATerm), ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL,o_2 = NULL;
  l_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_2 = ATgetFirst((ATermList) t);
      o_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm s_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL,g_1 = NULL,h_1 = NULL,m_1 = NULL,p_1 = NULL,a_1 = NULL,z_0 = NULL;
        t = SSLgetAnnotations(l_2);
        h_1 = t;
        t = m_2;
        t = l_0(t);
        m_1 = t;
        t = (ATerm) ATinsert(CheckATermList(o_2), m_1);
        z_0 = t;
        t = SSLsetAnnotations(z_0, h_1);
        p_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_0 = ATgetFirst((ATermList) t);
            y_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_1);
        w_0 = t;
        t = y_0;
        {
          ATerm x_7 = t;
          int y_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(l_0, t);
              ;
              LocalPopChoice(y_7);
            }
          else
            {
              t = x_7;
            }
          g_1 = t;
          t = (ATerm) ATinsert(CheckATermList(g_1), x_0);
          a_1 = t;
          t = SSLsetAnnotations(a_1, w_0);
        }
        ;
        LocalPopChoice(w_7);
      }
    else
      {
        t = s_7;
        {
          ATerm n_2 = NULL,t_2 = NULL,b_1 = NULL;
          t = SSLgetAnnotations(l_2);
          n_2 = t;
          t = o_2;
          t = map1_1_0(l_0, t);
          t_2 = t;
          t = (ATerm) ATinsert(CheckATermList(t_2), m_2);
          b_1 = t;
          t = SSLsetAnnotations(b_1, n_2);
        }
      }
  }
  return(t);
}
ATerm r_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_7 = ATgetArgument(t, 0);
      if(((ATgetType(z_7) != AT_LIST) || !(ATisEmpty(z_7))))
        _fail(t);
      {
        ATerm a_8 = ATgetArgument(t, 1);
        if(((ATgetType(a_8) != AT_LIST) || !(ATisEmpty(a_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm q_18 = NULL,t_18 = NULL,v_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if(((ATgetType(b_8) == AT_LIST) && !(ATisEmpty(b_8))))
        {
          q_18 = ATgetFirst((ATermList) b_8);
          t_18 = (ATerm) ATgetNext((ATermList) b_8);
        }
      else
        _fail(t);
      {
        ATerm c_8 = ATgetArgument(t, 1);
        if(((ATgetType(c_8) == AT_LIST) && !(ATisEmpty(c_8))))
          {
            v_18 = ATgetFirst((ATermList) c_8);
            a_19 = (ATerm) ATgetNext((ATermList) c_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_18, v_18), (ATerm) ATmakeAppl(sym__2, t_18, a_19));
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      e_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_19), d_19);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_19), (ATerm) ATmakeAppl(sym_Match_1, g_19));
  return(t);
}
ATerm d_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if(((ATgetType(d_8) != AT_LIST) || !(ATisEmpty(d_8))))
        _fail(t);
      {
        ATerm e_8 = ATgetArgument(t, 1);
        if(((ATgetType(e_8) != AT_LIST) || !(ATisEmpty(e_8))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if(((ATgetType(f_8) == AT_LIST) && !(ATisEmpty(f_8))))
        {
          p_28 = ATgetFirst((ATermList) f_8);
          q_28 = (ATerm) ATgetNext((ATermList) f_8);
        }
      else
        _fail(t);
      {
        ATerm g_8 = ATgetArgument(t, 1);
        if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
          {
            r_28 = ATgetFirst((ATermList) g_8);
            s_28 = (ATerm) ATgetNext((ATermList) g_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_28, r_28), (ATerm) ATmakeAppl(sym__2, q_28, s_28));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      u_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_28), t_28);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL;
  if(match_cons(t, sym__2))
    {
      v_28 = ATgetArgument(t, 0);
      w_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_28), (ATerm) ATmakeAppl(sym_Match_1, w_28));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm k_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(j_8);
      {
        ATerm b_39 = NULL,c_39 = NULL;
        b_39 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm l_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        c_39 = t;
        t = SSLgetAnnotations(b_39);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_8 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) m_8) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm n_8 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(n_8) != AT_LIST) || !(ATisEmpty(n_8))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_39;
      }
    }
  else
    {
      t = i_8;
      {
        ATerm o_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm r_8 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_8) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm t_8 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(q_8);
            _fail(t);
          }
        else
          {
            t = o_8;
          }
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm z_50 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_50, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_8), term_w_8));
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL;
  b_51 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_51 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, a_51, term_w_8);
    }
  else
    {
      t = b_51;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm m_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_51, term_w_8);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm n_51 = NULL,o_51 = NULL;
  o_51 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_51 = ATgetArgument(t, 0);
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, n_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_8), term_w_8));
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            t = o_51;
          }
      }
    }
  else
    {
      t = o_51;
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm y_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_8), term_w_8));
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL;
  a_52 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_51 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, z_51, term_w_8);
    }
  else
    {
      t = a_52;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm n_0 (ATerm t)
  {
    ATerm b_12 = NULL,c_12 = NULL,g_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
    a_13 = t;
    if(match_cons(t, sym_Test_1))
      {
        z_12 = ATgetArgument(t, 0);
        t = z_12;
        if(match_cons(t, sym_Id_0))
          {
            ATerm z_8 = t;
            int b_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_9;
                t = n_0(t);
                ;
                LocalPopChoice(b_9);
              }
            else
              {
                t = z_8;
                {
                  ATerm e_9 = t;
                  int f_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
                      t = a_13;
                      t = new_0_0(t);
                      c_13 = t;
                      t = bottomup_1_0(n_0, t);
                      n_13 = t;
                      t = (ATerm) ATempty;
                      t = n_0(t);
                      o_13 = t;
                      t = (ATerm) ATinsert(CheckATermList(o_13), n_13);
                      t = n_0(t);
                      d_13 = t;
                      t = c_13;
                      t = bottomup_1_0(n_0, t);
                      m_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, m_13);
                      t = n_0(t);
                      l_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, l_13);
                      t = n_0(t);
                      f_13 = t;
                      t = z_12;
                      t = bottomup_1_0(n_0, t);
                      h_13 = t;
                      t = c_13;
                      t = bottomup_1_0(n_0, t);
                      k_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, k_13);
                      t = n_0(t);
                      j_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, j_13);
                      t = n_0(t);
                      i_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_13, i_13);
                      t = n_0(t);
                      g_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_13, g_13);
                      t = n_0(t);
                      e_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, d_13, e_13);
                      t = n_0(t);
                      ;
                      LocalPopChoice(f_9);
                    }
                  else
                    {
                      t = e_9;
                      t = a_13;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm g_9 = t;
                int h_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_9;
                    t = n_0(t);
                    ;
                    LocalPopChoice(h_9);
                  }
                else
                  {
                    t = g_9;
                    {
                      ATerm j_9 = t;
                      int k_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
                          t = a_13;
                          t = new_0_0(t);
                          r_13 = t;
                          t = bottomup_1_0(n_0, t);
                          c_14 = t;
                          t = (ATerm) ATempty;
                          t = n_0(t);
                          d_14 = t;
                          t = (ATerm) ATinsert(CheckATermList(d_14), c_14);
                          t = n_0(t);
                          s_13 = t;
                          t = r_13;
                          t = bottomup_1_0(n_0, t);
                          b_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, b_14);
                          t = n_0(t);
                          a_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, a_14);
                          t = n_0(t);
                          u_13 = t;
                          t = z_12;
                          t = bottomup_1_0(n_0, t);
                          w_13 = t;
                          t = r_13;
                          t = bottomup_1_0(n_0, t);
                          z_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, z_13);
                          t = n_0(t);
                          y_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, y_13);
                          t = n_0(t);
                          x_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_13, x_13);
                          t = n_0(t);
                          v_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_13, v_13);
                          t = n_0(t);
                          t_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, s_13, t_13);
                          t = n_0(t);
                          ;
                          LocalPopChoice(k_9);
                        }
                      else
                        {
                          t = j_9;
                          t = a_13;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    w_12 = ATgetArgument(t, 0);
                    {
                      ATerm l_9 = t;
                      int m_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, w_12);
                          t = n_0(t);
                          ;
                          LocalPopChoice(m_9);
                        }
                      else
                        {
                          t = l_9;
                          {
                            ATerm n_9 = t;
                            int o_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
                                t = a_13;
                                t = new_0_0(t);
                                h_14 = t;
                                t = bottomup_1_0(n_0, t);
                                s_14 = t;
                                t = (ATerm) ATempty;
                                t = n_0(t);
                                t_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(t_14), s_14);
                                t = n_0(t);
                                i_14 = t;
                                t = h_14;
                                t = bottomup_1_0(n_0, t);
                                r_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, r_14);
                                t = n_0(t);
                                q_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, q_14);
                                t = n_0(t);
                                k_14 = t;
                                t = z_12;
                                t = bottomup_1_0(n_0, t);
                                m_14 = t;
                                t = h_14;
                                t = bottomup_1_0(n_0, t);
                                p_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, p_14);
                                t = n_0(t);
                                o_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, o_14);
                                t = n_0(t);
                                n_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, m_14, n_14);
                                t = n_0(t);
                                l_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, k_14, l_14);
                                t = n_0(t);
                                j_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, i_14, j_14);
                                t = n_0(t);
                                ;
                                LocalPopChoice(o_9);
                              }
                            else
                              {
                                t = n_9;
                                t = a_13;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm p_9 = t;
                    int q_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_14 = NULL,x_14 = NULL,z_14 = NULL,d_15 = NULL,j_15 = NULL,l_15 = NULL,m_15 = NULL,q_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
                        t = a_13;
                        t = new_0_0(t);
                        w_14 = t;
                        t = bottomup_1_0(n_0, t);
                        w_15 = t;
                        t = (ATerm) ATempty;
                        t = n_0(t);
                        x_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(x_15), w_15);
                        t = n_0(t);
                        x_14 = t;
                        t = w_14;
                        t = bottomup_1_0(n_0, t);
                        v_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, v_15);
                        t = n_0(t);
                        u_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, u_15);
                        t = n_0(t);
                        d_15 = t;
                        t = z_12;
                        t = bottomup_1_0(n_0, t);
                        l_15 = t;
                        t = w_14;
                        t = bottomup_1_0(n_0, t);
                        t_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, t_15);
                        t = n_0(t);
                        q_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, q_15);
                        t = n_0(t);
                        m_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_15, m_15);
                        t = n_0(t);
                        j_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_15, j_15);
                        t = n_0(t);
                        z_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_14, z_14);
                        t = n_0(t);
                        ;
                        LocalPopChoice(q_9);
                      }
                    else
                      {
                        t = p_9;
                        t = a_13;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            z_12 = ATgetArgument(t, 0);
            t = z_12;
            if(match_cons(t, sym_Id_0))
              {
                ATerm r_9 = t;
                int t_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_9;
                    t = n_0(t);
                    ;
                    LocalPopChoice(t_9);
                  }
                else
                  {
                    t = r_9;
                    t = a_13;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm u_9 = t;
                    int v_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_c_9;
                        t = n_0(t);
                        ;
                        LocalPopChoice(v_9);
                      }
                    else
                      {
                        t = u_9;
                        t = a_13;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        w_12 = ATgetArgument(t, 0);
                        {
                          ATerm x_9 = t;
                          int y_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, w_12);
                              t = n_0(t);
                              ;
                              LocalPopChoice(y_9);
                            }
                          else
                            {
                              t = x_9;
                              t = a_13;
                            }
                        }
                      }
                    else
                      {
                        t = a_13;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                z_12 = ATgetArgument(t, 0);
                y_12 = ATgetArgument(t, 1);
                t = y_12;
                if(match_cons(t, sym_Id_0))
                  {
                    t = z_12;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = y_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = z_12;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                w_12 = ATgetArgument(t, 0);
                                x_12 = ATgetArgument(t, 1);
                                t = z_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    w_12 = ATgetArgument(t, 0);
                                    x_12 = ATgetArgument(t, 1);
                                    t = z_12;
                                  }
                                else
                                  {
                                    t = z_12;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        u_12 = ATgetArgument(t, 0);
                        v_12 = ATgetArgument(t, 1);
                        t = u_12;
                        if(match_cons(t, sym_Match_1))
                          {
                            t_12 = ATgetArgument(t, 0);
                            t = t_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                r_12 = ATgetArgument(t, 0);
                                m_12 = ATgetArgument(t, 1);
                                t = z_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = y_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm b_10 = t;
                                        int c_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_i_9;
                                            t = n_0(t);
                                            ;
                                            LocalPopChoice(c_10);
                                          }
                                        else
                                          {
                                            t = b_10;
                                            t = a_13;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_12 = ATgetArgument(t, 0);
                                            x_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_10 = t;
                                              int g_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm a_18 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                  t = n_0(t);
                                                  a_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, a_18);
                                                  t = n_0(t);
                                                  ;
                                                  LocalPopChoice(g_10);
                                                }
                                              else
                                                {
                                                  t = e_10;
                                                  t = a_13;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                t = w_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    s_12 = ATgetArgument(t, 0);
                                                    n_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_10 = t;
                                                      int k_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, s_12, r_12);
                                                          {
                                                            ATerm m_10 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_3 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    c_3 = ATgetArgument(t, 0);
                                                                    if((c_3 != ATgetArgument(t, 1)))
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
                                                                t = m_10;
                                                              }
                                                            t = term_i_9;
                                                            t = bottomup_1_0(n_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(k_10);
                                                        }
                                                      else
                                                        {
                                                          t = j_10;
                                                          {
                                                            ATerm o_10 = t;
                                                            int t_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_18 = NULL;
                                                                t = r_12;
                                                                if((s_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, n_12, m_12);
                                                                t = genzip_4_0(r_0, s_0, v_0, c_1, t);
                                                                p_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_12, n_12)), v_12));
                                                                t = bottomup_1_0(n_0, t);
                                                                ;
                                                                LocalPopChoice(t_10);
                                                              }
                                                            else
                                                              {
                                                                t = o_10;
                                                                {
                                                                  ATerm u_10 = t;
                                                                  int v_10 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm j_19 = NULL;
                                                                      t = t_12;
                                                                      if((w_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_12);
                                                                      t = n_0(t);
                                                                      j_19 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_19, v_12);
                                                                      t = n_0(t);
                                                                      ;
                                                                      LocalPopChoice(v_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = u_10;
                                                                      t = a_13;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm w_10 = t;
                                                    int x_10 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm t_19 = NULL;
                                                        t = t_12;
                                                        if((w_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_12);
                                                        t = n_0(t);
                                                        t_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, t_19, v_12);
                                                        t = n_0(t);
                                                        ;
                                                        LocalPopChoice(x_10);
                                                      }
                                                    else
                                                      {
                                                        t = w_10;
                                                        t = a_13;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    w_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm y_10 = t;
                                                      int z_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm d_20 = NULL;
                                                          t = t_12;
                                                          if((w_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_12);
                                                          t = n_0(t);
                                                          d_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, d_20, v_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(z_10);
                                                        }
                                                      else
                                                        {
                                                          t = y_10;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_11 = t;
                                                          int b_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                              t = n_0(t);
                                                              q_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, q_20);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(b_11);
                                                            }
                                                          else
                                                            {
                                                              t = a_11;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_13;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = z_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = y_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm c_11 = t;
                                        int d_11 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_i_9;
                                            t = n_0(t);
                                            ;
                                            LocalPopChoice(d_11);
                                          }
                                        else
                                          {
                                            t = c_11;
                                            t = a_13;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_12 = ATgetArgument(t, 0);
                                            x_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_11 = t;
                                              int f_11 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_21 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                  t = n_0(t);
                                                  c_21 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, c_21);
                                                  t = n_0(t);
                                                  ;
                                                  LocalPopChoice(f_11);
                                                }
                                              else
                                                {
                                                  t = e_11;
                                                  t = a_13;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm g_11 = t;
                                                  int h_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_21 = NULL;
                                                      t = t_12;
                                                      if((w_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_12);
                                                      t = n_0(t);
                                                      h_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, h_21, v_12);
                                                      t = n_0(t);
                                                      ;
                                                      LocalPopChoice(h_11);
                                                    }
                                                  else
                                                    {
                                                      t = g_11;
                                                      t = a_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    w_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_11 = t;
                                                      int j_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_21 = NULL;
                                                          t = t_12;
                                                          if((w_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_12);
                                                          t = n_0(t);
                                                          n_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_21, v_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(j_11);
                                                        }
                                                      else
                                                        {
                                                          t = i_11;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_11 = t;
                                                          int l_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                              t = n_0(t);
                                                              y_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, y_21);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(l_11);
                                                            }
                                                          else
                                                            {
                                                              t = k_11;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_13;
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
                                t_12 = ATgetArgument(t, 0);
                                t = t_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    r_12 = ATgetArgument(t, 0);
                                    t = z_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm m_11 = t;
                                            int n_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = n_0(t);
                                                ;
                                                LocalPopChoice(n_11);
                                              }
                                            else
                                              {
                                                t = m_11;
                                                t = a_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                x_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_11 = t;
                                                  int p_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                      t = n_0(t);
                                                      r_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, r_22);
                                                      t = n_0(t);
                                                      ;
                                                      LocalPopChoice(p_11);
                                                    }
                                                  else
                                                    {
                                                      t = o_11;
                                                      t = a_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_11 = t;
                                                int s_11 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm w_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_11);
                                                    {
                                                      ATerm b_13 = t;
                                                      int p_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm v_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_12);
                                                          t = n_0(t);
                                                          v_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_22, v_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(p_13);
                                                        }
                                                      else
                                                        {
                                                          t = b_13;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_11;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        t = w_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            s_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm q_13 = t;
                                                              int e_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm c_23 = NULL,d_23 = NULL;
                                                                  t = r_12;
                                                                  if((s_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, s_12);
                                                                  t = n_0(t);
                                                                  d_23 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, d_23);
                                                                  t = n_0(t);
                                                                  c_23 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, c_23, v_12);
                                                                  t = n_0(t);
                                                                  ;
                                                                  LocalPopChoice(e_14);
                                                                }
                                                              else
                                                                {
                                                                  t = q_13;
                                                                  t = a_13;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_13;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_12 = ATgetArgument(t, 0);
                                                            x_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm f_14 = t;
                                                              int g_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm m_23 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                                  t = n_0(t);
                                                                  m_23 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, m_23);
                                                                  t = n_0(t);
                                                                  ;
                                                                  LocalPopChoice(g_14);
                                                                }
                                                              else
                                                                {
                                                                  t = f_14;
                                                                  t = a_13;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_13;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = z_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm u_14 = t;
                                            int v_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = n_0(t);
                                                ;
                                                LocalPopChoice(v_14);
                                              }
                                            else
                                              {
                                                t = u_14;
                                                t = a_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                x_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_14 = t;
                                                  int a_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                      t = n_0(t);
                                                      j_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, j_24);
                                                      t = n_0(t);
                                                      ;
                                                      LocalPopChoice(a_15);
                                                    }
                                                  else
                                                    {
                                                      t = y_14;
                                                      t = a_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm b_15 = t;
                                                int c_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(c_15);
                                                    {
                                                      ATerm f_15 = t;
                                                      int g_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_12);
                                                          t = n_0(t);
                                                          n_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_24, v_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(g_15);
                                                        }
                                                      else
                                                        {
                                                          t = f_15;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_15 = t;
                                                          int i_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_24 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                              t = n_0(t);
                                                              u_24 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, u_24);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(i_15);
                                                            }
                                                          else
                                                            {
                                                              t = h_15;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_13;
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
                                    t_12 = ATgetArgument(t, 0);
                                    o_12 = ATgetArgument(t, 1);
                                    p_12 = ATgetArgument(t, 2);
                                    t = z_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_15 = t;
                                            int n_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = n_0(t);
                                                ;
                                                LocalPopChoice(n_15);
                                              }
                                            else
                                              {
                                                t = k_15;
                                                t = a_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                x_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_15 = t;
                                                  int p_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_26 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                      t = n_0(t);
                                                      i_26 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, i_26);
                                                      t = n_0(t);
                                                      ;
                                                      LocalPopChoice(p_15);
                                                    }
                                                  else
                                                    {
                                                      t = o_15;
                                                      t = a_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_15 = t;
                                                int s_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm y_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(s_15);
                                                    {
                                                      ATerm z_15 = t;
                                                      int a_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, t_12, o_12, p_12);
                                                          t = n_0(t);
                                                          t_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_26, v_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(a_16);
                                                        }
                                                      else
                                                        {
                                                          t = z_15;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm b_16 = t;
                                                          int c_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm y_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                              t = n_0(t);
                                                              y_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, y_26);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(c_16);
                                                            }
                                                          else
                                                            {
                                                              t = b_16;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_13;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = z_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm d_16 = t;
                                            int e_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = n_0(t);
                                                ;
                                                LocalPopChoice(e_16);
                                              }
                                            else
                                              {
                                                t = d_16;
                                                t = a_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                x_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm f_16 = t;
                                                  int g_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                      t = n_0(t);
                                                      n_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, n_27);
                                                      t = n_0(t);
                                                      ;
                                                      LocalPopChoice(g_16);
                                                    }
                                                  else
                                                    {
                                                      t = f_16;
                                                      t = a_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    w_12 = ATgetArgument(t, 0);
                                                    x_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm h_16 = t;
                                                      int i_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm s_27 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                          t = n_0(t);
                                                          s_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, s_27);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(i_16);
                                                        }
                                                      else
                                                        {
                                                          t = h_16;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_13;
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
                            u_12 = ATgetArgument(t, 0);
                            t = u_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                t_12 = ATgetArgument(t, 0);
                                o_12 = ATgetArgument(t, 1);
                                t = z_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = y_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm j_16 = t;
                                        int k_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_i_9;
                                            t = n_0(t);
                                            ;
                                            LocalPopChoice(k_16);
                                          }
                                        else
                                          {
                                            t = j_16;
                                            t = a_13;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_12 = ATgetArgument(t, 0);
                                            x_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm l_16 = t;
                                              int m_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm d_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                  t = n_0(t);
                                                  d_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, d_28);
                                                  t = n_0(t);
                                                  ;
                                                  LocalPopChoice(m_16);
                                                }
                                              else
                                                {
                                                  t = l_16;
                                                  t = a_13;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                t = w_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    s_12 = ATgetArgument(t, 0);
                                                    n_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm n_16 = t;
                                                      int o_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, s_12, t_12);
                                                          {
                                                            ATerm p_16 = t;
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
                                                                t = p_16;
                                                              }
                                                            t = term_i_9;
                                                            t = bottomup_1_0(n_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(o_16);
                                                        }
                                                      else
                                                        {
                                                          t = n_16;
                                                          {
                                                            ATerm q_16 = t;
                                                            int r_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm k_28 = NULL;
                                                                t = t_12;
                                                                if((s_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, n_12, o_12);
                                                                t = genzip_4_0(d_1, e_1, j_1, k_1, t);
                                                                k_28 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_28), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_12, n_12)));
                                                                t = bottomup_1_0(n_0, t);
                                                                ;
                                                                LocalPopChoice(r_16);
                                                              }
                                                            else
                                                              {
                                                                t = q_16;
                                                                {
                                                                  ATerm s_16 = t;
                                                                  int t_16 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = u_12;
                                                                      if((w_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_12);
                                                                      t = n_0(t);
                                                                      ;
                                                                      LocalPopChoice(t_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = s_16;
                                                                      t = a_13;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm u_16 = t;
                                                    int v_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = u_12;
                                                        if((w_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_12);
                                                        t = n_0(t);
                                                        ;
                                                        LocalPopChoice(v_16);
                                                      }
                                                    else
                                                      {
                                                        t = u_16;
                                                        t = a_13;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    w_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm w_16 = t;
                                                      int x_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = u_12;
                                                          if((w_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(x_16);
                                                        }
                                                      else
                                                        {
                                                          t = w_16;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_16 = t;
                                                          int z_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm m_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                              t = n_0(t);
                                                              m_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, m_29);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(z_16);
                                                            }
                                                          else
                                                            {
                                                              t = y_16;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_13;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = z_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = y_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm a_17 = t;
                                        int b_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_i_9;
                                            t = n_0(t);
                                            ;
                                            LocalPopChoice(b_17);
                                          }
                                        else
                                          {
                                            t = a_17;
                                            t = a_13;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_12 = ATgetArgument(t, 0);
                                            x_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm c_17 = t;
                                              int d_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm v_29 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                  t = n_0(t);
                                                  v_29 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, v_29);
                                                  t = n_0(t);
                                                  ;
                                                  LocalPopChoice(d_17);
                                                }
                                              else
                                                {
                                                  t = c_17;
                                                  t = a_13;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm e_17 = t;
                                                  int f_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = u_12;
                                                      if((w_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_12);
                                                      t = n_0(t);
                                                      ;
                                                      LocalPopChoice(f_17);
                                                    }
                                                  else
                                                    {
                                                      t = e_17;
                                                      t = a_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    w_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm g_17 = t;
                                                      int h_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = u_12;
                                                          if((w_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(h_17);
                                                        }
                                                      else
                                                        {
                                                          t = g_17;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_17 = t;
                                                          int j_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                              t = n_0(t);
                                                              e_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, e_30);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(j_17);
                                                            }
                                                          else
                                                            {
                                                              t = i_17;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_13;
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
                                u_12 = ATgetArgument(t, 0);
                                t = u_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    t_12 = ATgetArgument(t, 0);
                                    t = z_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_17 = t;
                                            int l_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = n_0(t);
                                                ;
                                                LocalPopChoice(l_17);
                                              }
                                            else
                                              {
                                                t = k_17;
                                                t = a_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                x_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_17 = t;
                                                  int n_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                      t = n_0(t);
                                                      n_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, n_30);
                                                      t = n_0(t);
                                                      ;
                                                      LocalPopChoice(n_17);
                                                    }
                                                  else
                                                    {
                                                      t = m_17;
                                                      t = a_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_17 = t;
                                                int p_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm q_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_17);
                                                    {
                                                      ATerm r_17 = t;
                                                      int s_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(s_17);
                                                        }
                                                      else
                                                        {
                                                          t = r_17;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_17;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        t = w_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            s_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm t_17 = t;
                                                              int u_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_30 = NULL;
                                                                  t = t_12;
                                                                  if((s_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, s_12);
                                                                  t = n_0(t);
                                                                  s_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, s_30);
                                                                  t = n_0(t);
                                                                  ;
                                                                  LocalPopChoice(u_17);
                                                                }
                                                              else
                                                                {
                                                                  t = t_17;
                                                                  t = a_13;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_13;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_12 = ATgetArgument(t, 0);
                                                            x_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm v_17 = t;
                                                              int w_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm y_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                                  t = n_0(t);
                                                                  y_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, y_30);
                                                                  t = n_0(t);
                                                                  ;
                                                                  LocalPopChoice(w_17);
                                                                }
                                                              else
                                                                {
                                                                  t = v_17;
                                                                  t = a_13;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_13;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = z_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_17 = t;
                                            int y_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = n_0(t);
                                                ;
                                                LocalPopChoice(y_17);
                                              }
                                            else
                                              {
                                                t = x_17;
                                                t = a_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                x_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm z_17 = t;
                                                  int b_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm j_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                      t = n_0(t);
                                                      j_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, j_31);
                                                      t = n_0(t);
                                                      ;
                                                      LocalPopChoice(b_18);
                                                    }
                                                  else
                                                    {
                                                      t = z_17;
                                                      t = a_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_18 = t;
                                                int d_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm e_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_18);
                                                    {
                                                      ATerm f_18 = t;
                                                      int g_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, u_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(g_18);
                                                        }
                                                      else
                                                        {
                                                          t = f_18;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_18 = t;
                                                          int i_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                              t = n_0(t);
                                                              u_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, u_31);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(i_18);
                                                            }
                                                          else
                                                            {
                                                              t = h_18;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_13;
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
                                    u_12 = ATgetArgument(t, 0);
                                    v_12 = ATgetArgument(t, 1);
                                    q_12 = ATgetArgument(t, 2);
                                    t = z_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = y_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_18 = t;
                                            int k_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = n_0(t);
                                                ;
                                                LocalPopChoice(k_18);
                                              }
                                            else
                                              {
                                                t = j_18;
                                                t = a_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                x_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_18 = t;
                                                  int m_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                      t = n_0(t);
                                                      f_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, f_32);
                                                      t = n_0(t);
                                                      ;
                                                      LocalPopChoice(m_18);
                                                    }
                                                  else
                                                    {
                                                      t = l_18;
                                                      t = a_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_18 = t;
                                                int o_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_18);
                                                    {
                                                      ATerm s_18 = t;
                                                      int u_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, u_12, v_12, q_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(u_18);
                                                        }
                                                      else
                                                        {
                                                          t = s_18;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm w_18 = t;
                                                          int x_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm s_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                              t = n_0(t);
                                                              s_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, s_32);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(x_18);
                                                            }
                                                          else
                                                            {
                                                              t = w_18;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = a_13;
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
                                        u_12 = ATgetArgument(t, 0);
                                        v_12 = ATgetArgument(t, 1);
                                        t = z_12;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = y_12;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm y_18 = t;
                                                int z_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_i_9;
                                                    t = n_0(t);
                                                    ;
                                                    LocalPopChoice(z_18);
                                                  }
                                                else
                                                  {
                                                    t = y_18;
                                                    {
                                                      ATerm b_19 = t;
                                                      int c_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_12, v_12);
                                                          t = n_0(t);
                                                          e_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, u_12, e_33);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(c_19);
                                                        }
                                                      else
                                                        {
                                                          t = b_19;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    w_12 = ATgetArgument(t, 0);
                                                    x_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm h_19 = t;
                                                      int i_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm j_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                          t = n_0(t);
                                                          j_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, j_33);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(i_19);
                                                        }
                                                      else
                                                        {
                                                          t = h_19;
                                                          {
                                                            ATerm k_19 = t;
                                                            int l_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm p_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_12, v_12);
                                                                t = n_0(t);
                                                                p_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, u_12, p_33);
                                                                t = n_0(t);
                                                                ;
                                                                LocalPopChoice(l_19);
                                                              }
                                                            else
                                                              {
                                                                t = k_19;
                                                                t = a_13;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm m_19 = t;
                                                          int n_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_12, v_12);
                                                              t = n_0(t);
                                                              z_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, u_12, z_33);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(n_19);
                                                            }
                                                          else
                                                            {
                                                              t = m_19;
                                                              {
                                                                ATerm o_19 = t;
                                                                int p_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm d_34 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                                    t = n_0(t);
                                                                    d_34 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, d_34);
                                                                    t = n_0(t);
                                                                    ;
                                                                    LocalPopChoice(p_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = o_19;
                                                                    t = a_13;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm q_19 = t;
                                                        int r_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm k_34 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, z_12, v_12);
                                                            t = n_0(t);
                                                            k_34 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, u_12, k_34);
                                                            t = n_0(t);
                                                            ;
                                                            LocalPopChoice(r_19);
                                                          }
                                                        else
                                                          {
                                                            t = q_19;
                                                            t = a_13;
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
                                            u_12 = ATgetArgument(t, 0);
                                            v_12 = ATgetArgument(t, 1);
                                            t = z_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = y_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm s_19 = t;
                                                    int u_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_i_9;
                                                        t = n_0(t);
                                                        ;
                                                        LocalPopChoice(u_19);
                                                      }
                                                    else
                                                      {
                                                        t = s_19;
                                                        {
                                                          ATerm v_19 = t;
                                                          int w_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_12, v_12);
                                                              t = n_0(t);
                                                              z_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_12, z_34);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(w_19);
                                                            }
                                                          else
                                                            {
                                                              t = v_19;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_19 = t;
                                                          int y_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm e_35 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                              t = n_0(t);
                                                              e_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, e_35);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(y_19);
                                                            }
                                                          else
                                                            {
                                                              t = x_19;
                                                              {
                                                                ATerm z_19 = t;
                                                                int a_20 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm i_35 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, z_12, v_12);
                                                                    t = n_0(t);
                                                                    i_35 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, u_12, i_35);
                                                                    t = n_0(t);
                                                                    ;
                                                                    LocalPopChoice(a_20);
                                                                  }
                                                                else
                                                                  {
                                                                    t = z_19;
                                                                    t = a_13;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_12 = ATgetArgument(t, 0);
                                                            x_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm b_20 = t;
                                                              int c_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm n_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_12, v_12);
                                                                  t = n_0(t);
                                                                  n_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, u_12, n_35);
                                                                  t = n_0(t);
                                                                  ;
                                                                  LocalPopChoice(c_20);
                                                                }
                                                              else
                                                                {
                                                                  t = b_20;
                                                                  {
                                                                    ATerm e_20 = t;
                                                                    int f_20 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm r_35 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                                        t = n_0(t);
                                                                        r_35 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, r_35);
                                                                        t = n_0(t);
                                                                        ;
                                                                        LocalPopChoice(f_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_20;
                                                                        t = a_13;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm g_20 = t;
                                                            int h_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm w_35 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_12, v_12);
                                                                t = n_0(t);
                                                                w_35 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, u_12, w_35);
                                                                t = n_0(t);
                                                                ;
                                                                LocalPopChoice(h_20);
                                                              }
                                                            else
                                                              {
                                                                t = g_20;
                                                                t = a_13;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = z_12;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = y_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm i_20 = t;
                                                    int j_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_i_9;
                                                        t = n_0(t);
                                                        ;
                                                        LocalPopChoice(j_20);
                                                      }
                                                    else
                                                      {
                                                        t = i_20;
                                                        t = a_13;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        w_12 = ATgetArgument(t, 0);
                                                        x_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_20 = t;
                                                          int l_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                              t = n_0(t);
                                                              f_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, f_36);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(l_20);
                                                            }
                                                          else
                                                            {
                                                              t = k_20;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_12 = ATgetArgument(t, 0);
                                                            x_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm m_20 = t;
                                                              int n_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm k_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, y_12);
                                                                  t = n_0(t);
                                                                  k_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_12, k_36);
                                                                  t = n_0(t);
                                                                  ;
                                                                  LocalPopChoice(n_20);
                                                                }
                                                              else
                                                                {
                                                                  t = m_20;
                                                                  t = a_13;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = a_13;
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
                    z_12 = ATgetArgument(t, 0);
                    y_12 = ATgetArgument(t, 1);
                    t = y_12;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = z_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm o_20 = t;
                            int p_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_c_9;
                                t = n_0(t);
                                ;
                                LocalPopChoice(p_20);
                              }
                            else
                              {
                                t = o_20;
                                t = z_12;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = y_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    w_12 = ATgetArgument(t, 0);
                                    x_12 = ATgetArgument(t, 1);
                                    t = z_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_12 = ATgetArgument(t, 0);
                                        t = z_12;
                                      }
                                    else
                                      {
                                        t = z_12;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = z_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm r_20 = t;
                            int s_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_c_9;
                                t = n_0(t);
                                ;
                                LocalPopChoice(s_20);
                              }
                            else
                              {
                                t = r_20;
                                {
                                  ATerm t_20 = t;
                                  int u_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = y_12;
                                      if((z_12 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(u_20);
                                    }
                                  else
                                    {
                                      t = t_20;
                                      t = a_13;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = y_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    w_12 = ATgetArgument(t, 0);
                                    x_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm v_20 = t;
                                      int w_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm u_38 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, x_12, y_12);
                                          t = n_0(t);
                                          u_38 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, w_12, u_38);
                                          t = n_0(t);
                                          ;
                                          LocalPopChoice(w_20);
                                        }
                                      else
                                        {
                                          t = v_20;
                                          {
                                            ATerm x_20 = t;
                                            int y_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = y_12;
                                                if((z_12 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(y_20);
                                              }
                                            else
                                              {
                                                t = x_20;
                                                t = a_13;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_12 = ATgetArgument(t, 0);
                                        {
                                          ATerm z_20 = t;
                                          int a_21 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = y_12;
                                              if((z_12 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(a_21);
                                            }
                                          else
                                            {
                                              t = z_20;
                                              {
                                                ATerm b_21 = t;
                                                int d_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = w_12;
                                                    t = topdown_1_0(l_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, w_12);
                                                    t = bottomup_1_0(n_0, t);
                                                    ;
                                                    LocalPopChoice(d_21);
                                                  }
                                                else
                                                  {
                                                    t = b_21;
                                                    t = a_13;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm e_21 = t;
                                        int f_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = y_12;
                                            if((z_12 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(f_21);
                                          }
                                        else
                                          {
                                            t = e_21;
                                            t = a_13;
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
                        z_12 = ATgetArgument(t, 0);
                        y_12 = ATgetArgument(t, 1);
                        t = y_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = z_12;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm g_21 = t;
                                int i_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_c_9;
                                    t = n_0(t);
                                    ;
                                    LocalPopChoice(i_21);
                                  }
                                else
                                  {
                                    t = g_21;
                                    t = y_12;
                                  }
                              }
                            else
                              {
                                ATerm j_21 = t;
                                int k_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_c_9;
                                    t = n_0(t);
                                    ;
                                    LocalPopChoice(k_21);
                                  }
                                else
                                  {
                                    t = j_21;
                                    t = a_13;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_12;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm l_21 = t;
                                    int m_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_i_9;
                                        t = n_0(t);
                                        ;
                                        LocalPopChoice(m_21);
                                      }
                                    else
                                      {
                                        t = l_21;
                                        t = y_12;
                                      }
                                  }
                                else
                                  {
                                    ATerm o_21 = t;
                                    int p_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_i_9;
                                        t = n_0(t);
                                        ;
                                        LocalPopChoice(p_21);
                                      }
                                    else
                                      {
                                        t = o_21;
                                        t = a_13;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    u_12 = ATgetArgument(t, 0);
                                    v_12 = ATgetArgument(t, 1);
                                    t = z_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = y_12;
                                      }
                                    else
                                      {
                                        ATerm q_21 = t;
                                        int r_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm h_40 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, z_12, u_12);
                                            t = conc_0_0(t);
                                            h_40 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, h_40, v_12);
                                            t = bottomup_1_0(n_0, t);
                                            ;
                                            LocalPopChoice(r_21);
                                          }
                                        else
                                          {
                                            t = q_21;
                                            t = a_13;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = z_12;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = y_12;
                                      }
                                    else
                                      {
                                        t = a_13;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm s_21 = t;
                        int t_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm u_21 = ATgetArgument(t, 0);
                                y_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(t_21);
                            t = y_12;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm v_21 = t;
                                int w_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_c_9;
                                    t = n_0(t);
                                    ;
                                    LocalPopChoice(w_21);
                                  }
                                else
                                  {
                                    t = v_21;
                                    t = a_13;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm x_21 = t;
                                    int z_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_i_9;
                                        t = n_0(t);
                                        ;
                                        LocalPopChoice(z_21);
                                      }
                                    else
                                      {
                                        t = x_21;
                                        t = a_13;
                                      }
                                  }
                                else
                                  {
                                    t = a_13;
                                  }
                              }
                          }
                        else
                          {
                            t = s_21;
                            if(match_cons(t, sym_All_1))
                              {
                                z_12 = ATgetArgument(t, 0);
                                t = z_12;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm a_22 = t;
                                    int b_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_c_9;
                                        t = n_0(t);
                                        ;
                                        LocalPopChoice(b_22);
                                      }
                                    else
                                      {
                                        t = a_22;
                                        t = a_13;
                                      }
                                  }
                                else
                                  {
                                    t = a_13;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    z_12 = ATgetArgument(t, 0);
                                    t = z_12;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm c_22 = t;
                                        int d_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_c_9;
                                            t = n_0(t);
                                            ;
                                            LocalPopChoice(d_22);
                                          }
                                        else
                                          {
                                            t = c_22;
                                            {
                                              ATerm e_22 = t;
                                              int f_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL;
                                                  t = a_13;
                                                  t = new_0_0(t);
                                                  y_40 = t;
                                                  t = bottomup_1_0(n_0, t);
                                                  n_41 = t;
                                                  t = (ATerm) ATempty;
                                                  t = n_0(t);
                                                  o_41 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(o_41), n_41);
                                                  t = n_0(t);
                                                  z_40 = t;
                                                  t = y_40;
                                                  t = bottomup_1_0(n_0, t);
                                                  m_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, m_41);
                                                  t = n_0(t);
                                                  l_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, l_41);
                                                  t = n_0(t);
                                                  b_41 = t;
                                                  t = z_12;
                                                  t = bottomup_1_0(n_0, t);
                                                  f_41 = t;
                                                  t = y_40;
                                                  t = bottomup_1_0(n_0, t);
                                                  i_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_41);
                                                  t = n_0(t);
                                                  h_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, h_41);
                                                  t = n_0(t);
                                                  g_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_41, g_41);
                                                  t = n_0(t);
                                                  e_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_41, e_41);
                                                  t = n_0(t);
                                                  a_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, z_40, a_41);
                                                  t = n_0(t);
                                                  ;
                                                  LocalPopChoice(f_22);
                                                }
                                              else
                                                {
                                                  t = e_22;
                                                  t = a_13;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm g_22 = t;
                                            int h_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = n_0(t);
                                                ;
                                                LocalPopChoice(h_22);
                                              }
                                            else
                                              {
                                                t = g_22;
                                                {
                                                  ATerm i_22 = t;
                                                  int j_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
                                                      t = a_13;
                                                      t = new_0_0(t);
                                                      r_41 = t;
                                                      t = bottomup_1_0(n_0, t);
                                                      d_42 = t;
                                                      t = (ATerm) ATempty;
                                                      t = n_0(t);
                                                      e_42 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(e_42), d_42);
                                                      t = n_0(t);
                                                      s_41 = t;
                                                      t = r_41;
                                                      t = bottomup_1_0(n_0, t);
                                                      c_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, c_42);
                                                      t = n_0(t);
                                                      b_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, b_42);
                                                      t = n_0(t);
                                                      u_41 = t;
                                                      t = z_12;
                                                      t = bottomup_1_0(n_0, t);
                                                      w_41 = t;
                                                      t = r_41;
                                                      t = bottomup_1_0(n_0, t);
                                                      z_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, z_41);
                                                      t = n_0(t);
                                                      y_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, y_41);
                                                      t = n_0(t);
                                                      x_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_41, x_41);
                                                      t = n_0(t);
                                                      v_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_41, v_41);
                                                      t = n_0(t);
                                                      t_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, s_41, t_41);
                                                      t = n_0(t);
                                                      ;
                                                      LocalPopChoice(j_22);
                                                    }
                                                  else
                                                    {
                                                      t = i_22;
                                                      t = a_13;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_12 = ATgetArgument(t, 0);
                                                x_12 = ATgetArgument(t, 1);
                                                t = x_12;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    g_12 = ATgetArgument(t, 0);
                                                    j_12 = ATgetArgument(t, 1);
                                                    t = g_12;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        i_12 = ATgetArgument(t, 0);
                                                        t = w_12;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            s_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm k_22 = t;
                                                              int l_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, i_12);
                                                                  t = n_0(t);
                                                                  n_42 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_42, j_12);
                                                                  t = n_0(t);
                                                                  m_42 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, s_12, m_42);
                                                                  t = n_0(t);
                                                                  l_42 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, l_42);
                                                                  t = n_0(t);
                                                                  ;
                                                                  LocalPopChoice(l_22);
                                                                }
                                                              else
                                                                {
                                                                  t = k_22;
                                                                  {
                                                                    ATerm m_22 = t;
                                                                    int n_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm u_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,a_43 = NULL,b_43 = NULL,d_43 = NULL,e_43 = NULL,g_43 = NULL,h_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL;
                                                                        t = a_13;
                                                                        t = new_0_0(t);
                                                                        u_42 = t;
                                                                        t = bottomup_1_0(n_0, t);
                                                                        l_43 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = n_0(t);
                                                                        m_43 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(m_43), l_43);
                                                                        t = n_0(t);
                                                                        w_42 = t;
                                                                        t = u_42;
                                                                        t = bottomup_1_0(n_0, t);
                                                                        k_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, k_43);
                                                                        t = n_0(t);
                                                                        h_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, h_43);
                                                                        t = n_0(t);
                                                                        y_42 = t;
                                                                        t = z_12;
                                                                        t = bottomup_1_0(n_0, t);
                                                                        b_43 = t;
                                                                        t = u_42;
                                                                        t = bottomup_1_0(n_0, t);
                                                                        g_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_43);
                                                                        t = n_0(t);
                                                                        e_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, e_43);
                                                                        t = n_0(t);
                                                                        d_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_43, d_43);
                                                                        t = n_0(t);
                                                                        a_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_42, a_43);
                                                                        t = n_0(t);
                                                                        x_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_42, x_42);
                                                                        t = n_0(t);
                                                                        ;
                                                                        LocalPopChoice(n_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = m_22;
                                                                        t = a_13;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm o_22 = t;
                                                            int p_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,f_44 = NULL,g_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
                                                                t = a_13;
                                                                t = new_0_0(t);
                                                                v_43 = t;
                                                                t = bottomup_1_0(n_0, t);
                                                                k_44 = t;
                                                                t = (ATerm) ATempty;
                                                                t = n_0(t);
                                                                l_44 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(l_44), k_44);
                                                                t = n_0(t);
                                                                w_43 = t;
                                                                t = v_43;
                                                                t = bottomup_1_0(n_0, t);
                                                                j_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, j_44);
                                                                t = n_0(t);
                                                                g_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, g_44);
                                                                t = n_0(t);
                                                                z_43 = t;
                                                                t = z_12;
                                                                t = bottomup_1_0(n_0, t);
                                                                b_44 = t;
                                                                t = v_43;
                                                                t = bottomup_1_0(n_0, t);
                                                                f_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, f_44);
                                                                t = n_0(t);
                                                                d_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, d_44);
                                                                t = n_0(t);
                                                                c_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_44, c_44);
                                                                t = n_0(t);
                                                                a_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_43, a_44);
                                                                t = n_0(t);
                                                                x_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, w_43, x_43);
                                                                t = n_0(t);
                                                                ;
                                                                LocalPopChoice(p_22);
                                                              }
                                                            else
                                                              {
                                                                t = o_22;
                                                                t = a_13;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = w_12;
                                                        {
                                                          ATerm q_22 = t;
                                                          int s_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_44 = NULL,p_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
                                                              t = a_13;
                                                              t = new_0_0(t);
                                                              o_44 = t;
                                                              t = bottomup_1_0(n_0, t);
                                                              a_45 = t;
                                                              t = (ATerm) ATempty;
                                                              t = n_0(t);
                                                              b_45 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(b_45), a_45);
                                                              t = n_0(t);
                                                              p_44 = t;
                                                              t = o_44;
                                                              t = bottomup_1_0(n_0, t);
                                                              z_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, z_44);
                                                              t = n_0(t);
                                                              y_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, y_44);
                                                              t = n_0(t);
                                                              s_44 = t;
                                                              t = z_12;
                                                              t = bottomup_1_0(n_0, t);
                                                              u_44 = t;
                                                              t = o_44;
                                                              t = bottomup_1_0(n_0, t);
                                                              x_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, x_44);
                                                              t = n_0(t);
                                                              w_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, w_44);
                                                              t = n_0(t);
                                                              v_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_44, v_44);
                                                              t = n_0(t);
                                                              t_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_44, t_44);
                                                              t = n_0(t);
                                                              r_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, p_44, r_44);
                                                              t = n_0(t);
                                                              ;
                                                              LocalPopChoice(s_22);
                                                            }
                                                          else
                                                            {
                                                              t = q_22;
                                                              t = a_13;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_12;
                                                    {
                                                      ATerm t_22 = t;
                                                      int u_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,o_45 = NULL,r_45 = NULL,u_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,d_46 = NULL,e_46 = NULL;
                                                          t = a_13;
                                                          t = new_0_0(t);
                                                          i_45 = t;
                                                          t = bottomup_1_0(n_0, t);
                                                          d_46 = t;
                                                          t = (ATerm) ATempty;
                                                          t = n_0(t);
                                                          e_46 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(e_46), d_46);
                                                          t = n_0(t);
                                                          j_45 = t;
                                                          t = i_45;
                                                          t = bottomup_1_0(n_0, t);
                                                          b_46 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, b_46);
                                                          t = n_0(t);
                                                          a_46 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_46);
                                                          t = n_0(t);
                                                          o_45 = t;
                                                          t = z_12;
                                                          t = bottomup_1_0(n_0, t);
                                                          u_45 = t;
                                                          t = i_45;
                                                          t = bottomup_1_0(n_0, t);
                                                          z_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, z_45);
                                                          t = n_0(t);
                                                          y_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, y_45);
                                                          t = n_0(t);
                                                          x_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_45, x_45);
                                                          t = n_0(t);
                                                          r_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_45, r_45);
                                                          t = n_0(t);
                                                          k_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, j_45, k_45);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(u_22);
                                                        }
                                                      else
                                                        {
                                                          t = t_22;
                                                          t = a_13;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    w_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm w_22 = t;
                                                      int x_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, w_12);
                                                          t = n_0(t);
                                                          ;
                                                          LocalPopChoice(x_22);
                                                        }
                                                      else
                                                        {
                                                          t = w_22;
                                                          {
                                                            ATerm y_22 = t;
                                                            int z_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
                                                                t = a_13;
                                                                t = new_0_0(t);
                                                                o_46 = t;
                                                                t = bottomup_1_0(n_0, t);
                                                                c_47 = t;
                                                                t = (ATerm) ATempty;
                                                                t = n_0(t);
                                                                d_47 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(d_47), c_47);
                                                                t = n_0(t);
                                                                s_46 = t;
                                                                t = o_46;
                                                                t = bottomup_1_0(n_0, t);
                                                                b_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, b_47);
                                                                t = n_0(t);
                                                                a_47 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, a_47);
                                                                t = n_0(t);
                                                                u_46 = t;
                                                                t = z_12;
                                                                t = bottomup_1_0(n_0, t);
                                                                w_46 = t;
                                                                t = o_46;
                                                                t = bottomup_1_0(n_0, t);
                                                                z_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, z_46);
                                                                t = n_0(t);
                                                                y_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, y_46);
                                                                t = n_0(t);
                                                                x_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_46, x_46);
                                                                t = n_0(t);
                                                                v_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_46, v_46);
                                                                t = n_0(t);
                                                                t_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_46, t_46);
                                                                t = n_0(t);
                                                                ;
                                                                LocalPopChoice(z_22);
                                                              }
                                                            else
                                                              {
                                                                t = y_22;
                                                                t = a_13;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm a_23 = t;
                                                    int b_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL;
                                                        t = a_13;
                                                        t = new_0_0(t);
                                                        g_47 = t;
                                                        t = bottomup_1_0(n_0, t);
                                                        s_47 = t;
                                                        t = (ATerm) ATempty;
                                                        t = n_0(t);
                                                        t_47 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(t_47), s_47);
                                                        t = n_0(t);
                                                        h_47 = t;
                                                        t = g_47;
                                                        t = bottomup_1_0(n_0, t);
                                                        r_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, r_47);
                                                        t = n_0(t);
                                                        q_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, q_47);
                                                        t = n_0(t);
                                                        j_47 = t;
                                                        t = z_12;
                                                        t = bottomup_1_0(n_0, t);
                                                        l_47 = t;
                                                        t = g_47;
                                                        t = bottomup_1_0(n_0, t);
                                                        o_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, o_47);
                                                        t = n_0(t);
                                                        n_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, n_47);
                                                        t = n_0(t);
                                                        m_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_47, m_47);
                                                        t = n_0(t);
                                                        k_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_47, k_47);
                                                        t = n_0(t);
                                                        i_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, h_47, i_47);
                                                        t = n_0(t);
                                                        ;
                                                        LocalPopChoice(b_23);
                                                      }
                                                    else
                                                      {
                                                        t = a_23;
                                                        t = a_13;
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
                                        z_12 = ATgetArgument(t, 0);
                                        t = z_12;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm e_23 = t;
                                            int f_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_c_9;
                                                t = n_0(t);
                                                ;
                                                LocalPopChoice(f_23);
                                              }
                                            else
                                              {
                                                t = e_23;
                                                t = a_13;
                                              }
                                          }
                                        else
                                          {
                                            t = a_13;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            z_12 = ATgetArgument(t, 0);
                                            t = z_12;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm g_23 = t;
                                                int h_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_i_9;
                                                    t = n_0(t);
                                                    ;
                                                    LocalPopChoice(h_23);
                                                  }
                                                else
                                                  {
                                                    t = g_23;
                                                    t = a_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = a_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                z_12 = ATgetArgument(t, 0);
                                                t = z_12;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm i_23 = t;
                                                    int j_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_i_9;
                                                        t = n_0(t);
                                                        ;
                                                        LocalPopChoice(j_23);
                                                      }
                                                    else
                                                      {
                                                        t = i_23;
                                                        t = a_13;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = a_13;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm k_23 = t;
                                                int l_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm n_23 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(l_23);
                                                    t = y_12;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm o_23 = t;
                                                        int p_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_i_9;
                                                            t = n_0(t);
                                                            ;
                                                            LocalPopChoice(p_23);
                                                          }
                                                        else
                                                          {
                                                            t = o_23;
                                                            t = a_13;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = a_13;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = k_23;
                                                    {
                                                      ATerm q_23 = t;
                                                      int r_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm s_23 = ATgetArgument(t, 0);
                                                              y_12 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(r_23);
                                                          {
                                                            ATerm t_23 = t;
                                                            int u_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = y_12;
                                                                t = fetch_1_0(n_1, t);
                                                                t = term_i_9;
                                                                t = bottomup_1_0(n_0, t);
                                                                ;
                                                                LocalPopChoice(u_23);
                                                              }
                                                            else
                                                              {
                                                                t = t_23;
                                                                t = a_13;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = q_23;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              z_12 = ATgetArgument(t, 0);
                                                              y_12 = ATgetArgument(t, 1);
                                                              t = y_12;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = z_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = y_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          w_12 = ATgetArgument(t, 0);
                                                                          x_12 = ATgetArgument(t, 1);
                                                                          t = z_12;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = z_12;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = z_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = y_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          w_12 = ATgetArgument(t, 0);
                                                                          x_12 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm v_23 = t;
                                                                            int w_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm d_49 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, x_12, y_12);
                                                                                t = n_0(t);
                                                                                d_49 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, w_12, d_49);
                                                                                t = n_0(t);
                                                                                ;
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
                                                                                      t = y_12;
                                                                                      if((z_12 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(y_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = x_23;
                                                                                      t = a_13;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm z_23 = t;
                                                                          int a_24 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = y_12;
                                                                              if((z_12 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(a_24);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = z_23;
                                                                              t = a_13;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  z_12 = ATgetArgument(t, 0);
                                                                  y_12 = ATgetArgument(t, 1);
                                                                  c_12 = ATgetArgument(t, 2);
                                                                  t = c_12;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm b_24 = t;
                                                                      int c_24 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_12, y_12);
                                                                          t = n_0(t);
                                                                          ;
                                                                          LocalPopChoice(c_24);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = b_24;
                                                                          t = a_13;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = a_13;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      z_12 = ATgetArgument(t, 0);
                                                                      y_12 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm d_24 = t;
                                                                        int e_24 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, z_12, y_12);
                                                                            t = n_0(t);
                                                                            ;
                                                                            LocalPopChoice(e_24);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = d_24;
                                                                            t = a_13;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          z_12 = ATgetArgument(t, 0);
                                                                          t = z_12;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              w_12 = ATgetFirst((ATermList) t);
                                                                              x_12 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm f_24 = t;
                                                                                int g_24 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm d_50 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, x_12);
                                                                                    t = n_0(t);
                                                                                    d_50 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, w_12, d_50);
                                                                                    t = n_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(g_24);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_24;
                                                                                    t = a_13;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm h_24 = t;
                                                                                  int i_24 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_i_9;
                                                                                      t = n_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(i_24);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = h_24;
                                                                                      t = a_13;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = a_13;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              z_12 = ATgetArgument(t, 0);
                                                                              t = z_12;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  w_12 = ATgetFirst((ATermList) t);
                                                                                  x_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm k_24 = t;
                                                                                    int l_24 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm j_50 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, x_12);
                                                                                        t = n_0(t);
                                                                                        j_50 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, w_12, j_50);
                                                                                        t = n_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(l_24);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = k_24;
                                                                                        t = a_13;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm m_24 = t;
                                                                                      int o_24 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_i_9;
                                                                                          t = n_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(o_24);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = m_24;
                                                                                          t = a_13;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = a_13;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  z_12 = ATgetArgument(t, 0);
                                                                                  t = z_12;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      w_12 = ATgetFirst((ATermList) t);
                                                                                      x_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm p_24 = t;
                                                                                        int q_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm p_50 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, x_12);
                                                                                            t = n_0(t);
                                                                                            p_50 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, w_12, p_50);
                                                                                            t = n_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(q_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_24;
                                                                                            t = a_13;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm r_24 = t;
                                                                                          int s_24 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_c_9;
                                                                                              t = n_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(s_24);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_24;
                                                                                              t = a_13;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_13;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      z_12 = ATgetArgument(t, 0);
                                                                                      y_12 = ATgetArgument(t, 1);
                                                                                      c_12 = ATgetArgument(t, 2);
                                                                                      b_12 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm t_24 = t;
                                                                                        int v_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm w_50 = NULL,y_50 = NULL;
                                                                                            t = y_12;
                                                                                            t = map1_1_0(q_1, t);
                                                                                            w_50 = t;
                                                                                            t = c_12;
                                                                                            t = map1_1_0(r_1, t);
                                                                                            y_50 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, z_12, w_50, y_50, b_12);
                                                                                            t = bottomup_1_0(n_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(v_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = t_24;
                                                                                            t = a_13;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          z_12 = ATgetArgument(t, 0);
                                                                                          y_12 = ATgetArgument(t, 1);
                                                                                          c_12 = ATgetArgument(t, 2);
                                                                                          b_12 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm w_24 = t;
                                                                                            int x_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm j_51 = NULL,l_51 = NULL;
                                                                                                t = c_12;
                                                                                                t = map1_1_0(s_1, t);
                                                                                                j_51 = t;
                                                                                                t = y_12;
                                                                                                t = map_1_0(t_1, t);
                                                                                                l_51 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_12, l_51, j_51, b_12);
                                                                                                t = bottomup_1_0(n_0, t);
                                                                                                ;
                                                                                                LocalPopChoice(x_24);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = w_24;
                                                                                                {
                                                                                                  ATerm y_24 = t;
                                                                                                  int z_24 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      ATerm v_51 = NULL,x_51 = NULL;
                                                                                                      t = y_12;
                                                                                                      t = map1_1_0(u_1, t);
                                                                                                      v_51 = t;
                                                                                                      t = c_12;
                                                                                                      t = map_1_0(v_1, t);
                                                                                                      x_51 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, z_12, v_51, x_51, b_12);
                                                                                                      t = bottomup_1_0(n_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(z_24);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_24;
                                                                                                      t = a_13;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              z_12 = ATgetArgument(t, 0);
                                                                                              y_12 = ATgetArgument(t, 1);
                                                                                              c_12 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm a_25 = t;
                                                                                                int b_25 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
                                                                                                    t = term_c_25;
                                                                                                    t = bottomup_1_0(n_0, t);
                                                                                                    l_52 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = n_0(t);
                                                                                                    o_52 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(o_52), c_12);
                                                                                                    t = n_0(t);
                                                                                                    n_52 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(n_52), z_12);
                                                                                                    t = n_0(t);
                                                                                                    m_52 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, l_52, m_52);
                                                                                                    t = n_0(t);
                                                                                                    k_52 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, y_12, k_52);
                                                                                                    t = n_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(b_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = a_25;
                                                                                                    t = a_13;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  z_12 = ATgetArgument(t, 0);
                                                                                                  y_12 = ATgetArgument(t, 1);
                                                                                                  c_12 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm d_25 = t;
                                                                                                    int e_25 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm v_52 = NULL,c_53 = NULL,d_53 = NULL,f_53 = NULL,g_53 = NULL,i_53 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, y_12);
                                                                                                        t = n_0(t);
                                                                                                        c_53 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, c_12);
                                                                                                        t = n_0(t);
                                                                                                        g_53 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = n_0(t);
                                                                                                        i_53 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(i_53), g_53);
                                                                                                        t = n_0(t);
                                                                                                        f_53 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(f_53), z_12);
                                                                                                        t = n_0(t);
                                                                                                        d_53 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(d_53), c_53);
                                                                                                        t = n_0(t);
                                                                                                        v_52 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, v_52);
                                                                                                        t = n_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(e_25);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = d_25;
                                                                                                        t = a_13;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      z_12 = ATgetArgument(t, 0);
                                                                                                      y_12 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm f_25 = t;
                                                                                                        int g_25 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm m_53 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, y_12);
                                                                                                            t = n_0(t);
                                                                                                            m_53 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, z_12, m_53);
                                                                                                            t = n_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(g_25);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_25;
                                                                                                            t = a_13;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          z_12 = ATgetArgument(t, 0);
                                                                                                          y_12 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm h_25 = t;
                                                                                                            int i_25 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm q_53 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, z_12);
                                                                                                                t = n_0(t);
                                                                                                                q_53 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_53, y_12);
                                                                                                                t = n_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(i_25);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = h_25;
                                                                                                                t = a_13;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              z_12 = ATgetArgument(t, 0);
                                                                                                              y_12 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm m_25 = t;
                                                                                                                int n_25 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm v_53 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, y_12);
                                                                                                                    t = n_0(t);
                                                                                                                    v_53 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, v_53, z_12);
                                                                                                                    t = n_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(n_25);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = m_25;
                                                                                                                    t = a_13;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  z_12 = ATgetArgument(t, 0);
                                                                                                                  y_12 = ATgetArgument(t, 1);
                                                                                                                  t = y_12;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      u_12 = ATgetArgument(t, 0);
                                                                                                                      v_12 = ATgetArgument(t, 1);
                                                                                                                      t = z_12;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = y_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm o_25 = t;
                                                                                                                          int p_25 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm i_54 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, z_12, u_12);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              i_54 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, i_54, v_12);
                                                                                                                              t = bottomup_1_0(n_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(p_25);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = o_25;
                                                                                                                              t = a_13;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          u_12 = ATgetArgument(t, 0);
                                                                                                                          v_12 = ATgetArgument(t, 1);
                                                                                                                          q_12 = ATgetArgument(t, 2);
                                                                                                                          t = q_12;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = v_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = u_12;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      t_12 = ATgetArgument(t, 0);
                                                                                                                                      t = z_12;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = y_12;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              w_12 = ATgetFirst((ATermList) t);
                                                                                                                                              x_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = x_12;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = w_12;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      s_12 = ATgetArgument(t, 0);
                                                                                                                                                      n_12 = ATgetArgument(t, 1);
                                                                                                                                                      k_12 = ATgetArgument(t, 2);
                                                                                                                                                      l_12 = ATgetArgument(t, 3);
                                                                                                                                                      t = k_12;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = n_12;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm q_25 = t;
                                                                                                                                                              int r_25 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = t_12;
                                                                                                                                                                  if((s_12 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = l_12;
                                                                                                                                                                  {
                                                                                                                                                                    ATerm s_25 = t;
                                                                                                                                                                    if((PushChoice() == 0))
                                                                                                                                                                      {
                                                                                                                                                                        ATerm x_1 (ATerm t)
                                                                                                                                                                        {
                                                                                                                                                                          if(match_cons(t, sym_CallT_3))
                                                                                                                                                                            {
                                                                                                                                                                              ATerm t_25 = ATgetArgument(t, 0);
                                                                                                                                                                              if(match_cons(t_25, sym_SVar_1))
                                                                                                                                                                                {
                                                                                                                                                                                  if((s_12 != ATgetArgument(t_25, 0)))
                                                                                                                                                                                    {
                                                                                                                                                                                      _fail(ATgetArgument(t_25, 0));
                                                                                                                                                                                    }
                                                                                                                                                                                }
                                                                                                                                                                              else
                                                                                                                                                                                _fail(t);
                                                                                                                                                                              {
                                                                                                                                                                                ATerm u_25 = ATgetArgument(t, 1);
                                                                                                                                                                                if(((ATgetType(u_25) != AT_LIST) || !(ATisEmpty(u_25))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                              {
                                                                                                                                                                                ATerm v_25 = ATgetArgument(t, 2);
                                                                                                                                                                                if(((ATgetType(v_25) != AT_LIST) || !(ATisEmpty(v_25))))
                                                                                                                                                                                  _fail(t);
                                                                                                                                                                              }
                                                                                                                                                                            }
                                                                                                                                                                          else
                                                                                                                                                                            _fail(t);
                                                                                                                                                                          return(t);
                                                                                                                                                                        }
                                                                                                                                                                        t = oncetd_1_0(x_1, t);
                                                                                                                                                                        PopChoice();
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    else
                                                                                                                                                                      {
                                                                                                                                                                        t = s_25;
                                                                                                                                                                      }
                                                                                                                                                                    t = l_12;
                                                                                                                                                                    t = bottomup_1_0(n_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(r_25);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = q_25;
                                                                                                                                                                  t = a_13;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = a_13;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = a_13;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = a_13;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = a_13;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = a_13;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = z_12;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = y_12;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = a_13;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = z_12;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = y_12;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = a_13;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = z_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = y_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = a_13;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = z_12;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = y_12;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_13;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      z_12 = ATgetArgument(t, 0);
                                                                                                                      y_12 = ATgetArgument(t, 1);
                                                                                                                      t = z_12;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = y_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = a_13;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_13;
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
  t = bottomup_1_0(n_0, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm w_25 = t;
  if((PushChoice() == 0))
    {
      ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,f_1 = NULL;
      d_56 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_56);
      b_56 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_56);
      f_1 = t;
      t = SSLsetAnnotations(f_1, b_56);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_25;
    }
  return(t);
}
ATerm a_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_25;
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm e_56 = NULL,f_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_56 = ATgetFirst((ATermList) t);
      f_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_56, f_56);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_25 = ATgetArgument(t, 0);
      if(match_cons(y_25, sym__2))
        {
          g_56 = ATgetArgument(y_25, 0);
          h_56 = ATgetArgument(y_25, 1);
        }
      else
        _fail(t);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(match_cons(z_25, sym__2))
          {
            i_56 = ATgetArgument(z_25, 0);
            j_56 = ATgetArgument(z_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_56), g_56), (ATerm) ATinsert(CheckATermList(j_56), h_56));
  return(t);
}
ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_25;
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm k_56 = NULL,m_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_56 = ATgetFirst((ATermList) t);
      m_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_56, m_56);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      if(match_cons(a_26, sym__2))
        {
          n_56 = ATgetArgument(a_26, 0);
          o_56 = ATgetArgument(a_26, 1);
        }
      else
        _fail(t);
      {
        ATerm b_26 = ATgetArgument(t, 1);
        if(match_cons(b_26, sym__2))
          {
            p_56 = ATgetArgument(b_26, 0);
            q_56 = ATgetArgument(b_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_56), n_56), (ATerm) ATinsert(CheckATermList(q_56), o_56));
  return(t);
}
ATerm q_11 (ATerm j_25, ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,i_1 = NULL;
  t = l_25;
  t = fetch_1_0(y_1, t);
  t = l_25;
  t = genzip_4_0(a_2, b_2, e_2, LiftPrimArg_0_0, t);
  a_56 = t;
  if(match_cons(t, sym__2))
    {
      w_55 = ATgetArgument(t, 0);
      x_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_56);
  v_55 = t;
  t = w_55;
  t = concat_0_0(t);
  y_55 = t;
  t = x_55;
  t = genzip_4_0(h_2, i_2, j_2, _id, t);
  z_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_55, z_55);
  i_1 = t;
  t = SSLsetAnnotations(i_1, v_55);
  if(match_cons(t, sym__2))
    {
      s_55 = ATgetArgument(t, 0);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(match_cons(c_26, sym__2))
          {
            t_55 = ATgetArgument(c_26, 0);
            u_55 = ATgetArgument(c_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_55, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_55), (ATerm) ATmakeAppl(sym_CallT_3, j_25, k_25, u_55)));
  return(t);
}
ATerm genzip_4_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm t)
{
  ATerm y_56 (ATerm t)
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_96(t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        {
          ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,o_1 = NULL;
          t = t_96(t);
          x_56 = t;
          if(match_cons(t, sym__2))
            {
              t_56 = ATgetArgument(t, 0);
              u_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_56);
          s_56 = t;
          t = t_56;
          t = v_96(t);
          v_56 = t;
          t = u_56;
          t = y_56(t);
          w_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_56, w_56);
          o_1 = t;
          t = SSLsetAnnotations(o_1, s_56);
          t = u_96(t);
        }
      }
    return(t);
  }
  t = y_56(t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm m_57 (ATerm t)
  {
    ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
    l_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_57 = ATgetFirst((ATermList) t);
        k_57 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_3 = NULL,c_4 = NULL,w_1 = NULL;
          t = SSLgetAnnotations(l_57);
          z_3 = t;
          t = k_57;
          t = m_57(t);
          c_4 = t;
          t = (ATerm) ATinsert(CheckATermList(c_4), j_57);
          w_1 = t;
          t = SSLsetAnnotations(w_1, z_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_57;
        t = r_107(t);
      }
    return(t);
  }
  t = m_57(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
  p_57 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_57;
    }
  else
    {
      ATerm k_2 (ATerm t)
      {
        t = not_null(r_57);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_57 = ATgetFirst((ATermList) t);
          if(((r_57 != NULL) && (r_57 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_57;
      t = at_end_1_0(k_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm m_58 (ATerm y_57, ATerm t)
{
  ATerm a_58 = NULL;
  t = y_57;
  {
    ATerm f_26 = t;
    if((PushChoice() == 0))
      {
        ATerm b_58 = NULL,c_58 = NULL,d_58 = NULL,z_1 = NULL;
        d_58 = t;
        if(match_cons(t, sym_Var_1))
          {
            c_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_58);
        b_58 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, c_58);
        z_1 = t;
        t = SSLsetAnnotations(z_1, b_58);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_26;
      }
    t = new_0_0(t);
    a_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, a_58), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_57), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_58)))), (ATerm) ATmakeAppl(sym_Var_1, a_58)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL;
  e_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_58 = ATgetArgument(t, 0);
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_58(e_58, t);
            ;
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATmakeAppl(sym_Var_1, f_58)));
          }
      }
    }
  else
    {
      t = m_58(e_58, t);
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm j_26 = t;
  if((PushChoice() == 0))
    {
      ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL,c_2 = NULL;
      z_4 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_4 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_4);
      x_4 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_4);
      c_2 = t;
      t = SSLsetAnnotations(c_2, x_4);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_26;
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_25;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm a_5 = NULL,b_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_5 = ATgetFirst((ATermList) t);
      b_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_5, b_5);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL,f_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_26 = ATgetArgument(t, 0);
      if(match_cons(k_26, sym__2))
        {
          c_5 = ATgetArgument(k_26, 0);
          d_5 = ATgetArgument(k_26, 1);
        }
      else
        _fail(t);
      {
        ATerm l_26 = ATgetArgument(t, 1);
        if(match_cons(l_26, sym__2))
          {
            e_5 = ATgetArgument(l_26, 0);
            f_5 = ATgetArgument(l_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_5), c_5), (ATerm) ATinsert(CheckATermList(f_5), d_5));
  return(t);
}
ATerm v_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_25;
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_5 = ATgetFirst((ATermList) t);
      h_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_5, h_5);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_26 = ATgetArgument(t, 0);
      if(match_cons(m_26, sym__2))
        {
          i_5 = ATgetArgument(m_26, 0);
          j_5 = ATgetArgument(m_26, 1);
        }
      else
        _fail(t);
      {
        ATerm n_26 = ATgetArgument(t, 1);
        if(match_cons(n_26, sym__2))
          {
            k_5 = ATgetArgument(n_26, 0);
            l_5 = ATgetArgument(n_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_5), i_5), (ATerm) ATinsert(CheckATermList(l_5), j_5));
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm o_26 = t;
  if((PushChoice() == 0))
    {
      ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,f_2 = NULL;
      h_6 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_6);
      f_6 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_6);
      f_2 = t;
      t = SSLsetAnnotations(f_2, f_6);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_26;
    }
  return(t);
}
ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_25;
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_6 = ATgetFirst((ATermList) t);
      j_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_6, j_6);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if(match_cons(p_26, sym__2))
        {
          k_6 = ATgetArgument(p_26, 0);
          l_6 = ATgetArgument(p_26, 1);
        }
      else
        _fail(t);
      {
        ATerm q_26 = ATgetArgument(t, 1);
        if(match_cons(q_26, sym__2))
          {
            m_6 = ATgetArgument(q_26, 0);
            n_6 = ATgetArgument(q_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_6), k_6), (ATerm) ATinsert(CheckATermList(n_6), l_6));
  return(t);
}
ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_25;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_6 = ATgetFirst((ATermList) t);
      p_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_6, p_6);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if(match_cons(r_26, sym__2))
        {
          q_6 = ATgetArgument(r_26, 0);
          r_6 = ATgetArgument(r_26, 1);
        }
      else
        _fail(t);
      {
        ATerm s_26 = ATgetArgument(t, 1);
        if(match_cons(s_26, sym__2))
          {
            s_6 = ATgetArgument(s_26, 0);
            t_6 = ATgetArgument(s_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_6), q_6), (ATerm) ATinsert(CheckATermList(t_6), r_6));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL;
  l_61 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      m_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
      k_61 = ATgetArgument(t, 2);
      {
        ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,d_2 = NULL;
        t = k_61;
        t = fetch_1_0(p_2, t);
        t = k_61;
        t = genzip_4_0(r_2, s_2, u_2, LiftPrimArg_0_0, t);
        w_4 = t;
        if(match_cons(t, sym__2))
          {
            s_4 = ATgetArgument(t, 0);
            t_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_4);
        r_4 = t;
        t = s_4;
        t = concat_0_0(t);
        u_4 = t;
        t = t_4;
        t = genzip_4_0(v_2, w_2, x_2, _id, t);
        v_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_4, v_4);
        d_2 = t;
        t = SSLsetAnnotations(d_2, r_4);
        if(match_cons(t, sym__2))
          {
            o_4 = ATgetArgument(t, 0);
            {
              ATerm u_26 = ATgetArgument(t, 1);
              if(match_cons(u_26, sym__2))
                {
                  p_4 = ATgetArgument(u_26, 0);
                  q_4 = ATgetArgument(u_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_4), (ATerm) ATmakeAppl(sym_PrimT_3, m_61, n_61, q_4)));
      }
    }
  else
    {
      ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_2 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          m_61 = ATgetArgument(t, 0);
          n_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_61;
      t = fetch_1_0(y_2, t);
      t = n_61;
      t = genzip_4_0(z_2, a_3, b_3, LiftPrimArg_0_0, t);
      e_6 = t;
      if(match_cons(t, sym__2))
        {
          a_6 = ATgetArgument(t, 0);
          b_6 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_6);
      z_5 = t;
      t = a_6;
      t = concat_0_0(t);
      c_6 = t;
      t = b_6;
      t = genzip_4_0(d_3, e_3, f_3, _id, t);
      d_6 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_6, d_6);
      g_2 = t;
      t = SSLsetAnnotations(g_2, z_5);
      if(match_cons(t, sym__2))
        {
          w_5 = ATgetArgument(t, 0);
          {
            ATerm v_26 = ATgetArgument(t, 1);
            if(match_cons(v_26, sym__2))
              {
                x_5 = ATgetArgument(v_26, 0);
                y_5 = ATgetArgument(v_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, w_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_5), (ATerm) ATmakeAppl(sym_PrimT_3, m_61, (ATerm)ATempty, y_5)));
    }
  return(t);
}
ATerm topdown_1_0 (ATerm g_92 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = topdown_1_0(g_92, t);
    return(t);
  }
  t = g_92(t);
  t = SRTS_all(g_3, t);
  return(t);
}
ATerm map_1_0 (ATerm b_107 (ATerm), ATerm t)
{
  ATerm e_62 (ATerm t)
  {
    ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
    b_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_62;
      }
    else
      {
        ATerm b_7 = NULL,e_7 = NULL,f_7 = NULL,q_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_62 = ATgetFirst((ATermList) t);
            d_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_62);
        b_7 = t;
        t = c_62;
        t = b_107(t);
        e_7 = t;
        t = d_62;
        t = e_62(t);
        f_7 = t;
        t = (ATerm) ATinsert(CheckATermList(f_7), e_7);
        q_2 = t;
        t = SSLsetAnnotations(q_2, b_7);
      }
    return(t);
  }
  t = e_62(t);
  return(t);
}
ATerm Cons_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,t_7 = NULL;
  m_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_62 = ATgetFirst((ATermList) t);
      j_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_62);
  h_62 = t;
  t = i_62;
  t = b_76(t);
  k_62 = t;
  t = j_62;
  t = c_76(t);
  l_62 = t;
  t = (ATerm) ATinsert(CheckATermList(l_62), k_62);
  t_7 = t;
  t = SSLsetAnnotations(t_7, h_62);
  return(t);
}
ATerm t_11 (ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm n_62 = NULL;
  t = SSL_fputc(j_49, k_49);
  n_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_62);
  return(t);
}
ATerm u_11 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm o_62 = NULL;
  t = SSL_write_term_to_stream_text(x_52, y_52);
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_62);
  return(t);
}
ATerm x_11 (ATerm c_113 (ATerm), ATerm t_474, ATerm b_53, ATerm t)
{
  ATerm p_62 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_474, term_w_26);
  t = open_stream_0_0(t);
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_62, b_53);
  t = c_113(t);
  t = fclose_0_0(t);
  t = b_53;
  return(t);
}
ATerm v_11 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm q_62 = NULL;
  t = SSL_write_term_to_stream_baf(t_52, u_52);
  q_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_62);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(match_cons(x_26, sym_Stream_1))
        {
          t_62 = ATgetArgument(x_26, 0);
        }
      else
        _fail(t);
      u_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_11(t_62, u_62, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if(match_cons(z_26, sym_Stream_1))
        {
          y_62 = ATgetArgument(z_26, 0);
        }
      else
        _fail(t);
      z_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(y_62, z_62, t);
  v_62 = t;
  t = term_a_27;
  w_62 = t;
  t = v_62;
  if(match_cons(t, sym_Stream_1))
    {
      x_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_27, v_62);
  t = t_11(w_62, x_62, t);
  return(t);
}
ATerm output_1_0 (ATerm l_117 (ATerm), ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  t = l_117(t);
  s_62 = t;
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_27;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = term_e_27;
      }
    r_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_62, s_62);
    {
      ATerm f_27 = t;
      int g_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_h_27;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, r_62, s_62);
          LocalPopChoice(g_27);
          if(match_cons(t, sym__2))
            {
              ATerm i_27 = ATgetArgument(t, 0);
              ATerm j_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_11(h_3, r_62, s_62, t);
        }
      else
        {
          t = f_27;
          if(match_cons(t, sym__2))
            {
              ATerm k_27 = ATgetArgument(t, 0);
              ATerm l_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_11(i_3, r_62, s_62, t);
        }
    }
  }
  return(t);
}
ATerm n_63 (ATerm h_63, ATerm t)
{
  t = SSL_fclose(h_63);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL;
  l_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_63 = ATgetArgument(t, 0);
      {
        ATerm m_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_63);
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = m_27;
            t = n_63(l_63, t);
          }
      }
    }
  else
    {
      t = n_63(l_63, t);
    }
  return(t);
}
ATerm y_11 (ATerm z_52, ATerm t)
{
  t = SSL_read_term_from_stream(z_52);
  return(t);
}
ATerm z_11 (ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm o_63 = NULL;
  t = SSL_fopen(l_49, m_49);
  o_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_63);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_63 = NULL;
  t = SSL_stdin_stream();
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_63);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_63 = NULL;
  t = SSL_stdout_stream();
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_63);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_63 = NULL;
  t = SSL_stderr_stream();
  r_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_63);
  return(t);
}
ATerm z_64 (ATerm y_63, ATerm t)
{
  ATerm z_63 = NULL;
  t = SSL_explode_term(y_63);
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_27 = ATgetArgument(t, 1);
        if(((ATgetType(q_27) == AT_LIST) && !(ATisEmpty(q_27))))
          {
            z_63 = ATgetFirst((ATermList) q_27);
            {
              ATerm r_27 = (ATerm) ATgetNext((ATermList) q_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_63;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_63;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_63;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_63;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm a_65 (ATerm c_64, ATerm d_64, ATerm e_64, ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL,k_64 = NULL,z_9 = NULL;
  t = SSLgetAnnotations(e_64);
  h_64 = t;
  t = c_64;
  if(match_cons(t, sym_Path_1))
    {
      k_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_64, d_64);
  z_9 = t;
  t = SSLsetAnnotations(z_9, h_64);
  if(match_cons(t, sym__2))
    {
      f_64 = ATgetArgument(t, 0);
      g_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11(f_64, g_64, t);
  return(t);
}
ATerm b_65 (ATerm m_64, ATerm n_64, ATerm o_64, ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL,u_64 = NULL,a_10 = NULL;
  t = SSLgetAnnotations(o_64);
  r_64 = t;
  t = SSL_is_string(m_64);
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_64, n_64);
  a_10 = t;
  t = SSLsetAnnotations(a_10, r_64);
  if(match_cons(t, sym__2))
    {
      p_64 = ATgetArgument(t, 0);
      q_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_11(p_64, q_64, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,y_64 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_27 = ATgetArgument(t, 0);
      ATerm u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  w_64 = t;
  if(match_cons(t, sym__2))
    {
      x_64 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
      {
        ATerm v_27 = t;
        int w_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_64(w_64, t);
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
                  t = a_65(x_64, y_64, w_64, t);
                  ;
                  LocalPopChoice(y_27);
                }
              else
                {
                  t = x_27;
                  t = b_65(x_64, y_64, w_64, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_64(w_64, t);
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_z_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,f_65 = NULL;
  ATerm a_28 = t;
  int b_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_65 = NULL;
      g_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_65, term_c_28);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(b_28);
    }
  else
    {
      t = a_28;
      t = debug_1_0(k_3, t);
      _fail(t);
    }
  d_65 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_11(f_65, t);
  c_65 = t;
  t = d_65;
  t = fclose_0_0(t);
  t = c_65;
  return(t);
}
ATerm input_1_0 (ATerm m_117 (ATerm), ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      t = term_h_28;
    }
  t = ReadFromFile_0_0(t);
  t = m_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  j_65 = t;
  t = term_i_28;
  t = whoami_0_0(t);
  l_65 = t;
  t = term_j_28;
  n_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_28), l_65), term_l_28);
  o_65 = t;
  t = SSL_printnl(n_65, o_65);
  t = term_n_28;
  m_65 = t;
  t = SSL_exit(m_65);
  t = j_65;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm q_65 = NULL;
  q_65 = t;
  if(match_string(t, "-k"))
    {
      t = q_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_65;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL;
  r_65 = t;
  t = SSL_string_to_int(r_65);
  s_65 = t;
  t = term_o_28;
  t_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, s_65);
  t = h_12(t_65, s_65, t);
  t = r_65;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_x_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, m_3, n_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm v_65 = NULL;
  v_65 = t;
  if(match_string(t, "-S"))
    {
      t = v_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_65;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm w_65 = NULL,x_65 = NULL;
  t = term_y_28;
  w_65 = t;
  t = term_z_28;
  x_65 = t;
  t = term_a_29;
  t = h_12(w_65, x_65, t);
  t = term_b_29;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_c_29;
  return(t);
}
ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
  y_65 = t;
  t = SSL_string_to_int(y_65);
  z_65 = t;
  t = term_y_28;
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_28, z_65);
  t = h_12(a_66, z_65, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_65);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL;
  t = term_e_29;
  b_66 = t;
  t = term_i_28;
  c_66 = t;
  t = term_f_29;
  t = h_12(b_66, c_66, t);
  t = term_g_29;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_h_29;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, p_3, q_3, t);
      ;
      LocalPopChoice(j_29);
    }
  else
    {
      t = i_29;
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_3, s_3, t_3, t);
            ;
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            t = Option_3_0(u_3, v_3, w_3, t);
          }
      }
    }
  return(t);
}
ATerm h_12 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm d_66 = NULL;
  t = term_n_29;
  d_66 = t;
  t = SSL_table_put(d_66, a_54, b_54);
  t = (ATerm) ATmakeAppl(sym__3, term_n_29, a_54, b_54);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm g_66 = NULL,h_66 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL;
      t = term_i_28;
      t = f_0(t);
      i_66 = t;
      t = term_o_29;
      j_66 = t;
      t = term_p_29;
      k_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_29, term_p_29, i_66);
      t = f_12(j_66, k_66, i_66, t);
      _fail(t);
    }
  else
    {
      ATerm n_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_66 = ATgetFirst((ATermList) t);
          h_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_66;
      t = b_0(t);
      t = term_i_28;
      t = d_0(t);
      n_66 = t;
      t = (ATerm) ATinsert(CheckATermList(h_66), n_66);
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm p_66 = NULL;
  p_66 = t;
  if(match_string(t, "-o"))
    {
      t = p_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_66;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL;
  q_66 = t;
  t = term_d_27;
  r_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_27, q_66);
  t = h_12(r_66, q_66, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_66);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, y_3, a_4, t);
  return(t);
}
ATerm f_12 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL;
  t_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
  {
    ATerm r_29 = t;
    int s_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_29 = ATgetArgument(t, 0);
            ATerm u_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
        t = e_12(y_58, z_58, t);
        ;
        LocalPopChoice(s_29);
      }
    else
      {
        t = r_29;
        t = (ATerm) ATempty;
      }
    u_66 = t;
    t = (ATerm) ATinsert(CheckATermList(u_66), x_58);
    v_66 = t;
    t = SSL_table_put(y_58, z_58, v_66);
    t = t_66;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
      t = term_i_28;
      t = k_0(t);
      g_67 = t;
      t = term_o_29;
      h_67 = t;
      t = term_p_29;
      i_67 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_29, term_p_29, g_67);
      t = f_12(h_67, i_67, g_67, t);
      _fail(t);
    }
  else
    {
      ATerm m_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_67 = ATgetFirst((ATermList) t);
          d_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_67 = ATgetFirst((ATermList) t);
          f_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_67;
      t = i_0(t);
      t = e_67;
      t = j_0(t);
      m_67 = t;
      t = (ATerm) ATinsert(CheckATermList(f_67), m_67);
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm o_67 = NULL;
  o_67 = t;
  if(match_string(t, "-i"))
    {
      t = o_67;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_67;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL;
  p_67 = t;
  t = term_g_28;
  q_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_28, p_67);
  t = h_12(q_67, p_67, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_67);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, d_4, e_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_28;
  t = whoami_0_0(t);
  r_67 = t;
  t = term_j_28;
  t_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_29), r_67);
  u_67 = t;
  t = SSL_printnl(t_67, u_67);
  t = term_n_28;
  s_67 = t;
  t = SSL_exit(s_67);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_y_29;
  t = get_config_0_0(t);
  return(t);
}
ATerm a_12 (ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm z_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_46, k_46);
      ;
      LocalPopChoice(a_30);
    }
  else
    {
      t = z_29;
      t = SSL_addr(j_46, k_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_105 (ATerm), ATerm s_105 (ATerm), ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
  w_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_67;
      t = r_105(t);
    }
  else
    {
      ATerm b_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_67 = ATgetFirst((ATermList) t);
          y_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_67;
      t = foldr_2_0(r_105, s_105, t);
      b_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_67, b_68);
      t = s_105(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(u_7, v_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_68 = NULL,q_7 = NULL,r_7 = NULL;
  t = times_0_0(t);
  r_7 = t;
  t = SSL_explode_term(r_7);
  if(match_cons(t, sym__2))
    {
      ATerm b_30 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7;
  t = foldr_2_0(f_4, g_4, t);
  e_68 = t;
  t = SSL_TicksToSeconds(e_68);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL;
  p_68 = t;
  if(match_cons(t, sym__2))
    {
      q_68 = ATgetArgument(t, 0);
      r_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_68;
        if((q_68 != t))
          {
            _fail(t);
          }
        t = p_68;
        ;
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = (ATerm) ATmakeAppl(sym__2, q_68, r_68);
        {
          ATerm f_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_68, r_68);
              ;
              LocalPopChoice(g_30);
            }
          else
            {
              t = f_30;
              t = SSL_gtr(q_68, r_68);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_68, r_68);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_114 (ATerm), ATerm t)
{
  ATerm v_68 = NULL;
  v_68 = t;
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_68 = NULL;
        t = term_y_28;
        t = get_config_0_0(t);
        x_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_68, term_n_28);
        t = geq_0_0(t);
        t = v_68;
        t = m_114(t);
        ;
        LocalPopChoice(i_30);
      }
    else
      {
        t = h_30;
        t = v_68;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL,c_69 = NULL,d_69 = NULL;
  t = run_time_0_0(t);
  z_68 = t;
  t = term_i_28;
  t = whoami_0_0(t);
  a_69 = t;
  t = term_j_28;
  c_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_30), z_68), term_j_30), a_69);
  d_69 = t;
  t = SSL_printnl(c_69, d_69);
  t = (ATerm) ATmakeAppl(sym__2, term_j_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_30), z_68), term_j_30), a_69));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_69 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_28;
  e_69 = t;
  t = SSL_exit(e_69);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL;
  n_69 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_69;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_69 = ATgetArgument(t, 0);
          {
            ATerm h_8 = NULL,d_10 = NULL;
            t = SSLgetAnnotations(n_69);
            h_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_69);
            d_10 = t;
            t = SSLsetAnnotations(d_10, h_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_69;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm c_117 (ATerm), ATerm t)
{
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_30);
    }
  else
    {
      t = l_30;
      t = fetch_1_0(i_4, t);
    }
  t = c_117(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm q_69 = NULL,r_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_69 = ATgetFirst((ATermList) t);
      r_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_69 = NULL,w_69 = NULL;
        ATerm j_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_69)), not_null(w_69));
          return(t);
        }
        t = r_69;
        t = h_0(t);
        if(((v_69 != NULL) && (v_69 != t)))
          _fail(t);
        else
          v_69 = t;
        t = q_69;
        t = g_0(t);
        if(((w_69 != NULL) && (w_69 != t)))
          _fail(t);
        else
          w_69 = t;
        t = r_69;
        t = reverse_acc_2_0(g_0, j_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_28;
      t = h_0(t);
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL,f_10 = NULL;
  c_70 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_70);
  a_70 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_70);
  f_10 = t;
  t = SSLsetAnnotations(f_10, a_70);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm e_70 = NULL;
  e_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_70), term_p_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_69 = NULL,z_69 = NULL;
  ATerm q_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = q_30;
      t = fetch_1_0(k_4, t);
    }
  t = term_t_30;
  t = echo_0_0(t);
  t = term_o_29;
  y_69 = t;
  t = term_p_29;
  z_69 = t;
  t = term_u_30;
  t = e_12(y_69, z_69, t);
  t = reverse_acc_2_0(_id, l_4, t);
  t = map_1_0(m_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm b_71 (ATerm t)
  {
    ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
    y_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_70 = ATgetFirst((ATermList) t);
        a_71 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_30 = t;
      int w_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_8 = NULL,s_8 = NULL,h_10 = NULL;
          t = SSLgetAnnotations(y_70);
          p_8 = t;
          t = z_70;
          t = l_107(t);
          s_8 = t;
          t = (ATerm) ATinsert(CheckATermList(a_71), s_8);
          h_10 = t;
          t = SSLsetAnnotations(h_10, p_8);
          ;
          LocalPopChoice(w_30);
        }
      else
        {
          t = v_30;
          {
            ATerm a_9 = NULL,d_9 = NULL,i_10 = NULL;
            t = SSLgetAnnotations(y_70);
            a_9 = t;
            t = a_71;
            t = b_71(t);
            d_9 = t;
            t = (ATerm) ATinsert(CheckATermList(d_9), z_70);
            i_10 = t;
            t = SSLsetAnnotations(i_10, a_9);
          }
        }
    }
    return(t);
  }
  t = b_71(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
  f_71 = t;
  {
    ATerm x_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_71;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_31 = ATgetFirst((ATermList) t);
                ATerm b_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_71;
          }
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = x_30;
        t = (ATerm) ATinsert(ATempty, f_71);
      }
    g_71 = t;
    t = term_e_27;
    h_71 = t;
    t = SSL_printnl(h_71, g_71);
    t = f_71;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_y_29;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm d_12 (ATerm l_40, ATerm m_40, ATerm t)
{
  t = SSL_strcat(l_40, m_40);
  return(t);
}
ATerm debug_1_0 (ATerm a_113 (ATerm), ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL;
  l_71 = t;
  t = a_113(t);
  m_71 = t;
  t = term_j_28;
  n_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_71), m_71);
  o_71 = t;
  t = SSL_printnl(n_71, o_71);
  t = l_71;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_e_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_71 = NULL;
      v_71 = t;
      t = SSL_is_string(v_71);
      ;
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_4, t);
            ;
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            {
              ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
              b_72 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_72 = ATgetArgument(t, 0);
                  t = c_72;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_72 = ATgetArgument(t, 0);
                      t = c_72;
                      {
                        ATerm k_31 = t;
                        int l_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_31);
                          }
                        else
                          {
                            t = k_31;
                            t = debug_1_0(m_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_72 = NULL,i_72 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_72 = ATgetArgument(t, 0);
                          d_72 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_72;
                      t = eval_config_0_0(t);
                      h_72 = t;
                      t = d_72;
                      t = eval_config_0_0(t);
                      i_72 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_72, i_72);
                      t = d_12(h_72, i_72, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm e_12 (ATerm p_60, ATerm q_60, ATerm t)
{
  t = SSL_table_get(p_60, q_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL;
  m_72 = t;
  t = term_n_29;
  n_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_29, m_72);
  t = e_12(n_72, m_72, t);
  {
    ATerm m_31 = t;
    int n_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_72 = NULL,p_72 = NULL;
        t = eval_config_0_0(t);
        o_72 = t;
        t = term_n_29;
        p_72 = t;
        t = SSL_table_put(p_72, m_72, o_72);
        t = o_72;
        ;
        LocalPopChoice(n_31);
      }
    else
      {
        t = m_31;
      }
  }
  return(t);
}
ATerm n_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL;
  t = term_o_31;
  s_72 = t;
  t = term_i_28;
  t_72 = t;
  t = term_p_31;
  t = h_12(s_72, t_72, t);
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_q_31;
  return(t);
}
ATerm q_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL;
  t = term_o_31;
  w_72 = t;
  t = term_i_28;
  x_72 = t;
  t = term_p_31;
  t = h_12(w_72, x_72, t);
  t = term_r_31;
  u_72 = t;
  t = term_i_28;
  v_72 = t;
  t = term_s_31;
  t = h_12(u_72, v_72, t);
  t = term_t_31;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_v_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_5, o_5, p_5, t);
      ;
      LocalPopChoice(x_31);
    }
  else
    {
      t = w_31;
      t = Option_3_0(q_5, r_5, s_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,h_73 = NULL,i_73 = NULL,l_10 = NULL;
  c_73 = t;
  {
    ATerm y_31 = t;
    int z_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_32;
        t = f_119(t);
        ;
        LocalPopChoice(z_31);
      }
    else
      {
        t = y_31;
      }
    t = c_73;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_73 = ATgetFirst((ATermList) t);
        f_73 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_73);
    d_73 = t;
    t = term_y_29;
    i_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_y_29, e_73);
    t = h_12(i_73, e_73, t);
    t = f_73;
    {
      ATerm s_73 (ATerm t)
      {
        ATerm b_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_32 = t;
            int e_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_73 = NULL;
                l_73 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_73;
                ;
                LocalPopChoice(e_32);
              }
            else
              {
                t = d_32;
                t = f_119(t);
                t = Cons_2_0(_id, s_73, t);
              }
            ;
            LocalPopChoice(c_32);
          }
        else
          {
            t = b_32;
            {
              ATerm o_73 = NULL,p_73 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_73 = ATgetFirst((ATermList) t);
                  p_73 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(p_73), (ATerm) ATmakeAppl(sym_Undefined_1, o_73));
            }
          }
        return(t);
      }
      t = s_73(t);
      h_73 = t;
      t = (ATerm) ATinsert(CheckATermList(h_73), (ATerm) ATmakeAppl(sym_Program_1, e_73));
      l_10 = t;
      t = SSLsetAnnotations(l_10, d_73);
    }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm e_74 = NULL;
  e_74 = t;
  if(match_string(t, "--help"))
    {
      t = e_74;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_74;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_74;
        }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL;
  t = term_o_30;
  f_74 = t;
  t = term_i_28;
  g_74 = t;
  t = term_g_32;
  t = h_12(f_74, g_74, t);
  t = term_h_32;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_i_32;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL;
  z_73 = t;
  t = term_o_29;
  b_74 = t;
  t = term_p_29;
  c_74 = t;
  t = (ATerm) ATempty;
  d_74 = t;
  t = SSL_table_put(b_74, c_74, d_74);
  t = z_73;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm j_32 = t;
      int k_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_119(t);
          ;
          LocalPopChoice(k_32);
        }
      else
        {
          t = j_32;
          {
            ATerm l_32 = t;
            int m_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_5, v_5, u_6, t);
                ;
                LocalPopChoice(m_32);
              }
            else
              {
                t = l_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_5, t);
    {
      ATerm n_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_74 = NULL;
          n_74 = t;
          {
            ATerm p_32 = t;
            int q_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_9 = NULL;
                t = n_74;
                {
                  ATerm r_32 = t;
                  int t_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_30;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_32);
                    }
                  else
                    {
                      t = r_32;
                      t = fetch_1_0(v_6, t);
                    }
                  t = n_74;
                  t = default_system_usage_0_0(t);
                  t = term_z_28;
                  s_9 = t;
                  t = SSL_exit(s_9);
                }
                ;
                LocalPopChoice(q_32);
              }
            else
              {
                t = p_32;
                {
                  ATerm w_9 = NULL;
                  t = term_o_31;
                  t = get_config_0_0(t);
                  t = n_74;
                  t = default_system_about_0_0(t);
                  t = term_z_28;
                  w_9 = t;
                  t = SSL_exit(w_9);
                }
              }
          }
          ;
          LocalPopChoice(o_32);
        }
      else
        {
          t = n_32;
          {
            ATerm u_32 = t;
            int v_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL;
                ATerm w_6 (ATerm t)
                {
                  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL,n_10 = NULL;
                  t_74 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      s_74 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(t_74);
                  r_74 = t;
                  t = s_74;
                  if(((x_73 != NULL) && (x_73 != t)))
                    _fail(t);
                  else
                    x_73 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, s_74);
                  n_10 = t;
                  t = SSLsetAnnotations(n_10, r_74);
                  return(t);
                }
                t = fetch_1_0(w_6, t);
                t = term_j_28;
                p_74 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_73)), term_w_32);
                q_74 = t;
                t = SSL_printnl(p_74, q_74);
                t = (ATerm) ATmakeAppl(sym__2, term_j_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_73)), term_w_32));
                t = default_system_usage_0_0(t);
                t = term_n_28;
                o_74 = t;
                t = SSL_exit(o_74);
                ;
                LocalPopChoice(v_32);
              }
            else
              {
                t = u_32;
              }
          }
        }
      y_73 = t;
      t = term_o_29;
      a_74 = t;
      t = SSL_table_destroy(a_74);
      t = y_73;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL;
  t = parse_options_1_0(e_117, t);
  y_74 = t;
  t = term_x_32;
  b_75 = t;
  t = SSL_table_create(b_75);
  t = term_x_32;
  z_74 = t;
  t = term_y_32;
  a_75 = t;
  t = SSL_table_put(z_74, a_75, y_74);
  t = y_74;
  t = g_117(t);
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(f_117, t);
        ;
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        {
          ATerm b_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_33);
            }
          else
            {
              t = b_33;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm d_33 = t;
  int f_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(f_33);
    }
  else
    {
      t = d_33;
      {
        ATerm g_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = g_33;
            {
              ATerm i_33 = t;
              int k_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_6, a_7, c_7, t);
                  ;
                  LocalPopChoice(k_33);
                }
              else
                {
                  t = i_33;
                  {
                    ATerm l_33 = t;
                    int m_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(m_33);
                      }
                    else
                      {
                        t = l_33;
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
ATerm y_6 (ATerm t)
{
  t = input_1_0(d_7, t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL;
  t = term_h_27;
  f_75 = t;
  t = term_i_28;
  g_75 = t;
  t = term_n_33;
  t = h_12(f_75, g_75, t);
  t = term_o_33;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_q_33;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = output_1_0(g_7, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,s_10 = NULL,r_10 = NULL;
  p_75 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_75);
  i_75 = t;
  t = j_75;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_75 = ATgetFirst((ATermList) t);
      m_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_75);
  k_75 = t;
  t = m_75;
  t = Cons_2_0(h_7, i_7, t);
  n_75 = t;
  t = (ATerm) ATinsert(CheckATermList(n_75), l_75);
  r_10 = t;
  t = SSLsetAnnotations(r_10, k_75);
  o_75 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_75);
  s_10 = t;
  t = SSLsetAnnotations(s_10, i_75);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,q_10 = NULL;
  t_75 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      r_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_75);
  q_75 = t;
  t = r_75;
  t = map_1_0(j_7, t);
  s_75 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_75);
  q_10 = t;
  t = SSLsetAnnotations(q_10, q_75);
  return(t);
}
ATerm i_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,p_10 = NULL;
  a_76 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      v_75 = ATgetArgument(t, 0);
      w_75 = ATgetArgument(t, 1);
      x_75 = ATgetArgument(t, 2);
      y_75 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_76);
  u_75 = t;
  t = y_75;
  t = topdown_1_0(k_7, t);
  t = simplify_0_0(t);
  z_75 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, v_75, w_75, x_75, z_75);
  p_10 = t;
  t = SSLsetAnnotations(p_10, u_75);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = LiftPrimArgs_0_0(t);
          ;
          LocalPopChoice(u_33);
        }
      else
        {
          t = t_33;
          {
            ATerm d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL;
            d_76 = t;
            if(match_cons(t, sym_CallT_3))
              {
                e_76 = ATgetArgument(t, 0);
                f_76 = ATgetArgument(t, 1);
                g_76 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_76;
            t = q_11(e_76, f_76, g_76, t);
          }
        }
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_6, default_usage_0_0, _id, y_6, t);
  return(t);
}
