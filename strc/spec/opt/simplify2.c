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
ATerm term_p_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_h_32;
ATerm term_g_32;
ATerm term_f_32;
ATerm term_z_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_d_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_n_29;
ATerm term_m_29;
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
ATerm term_w_28;
ATerm term_v_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_s_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_b_28;
ATerm term_y_27;
ATerm term_j_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_b_27;
ATerm term_y_26;
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
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym__2, term_x_28, term_y_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_28);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym__2, term_d_29, term_k_28);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym__2, term_n_29, term_o_29);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym__2, term_n_31, term_k_28);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(sym__2, term_r_31, term_k_28);
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_k_28);
  ATprotect(&(term_g_32));
  term_g_32 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_k_28);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm bottomup_1_0 (ATerm i_92 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm l_93 (ATerm), ATerm);
ATerm t_0 (ATerm c_0, ATerm);
ATerm conc_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
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
ATerm c_12 (ATerm g_25, ATerm h_25, ATerm i_25, ATerm);
ATerm genzip_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm s_107 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm n_58 (ATerm z_57, ATerm);
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
ATerm topdown_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm map_1_0 (ATerm c_107 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm);
ATerm g_12 (ATerm j_49, ATerm k_49, ATerm);
ATerm h_12 (ATerm x_52, ATerm y_52, ATerm);
ATerm j_12 (ATerm d_113 (ATerm), ATerm v_477, ATerm b_53, ATerm);
ATerm i_12 (ATerm t_52, ATerm u_52, ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm output_1_0 (ATerm m_117 (ATerm), ATerm);
ATerm o_63 (ATerm i_63, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm k_12 (ATerm z_52, ATerm);
ATerm l_12 (ATerm l_49, ATerm m_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_65 (ATerm z_63, ATerm);
ATerm b_65 (ATerm d_64, ATerm e_64, ATerm f_64, ATerm);
ATerm c_65 (ATerm n_64, ATerm o_64, ATerm p_64, ATerm);
ATerm m_12 (ATerm);
ATerm k_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm n_117 (ATerm), ATerm);
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
ATerm u_12 (ATerm a_54, ATerm b_54, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm a_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm s_12 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm b_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_12 (ATerm j_46, ATerm k_46, ATerm);
ATerm foldr_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_114 (ATerm), ATerm);
ATerm h_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm i_4 (ATerm);
ATerm need_help_1_0 (ATerm d_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm m_107 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_12 (ATerm j_40, ATerm k_40, ATerm);
ATerm debug_1_0 (ATerm b_113 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm m_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm r_12 (ATerm p_60, ATerm q_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_119 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm parse_options_1_0 (ATerm f_119 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm);
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
ATerm bottomup_1_0 (ATerm i_92 (ATerm), ATerm t)
{
  ATerm a_0 (ATerm t)
  {
    t = bottomup_1_0(i_92, t);
    return(t);
  }
  t = SRTS_all(a_0, t);
  t = i_92(t);
  return(t);
}
ATerm oncetd_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm l_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_93(t);
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
ATerm t_0 (ATerm c_0, ATerm t)
{
  ATerm e_0 = NULL;
  t = SSL_explode_term(c_0);
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_0;
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
            ATerm b_0 (ATerm t)
            {
              t = p_0;
              return(t);
            }
            t = o_0;
            t = at_end_1_0(b_0, t);
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
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
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
        t = n_0(t);
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
              t = map1_1_0(n_0, t);
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
          t = map1_1_0(n_0, t);
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
  ATerm r_18 = NULL,u_18 = NULL,w_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if(((ATgetType(b_8) == AT_LIST) && !(ATisEmpty(b_8))))
        {
          r_18 = ATgetFirst((ATermList) b_8);
          u_18 = (ATerm) ATgetNext((ATermList) b_8);
        }
      else
        _fail(t);
      {
        ATerm c_8 = ATgetArgument(t, 1);
        if(((ATgetType(c_8) == AT_LIST) && !(ATisEmpty(c_8))))
          {
            w_18 = ATgetFirst((ATermList) c_8);
            a_19 = (ATerm) ATgetNext((ATermList) c_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_18, w_18), (ATerm) ATmakeAppl(sym__2, u_18, a_19));
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_19), e_19);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL;
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_19), (ATerm) ATmakeAppl(sym_Match_1, h_19));
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
  ATerm i_28 = NULL,j_28 = NULL,m_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if(((ATgetType(f_8) == AT_LIST) && !(ATisEmpty(f_8))))
        {
          i_28 = ATgetFirst((ATermList) f_8);
          j_28 = (ATerm) ATgetNext((ATermList) f_8);
        }
      else
        _fail(t);
      {
        ATerm g_8 = ATgetArgument(t, 1);
        if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
          {
            m_28 = ATgetFirst((ATermList) g_8);
            n_28 = (ATerm) ATgetNext((ATermList) g_8);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_28, m_28), (ATerm) ATmakeAppl(sym__2, j_28, n_28));
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  if(match_cons(t, sym__2))
    {
      o_28 = ATgetArgument(t, 0);
      p_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_28), o_28);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  if(match_cons(t, sym__2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, q_28), (ATerm) ATmakeAppl(sym_Match_1, r_28));
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
        ATerm w_38 = NULL,x_38 = NULL;
        w_38 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm l_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        x_38 = t;
        t = SSLgetAnnotations(w_38);
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
        t = x_38;
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
  ATerm a_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_8), term_w_8));
  return(t);
}
ATerm r_1 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  c_51 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_51 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_51, term_w_8);
    }
  else
    {
      t = c_51;
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm n_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_51, term_w_8);
  return(t);
}
ATerm t_1 (ATerm t)
{
  ATerm o_51 = NULL,p_51 = NULL;
  p_51 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_51 = ATgetArgument(t, 0);
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, o_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_8), term_w_8));
            ;
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            t = p_51;
          }
      }
    }
  else
    {
      t = p_51;
    }
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm z_51 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_51, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_w_8), term_w_8));
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm a_52 = NULL,b_52 = NULL;
  b_52 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_52 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, a_52, term_w_8);
    }
  else
    {
      t = b_52;
    }
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,o_12 = NULL,p_12 = NULL,t_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
    b_13 = t;
    if(match_cons(t, sym_Test_1))
      {
        a_13 = ATgetArgument(t, 0);
        t = a_13;
        if(match_cons(t, sym_Id_0))
          {
            ATerm z_8 = t;
            int b_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_c_9;
                t = f_0(t);
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
                      ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
                      t = b_13;
                      t = new_0_0(t);
                      d_13 = t;
                      t = bottomup_1_0(f_0, t);
                      o_13 = t;
                      t = (ATerm) ATempty;
                      t = f_0(t);
                      p_13 = t;
                      t = (ATerm) ATinsert(CheckATermList(p_13), o_13);
                      t = f_0(t);
                      e_13 = t;
                      t = d_13;
                      t = bottomup_1_0(f_0, t);
                      n_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, n_13);
                      t = f_0(t);
                      m_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, m_13);
                      t = f_0(t);
                      g_13 = t;
                      t = a_13;
                      t = bottomup_1_0(f_0, t);
                      i_13 = t;
                      t = d_13;
                      t = bottomup_1_0(f_0, t);
                      l_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, l_13);
                      t = f_0(t);
                      k_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, k_13);
                      t = f_0(t);
                      j_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_13, j_13);
                      t = f_0(t);
                      h_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, g_13, h_13);
                      t = f_0(t);
                      f_13 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, e_13, f_13);
                      t = f_0(t);
                      ;
                      LocalPopChoice(f_9);
                    }
                  else
                    {
                      t = e_9;
                      t = b_13;
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
                    t = f_0(t);
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
                          ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
                          t = b_13;
                          t = new_0_0(t);
                          s_13 = t;
                          t = bottomup_1_0(f_0, t);
                          d_14 = t;
                          t = (ATerm) ATempty;
                          t = f_0(t);
                          e_14 = t;
                          t = (ATerm) ATinsert(CheckATermList(e_14), d_14);
                          t = f_0(t);
                          t_13 = t;
                          t = s_13;
                          t = bottomup_1_0(f_0, t);
                          c_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, c_14);
                          t = f_0(t);
                          b_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, b_14);
                          t = f_0(t);
                          v_13 = t;
                          t = a_13;
                          t = bottomup_1_0(f_0, t);
                          x_13 = t;
                          t = s_13;
                          t = bottomup_1_0(f_0, t);
                          a_14 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, a_14);
                          t = f_0(t);
                          z_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, z_13);
                          t = f_0(t);
                          y_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_13, y_13);
                          t = f_0(t);
                          w_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, v_13, w_13);
                          t = f_0(t);
                          u_13 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_13, u_13);
                          t = f_0(t);
                          ;
                          LocalPopChoice(k_9);
                        }
                      else
                        {
                          t = j_9;
                          t = b_13;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    x_12 = ATgetArgument(t, 0);
                    {
                      ATerm l_9 = t;
                      int m_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, x_12);
                          t = f_0(t);
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
                                ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
                                t = b_13;
                                t = new_0_0(t);
                                i_14 = t;
                                t = bottomup_1_0(f_0, t);
                                t_14 = t;
                                t = (ATerm) ATempty;
                                t = f_0(t);
                                u_14 = t;
                                t = (ATerm) ATinsert(CheckATermList(u_14), t_14);
                                t = f_0(t);
                                j_14 = t;
                                t = i_14;
                                t = bottomup_1_0(f_0, t);
                                s_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, s_14);
                                t = f_0(t);
                                r_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, r_14);
                                t = f_0(t);
                                l_14 = t;
                                t = a_13;
                                t = bottomup_1_0(f_0, t);
                                n_14 = t;
                                t = i_14;
                                t = bottomup_1_0(f_0, t);
                                q_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, q_14);
                                t = f_0(t);
                                p_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, p_14);
                                t = f_0(t);
                                o_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, n_14, o_14);
                                t = f_0(t);
                                m_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, l_14, m_14);
                                t = f_0(t);
                                k_14 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, j_14, k_14);
                                t = f_0(t);
                                ;
                                LocalPopChoice(o_9);
                              }
                            else
                              {
                                t = n_9;
                                t = b_13;
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
                        ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,e_15 = NULL,k_15 = NULL,m_15 = NULL,n_15 = NULL,r_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL;
                        t = b_13;
                        t = new_0_0(t);
                        x_14 = t;
                        t = bottomup_1_0(f_0, t);
                        x_15 = t;
                        t = (ATerm) ATempty;
                        t = f_0(t);
                        y_15 = t;
                        t = (ATerm) ATinsert(CheckATermList(y_15), x_15);
                        t = f_0(t);
                        y_14 = t;
                        t = x_14;
                        t = bottomup_1_0(f_0, t);
                        w_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, w_15);
                        t = f_0(t);
                        v_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, v_15);
                        t = f_0(t);
                        e_15 = t;
                        t = a_13;
                        t = bottomup_1_0(f_0, t);
                        m_15 = t;
                        t = x_14;
                        t = bottomup_1_0(f_0, t);
                        u_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, u_15);
                        t = f_0(t);
                        r_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, r_15);
                        t = f_0(t);
                        n_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_15, n_15);
                        t = f_0(t);
                        k_15 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, e_15, k_15);
                        t = f_0(t);
                        z_14 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, y_14, z_14);
                        t = f_0(t);
                        ;
                        LocalPopChoice(q_9);
                      }
                    else
                      {
                        t = p_9;
                        t = b_13;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            a_13 = ATgetArgument(t, 0);
            t = a_13;
            if(match_cons(t, sym_Id_0))
              {
                ATerm r_9 = t;
                int t_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_9;
                    t = f_0(t);
                    ;
                    LocalPopChoice(t_9);
                  }
                else
                  {
                    t = r_9;
                    t = b_13;
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
                        t = f_0(t);
                        ;
                        LocalPopChoice(v_9);
                      }
                    else
                      {
                        t = u_9;
                        t = b_13;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        x_12 = ATgetArgument(t, 0);
                        {
                          ATerm x_9 = t;
                          int y_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, x_12);
                              t = f_0(t);
                              ;
                              LocalPopChoice(y_9);
                            }
                          else
                            {
                              t = x_9;
                              t = b_13;
                            }
                        }
                      }
                    else
                      {
                        t = b_13;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                a_13 = ATgetArgument(t, 0);
                z_12 = ATgetArgument(t, 1);
                t = z_12;
                if(match_cons(t, sym_Id_0))
                  {
                    t = a_13;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = z_12;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = a_13;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                x_12 = ATgetArgument(t, 0);
                                y_12 = ATgetArgument(t, 1);
                                t = a_13;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    x_12 = ATgetArgument(t, 0);
                                    y_12 = ATgetArgument(t, 1);
                                    t = a_13;
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
                    if(match_cons(t, sym_Seq_2))
                      {
                        v_12 = ATgetArgument(t, 0);
                        w_12 = ATgetArgument(t, 1);
                        t = v_12;
                        if(match_cons(t, sym_Match_1))
                          {
                            t_12 = ATgetArgument(t, 0);
                            t = t_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                o_12 = ATgetArgument(t, 0);
                                a_12 = ATgetArgument(t, 1);
                                t = a_13;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_12;
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
                                            t = f_0(t);
                                            ;
                                            LocalPopChoice(c_10);
                                          }
                                        else
                                          {
                                            t = b_10;
                                            t = b_13;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            x_12 = ATgetArgument(t, 0);
                                            y_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_10 = t;
                                              int g_10 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm b_18 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                  t = f_0(t);
                                                  b_18 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, b_18);
                                                  t = f_0(t);
                                                  ;
                                                  LocalPopChoice(g_10);
                                                }
                                              else
                                                {
                                                  t = e_10;
                                                  t = b_13;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                t = x_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    p_12 = ATgetArgument(t, 0);
                                                    b_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_10 = t;
                                                      int k_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, p_12, o_12);
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
                                                            t = bottomup_1_0(f_0, t);
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
                                                                ATerm q_18 = NULL;
                                                                t = o_12;
                                                                if((p_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, b_12, a_12);
                                                                t = genzip_4_0(r_0, s_0, v_0, c_1, t);
                                                                q_18 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, p_12, b_12)), w_12));
                                                                t = bottomup_1_0(f_0, t);
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
                                                                      ATerm k_19 = NULL;
                                                                      t = t_12;
                                                                      if((x_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, x_12);
                                                                      t = f_0(t);
                                                                      k_19 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_19, w_12);
                                                                      t = f_0(t);
                                                                      ;
                                                                      LocalPopChoice(v_10);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = u_10;
                                                                      t = b_13;
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
                                                        ATerm u_19 = NULL;
                                                        t = t_12;
                                                        if((x_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, x_12);
                                                        t = f_0(t);
                                                        u_19 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_19, w_12);
                                                        t = f_0(t);
                                                        ;
                                                        LocalPopChoice(x_10);
                                                      }
                                                    else
                                                      {
                                                        t = w_10;
                                                        t = b_13;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    x_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm y_10 = t;
                                                      int z_10 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_20 = NULL;
                                                          t = t_12;
                                                          if((x_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, x_12);
                                                          t = f_0(t);
                                                          e_20 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_20, w_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(z_10);
                                                        }
                                                      else
                                                        {
                                                          t = y_10;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm a_11 = t;
                                                          int b_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_20 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                              t = f_0(t);
                                                              r_20 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, r_20);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(b_11);
                                                            }
                                                          else
                                                            {
                                                              t = a_11;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_13;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = a_13;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_12;
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
                                            t = f_0(t);
                                            ;
                                            LocalPopChoice(d_11);
                                          }
                                        else
                                          {
                                            t = c_11;
                                            t = b_13;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            x_12 = ATgetArgument(t, 0);
                                            y_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm e_11 = t;
                                              int f_11 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm d_21 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                  t = f_0(t);
                                                  d_21 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, d_21);
                                                  t = f_0(t);
                                                  ;
                                                  LocalPopChoice(f_11);
                                                }
                                              else
                                                {
                                                  t = e_11;
                                                  t = b_13;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm g_11 = t;
                                                  int h_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_21 = NULL;
                                                      t = t_12;
                                                      if((x_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, x_12);
                                                      t = f_0(t);
                                                      i_21 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_21, w_12);
                                                      t = f_0(t);
                                                      ;
                                                      LocalPopChoice(h_11);
                                                    }
                                                  else
                                                    {
                                                      t = g_11;
                                                      t = b_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    x_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm i_11 = t;
                                                      int j_11 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm o_21 = NULL;
                                                          t = t_12;
                                                          if((x_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_12);
                                                          t = f_0(t);
                                                          o_21 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_21, w_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(j_11);
                                                        }
                                                      else
                                                        {
                                                          t = i_11;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm k_11 = t;
                                                          int l_11 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm z_21 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                              t = f_0(t);
                                                              z_21 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, z_21);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(l_11);
                                                            }
                                                          else
                                                            {
                                                              t = k_11;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_13;
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
                                    o_12 = ATgetArgument(t, 0);
                                    t = a_13;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_12;
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
                                                t = f_0(t);
                                                ;
                                                LocalPopChoice(n_11);
                                              }
                                            else
                                              {
                                                t = m_11;
                                                t = b_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                y_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm o_11 = t;
                                                  int p_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm s_22 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                      t = f_0(t);
                                                      s_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, s_22);
                                                      t = f_0(t);
                                                      ;
                                                      LocalPopChoice(p_11);
                                                    }
                                                  else
                                                    {
                                                      t = o_11;
                                                      t = b_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_11 = t;
                                                int r_11 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm s_11 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(r_11);
                                                    {
                                                      ATerm c_13 = t;
                                                      int q_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm w_22 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_12);
                                                          t = f_0(t);
                                                          w_22 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, w_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(q_13);
                                                        }
                                                      else
                                                        {
                                                          t = c_13;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = q_11;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        t = x_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            p_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm r_13 = t;
                                                              int f_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_23 = NULL,e_23 = NULL;
                                                                  t = o_12;
                                                                  if((p_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_12);
                                                                  t = f_0(t);
                                                                  e_23 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, e_23);
                                                                  t = f_0(t);
                                                                  d_23 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_23, w_12);
                                                                  t = f_0(t);
                                                                  ;
                                                                  LocalPopChoice(f_14);
                                                                }
                                                              else
                                                                {
                                                                  t = r_13;
                                                                  t = b_13;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_13;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            x_12 = ATgetArgument(t, 0);
                                                            y_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm g_14 = t;
                                                              int h_14 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm s_23 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                                  t = f_0(t);
                                                                  s_23 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, s_23);
                                                                  t = f_0(t);
                                                                  ;
                                                                  LocalPopChoice(h_14);
                                                                }
                                                              else
                                                                {
                                                                  t = g_14;
                                                                  t = b_13;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_13;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_13;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm v_14 = t;
                                            int w_14 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = f_0(t);
                                                ;
                                                LocalPopChoice(w_14);
                                              }
                                            else
                                              {
                                                t = v_14;
                                                t = b_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                y_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_15 = t;
                                                  int b_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm h_24 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                      t = f_0(t);
                                                      h_24 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, h_24);
                                                      t = f_0(t);
                                                      ;
                                                      LocalPopChoice(b_15);
                                                    }
                                                  else
                                                    {
                                                      t = a_15;
                                                      t = b_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm c_15 = t;
                                                int d_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(d_15);
                                                    {
                                                      ATerm g_15 = t;
                                                      int h_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm n_24 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_12);
                                                          t = f_0(t);
                                                          n_24 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_24, w_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(h_15);
                                                        }
                                                      else
                                                        {
                                                          t = g_15;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = c_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_15 = t;
                                                          int j_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm b_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                              t = f_0(t);
                                                              b_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, b_26);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(j_15);
                                                            }
                                                          else
                                                            {
                                                              t = i_15;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_13;
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
                                    d_12 = ATgetArgument(t, 1);
                                    e_12 = ATgetArgument(t, 2);
                                    t = a_13;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_15 = t;
                                            int o_15 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = f_0(t);
                                                ;
                                                LocalPopChoice(o_15);
                                              }
                                            else
                                              {
                                                t = l_15;
                                                t = b_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                y_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm p_15 = t;
                                                  int q_15 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm k_26 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                      t = f_0(t);
                                                      k_26 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, k_26);
                                                      t = f_0(t);
                                                      ;
                                                      LocalPopChoice(q_15);
                                                    }
                                                  else
                                                    {
                                                      t = p_15;
                                                      t = b_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm s_15 = t;
                                                int t_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm z_15 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(t_15);
                                                    {
                                                      ATerm a_16 = t;
                                                      int b_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm q_26 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, t_12, d_12, e_12);
                                                          t = f_0(t);
                                                          q_26 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, q_26, w_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(b_16);
                                                        }
                                                      else
                                                        {
                                                          t = a_16;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_15;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm c_16 = t;
                                                          int d_16 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm v_26 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                              t = f_0(t);
                                                              v_26 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, v_26);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(d_16);
                                                            }
                                                          else
                                                            {
                                                              t = c_16;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_13;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_13;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm e_16 = t;
                                            int f_16 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = f_0(t);
                                                ;
                                                LocalPopChoice(f_16);
                                              }
                                            else
                                              {
                                                t = e_16;
                                                t = b_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                y_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm g_16 = t;
                                                  int h_16 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_27 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                      t = f_0(t);
                                                      g_27 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, g_27);
                                                      t = f_0(t);
                                                      ;
                                                      LocalPopChoice(h_16);
                                                    }
                                                  else
                                                    {
                                                      t = g_16;
                                                      t = b_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    x_12 = ATgetArgument(t, 0);
                                                    y_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm i_16 = t;
                                                      int j_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm l_27 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                          t = f_0(t);
                                                          l_27 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, l_27);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(j_16);
                                                        }
                                                      else
                                                        {
                                                          t = i_16;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_13;
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
                            v_12 = ATgetArgument(t, 0);
                            t = v_12;
                            if(match_cons(t, sym_Op_2))
                              {
                                t_12 = ATgetArgument(t, 0);
                                d_12 = ATgetArgument(t, 1);
                                t = a_13;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm k_16 = t;
                                        int l_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_i_9;
                                            t = f_0(t);
                                            ;
                                            LocalPopChoice(l_16);
                                          }
                                        else
                                          {
                                            t = k_16;
                                            t = b_13;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            x_12 = ATgetArgument(t, 0);
                                            y_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm m_16 = t;
                                              int n_16 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm c_28 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                  t = f_0(t);
                                                  c_28 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, c_28);
                                                  t = f_0(t);
                                                  ;
                                                  LocalPopChoice(n_16);
                                                }
                                              else
                                                {
                                                  t = m_16;
                                                  t = b_13;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                t = x_12;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    p_12 = ATgetArgument(t, 0);
                                                    b_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm o_16 = t;
                                                      int p_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, p_12, t_12);
                                                          {
                                                            ATerm q_16 = t;
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
                                                                t = q_16;
                                                              }
                                                            t = term_i_9;
                                                            t = bottomup_1_0(f_0, t);
                                                          }
                                                          ;
                                                          LocalPopChoice(p_16);
                                                        }
                                                      else
                                                        {
                                                          t = o_16;
                                                          {
                                                            ATerm r_16 = t;
                                                            int s_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm h_28 = NULL;
                                                                t = t_12;
                                                                if((p_12 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, b_12, d_12);
                                                                t = genzip_4_0(d_1, e_1, j_1, k_1, t);
                                                                h_28 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_28), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, p_12, b_12)));
                                                                t = bottomup_1_0(f_0, t);
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
                                                                      t = v_12;
                                                                      if((x_12 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, x_12);
                                                                      t = f_0(t);
                                                                      ;
                                                                      LocalPopChoice(u_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = t_16;
                                                                      t = b_13;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm v_16 = t;
                                                    int w_16 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = v_12;
                                                        if((x_12 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, x_12);
                                                        t = f_0(t);
                                                        ;
                                                        LocalPopChoice(w_16);
                                                      }
                                                    else
                                                      {
                                                        t = v_16;
                                                        t = b_13;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    x_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm x_16 = t;
                                                      int y_16 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = v_12;
                                                          if((x_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, x_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(y_16);
                                                        }
                                                      else
                                                        {
                                                          t = x_16;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_16 = t;
                                                          int a_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm h_29 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                              t = f_0(t);
                                                              h_29 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, h_29);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(a_17);
                                                            }
                                                          else
                                                            {
                                                              t = z_16;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_13;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = a_13;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_12;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm b_17 = t;
                                        int c_17 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_i_9;
                                            t = f_0(t);
                                            ;
                                            LocalPopChoice(c_17);
                                          }
                                        else
                                          {
                                            t = b_17;
                                            t = b_13;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            x_12 = ATgetArgument(t, 0);
                                            y_12 = ATgetArgument(t, 1);
                                            {
                                              ATerm d_17 = t;
                                              int e_17 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm s_29 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                  t = f_0(t);
                                                  s_29 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, s_29);
                                                  t = f_0(t);
                                                  ;
                                                  LocalPopChoice(e_17);
                                                }
                                              else
                                                {
                                                  t = d_17;
                                                  t = b_13;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                {
                                                  ATerm f_17 = t;
                                                  int g_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = v_12;
                                                      if((x_12 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, x_12);
                                                      t = f_0(t);
                                                      ;
                                                      LocalPopChoice(g_17);
                                                    }
                                                  else
                                                    {
                                                      t = f_17;
                                                      t = b_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    x_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm h_17 = t;
                                                      int i_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = v_12;
                                                          if((x_12 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, x_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(i_17);
                                                        }
                                                      else
                                                        {
                                                          t = h_17;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm j_17 = t;
                                                          int k_17 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_30 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                              t = f_0(t);
                                                              f_30 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, f_30);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(k_17);
                                                            }
                                                          else
                                                            {
                                                              t = j_17;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_13;
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
                                v_12 = ATgetArgument(t, 0);
                                t = v_12;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    t_12 = ATgetArgument(t, 0);
                                    t = a_13;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm l_17 = t;
                                            int m_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = f_0(t);
                                                ;
                                                LocalPopChoice(m_17);
                                              }
                                            else
                                              {
                                                t = l_17;
                                                t = b_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                y_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm n_17 = t;
                                                  int o_17 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_30 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                      t = f_0(t);
                                                      o_30 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, o_30);
                                                      t = f_0(t);
                                                      ;
                                                      LocalPopChoice(o_17);
                                                    }
                                                  else
                                                    {
                                                      t = n_17;
                                                      t = b_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm p_17 = t;
                                                int q_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm r_17 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(q_17);
                                                    {
                                                      ATerm s_17 = t;
                                                      int t_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(t_17);
                                                        }
                                                      else
                                                        {
                                                          t = s_17;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = p_17;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        t = x_12;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            p_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm u_17 = t;
                                                              int v_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm t_30 = NULL;
                                                                  t = t_12;
                                                                  if((p_12 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, p_12);
                                                                  t = f_0(t);
                                                                  t_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, t_30);
                                                                  t = f_0(t);
                                                                  ;
                                                                  LocalPopChoice(v_17);
                                                                }
                                                              else
                                                                {
                                                                  t = u_17;
                                                                  t = b_13;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_13;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            x_12 = ATgetArgument(t, 0);
                                                            y_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm w_17 = t;
                                                              int x_17 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm z_30 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                                  t = f_0(t);
                                                                  z_30 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, z_30);
                                                                  t = f_0(t);
                                                                  ;
                                                                  LocalPopChoice(x_17);
                                                                }
                                                              else
                                                                {
                                                                  t = w_17;
                                                                  t = b_13;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_13;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_13;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_17 = t;
                                            int z_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = f_0(t);
                                                ;
                                                LocalPopChoice(z_17);
                                              }
                                            else
                                              {
                                                t = y_17;
                                                t = b_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                y_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm a_18 = t;
                                                  int c_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm i_31 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                      t = f_0(t);
                                                      i_31 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, i_31);
                                                      t = f_0(t);
                                                      ;
                                                      LocalPopChoice(c_18);
                                                    }
                                                  else
                                                    {
                                                      t = a_18;
                                                      t = b_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm d_18 = t;
                                                int e_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm f_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(e_18);
                                                    {
                                                      ATerm g_18 = t;
                                                      int h_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, v_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(h_18);
                                                        }
                                                      else
                                                        {
                                                          t = g_18;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = d_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm i_18 = t;
                                                          int j_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_31 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                              t = f_0(t);
                                                              p_31 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, p_31);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(j_18);
                                                            }
                                                          else
                                                            {
                                                              t = i_18;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_13;
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
                                    v_12 = ATgetArgument(t, 0);
                                    w_12 = ATgetArgument(t, 1);
                                    f_12 = ATgetArgument(t, 2);
                                    t = a_13;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_12;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm k_18 = t;
                                            int l_18 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = f_0(t);
                                                ;
                                                LocalPopChoice(l_18);
                                              }
                                            else
                                              {
                                                t = k_18;
                                                t = b_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                y_12 = ATgetArgument(t, 1);
                                                {
                                                  ATerm m_18 = t;
                                                  int n_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_32 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                      t = f_0(t);
                                                      a_32 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, a_32);
                                                      t = f_0(t);
                                                      ;
                                                      LocalPopChoice(n_18);
                                                    }
                                                  else
                                                    {
                                                      t = m_18;
                                                      t = b_13;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm o_18 = t;
                                                int p_18 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm s_18 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(p_18);
                                                    {
                                                      ATerm t_18 = t;
                                                      int v_18 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, v_12, w_12, f_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(v_18);
                                                        }
                                                      else
                                                        {
                                                          t = t_18;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = o_18;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm x_18 = t;
                                                          int y_18 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                              t = f_0(t);
                                                              n_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, n_32);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(y_18);
                                                            }
                                                          else
                                                            {
                                                              t = x_18;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_13;
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
                                        v_12 = ATgetArgument(t, 0);
                                        w_12 = ATgetArgument(t, 1);
                                        t = a_13;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = z_12;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm z_18 = t;
                                                int b_19 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_i_9;
                                                    t = f_0(t);
                                                    ;
                                                    LocalPopChoice(b_19);
                                                  }
                                                else
                                                  {
                                                    t = z_18;
                                                    {
                                                      ATerm c_19 = t;
                                                      int d_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, w_12);
                                                          t = f_0(t);
                                                          b_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, v_12, b_33);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(d_19);
                                                        }
                                                      else
                                                        {
                                                          t = c_19;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    x_12 = ATgetArgument(t, 0);
                                                    y_12 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm i_19 = t;
                                                      int j_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_33 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                          t = f_0(t);
                                                          g_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, g_33);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(j_19);
                                                        }
                                                      else
                                                        {
                                                          t = i_19;
                                                          {
                                                            ATerm l_19 = t;
                                                            int m_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_33 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, w_12);
                                                                t = f_0(t);
                                                                o_33 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, v_12, o_33);
                                                                t = f_0(t);
                                                                ;
                                                                LocalPopChoice(m_19);
                                                              }
                                                            else
                                                              {
                                                                t = l_19;
                                                                t = b_13;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm n_19 = t;
                                                          int o_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, w_12);
                                                              t = f_0(t);
                                                              t_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, v_12, t_33);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(o_19);
                                                            }
                                                          else
                                                            {
                                                              t = n_19;
                                                              {
                                                                ATerm p_19 = t;
                                                                int q_19 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm x_33 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                                    t = f_0(t);
                                                                    x_33 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, x_33);
                                                                    t = f_0(t);
                                                                    ;
                                                                    LocalPopChoice(q_19);
                                                                  }
                                                                else
                                                                  {
                                                                    t = p_19;
                                                                    t = b_13;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm r_19 = t;
                                                        int s_19 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm j_34 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, w_12);
                                                            t = f_0(t);
                                                            j_34 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, v_12, j_34);
                                                            t = f_0(t);
                                                            ;
                                                            LocalPopChoice(s_19);
                                                          }
                                                        else
                                                          {
                                                            t = r_19;
                                                            t = b_13;
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
                                            v_12 = ATgetArgument(t, 0);
                                            w_12 = ATgetArgument(t, 1);
                                            t = a_13;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm t_19 = t;
                                                    int v_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_i_9;
                                                        t = f_0(t);
                                                        ;
                                                        LocalPopChoice(v_19);
                                                      }
                                                    else
                                                      {
                                                        t = t_19;
                                                        {
                                                          ATerm w_19 = t;
                                                          int x_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm w_34 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, w_12);
                                                              t = f_0(t);
                                                              w_34 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_12, w_34);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(x_19);
                                                            }
                                                          else
                                                            {
                                                              t = w_19;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm y_19 = t;
                                                          int z_19 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm f_35 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                              t = f_0(t);
                                                              f_35 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, f_35);
                                                              t = f_0(t);
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
                                                                    ATerm j_35 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, w_12);
                                                                    t = f_0(t);
                                                                    j_35 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, v_12, j_35);
                                                                    t = f_0(t);
                                                                    ;
                                                                    LocalPopChoice(b_20);
                                                                  }
                                                                else
                                                                  {
                                                                    t = a_20;
                                                                    t = b_13;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            x_12 = ATgetArgument(t, 0);
                                                            y_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm c_20 = t;
                                                              int d_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm o_35 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, w_12);
                                                                  t = f_0(t);
                                                                  o_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_12, o_35);
                                                                  t = f_0(t);
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
                                                                        ATerm s_35 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                                        t = f_0(t);
                                                                        s_35 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, s_35);
                                                                        t = f_0(t);
                                                                        ;
                                                                        LocalPopChoice(g_20);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_20;
                                                                        t = b_13;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm h_20 = t;
                                                            int i_20 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_35 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, w_12);
                                                                t = f_0(t);
                                                                x_35 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, v_12, x_35);
                                                                t = f_0(t);
                                                                ;
                                                                LocalPopChoice(i_20);
                                                              }
                                                            else
                                                              {
                                                                t = h_20;
                                                                t = b_13;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = a_13;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_12;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm j_20 = t;
                                                    int k_20 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_i_9;
                                                        t = f_0(t);
                                                        ;
                                                        LocalPopChoice(k_20);
                                                      }
                                                    else
                                                      {
                                                        t = j_20;
                                                        t = b_13;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        x_12 = ATgetArgument(t, 0);
                                                        y_12 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm l_20 = t;
                                                          int m_20 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm g_36 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                              t = f_0(t);
                                                              g_36 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, g_36);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(m_20);
                                                            }
                                                          else
                                                            {
                                                              t = l_20;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            x_12 = ATgetArgument(t, 0);
                                                            y_12 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm n_20 = t;
                                                              int o_20 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm l_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_12, z_12);
                                                                  t = f_0(t);
                                                                  l_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_12, l_36);
                                                                  t = f_0(t);
                                                                  ;
                                                                  LocalPopChoice(o_20);
                                                                }
                                                              else
                                                                {
                                                                  t = n_20;
                                                                  t = b_13;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_13;
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
                    a_13 = ATgetArgument(t, 0);
                    z_12 = ATgetArgument(t, 1);
                    t = z_12;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = a_13;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm p_20 = t;
                            int q_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_c_9;
                                t = f_0(t);
                                ;
                                LocalPopChoice(q_20);
                              }
                            else
                              {
                                t = p_20;
                                t = a_13;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    x_12 = ATgetArgument(t, 0);
                                    y_12 = ATgetArgument(t, 1);
                                    t = a_13;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        x_12 = ATgetArgument(t, 0);
                                        t = a_13;
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
                        t = a_13;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm s_20 = t;
                            int t_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_c_9;
                                t = f_0(t);
                                ;
                                LocalPopChoice(t_20);
                              }
                            else
                              {
                                t = s_20;
                                {
                                  ATerm u_20 = t;
                                  int v_20 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = z_12;
                                      if((a_13 != t))
                                        {
                                          _fail(t);
                                        }
                                      ;
                                      LocalPopChoice(v_20);
                                    }
                                  else
                                    {
                                      t = u_20;
                                      t = b_13;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_12;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    x_12 = ATgetArgument(t, 0);
                                    y_12 = ATgetArgument(t, 1);
                                    {
                                      ATerm w_20 = t;
                                      int x_20 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm h_38 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, y_12, z_12);
                                          t = f_0(t);
                                          h_38 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, x_12, h_38);
                                          t = f_0(t);
                                          ;
                                          LocalPopChoice(x_20);
                                        }
                                      else
                                        {
                                          t = w_20;
                                          {
                                            ATerm y_20 = t;
                                            int z_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_12;
                                                if((a_13 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                ;
                                                LocalPopChoice(z_20);
                                              }
                                            else
                                              {
                                                t = y_20;
                                                t = b_13;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        x_12 = ATgetArgument(t, 0);
                                        {
                                          ATerm a_21 = t;
                                          int b_21 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = z_12;
                                              if((a_13 != t))
                                                {
                                                  _fail(t);
                                                }
                                              ;
                                              LocalPopChoice(b_21);
                                            }
                                          else
                                            {
                                              t = a_21;
                                              {
                                                ATerm c_21 = t;
                                                int e_21 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = x_12;
                                                    t = topdown_1_0(l_1, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, x_12);
                                                    t = bottomup_1_0(f_0, t);
                                                    ;
                                                    LocalPopChoice(e_21);
                                                  }
                                                else
                                                  {
                                                    t = c_21;
                                                    t = b_13;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm f_21 = t;
                                        int g_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = z_12;
                                            if((a_13 != t))
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(g_21);
                                          }
                                        else
                                          {
                                            t = f_21;
                                            t = b_13;
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
                        a_13 = ATgetArgument(t, 0);
                        z_12 = ATgetArgument(t, 1);
                        t = z_12;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = a_13;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm h_21 = t;
                                int j_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_c_9;
                                    t = f_0(t);
                                    ;
                                    LocalPopChoice(j_21);
                                  }
                                else
                                  {
                                    t = h_21;
                                    t = z_12;
                                  }
                              }
                            else
                              {
                                ATerm k_21 = t;
                                int l_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_c_9;
                                    t = f_0(t);
                                    ;
                                    LocalPopChoice(l_21);
                                  }
                                else
                                  {
                                    t = k_21;
                                    t = b_13;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = a_13;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm m_21 = t;
                                    int n_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_i_9;
                                        t = f_0(t);
                                        ;
                                        LocalPopChoice(n_21);
                                      }
                                    else
                                      {
                                        t = m_21;
                                        t = z_12;
                                      }
                                  }
                                else
                                  {
                                    ATerm p_21 = t;
                                    int q_21 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_i_9;
                                        t = f_0(t);
                                        ;
                                        LocalPopChoice(q_21);
                                      }
                                    else
                                      {
                                        t = p_21;
                                        t = b_13;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    v_12 = ATgetArgument(t, 0);
                                    w_12 = ATgetArgument(t, 1);
                                    t = a_13;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_12;
                                      }
                                    else
                                      {
                                        ATerm r_21 = t;
                                        int s_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm e_40 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, a_13, v_12);
                                            t = conc_0_0(t);
                                            e_40 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, e_40, w_12);
                                            t = bottomup_1_0(f_0, t);
                                            ;
                                            LocalPopChoice(s_21);
                                          }
                                        else
                                          {
                                            t = r_21;
                                            t = b_13;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_13;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_12;
                                      }
                                    else
                                      {
                                        t = b_13;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm t_21 = t;
                        int u_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm v_21 = ATgetArgument(t, 0);
                                z_12 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(u_21);
                            t = z_12;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm w_21 = t;
                                int x_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_c_9;
                                    t = f_0(t);
                                    ;
                                    LocalPopChoice(x_21);
                                  }
                                else
                                  {
                                    t = w_21;
                                    t = b_13;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm y_21 = t;
                                    int a_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_i_9;
                                        t = f_0(t);
                                        ;
                                        LocalPopChoice(a_22);
                                      }
                                    else
                                      {
                                        t = y_21;
                                        t = b_13;
                                      }
                                  }
                                else
                                  {
                                    t = b_13;
                                  }
                              }
                          }
                        else
                          {
                            t = t_21;
                            if(match_cons(t, sym_All_1))
                              {
                                a_13 = ATgetArgument(t, 0);
                                t = a_13;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm b_22 = t;
                                    int c_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_c_9;
                                        t = f_0(t);
                                        ;
                                        LocalPopChoice(c_22);
                                      }
                                    else
                                      {
                                        t = b_22;
                                        t = b_13;
                                      }
                                  }
                                else
                                  {
                                    t = b_13;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    a_13 = ATgetArgument(t, 0);
                                    t = a_13;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm d_22 = t;
                                        int e_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_c_9;
                                            t = f_0(t);
                                            ;
                                            LocalPopChoice(e_22);
                                          }
                                        else
                                          {
                                            t = d_22;
                                            {
                                              ATerm f_22 = t;
                                              int g_22 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,z_40 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
                                                  t = b_13;
                                                  t = new_0_0(t);
                                                  u_40 = t;
                                                  t = bottomup_1_0(f_0, t);
                                                  m_41 = t;
                                                  t = (ATerm) ATempty;
                                                  t = f_0(t);
                                                  n_41 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(n_41), m_41);
                                                  t = f_0(t);
                                                  v_40 = t;
                                                  t = u_40;
                                                  t = bottomup_1_0(f_0, t);
                                                  l_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, l_41);
                                                  t = f_0(t);
                                                  j_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_41);
                                                  t = f_0(t);
                                                  z_40 = t;
                                                  t = a_13;
                                                  t = bottomup_1_0(f_0, t);
                                                  d_41 = t;
                                                  t = u_40;
                                                  t = bottomup_1_0(f_0, t);
                                                  i_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, i_41);
                                                  t = f_0(t);
                                                  h_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, h_41);
                                                  t = f_0(t);
                                                  e_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, d_41, e_41);
                                                  t = f_0(t);
                                                  c_41 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_40, c_41);
                                                  t = f_0(t);
                                                  w_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_40, w_40);
                                                  t = f_0(t);
                                                  ;
                                                  LocalPopChoice(g_22);
                                                }
                                              else
                                                {
                                                  t = f_22;
                                                  t = b_13;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_22 = t;
                                            int i_22 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_i_9;
                                                t = f_0(t);
                                                ;
                                                LocalPopChoice(i_22);
                                              }
                                            else
                                              {
                                                t = h_22;
                                                {
                                                  ATerm j_22 = t;
                                                  int k_22 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
                                                      t = b_13;
                                                      t = new_0_0(t);
                                                      q_41 = t;
                                                      t = bottomup_1_0(f_0, t);
                                                      d_42 = t;
                                                      t = (ATerm) ATempty;
                                                      t = f_0(t);
                                                      e_42 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(e_42), d_42);
                                                      t = f_0(t);
                                                      r_41 = t;
                                                      t = q_41;
                                                      t = bottomup_1_0(f_0, t);
                                                      c_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, c_42);
                                                      t = f_0(t);
                                                      b_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, b_42);
                                                      t = f_0(t);
                                                      t_41 = t;
                                                      t = a_13;
                                                      t = bottomup_1_0(f_0, t);
                                                      v_41 = t;
                                                      t = q_41;
                                                      t = bottomup_1_0(f_0, t);
                                                      a_42 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, a_42);
                                                      t = f_0(t);
                                                      z_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, z_41);
                                                      t = f_0(t);
                                                      y_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_41, y_41);
                                                      t = f_0(t);
                                                      u_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_41, u_41);
                                                      t = f_0(t);
                                                      s_41 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, r_41, s_41);
                                                      t = f_0(t);
                                                      ;
                                                      LocalPopChoice(k_22);
                                                    }
                                                  else
                                                    {
                                                      t = j_22;
                                                      t = b_13;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                x_12 = ATgetArgument(t, 0);
                                                y_12 = ATgetArgument(t, 1);
                                                t = y_12;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    v_11 = ATgetArgument(t, 0);
                                                    x_11 = ATgetArgument(t, 1);
                                                    t = v_11;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        w_11 = ATgetArgument(t, 0);
                                                        t = x_12;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            p_12 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm l_22 = t;
                                                              int m_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, w_11);
                                                                  t = f_0(t);
                                                                  l_42 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_42, x_11);
                                                                  t = f_0(t);
                                                                  k_42 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_12, k_42);
                                                                  t = f_0(t);
                                                                  j_42 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, j_42);
                                                                  t = f_0(t);
                                                                  ;
                                                                  LocalPopChoice(m_22);
                                                                }
                                                              else
                                                                {
                                                                  t = l_22;
                                                                  {
                                                                    ATerm n_22 = t;
                                                                    int o_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,j_43 = NULL;
                                                                        t = b_13;
                                                                        t = new_0_0(t);
                                                                        t_42 = t;
                                                                        t = bottomup_1_0(f_0, t);
                                                                        g_43 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = f_0(t);
                                                                        j_43 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(j_43), g_43);
                                                                        t = f_0(t);
                                                                        u_42 = t;
                                                                        t = t_42;
                                                                        t = bottomup_1_0(f_0, t);
                                                                        f_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, f_43);
                                                                        t = f_0(t);
                                                                        e_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, e_43);
                                                                        t = f_0(t);
                                                                        w_42 = t;
                                                                        t = a_13;
                                                                        t = bottomup_1_0(f_0, t);
                                                                        y_42 = t;
                                                                        t = t_42;
                                                                        t = bottomup_1_0(f_0, t);
                                                                        d_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_43);
                                                                        t = f_0(t);
                                                                        a_43 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_43);
                                                                        t = f_0(t);
                                                                        z_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_42, z_42);
                                                                        t = f_0(t);
                                                                        x_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, w_42, x_42);
                                                                        t = f_0(t);
                                                                        v_42 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, u_42, v_42);
                                                                        t = f_0(t);
                                                                        ;
                                                                        LocalPopChoice(o_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_22;
                                                                        t = b_13;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm p_22 = t;
                                                            int q_22 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,s_43 = NULL,t_43 = NULL,v_43 = NULL,w_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,i_44 = NULL;
                                                                t = b_13;
                                                                t = new_0_0(t);
                                                                n_43 = t;
                                                                t = bottomup_1_0(f_0, t);
                                                                b_44 = t;
                                                                t = (ATerm) ATempty;
                                                                t = f_0(t);
                                                                i_44 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(i_44), b_44);
                                                                t = f_0(t);
                                                                o_43 = t;
                                                                t = n_43;
                                                                t = bottomup_1_0(f_0, t);
                                                                a_44 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, a_44);
                                                                t = f_0(t);
                                                                z_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, z_43);
                                                                t = f_0(t);
                                                                q_43 = t;
                                                                t = a_13;
                                                                t = bottomup_1_0(f_0, t);
                                                                t_43 = t;
                                                                t = n_43;
                                                                t = bottomup_1_0(f_0, t);
                                                                y_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, y_43);
                                                                t = f_0(t);
                                                                w_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, w_43);
                                                                t = f_0(t);
                                                                v_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, t_43, v_43);
                                                                t = f_0(t);
                                                                s_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, q_43, s_43);
                                                                t = f_0(t);
                                                                p_43 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, o_43, p_43);
                                                                t = f_0(t);
                                                                ;
                                                                LocalPopChoice(q_22);
                                                              }
                                                            else
                                                              {
                                                                t = p_22;
                                                                t = b_13;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = x_12;
                                                        {
                                                          ATerm r_22 = t;
                                                          int t_22 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,s_44 = NULL,t_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
                                                              t = b_13;
                                                              t = new_0_0(t);
                                                              l_44 = t;
                                                              t = bottomup_1_0(f_0, t);
                                                              a_45 = t;
                                                              t = (ATerm) ATempty;
                                                              t = f_0(t);
                                                              b_45 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(b_45), a_45);
                                                              t = f_0(t);
                                                              n_44 = t;
                                                              t = l_44;
                                                              t = bottomup_1_0(f_0, t);
                                                              z_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, z_44);
                                                              t = f_0(t);
                                                              y_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, y_44);
                                                              t = f_0(t);
                                                              p_44 = t;
                                                              t = a_13;
                                                              t = bottomup_1_0(f_0, t);
                                                              s_44 = t;
                                                              t = l_44;
                                                              t = bottomup_1_0(f_0, t);
                                                              x_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, x_44);
                                                              t = f_0(t);
                                                              w_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, w_44);
                                                              t = f_0(t);
                                                              t_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_44, t_44);
                                                              t = f_0(t);
                                                              q_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, p_44, q_44);
                                                              t = f_0(t);
                                                              o_44 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, n_44, o_44);
                                                              t = f_0(t);
                                                              ;
                                                              LocalPopChoice(t_22);
                                                            }
                                                          else
                                                            {
                                                              t = r_22;
                                                              t = b_13;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = x_12;
                                                    {
                                                      ATerm u_22 = t;
                                                      int v_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,r_45 = NULL,u_45 = NULL,v_45 = NULL;
                                                          t = b_13;
                                                          t = new_0_0(t);
                                                          f_45 = t;
                                                          t = bottomup_1_0(f_0, t);
                                                          u_45 = t;
                                                          t = (ATerm) ATempty;
                                                          t = f_0(t);
                                                          v_45 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(v_45), u_45);
                                                          t = f_0(t);
                                                          g_45 = t;
                                                          t = f_45;
                                                          t = bottomup_1_0(f_0, t);
                                                          r_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, r_45);
                                                          t = f_0(t);
                                                          o_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, o_45);
                                                          t = f_0(t);
                                                          i_45 = t;
                                                          t = a_13;
                                                          t = bottomup_1_0(f_0, t);
                                                          k_45 = t;
                                                          t = f_45;
                                                          t = bottomup_1_0(f_0, t);
                                                          n_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, n_45);
                                                          t = f_0(t);
                                                          m_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, m_45);
                                                          t = f_0(t);
                                                          l_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, k_45, l_45);
                                                          t = f_0(t);
                                                          j_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, i_45, j_45);
                                                          t = f_0(t);
                                                          h_45 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, g_45, h_45);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(v_22);
                                                        }
                                                      else
                                                        {
                                                          t = u_22;
                                                          t = b_13;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    x_12 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm x_22 = t;
                                                      int y_22 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, x_12);
                                                          t = f_0(t);
                                                          ;
                                                          LocalPopChoice(y_22);
                                                        }
                                                      else
                                                        {
                                                          t = x_22;
                                                          {
                                                            ATerm z_22 = t;
                                                            int a_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,h_46 = NULL,m_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL;
                                                                t = b_13;
                                                                t = new_0_0(t);
                                                                c_46 = t;
                                                                t = bottomup_1_0(f_0, t);
                                                                x_46 = t;
                                                                t = (ATerm) ATempty;
                                                                t = f_0(t);
                                                                y_46 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(y_46), x_46);
                                                                t = f_0(t);
                                                                d_46 = t;
                                                                t = c_46;
                                                                t = bottomup_1_0(f_0, t);
                                                                w_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, w_46);
                                                                t = f_0(t);
                                                                t_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, t_46);
                                                                t = f_0(t);
                                                                h_46 = t;
                                                                t = a_13;
                                                                t = bottomup_1_0(f_0, t);
                                                                p_46 = t;
                                                                t = c_46;
                                                                t = bottomup_1_0(f_0, t);
                                                                s_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, s_46);
                                                                t = f_0(t);
                                                                r_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, r_46);
                                                                t = f_0(t);
                                                                q_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_46, q_46);
                                                                t = f_0(t);
                                                                m_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_46, m_46);
                                                                t = f_0(t);
                                                                e_46 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, d_46, e_46);
                                                                t = f_0(t);
                                                                ;
                                                                LocalPopChoice(a_23);
                                                              }
                                                            else
                                                              {
                                                                t = z_22;
                                                                t = b_13;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm b_23 = t;
                                                    int c_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
                                                        t = b_13;
                                                        t = new_0_0(t);
                                                        h_47 = t;
                                                        t = bottomup_1_0(f_0, t);
                                                        t_47 = t;
                                                        t = (ATerm) ATempty;
                                                        t = f_0(t);
                                                        u_47 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(u_47), t_47);
                                                        t = f_0(t);
                                                        i_47 = t;
                                                        t = h_47;
                                                        t = bottomup_1_0(f_0, t);
                                                        s_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, s_47);
                                                        t = f_0(t);
                                                        r_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, r_47);
                                                        t = f_0(t);
                                                        k_47 = t;
                                                        t = a_13;
                                                        t = bottomup_1_0(f_0, t);
                                                        m_47 = t;
                                                        t = h_47;
                                                        t = bottomup_1_0(f_0, t);
                                                        q_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, q_47);
                                                        t = f_0(t);
                                                        o_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, o_47);
                                                        t = f_0(t);
                                                        n_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, m_47, n_47);
                                                        t = f_0(t);
                                                        l_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, k_47, l_47);
                                                        t = f_0(t);
                                                        j_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, i_47, j_47);
                                                        t = f_0(t);
                                                        ;
                                                        LocalPopChoice(c_23);
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                        t = b_13;
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
                                        a_13 = ATgetArgument(t, 0);
                                        t = a_13;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm f_23 = t;
                                            int g_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_c_9;
                                                t = f_0(t);
                                                ;
                                                LocalPopChoice(g_23);
                                              }
                                            else
                                              {
                                                t = f_23;
                                                t = b_13;
                                              }
                                          }
                                        else
                                          {
                                            t = b_13;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            a_13 = ATgetArgument(t, 0);
                                            t = a_13;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm h_23 = t;
                                                int i_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_i_9;
                                                    t = f_0(t);
                                                    ;
                                                    LocalPopChoice(i_23);
                                                  }
                                                else
                                                  {
                                                    t = h_23;
                                                    t = b_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_13;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                a_13 = ATgetArgument(t, 0);
                                                t = a_13;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm j_23 = t;
                                                    int k_23 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_i_9;
                                                        t = f_0(t);
                                                        ;
                                                        LocalPopChoice(k_23);
                                                      }
                                                    else
                                                      {
                                                        t = j_23;
                                                        t = b_13;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_13;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm l_23 = t;
                                                int m_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm n_23 = ATgetArgument(t, 0);
                                                        z_12 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(m_23);
                                                    t = z_12;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm o_23 = t;
                                                        int p_23 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_i_9;
                                                            t = f_0(t);
                                                            ;
                                                            LocalPopChoice(p_23);
                                                          }
                                                        else
                                                          {
                                                            t = o_23;
                                                            t = b_13;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_13;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = l_23;
                                                    {
                                                      ATerm q_23 = t;
                                                      int r_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm t_23 = ATgetArgument(t, 0);
                                                              z_12 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(r_23);
                                                          {
                                                            ATerm u_23 = t;
                                                            int v_23 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = z_12;
                                                                t = fetch_1_0(n_1, t);
                                                                t = term_i_9;
                                                                t = bottomup_1_0(f_0, t);
                                                                ;
                                                                LocalPopChoice(v_23);
                                                              }
                                                            else
                                                              {
                                                                t = u_23;
                                                                t = b_13;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = q_23;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              a_13 = ATgetArgument(t, 0);
                                                              z_12 = ATgetArgument(t, 1);
                                                              t = z_12;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = a_13;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          x_12 = ATgetArgument(t, 0);
                                                                          y_12 = ATgetArgument(t, 1);
                                                                          t = a_13;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_13;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = a_13;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_12;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          x_12 = ATgetArgument(t, 0);
                                                                          y_12 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm w_23 = t;
                                                                            int x_23 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm c_49 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, y_12, z_12);
                                                                                t = f_0(t);
                                                                                c_49 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, x_12, c_49);
                                                                                t = f_0(t);
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
                                                                                      t = z_12;
                                                                                      if((a_13 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      ;
                                                                                      LocalPopChoice(z_23);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_23;
                                                                                      t = b_13;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm a_24 = t;
                                                                          int b_24 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = z_12;
                                                                              if((a_13 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              ;
                                                                              LocalPopChoice(b_24);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_24;
                                                                              t = b_13;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  a_13 = ATgetArgument(t, 0);
                                                                  z_12 = ATgetArgument(t, 1);
                                                                  u_11 = ATgetArgument(t, 2);
                                                                  t = u_11;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm c_24 = t;
                                                                      int d_24 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, z_12);
                                                                          t = f_0(t);
                                                                          ;
                                                                          LocalPopChoice(d_24);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = c_24;
                                                                          t = b_13;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_13;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      a_13 = ATgetArgument(t, 0);
                                                                      z_12 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm e_24 = t;
                                                                        int f_24 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, a_13, z_12);
                                                                            t = f_0(t);
                                                                            ;
                                                                            LocalPopChoice(f_24);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = e_24;
                                                                            t = b_13;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          a_13 = ATgetArgument(t, 0);
                                                                          t = a_13;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              x_12 = ATgetFirst((ATermList) t);
                                                                              y_12 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm g_24 = t;
                                                                                int i_24 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm e_50 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, y_12);
                                                                                    t = f_0(t);
                                                                                    e_50 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, x_12, e_50);
                                                                                    t = f_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(i_24);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_24;
                                                                                    t = b_13;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm j_24 = t;
                                                                                  int k_24 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_i_9;
                                                                                      t = f_0(t);
                                                                                      ;
                                                                                      LocalPopChoice(k_24);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = j_24;
                                                                                      t = b_13;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_13;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              a_13 = ATgetArgument(t, 0);
                                                                              t = a_13;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  x_12 = ATgetFirst((ATermList) t);
                                                                                  y_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm l_24 = t;
                                                                                    int m_24 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm k_50 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, y_12);
                                                                                        t = f_0(t);
                                                                                        k_50 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, x_12, k_50);
                                                                                        t = f_0(t);
                                                                                        ;
                                                                                        LocalPopChoice(m_24);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = l_24;
                                                                                        t = b_13;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm o_24 = t;
                                                                                      int p_24 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_i_9;
                                                                                          t = f_0(t);
                                                                                          ;
                                                                                          LocalPopChoice(p_24);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = o_24;
                                                                                          t = b_13;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_13;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  a_13 = ATgetArgument(t, 0);
                                                                                  t = a_13;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      x_12 = ATgetFirst((ATermList) t);
                                                                                      y_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm q_24 = t;
                                                                                        int r_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm q_50 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, y_12);
                                                                                            t = f_0(t);
                                                                                            q_50 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, x_12, q_50);
                                                                                            t = f_0(t);
                                                                                            ;
                                                                                            LocalPopChoice(r_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = q_24;
                                                                                            t = b_13;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm s_24 = t;
                                                                                          int t_24 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_c_9;
                                                                                              t = f_0(t);
                                                                                              ;
                                                                                              LocalPopChoice(t_24);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = s_24;
                                                                                              t = b_13;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_13;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_RDefT_4))
                                                                                    {
                                                                                      a_13 = ATgetArgument(t, 0);
                                                                                      z_12 = ATgetArgument(t, 1);
                                                                                      u_11 = ATgetArgument(t, 2);
                                                                                      t_11 = ATgetArgument(t, 3);
                                                                                      {
                                                                                        ATerm u_24 = t;
                                                                                        int v_24 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm x_50 = NULL,z_50 = NULL;
                                                                                            t = z_12;
                                                                                            t = map1_1_0(q_1, t);
                                                                                            x_50 = t;
                                                                                            t = u_11;
                                                                                            t = map1_1_0(r_1, t);
                                                                                            z_50 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_13, x_50, z_50, t_11);
                                                                                            t = bottomup_1_0(f_0, t);
                                                                                            ;
                                                                                            LocalPopChoice(v_24);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = u_24;
                                                                                            t = b_13;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefT_4))
                                                                                        {
                                                                                          a_13 = ATgetArgument(t, 0);
                                                                                          z_12 = ATgetArgument(t, 1);
                                                                                          u_11 = ATgetArgument(t, 2);
                                                                                          t_11 = ATgetArgument(t, 3);
                                                                                          {
                                                                                            ATerm w_24 = t;
                                                                                            int x_24 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm k_51 = NULL,m_51 = NULL;
                                                                                                t = u_11;
                                                                                                t = map1_1_0(s_1, t);
                                                                                                k_51 = t;
                                                                                                t = z_12;
                                                                                                t = map_1_0(t_1, t);
                                                                                                m_51 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, a_13, m_51, k_51, t_11);
                                                                                                t = bottomup_1_0(f_0, t);
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
                                                                                                      ATerm w_51 = NULL,y_51 = NULL;
                                                                                                      t = z_12;
                                                                                                      t = map1_1_0(u_1, t);
                                                                                                      w_51 = t;
                                                                                                      t = u_11;
                                                                                                      t = map_1_0(v_1, t);
                                                                                                      y_51 = t;
                                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, a_13, w_51, y_51, t_11);
                                                                                                      t = bottomup_1_0(f_0, t);
                                                                                                      ;
                                                                                                      LocalPopChoice(z_24);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = y_24;
                                                                                                      t = b_13;
                                                                                                    }
                                                                                                }
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_InfixApp_3))
                                                                                            {
                                                                                              a_13 = ATgetArgument(t, 0);
                                                                                              z_12 = ATgetArgument(t, 1);
                                                                                              u_11 = ATgetArgument(t, 2);
                                                                                              {
                                                                                                ATerm a_25 = t;
                                                                                                int b_25 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL;
                                                                                                    t = term_c_25;
                                                                                                    t = bottomup_1_0(f_0, t);
                                                                                                    m_52 = t;
                                                                                                    t = (ATerm) ATempty;
                                                                                                    t = f_0(t);
                                                                                                    p_52 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(p_52), u_11);
                                                                                                    t = f_0(t);
                                                                                                    o_52 = t;
                                                                                                    t = (ATerm) ATinsert(CheckATermList(o_52), a_13);
                                                                                                    t = f_0(t);
                                                                                                    n_52 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Op_2, m_52, n_52);
                                                                                                    t = f_0(t);
                                                                                                    l_52 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_App_2, z_12, l_52);
                                                                                                    t = f_0(t);
                                                                                                    ;
                                                                                                    LocalPopChoice(b_25);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = a_25;
                                                                                                    t = b_13;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_BAM_3))
                                                                                                {
                                                                                                  a_13 = ATgetArgument(t, 0);
                                                                                                  z_12 = ATgetArgument(t, 1);
                                                                                                  u_11 = ATgetArgument(t, 2);
                                                                                                  {
                                                                                                    ATerm d_25 = t;
                                                                                                    int e_25 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm c_53 = NULL,d_53 = NULL,f_53 = NULL,g_53 = NULL,i_53 = NULL,j_53 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, z_12);
                                                                                                        t = f_0(t);
                                                                                                        d_53 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, u_11);
                                                                                                        t = f_0(t);
                                                                                                        i_53 = t;
                                                                                                        t = (ATerm) ATempty;
                                                                                                        t = f_0(t);
                                                                                                        j_53 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(j_53), i_53);
                                                                                                        t = f_0(t);
                                                                                                        g_53 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(g_53), a_13);
                                                                                                        t = f_0(t);
                                                                                                        f_53 = t;
                                                                                                        t = (ATerm) ATinsert(CheckATermList(f_53), d_53);
                                                                                                        t = f_0(t);
                                                                                                        c_53 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, c_53);
                                                                                                        t = f_0(t);
                                                                                                        ;
                                                                                                        LocalPopChoice(e_25);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = d_25;
                                                                                                        t = b_13;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_AM_2))
                                                                                                    {
                                                                                                      a_13 = ATgetArgument(t, 0);
                                                                                                      z_12 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm f_25 = t;
                                                                                                        int j_25 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm n_53 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Match_1, z_12);
                                                                                                            t = f_0(t);
                                                                                                            n_53 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_13, n_53);
                                                                                                            t = f_0(t);
                                                                                                            ;
                                                                                                            LocalPopChoice(j_25);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = f_25;
                                                                                                            t = b_13;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_MA_2))
                                                                                                        {
                                                                                                          a_13 = ATgetArgument(t, 0);
                                                                                                          z_12 = ATgetArgument(t, 1);
                                                                                                          {
                                                                                                            ATerm k_25 = t;
                                                                                                            int l_25 = stack_ptr;
                                                                                                            if((PushChoice() == 0))
                                                                                                              {
                                                                                                                ATerm r_53 = NULL;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, a_13);
                                                                                                                t = f_0(t);
                                                                                                                r_53 = t;
                                                                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_53, z_12);
                                                                                                                t = f_0(t);
                                                                                                                ;
                                                                                                                LocalPopChoice(l_25);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                t = k_25;
                                                                                                                t = b_13;
                                                                                                              }
                                                                                                          }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_BA_2))
                                                                                                            {
                                                                                                              a_13 = ATgetArgument(t, 0);
                                                                                                              z_12 = ATgetArgument(t, 1);
                                                                                                              {
                                                                                                                ATerm m_25 = t;
                                                                                                                int n_25 = stack_ptr;
                                                                                                                if((PushChoice() == 0))
                                                                                                                  {
                                                                                                                    ATerm w_53 = NULL;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Build_1, z_12);
                                                                                                                    t = f_0(t);
                                                                                                                    w_53 = t;
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, w_53, a_13);
                                                                                                                    t = f_0(t);
                                                                                                                    ;
                                                                                                                    LocalPopChoice(n_25);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    t = m_25;
                                                                                                                    t = b_13;
                                                                                                                  }
                                                                                                              }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Let_2))
                                                                                                                {
                                                                                                                  a_13 = ATgetArgument(t, 0);
                                                                                                                  z_12 = ATgetArgument(t, 1);
                                                                                                                  t = z_12;
                                                                                                                  if(match_cons(t, sym_Let_2))
                                                                                                                    {
                                                                                                                      v_12 = ATgetArgument(t, 0);
                                                                                                                      w_12 = ATgetArgument(t, 1);
                                                                                                                      t = a_13;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = z_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          ATerm o_25 = t;
                                                                                                                          int p_25 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm o_54 = NULL;
                                                                                                                              t = (ATerm) ATmakeAppl(sym__2, a_13, v_12);
                                                                                                                              t = conc_0_0(t);
                                                                                                                              o_54 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Let_2, o_54, w_12);
                                                                                                                              t = bottomup_1_0(f_0, t);
                                                                                                                              ;
                                                                                                                              LocalPopChoice(p_25);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = o_25;
                                                                                                                              t = b_13;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_CallT_3))
                                                                                                                        {
                                                                                                                          v_12 = ATgetArgument(t, 0);
                                                                                                                          w_12 = ATgetArgument(t, 1);
                                                                                                                          f_12 = ATgetArgument(t, 2);
                                                                                                                          t = f_12;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = w_12;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = v_12;
                                                                                                                                  if(match_cons(t, sym_SVar_1))
                                                                                                                                    {
                                                                                                                                      t_12 = ATgetArgument(t, 0);
                                                                                                                                      t = a_13;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = z_12;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                            {
                                                                                                                                              x_12 = ATgetFirst((ATermList) t);
                                                                                                                                              y_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                              t = y_12;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = x_12;
                                                                                                                                                  if(match_cons(t, sym_SDefT_4))
                                                                                                                                                    {
                                                                                                                                                      p_12 = ATgetArgument(t, 0);
                                                                                                                                                      b_12 = ATgetArgument(t, 1);
                                                                                                                                                      y_11 = ATgetArgument(t, 2);
                                                                                                                                                      z_11 = ATgetArgument(t, 3);
                                                                                                                                                      t = y_11;
                                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                        {
                                                                                                                                                          t = b_12;
                                                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                            {
                                                                                                                                                              ATerm q_25 = t;
                                                                                                                                                              int r_25 = stack_ptr;
                                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                                {
                                                                                                                                                                  t = t_12;
                                                                                                                                                                  if((p_12 != t))
                                                                                                                                                                    {
                                                                                                                                                                      _fail(t);
                                                                                                                                                                    }
                                                                                                                                                                  t = z_11;
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
                                                                                                                                                                                  if((p_12 != ATgetArgument(t_25, 0)))
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
                                                                                                                                                                    t = z_11;
                                                                                                                                                                    t = bottomup_1_0(f_0, t);
                                                                                                                                                                  }
                                                                                                                                                                  ;
                                                                                                                                                                  LocalPopChoice(r_25);
                                                                                                                                                                }
                                                                                                                                                              else
                                                                                                                                                                {
                                                                                                                                                                  t = q_25;
                                                                                                                                                                  t = b_13;
                                                                                                                                                                }
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = b_13;
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = b_13;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = b_13;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = b_13;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = b_13;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = a_13;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = z_12;
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = b_13;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = a_13;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      t = z_12;
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = b_13;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_13;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_12;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = b_13;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = a_13;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = z_12;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_13;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_As_2))
                                                                                                                    {
                                                                                                                      a_13 = ATgetArgument(t, 0);
                                                                                                                      z_12 = ATgetArgument(t, 1);
                                                                                                                      t = a_13;
                                                                                                                      if(match_cons(t, sym_Wld_0))
                                                                                                                        {
                                                                                                                          t = z_12;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_13;
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = b_13;
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
  t = bottomup_1_0(f_0, t);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm w_25 = t;
  if((PushChoice() == 0))
    {
      ATerm c_56 = NULL,d_56 = NULL,e_56 = NULL,f_1 = NULL;
      e_56 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_56 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_56);
      c_56 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_56);
      f_1 = t;
      t = SSLsetAnnotations(f_1, c_56);
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
  ATerm f_56 = NULL,g_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_56 = ATgetFirst((ATermList) t);
      g_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_56, g_56);
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_25 = ATgetArgument(t, 0);
      if(match_cons(y_25, sym__2))
        {
          h_56 = ATgetArgument(y_25, 0);
          i_56 = ATgetArgument(y_25, 1);
        }
      else
        _fail(t);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(match_cons(z_25, sym__2))
          {
            j_56 = ATgetArgument(z_25, 0);
            k_56 = ATgetArgument(z_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_56), h_56), (ATerm) ATinsert(CheckATermList(k_56), i_56));
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
  ATerm m_56 = NULL,n_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_56 = ATgetFirst((ATermList) t);
      n_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_56, n_56);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_26 = ATgetArgument(t, 0);
      if(match_cons(a_26, sym__2))
        {
          o_56 = ATgetArgument(a_26, 0);
          p_56 = ATgetArgument(a_26, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(match_cons(c_26, sym__2))
          {
            q_56 = ATgetArgument(c_26, 0);
            r_56 = ATgetArgument(c_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_56), o_56), (ATerm) ATinsert(CheckATermList(r_56), p_56));
  return(t);
}
ATerm c_12 (ATerm g_25, ATerm h_25, ATerm i_25, ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,i_1 = NULL;
  t = i_25;
  t = fetch_1_0(y_1, t);
  t = i_25;
  t = genzip_4_0(a_2, b_2, e_2, LiftPrimArg_0_0, t);
  b_56 = t;
  if(match_cons(t, sym__2))
    {
      x_55 = ATgetArgument(t, 0);
      y_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_56);
  w_55 = t;
  t = x_55;
  t = concat_0_0(t);
  z_55 = t;
  t = y_55;
  t = genzip_4_0(h_2, i_2, j_2, _id, t);
  a_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_55, a_56);
  i_1 = t;
  t = SSLsetAnnotations(i_1, w_55);
  if(match_cons(t, sym__2))
    {
      t_55 = ATgetArgument(t, 0);
      {
        ATerm d_26 = ATgetArgument(t, 1);
        if(match_cons(d_26, sym__2))
          {
            u_55 = ATgetArgument(d_26, 0);
            v_55 = ATgetArgument(d_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_55, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_55), (ATerm) ATmakeAppl(sym_CallT_3, g_25, h_25, v_55)));
  return(t);
}
ATerm genzip_4_0 (ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm t)
{
  ATerm z_56 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_96(t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,o_1 = NULL;
          t = u_96(t);
          y_56 = t;
          if(match_cons(t, sym__2))
            {
              u_56 = ATgetArgument(t, 0);
              v_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_56);
          t_56 = t;
          t = u_56;
          t = w_96(t);
          w_56 = t;
          t = v_56;
          t = z_56(t);
          x_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_56, x_56);
          o_1 = t;
          t = SSLsetAnnotations(o_1, t_56);
          t = v_96(t);
        }
      }
    return(t);
  }
  t = z_56(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm n_57 (ATerm t)
  {
    ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
    m_57 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_57 = ATgetFirst((ATermList) t);
        l_57 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm z_3 = NULL,c_4 = NULL,w_1 = NULL;
          t = SSLgetAnnotations(m_57);
          z_3 = t;
          t = l_57;
          t = n_57(t);
          c_4 = t;
          t = (ATerm) ATinsert(CheckATermList(c_4), k_57);
          w_1 = t;
          t = SSLsetAnnotations(w_1, z_3);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_57;
        t = s_107(t);
      }
    return(t);
  }
  t = n_57(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,t_57 = NULL;
  q_57 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_57;
    }
  else
    {
      ATerm k_2 (ATerm t)
      {
        t = not_null(t_57);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_57 = ATgetFirst((ATermList) t);
          if(((t_57 != NULL) && (t_57 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_57;
      t = at_end_1_0(k_2, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm n_58 (ATerm z_57, ATerm t)
{
  ATerm b_58 = NULL;
  t = z_57;
  {
    ATerm g_26 = t;
    if((PushChoice() == 0))
      {
        ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,z_1 = NULL;
        e_58 = t;
        if(match_cons(t, sym_Var_1))
          {
            d_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_58);
        c_58 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, d_58);
        z_1 = t;
        t = SSLsetAnnotations(z_1, c_58);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_26;
      }
    t = new_0_0(t);
    b_58 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, b_58), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_57), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_58)))), (ATerm) ATmakeAppl(sym_Var_1, b_58)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm f_58 = NULL,l_58 = NULL;
  f_58 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_58 = ATgetArgument(t, 0);
      {
        ATerm h_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_58(f_58, t);
            ;
            LocalPopChoice(i_26);
          }
        else
          {
            t = h_26;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATmakeAppl(sym_Var_1, l_58)));
          }
      }
    }
  else
    {
      t = n_58(f_58, t);
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
      ATerm l_26 = ATgetArgument(t, 0);
      if(match_cons(l_26, sym__2))
        {
          c_5 = ATgetArgument(l_26, 0);
          d_5 = ATgetArgument(l_26, 1);
        }
      else
        _fail(t);
      {
        ATerm m_26 = ATgetArgument(t, 1);
        if(match_cons(m_26, sym__2))
          {
            e_5 = ATgetArgument(m_26, 0);
            f_5 = ATgetArgument(m_26, 1);
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
      ATerm n_26 = ATgetArgument(t, 0);
      if(match_cons(n_26, sym__2))
        {
          i_5 = ATgetArgument(n_26, 0);
          j_5 = ATgetArgument(n_26, 1);
        }
      else
        _fail(t);
      {
        ATerm o_26 = ATgetArgument(t, 1);
        if(match_cons(o_26, sym__2))
          {
            k_5 = ATgetArgument(o_26, 0);
            l_5 = ATgetArgument(o_26, 1);
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
  ATerm p_26 = t;
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
      t = p_26;
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
      ATerm r_26 = ATgetArgument(t, 0);
      if(match_cons(r_26, sym__2))
        {
          k_6 = ATgetArgument(r_26, 0);
          l_6 = ATgetArgument(r_26, 1);
        }
      else
        _fail(t);
      {
        ATerm s_26 = ATgetArgument(t, 1);
        if(match_cons(s_26, sym__2))
          {
            m_6 = ATgetArgument(s_26, 0);
            n_6 = ATgetArgument(s_26, 1);
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
      ATerm t_26 = ATgetArgument(t, 0);
      if(match_cons(t_26, sym__2))
        {
          q_6 = ATgetArgument(t_26, 0);
          r_6 = ATgetArgument(t_26, 1);
        }
      else
        _fail(t);
      {
        ATerm u_26 = ATgetArgument(t, 1);
        if(match_cons(u_26, sym__2))
          {
            s_6 = ATgetArgument(u_26, 0);
            t_6 = ATgetArgument(u_26, 1);
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
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL;
  m_61 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_61 = ATgetArgument(t, 0);
      o_61 = ATgetArgument(t, 1);
      l_61 = ATgetArgument(t, 2);
      {
        ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,d_2 = NULL;
        t = l_61;
        t = fetch_1_0(p_2, t);
        t = l_61;
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
              ATerm w_26 = ATgetArgument(t, 1);
              if(match_cons(w_26, sym__2))
                {
                  p_4 = ATgetArgument(w_26, 0);
                  q_4 = ATgetArgument(w_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_4), (ATerm) ATmakeAppl(sym_PrimT_3, n_61, o_61, q_4)));
      }
    }
  else
    {
      ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL,g_2 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          n_61 = ATgetArgument(t, 0);
          o_61 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_61;
      t = fetch_1_0(y_2, t);
      t = o_61;
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
            ATerm x_26 = ATgetArgument(t, 1);
            if(match_cons(x_26, sym__2))
              {
                x_5 = ATgetArgument(x_26, 0);
                y_5 = ATgetArgument(x_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, w_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_5), (ATerm) ATmakeAppl(sym_PrimT_3, n_61, (ATerm)ATempty, y_5)));
    }
  return(t);
}
ATerm topdown_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = topdown_1_0(h_92, t);
    return(t);
  }
  t = h_92(t);
  t = SRTS_all(g_3, t);
  return(t);
}
ATerm map_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm f_62 (ATerm t)
  {
    ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
    c_62 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_62;
      }
    else
      {
        ATerm b_7 = NULL,e_7 = NULL,f_7 = NULL,q_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_62 = ATgetFirst((ATermList) t);
            e_62 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_62);
        b_7 = t;
        t = d_62;
        t = c_107(t);
        e_7 = t;
        t = e_62;
        t = f_62(t);
        f_7 = t;
        t = (ATerm) ATinsert(CheckATermList(f_7), e_7);
        q_2 = t;
        t = SSLsetAnnotations(q_2, b_7);
      }
    return(t);
  }
  t = f_62(t);
  return(t);
}
ATerm Cons_2_0 (ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,t_7 = NULL;
  n_62 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_62 = ATgetFirst((ATermList) t);
      k_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  i_62 = t;
  t = j_62;
  t = b_76(t);
  l_62 = t;
  t = k_62;
  t = c_76(t);
  m_62 = t;
  t = (ATerm) ATinsert(CheckATermList(m_62), l_62);
  t_7 = t;
  t = SSLsetAnnotations(t_7, i_62);
  return(t);
}
ATerm g_12 (ATerm j_49, ATerm k_49, ATerm t)
{
  ATerm o_62 = NULL;
  t = SSL_fputc(j_49, k_49);
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_62);
  return(t);
}
ATerm h_12 (ATerm x_52, ATerm y_52, ATerm t)
{
  ATerm p_62 = NULL;
  t = SSL_write_term_to_stream_text(x_52, y_52);
  p_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_62);
  return(t);
}
ATerm j_12 (ATerm d_113 (ATerm), ATerm v_477, ATerm b_53, ATerm t)
{
  ATerm q_62 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_477, term_y_26);
  t = m_12(t);
  q_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_62, b_53);
  t = d_113(t);
  t = fclose_0_0(t);
  t = b_53;
  return(t);
}
ATerm i_12 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm r_62 = NULL;
  t = SSL_write_term_to_stream_baf(t_52, u_52);
  r_62 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_62);
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_26 = ATgetArgument(t, 0);
      if(match_cons(z_26, sym_Stream_1))
        {
          u_62 = ATgetArgument(z_26, 0);
        }
      else
        _fail(t);
      v_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(u_62, v_62, t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_27 = ATgetArgument(t, 0);
      if(match_cons(a_27, sym_Stream_1))
        {
          z_62 = ATgetArgument(a_27, 0);
        }
      else
        _fail(t);
      a_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_12(z_62, a_63, t);
  w_62 = t;
  t = term_b_27;
  x_62 = t;
  t = w_62;
  if(match_cons(t, sym_Stream_1))
    {
      y_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_27, w_62);
  t = g_12(x_62, y_62, t);
  return(t);
}
ATerm output_1_0 (ATerm m_117 (ATerm), ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL;
  t = m_117(t);
  t_62 = t;
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_27;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = term_f_27;
      }
    s_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_62, t_62);
    {
      ATerm h_27 = t;
      int i_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_j_27;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, s_62, t_62);
          LocalPopChoice(i_27);
          if(match_cons(t, sym__2))
            {
              ATerm k_27 = ATgetArgument(t, 0);
              ATerm m_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_12(h_3, s_62, t_62, t);
        }
      else
        {
          t = h_27;
          if(match_cons(t, sym__2))
            {
              ATerm n_27 = ATgetArgument(t, 0);
              ATerm o_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_12(i_3, s_62, t_62, t);
        }
    }
  }
  return(t);
}
ATerm o_63 (ATerm i_63, ATerm t)
{
  t = SSL_fclose(i_63);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL;
  m_63 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_63 = ATgetArgument(t, 0);
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_63);
            ;
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            t = o_63(m_63, t);
          }
      }
    }
  else
    {
      t = o_63(m_63, t);
    }
  return(t);
}
ATerm k_12 (ATerm z_52, ATerm t)
{
  t = SSL_read_term_from_stream(z_52);
  return(t);
}
ATerm l_12 (ATerm l_49, ATerm m_49, ATerm t)
{
  ATerm p_63 = NULL;
  t = SSL_fopen(l_49, m_49);
  p_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_63);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_63 = NULL;
  t = SSL_stdin_stream();
  q_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_63);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_63 = NULL;
  t = SSL_stdout_stream();
  r_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_63);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_63 = NULL;
  t = SSL_stderr_stream();
  s_63 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_63);
  return(t);
}
ATerm a_65 (ATerm z_63, ATerm t)
{
  ATerm a_64 = NULL;
  t = SSL_explode_term(z_63);
  if(match_cons(t, sym__2))
    {
      ATerm r_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_27) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_27 = ATgetArgument(t, 1);
        if(((ATgetType(s_27) == AT_LIST) && !(ATisEmpty(s_27))))
          {
            a_64 = ATgetFirst((ATermList) s_27);
            {
              ATerm t_27 = (ATerm) ATgetNext((ATermList) s_27);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_64;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_64;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_64;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_64;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_65 (ATerm d_64, ATerm e_64, ATerm f_64, ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL,l_64 = NULL,z_9 = NULL;
  t = SSLgetAnnotations(f_64);
  i_64 = t;
  t = d_64;
  if(match_cons(t, sym_Path_1))
    {
      l_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_64, e_64);
  z_9 = t;
  t = SSLsetAnnotations(z_9, i_64);
  if(match_cons(t, sym__2))
    {
      g_64 = ATgetArgument(t, 0);
      h_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(g_64, h_64, t);
  return(t);
}
ATerm c_65 (ATerm n_64, ATerm o_64, ATerm p_64, ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,v_64 = NULL,a_10 = NULL;
  t = SSLgetAnnotations(p_64);
  s_64 = t;
  t = SSL_is_string(n_64);
  v_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_64, o_64);
  a_10 = t;
  t = SSLsetAnnotations(a_10, s_64);
  if(match_cons(t, sym__2))
    {
      q_64 = ATgetArgument(t, 0);
      r_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(q_64, r_64, t);
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL;
  x_64 = t;
  if(match_cons(t, sym__2))
    {
      y_64 = ATgetArgument(t, 0);
      z_64 = ATgetArgument(t, 1);
      {
        ATerm u_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_65(x_64, t);
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = u_27;
            {
              ATerm w_27 = t;
              int x_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_65(y_64, z_64, x_64, t);
                  ;
                  LocalPopChoice(x_27);
                }
              else
                {
                  t = w_27;
                  t = c_65(y_64, z_64, x_64, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_65(x_64, t);
    }
  return(t);
}
ATerm k_3 (ATerm t)
{
  t = term_y_27;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_65 = NULL,f_65 = NULL,g_65 = NULL;
  ATerm z_27 = t;
  int a_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_65 = NULL;
      i_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_65, term_b_28);
      t = m_12(t);
      ;
      LocalPopChoice(a_28);
    }
  else
    {
      t = z_27;
      t = debug_1_0(k_3, t);
      _fail(t);
    }
  f_65 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_12(g_65, t);
  d_65 = t;
  t = f_65;
  t = fclose_0_0(t);
  t = d_65;
  return(t);
}
ATerm input_1_0 (ATerm n_117 (ATerm), ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_28;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      t = term_g_28;
    }
  t = ReadFromFile_0_0(t);
  t = n_117(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL;
  l_65 = t;
  t = term_k_28;
  t = whoami_0_0(t);
  m_65 = t;
  t = term_l_28;
  o_65 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_28), m_65), term_s_28);
  p_65 = t;
  t = SSL_printnl(o_65, p_65);
  t = term_u_28;
  n_65 = t;
  t = SSL_exit(n_65);
  t = l_65;
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm r_65 = NULL;
  r_65 = t;
  if(match_string(t, "-k"))
    {
      t = r_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_65;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL;
  s_65 = t;
  t = SSL_string_to_int(s_65);
  t_65 = t;
  t = term_v_28;
  u_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_28, t_65);
  t = u_12(u_65, t_65, t);
  t = s_65;
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_w_28;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_3, m_3, n_3, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm w_65 = NULL;
  w_65 = t;
  if(match_string(t, "-S"))
    {
      t = w_65;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_65;
    }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL;
  t = term_x_28;
  x_65 = t;
  t = term_y_28;
  y_65 = t;
  t = term_z_28;
  t = u_12(x_65, y_65, t);
  t = term_a_29;
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_b_29;
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
  ATerm z_65 = NULL,a_66 = NULL,b_66 = NULL;
  z_65 = t;
  t = SSL_string_to_int(z_65);
  a_66 = t;
  t = term_x_28;
  b_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_28, a_66);
  t = u_12(b_66, a_66, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_65);
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_c_29;
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
  ATerm c_66 = NULL,d_66 = NULL;
  t = term_d_29;
  c_66 = t;
  t = term_k_28;
  d_66 = t;
  t = term_e_29;
  t = u_12(c_66, d_66, t);
  t = term_f_29;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_g_29;
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
ATerm u_12 (ATerm a_54, ATerm b_54, ATerm t)
{
  ATerm e_66 = NULL;
  t = term_m_29;
  e_66 = t;
  t = SSL_table_put(e_66, a_54, b_54);
  t = (ATerm) ATmakeAppl(sym__3, term_m_29, a_54, b_54);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
      t = term_k_28;
      t = h_0(t);
      j_66 = t;
      t = term_n_29;
      k_66 = t;
      t = term_o_29;
      l_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_29, term_o_29, j_66);
      t = s_12(k_66, l_66, j_66, t);
      _fail(t);
    }
  else
    {
      ATerm o_66 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_66 = ATgetFirst((ATermList) t);
          i_66 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_66;
      t = d_0(t);
      t = term_k_28;
      t = g_0(t);
      o_66 = t;
      t = (ATerm) ATinsert(CheckATermList(i_66), o_66);
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm q_66 = NULL;
  q_66 = t;
  if(match_string(t, "-o"))
    {
      t = q_66;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_66;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm r_66 = NULL,s_66 = NULL;
  r_66 = t;
  t = term_e_27;
  s_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_27, r_66);
  t = u_12(s_66, r_66, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_66);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_p_29;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_3, y_3, a_4, t);
  return(t);
}
ATerm s_12 (ATerm y_58, ATerm z_58, ATerm x_58, ATerm t)
{
  ATerm u_66 = NULL,v_66 = NULL,w_66 = NULL;
  u_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
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
        t = r_12(y_58, z_58, t);
        ;
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = (ATerm) ATempty;
      }
    v_66 = t;
    t = (ATerm) ATinsert(CheckATermList(v_66), x_58);
    w_66 = t;
    t = SSL_table_put(y_58, z_58, w_66);
    t = u_66;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL;
      t = term_k_28;
      t = m_0(t);
      h_67 = t;
      t = term_n_29;
      i_67 = t;
      t = term_o_29;
      j_67 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_29, term_o_29, h_67);
      t = s_12(i_67, j_67, h_67, t);
      _fail(t);
    }
  else
    {
      ATerm n_67 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_67 = ATgetFirst((ATermList) t);
          e_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_67;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_67 = ATgetFirst((ATermList) t);
          g_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_67;
      t = k_0(t);
      t = f_67;
      t = l_0(t);
      n_67 = t;
      t = (ATerm) ATinsert(CheckATermList(g_67), n_67);
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm p_67 = NULL;
  p_67 = t;
  if(match_string(t, "-i"))
    {
      t = p_67;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_67;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL;
  q_67 = t;
  t = term_f_28;
  r_67 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_28, q_67);
  t = u_12(r_67, q_67, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_67);
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_v_29;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, d_4, e_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_28;
  t = whoami_0_0(t);
  s_67 = t;
  t = term_l_28;
  u_67 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_29), s_67);
  v_67 = t;
  t = SSL_printnl(u_67, v_67);
  t = term_u_28;
  t_67 = t;
  t = SSL_exit(t_67);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_x_29;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_12 (ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_46, k_46);
      ;
      LocalPopChoice(z_29);
    }
  else
    {
      t = y_29;
      t = SSL_addr(j_46, k_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_105 (ATerm), ATerm t_105 (ATerm), ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
  x_67 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_67;
      t = s_105(t);
    }
  else
    {
      ATerm c_68 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_67 = ATgetFirst((ATermList) t);
          z_67 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_67;
      t = foldr_2_0(s_105, t_105, t);
      c_68 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_67, c_68);
      t = t_105(t);
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
  t = term_y_28;
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
  t = n_12(u_7, v_7, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_68 = NULL,q_7 = NULL,r_7 = NULL;
  t = times_0_0(t);
  r_7 = t;
  t = SSL_explode_term(r_7);
  if(match_cons(t, sym__2))
    {
      ATerm a_30 = ATgetArgument(t, 0);
      q_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7;
  t = foldr_2_0(f_4, g_4, t);
  f_68 = t;
  t = SSL_TicksToSeconds(f_68);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL;
  q_68 = t;
  if(match_cons(t, sym__2))
    {
      r_68 = ATgetArgument(t, 0);
      s_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_68;
        if((r_68 != t))
          {
            _fail(t);
          }
        t = q_68;
        ;
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = (ATerm) ATmakeAppl(sym__2, r_68, s_68);
        {
          ATerm d_30 = t;
          int e_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_68, s_68);
              ;
              LocalPopChoice(e_30);
            }
          else
            {
              t = d_30;
              t = SSL_gtr(r_68, s_68);
            }
          t = (ATerm) ATmakeAppl(sym__2, r_68, s_68);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  ATerm w_68 = NULL;
  w_68 = t;
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_68 = NULL;
        t = term_x_28;
        t = get_config_0_0(t);
        y_68 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_68, term_u_28);
        t = geq_0_0(t);
        t = w_68;
        t = n_114(t);
        ;
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        t = w_68;
      }
  }
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,d_69 = NULL,e_69 = NULL;
  t = run_time_0_0(t);
  a_69 = t;
  t = term_k_28;
  t = whoami_0_0(t);
  b_69 = t;
  t = term_l_28;
  d_69 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_30), a_69), term_i_30), b_69);
  e_69 = t;
  t = SSL_printnl(d_69, e_69);
  t = (ATerm) ATmakeAppl(sym__2, term_l_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_30), a_69), term_i_30), b_69));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_69 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_28;
  f_69 = t;
  t = SSL_exit(f_69);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm n_69 = NULL,o_69 = NULL;
  o_69 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_69;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_69 = ATgetArgument(t, 0);
          {
            ATerm h_8 = NULL,d_10 = NULL;
            t = SSLgetAnnotations(o_69);
            h_8 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_69);
            d_10 = t;
            t = SSLsetAnnotations(d_10, h_8);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_69;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_117 (ATerm), ATerm t)
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_30;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      t = fetch_1_0(i_4, t);
    }
  t = d_117(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_69 = ATgetFirst((ATermList) t);
      s_69 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_69 = NULL,x_69 = NULL;
        ATerm j_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_69)), not_null(x_69));
          return(t);
        }
        t = s_69;
        t = j_0(t);
        if(((w_69 != NULL) && (w_69 != t)))
          _fail(t);
        else
          w_69 = t;
        t = r_69;
        t = i_0(t);
        if(((x_69 != NULL) && (x_69 != t)))
          _fail(t);
        else
          x_69 = t;
        t = s_69;
        t = reverse_acc_2_0(i_0, j_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_28;
      t = j_0(t);
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL,f_10 = NULL;
  d_70 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_70);
  b_70 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_70);
  f_10 = t;
  t = SSLsetAnnotations(f_10, b_70);
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm f_70 = NULL;
  f_70 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_70), term_n_30);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL;
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_29;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_30);
    }
  else
    {
      t = p_30;
      t = fetch_1_0(k_4, t);
    }
  t = term_r_30;
  t = echo_0_0(t);
  t = term_n_29;
  z_69 = t;
  t = term_o_29;
  a_70 = t;
  t = term_s_30;
  t = r_12(z_69, a_70, t);
  t = reverse_acc_2_0(_id, l_4, t);
  t = map_1_0(m_4, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm c_71 (ATerm t)
  {
    ATerm z_70 = NULL,a_71 = NULL,b_71 = NULL;
    z_70 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_71 = ATgetFirst((ATermList) t);
        b_71 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_30 = t;
      int v_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_8 = NULL,s_8 = NULL,h_10 = NULL;
          t = SSLgetAnnotations(z_70);
          p_8 = t;
          t = a_71;
          t = m_107(t);
          s_8 = t;
          t = (ATerm) ATinsert(CheckATermList(b_71), s_8);
          h_10 = t;
          t = SSLsetAnnotations(h_10, p_8);
          ;
          LocalPopChoice(v_30);
        }
      else
        {
          t = u_30;
          {
            ATerm a_9 = NULL,d_9 = NULL,i_10 = NULL;
            t = SSLgetAnnotations(z_70);
            a_9 = t;
            t = b_71;
            t = c_71(t);
            d_9 = t;
            t = (ATerm) ATinsert(CheckATermList(d_9), a_71);
            i_10 = t;
            t = SSLsetAnnotations(i_10, a_9);
          }
        }
    }
    return(t);
  }
  t = c_71(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL,i_71 = NULL;
  g_71 = t;
  {
    ATerm w_30 = t;
    int x_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_71;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_30 = ATgetFirst((ATermList) t);
                ATerm a_31 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_71;
          }
        ;
        LocalPopChoice(x_30);
      }
    else
      {
        t = w_30;
        t = (ATerm) ATinsert(ATempty, g_71);
      }
    h_71 = t;
    t = term_f_27;
    i_71 = t;
    t = SSL_printnl(i_71, h_71);
    t = g_71;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_x_29;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm q_12 (ATerm j_40, ATerm k_40, ATerm t)
{
  t = SSL_strcat(j_40, k_40);
  return(t);
}
ATerm debug_1_0 (ATerm b_113 (ATerm), ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL;
  m_71 = t;
  t = b_113(t);
  n_71 = t;
  t = term_l_28;
  o_71 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_71), n_71);
  p_71 = t;
  t = SSL_printnl(o_71, p_71);
  t = m_71;
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm b_31 = t;
  int c_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(c_31);
    }
  else
    {
      t = b_31;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  t = term_d_31;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_71 = NULL;
      w_71 = t;
      t = SSL_is_string(w_71);
      ;
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_4, t);
            ;
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            {
              ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
              c_72 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_72 = ATgetArgument(t, 0);
                  t = d_72;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_72 = ATgetArgument(t, 0);
                      t = d_72;
                      {
                        ATerm j_31 = t;
                        int k_31 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(k_31);
                          }
                        else
                          {
                            t = j_31;
                            t = debug_1_0(m_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_72 = NULL,j_72 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_72 = ATgetArgument(t, 0);
                          e_72 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_72;
                      t = eval_config_0_0(t);
                      i_72 = t;
                      t = e_72;
                      t = eval_config_0_0(t);
                      j_72 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_72, j_72);
                      t = q_12(i_72, j_72, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_12 (ATerm p_60, ATerm q_60, ATerm t)
{
  t = SSL_table_get(p_60, q_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm n_72 = NULL,o_72 = NULL;
  n_72 = t;
  t = term_m_29;
  o_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_29, n_72);
  t = r_12(o_72, n_72, t);
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_72 = NULL,q_72 = NULL;
        t = eval_config_0_0(t);
        p_72 = t;
        t = term_m_29;
        q_72 = t;
        t = SSL_table_put(q_72, n_72, p_72);
        t = p_72;
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
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
  ATerm t_72 = NULL,u_72 = NULL;
  t = term_n_31;
  t_72 = t;
  t = term_k_28;
  u_72 = t;
  t = term_o_31;
  t = u_12(t_72, u_72, t);
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
  ATerm v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL;
  t = term_n_31;
  x_72 = t;
  t = term_k_28;
  y_72 = t;
  t = term_o_31;
  t = u_12(x_72, y_72, t);
  t = term_r_31;
  v_72 = t;
  t = term_k_28;
  w_72 = t;
  t = term_s_31;
  t = u_12(v_72, w_72, t);
  t = term_t_31;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_u_31;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_31 = t;
  int w_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_5, o_5, p_5, t);
      ;
      LocalPopChoice(w_31);
    }
  else
    {
      t = v_31;
      t = Option_3_0(q_5, r_5, s_5, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,i_73 = NULL,j_73 = NULL,l_10 = NULL;
  d_73 = t;
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_31;
        t = g_119(t);
        ;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
      }
    t = d_73;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_73 = ATgetFirst((ATermList) t);
        g_73 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_73);
    e_73 = t;
    t = term_x_29;
    j_73 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_x_29, f_73);
    t = u_12(j_73, f_73, t);
    t = g_73;
    {
      ATerm t_73 (ATerm t)
      {
        ATerm b_32 = t;
        int c_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_32 = t;
            int e_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_73 = NULL;
                m_73 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_73;
                ;
                LocalPopChoice(e_32);
              }
            else
              {
                t = d_32;
                t = g_119(t);
                t = Cons_2_0(_id, t_73, t);
              }
            ;
            LocalPopChoice(c_32);
          }
        else
          {
            t = b_32;
            {
              ATerm p_73 = NULL,q_73 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_73 = ATgetFirst((ATermList) t);
                  q_73 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_73), (ATerm) ATmakeAppl(sym_Undefined_1, p_73));
            }
          }
        return(t);
      }
      t = t_73(t);
      i_73 = t;
      t = (ATerm) ATinsert(CheckATermList(i_73), (ATerm) ATmakeAppl(sym_Program_1, f_73));
      l_10 = t;
      t = SSLsetAnnotations(l_10, e_73);
    }
  }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm f_74 = NULL;
  f_74 = t;
  if(match_string(t, "--help"))
    {
      t = f_74;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_74;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_74;
        }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm g_74 = NULL,h_74 = NULL;
  t = term_m_30;
  g_74 = t;
  t = term_k_28;
  h_74 = t;
  t = term_f_32;
  t = u_12(g_74, h_74, t);
  t = term_g_32;
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_h_32;
  return(t);
}
ATerm v_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_119 (ATerm), ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL;
  a_74 = t;
  t = term_n_29;
  c_74 = t;
  t = term_o_29;
  d_74 = t;
  t = (ATerm) ATempty;
  e_74 = t;
  t = SSL_table_put(c_74, d_74, e_74);
  t = a_74;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm i_32 = t;
      int j_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_119(t);
          ;
          LocalPopChoice(j_32);
        }
      else
        {
          t = i_32;
          {
            ATerm k_32 = t;
            int l_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_5, v_5, u_6, t);
                ;
                LocalPopChoice(l_32);
              }
            else
              {
                t = k_32;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_5, t);
    {
      ATerm m_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_74 = NULL;
          o_74 = t;
          {
            ATerm p_32 = t;
            int q_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_9 = NULL;
                t = o_74;
                {
                  ATerm r_32 = t;
                  int s_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_30;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(s_32);
                    }
                  else
                    {
                      t = r_32;
                      t = fetch_1_0(v_6, t);
                    }
                  t = o_74;
                  t = default_system_usage_0_0(t);
                  t = term_y_28;
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
                  t = term_n_31;
                  t = get_config_0_0(t);
                  t = o_74;
                  t = default_system_about_0_0(t);
                  t = term_y_28;
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
          t = m_32;
          {
            ATerm t_32 = t;
            int u_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL;
                ATerm w_6 (ATerm t)
                {
                  ATerm s_74 = NULL,t_74 = NULL,u_74 = NULL,n_10 = NULL;
                  u_74 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      t_74 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(u_74);
                  s_74 = t;
                  t = t_74;
                  if(((y_73 != NULL) && (y_73 != t)))
                    _fail(t);
                  else
                    y_73 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, t_74);
                  n_10 = t;
                  t = SSLsetAnnotations(n_10, s_74);
                  return(t);
                }
                t = fetch_1_0(w_6, t);
                t = term_l_28;
                q_74 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_73)), term_v_32);
                r_74 = t;
                t = SSL_printnl(q_74, r_74);
                t = (ATerm) ATmakeAppl(sym__2, term_l_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_73)), term_v_32));
                t = default_system_usage_0_0(t);
                t = term_u_28;
                p_74 = t;
                t = SSL_exit(p_74);
                ;
                LocalPopChoice(u_32);
              }
            else
              {
                t = t_32;
              }
          }
        }
      z_73 = t;
      t = term_n_29;
      b_74 = t;
      t = SSL_table_destroy(b_74);
      t = z_73;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm f_117 (ATerm), ATerm g_117 (ATerm), ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm t)
{
  ATerm z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL;
  t = parse_options_1_0(f_117, t);
  z_74 = t;
  t = term_w_32;
  c_75 = t;
  t = SSL_table_create(c_75);
  t = term_w_32;
  a_75 = t;
  t = term_x_32;
  b_75 = t;
  t = SSL_table_put(a_75, b_75, z_74);
  t = z_74;
  t = h_117(t);
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_117, t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        {
          ATerm a_33 = t;
          int c_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_117(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_33);
            }
          else
            {
              t = a_33;
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
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      {
        ATerm f_33 = t;
        int h_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(h_33);
          }
        else
          {
            t = f_33;
            {
              ATerm i_33 = t;
              int j_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_6, a_7, c_7, t);
                  ;
                  LocalPopChoice(j_33);
                }
              else
                {
                  t = i_33;
                  {
                    ATerm k_33 = t;
                    int l_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(l_33);
                      }
                    else
                      {
                        t = k_33;
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
  ATerm g_75 = NULL,h_75 = NULL;
  t = term_j_27;
  g_75 = t;
  t = term_k_28;
  h_75 = t;
  t = term_m_33;
  t = u_12(g_75, h_75, t);
  t = term_n_33;
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = term_p_33;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = output_1_0(g_7, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,s_10 = NULL,r_10 = NULL;
  q_75 = t;
  if(match_cons(t, sym_Specification_1))
    {
      k_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_75);
  j_75 = t;
  t = k_75;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_75 = ATgetFirst((ATermList) t);
      n_75 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_75);
  l_75 = t;
  t = n_75;
  t = Cons_2_0(h_7, i_7, t);
  o_75 = t;
  t = (ATerm) ATinsert(CheckATermList(o_75), m_75);
  r_10 = t;
  t = SSLsetAnnotations(r_10, l_75);
  p_75 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_75);
  s_10 = t;
  t = SSLsetAnnotations(s_10, j_75);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,q_10 = NULL;
  u_75 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      s_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_75);
  r_75 = t;
  t = s_75;
  t = map_1_0(j_7, t);
  t_75 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_75);
  q_10 = t;
  t = SSLsetAnnotations(q_10, r_75);
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
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,d_76 = NULL,p_10 = NULL;
  d_76 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      w_75 = ATgetArgument(t, 0);
      x_75 = ATgetArgument(t, 1);
      y_75 = ATgetArgument(t, 2);
      z_75 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_76);
  v_75 = t;
  t = z_75;
  t = topdown_1_0(k_7, t);
  t = simplify_0_0(t);
  a_76 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, w_75, x_75, y_75, a_76);
  p_10 = t;
  t = SSLsetAnnotations(p_10, v_75);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = LiftPrimArgs_0_0(t);
          ;
          LocalPopChoice(u_33);
        }
      else
        {
          t = s_33;
          {
            ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL;
            e_76 = t;
            if(match_cons(t, sym_CallT_3))
              {
                f_76 = ATgetArgument(t, 0);
                g_76 = ATgetArgument(t, 1);
                h_76 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = e_76;
            t = c_12(f_76, g_76, h_76, t);
          }
        }
      ;
      LocalPopChoice(r_33);
    }
  else
    {
      t = q_33;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_6, default_usage_0_0, _id, y_6, t);
  return(t);
}
