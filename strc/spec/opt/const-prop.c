#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cong_2;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_As_2;
Symbol sym_Choice_2;
Symbol sym_GChoice_2;
Symbol sym_Fail_0;
Symbol sym_Let_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Bagof_1;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
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
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
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
Symbol sym_Hashtable_1;
static void init_module_constructors (void)
{
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
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
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
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
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
}
ATerm term_z_35;
ATerm term_m_35;
ATerm term_j_35;
ATerm term_g_35;
ATerm term_f_35;
ATerm term_w_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_n_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_m_33;
ATerm term_h_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_f_32;
ATerm term_d_32;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_l_31;
ATerm term_g_31;
ATerm term_f_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_j_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_d_29;
ATerm term_a_29;
ATerm term_x_28;
ATerm term_g_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_t_25;
ATerm term_v_24;
ATerm term_x_20;
ATerm term_d_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_r_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_d_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_w_13);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_a_20);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATempty);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_h_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym__2, term_q_30, term_d_13);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_q_31);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_j_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym__2, term_b_31, term_c_31);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym__2, term_b_33, term_d_13);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_e_33, term_d_13);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym__2, term_j_32, term_d_13);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym__3, term_b_31, term_c_31, (ATerm) ATempty);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_b_33);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(sym__2, term_f_35, term_d_13);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm q_6 (ATerm x_85 (ATerm), ATerm y_21, ATerm z_21, ATerm t);
static ATerm v_0 (ATerm t);
static ATerm r_6 (ATerm v_85 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm exec_maybe_1_0 (ATerm o_85 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm t_6 (ATerm y_85 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm g_6 (ATerm s_4, ATerm t_4, ATerm u_4, ATerm t);
ATerm isect_CurrentTerm_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm z_10 (ATerm g_9, ATerm k_9, ATerm l_9, ATerm t);
ATerm isect_Binding_0_0 (ATerm t);
static ATerm u_6 (ATerm s_55, ATerm r_55, ATerm t);
ATerm save_CurrentTerm_0_0 (ATerm t);
static ATerm v_6 (ATerm o_58, ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_Binding_0_0 (ATerm t);
ATerm prop_abstract_choice_2_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm t);
ATerm prop_choice_1_0 (ATerm b_86 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm prop_traversal_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm prop_call_1_0 (ATerm m_0 (ATerm), ATerm t);
static ATerm k_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm w_6 (ATerm w_85 (ATerm), ATerm t_21, ATerm t);
static ATerm x_5 (ATerm t);
ATerm prop_build_0_0 (ATerm t);
static ATerm x_6 (ATerm s_107 (ATerm), ATerm l_44, ATerm j_44, ATerm t);
ATerm oncetd_1_0 (ATerm b_89 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm y_93 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm b_110 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm y_6 (ATerm m_22, ATerm n_22, ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t);
static ATerm j_7 (ATerm r_119 (ATerm), ATerm n_63, ATerm o_63, ATerm q_63, ATerm p_63, ATerm t);
ATerm at_end_1_0 (ATerm a_95 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_27 (ATerm a_27, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm c_7 (ATerm e_673, ATerm j_673, ATerm p_64, ATerm t);
ATerm while_not_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t);
ATerm for_3_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm a_39 (ATerm t_33, ATerm u_33, ATerm x_33, ATerm t);
static ATerm d_39 (ATerm q_34, ATerm r_34, ATerm s_34, ATerm t);
static ATerm e_39 (ATerm h_35, ATerm i_35, ATerm k_35, ATerm t);
static ATerm f_39 (ATerm k_36, ATerm n_36, ATerm o_36, ATerm t);
static ATerm g_39 (ATerm v_36, ATerm w_36, ATerm y_36, ATerm t);
static ATerm f_7 (ATerm t);
ATerm prop_pattern_match_0_0 (ATerm t);
ATerm CurrentTerm_0_0 (ATerm t);
static ATerm m_7 (ATerm a_55, ATerm b_55, ATerm t);
ATerm Binding_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm p_89 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm prop_match_0_0 (ATerm t);
ATerm cp_0_0 (ATerm t);
static ATerm n_7 (ATerm u_54, ATerm v_54, ATerm t);
ATerm end_scope_1_0 (ATerm p_107 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_107 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm t);
ATerm map_1_0 (ATerm j_94 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm t);
static ATerm p_7 (ATerm b_40, ATerm c_40, ATerm t);
static ATerm q_7 (ATerm w_24, ATerm x_24, ATerm t);
static ATerm s_7 (ATerm a_94 (ATerm), ATerm g_172, ATerm c_25, ATerm t);
static ATerm r_7 (ATerm s_24, ATerm t_24, ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm r_111 (ATerm), ATerm t);
static ATerm e_51 (ATerm y_50, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_7 (ATerm y_24, ATerm t);
static ATerm u_7 (ATerm u_38, ATerm v_38, ATerm t);
static ATerm v_7 (ATerm d_40, ATerm e_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm t_52 (ATerm s_51, ATerm t);
static ATerm u_52 (ATerm w_51, ATerm x_51, ATerm y_51, ATerm t);
static ATerm v_52 (ATerm g_52, ATerm h_52, ATerm i_52, ATerm t);
static ATerm w_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_94 (ATerm), ATerm t);
static ATerm b_8 (ATerm i_56, ATerm j_56, ATerm t);
ATerm if_verbose2_1_0 (ATerm a_110 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_8 (ATerm u_49, ATerm v_49, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm h_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_8 (ATerm p_54, ATerm q_54, ATerm o_54, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_7 (ATerm x_42, ATerm y_42, ATerm t);
ATerm foldr_2_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_109 (ATerm), ATerm t);
static ATerm z_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm need_help_1_0 (ATerm p_112 (ATerm), ATerm t);
static ATerm f_8 (ATerm h_58, ATerm i_58, ATerm j_58, ATerm t);
static ATerm g_8 (ATerm k_58, ATerm l_58, ATerm t);
ATerm lookup_table_0_1 (ATerm b_56, ATerm t);
ATerm new_hashtable_0_2 (ATerm p_58, ATerm q_58, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_7 (ATerm m_58, ATerm n_58, ATerm t);
static ATerm a_8 (ATerm r_58, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm s_114 (ATerm), ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm parse_options_1_0 (ATerm r_114 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm u_112 (ATerm), ATerm t);
static ATerm b_11 (ATerm t);
static ATerm n_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm r_11 (ATerm t);
ATerm iowrap_3_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm c_112 (ATerm), ATerm t);
static ATerm y_11 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm y_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm c_13 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_0 = NULL,z_0 = NULL,c_1 = NULL,d_1 = NULL,f_1 = NULL;
  y_0 = t;
  t = term_d_13;
  t = whoami_0_0(t);
  z_0 = t;
  t = term_h_13;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_13), z_0), term_j_13);
  f_1 = t;
  t = SSL_printnl(d_1, f_1);
  t = term_l_13;
  c_1 = t;
  t = SSL_exit(c_1);
  t = y_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm s_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
  w_1 = t;
  t = term_w_13;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_1), term_w_13);
  t = x_6(s_0, w_1, x_1, t);
  t = v_1;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm q_6 (ATerm x_85 (ATerm), ATerm y_21, ATerm z_21, ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    ATerm g_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,n_0 = NULL;
    g_1 = t;
    t = z_21;
    t = map_1_0(r_0, t);
    t = g_1;
    if(match_cons(t, sym_SDefT_4))
      {
        j_1 = ATgetArgument(t, 0);
        l_1 = ATgetArgument(t, 1);
        o_1 = ATgetArgument(t, 2);
        p_1 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_1);
    i_1 = t;
    t = (ATerm) ATempty;
    r_1 = t;
    t = term_w_13;
    s_1 = t;
    t = term_z_13;
    t = x_6(t_0, r_1, s_1, t);
    t = p_1;
    t = x_85(t);
    q_1 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, j_1, l_1, o_1, q_1);
    n_0 = t;
    t = SSLsetAnnotations(n_0, i_1);
    return(t);
  }
  t = scope_2_0(a_0, p_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm r_6 (ATerm v_85 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,x_4 = NULL;
  y_1 = t;
  t = (ATerm) ATempty;
  z_1 = t;
  t = term_w_13;
  a_2 = t;
  t = term_z_13;
  t = x_6(v_0, z_1, a_2, t);
  t = y_1;
  if(match_cons(t, sym_Not_1))
    {
      c_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_1);
  b_2 = t;
  t = c_2;
  t = exec_maybe_1_0(v_85, t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, d_2);
  x_4 = t;
  t = SSLsetAnnotations(x_4, b_2);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm o_85 (ATerm), ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  g_2 = t;
  t = (ATerm) ATempty;
  l_2 = t;
  t = term_w_13;
  m_2 = t;
  t = term_z_13;
  t = x_6(w_0, l_2, m_2, t);
  t = g_2;
  t = save_Binding_0_0(t);
  e_2 = t;
  t = g_2;
  t = o_85(t);
  f_2 = t;
  t = (ATerm) ATempty;
  j_2 = t;
  t = term_w_13;
  k_2 = t;
  t = term_z_13;
  t = x_6(x_0, j_2, k_2, t);
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, e_2);
  t = u_6(h_2, e_2, t);
  t = f_2;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm t_6 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm n_2 = NULL,p_2 = NULL,r_2 = NULL,s_2 = NULL,w_2 = NULL,y_2 = NULL,a_3 = NULL,c_3 = NULL,e_3 = NULL,f_3 = NULL,z_4 = NULL;
  r_2 = t;
  t = save_Binding_0_0(t);
  p_2 = t;
  t = save_CurrentTerm_0_0(t);
  n_2 = t;
  t = r_2;
  if(match_cons(t, sym_Let_2))
    {
      w_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_2);
  s_2 = t;
  t = w_2;
  {
    static ATerm n_1 (ATerm t)
    {
      ATerm g_3 = NULL,m_3 = NULL,b_4 = NULL,c_4 = NULL;
      g_3 = t;
      t = (ATerm) ATempty;
      b_4 = t;
      t = term_w_13;
      c_4 = t;
      t = term_z_13;
      t = x_6(u_1, b_4, c_4, t);
      t = term_r_13;
      t = table_destroy_0_0(t);
      t = term_r_13;
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_r_13, p_2);
      t = u_6(m_3, p_2, t);
      t = g_3;
      t = y_85(t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  a_3 = t;
  t = term_x_13;
  t = table_destroy_0_0(t);
  t = term_x_13;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, n_2);
  t = u_6(f_3, n_2, t);
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, p_2);
  t = u_6(e_3, p_2, t);
  t = y_2;
  t = y_85(t);
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, a_3, c_3);
  z_4 = t;
  t = SSLsetAnnotations(z_4, s_2);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,l_5 = NULL,p_5 = NULL;
  p_5 = t;
  if(match_cons(t, sym__2))
    {
      h_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
      t = i_5;
      {
        ATerm c_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_5 = ATgetFirst((ATermList) t);
                {
                  ATerm j_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_14);
            t = j_5;
            {
              ATerm l_14 = t;
              int n_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm o_14 = ATgetArgument(t, 0);
                      l_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_14);
                  t = h_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = p_5;
                    }
                  else
                    {
                      ATerm p_14 = t;
                      int u_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_6(h_5, l_5, p_5, t);
                          LocalPopChoice(u_14);
                        }
                      else
                        {
                          t = p_14;
                          t = p_5;
                        }
                    }
                }
              else
                {
                  t = l_14;
                  t = h_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = p_5;
                    }
                  else
                    {
                      t = p_5;
                    }
                }
            }
          }
        else
          {
            t = c_14;
            t = h_5;
            if(match_cons(t, sym_Scopes_0))
              {
                t = p_5;
              }
            else
              {
                t = p_5;
              }
          }
      }
    }
  else
    {
      t = p_5;
    }
  return(t);
}
static ATerm g_6 (ATerm s_4, ATerm t_4, ATerm u_4, ATerm t)
{
  t = u_4;
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = term_x_13;
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_13, s_4);
        t = b_8(q_0, s_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_15 = ATgetFirst((ATermList) t);
            if(match_cons(c_15, sym_Defined_2))
              {
                ATerm l_15 = ATgetArgument(c_15, 0);
                if((t_4 != ATgetArgument(c_15, 1)))
                  {
                    _fail(ATgetArgument(c_15, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm g_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = u_4;
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = (ATerm) ATmakeAppl(sym__2, s_4, (ATerm) ATinsert(ATempty, term_w_13));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm p_4 = NULL,r_4 = NULL;
  t = map_1_0(i_2, t);
  p_4 = t;
  t = term_x_13;
  t = table_destroy_0_0(t);
  t = term_x_13;
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, p_4);
  t = u_6(r_4, p_4, t);
  t = p_4;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm v_9 = NULL,b_10 = NULL,d_10 = NULL,l_10 = NULL,p_10 = NULL;
  p_10 = t;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
      t = b_10;
      {
        ATerm m_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_10 = ATgetFirst((ATermList) t);
                {
                  ATerm r_15 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_15);
            t = d_10;
            {
              ATerm u_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm a_16 = ATgetArgument(t, 0);
                      l_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(w_15);
                  t = v_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = p_10;
                    }
                  else
                    {
                      ATerm b_16 = t;
                      int d_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_10(v_9, l_10, p_10, t);
                          LocalPopChoice(d_16);
                        }
                      else
                        {
                          t = b_16;
                          t = p_10;
                        }
                    }
                }
              else
                {
                  t = u_15;
                  t = v_9;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = p_10;
                    }
                  else
                    {
                      t = p_10;
                    }
                }
            }
          }
        else
          {
            t = m_15;
            t = v_9;
            if(match_cons(t, sym_Scopes_0))
              {
                t = p_10;
              }
            else
              {
                t = p_10;
              }
          }
      }
    }
  else
    {
      t = p_10;
    }
  return(t);
}
static ATerm z_10 (ATerm g_9, ATerm k_9, ATerm l_9, ATerm t)
{
  t = l_9;
  {
    ATerm e_16 = t;
    int i_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = term_r_13;
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_13, g_9);
        t = b_8(u_0, g_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_16 = ATgetFirst((ATermList) t);
            if(match_cons(j_16, sym_Defined_2))
              {
                ATerm l_16 = ATgetArgument(j_16, 0);
                if((k_9 != ATgetArgument(j_16, 1)))
                  {
                    _fail(ATgetArgument(j_16, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm k_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = l_9;
        LocalPopChoice(i_16);
      }
    else
      {
        t = e_16;
        t = (ATerm) ATmakeAppl(sym__2, g_9, (ATerm) ATinsert(ATempty, term_w_13));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm b_9 = NULL,f_9 = NULL;
  t = map_1_0(j_3, t);
  b_9 = t;
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  f_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, b_9);
  t = u_6(f_9, b_9, t);
  t = b_9;
  return(t);
}
static ATerm u_6 (ATerm s_55, ATerm r_55, ATerm t)
{
  static ATerm k_3 (ATerm t)
  {
    ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
    if(match_cons(t, sym__2))
      {
        i_11 = ATgetArgument(t, 0);
        j_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, s_55, i_11, j_11);
    t = lookup_table_0_1(s_55, t);
    if(match_cons(t, sym_Hashtable_1))
      {
        k_11 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = f_8(i_11, j_11, k_11, t);
    t = (ATerm) ATmakeAppl(sym__3, s_55, i_11, j_11);
    return(t);
  }
  t = r_55;
  t = map_1_0(k_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_x_13;
  t = table_getlist_0_0(t);
  return(t);
}
static ATerm v_6 (ATerm o_58, ATerm t)
{
  t = SSL_hashtable_keys(o_58);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_11 = NULL,t_11 = NULL;
  static ATerm l_3 (ATerm t)
  {
    ATerm u_11 = NULL,v_11 = NULL;
    u_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), u_11);
    t = b_8(not_null(q_11), u_11, t);
    v_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_11, v_11);
    return(t);
  }
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  t = lookup_table_0_1(q_11, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_6(t_11, t);
  t = map_1_0(l_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_r_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  t = save_Binding_0_0(t);
  w_11 = t;
  t = save_CurrentTerm_0_0(t);
  a_12 = t;
  t = i_12;
  t = c_86(t);
  h_12 = t;
  t = save_Binding_0_0(t);
  b_12 = t;
  t = term_r_13;
  t = table_destroy_0_0(t);
  t = term_r_13;
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_13, w_11);
  t = u_6(k_12, w_11, t);
  t = w_11;
  t = save_CurrentTerm_0_0(t);
  c_12 = t;
  t = term_x_13;
  t = table_destroy_0_0(t);
  t = term_x_13;
  j_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, a_12);
  t = u_6(j_12, a_12, t);
  t = h_12;
  t = d_86(t);
  g_12 = t;
  t = b_12;
  t = isect_Binding_0_0(t);
  t = c_12;
  t = isect_CurrentTerm_0_0(t);
  t = g_12;
  return(t);
}
ATerm prop_choice_1_0 (ATerm b_86 (ATerm), ATerm t)
{
  ATerm m_12 = NULL;
  m_12 = t;
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm o_16 = ATgetArgument(t, 0);
            ATerm p_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(n_16);
        {
          static ATerm y_3 (ATerm t)
          {
            ATerm s_12 = NULL,t_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,d_5 = NULL;
            x_12 = t;
            if(match_cons(t, sym_Choice_2))
              {
                t_12 = ATgetArgument(t, 0);
                v_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_12);
            s_12 = t;
            t = t_12;
            t = b_86(t);
            w_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, w_12, v_12);
            d_5 = t;
            t = SSLsetAnnotations(d_5, s_12);
            return(t);
          }
          static ATerm z_3 (ATerm t)
          {
            ATerm a_13 = NULL,b_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,m_5 = NULL;
            g_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                b_13 = ATgetArgument(t, 0);
                e_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_13);
            a_13 = t;
            t = e_13;
            t = b_86(t);
            f_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, b_13, f_13);
            m_5 = t;
            t = SSLsetAnnotations(m_5, a_13);
            return(t);
          }
          t = m_12;
          t = prop_abstract_choice_2_0(y_3, z_3, t);
        }
      }
    else
      {
        t = m_16;
        {
          ATerm r_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm t_16 = ATgetArgument(t, 0);
                  ATerm u_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(s_16);
              {
                static ATerm a_4 (ATerm t)
                {
                  ATerm i_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,n_5 = NULL;
                  p_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      m_13 = ATgetArgument(t, 0);
                      n_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(p_13);
                  i_13 = t;
                  t = m_13;
                  t = b_86(t);
                  o_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, o_13, n_13);
                  n_5 = t;
                  t = SSLsetAnnotations(n_5, i_13);
                  return(t);
                }
                static ATerm d_4 (ATerm t)
                {
                  ATerm q_13 = NULL,u_13 = NULL,y_13 = NULL,a_14 = NULL,b_14 = NULL,q_5 = NULL;
                  b_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      u_13 = ATgetArgument(t, 0);
                      y_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(b_14);
                  q_13 = t;
                  t = y_13;
                  t = b_86(t);
                  a_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, u_13, a_14);
                  q_5 = t;
                  t = SSLsetAnnotations(q_5, q_13);
                  return(t);
                }
                t = m_12;
                t = prop_abstract_choice_2_0(a_4, d_4, t);
              }
            }
          else
            {
              t = r_16;
              {
                ATerm v_16 = t;
                int x_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm z_16 = ATgetArgument(t, 0);
                        ATerm b_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_16);
                    {
                      static ATerm f_4 (ATerm t)
                      {
                        ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,m_14 = NULL,t_5 = NULL;
                        m_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            f_14 = ATgetArgument(t, 0);
                            g_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(m_14);
                        e_14 = t;
                        t = f_14;
                        t = b_86(t);
                        h_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, h_14, g_14);
                        t_5 = t;
                        t = SSLsetAnnotations(t_5, e_14);
                        return(t);
                      }
                      static ATerm g_4 (ATerm t)
                      {
                        ATerm q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,v_14 = NULL,d_6 = NULL;
                        v_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            r_14 = ATgetArgument(t, 0);
                            s_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_14);
                        q_14 = t;
                        t = s_14;
                        t = b_86(t);
                        t_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, r_14, t_14);
                        d_6 = t;
                        t = SSLsetAnnotations(d_6, q_14);
                        return(t);
                      }
                      t = m_12;
                      t = prop_abstract_choice_2_0(f_4, g_4, t);
                    }
                  }
                else
                  {
                    t = v_16;
                    {
                      static ATerm i_4 (ATerm t)
                      {
                        ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,h_6 = NULL,e_6 = NULL;
                        q_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            i_15 = ATgetArgument(t, 0);
                            j_15 = ATgetArgument(t, 1);
                            k_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(q_15);
                        f_15 = t;
                        t = i_15;
                        t = b_86(t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, o_15, j_15, k_15);
                        e_6 = t;
                        t = SSLsetAnnotations(e_6, f_15);
                        p_15 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            x_14 = ATgetArgument(t, 0);
                            y_14 = ATgetArgument(t, 1);
                            d_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(p_15);
                        w_14 = t;
                        t = y_14;
                        t = b_86(t);
                        e_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_14, e_15, d_15);
                        h_6 = t;
                        t = SSLsetAnnotations(h_6, w_14);
                        return(t);
                      }
                      static ATerm j_4 (ATerm t)
                      {
                        ATerm v_15 = NULL,x_15 = NULL,c_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_6 = NULL;
                        h_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            x_15 = ATgetArgument(t, 0);
                            c_16 = ATgetArgument(t, 1);
                            f_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_16);
                        v_15 = t;
                        t = f_16;
                        t = b_86(t);
                        g_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, x_15, c_16, g_16);
                        i_6 = t;
                        t = SSLsetAnnotations(i_6, v_15);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm d_17 = ATgetArgument(t, 0);
                          ATerm f_17 = ATgetArgument(t, 1);
                          ATerm g_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = m_12;
                      t = prop_abstract_choice_2_0(i_4, j_4, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_17 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,h_1 = NULL,k_1 = NULL,m_1 = NULL,m_8 = NULL;
      e_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm m_17 = ATgetArgument(t, 0);
          ATerm n_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      a_1 = t;
      t = term_w_13;
      b_1 = t;
      t = term_z_13;
      t = x_6(k_4, a_1, b_1, t);
      t = e_17;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          k_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_17);
      e_1 = t;
      t = k_1;
      {
        static ATerm l_4 (ATerm t)
        {
          t = exec_maybe_1_0(o_0, t);
          return(t);
        }
        t = map_1_0(l_4, t);
      }
      m_1 = t;
      t = (ATerm) ATmakeAppl(sym_Cong_2, h_1, m_1);
      m_8 = t;
      t = SSLsetAnnotations(m_8, e_1);
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      {
        ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
        static ATerm o_4 (ATerm t)
        {
          t = exec_maybe_1_0(o_0, t);
          return(t);
        }
        ATerm p_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm t_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(s_17);
          }
        else
          {
            t = p_17;
            {
              ATerm o_17 = NULL;
              o_17 = t;
              {
                ATerm u_17 = t;
                int w_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm a_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_17);
                    t = o_17;
                  }
                else
                  {
                    t = u_17;
                    {
                      ATerm d_18 = t;
                      int j_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm k_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_18);
                          t = o_17;
                        }
                      else
                        {
                          t = d_18;
                          {
                            ATerm n_18 = t;
                            int p_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm q_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(p_18);
                                t = o_17;
                              }
                            else
                              {
                                t = n_18;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm r_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = o_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        j_17 = t;
        t = (ATerm) ATempty;
        k_17 = t;
        t = term_w_13;
        l_17 = t;
        t = term_z_13;
        t = x_6(m_4, k_17, l_17, t);
        t = j_17;
        t = SRTS_one(o_4, t);
      }
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm d_3 = NULL,h_3 = NULL,i_3 = NULL,p_9 = NULL;
  t = Binding_0_0(t);
  i_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_3);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_3);
  p_9 = t;
  t = SSLsetAnnotations(p_9, d_3);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,s_9 = NULL;
  t = Binding_0_0(t);
  x_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_3);
  v_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_3);
  s_9 = t;
  t = SSLsetAnnotations(s_9, v_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm w_19 = NULL;
  w_19 = t;
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            ATerm v_18 = ATgetArgument(t, 1);
            ATerm x_18 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(t_18);
        {
          ATerm o_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,b_3 = NULL,r_9 = NULL;
          t = (ATerm) ATempty;
          o_2 = t;
          t = term_w_13;
          q_2 = t;
          t = term_z_13;
          t = x_6(q_4, o_2, q_2, t);
          t = w_19;
          if(match_cons(t, sym_PrimT_3))
            {
              u_2 = ATgetArgument(t, 0);
              v_2 = ATgetArgument(t, 1);
              x_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_19);
          t_2 = t;
          t = v_2;
          {
            static ATerm v_4 (ATerm t)
            {
              t = exec_maybe_1_0(m_0, t);
              return(t);
            }
            t = map_1_0(v_4, t);
          }
          z_2 = t;
          t = x_2;
          t = alltd_1_0(w_4, t);
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym_PrimT_3, u_2, z_2, b_3);
          r_9 = t;
          t = SSLsetAnnotations(r_9, t_2);
        }
      }
    else
      {
        t = s_18;
        {
          ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,g_11 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm a_19 = ATgetArgument(t, 0);
              ATerm b_19 = ATgetArgument(t, 1);
              ATerm d_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          n_3 = t;
          t = term_w_13;
          o_3 = t;
          t = term_z_13;
          t = x_6(y_4, n_3, o_3, t);
          t = w_19;
          if(match_cons(t, sym_CallT_3))
            {
              q_3 = ATgetArgument(t, 0);
              r_3 = ATgetArgument(t, 1);
              s_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_19);
          p_3 = t;
          t = r_3;
          {
            static ATerm b_5 (ATerm t)
            {
              t = exec_maybe_1_0(m_0, t);
              return(t);
            }
            t = map_1_0(b_5, t);
          }
          t_3 = t;
          t = s_3;
          t = alltd_1_0(g_5, t);
          u_3 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, q_3, t_3, u_3);
          g_11 = t;
          t = SSLsetAnnotations(g_11, p_3);
        }
      }
  }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm q_20 = NULL,u_20 = NULL,v_20 = NULL;
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_20);
  u_20 = t;
  t = term_w_13;
  v_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_20), term_w_13);
  t = x_6(s_5, u_20, v_20, t);
  t = q_20;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm w_6 (ATerm w_85 (ATerm), ATerm t_21, ATerm t)
{
  static ATerm o_5 (ATerm t)
  {
    ATerm i_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,y_16 = NULL;
    i_20 = t;
    t = t_21;
    t = map_1_0(r_5, t);
    t = i_20;
    if(match_cons(t, sym_Scope_2))
      {
        m_20 = ATgetArgument(t, 0);
        n_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_20);
    l_20 = t;
    t = n_20;
    t = w_85(t);
    o_20 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, m_20, o_20);
    y_16 = t;
    t = SSLsetAnnotations(y_16, l_20);
    p_20 = t;
    {
      ATerm f_19 = t;
      int k_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
          t = CurrentTerm_0_0(t);
          {
            static ATerm u_5 (ATerm t)
            {
              ATerm c_21 = NULL;
              static ATerm v_5 (ATerm t)
              {
                if(((c_21 != NULL) && (c_21 != t)))
                  _fail(t);
                else
                  c_21 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    c_21 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = t_21;
              t = fetch_1_0(v_5, t);
              return(t);
            }
            t = oncetd_1_0(u_5, t);
          }
          z_20 = t;
          t = (ATerm) ATempty;
          a_21 = t;
          t = term_w_13;
          b_21 = t;
          t = term_z_13;
          t = x_6(w_5, a_21, b_21, t);
          t = z_20;
          LocalPopChoice(k_19);
        }
      else
        {
          t = f_19;
        }
    }
    t = p_20;
    return(t);
  }
  t = scope_2_0(k_5, o_5, t);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,n_21 = NULL,o_21 = NULL,q_21 = NULL,w_21 = NULL,b_22 = NULL,g_22 = NULL,a_17 = NULL;
  g_22 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_22);
  o_21 = t;
  t = q_21;
  t = alltd_1_0(Binding_0_0, t);
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, w_21);
  a_17 = t;
  t = SSLsetAnnotations(a_17, o_21);
  b_22 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  k_21 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_19, j_21);
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_19, j_21));
  t = x_6(x_5, k_21, n_21, t);
  t = b_22;
  return(t);
}
static ATerm x_6 (ATerm s_107 (ATerm), ATerm l_44, ATerm j_44, ATerm t)
{
  ATerm k_22 = NULL,o_22 = NULL,y_22 = NULL,a_23 = NULL,j_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  a_23 = t;
  t = s_107(t);
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_22, l_44, j_44);
  t = c_8(k_22, l_44, j_44, t);
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_23 = NULL;
        t = term_q_19;
        s_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_22, term_q_19);
        t = b_8(k_22, s_23, t);
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_22 = ATgetFirst((ATermList) t);
      y_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_22, term_q_19, (ATerm) ATinsert(CheckATermList(y_22), (ATerm) ATinsert(CheckATermList(o_22), l_44)));
  t = lookup_table_0_1(k_22, t);
  r_23 = t;
  t = term_q_19;
  j_23 = t;
  t = (ATerm) ATinsert(CheckATermList(y_22), (ATerm) ATinsert(CheckATermList(o_22), l_44));
  p_23 = t;
  t = r_23;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(j_23, p_23, q_23, t);
  t = a_23;
  return(t);
}
ATerm oncetd_1_0 (ATerm b_89 (ATerm), ATerm t)
{
  static ATerm t_23 (ATerm t)
  {
    ATerm r_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_89(t);
        LocalPopChoice(u_19);
      }
    else
      {
        t = r_19;
        t = SRTS_one(t_23, t);
      }
    return(t);
  }
  t = t_23(t);
  return(t);
}
ATerm debug_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm u_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL;
  u_23 = t;
  t = y_93(t);
  w_23 = t;
  t = term_h_13;
  x_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_23), w_23);
  y_23 = t;
  t = SSL_printnl(x_23, y_23);
  t = u_23;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm b_110 (ATerm), ATerm t)
{
  ATerm e_24 = NULL;
  e_24 = t;
  {
    ATerm v_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
        t = term_z_19;
        h_24 = t;
        t = term_a_20;
        i_24 = t;
        t = term_b_20;
        t = b_8(h_24, i_24, t);
        g_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_24, term_d_20);
        t = geq_0_0(t);
        t = e_24;
        t = b_110(t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = v_19;
        t = e_24;
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm u_24 = NULL;
  u_24 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = u_24;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm f_20 = ATgetArgument(t, 0);
          ATerm h_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_24;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_r_13;
  return(t);
}
static ATerm y_6 (ATerm m_22, ATerm n_22, ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,r_24 = NULL;
  p_24 = t;
  t = n_22;
  {
    ATerm w_20 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(y_5, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, m_22);
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_20, n_22);
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, m_22), (ATerm) ATmakeAppl(sym_Defined_2, term_x_20, n_22));
  t = x_6(z_5, q_24, r_24, t);
  t = p_24;
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_28 = NULL,l_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  p_28 = t;
  if(match_cons(t, sym__2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_28 = ATgetFirst((ATermList) t);
      t_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_28;
  if(match_cons(t, sym__2))
    {
      j_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
      {
        ATerm y_20 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_28;
            if((q_28 != t))
              {
                _fail(t);
              }
            t = l_28;
            LocalPopChoice(d_21);
          }
        else
          {
            t = y_20;
            t = (ATerm) ATmakeAppl(sym__2, q_28, t_28);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, q_28, t_28);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      if(((ATgetType(e_21) != AT_LIST) || !(ATisEmpty(e_21))))
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
static ATerm f_6 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,d_31 = NULL,e_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
        {
          z_30 = ATgetFirst((ATermList) g_21);
          a_31 = (ATerm) ATgetNext((ATermList) g_21);
        }
      else
        _fail(t);
      {
        ATerm h_21 = ATgetArgument(t, 1);
        if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
          {
            d_31 = ATgetFirst((ATermList) h_21);
            e_31 = (ATerm) ATgetNext((ATermList) h_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_30, d_31), (ATerm) ATmakeAppl(sym__2, a_31, e_31));
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm m_31 = NULL,p_31 = NULL;
  if(match_cons(t, sym__2))
    {
      m_31 = ATgetArgument(t, 0);
      p_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_31), m_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm i_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL;
  i_30 = t;
  {
    ATerm i_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_21 = ATgetArgument(t, 0);
            ATerm p_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(l_21);
        t = i_30;
      }
    else
      {
        t = i_21;
        {
          ATerm y_30 = NULL;
          if(match_cons(t, sym__3))
            {
              k_30 = ATgetArgument(t, 0);
              l_30 = ATgetArgument(t, 1);
              m_30 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, k_30, l_30);
          t = genzip_4_0(a_6, f_6, j_6, _id, t);
          y_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_30, m_30);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm x_114 (ATerm), ATerm y_114 (ATerm), ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  static ATerm k_6 (ATerm t)
  {
    ATerm n_4 = NULL;
    t = x_114(t);
    n_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_4, not_null(w_31));
    t = lookup_0_0(t);
    t = y_114(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((w_31 != NULL) && (w_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_31 = ATgetArgument(t, 0);
      v_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_31;
  t = alltd_1_0(k_6, t);
  return(t);
}
static ATerm j_7 (ATerm r_119 (ATerm), ATerm n_63, ATerm o_63, ATerm q_63, ATerm p_63, ATerm t)
{
  ATerm e_32 = NULL,i_32 = NULL;
  t = n_63;
  t = r_119(t);
  t = (ATerm) ATmakeAppl(sym__2, n_63, o_63);
  {
    ATerm r_21 = t;
    if((PushChoice() == 0))
      {
        ATerm q_32 = NULL,r_32 = NULL;
        if(match_cons(t, sym__2))
          {
            q_32 = ATgetArgument(t, 0);
            r_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_32;
        {
          static ATerm l_6 (ATerm t)
          {
            if((q_32 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(l_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, n_63, o_63)), (ATerm) ATmakeAppl(sym__2, p_63, q_63));
  t = substitute_2_0(r_119, _id, t);
  if(match_cons(t, sym__2))
    {
      e_32 = ATgetArgument(t, 0);
      i_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_32, (ATerm) ATinsert(CheckATermList(e_32), (ATerm) ATmakeAppl(sym__2, n_63, o_63)));
  return(t);
}
ATerm at_end_1_0 (ATerm a_95 (ATerm), ATerm t)
{
  static ATerm t_26 (ATerm t)
  {
    ATerm m_26 = NULL,p_26 = NULL,q_26 = NULL;
    q_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_26 = ATgetFirst((ATermList) t);
        p_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_4 = NULL,h_4 = NULL,c_17 = NULL;
          t = SSLgetAnnotations(q_26);
          e_4 = t;
          t = p_26;
          t = t_26(t);
          h_4 = t;
          t = (ATerm) ATinsert(CheckATermList(h_4), m_26);
          c_17 = t;
          t = SSLsetAnnotations(c_17, e_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_26;
        t = a_95(t);
      }
    return(t);
  }
  t = t_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,q_25 = NULL;
  i_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_25;
    }
  else
    {
      static ATerm m_6 (ATerm t)
      {
        t = not_null(q_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_25 = ATgetFirst((ATermList) t);
          if(((q_25 != NULL) && (q_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_25;
      t = at_end_1_0(m_6, t);
    }
  return(t);
}
static ATerm k_27 (ATerm a_27, ATerm t)
{
  ATerm b_27 = NULL;
  t = SSL_explode_term(a_27);
  if(match_cons(t, sym__2))
    {
      ATerm s_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_27;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm d_27 = NULL,e_27 = NULL,h_27 = NULL;
  h_27 = t;
  if(match_cons(t, sym__2))
    {
      d_27 = ATgetArgument(t, 0);
      e_27 = ATgetArgument(t, 1);
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_6 (ATerm t)
            {
              t = e_27;
              return(t);
            }
            t = d_27;
            t = at_end_1_0(n_6, t);
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            t = k_27(h_27, t);
          }
      }
    }
  else
    {
      t = k_27(h_27, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm n_96 (ATerm), ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm t)
{
  static ATerm u_29 (ATerm t)
  {
    ATerm x_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_96(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = x_21;
        {
          ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,q_17 = NULL;
          t = o_96(t);
          t_29 = t;
          if(match_cons(t, sym__2))
            {
              n_29 = ATgetArgument(t, 0);
              o_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_29);
          m_29 = t;
          t = n_29;
          t = q_96(t);
          r_29 = t;
          t = o_29;
          t = u_29(t);
          s_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_29, s_29);
          q_17 = t;
          t = SSLsetAnnotations(q_17, m_29);
          t = p_96(t);
        }
      }
    return(t);
  }
  t = u_29(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(((ATgetType(c_22) != AT_LIST) || !(ATisEmpty(c_22))))
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(((ATgetType(d_22) != AT_LIST) || !(ATisEmpty(d_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm v_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_22 = ATgetArgument(t, 0);
      if(((ATgetType(e_22) == AT_LIST) && !(ATisEmpty(e_22))))
        {
          v_27 = ATgetFirst((ATermList) e_22);
          y_27 = (ATerm) ATgetNext((ATermList) e_22);
        }
      else
        _fail(t);
      {
        ATerm f_22 = ATgetArgument(t, 1);
        if(((ATgetType(f_22) == AT_LIST) && !(ATisEmpty(f_22))))
          {
            z_27 = ATgetFirst((ATermList) f_22);
            a_28 = (ATerm) ATgetNext((ATermList) f_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_27, z_27), (ATerm) ATmakeAppl(sym__2, y_27, a_28));
  return(t);
}
static ATerm s_6 (ATerm t)
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
static ATerm c_7 (ATerm e_673, ATerm j_673, ATerm p_64, ATerm t)
{
  ATerm o_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
  t = SSL_explode_term(j_673);
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(e_673);
  if(match_cons(t, sym__2))
    {
      if((o_27 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_27, r_27);
  t = genzip_4_0(o_6, p_6, s_6, _id, t);
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_27, p_64);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm o_87 (ATerm), ATerm p_87 (ATerm), ATerm t)
{
  static ATerm u_32 (ATerm t)
  {
    ATerm h_22 = t;
    int i_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_87(t);
        LocalPopChoice(i_22);
      }
    else
      {
        t = h_22;
        t = p_87(t);
        t = u_32(t);
      }
    return(t);
  }
  t = u_32(t);
  return(t);
}
ATerm for_3_0 (ATerm r_87 (ATerm), ATerm s_87 (ATerm), ATerm t_87 (ATerm), ATerm t)
{
  t = r_87(t);
  t = while_not_2_0(s_87, t_87, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm r_33 = NULL;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_33, (ATerm) ATempty);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm s_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_22 = ATgetArgument(t, 0);
      if(((ATgetType(j_22) != AT_LIST) || !(ATisEmpty(j_22))))
        _fail(t);
      s_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_33;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm v_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,e_38 = NULL,i_38 = NULL,k_38 = NULL;
  e_38 = t;
  if(match_cons(t, sym__2))
    {
      i_38 = ATgetArgument(t, 0);
      k_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_37 = ATgetFirst((ATermList) t);
      b_38 = (ATerm) ATgetNext((ATermList) t);
      t = v_37;
      if(match_cons(t, sym__2))
        {
          z_37 = ATgetArgument(t, 0);
          a_38 = ATgetArgument(t, 1);
          {
            ATerm l_22 = t;
            int p_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = a_39(i_38, k_38, e_38, t);
                LocalPopChoice(p_22);
              }
            else
              {
                t = l_22;
                {
                  ATerm q_22 = t;
                  int r_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_38;
                      t = j_7(f_7, z_37, a_38, b_38, k_38, t);
                      LocalPopChoice(r_22);
                    }
                  else
                    {
                      t = q_22;
                      {
                        ATerm s_22 = t;
                        int t_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = d_39(i_38, k_38, e_38, t);
                            LocalPopChoice(t_22);
                          }
                        else
                          {
                            t = s_22;
                            {
                              ATerm u_22 = t;
                              int v_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = e_39(i_38, k_38, e_38, t);
                                  LocalPopChoice(v_22);
                                }
                              else
                                {
                                  t = u_22;
                                  {
                                    ATerm w_22 = t;
                                    int x_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = f_39(i_38, k_38, e_38, t);
                                        LocalPopChoice(x_22);
                                      }
                                    else
                                      {
                                        t = w_22;
                                        t = g_39(i_38, k_38, e_38, t);
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
          ATerm z_22 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_39(i_38, k_38, e_38, t);
              LocalPopChoice(b_23);
            }
          else
            {
              t = z_22;
              {
                ATerm c_23 = t;
                int d_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = d_39(i_38, k_38, e_38, t);
                    LocalPopChoice(d_23);
                  }
                else
                  {
                    t = c_23;
                    {
                      ATerm e_23 = t;
                      int f_23 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = e_39(i_38, k_38, e_38, t);
                          LocalPopChoice(f_23);
                        }
                      else
                        {
                          t = e_23;
                          {
                            ATerm g_23 = t;
                            int h_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = f_39(i_38, k_38, e_38, t);
                                LocalPopChoice(h_23);
                              }
                            else
                              {
                                t = g_23;
                                t = g_39(i_38, k_38, e_38, t);
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
      ATerm i_23 = t;
      int k_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_39(i_38, k_38, e_38, t);
          LocalPopChoice(k_23);
        }
      else
        {
          t = i_23;
          {
            ATerm l_23 = t;
            int m_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = d_39(i_38, k_38, e_38, t);
                LocalPopChoice(m_23);
              }
            else
              {
                t = l_23;
                {
                  ATerm n_23 = t;
                  int o_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = e_39(i_38, k_38, e_38, t);
                      LocalPopChoice(o_23);
                    }
                  else
                    {
                      t = n_23;
                      {
                        ATerm v_23 = t;
                        int z_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = f_39(i_38, k_38, e_38, t);
                            LocalPopChoice(z_23);
                          }
                        else
                          {
                            t = v_23;
                            t = g_39(i_38, k_38, e_38, t);
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
static ATerm a_39 (ATerm t_33, ATerm u_33, ATerm x_33, ATerm t)
{
  ATerm y_33 = NULL,c_34 = NULL,l_34 = NULL,y_17 = NULL;
  t = SSLgetAnnotations(x_33);
  y_33 = t;
  t = t_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_24 = ATgetFirst((ATermList) t);
      if(match_cons(a_24, sym__2))
        {
          c_34 = ATgetArgument(a_24, 0);
          if((c_34 != ATgetArgument(a_24, 1)))
            {
              _fail(ATgetArgument(a_24, 1));
            }
        }
      else
        _fail(t);
      l_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_34, u_33);
  y_17 = t;
  t = SSLsetAnnotations(y_17, y_33);
  return(t);
}
static ATerm d_39 (ATerm q_34, ATerm r_34, ATerm s_34, ATerm t)
{
  ATerm t_34 = NULL,y_34 = NULL,z_34 = NULL,c_35 = NULL,d_35 = NULL,b_18 = NULL;
  t = SSLgetAnnotations(s_34);
  t_34 = t;
  t = q_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_24 = ATgetFirst((ATermList) t);
      if(match_cons(b_24, sym__2))
        {
          z_34 = ATgetArgument(b_24, 0);
          c_35 = ATgetArgument(b_24, 1);
        }
      else
        _fail(t);
      d_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_7(z_34, c_35, d_35, t);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_34, r_34);
  b_18 = t;
  t = SSLsetAnnotations(b_18, t_34);
  return(t);
}
static ATerm e_39 (ATerm h_35, ATerm i_35, ATerm k_35, ATerm t)
{
  ATerm l_35 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,h_36 = NULL,c_18 = NULL;
  t = SSLgetAnnotations(k_35);
  l_35 = t;
  t = h_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_24 = ATgetFirst((ATermList) t);
      if(match_cons(c_24, sym__2))
        {
          ATerm d_24 = ATgetArgument(c_24, 0);
          if(match_cons(d_24, sym_As_2))
            {
              c_36 = ATgetArgument(d_24, 0);
              d_36 = ATgetArgument(d_24, 1);
            }
          else
            _fail(t);
          e_36 = ATgetArgument(c_24, 1);
        }
      else
        _fail(t);
      h_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(h_36), (ATerm) ATmakeAppl(sym__2, d_36, e_36)), (ATerm) ATmakeAppl(sym__2, c_36, e_36)), i_35);
  c_18 = t;
  t = SSLsetAnnotations(c_18, l_35);
  return(t);
}
static ATerm f_39 (ATerm k_36, ATerm n_36, ATerm o_36, ATerm t)
{
  ATerm p_36 = NULL,t_36 = NULL,e_18 = NULL;
  t = SSLgetAnnotations(o_36);
  p_36 = t;
  t = k_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_24 = ATgetFirst((ATermList) t);
      if(match_cons(f_24, sym__2))
        {
          ATerm j_24 = ATgetArgument(f_24, 0);
          if(!(match_cons(j_24, sym_Wld_0)))
            _fail(t);
          {
            ATerm k_24 = ATgetArgument(f_24, 1);
          }
        }
      else
        _fail(t);
      t_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_36, n_36);
  e_18 = t;
  t = SSLsetAnnotations(e_18, p_36);
  return(t);
}
static ATerm g_39 (ATerm v_36, ATerm w_36, ATerm y_36, ATerm t)
{
  ATerm z_36 = NULL,c_37 = NULL,d_37 = NULL,m_37 = NULL,p_37 = NULL,q_37 = NULL,h_18 = NULL,g_18 = NULL;
  t = SSLgetAnnotations(y_36);
  z_36 = t;
  t = v_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_24 = ATgetFirst((ATermList) t);
      if(match_cons(l_24, sym__2))
        {
          c_37 = ATgetArgument(l_24, 0);
          d_37 = ATgetArgument(l_24, 1);
        }
      else
        _fail(t);
      m_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_37;
  {
    ATerm m_24 = t;
    if((PushChoice() == 0))
      {
        ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,f_18 = NULL;
        u_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            t_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_37);
        s_37 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, t_37);
        f_18 = t;
        t = SSLsetAnnotations(f_18, s_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_24;
      }
  }
  t = d_37;
  if(match_cons(t, sym_Var_1))
    {
      q_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_37);
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_37);
  g_18 = t;
  t = SSLsetAnnotations(g_18, p_37);
  t = (ATerm) ATmakeAppl(sym__2, m_37, w_36);
  h_18 = t;
  t = SSLsetAnnotations(h_18, z_36);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,w_38 = NULL,i_18 = NULL;
  w_38 = t;
  if(match_cons(t, sym_Var_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_38);
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_38);
  i_18 = t;
  t = SSLsetAnnotations(i_18, s_38);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(z_6, b_7, d_7, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_39 = NULL,a_5 = NULL,c_5 = NULL;
      t = (ATerm) ATempty;
      a_5 = t;
      t = term_x_13;
      c_5 = t;
      t = term_v_24;
      t = m_7(c_5, a_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm z_24 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) z_24) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          i_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_39;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_39 = NULL,e_5 = NULL,f_5 = NULL;
            t = (ATerm) ATempty;
            e_5 = t;
            t = term_x_13;
            f_5 = t;
            t = term_v_24;
            t = m_7(f_5, e_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm d_25 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) d_25) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                l_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_39;
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            {
              ATerm q_39 = NULL,b_6 = NULL,c_6 = NULL;
              q_39 = t;
              t = (ATerm) ATempty;
              b_6 = t;
              t = term_x_13;
              c_6 = t;
              t = term_v_24;
              t = m_7(c_6, b_6, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = q_39;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
static ATerm m_7 (ATerm a_55, ATerm b_55, ATerm t)
{
  ATerm u_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_55, b_55);
  t = b_8(a_55, b_55, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_39 = ATgetFirst((ATermList) t);
      {
        ATerm e_25 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = u_39;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm e_41 = NULL;
  e_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm f_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_7 = NULL,e_7 = NULL;
        t = term_r_13;
        e_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_r_13, e_41);
        t = m_7(e_7, e_41, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm k_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_25) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            a_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_7;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        {
          ATerm l_25 = t;
          int m_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_7 = NULL;
              t = term_r_13;
              o_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_r_13, e_41);
              t = m_7(o_7, e_41, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = e_41;
              _fail(t);
              LocalPopChoice(m_25);
            }
          else
            {
              t = l_25;
              {
                ATerm l_8 = NULL;
                t = term_r_13;
                l_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_r_13, e_41);
                t = m_7(l_8, e_41, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                t = e_41;
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  static ATerm u_41 (ATerm t)
  {
    ATerm n_25 = t;
    int o_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_89(t);
        LocalPopChoice(o_25);
      }
    else
      {
        t = n_25;
        t = SRTS_all(u_41, t);
      }
    return(t);
  }
  t = u_41(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm p_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_8 = NULL,r_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm s_25 = ATgetArgument(t, 0);
          if(match_cons(s_25, sym_Var_1))
            {
              q_8 = ATgetArgument(s_25, 0);
            }
          else
            _fail(t);
          r_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_6(q_8, r_8, t);
      LocalPopChoice(r_25);
    }
  else
    {
      t = p_25;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = debug_1_0(i_7, t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_t_25;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm z_42 = NULL;
  z_42 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = z_42;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm u_25 = ATgetArgument(t, 0);
          ATerm v_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_42;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,d_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,j_42 = NULL,w_18 = NULL;
  j_42 = t;
  if(match_cons(t, sym_Match_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_42);
  d_42 = t;
  t = f_42;
  t = alltd_1_0(Binding_0_0, t);
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, g_42);
  w_18 = t;
  t = SSLsetAnnotations(w_18, d_42);
  h_42 = t;
  if(match_cons(t, sym_Match_1))
    {
      a_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        z_41 = t;
        t = h_42;
        {
          ATerm y_25 = t;
          int z_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, a_42, z_41));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(g_7, t);
              t = h_42;
              LocalPopChoice(z_25);
            }
          else
            {
              t = y_25;
              t = (ATerm) ATmakeAppl(sym__4, term_a_26, h_42, term_b_26, z_41);
              t = if_verbose3_1_0(h_7, t);
              t = term_c_26;
            }
        }
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        {
          ATerm d_26 = t;
          int e_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_42 = NULL,u_42 = NULL;
              t = a_42;
              {
                ATerm f_26 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(k_7, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = f_26;
                  }
              }
              t = (ATerm) ATempty;
              q_42 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_g_26, a_42);
              u_42 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_g_26, a_42));
              t = x_6(l_7, q_42, u_42, t);
              t = h_42;
              LocalPopChoice(e_26);
            }
          else
            {
              t = d_26;
            }
        }
      }
  }
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm j_26 = t;
        int k_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            LocalPopChoice(k_26);
          }
        else
          {
            t = j_26;
            {
              ATerm l_26 = t;
              int n_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_43 = NULL,q_43 = NULL;
                  n_43 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      q_43 = ATgetArgument(t, 0);
                      {
                        ATerm o_26 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = n_43;
                  t = w_6(cp_0_0, q_43, t);
                  LocalPopChoice(n_26);
                }
              else
                {
                  t = l_26;
                  {
                    ATerm r_26 = t;
                    int s_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        LocalPopChoice(s_26);
                      }
                    else
                      {
                        t = r_26;
                        {
                          ATerm u_26 = t;
                          int v_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
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
                                    ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,v_8 = NULL,y_8 = NULL,z_8 = NULL,y_18 = NULL;
                                    w_44 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        x_44 = ATgetArgument(t, 0);
                                        y_44 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(w_44);
                                    v_8 = t;
                                    t = x_44;
                                    t = cp_0_0(t);
                                    y_8 = t;
                                    t = y_44;
                                    t = cp_0_0(t);
                                    z_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, z_8);
                                    y_18 = t;
                                    t = SSLsetAnnotations(y_18, v_8);
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
                                          t = prop_choice_1_0(cp_0_0, t);
                                          LocalPopChoice(z_26);
                                        }
                                      else
                                        {
                                          t = y_26;
                                          {
                                            ATerm c_27 = t;
                                            int f_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm n_45 = NULL,o_45 = NULL,q_45 = NULL;
                                                n_45 = t;
                                                {
                                                  ATerm g_27 = t;
                                                  int i_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm j_27 = ATgetArgument(t, 0);
                                                          ATerm l_27 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(i_27);
                                                      t = n_45;
                                                      t = t_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = g_27;
                                                      {
                                                        ATerm m_27 = t;
                                                        int n_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm p_27 = ATgetArgument(t, 0);
                                                                ATerm t_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(n_27);
                                                            {
                                                              ATerm i_9 = NULL,j_9 = NULL,m_9 = NULL,q_9 = NULL,z_18 = NULL;
                                                              t = n_45;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  j_9 = ATgetArgument(t, 0);
                                                                  m_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(n_45);
                                                              i_9 = t;
                                                              t = m_9;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              q_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, j_9, q_9);
                                                              z_18 = t;
                                                              t = SSLsetAnnotations(z_18, i_9);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = m_27;
                                                            {
                                                              ATerm u_27 = t;
                                                              int w_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm x_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(w_27);
                                                                  t = n_45;
                                                                  t = r_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = u_27;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      o_45 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm c_28 = ATgetArgument(t, 1);
                                                                      }
                                                                      q_45 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm e_28 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = n_45;
                                                                  t = q_6(cp_0_0, o_45, q_45, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                LocalPopChoice(f_27);
                                              }
                                            else
                                              {
                                                t = c_27;
                                                t = SRTS_all(cp_0_0, t);
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
static ATerm n_7 (ATerm u_54, ATerm v_54, ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL;
  a_46 = t;
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_54, v_54);
        t = b_8(u_54, v_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_28 = ATgetFirst((ATermList) t);
            z_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_28);
        {
          ATerm b_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, u_54, v_54, z_45);
          t = lookup_table_0_1(u_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              b_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_8(v_54, z_45, b_46, t);
          t = (ATerm) ATmakeAppl(sym__3, u_54, v_54, z_45);
        }
      }
    else
      {
        t = f_28;
        {
          ATerm f_46 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, u_54, v_54);
          t = lookup_table_0_1(u_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_7(v_54, f_46, t);
          t = (ATerm) ATmakeAppl(sym__2, u_54, v_54);
        }
      }
  }
  t = a_46;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm m_46 = NULL,q_46 = NULL,s_46 = NULL,w_46 = NULL,x_46 = NULL,c_47 = NULL,d_47 = NULL;
  w_46 = t;
  t = p_107(t);
  s_46 = t;
  {
    ATerm i_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_47 = NULL;
        t = term_q_19;
        f_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_46, term_q_19);
        t = b_8(s_46, f_47, t);
        LocalPopChoice(k_28);
      }
    else
      {
        t = i_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_46 = ATgetFirst((ATermList) t);
      m_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_46, term_q_19, m_46);
  t = lookup_table_0_1(s_46, t);
  d_47 = t;
  t = term_q_19;
  x_46 = t;
  t = d_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(x_46, m_46, c_47, t);
  t = q_46;
  {
    static ATerm y_7 (ATerm t)
    {
      ATerm g_47 = NULL;
      g_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_46, g_47);
      t = n_7(s_46, g_47, t);
      return(t);
    }
    t = map_1_0(y_7, t);
  }
  t = w_46;
  return(t);
}
ATerm restore_always_2_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_86(t);
      t = u_86(t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      t = u_86(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
  j_47 = t;
  t = o_107(t);
  i_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_47, term_q_19);
  {
    ATerm o_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_28 = ATgetArgument(t, 0);
            ATerm w_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_19;
        s_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_47, term_q_19);
        t = b_8(i_47, s_47, t);
        LocalPopChoice(u_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
  }
  k_47 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_47, term_q_19, (ATerm) ATinsert(CheckATermList(k_47), (ATerm) ATempty));
  t = lookup_table_0_1(i_47, t);
  o_47 = t;
  t = term_q_19;
  l_47 = t;
  t = (ATerm) ATinsert(CheckATermList(k_47), (ATerm) ATempty);
  m_47 = t;
  t = o_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(l_47, m_47, n_47, t);
  t = j_47;
  return(t);
}
ATerm scope_2_0 (ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm t)
{
  static ATerm d_8 (ATerm t)
  {
    t = end_scope_1_0(q_107, t);
    return(t);
  }
  t = begin_scope_1_0(q_107, t);
  t = restore_always_2_0(r_107, d_8, t);
  return(t);
}
ATerm map_1_0 (ATerm j_94 (ATerm), ATerm t)
{
  static ATerm h_48 (ATerm t)
  {
    ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL;
    e_48 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_48;
      }
    else
      {
        ATerm a_10 = NULL,g_10 = NULL,h_10 = NULL,c_19 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_48 = ATgetFirst((ATermList) t);
            g_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_48);
        a_10 = t;
        t = f_48;
        t = j_94(t);
        g_10 = t;
        t = g_48;
        t = h_48(t);
        h_10 = t;
        t = (ATerm) ATinsert(CheckATermList(h_10), g_10);
        c_19 = t;
        t = SSLsetAnnotations(c_19, a_10);
      }
    return(t);
  }
  t = h_48(t);
  return(t);
}
ATerm Cons_2_0 (ATerm e_73 (ATerm), ATerm f_73 (ATerm), ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,e_19 = NULL;
  o_48 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_48 = ATgetFirst((ATermList) t);
      l_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_48);
  j_48 = t;
  t = k_48;
  t = e_73(t);
  m_48 = t;
  t = l_48;
  t = f_73(t);
  n_48 = t;
  t = (ATerm) ATinsert(CheckATermList(n_48), m_48);
  e_19 = t;
  t = SSLsetAnnotations(e_19, j_48);
  return(t);
}
static ATerm p_7 (ATerm b_40, ATerm c_40, ATerm t)
{
  ATerm p_48 = NULL;
  t = SSL_fputc(b_40, c_40);
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_48);
  return(t);
}
static ATerm q_7 (ATerm w_24, ATerm x_24, ATerm t)
{
  ATerm q_48 = NULL;
  t = SSL_write_term_to_stream_text(w_24, x_24);
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_48);
  return(t);
}
static ATerm s_7 (ATerm a_94 (ATerm), ATerm g_172, ATerm c_25, ATerm t)
{
  ATerm r_48 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, g_172, term_x_28);
  t = w_7(t);
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_48, c_25);
  t = a_94(t);
  t = fclose_0_0(t);
  t = c_25;
  return(t);
}
static ATerm r_7 (ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm s_48 = NULL;
  t = SSL_write_term_to_stream_baf(s_24, t_24);
  s_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_48);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm h_11 = NULL,l_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_28 = ATgetArgument(t, 0);
      if(match_cons(y_28, sym_Stream_1))
        {
          h_11 = ATgetArgument(y_28, 0);
        }
      else
        _fail(t);
      l_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_7(h_11, l_11, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm f_12 = NULL,l_12 = NULL,n_12 = NULL,o_12 = NULL,u_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_28 = ATgetArgument(t, 0);
      if(match_cons(z_28, sym_Stream_1))
        {
          o_12 = ATgetArgument(z_28, 0);
        }
      else
        _fail(t);
      u_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_7(o_12, u_12, t);
  f_12 = t;
  t = term_a_29;
  l_12 = t;
  t = f_12;
  if(match_cons(t, sym_Stream_1))
    {
      n_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_29, f_12);
  t = p_7(l_12, n_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,i_50 = NULL,j_50 = NULL,h_19 = NULL,g_19 = NULL;
  x_48 = t;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_48);
  d_49 = t;
  t = e_49;
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_8 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((w_48 != NULL) && (w_48 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                w_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_8, t);
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        t = term_d_29;
        w_48 = t;
      }
  }
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_49, f_49);
  g_19 = t;
  t = SSLsetAnnotations(g_19, d_49);
  t = x_48;
  if(match_cons(t, sym__2))
    {
      z_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_48);
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_48, (ATerm) ATmakeAppl(sym__2, not_null(w_48), a_49));
  h_19 = t;
  t = SSLsetAnnotations(h_19, y_48);
  c_49 = t;
  if(match_cons(t, sym__2))
    {
      i_50 = ATgetArgument(t, 0);
      j_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_29 = t;
    int f_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_10 = NULL,c_11 = NULL,d_11 = NULL,e_11 = NULL,f_11 = NULL,i_19 = NULL;
        t = SSLgetAnnotations(c_49);
        y_10 = t;
        t = i_50;
        t = fetch_1_0(i_8, t);
        c_11 = t;
        t = j_50;
        if(match_cons(t, sym__2))
          {
            e_11 = ATgetArgument(t, 0);
            f_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_7(j_8, e_11, f_11, t);
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_11, d_11);
        i_19 = t;
        t = SSLsetAnnotations(i_19, y_10);
        LocalPopChoice(f_29);
      }
    else
      {
        t = e_29;
        {
          ATerm s_11 = NULL,z_11 = NULL,d_12 = NULL,e_12 = NULL,j_19 = NULL;
          t = SSLgetAnnotations(c_49);
          s_11 = t;
          t = j_50;
          if(match_cons(t, sym__2))
            {
              d_12 = ATgetArgument(t, 0);
              e_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_7(k_8, d_12, e_12, t);
          z_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_50, z_11);
          j_19 = t;
          t = SSLsetAnnotations(j_19, s_11);
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
ATerm apply_strategy_1_0 (ATerm r_111 (ATerm), ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
  q_50 = t;
  t = dtime_0_0(t);
  t = q_50;
  t = r_111(t);
  p_50 = t;
  t = dtime_0_0(t);
  m_50 = t;
  t = p_50;
  if(match_cons(t, sym__2))
    {
      n_50 = ATgetArgument(t, 0);
      o_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_50), (ATerm) ATmakeAppl(sym_Runtime_1, m_50)), o_50);
  return(t);
}
static ATerm e_51 (ATerm y_50, ATerm t)
{
  t = SSL_fclose(y_50);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  c_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_51 = ATgetArgument(t, 0);
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_51);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = e_51(c_51, t);
          }
      }
    }
  else
    {
      t = e_51(c_51, t);
    }
  return(t);
}
static ATerm t_7 (ATerm y_24, ATerm t)
{
  t = SSL_read_term_from_stream(y_24);
  return(t);
}
static ATerm u_7 (ATerm u_38, ATerm v_38, ATerm t)
{
  t = SSL_strcat(u_38, v_38);
  return(t);
}
static ATerm v_7 (ATerm d_40, ATerm e_40, ATerm t)
{
  ATerm f_51 = NULL;
  t = SSL_fopen(d_40, e_40);
  f_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_51);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_51 = NULL;
  t = SSL_stdin_stream();
  g_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_51);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_51 = NULL;
  t = SSL_stdout_stream();
  h_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_51);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm m_51 = NULL;
  t = SSL_stderr_stream();
  m_51 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_51);
  return(t);
}
static ATerm t_52 (ATerm s_51, ATerm t)
{
  ATerm t_51 = NULL;
  t = SSL_explode_term(s_51);
  if(match_cons(t, sym__2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(((ATgetType(j_29) == AT_LIST) && !(ATisEmpty(j_29))))
          {
            t_51 = ATgetFirst((ATermList) j_29);
            {
              ATerm k_29 = (ATerm) ATgetNext((ATermList) j_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_51;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_51;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_51;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_51;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_52 (ATerm w_51, ATerm x_51, ATerm y_51, ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,e_52 = NULL,o_19 = NULL;
  t = SSLgetAnnotations(y_51);
  b_52 = t;
  t = w_51;
  if(match_cons(t, sym_Path_1))
    {
      e_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_52, x_51);
  o_19 = t;
  t = SSLsetAnnotations(o_19, b_52);
  if(match_cons(t, sym__2))
    {
      z_51 = ATgetArgument(t, 0);
      a_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(z_51, a_52, t);
  return(t);
}
static ATerm v_52 (ATerm g_52, ATerm h_52, ATerm i_52, ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL,o_52 = NULL,p_19 = NULL;
  t = SSLgetAnnotations(i_52);
  l_52 = t;
  t = SSL_is_string(g_52);
  o_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_52, h_52);
  p_19 = t;
  t = SSLsetAnnotations(p_19, l_52);
  if(match_cons(t, sym__2))
    {
      j_52 = ATgetArgument(t, 0);
      k_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_7(j_52, k_52, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL;
  q_52 = t;
  if(match_cons(t, sym__2))
    {
      r_52 = ATgetArgument(t, 0);
      s_52 = ATgetArgument(t, 1);
      {
        ATerm l_29 = t;
        int p_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_52(q_52, t);
            LocalPopChoice(p_29);
          }
        else
          {
            t = l_29;
            {
              ATerm q_29 = t;
              int v_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_52(r_52, s_52, q_52, t);
                  LocalPopChoice(v_29);
                }
              else
                {
                  t = q_29;
                  t = v_52(r_52, s_52, q_52, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_52(q_52, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_52 = NULL,y_52 = NULL,z_52 = NULL,e_53 = NULL;
  e_53 = t;
  {
    ATerm w_29 = t;
    int x_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_53, term_y_29);
        t = w_7(t);
        LocalPopChoice(x_29);
      }
    else
      {
        t = w_29;
        {
          ATerm t_13 = NULL,v_13 = NULL;
          t = term_z_29;
          v_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_29, e_53);
          t = u_7(v_13, e_53, t);
          t_13 = t;
          t = SSL_perror(t_13);
          _fail(t);
        }
      }
  }
  y_52 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_7(z_52, t);
  x_52 = t;
  t = y_52;
  t = fclose_0_0(t);
  t = x_52;
  return(t);
}
ATerm fetch_1_0 (ATerm t_94 (ATerm), ATerm t)
{
  static ATerm i_54 (ATerm t)
  {
    ATerm f_54 = NULL,g_54 = NULL,h_54 = NULL;
    f_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_54 = ATgetFirst((ATermList) t);
        h_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_30 = t;
      int b_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_14 = NULL,k_14 = NULL,s_19 = NULL;
          t = SSLgetAnnotations(f_54);
          d_14 = t;
          t = g_54;
          t = t_94(t);
          k_14 = t;
          t = (ATerm) ATinsert(CheckATermList(h_54), k_14);
          s_19 = t;
          t = SSLsetAnnotations(s_19, d_14);
          LocalPopChoice(b_30);
        }
      else
        {
          t = a_30;
          {
            ATerm b_15 = NULL,h_15 = NULL,t_19 = NULL;
            t = SSLgetAnnotations(f_54);
            b_15 = t;
            t = h_54;
            t = i_54(t);
            h_15 = t;
            t = (ATerm) ATinsert(CheckATermList(h_15), g_54);
            t_19 = t;
            t = SSLsetAnnotations(t_19, b_15);
          }
        }
    }
    return(t);
  }
  t = i_54(t);
  return(t);
}
static ATerm b_8 (ATerm i_56, ATerm j_56, ATerm t)
{
  ATerm l_54 = NULL;
  t = lookup_table_0_1(i_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_8(j_56, l_54, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  {
    ATerm c_30 = t;
    int d_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
        t = term_z_19;
        y_54 = t;
        t = term_a_20;
        z_54 = t;
        t = term_b_20;
        t = b_8(y_54, z_54, t);
        x_54 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_54, term_e_30);
        t = geq_0_0(t);
        t = s_54;
        t = a_110(t);
        LocalPopChoice(d_30);
      }
    else
      {
        t = c_30;
        t = s_54;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm e_55 = NULL;
  e_55 = t;
  if(match_string(t, "-k"))
    {
      t = e_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_55;
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  f_55 = t;
  t = SSL_string_to_int(f_55);
  g_55 = t;
  t = term_f_30;
  h_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_30, g_55);
  t = e_8(h_55, g_55, t);
  t = f_55;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_8, o_8, p_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm j_55 = NULL;
  j_55 = t;
  if(match_string(t, "-S"))
    {
      t = j_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_55;
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm k_55 = NULL,l_55 = NULL;
  t = term_a_20;
  k_55 = t;
  t = term_h_30;
  l_55 = t;
  t = term_j_30;
  t = e_8(k_55, l_55, t);
  t = term_n_30;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_o_30;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL;
  m_55 = t;
  t = SSL_string_to_int(m_55);
  n_55 = t;
  t = term_a_20;
  o_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_20, n_55);
  t = e_8(o_55, n_55, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_55);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_p_30;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm v_55 = NULL,w_55 = NULL;
  t = term_q_30;
  v_55 = t;
  t = term_d_13;
  w_55 = t;
  t = term_r_30;
  t = e_8(v_55, w_55, t);
  t = term_s_30;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_t_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_8, t_8, u_8, t);
      LocalPopChoice(v_30);
    }
  else
    {
      t = u_30;
      {
        ATerm w_30 = t;
        int x_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_8, x_8, a_9, t);
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            t = Option_3_0(c_9, d_9, e_9, t);
          }
      }
    }
  return(t);
}
static ATerm e_8 (ATerm u_49, ATerm v_49, ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL;
  t = term_z_19;
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_19, u_49, v_49);
  t = lookup_table_0_1(x_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(u_49, v_49, y_55, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_19, u_49, v_49);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_56 = NULL,l_56 = NULL,m_56 = NULL;
      t = term_d_13;
      t = d_0(t);
      k_56 = t;
      t = term_b_31;
      l_56 = t;
      t = term_c_31;
      m_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_31, term_c_31, k_56);
      t = c_8(l_56, m_56, k_56, t);
      _fail(t);
    }
  else
    {
      ATerm p_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_56 = ATgetFirst((ATermList) t);
          h_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_56;
      t = b_0(t);
      t = term_d_13;
      t = c_0(t);
      p_56 = t;
      t = (ATerm) ATinsert(CheckATermList(h_56), p_56);
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm r_56 = NULL;
  r_56 = t;
  if(match_string(t, "-o"))
    {
      t = r_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_56;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  s_56 = t;
  t = term_f_31;
  t_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_31, s_56);
  t = e_8(t_56, s_56, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_56);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_g_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_9, n_9, o_9, t);
  return(t);
}
static ATerm c_8 (ATerm p_54, ATerm q_54, ATerm o_54, ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL;
  v_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_54, q_54);
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_31 = ATgetArgument(t, 0);
            ATerm k_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_54, q_54);
        t = b_8(p_54, q_54, t);
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        t = (ATerm) ATempty;
      }
  }
  w_56 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_54, q_54, (ATerm) ATinsert(CheckATermList(w_56), o_54));
  t = lookup_table_0_1(p_54, t);
  z_56 = t;
  t = (ATerm) ATinsert(CheckATermList(w_56), o_54);
  x_56 = t;
  t = z_56;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(q_54, x_56, y_56, t);
  t = v_56;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_57 = NULL,l_57 = NULL,m_57 = NULL;
      t = term_d_13;
      t = l_0(t);
      k_57 = t;
      t = term_b_31;
      l_57 = t;
      t = term_c_31;
      m_57 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_31, term_c_31, k_57);
      t = c_8(l_57, m_57, k_57, t);
      _fail(t);
    }
  else
    {
      ATerm q_57 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_57 = ATgetFirst((ATermList) t);
          h_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_57;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_57 = ATgetFirst((ATermList) t);
          j_57 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_57;
      t = h_0(t);
      t = i_57;
      t = j_0(t);
      q_57 = t;
      t = (ATerm) ATinsert(CheckATermList(j_57), q_57);
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm s_57 = NULL;
  s_57 = t;
  if(match_string(t, "-i"))
    {
      t = s_57;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_57;
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL;
  t_57 = t;
  t = term_l_31;
  u_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_31, t_57);
  t = e_8(u_57, t_57, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_57);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_n_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_9, u_9, w_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_13;
  t = whoami_0_0(t);
  v_57 = t;
  t = term_h_13;
  x_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_31), v_57);
  y_57 = t;
  t = SSL_printnl(x_57, y_57);
  t = term_l_13;
  w_57 = t;
  t = SSL_exit(w_57);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL;
  t = term_z_19;
  z_57 = t;
  t = term_q_31;
  a_58 = t;
  t = term_r_31;
  t = b_8(z_57, a_58, t);
  return(t);
}
static ATerm x_7 (ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm s_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_42, y_42);
      LocalPopChoice(t_31);
    }
  else
    {
      t = s_31;
      t = SSL_addr(x_42, y_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_101 (ATerm), ATerm j_101 (ATerm), ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL;
  c_58 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_58;
      t = i_101(t);
    }
  else
    {
      ATerm u_58 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_58 = ATgetFirst((ATermList) t);
          e_58 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_58;
      t = foldr_2_0(i_101, j_101, t);
      u_58 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_58, u_58);
      t = j_101(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_h_30;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_7(y_15, z_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_59 = NULL,s_15 = NULL,t_15 = NULL;
  t = times_0_0(t);
  t_15 = t;
  t = SSL_explode_term(t_15);
  if(match_cons(t, sym__2))
    {
      ATerm u_31 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_15;
  t = foldr_2_0(x_9, y_9, t);
  a_59 = t;
  t = SSL_TicksToSeconds(a_59);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_59 = NULL,p_59 = NULL,q_59 = NULL;
  o_59 = t;
  if(match_cons(t, sym__2))
    {
      p_59 = ATgetArgument(t, 0);
      q_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_59;
        if((p_59 != t))
          {
            _fail(t);
          }
        t = o_59;
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = (ATerm) ATmakeAppl(sym__2, p_59, q_59);
        {
          ATerm z_31 = t;
          int a_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_59, q_59);
              LocalPopChoice(a_32);
            }
          else
            {
              t = z_31;
              t = SSL_gtr(p_59, q_59);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_59, q_59);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm u_59 = NULL;
  u_59 = t;
  {
    ATerm b_32 = t;
    int c_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
        t = term_z_19;
        x_59 = t;
        t = term_a_20;
        y_59 = t;
        t = term_b_20;
        t = b_8(x_59, y_59, t);
        w_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_59, term_l_13);
        t = geq_0_0(t);
        t = u_59;
        t = z_109(t);
        LocalPopChoice(c_32);
      }
    else
      {
        t = b_32;
        t = u_59;
      }
  }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm a_60 = NULL,b_60 = NULL,d_60 = NULL,e_60 = NULL;
  t = run_time_0_0(t);
  a_60 = t;
  t = term_d_13;
  t = whoami_0_0(t);
  b_60 = t;
  t = term_h_13;
  d_60 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_32), a_60), term_d_32), b_60);
  e_60 = t;
  t = SSL_printnl(d_60, e_60);
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_32), a_60), term_d_32), b_60));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_60 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_30;
  f_60 = t;
  t = SSL_exit(f_60);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL;
  q_60 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_60;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_60 = ATgetArgument(t, 0);
          {
            ATerm q_16 = NULL,y_19 = NULL;
            t = SSLgetAnnotations(q_60);
            q_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_60);
            y_19 = t;
            t = SSLsetAnnotations(y_19, q_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_60;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_112 (ATerm), ATerm t)
{
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_60 = NULL,j_60 = NULL;
      t = term_z_19;
      i_60 = t;
      t = term_j_32;
      j_60 = t;
      t = term_k_32;
      t = b_8(i_60, j_60, t);
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
      t = fetch_1_0(c_10, t);
    }
  t = p_112(t);
  return(t);
}
static ATerm f_8 (ATerm h_58, ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm s_60 = NULL;
  t = SSL_hashtable_put(j_58, h_58, i_58);
  s_60 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_60);
  return(t);
}
static ATerm g_8 (ATerm k_58, ATerm l_58, ATerm t)
{
  t = SSL_hashtable_get(l_58, k_58);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_56, ATerm t)
{
  ATerm b_61 = NULL;
  t = table_hashtable_0_0(t);
  b_61 = t;
  {
    ATerm l_32 = t;
    int m_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_16 = NULL;
        t = b_61;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_16 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_8(b_56, w_16, t);
        LocalPopChoice(m_32);
      }
    else
      {
        t = l_32;
        {
          ATerm r_17 = NULL;
          t = b_56;
          t = table_create_0_0(t);
          t = b_61;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_17 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_8(b_56, r_17, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm p_58, ATerm q_58, ATerm t)
{
  ATerm e_61 = NULL;
  t = SSL_hashtable_create(p_58, q_58);
  e_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_61);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL,j_61 = NULL,k_61 = NULL;
  f_61 = t;
  t = term_n_32;
  j_61 = t;
  t = term_o_32;
  k_61 = t;
  t = f_61;
  t = new_hashtable_0_2(j_61, k_61, t);
  g_61 = t;
  t = f_61;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(f_61, g_61, h_61, t);
  t = f_61;
  return(t);
}
static ATerm z_7 (ATerm m_58, ATerm n_58, ATerm t)
{
  ATerm l_61 = NULL;
  t = SSL_hashtable_remove(n_58, m_58);
  l_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_61);
  return(t);
}
static ATerm a_8 (ATerm r_58, ATerm t)
{
  ATerm m_61 = NULL;
  t = SSL_hashtable_destroy(r_58);
  m_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_61);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_61 = NULL;
  t = SSL_table_hashtable();
  n_61 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_61);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  o_61 = t;
  t = table_hashtable_0_0(t);
  p_61 = t;
  t = lookup_table_0_1(o_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_8(r_61, t);
  t = p_61;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_7(o_61, q_61, t);
  t = o_61;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_61 = ATgetFirst((ATermList) t);
      u_61 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_61 = NULL,z_61 = NULL;
        static ATerm e_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_61)), not_null(z_61));
          return(t);
        }
        t = u_61;
        t = f_0(t);
        if(((y_61 != NULL) && (y_61 != t)))
          _fail(t);
        else
          y_61 = t;
        t = t_61;
        t = e_0(t);
        if(((z_61 != NULL) && (z_61 != t)))
          _fail(t);
        else
          z_61 = t;
        t = u_61;
        t = reverse_acc_2_0(e_0, e_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_13;
      t = f_0(t);
    }
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,c_20 = NULL;
  h_62 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_62);
  f_62 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_62);
  c_20 = t;
  t = SSLsetAnnotations(c_20, f_62);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm j_62 = NULL;
  j_62 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_62), term_p_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL;
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_62 = NULL,e_62 = NULL;
      t = term_z_19;
      d_62 = t;
      t = term_q_31;
      e_62 = t;
      t = term_r_31;
      t = b_8(d_62, e_62, t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      t = fetch_1_0(f_10, t);
    }
  t = term_v_32;
  t = echo_0_0(t);
  t = term_b_31;
  b_62 = t;
  t = term_c_31;
  c_62 = t;
  t = term_w_32;
  t = b_8(b_62, c_62, t);
  t = reverse_acc_2_0(_id, i_10, t);
  t = map_1_0(j_10, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
  l_62 = t;
  {
    ATerm x_32 = t;
    int y_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_62;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_32 = ATgetFirst((ATermList) t);
                ATerm a_33 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_62;
          }
        LocalPopChoice(y_32);
      }
    else
      {
        t = x_32;
        t = (ATerm) ATinsert(ATempty, l_62);
      }
  }
  m_62 = t;
  t = term_d_29;
  n_62 = t;
  t = SSL_printnl(n_62, m_62);
  t = l_62;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  t = term_z_19;
  r_62 = t;
  t = term_q_31;
  s_62 = t;
  t = term_r_31;
  t = b_8(r_62, s_62, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm t_62 = NULL,u_62 = NULL;
  t = term_b_33;
  t_62 = t;
  t = term_d_13;
  u_62 = t;
  t = term_c_33;
  t = e_8(t_62, u_62, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_d_33;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
  t = term_b_33;
  x_62 = t;
  t = term_d_13;
  y_62 = t;
  t = term_c_33;
  t = e_8(x_62, y_62, t);
  t = term_e_33;
  v_62 = t;
  t = term_d_13;
  w_62 = t;
  t = term_f_33;
  t = e_8(v_62, w_62, t);
  t = term_g_33;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  t = term_h_33;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_10, m_10, n_10, t);
      LocalPopChoice(j_33);
    }
  else
    {
      t = i_33;
      t = Option_3_0(o_10, q_10, r_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_114 (ATerm), ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,i_63 = NULL,j_63 = NULL,e_20 = NULL;
  d_63 = t;
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_33;
        t = s_114(t);
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
      }
  }
  t = d_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_63 = ATgetFirst((ATermList) t);
      g_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_63);
  e_63 = t;
  t = term_q_31;
  j_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_31, f_63);
  t = e_8(j_63, f_63, t);
  t = g_63;
  {
    static ATerm z_63 (ATerm t)
    {
      ATerm n_33 = t;
      int o_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_33 = t;
          int q_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_63 = NULL;
              m_63 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_63;
              LocalPopChoice(q_33);
            }
          else
            {
              t = p_33;
              t = s_114(t);
              t = Cons_2_0(_id, z_63, t);
            }
          LocalPopChoice(o_33);
        }
      else
        {
          t = n_33;
          {
            ATerm v_63 = NULL,w_63 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_63 = ATgetFirst((ATermList) t);
                w_63 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_63), (ATerm) ATmakeAppl(sym_Undefined_1, v_63));
          }
        }
      return(t);
    }
    t = z_63(t);
  }
  i_63 = t;
  t = (ATerm) ATinsert(CheckATermList(i_63), (ATerm) ATmakeAppl(sym_Program_1, f_63));
  e_20 = t;
  t = SSLsetAnnotations(e_20, e_63);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm q_64 = NULL;
  q_64 = t;
  if(match_string(t, "--help"))
    {
      t = q_64;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_64;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_64;
        }
    }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm r_64 = NULL,s_64 = NULL;
  t = term_j_32;
  r_64 = t;
  t = term_d_13;
  s_64 = t;
  t = term_v_33;
  t = e_8(r_64, s_64, t);
  t = term_w_33;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  t = term_z_33;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_114 (ATerm), ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL;
  g_64 = t;
  t = term_b_31;
  h_64 = t;
  t = term_a_34;
  t = lookup_table_0_1(h_64, t);
  l_64 = t;
  t = term_c_31;
  i_64 = t;
  t = (ATerm) ATempty;
  j_64 = t;
  t = l_64;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(i_64, j_64, k_64, t);
  t = g_64;
  {
    static ATerm s_10 (ATerm t)
    {
      ATerm b_34 = t;
      int d_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_114(t);
          LocalPopChoice(d_34);
        }
      else
        {
          t = b_34;
          {
            ATerm e_34 = t;
            int f_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_10, u_10, v_10, t);
                LocalPopChoice(f_34);
              }
            else
              {
                t = e_34;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_10, t);
  }
  {
    ATerm g_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_65 = NULL;
        d_65 = t;
        {
          ATerm i_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_17 = NULL;
              t = d_65;
              {
                ATerm k_34 = t;
                int m_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_17 = NULL,z_17 = NULL;
                    t = term_z_19;
                    x_17 = t;
                    t = term_j_32;
                    z_17 = t;
                    t = term_k_32;
                    t = b_8(x_17, z_17, t);
                    LocalPopChoice(m_34);
                  }
                else
                  {
                    t = k_34;
                    t = fetch_1_0(w_10, t);
                  }
              }
              t = d_65;
              t = default_system_usage_0_0(t);
              t = term_h_30;
              v_17 = t;
              t = SSL_exit(v_17);
              LocalPopChoice(j_34);
            }
          else
            {
              t = i_34;
              {
                ATerm l_18 = NULL,m_18 = NULL,o_18 = NULL;
                t = term_z_19;
                m_18 = t;
                t = term_b_33;
                o_18 = t;
                t = term_n_34;
                t = b_8(m_18, o_18, t);
                t = d_65;
                t = default_system_about_0_0(t);
                t = term_h_30;
                l_18 = t;
                t = SSL_exit(l_18);
              }
            }
        }
        LocalPopChoice(h_34);
      }
    else
      {
        t = g_34;
        {
          ATerm o_34 = t;
          int p_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL;
              static ATerm x_10 (ATerm t)
              {
                ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL,g_20 = NULL;
                j_65 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_65 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_65);
                h_65 = t;
                t = i_65;
                if(((e_64 != NULL) && (e_64 != t)))
                  _fail(t);
                else
                  e_64 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_65);
                g_20 = t;
                t = SSLsetAnnotations(g_20, h_65);
                return(t);
              }
              t = fetch_1_0(x_10, t);
              t = term_h_13;
              f_65 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_64)), term_u_34);
              g_65 = t;
              t = SSL_printnl(f_65, g_65);
              t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_64)), term_u_34));
              t = default_system_usage_0_0(t);
              t = term_l_13;
              e_65 = t;
              t = SSL_exit(e_65);
              LocalPopChoice(p_34);
            }
          else
            {
              t = o_34;
            }
        }
      }
  }
  f_64 = t;
  t = term_b_31;
  t = table_destroy_0_0(t);
  t = f_64;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t_112 (ATerm), ATerm u_112 (ATerm), ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
  t = parse_options_1_0(r_112, t);
  o_65 = t;
  t = term_v_34;
  t = table_create_0_0(t);
  t = term_v_34;
  p_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_34, term_w_34, o_65);
  t = lookup_table_0_1(p_65, t);
  s_65 = t;
  t = term_w_34;
  q_65 = t;
  t = s_65;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_8(q_65, o_65, r_65, t);
  t = o_65;
  t = t_112(t);
  {
    ATerm x_34 = t;
    int a_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_112, t);
        LocalPopChoice(a_35);
      }
    else
      {
        t = x_34;
        {
          ATerm b_35 = t;
          int e_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_112(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_35);
            }
          else
            {
              t = b_35;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  t = if_verbose2_1_0(r_11, t);
  return(t);
}
static ATerm n_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL;
  t = term_f_35;
  t_65 = t;
  t = term_d_13;
  u_65 = t;
  t = term_g_35;
  t = e_8(t_65, u_65, t);
  t = term_j_35;
  return(t);
}
static ATerm p_11 (ATerm t)
{
  t = term_m_35;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL;
  v_65 = t;
  t = term_z_19;
  z_65 = t;
  t = term_q_31;
  a_66 = t;
  t = term_r_31;
  t = b_8(z_65, a_66, t);
  w_65 = t;
  t = term_h_13;
  x_65 = t;
  t = (ATerm) ATinsert(ATempty, w_65);
  y_65 = t;
  t = SSL_printnl(x_65, y_65);
  t = v_65;
  return(t);
}
ATerm iowrap_3_0 (ATerm a_112 (ATerm), ATerm b_112 (ATerm), ATerm c_112 (ATerm), ATerm t)
{
  static ATerm a_11 (ATerm t)
  {
    ATerm n_35 = t;
    int o_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_112(t);
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
              t = input_option_0_0(t);
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
                    t = output_option_0_0(t);
                    LocalPopChoice(s_35);
                  }
                else
                  {
                    t = r_35;
                    {
                      ATerm t_35 = t;
                      int u_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_11, o_11, p_11, t);
                          LocalPopChoice(u_35);
                        }
                      else
                        {
                          t = t_35;
                          {
                            ATerm v_35 = t;
                            int w_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(w_35);
                              }
                            else
                              {
                                t = v_35;
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
  static ATerm m_11 (ATerm t)
  {
    ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
    c_66 = t;
    {
      ATerm x_35 = t;
      int y_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_66 != NULL) && (b_66 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_66 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_11, t);
          LocalPopChoice(y_35);
        }
      else
        {
          t = x_35;
          t = term_z_35;
          b_66 = t;
        }
    }
    t = not_null(b_66);
    t = ReadFromFile_0_0(t);
    d_66 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_66, d_66);
    t = apply_strategy_1_0(a_112, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_11, c_112, b_11, m_11, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_20 = NULL,s_20 = NULL,r_20 = NULL,j_20 = NULL;
  s_66 = t;
  if(match_cons(t, sym__2))
    {
      f_66 = ATgetArgument(t, 0);
      g_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_66);
  e_66 = t;
  t = g_66;
  if(match_cons(t, sym_Specification_1))
    {
      i_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_66);
  h_66 = t;
  t = i_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_66 = ATgetFirst((ATermList) t);
      m_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_66);
  k_66 = t;
  t = l_66;
  if(match_cons(t, sym_Signature_1))
    {
      q_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_66);
  p_66 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, q_66);
  j_20 = t;
  t = SSLsetAnnotations(j_20, p_66);
  r_66 = t;
  t = m_66;
  t = Cons_2_0(p_12, q_12, t);
  n_66 = t;
  t = (ATerm) ATinsert(CheckATermList(n_66), r_66);
  r_20 = t;
  t = SSLsetAnnotations(r_20, k_66);
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_66);
  s_20 = t;
  t = SSLsetAnnotations(s_20, h_66);
  j_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_66, j_66);
  t_20 = t;
  t = SSLsetAnnotations(t_20, e_66);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,k_20 = NULL;
  w_66 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_66);
  t_66 = t;
  t = u_66;
  t = map_1_0(r_12, t);
  v_66 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, v_66);
  k_20 = t;
  t = SSLsetAnnotations(k_20, t_66);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  t = scope_2_0(y_12, z_12, t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = scope_2_0(c_13, cp_0_0, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(y_11, _fail, default_usage_0_0, t);
  return(t);
}
