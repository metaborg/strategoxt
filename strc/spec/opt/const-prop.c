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
}
ATerm term_x_35;
ATerm term_c_35;
ATerm term_z_34;
ATerm term_w_34;
ATerm term_u_34;
ATerm term_p_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_h_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_e_32;
ATerm term_b_32;
ATerm term_m_31;
ATerm term_l_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_w_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_w_29;
ATerm term_l_29;
ATerm term_e_29;
ATerm term_b_29;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_j_28;
ATerm term_s_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_f_25;
ATerm term_l_24;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_x_19;
ATerm term_p_19;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_f_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_u_13);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_x_13, (ATerm) ATempty);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_j_30);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_30);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_f_13);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_y_30);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_f_13);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_f_13);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_f_13);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym__2, term_u_34, term_f_13);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm c_6 (ATerm v_79 (ATerm), ATerm c_21, ATerm d_21, ATerm t);
static ATerm v_0 (ATerm t);
static ATerm d_6 (ATerm t_79 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm exec_maybe_1_0 (ATerm m_79 (ATerm), ATerm t);
static ATerm k_2 (ATerm t);
static ATerm f_6 (ATerm w_79 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
static ATerm u_7 (ATerm t_4, ATerm u_4, ATerm v_4, ATerm t);
ATerm isect_CurrentTerm_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm j_11 (ATerm c_9, ATerm f_9, ATerm l_9, ATerm t);
ATerm isect_Binding_0_0 (ATerm t);
static ATerm g_6 (ATerm r_53, ATerm q_53, ATerm t);
ATerm save_CurrentTerm_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_Binding_0_0 (ATerm t);
ATerm prop_abstract_choice_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm t);
ATerm prop_choice_1_0 (ATerm z_79 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm prop_traversal_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm g_5 (ATerm t);
ATerm prop_call_1_0 (ATerm m_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm h_6 (ATerm u_79 (ATerm), ATerm x_20, ATerm t);
static ATerm q_6 (ATerm t);
ATerm prop_build_0_0 (ATerm t);
static ATerm i_6 (ATerm u_100 (ATerm), ATerm b_43, ATerm z_42, ATerm t);
ATerm oncetd_1_0 (ATerm z_82 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm y_102 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm j_6 (ATerm q_21, ATerm r_21, ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm t);
static ATerm u_6 (ATerm g_112 (ATerm), ATerm h_58, ATerm i_58, ATerm k_58, ATerm j_58, ATerm t);
ATerm at_end_1_0 (ATerm x_88 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_26 (ATerm f_26, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm n_6 (ATerm p_627, ATerm u_627, ATerm j_59, ATerm t);
ATerm while_not_2_0 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm t);
ATerm for_3_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm p_38 (ATerm g_33, ATerm j_33, ATerm k_33, ATerm t);
static ATerm y_38 (ATerm c_34, ATerm f_34, ATerm h_34, ATerm t);
static ATerm z_38 (ATerm x_34, ATerm y_34, ATerm a_35, ATerm t);
static ATerm a_39 (ATerm n_35, ATerm o_35, ATerm r_35, ATerm t);
static ATerm f_39 (ATerm a_36, ATerm b_36, ATerm e_36, ATerm t);
static ATerm z_7 (ATerm t);
ATerm prop_pattern_match_0_0 (ATerm t);
ATerm CurrentTerm_0_0 (ATerm t);
static ATerm x_6 (ATerm z_52, ATerm a_53, ATerm t);
ATerm Binding_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm n_83 (ATerm), ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm prop_match_0_0 (ATerm t);
ATerm cp_0_0 (ATerm t);
static ATerm y_6 (ATerm t_52, ATerm u_52, ATerm t);
ATerm end_scope_1_0 (ATerm r_100 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_100 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_88 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm t);
static ATerm b_7 (ATerm s_38, ATerm t_38, ATerm t);
static ATerm c_7 (ATerm a_24, ATerm b_24, ATerm t);
static ATerm e_7 (ATerm y_87 (ATerm), ATerm e_165, ATerm e_24, ATerm t);
static ATerm d_7 (ATerm w_23, ATerm x_23, ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_104 (ATerm), ATerm t);
static ATerm n_48 (ATerm h_48, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_7 (ATerm c_24, ATerm t);
static ATerm g_7 (ATerm u_38, ATerm v_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_50 (ATerm x_48, ATerm t);
static ATerm d_50 (ATerm b_49, ATerm c_49, ATerm d_49, ATerm t);
static ATerm e_50 (ATerm p_49, ATerm q_49, ATerm r_49, ATerm t);
static ATerm h_7 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_88 (ATerm), ATerm t);
static ATerm a_7 (ATerm l_37, ATerm m_37, ATerm t);
ATerm debug_1_0 (ATerm w_87 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm x_102 (ATerm), ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm n_7 (ATerm o_47, ATerm p_47, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm l_7 (ATerm o_52, ATerm p_52, ATerm n_52, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_7 (ATerm n_41, ATerm o_41, ATerm t);
ATerm foldr_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_102 (ATerm), ATerm t);
static ATerm d_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm need_help_1_0 (ATerm m_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm k_7 (ATerm f_54, ATerm g_54, ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm t_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm p_107 (ATerm), ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm parse_options_1_0 (ATerm o_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
ATerm iowrap_3_0 (ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm d_13 (ATerm t);
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
  t = term_f_13;
  t = whoami_0_0(t);
  z_0 = t;
  t = term_h_13;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_13), z_0), term_j_13);
  f_1 = t;
  t = SSL_printnl(d_1, f_1);
  t = term_n_13;
  c_1 = t;
  t = SSL_exit(c_1);
  t = y_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm t_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
  v_1 = t;
  t = term_u_13;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_1), term_u_13);
  t = i_6(s_0, v_1, w_1, t);
  t = u_1;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm c_6 (ATerm v_79 (ATerm), ATerm c_21, ATerm d_21, ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    ATerm g_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,s_1 = NULL,n_0 = NULL;
    g_1 = t;
    t = d_21;
    t = map_1_0(r_0, t);
    t = g_1;
    if(match_cons(t, sym_SDefT_4))
      {
        l_1 = ATgetArgument(t, 0);
        m_1 = ATgetArgument(t, 1);
        n_1 = ATgetArgument(t, 2);
        o_1 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_1);
    i_1 = t;
    t = (ATerm) ATempty;
    q_1 = t;
    t = term_u_13;
    s_1 = t;
    t = term_y_13;
    t = i_6(t_0, q_1, s_1, t);
    t = o_1;
    t = v_79(t);
    p_1 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_1, m_1, n_1, p_1);
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
static ATerm d_6 (ATerm t_79 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,c_5 = NULL;
  x_1 = t;
  t = (ATerm) ATempty;
  y_1 = t;
  t = term_u_13;
  z_1 = t;
  t = term_y_13;
  t = i_6(v_0, y_1, z_1, t);
  t = x_1;
  if(match_cons(t, sym_Not_1))
    {
      b_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_1);
  a_2 = t;
  t = b_2;
  t = exec_maybe_1_0(t_79, t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, c_2);
  c_5 = t;
  t = SSLsetAnnotations(c_5, a_2);
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
ATerm exec_maybe_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,n_2 = NULL,p_2 = NULL;
  f_2 = t;
  t = (ATerm) ATempty;
  n_2 = t;
  t = term_u_13;
  p_2 = t;
  t = term_y_13;
  t = i_6(w_0, n_2, p_2, t);
  t = f_2;
  t = save_Binding_0_0(t);
  d_2 = t;
  t = f_2;
  t = m_79(t);
  e_2 = t;
  t = (ATerm) ATempty;
  i_2 = t;
  t = term_u_13;
  j_2 = t;
  t = term_y_13;
  t = i_6(x_0, i_2, j_2, t);
  t = term_s_13;
  h_2 = t;
  t = SSL_table_destroy(h_2);
  t = term_s_13;
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, d_2);
  t = g_6(g_2, d_2, t);
  t = e_2;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm f_6 (ATerm w_79 (ATerm), ATerm t)
{
  ATerm r_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,i_3 = NULL,n_3 = NULL,o_3 = NULL,e_5 = NULL;
  v_2 = t;
  t = save_Binding_0_0(t);
  t_2 = t;
  t = save_CurrentTerm_0_0(t);
  r_2 = t;
  t = v_2;
  if(match_cons(t, sym_Let_2))
    {
      x_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_2);
  w_2 = t;
  t = x_2;
  {
    static ATerm r_1 (ATerm t)
    {
      ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,c_4 = NULL,d_4 = NULL;
      y_3 = t;
      t = (ATerm) ATempty;
      c_4 = t;
      t = term_u_13;
      d_4 = t;
      t = term_y_13;
      t = i_6(k_2, c_4, d_4, t);
      t = term_s_13;
      a_4 = t;
      t = SSL_table_destroy(a_4);
      t = term_s_13;
      z_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_s_13, t_2);
      t = g_6(z_3, t_2, t);
      t = y_3;
      t = w_79(t);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  z_2 = t;
  t = term_x_13;
  o_3 = t;
  t = SSL_table_destroy(o_3);
  t = term_x_13;
  n_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, r_2);
  t = g_6(n_3, r_2, t);
  t = term_s_13;
  i_3 = t;
  t = SSL_table_destroy(i_3);
  t = term_s_13;
  b_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, t_2);
  t = g_6(b_3, t_2, t);
  t = y_2;
  t = w_79(t);
  a_3 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, z_2, a_3);
  e_5 = t;
  t = SSLsetAnnotations(e_5, w_2);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,l_5 = NULL,o_5 = NULL,q_5 = NULL;
  q_5 = t;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
      t = j_5;
      {
        ATerm e_14 = t;
        int g_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_5 = ATgetFirst((ATermList) t);
                {
                  ATerm h_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(g_14);
            t = l_5;
            {
              ATerm j_14 = t;
              int k_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm l_14 = ATgetArgument(t, 0);
                      o_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_14);
                  t = i_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = q_5;
                    }
                  else
                    {
                      ATerm n_14 = t;
                      int o_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_7(i_5, o_5, q_5, t);
                          LocalPopChoice(o_14);
                        }
                      else
                        {
                          t = n_14;
                          t = q_5;
                        }
                    }
                }
              else
                {
                  t = j_14;
                  t = i_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = q_5;
                    }
                  else
                    {
                      t = q_5;
                    }
                }
            }
          }
        else
          {
            t = e_14;
            t = i_5;
            if(match_cons(t, sym_Scopes_0))
              {
                t = q_5;
              }
            else
              {
                t = q_5;
              }
          }
      }
    }
  else
    {
      t = q_5;
    }
  return(t);
}
static ATerm u_7 (ATerm t_4, ATerm u_4, ATerm v_4, ATerm t)
{
  t = v_4;
  {
    ATerm q_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = term_x_13;
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_x_13, t_4);
        t = k_7(q_0, t_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_14 = ATgetFirst((ATermList) t);
            if(match_cons(t_14, sym_Defined_2))
              {
                ATerm j_15 = ATgetArgument(t_14, 0);
                if((u_4 != ATgetArgument(t_14, 1)))
                  {
                    _fail(ATgetArgument(t_14, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm u_14 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = v_4;
        LocalPopChoice(s_14);
      }
    else
      {
        t = q_14;
        t = (ATerm) ATmakeAppl(sym__2, t_4, (ATerm) ATinsert(ATempty, term_u_13));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  t = map_1_0(l_2, t);
  q_4 = t;
  t = term_x_13;
  s_4 = t;
  t = SSL_table_destroy(s_4);
  t = term_x_13;
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, q_4);
  t = g_6(r_4, q_4, t);
  t = q_4;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,k_10 = NULL,o_10 = NULL;
  o_10 = t;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      t = f_10;
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_10 = ATgetFirst((ATermList) t);
                {
                  ATerm m_15 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_15);
            t = g_10;
            {
              ATerm n_15 = t;
              int o_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm p_15 = ATgetArgument(t, 0);
                      k_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_15);
                  t = e_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = o_10;
                    }
                  else
                    {
                      ATerm q_15 = t;
                      int z_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = j_11(e_10, k_10, o_10, t);
                          LocalPopChoice(z_15);
                        }
                      else
                        {
                          t = q_15;
                          t = o_10;
                        }
                    }
                }
              else
                {
                  t = n_15;
                  t = e_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = o_10;
                    }
                  else
                    {
                      t = o_10;
                    }
                }
            }
          }
        else
          {
            t = k_15;
            t = e_10;
            if(match_cons(t, sym_Scopes_0))
              {
                t = o_10;
              }
            else
              {
                t = o_10;
              }
          }
      }
    }
  else
    {
      t = o_10;
    }
  return(t);
}
static ATerm j_11 (ATerm c_9, ATerm f_9, ATerm l_9, ATerm t)
{
  t = l_9;
  {
    ATerm a_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = term_s_13;
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, c_9);
        t = k_7(u_0, c_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm l_16 = ATgetFirst((ATermList) t);
            if(match_cons(l_16, sym_Defined_2))
              {
                ATerm n_16 = ATgetArgument(l_16, 0);
                if((f_9 != ATgetArgument(l_16, 1)))
                  {
                    _fail(ATgetArgument(l_16, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm m_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = l_9;
        LocalPopChoice(g_16);
      }
    else
      {
        t = a_16;
        t = (ATerm) ATmakeAppl(sym__2, c_9, (ATerm) ATinsert(ATempty, term_u_13));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm x_8 = NULL,a_9 = NULL,b_9 = NULL;
  t = map_1_0(j_3, t);
  x_8 = t;
  t = term_s_13;
  b_9 = t;
  t = SSL_table_destroy(b_9);
  t = term_s_13;
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, x_8);
  t = g_6(a_9, x_8, t);
  t = x_8;
  return(t);
}
static ATerm g_6 (ATerm r_53, ATerm q_53, ATerm t)
{
  static ATerm k_3 (ATerm t)
  {
    ATerm l_11 = NULL,p_11 = NULL;
    if(match_cons(t, sym__2))
      {
        l_11 = ATgetArgument(t, 0);
        p_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(r_53, l_11, p_11);
    t = (ATerm) ATmakeAppl(sym__3, r_53, l_11, p_11);
    return(t);
  }
  t = q_53;
  t = map_1_0(k_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_x_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_11 = NULL;
  static ATerm l_3 (ATerm t)
  {
    ATerm r_11 = NULL,v_11 = NULL;
    r_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), r_11);
    t = k_7(not_null(q_11), r_11, t);
    v_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_11, v_11);
    return(t);
  }
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  t = SSL_table_keys(q_11);
  t = map_1_0(l_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_s_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL;
  c_12 = t;
  t = save_Binding_0_0(t);
  w_11 = t;
  t = save_CurrentTerm_0_0(t);
  x_11 = t;
  t = c_12;
  t = a_80(t);
  b_12 = t;
  t = save_Binding_0_0(t);
  y_11 = t;
  t = term_s_13;
  g_12 = t;
  t = SSL_table_destroy(g_12);
  t = term_s_13;
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_13, w_11);
  t = g_6(f_12, w_11, t);
  t = w_11;
  t = save_CurrentTerm_0_0(t);
  z_11 = t;
  t = term_x_13;
  e_12 = t;
  t = SSL_table_destroy(e_12);
  t = term_x_13;
  d_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, x_11);
  t = g_6(d_12, x_11, t);
  t = b_12;
  t = b_80(t);
  a_12 = t;
  t = y_11;
  t = isect_Binding_0_0(t);
  t = z_11;
  t = isect_CurrentTerm_0_0(t);
  t = a_12;
  return(t);
}
ATerm prop_choice_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm k_12 = NULL;
  k_12 = t;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm r_16 = ATgetArgument(t, 0);
            ATerm s_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(p_16);
        {
          static ATerm e_4 (ATerm t)
          {
            ATerm s_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,n_5 = NULL;
            z_12 = t;
            if(match_cons(t, sym_Choice_2))
              {
                w_12 = ATgetArgument(t, 0);
                x_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_12);
            s_12 = t;
            t = w_12;
            t = z_79(t);
            y_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, y_12, x_12);
            n_5 = t;
            t = SSLsetAnnotations(n_5, s_12);
            return(t);
          }
          static ATerm f_4 (ATerm t)
          {
            ATerm a_13 = NULL,e_13 = NULL,i_13 = NULL,k_13 = NULL,l_13 = NULL,u_5 = NULL;
            l_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                e_13 = ATgetArgument(t, 0);
                i_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(l_13);
            a_13 = t;
            t = i_13;
            t = z_79(t);
            k_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, e_13, k_13);
            u_5 = t;
            t = SSLsetAnnotations(u_5, a_13);
            return(t);
          }
          t = k_12;
          t = prop_abstract_choice_2_0(e_4, f_4, t);
        }
      }
    else
      {
        t = o_16;
        {
          ATerm u_16 = t;
          int v_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm w_16 = ATgetArgument(t, 0);
                  ATerm x_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(v_16);
              {
                static ATerm g_4 (ATerm t)
                {
                  ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,w_13 = NULL,x_5 = NULL;
                  w_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      p_13 = ATgetArgument(t, 0);
                      q_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_13);
                  o_13 = t;
                  t = p_13;
                  t = z_79(t);
                  r_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, r_13, q_13);
                  x_5 = t;
                  t = SSLsetAnnotations(x_5, o_13);
                  return(t);
                }
                static ATerm h_4 (ATerm t)
                {
                  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,f_14 = NULL,z_5 = NULL;
                  f_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      b_14 = ATgetArgument(t, 0);
                      c_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_14);
                  a_14 = t;
                  t = c_14;
                  t = z_79(t);
                  d_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, b_14, d_14);
                  z_5 = t;
                  t = SSLsetAnnotations(z_5, a_14);
                  return(t);
                }
                t = k_12;
                t = prop_abstract_choice_2_0(g_4, h_4, t);
              }
            }
          else
            {
              t = u_16;
              {
                ATerm y_16 = t;
                int a_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm d_17 = ATgetArgument(t, 0);
                        ATerm e_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_17);
                    {
                      static ATerm j_4 (ATerm t)
                      {
                        ATerm i_14 = NULL,m_14 = NULL,p_14 = NULL,r_14 = NULL,w_14 = NULL,a_6 = NULL;
                        w_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            m_14 = ATgetArgument(t, 0);
                            p_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(w_14);
                        i_14 = t;
                        t = m_14;
                        t = z_79(t);
                        r_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, r_14, p_14);
                        a_6 = t;
                        t = SSLsetAnnotations(a_6, i_14);
                        return(t);
                      }
                      static ATerm k_4 (ATerm t)
                      {
                        ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,b_6 = NULL;
                        d_15 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            a_15 = ATgetArgument(t, 0);
                            b_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_15);
                        z_14 = t;
                        t = b_15;
                        t = z_79(t);
                        c_15 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, a_15, c_15);
                        b_6 = t;
                        t = SSLsetAnnotations(b_6, z_14);
                        return(t);
                      }
                      t = k_12;
                      t = prop_abstract_choice_2_0(j_4, k_4, t);
                    }
                  }
                else
                  {
                    t = y_16;
                    {
                      static ATerm m_4 (ATerm t)
                      {
                        ATerm g_15 = NULL,i_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,b_16 = NULL,c_16 = NULL,l_6 = NULL,k_6 = NULL;
                        c_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            v_15 = ATgetArgument(t, 0);
                            w_15 = ATgetArgument(t, 1);
                            x_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(c_16);
                        u_15 = t;
                        t = v_15;
                        t = z_79(t);
                        y_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, y_15, w_15, x_15);
                        k_6 = t;
                        t = SSLsetAnnotations(k_6, u_15);
                        b_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            i_15 = ATgetArgument(t, 0);
                            r_15 = ATgetArgument(t, 1);
                            s_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(b_16);
                        g_15 = t;
                        t = r_15;
                        t = z_79(t);
                        t_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_15, t_15, s_15);
                        l_6 = t;
                        t = SSLsetAnnotations(l_6, g_15);
                        return(t);
                      }
                      static ATerm n_4 (ATerm t)
                      {
                        ATerm d_16 = NULL,e_16 = NULL,f_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,m_6 = NULL;
                        k_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            e_16 = ATgetArgument(t, 0);
                            f_16 = ATgetArgument(t, 1);
                            i_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(k_16);
                        d_16 = t;
                        t = i_16;
                        t = z_79(t);
                        j_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_16, f_16, j_16);
                        m_6 = t;
                        t = SSLsetAnnotations(m_6, d_16);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm g_17 = ATgetArgument(t, 0);
                          ATerm h_17 = ATgetArgument(t, 1);
                          ATerm i_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = k_12;
                      t = prop_abstract_choice_2_0(m_4, n_4, t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm n_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_17 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,y_9 = NULL;
      c_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm t_17 = ATgetArgument(t, 0);
          ATerm a_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      a_1 = t;
      t = term_u_13;
      b_1 = t;
      t = term_y_13;
      t = i_6(o_4, a_1, b_1, t);
      t = c_17;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          j_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_17);
      e_1 = t;
      t = j_1;
      {
        static ATerm p_4 (ATerm t)
        {
          t = exec_maybe_1_0(o_0, t);
          return(t);
        }
        t = map_1_0(p_4, t);
      }
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym_Cong_2, h_1, k_1);
      y_9 = t;
      t = SSLsetAnnotations(y_9, e_1);
      LocalPopChoice(p_17);
    }
  else
    {
      t = n_17;
      {
        ATerm j_17 = NULL,l_17 = NULL,m_17 = NULL;
        static ATerm y_4 (ATerm t)
        {
          t = exec_maybe_1_0(o_0, t);
          return(t);
        }
        ATerm b_18 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm d_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(c_18);
          }
        else
          {
            t = b_18;
            {
              ATerm s_17 = NULL;
              s_17 = t;
              {
                ATerm e_18 = t;
                int f_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm g_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(f_18);
                    t = s_17;
                  }
                else
                  {
                    t = e_18;
                    {
                      ATerm h_18 = t;
                      int j_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm m_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(j_18);
                          t = s_17;
                        }
                      else
                        {
                          t = h_18;
                          {
                            ATerm n_18 = t;
                            int p_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm r_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(p_18);
                                t = s_17;
                              }
                            else
                              {
                                t = n_18;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm w_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = s_17;
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
        l_17 = t;
        t = term_u_13;
        m_17 = t;
        t = term_y_13;
        t = i_6(w_4, l_17, m_17, t);
        t = j_17;
        t = SRTS_one(y_4, t);
      }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,k_11 = NULL;
  t = Binding_0_0(t);
  h_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_3);
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_3);
  k_11 = t;
  t = SSLsetAnnotations(k_11, f_3);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,b_4 = NULL,e_15 = NULL;
  t = Binding_0_0(t);
  b_4 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_4);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_3);
  e_15 = t;
  t = SSLsetAnnotations(e_15, w_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm b_20 = NULL;
  b_20 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm z_18 = ATgetArgument(t, 0);
            ATerm c_19 = ATgetArgument(t, 1);
            ATerm d_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(y_18);
        {
          ATerm m_2 = NULL,o_2 = NULL,q_2 = NULL,s_2 = NULL,u_2 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,y_14 = NULL;
          t = (ATerm) ATempty;
          m_2 = t;
          t = term_u_13;
          o_2 = t;
          t = term_y_13;
          t = i_6(z_4, m_2, o_2, t);
          t = b_20;
          if(match_cons(t, sym_PrimT_3))
            {
              s_2 = ATgetArgument(t, 0);
              u_2 = ATgetArgument(t, 1);
              c_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_20);
          q_2 = t;
          t = u_2;
          {
            static ATerm a_5 (ATerm t)
            {
              t = exec_maybe_1_0(m_0, t);
              return(t);
            }
            t = map_1_0(a_5, t);
          }
          d_3 = t;
          t = c_3;
          t = alltd_1_0(b_5, t);
          e_3 = t;
          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_2, d_3, e_3);
          y_14 = t;
          t = SSLsetAnnotations(y_14, q_2);
        }
      }
    else
      {
        t = x_18;
        {
          ATerm m_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,q_16 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm g_19 = ATgetArgument(t, 0);
              ATerm h_19 = ATgetArgument(t, 1);
              ATerm j_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          m_3 = t;
          t = term_u_13;
          p_3 = t;
          t = term_y_13;
          t = i_6(d_5, m_3, p_3, t);
          t = b_20;
          if(match_cons(t, sym_CallT_3))
            {
              r_3 = ATgetArgument(t, 0);
              s_3 = ATgetArgument(t, 1);
              t_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_20);
          q_3 = t;
          t = s_3;
          {
            static ATerm f_5 (ATerm t)
            {
              t = exec_maybe_1_0(m_0, t);
              return(t);
            }
            t = map_1_0(f_5, t);
          }
          u_3 = t;
          t = t_3;
          t = alltd_1_0(g_5, t);
          v_3 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, r_3, u_3, v_3);
          q_16 = t;
          t = SSLsetAnnotations(q_16, q_3);
        }
      }
  }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_21);
  y_21 = t;
  t = term_u_13;
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_21), term_u_13);
  t = i_6(y_5, y_21, z_21, t);
  t = x_21;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm h_6 (ATerm u_79 (ATerm), ATerm x_20, ATerm t)
{
  static ATerm p_5 (ATerm t)
  {
    ATerm s_20 = NULL,a_21 = NULL,f_21 = NULL,k_21 = NULL,o_21 = NULL,s_21 = NULL,z_16 = NULL;
    s_20 = t;
    t = x_20;
    t = map_1_0(t_5, t);
    t = s_20;
    if(match_cons(t, sym_Scope_2))
      {
        f_21 = ATgetArgument(t, 0);
        k_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(s_20);
    a_21 = t;
    t = k_21;
    t = u_79(t);
    o_21 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, f_21, o_21);
    z_16 = t;
    t = SSLsetAnnotations(z_16, a_21);
    s_21 = t;
    {
      ATerm l_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_22 = NULL,c_22 = NULL,h_22 = NULL;
          t = CurrentTerm_0_0(t);
          {
            static ATerm e_6 (ATerm t)
            {
              ATerm n_22 = NULL;
              static ATerm o_6 (ATerm t)
              {
                if(((n_22 != NULL) && (n_22 != t)))
                  _fail(t);
                else
                  n_22 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((n_22 != NULL) && (n_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    n_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = x_20;
              t = fetch_1_0(o_6, t);
              return(t);
            }
            t = oncetd_1_0(e_6, t);
          }
          a_22 = t;
          t = (ATerm) ATempty;
          c_22 = t;
          t = term_u_13;
          h_22 = t;
          t = term_y_13;
          t = i_6(p_6, c_22, h_22, t);
          t = a_22;
          LocalPopChoice(n_19);
        }
      else
        {
          t = l_19;
        }
    }
    t = s_21;
    return(t);
  }
  t = scope_2_0(m_5, p_5, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,b_17 = NULL;
  c_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_23);
  w_22 = t;
  t = x_22;
  t = alltd_1_0(Binding_0_0, t);
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, a_23);
  b_17 = t;
  t = SSLsetAnnotations(b_17, w_22);
  b_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_19, q_22);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_19, q_22));
  t = i_6(q_6, r_22, v_22, t);
  t = b_23;
  return(t);
}
static ATerm i_6 (ATerm u_100 (ATerm), ATerm b_43, ATerm z_42, ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL;
  k_23 = t;
  t = u_100(t);
  h_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_23, b_43, z_42);
  t = l_7(h_23, b_43, z_42, t);
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_23 = NULL;
        t = term_x_19;
        n_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_23, term_x_19);
        t = k_7(h_23, n_23, t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_23 = ATgetFirst((ATermList) t);
      j_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_19;
  l_23 = t;
  t = (ATerm) ATinsert(CheckATermList(j_23), (ATerm) ATinsert(CheckATermList(i_23), b_43));
  m_23 = t;
  t = SSL_table_put(h_23, l_23, m_23);
  t = k_23;
  return(t);
}
ATerm oncetd_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  static ATerm o_23 (ATerm t)
  {
    ATerm y_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_82(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = y_19;
        t = SRTS_one(o_23, t);
      }
    return(t);
  }
  t = o_23(t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm q_23 = NULL;
  q_23 = t;
  {
    ATerm a_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_23 = NULL;
        t = term_d_20;
        t = get_config_0_0(t);
        t_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_23, term_e_20);
        t = geq_0_0(t);
        t = q_23;
        t = y_102(t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = a_20;
        t = q_23;
      }
  }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = i_24;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm f_20 = ATgetArgument(t, 0);
          ATerm g_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_24;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm j_6 (ATerm q_21, ATerm r_21, ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
  f_24 = t;
  t = r_21;
  {
    ATerm h_20 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(r_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, q_21);
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_20, r_21);
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_21), (ATerm) ATmakeAppl(sym_Defined_2, term_i_20, r_21));
  t = i_6(s_6, g_24, h_24, t);
  t = f_24;
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,z_27 = NULL,a_28 = NULL;
  u_27 = t;
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_27 = ATgetFirst((ATermList) t);
      a_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_27;
  if(match_cons(t, sym__2))
    {
      s_27 = ATgetArgument(t, 0);
      t_27 = ATgetArgument(t, 1);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_27;
            if((v_27 != t))
              {
                _fail(t);
              }
            t = t_27;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = (ATerm) ATmakeAppl(sym__2, v_27, a_28);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, v_27, a_28);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_20 = ATgetArgument(t, 0);
      if(((ATgetType(l_20) != AT_LIST) || !(ATisEmpty(l_20))))
        _fail(t);
      {
        ATerm m_20 = ATgetArgument(t, 1);
        if(((ATgetType(m_20) != AT_LIST) || !(ATisEmpty(m_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm d_31 = NULL,f_31 = NULL,i_31 = NULL,k_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
        {
          d_31 = ATgetFirst((ATermList) n_20);
          f_31 = (ATerm) ATgetNext((ATermList) n_20);
        }
      else
        _fail(t);
      {
        ATerm o_20 = ATgetArgument(t, 1);
        if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
          {
            i_31 = ATgetFirst((ATermList) o_20);
            k_31 = (ATerm) ATgetNext((ATermList) o_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_31, i_31), (ATerm) ATmakeAppl(sym__2, f_31, k_31));
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm o_31 = NULL,q_31 = NULL;
  if(match_cons(t, sym__2))
    {
      o_31 = ATgetArgument(t, 0);
      q_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_31), o_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm a_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL;
  a_30 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_20 = ATgetArgument(t, 0);
            ATerm t_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(q_20);
        t = a_30;
      }
    else
      {
        t = p_20;
        {
          ATerm x_30 = NULL;
          if(match_cons(t, sym__3))
            {
              d_30 = ATgetArgument(t, 0);
              e_30 = ATgetArgument(t, 1);
              f_30 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_30, e_30);
          t = genzip_4_0(t_6, v_6, w_6, _id, t);
          x_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_30, f_30);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,w_31 = NULL;
  static ATerm j_7 (ATerm t)
  {
    ATerm x_4 = NULL;
    t = t_107(t);
    x_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_4, not_null(w_31));
    t = lookup_0_0(t);
    t = u_107(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((w_31 != NULL) && (w_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_31 = ATgetArgument(t, 0);
      t_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_31;
  t = alltd_1_0(j_7, t);
  return(t);
}
static ATerm u_6 (ATerm g_112 (ATerm), ATerm h_58, ATerm i_58, ATerm k_58, ATerm j_58, ATerm t)
{
  ATerm z_31 = NULL,c_32 = NULL;
  t = h_58;
  t = g_112(t);
  t = (ATerm) ATmakeAppl(sym__2, h_58, i_58);
  {
    ATerm u_20 = t;
    if((PushChoice() == 0))
      {
        ATerm d_32 = NULL,g_32 = NULL;
        if(match_cons(t, sym__2))
          {
            d_32 = ATgetArgument(t, 0);
            g_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_32;
        {
          static ATerm m_7 (ATerm t)
          {
            if((d_32 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(m_7, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, d_32, g_32);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_58, i_58)), (ATerm) ATmakeAppl(sym__2, j_58, k_58));
  t = substitute_2_0(g_112, _id, t);
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      c_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_32, (ATerm) ATinsert(CheckATermList(z_31), (ATerm) ATmakeAppl(sym__2, h_58, i_58)));
  return(t);
}
ATerm at_end_1_0 (ATerm x_88 (ATerm), ATerm t)
{
  static ATerm b_26 (ATerm t)
  {
    ATerm w_25 = NULL,x_25 = NULL,z_25 = NULL;
    z_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_25 = ATgetFirst((ATermList) t);
        x_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_4 = NULL,l_4 = NULL,k_17 = NULL;
          t = SSLgetAnnotations(z_25);
          i_4 = t;
          t = x_25;
          t = b_26(t);
          l_4 = t;
          t = (ATerm) ATinsert(CheckATermList(l_4), w_25);
          k_17 = t;
          t = SSLsetAnnotations(k_17, i_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_25;
        t = x_88(t);
      }
    return(t);
  }
  t = b_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_24 = NULL,a_25 = NULL,c_25 = NULL;
  v_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_24;
    }
  else
    {
      static ATerm o_7 (ATerm t)
      {
        t = not_null(c_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_25 = ATgetFirst((ATermList) t);
          if(((c_25 != NULL) && (c_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            c_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_25;
      t = at_end_1_0(o_7, t);
    }
  return(t);
}
static ATerm w_26 (ATerm f_26, ATerm t)
{
  ATerm h_26 = NULL;
  t = SSL_explode_term(f_26);
  if(match_cons(t, sym__2))
    {
      ATerm v_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,r_26 = NULL;
  r_26 = t;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
      {
        ATerm w_20 = t;
        int y_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_7 (ATerm t)
            {
              t = o_26;
              return(t);
            }
            t = n_26;
            t = at_end_1_0(q_7, t);
            LocalPopChoice(y_20);
          }
        else
          {
            t = w_20;
            t = w_26(r_26, t);
          }
      }
    }
  else
    {
      t = w_26(r_26, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm), ATerm n_90 (ATerm), ATerm t)
{
  static ATerm x_29 (ATerm t)
  {
    ATerm z_20 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_90(t);
        LocalPopChoice(b_21);
      }
    else
      {
        t = z_20;
        {
          ATerm i_29 = NULL,j_29 = NULL,m_29 = NULL,n_29 = NULL,t_29 = NULL,u_29 = NULL,o_17 = NULL;
          t = l_90(t);
          u_29 = t;
          if(match_cons(t, sym__2))
            {
              j_29 = ATgetArgument(t, 0);
              m_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_29);
          i_29 = t;
          t = j_29;
          t = n_90(t);
          n_29 = t;
          t = m_29;
          t = x_29(t);
          t_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_29, t_29);
          o_17 = t;
          t = SSLsetAnnotations(o_17, i_29);
          t = m_90(t);
        }
      }
    return(t);
  }
  t = x_29(t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      if(((ATgetType(e_21) != AT_LIST) || !(ATisEmpty(e_21))))
        _fail(t);
      {
        ATerm g_21 = ATgetArgument(t, 1);
        if(((ATgetType(g_21) != AT_LIST) || !(ATisEmpty(g_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm f_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_21 = ATgetArgument(t, 0);
      if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
        {
          f_27 = ATgetFirst((ATermList) h_21);
          h_27 = (ATerm) ATgetNext((ATermList) h_21);
        }
      else
        _fail(t);
      {
        ATerm i_21 = ATgetArgument(t, 1);
        if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
          {
            i_27 = ATgetFirst((ATermList) i_21);
            j_27 = (ATerm) ATgetNext((ATermList) i_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_27, i_27), (ATerm) ATmakeAppl(sym__2, h_27, j_27));
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  if(match_cons(t, sym__2))
    {
      k_27 = ATgetArgument(t, 0);
      l_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_27), k_27);
  return(t);
}
static ATerm n_6 (ATerm p_627, ATerm u_627, ATerm j_59, ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL,d_27 = NULL;
  t = SSL_explode_term(u_627);
  if(match_cons(t, sym__2))
    {
      z_26 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_627);
  if(match_cons(t, sym__2))
    {
      if((z_26 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_27, b_27);
  t = genzip_4_0(r_7, s_7, t_7, _id, t);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_27, j_59);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_81 (ATerm), ATerm n_81 (ATerm), ATerm t)
{
  static ATerm k_32 (ATerm t)
  {
    ATerm j_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_81(t);
        LocalPopChoice(l_21);
      }
    else
      {
        t = j_21;
        t = n_81(t);
        t = k_32(t);
      }
    return(t);
  }
  t = k_32(t);
  return(t);
}
ATerm for_3_0 (ATerm p_81 (ATerm), ATerm q_81 (ATerm), ATerm r_81 (ATerm), ATerm t)
{
  t = p_81(t);
  t = while_not_2_0(q_81, r_81, t);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_33, (ATerm) ATempty);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm f_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_21 = ATgetArgument(t, 0);
      if(((ATgetType(m_21) != AT_LIST) || !(ATisEmpty(m_21))))
        _fail(t);
      f_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_33;
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm j_37 = NULL,q_37 = NULL,r_37 = NULL,u_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  w_37 = t;
  if(match_cons(t, sym__2))
    {
      x_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_37 = ATgetFirst((ATermList) t);
      u_37 = (ATerm) ATgetNext((ATermList) t);
      t = j_37;
      if(match_cons(t, sym__2))
        {
          q_37 = ATgetArgument(t, 0);
          r_37 = ATgetArgument(t, 1);
          {
            ATerm n_21 = t;
            int p_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = p_38(x_37, y_37, w_37, t);
                LocalPopChoice(p_21);
              }
            else
              {
                t = n_21;
                {
                  ATerm t_21 = t;
                  int u_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_37;
                      t = u_6(z_7, q_37, r_37, u_37, y_37, t);
                      LocalPopChoice(u_21);
                    }
                  else
                    {
                      t = t_21;
                      {
                        ATerm v_21 = t;
                        int w_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = y_38(x_37, y_37, w_37, t);
                            LocalPopChoice(w_21);
                          }
                        else
                          {
                            t = v_21;
                            {
                              ATerm b_22 = t;
                              int d_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = z_38(x_37, y_37, w_37, t);
                                  LocalPopChoice(d_22);
                                }
                              else
                                {
                                  t = b_22;
                                  {
                                    ATerm e_22 = t;
                                    int f_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = a_39(x_37, y_37, w_37, t);
                                        LocalPopChoice(f_22);
                                      }
                                    else
                                      {
                                        t = e_22;
                                        t = f_39(x_37, y_37, w_37, t);
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
          ATerm g_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_38(x_37, y_37, w_37, t);
              LocalPopChoice(i_22);
            }
          else
            {
              t = g_22;
              {
                ATerm j_22 = t;
                int k_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = y_38(x_37, y_37, w_37, t);
                    LocalPopChoice(k_22);
                  }
                else
                  {
                    t = j_22;
                    {
                      ATerm l_22 = t;
                      int m_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_38(x_37, y_37, w_37, t);
                          LocalPopChoice(m_22);
                        }
                      else
                        {
                          t = l_22;
                          {
                            ATerm o_22 = t;
                            int p_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_39(x_37, y_37, w_37, t);
                                LocalPopChoice(p_22);
                              }
                            else
                              {
                                t = o_22;
                                t = f_39(x_37, y_37, w_37, t);
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
      ATerm s_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_38(x_37, y_37, w_37, t);
          LocalPopChoice(t_22);
        }
      else
        {
          t = s_22;
          {
            ATerm u_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_38(x_37, y_37, w_37, t);
                LocalPopChoice(y_22);
              }
            else
              {
                t = u_22;
                {
                  ATerm z_22 = t;
                  int d_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = z_38(x_37, y_37, w_37, t);
                      LocalPopChoice(d_23);
                    }
                  else
                    {
                      t = z_22;
                      {
                        ATerm e_23 = t;
                        int f_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = a_39(x_37, y_37, w_37, t);
                            LocalPopChoice(f_23);
                          }
                        else
                          {
                            t = e_23;
                            t = f_39(x_37, y_37, w_37, t);
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
static ATerm p_38 (ATerm g_33, ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm l_33 = NULL,w_33 = NULL,x_33 = NULL,q_17 = NULL;
  t = SSLgetAnnotations(k_33);
  l_33 = t;
  t = g_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_23 = ATgetFirst((ATermList) t);
      if(match_cons(g_23, sym__2))
        {
          w_33 = ATgetArgument(g_23, 0);
          if((w_33 != ATgetArgument(g_23, 1)))
            {
              _fail(ATgetArgument(g_23, 1));
            }
        }
      else
        _fail(t);
      x_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_33, j_33);
  q_17 = t;
  t = SSLsetAnnotations(q_17, l_33);
  return(t);
}
static ATerm y_38 (ATerm c_34, ATerm f_34, ATerm h_34, ATerm t)
{
  ATerm i_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,v_34 = NULL,r_17 = NULL;
  t = SSLgetAnnotations(h_34);
  i_34 = t;
  t = c_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_23 = ATgetFirst((ATermList) t);
      if(match_cons(p_23, sym__2))
        {
          n_34 = ATgetArgument(p_23, 0);
          o_34 = ATgetArgument(p_23, 1);
        }
      else
        _fail(t);
      v_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_6(n_34, o_34, v_34, t);
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_34, f_34);
  r_17 = t;
  t = SSLsetAnnotations(r_17, i_34);
  return(t);
}
static ATerm z_38 (ATerm x_34, ATerm y_34, ATerm a_35, ATerm t)
{
  ATerm b_35 = NULL,g_35 = NULL,j_35 = NULL,k_35 = NULL,l_35 = NULL,u_17 = NULL;
  t = SSLgetAnnotations(a_35);
  b_35 = t;
  t = x_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_23 = ATgetFirst((ATermList) t);
      if(match_cons(r_23, sym__2))
        {
          ATerm s_23 = ATgetArgument(r_23, 0);
          if(match_cons(s_23, sym_As_2))
            {
              g_35 = ATgetArgument(s_23, 0);
              j_35 = ATgetArgument(s_23, 1);
            }
          else
            _fail(t);
          k_35 = ATgetArgument(r_23, 1);
        }
      else
        _fail(t);
      l_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(l_35), (ATerm) ATmakeAppl(sym__2, j_35, k_35)), (ATerm) ATmakeAppl(sym__2, g_35, k_35)), y_34);
  u_17 = t;
  t = SSLsetAnnotations(u_17, b_35);
  return(t);
}
static ATerm a_39 (ATerm n_35, ATerm o_35, ATerm r_35, ATerm t)
{
  ATerm s_35 = NULL,y_35 = NULL,v_17 = NULL;
  t = SSLgetAnnotations(r_35);
  s_35 = t;
  t = n_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_23 = ATgetFirst((ATermList) t);
      if(match_cons(u_23, sym__2))
        {
          ATerm v_23 = ATgetArgument(u_23, 0);
          if(!(match_cons(v_23, sym_Wld_0)))
            _fail(t);
          {
            ATerm y_23 = ATgetArgument(u_23, 1);
          }
        }
      else
        _fail(t);
      y_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_35, o_35);
  v_17 = t;
  t = SSLsetAnnotations(v_17, s_35);
  return(t);
}
static ATerm f_39 (ATerm a_36, ATerm b_36, ATerm e_36, ATerm t)
{
  ATerm h_36 = NULL,k_36 = NULL,o_36 = NULL,r_36 = NULL,x_36 = NULL,z_36 = NULL,y_17 = NULL,x_17 = NULL;
  t = SSLgetAnnotations(e_36);
  h_36 = t;
  t = a_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_23 = ATgetFirst((ATermList) t);
      if(match_cons(z_23, sym__2))
        {
          k_36 = ATgetArgument(z_23, 0);
          o_36 = ATgetArgument(z_23, 1);
        }
      else
        _fail(t);
      r_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_36;
  {
    ATerm d_24 = t;
    if((PushChoice() == 0))
      {
        ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL,w_17 = NULL;
        f_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            e_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_37);
        d_37 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, e_37);
        w_17 = t;
        t = SSLsetAnnotations(w_17, d_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_24;
      }
  }
  t = o_36;
  if(match_cons(t, sym_Var_1))
    {
      z_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_36);
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_36);
  x_17 = t;
  t = SSLsetAnnotations(x_17, x_36);
  t = (ATerm) ATmakeAppl(sym__2, r_36, b_36);
  y_17 = t;
  t = SSLsetAnnotations(y_17, h_36);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,o_38 = NULL,z_17 = NULL;
  o_38 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_38);
  k_38 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_38);
  z_17 = t;
  t = SSLsetAnnotations(z_17, k_38);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(v_7, w_7, y_7, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_39 = NULL,h_5 = NULL,k_5 = NULL;
      t = (ATerm) ATempty;
      h_5 = t;
      t = term_x_13;
      k_5 = t;
      t = term_l_24;
      t = x_6(k_5, h_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm m_24 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) m_24) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          h_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_39;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_39 = NULL,r_5 = NULL,s_5 = NULL;
            t = (ATerm) ATempty;
            r_5 = t;
            t = term_x_13;
            s_5 = t;
            t = term_l_24;
            t = x_6(s_5, r_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm p_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_24) != ATmakeSymbol("g_0", 0, ATtrue)))
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
              ATerm v_5 = NULL,w_5 = NULL;
              t = (ATerm) ATempty;
              v_5 = t;
              t = term_x_13;
              w_5 = t;
              t = term_l_24;
              t = x_6(w_5, v_5, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
            }
          }
      }
    }
  return(t);
}
static ATerm x_6 (ATerm z_52, ATerm a_53, ATerm t)
{
  ATerm l_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_52, a_53);
  t = k_7(z_52, a_53, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_39 = ATgetFirst((ATermList) t);
      {
        ATerm q_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_39;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm r_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL,p_7 = NULL;
        t = term_s_13;
        p_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, e_40);
        t = x_6(p_7, e_40, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_24 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_24) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            z_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_6;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        {
          ATerm w_24 = t;
          int x_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_7 = NULL;
              t = term_s_13;
              x_7 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_s_13, e_40);
              t = x_6(x_7, e_40, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              _fail(t);
              LocalPopChoice(x_24);
            }
          else
            {
              t = w_24;
              {
                ATerm d_8 = NULL;
                t = term_s_13;
                d_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_s_13, e_40);
                t = x_6(d_8, e_40, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  static ATerm m_40 (ATerm t)
  {
    ATerm y_24 = t;
    int z_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_83(t);
        LocalPopChoice(z_24);
      }
    else
      {
        t = y_24;
        t = SRTS_all(m_40, t);
      }
    return(t);
  }
  t = m_40(t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm b_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_8 = NULL,j_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm e_25 = ATgetArgument(t, 0);
          if(match_cons(e_25, sym_Var_1))
            {
              i_8 = ATgetArgument(e_25, 0);
            }
          else
            _fail(t);
          j_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_6(i_8, j_8, t);
      LocalPopChoice(d_25);
    }
  else
    {
      t = b_25;
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = debug_1_0(c_8, t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = i_41;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm g_25 = ATgetArgument(t, 0);
          ATerm h_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_41;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  t = term_x_13;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,b_41 = NULL,d_41 = NULL,i_18 = NULL;
  d_41 = t;
  if(match_cons(t, sym_Match_1))
    {
      x_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_41);
  w_40 = t;
  t = x_40;
  t = alltd_1_0(Binding_0_0, t);
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, y_40);
  i_18 = t;
  t = SSLsetAnnotations(i_18, w_40);
  b_41 = t;
  if(match_cons(t, sym_Match_1))
    {
      v_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        u_40 = t;
        t = b_41;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, v_40, u_40));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(a_8, t);
              t = b_41;
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              t = (ATerm) ATmakeAppl(sym__4, term_m_25, b_41, term_n_25, u_40);
              t = if_verbose3_1_0(b_8, t);
              t = term_o_25;
            }
        }
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_41 = NULL,h_41 = NULL;
              t = v_40;
              {
                ATerm r_25 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(e_8, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_25;
                  }
              }
              t = (ATerm) ATempty;
              g_41 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_25, v_40);
              h_41 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_25, v_40));
              t = i_6(f_8, g_41, h_41, t);
              t = b_41;
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
            }
        }
      }
  }
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        ATerm v_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            LocalPopChoice(y_25);
          }
        else
          {
            t = v_25;
            {
              ATerm a_26 = t;
              int c_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_42 = NULL,o_42 = NULL;
                  n_42 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      o_42 = ATgetArgument(t, 0);
                      {
                        ATerm d_26 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = n_42;
                  t = h_6(cp_0_0, o_42, t);
                  LocalPopChoice(c_26);
                }
              else
                {
                  t = a_26;
                  {
                    ATerm e_26 = t;
                    int g_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        LocalPopChoice(g_26);
                      }
                    else
                      {
                        t = e_26;
                        {
                          ATerm i_26 = t;
                          int j_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
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
                                    ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,n_8 = NULL,q_8 = NULL,r_8 = NULL,k_18 = NULL;
                                    m_43 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        n_43 = ATgetArgument(t, 0);
                                        o_43 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(m_43);
                                    n_8 = t;
                                    t = n_43;
                                    t = cp_0_0(t);
                                    q_8 = t;
                                    t = o_43;
                                    t = cp_0_0(t);
                                    r_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, q_8, r_8);
                                    k_18 = t;
                                    t = SSLsetAnnotations(k_18, n_8);
                                    LocalPopChoice(l_26);
                                  }
                                else
                                  {
                                    t = k_26;
                                    {
                                      ATerm m_26 = t;
                                      int p_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          LocalPopChoice(p_26);
                                        }
                                      else
                                        {
                                          t = m_26;
                                          {
                                            ATerm q_26 = t;
                                            int s_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm v_43 = NULL,w_43 = NULL,y_43 = NULL;
                                                v_43 = t;
                                                {
                                                  ATerm t_26 = t;
                                                  int u_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm v_26 = ATgetArgument(t, 0);
                                                          ATerm x_26 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(u_26);
                                                      t = v_43;
                                                      t = f_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = t_26;
                                                      {
                                                        ATerm y_26 = t;
                                                        int c_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm e_27 = ATgetArgument(t, 0);
                                                                ATerm g_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(c_27);
                                                            {
                                                              ATerm y_8 = NULL,z_8 = NULL,d_9 = NULL,e_9 = NULL,l_18 = NULL;
                                                              t = v_43;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  z_8 = ATgetArgument(t, 0);
                                                                  d_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(v_43);
                                                              y_8 = t;
                                                              t = d_9;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              e_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, z_8, e_9);
                                                              l_18 = t;
                                                              t = SSLsetAnnotations(l_18, y_8);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_26;
                                                            {
                                                              ATerm m_27 = t;
                                                              int n_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm o_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(n_27);
                                                                  t = v_43;
                                                                  t = d_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = m_27;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      w_43 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm p_27 = ATgetArgument(t, 1);
                                                                      }
                                                                      y_43 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm q_27 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = v_43;
                                                                  t = c_6(cp_0_0, w_43, y_43, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                LocalPopChoice(s_26);
                                              }
                                            else
                                              {
                                                t = q_26;
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
static ATerm y_6 (ATerm t_52, ATerm u_52, ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  f_44 = t;
  {
    ATerm r_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
        t = k_7(t_52, u_52, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_27 = ATgetFirst((ATermList) t);
            e_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_27);
        t = SSL_table_put(t_52, u_52, e_44);
        t = (ATerm) ATmakeAppl(sym__3, t_52, u_52, e_44);
      }
    else
      {
        t = r_27;
        t = SSL_table_remove(t_52, u_52);
        t = (ATerm) ATmakeAppl(sym__2, t_52, u_52);
      }
  }
  t = f_44;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_100 (ATerm), ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  j_44 = t;
  t = r_100(t);
  i_44 = t;
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_44 = NULL;
        t = term_x_19;
        l_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_44, term_x_19);
        t = k_7(i_44, l_44, t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_44 = ATgetFirst((ATermList) t);
      g_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_x_19;
  k_44 = t;
  t = SSL_table_put(i_44, k_44, g_44);
  t = h_44;
  {
    static ATerm g_8 (ATerm t)
    {
      ATerm m_44 = NULL;
      m_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_44, m_44);
      t = y_6(i_44, m_44, t);
      return(t);
    }
    t = map_1_0(g_8, t);
  }
  t = j_44;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_80 (ATerm), ATerm s_80 (ATerm), ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_80(t);
      t = s_80(t);
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      t = s_80(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_100 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  p_44 = t;
  t = q_100(t);
  o_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_44, term_x_19);
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_44 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_28 = ATgetArgument(t, 0);
            ATerm i_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_19;
        w_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_44, term_x_19);
        t = k_7(o_44, w_44, t);
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        t = (ATerm) ATempty;
      }
  }
  q_44 = t;
  t = term_x_19;
  r_44 = t;
  t = (ATerm) ATinsert(CheckATermList(q_44), (ATerm) ATempty);
  s_44 = t;
  t = SSL_table_put(o_44, r_44, s_44);
  t = p_44;
  return(t);
}
ATerm scope_2_0 (ATerm s_100 (ATerm), ATerm t_100 (ATerm), ATerm t)
{
  static ATerm h_8 (ATerm t)
  {
    t = end_scope_1_0(s_100, t);
    return(t);
  }
  t = begin_scope_1_0(s_100, t);
  t = restore_always_2_0(t_100, h_8, t);
  return(t);
}
ATerm map_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  static ATerm l_45 (ATerm t)
  {
    ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL;
    i_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_45;
      }
    else
      {
        ATerm m_9 = NULL,r_9 = NULL,s_9 = NULL,o_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_45 = ATgetFirst((ATermList) t);
            k_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_45);
        m_9 = t;
        t = j_45;
        t = h_88(t);
        r_9 = t;
        t = k_45;
        t = l_45(t);
        s_9 = t;
        t = (ATerm) ATinsert(CheckATermList(s_9), r_9);
        o_18 = t;
        t = SSLsetAnnotations(o_18, m_9);
      }
    return(t);
  }
  t = l_45(t);
  return(t);
}
ATerm Cons_2_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,q_18 = NULL;
  s_45 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_45 = ATgetFirst((ATermList) t);
      p_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_45);
  n_45 = t;
  t = o_45;
  t = e_67(t);
  q_45 = t;
  t = p_45;
  t = f_67(t);
  r_45 = t;
  t = (ATerm) ATinsert(CheckATermList(r_45), q_45);
  q_18 = t;
  t = SSLsetAnnotations(q_18, n_45);
  return(t);
}
static ATerm b_7 (ATerm s_38, ATerm t_38, ATerm t)
{
  ATerm t_45 = NULL;
  t = SSL_fputc(s_38, t_38);
  t_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_45);
  return(t);
}
static ATerm c_7 (ATerm a_24, ATerm b_24, ATerm t)
{
  ATerm u_45 = NULL;
  t = SSL_write_term_to_stream_text(a_24, b_24);
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_45);
  return(t);
}
static ATerm e_7 (ATerm y_87 (ATerm), ATerm e_165, ATerm e_24, ATerm t)
{
  ATerm v_45 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_165, term_j_28);
  t = h_7(t);
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_45, e_24);
  t = y_87(t);
  t = fclose_0_0(t);
  t = e_24;
  return(t);
}
static ATerm d_7 (ATerm w_23, ATerm x_23, ATerm t)
{
  ATerm w_45 = NULL;
  t = SSL_write_term_to_stream_baf(w_23, x_23);
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_45);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      if(match_cons(k_28, sym_Stream_1))
        {
          r_10 = ATgetArgument(k_28, 0);
        }
      else
        _fail(t);
      s_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(r_10, s_10, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if(match_cons(l_28, sym_Stream_1))
        {
          t_11 = ATgetArgument(l_28, 0);
        }
      else
        _fail(t);
      u_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_7(t_11, u_11, t);
  n_11 = t;
  t = term_m_28;
  o_11 = t;
  t = n_11;
  if(match_cons(t, sym_Stream_1))
    {
      s_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_28, n_11);
  t = b_7(o_11, s_11, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,k_47 = NULL,l_47 = NULL,t_18 = NULL,s_18 = NULL;
  b_46 = t;
  if(match_cons(t, sym__2))
    {
      i_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_46);
  h_46 = t;
  t = i_46;
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_8 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_46 != NULL) && (a_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_8, t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = term_p_28;
        a_46 = t;
      }
  }
  k_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_46, j_46);
  s_18 = t;
  t = SSLsetAnnotations(s_18, h_46);
  t = b_46;
  if(match_cons(t, sym__2))
    {
      d_46 = ATgetArgument(t, 0);
      e_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_46);
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_46, (ATerm) ATmakeAppl(sym__2, not_null(a_46), e_46));
  t_18 = t;
  t = SSLsetAnnotations(t_18, c_46);
  g_46 = t;
  if(match_cons(t, sym__2))
    {
      k_47 = ATgetArgument(t, 0);
      l_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_10 = NULL,m_10 = NULL,n_10 = NULL,p_10 = NULL,q_10 = NULL,u_18 = NULL;
        t = SSLgetAnnotations(g_46);
        c_10 = t;
        t = k_47;
        t = fetch_1_0(l_8, t);
        m_10 = t;
        t = l_47;
        if(match_cons(t, sym__2))
          {
            p_10 = ATgetArgument(t, 0);
            q_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_7(m_8, p_10, q_10, t);
        n_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_10, n_10);
        u_18 = t;
        t = SSLsetAnnotations(u_18, c_10);
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        {
          ATerm b_11 = NULL,g_11 = NULL,h_11 = NULL,m_11 = NULL,v_18 = NULL;
          t = SSLgetAnnotations(g_46);
          b_11 = t;
          t = l_47;
          if(match_cons(t, sym__2))
            {
              h_11 = ATgetArgument(t, 0);
              m_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_7(o_8, h_11, m_11, t);
          g_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_47, g_11);
          v_18 = t;
          t = SSLsetAnnotations(v_18, b_11);
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
ATerm apply_strategy_1_0 (ATerm o_104 (ATerm), ATerm t)
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  u_47 = t;
  t = dtime_0_0(t);
  t = u_47;
  t = o_104(t);
  t_47 = t;
  t = dtime_0_0(t);
  q_47 = t;
  t = t_47;
  if(match_cons(t, sym__2))
    {
      r_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_47), (ATerm) ATmakeAppl(sym_Runtime_1, q_47)), s_47);
  return(t);
}
static ATerm n_48 (ATerm h_48, ATerm t)
{
  t = SSL_fclose(h_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL;
  l_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_48 = ATgetArgument(t, 0);
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_48);
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            t = n_48(l_48, t);
          }
      }
    }
  else
    {
      t = n_48(l_48, t);
    }
  return(t);
}
static ATerm f_7 (ATerm c_24, ATerm t)
{
  t = SSL_read_term_from_stream(c_24);
  return(t);
}
static ATerm g_7 (ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm o_48 = NULL;
  t = SSL_fopen(u_38, v_38);
  o_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_48 = NULL;
  t = SSL_stdin_stream();
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm q_48 = NULL;
  t = SSL_stdout_stream();
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm r_48 = NULL;
  t = SSL_stderr_stream();
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_48);
  return(t);
}
static ATerm c_50 (ATerm x_48, ATerm t)
{
  ATerm y_48 = NULL;
  t = SSL_explode_term(x_48);
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
          {
            y_48 = ATgetFirst((ATermList) v_28);
            {
              ATerm w_28 = (ATerm) ATgetNext((ATermList) v_28);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_48;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_48;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_48;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_48;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_50 (ATerm b_49, ATerm c_49, ATerm d_49, ATerm t)
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,n_49 = NULL,a_19 = NULL;
  t = SSLgetAnnotations(d_49);
  g_49 = t;
  t = b_49;
  if(match_cons(t, sym_Path_1))
    {
      n_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_49, c_49);
  a_19 = t;
  t = SSLsetAnnotations(a_19, g_49);
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      f_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(e_49, f_49, t);
  return(t);
}
static ATerm e_50 (ATerm p_49, ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,x_49 = NULL,b_19 = NULL;
  t = SSLgetAnnotations(r_49);
  u_49 = t;
  t = SSL_is_string(p_49);
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_49, q_49);
  b_19 = t;
  t = SSLsetAnnotations(b_19, u_49);
  if(match_cons(t, sym__2))
    {
      s_49 = ATgetArgument(t, 0);
      t_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7(s_49, t_49, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
  z_49 = t;
  if(match_cons(t, sym__2))
    {
      a_50 = ATgetArgument(t, 0);
      b_50 = ATgetArgument(t, 1);
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_50(z_49, t);
            LocalPopChoice(y_28);
          }
        else
          {
            t = x_28;
            {
              ATerm z_28 = t;
              int a_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_50(a_50, b_50, z_49, t);
                  LocalPopChoice(a_29);
                }
              else
                {
                  t = z_28;
                  t = e_50(a_50, b_50, z_49, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_50(z_49, t);
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
  ATerm c_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_50 = NULL;
      i_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_50, term_e_29);
      t = h_7(t);
      LocalPopChoice(d_29);
    }
  else
    {
      t = c_29;
      t = debug_1_0(p_8, t);
      _fail(t);
    }
  g_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_7(h_50, t);
  f_50 = t;
  t = g_50;
  t = fclose_0_0(t);
  t = f_50;
  return(t);
}
ATerm fetch_1_0 (ATerm r_88 (ATerm), ATerm t)
{
  static ATerm g_51 (ATerm t)
  {
    ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
    d_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_51 = ATgetFirst((ATermList) t);
        f_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_29 = t;
      int g_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_13 = NULL,g_13 = NULL,e_19 = NULL;
          t = SSLgetAnnotations(d_51);
          c_13 = t;
          t = e_51;
          t = r_88(t);
          g_13 = t;
          t = (ATerm) ATinsert(CheckATermList(f_51), g_13);
          e_19 = t;
          t = SSLsetAnnotations(e_19, c_13);
          LocalPopChoice(g_29);
        }
      else
        {
          t = f_29;
          {
            ATerm v_13 = NULL,z_13 = NULL,f_19 = NULL;
            t = SSLgetAnnotations(d_51);
            v_13 = t;
            t = f_51;
            t = g_51(t);
            z_13 = t;
            t = (ATerm) ATinsert(CheckATermList(z_13), e_51);
            f_19 = t;
            t = SSLsetAnnotations(f_19, v_13);
          }
        }
    }
    return(t);
  }
  t = g_51(t);
  return(t);
}
static ATerm a_7 (ATerm l_37, ATerm m_37, ATerm t)
{
  t = SSL_strcat(l_37, m_37);
  return(t);
}
ATerm debug_1_0 (ATerm w_87 (ATerm), ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL;
  j_51 = t;
  t = w_87(t);
  k_51 = t;
  t = term_h_13;
  l_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_51), k_51);
  m_51 = t;
  t = SSL_printnl(l_51, m_51);
  t = j_51;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm h_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(k_29);
    }
  else
    {
      t = h_29;
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_51 = NULL;
      t_51 = t;
      t = SSL_is_string(t_51);
      LocalPopChoice(p_29);
    }
  else
    {
      t = o_29;
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_8, t);
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            {
              ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL;
              e_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_52 = ATgetArgument(t, 0);
                  t = f_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_52 = ATgetArgument(t, 0);
                      t = f_52;
                      {
                        ATerm s_29 = t;
                        int v_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(v_29);
                          }
                        else
                          {
                            t = s_29;
                            t = debug_1_0(t_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_52 = NULL,m_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_52 = ATgetArgument(t, 0);
                          g_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_52;
                      t = eval_config_0_0(t);
                      k_52 = t;
                      t = g_52;
                      t = eval_config_0_0(t);
                      m_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_52, m_52);
                      t = a_7(k_52, m_52, t);
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
  ATerm w_52 = NULL,x_52 = NULL;
  w_52 = t;
  t = term_w_29;
  x_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_29, w_52);
  t = k_7(x_52, w_52, t);
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_52 = NULL,b_53 = NULL;
        t = eval_config_0_0(t);
        y_52 = t;
        t = term_w_29;
        b_53 = t;
        t = SSL_table_put(b_53, w_52, y_52);
        t = y_52;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm f_53 = NULL;
  f_53 = t;
  {
    ATerm b_30 = t;
    int c_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_53 = NULL;
        t = term_d_20;
        t = get_config_0_0(t);
        h_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_53, term_g_30);
        t = geq_0_0(t);
        t = f_53;
        t = x_102(t);
        LocalPopChoice(c_30);
      }
    else
      {
        t = b_30;
        t = f_53;
      }
  }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm k_53 = NULL;
  k_53 = t;
  if(match_string(t, "-k"))
    {
      t = k_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_53;
    }
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
  l_53 = t;
  t = SSL_string_to_int(l_53);
  m_53 = t;
  t = term_h_30;
  n_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_30, m_53);
  t = n_7(n_53, m_53, t);
  t = l_53;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_8, v_8, w_8, t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  if(match_string(t, "-S"))
    {
      t = v_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_53;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  t = term_d_20;
  w_53 = t;
  t = term_j_30;
  x_53 = t;
  t = term_k_30;
  t = n_7(w_53, x_53, t);
  t = term_l_30;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = term_m_30;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
  y_53 = t;
  t = SSL_string_to_int(y_53);
  z_53 = t;
  t = term_d_20;
  a_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_20, z_53);
  t = n_7(a_54, z_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_53);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_n_30;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL;
  t = term_o_30;
  b_54 = t;
  t = term_f_13;
  c_54 = t;
  t = term_p_30;
  t = n_7(b_54, c_54, t);
  t = term_q_30;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_r_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_9, h_9, i_9, t);
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_9, k_9, n_9, t);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            t = Option_3_0(o_9, p_9, q_9, t);
          }
      }
    }
  return(t);
}
static ATerm n_7 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm d_54 = NULL;
  t = term_w_29;
  d_54 = t;
  t = SSL_table_put(d_54, o_47, p_47);
  t = (ATerm) ATmakeAppl(sym__3, term_w_29, o_47, p_47);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_54 = NULL,l_54 = NULL,o_54 = NULL;
      t = term_f_13;
      t = d_0(t);
      k_54 = t;
      t = term_w_30;
      l_54 = t;
      t = term_y_30;
      o_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_30, term_y_30, k_54);
      t = l_7(l_54, o_54, k_54, t);
      _fail(t);
    }
  else
    {
      ATerm u_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_54 = ATgetFirst((ATermList) t);
          j_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_54;
      t = b_0(t);
      t = term_f_13;
      t = c_0(t);
      u_54 = t;
      t = (ATerm) ATinsert(CheckATermList(j_54), u_54);
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm z_54 = NULL;
  z_54 = t;
  if(match_string(t, "-o"))
    {
      t = z_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_54;
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm a_55 = NULL,b_55 = NULL;
  a_55 = t;
  t = term_z_30;
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_30, a_55);
  t = n_7(b_55, a_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_55);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_9, u_9, v_9, t);
  return(t);
}
static ATerm l_7 (ATerm o_52, ATerm p_52, ATerm n_52, ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL,f_55 = NULL;
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_52, p_52);
  {
    ATerm b_31 = t;
    int c_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_31 = ATgetArgument(t, 0);
            ATerm g_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_52, p_52);
        t = k_7(o_52, p_52, t);
        LocalPopChoice(c_31);
      }
    else
      {
        t = b_31;
        t = (ATerm) ATempty;
      }
  }
  e_55 = t;
  t = (ATerm) ATinsert(CheckATermList(e_55), n_52);
  f_55 = t;
  t = SSL_table_put(o_52, p_52, f_55);
  t = d_55;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL;
      t = term_f_13;
      t = l_0(t);
      q_55 = t;
      t = term_w_30;
      r_55 = t;
      t = term_y_30;
      s_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_30, term_y_30, q_55);
      t = l_7(r_55, s_55, q_55, t);
      _fail(t);
    }
  else
    {
      ATerm w_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_55 = ATgetFirst((ATermList) t);
          n_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_55 = ATgetFirst((ATermList) t);
          p_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_55;
      t = h_0(t);
      t = o_55;
      t = j_0(t);
      w_55 = t;
      t = (ATerm) ATinsert(CheckATermList(p_55), w_55);
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm y_55 = NULL;
  y_55 = t;
  if(match_string(t, "-i"))
    {
      t = y_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = y_55;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL;
  z_55 = t;
  t = term_h_31;
  a_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_31, z_55);
  t = n_7(a_56, z_55, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, z_55);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_j_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_9, x_9, z_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_13;
  t = whoami_0_0(t);
  b_56 = t;
  t = term_h_13;
  d_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_31), b_56);
  e_56 = t;
  t = SSL_printnl(d_56, e_56);
  t = term_n_13;
  c_56 = t;
  t = SSL_exit(c_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_31;
  t = get_config_0_0(t);
  return(t);
}
static ATerm i_7 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm n_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(n_41, o_41);
      LocalPopChoice(p_31);
    }
  else
    {
      t = n_31;
      t = SSL_addr(n_41, o_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
  g_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_56;
      t = k_94(t);
    }
  else
    {
      ATerm l_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_56 = ATgetFirst((ATermList) t);
          i_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_56;
      t = foldr_2_0(k_94, l_94, t);
      l_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_56, l_56);
      t = l_94(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_j_30;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm f_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      f_15 = ATgetArgument(t, 0);
      h_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(f_15, h_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_56 = NULL,v_14 = NULL,x_14 = NULL;
  t = times_0_0(t);
  x_14 = t;
  t = SSL_explode_term(x_14);
  if(match_cons(t, sym__2))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      v_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_14;
  t = foldr_2_0(a_10, b_10, t);
  o_56 = t;
  t = SSL_TicksToSeconds(o_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL,b_57 = NULL;
  z_56 = t;
  if(match_cons(t, sym__2))
    {
      a_57 = ATgetArgument(t, 0);
      b_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_31 = t;
    int u_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_57;
        if((a_57 != t))
          {
            _fail(t);
          }
        t = z_56;
        LocalPopChoice(u_31);
      }
    else
      {
        t = s_31;
        t = (ATerm) ATmakeAppl(sym__2, a_57, b_57);
        {
          ATerm v_31 = t;
          int x_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_57, b_57);
              LocalPopChoice(x_31);
            }
          else
            {
              t = v_31;
              t = SSL_gtr(a_57, b_57);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_57, b_57);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm f_57 = NULL;
  f_57 = t;
  {
    ATerm y_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_57 = NULL;
        t = term_d_20;
        t = get_config_0_0(t);
        h_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_57, term_n_13);
        t = geq_0_0(t);
        t = f_57;
        t = w_102(t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = y_31;
        t = f_57;
      }
  }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,m_57 = NULL,n_57 = NULL;
  t = run_time_0_0(t);
  j_57 = t;
  t = term_f_13;
  t = whoami_0_0(t);
  k_57 = t;
  t = term_h_13;
  m_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_32), j_57), term_b_32), k_57);
  n_57 = t;
  t = SSL_printnl(m_57, n_57);
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_32), j_57), term_b_32), k_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm o_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_30;
  o_57 = t;
  t = SSL_exit(o_57);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL;
  x_57 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = x_57;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          w_57 = ATgetArgument(t, 0);
          {
            ATerm h_16 = NULL,i_19 = NULL;
            t = SSLgetAnnotations(x_57);
            h_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, w_57);
            i_19 = t;
            t = SSLsetAnnotations(i_19, h_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = x_57;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_105 (ATerm), ATerm t)
{
  ATerm f_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_32;
      t = get_config_0_0(t);
      LocalPopChoice(h_32);
    }
  else
    {
      t = f_32;
      t = fetch_1_0(h_10, t);
    }
  t = m_105(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_58 = ATgetFirst((ATermList) t);
      b_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_58 = NULL,g_58 = NULL;
        static ATerm i_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_58)), not_null(g_58));
          return(t);
        }
        t = b_58;
        t = f_0(t);
        if(((f_58 != NULL) && (f_58 != t)))
          _fail(t);
        else
          f_58 = t;
        t = a_58;
        t = e_0(t);
        if(((g_58 != NULL) && (g_58 != t)))
          _fail(t);
        else
          g_58 = t;
        t = b_58;
        t = reverse_acc_2_0(e_0, i_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_13;
      t = f_0(t);
    }
  return(t);
}
static ATerm k_7 (ATerm f_54, ATerm g_54, ATerm t)
{
  t = SSL_table_get(f_54, g_54);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,k_19 = NULL;
  s_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_58);
  q_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_58);
  k_19 = t;
  t = SSLsetAnnotations(k_19, q_58);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm u_58 = NULL;
  u_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_58), term_j_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL;
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_31;
      t = get_config_0_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = fetch_1_0(j_10, t);
    }
  t = term_n_32;
  t = echo_0_0(t);
  t = term_w_30;
  o_58 = t;
  t = term_y_30;
  p_58 = t;
  t = term_o_32;
  t = k_7(o_58, p_58, t);
  t = reverse_acc_2_0(_id, l_10, t);
  t = map_1_0(t_10, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL;
  w_58 = t;
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_58;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_32 = ATgetFirst((ATermList) t);
                ATerm s_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_58;
          }
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = (ATerm) ATinsert(ATempty, w_58);
      }
  }
  x_58 = t;
  t = term_p_28;
  y_58 = t;
  t = SSL_printnl(y_58, x_58);
  t = w_58;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm c_59 = NULL,d_59 = NULL;
  t = term_t_32;
  c_59 = t;
  t = term_f_13;
  d_59 = t;
  t = term_u_32;
  t = n_7(c_59, d_59, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_v_32;
  return(t);
}
static ATerm x_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,k_59 = NULL,l_59 = NULL;
  t = term_t_32;
  k_59 = t;
  t = term_f_13;
  l_59 = t;
  t = term_u_32;
  t = n_7(k_59, l_59, t);
  t = term_w_32;
  e_59 = t;
  t = term_f_13;
  f_59 = t;
  t = term_x_32;
  t = n_7(e_59, f_59, t);
  t = term_y_32;
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_10, v_10, w_10, t);
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      t = Option_3_0(x_10, y_10, z_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,v_59 = NULL,w_59 = NULL,m_19 = NULL;
  q_59 = t;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_33;
        t = p_107(t);
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
      }
  }
  t = q_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_59 = ATgetFirst((ATermList) t);
      t_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_59);
  r_59 = t;
  t = term_m_31;
  w_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_31, s_59);
  t = n_7(w_59, s_59, t);
  t = t_59;
  {
    static ATerm g_60 (ATerm t)
    {
      ATerm i_33 = t;
      int m_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_33 = t;
          int o_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_59 = NULL;
              z_59 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_59;
              LocalPopChoice(o_33);
            }
          else
            {
              t = n_33;
              t = p_107(t);
              t = Cons_2_0(_id, g_60, t);
            }
          LocalPopChoice(m_33);
        }
      else
        {
          t = i_33;
          {
            ATerm c_60 = NULL,d_60 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_60 = ATgetFirst((ATermList) t);
                d_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_60), (ATerm) ATmakeAppl(sym_Undefined_1, c_60));
          }
        }
      return(t);
    }
    t = g_60(t);
  }
  v_59 = t;
  t = (ATerm) ATinsert(CheckATermList(v_59), (ATerm) ATmakeAppl(sym_Program_1, s_59));
  m_19 = t;
  t = SSLsetAnnotations(m_19, r_59);
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm s_60 = NULL;
  s_60 = t;
  if(match_string(t, "--help"))
    {
      t = s_60;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_60;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_60;
        }
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL;
  t = term_i_32;
  t_60 = t;
  t = term_f_13;
  u_60 = t;
  t = term_p_33;
  t = n_7(t_60, u_60, t);
  t = term_q_33;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_r_33;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_107 (ATerm), ATerm t)
{
  ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL;
  n_60 = t;
  t = term_w_30;
  p_60 = t;
  t = term_y_30;
  q_60 = t;
  t = (ATerm) ATempty;
  r_60 = t;
  t = SSL_table_put(p_60, q_60, r_60);
  t = n_60;
  {
    static ATerm a_11 (ATerm t)
    {
      ATerm s_33 = t;
      int t_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_107(t);
          LocalPopChoice(t_33);
        }
      else
        {
          t = s_33;
          {
            ATerm u_33 = t;
            int v_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_11, d_11, e_11, t);
                LocalPopChoice(v_33);
              }
            else
              {
                t = u_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_11, t);
  }
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_61 = NULL;
        b_61 = t;
        {
          ATerm a_34 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_16 = NULL;
              t = b_61;
              {
                ATerm d_34 = t;
                int e_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_32;
                    t = get_config_0_0(t);
                    LocalPopChoice(e_34);
                  }
                else
                  {
                    t = d_34;
                    t = fetch_1_0(f_11, t);
                  }
              }
              t = b_61;
              t = default_system_usage_0_0(t);
              t = term_j_30;
              t_16 = t;
              t = SSL_exit(t_16);
              LocalPopChoice(b_34);
            }
          else
            {
              t = a_34;
              {
                ATerm f_17 = NULL;
                t = term_t_32;
                t = get_config_0_0(t);
                t = b_61;
                t = default_system_about_0_0(t);
                t = term_j_30;
                f_17 = t;
                t = SSL_exit(f_17);
              }
            }
        }
        LocalPopChoice(z_33);
      }
    else
      {
        t = y_33;
        {
          ATerm g_34 = t;
          int j_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
              static ATerm i_11 (ATerm t)
              {
                ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL,o_19 = NULL;
                h_61 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    g_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(h_61);
                f_61 = t;
                t = g_61;
                if(((l_60 != NULL) && (l_60 != t)))
                  _fail(t);
                else
                  l_60 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, g_61);
                o_19 = t;
                t = SSLsetAnnotations(o_19, f_61);
                return(t);
              }
              t = fetch_1_0(i_11, t);
              t = term_h_13;
              d_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_60)), term_k_34);
              e_61 = t;
              t = SSL_printnl(d_61, e_61);
              t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_60)), term_k_34));
              t = default_system_usage_0_0(t);
              t = term_n_13;
              c_61 = t;
              t = SSL_exit(c_61);
              LocalPopChoice(j_34);
            }
          else
            {
              t = g_34;
            }
        }
      }
  }
  m_60 = t;
  t = term_w_30;
  o_60 = t;
  t = SSL_table_destroy(o_60);
  t = m_60;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_105 (ATerm), ATerm p_105 (ATerm), ATerm q_105 (ATerm), ATerm r_105 (ATerm), ATerm t)
{
  ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  t = parse_options_1_0(o_105, t);
  m_61 = t;
  t = term_l_34;
  p_61 = t;
  t = SSL_table_create(p_61);
  t = term_l_34;
  n_61 = t;
  t = term_p_34;
  o_61 = t;
  t = SSL_table_put(n_61, o_61, m_61);
  t = m_61;
  t = q_105(t);
  {
    ATerm q_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_105, t);
        LocalPopChoice(r_34);
      }
    else
      {
        t = q_34;
        {
          ATerm s_34 = t;
          int t_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_34);
            }
          else
            {
              t = s_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  t = if_verbose2_1_0(o_12, t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL;
  t = term_u_34;
  q_61 = t;
  t = term_f_13;
  r_61 = t;
  t = term_w_34;
  t = n_7(q_61, r_61, t);
  t = term_z_34;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = term_c_35;
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL;
  s_61 = t;
  t = term_m_31;
  t = get_config_0_0(t);
  t_61 = t;
  t = term_h_13;
  u_61 = t;
  t = (ATerm) ATinsert(ATempty, t_61);
  v_61 = t;
  t = SSL_printnl(u_61, v_61);
  t = s_61;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm z_104 (ATerm), ATerm t)
{
  static ATerm h_12 (ATerm t)
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_104(t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        {
          ATerm f_35 = t;
          int h_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(h_35);
            }
          else
            {
              t = f_35;
              {
                ATerm i_35 = t;
                int m_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(m_35);
                  }
                else
                  {
                    t = i_35;
                    {
                      ATerm p_35 = t;
                      int q_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(l_12, m_12, n_12, t);
                          LocalPopChoice(q_35);
                        }
                      else
                        {
                          t = p_35;
                          {
                            ATerm t_35 = t;
                            int u_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(u_35);
                              }
                            else
                              {
                                t = t_35;
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
  static ATerm j_12 (ATerm t)
  {
    ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL;
    x_61 = t;
    {
      ATerm v_35 = t;
      int w_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm p_12 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_61 != NULL) && (w_61 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_61 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_12, t);
          LocalPopChoice(w_35);
        }
      else
        {
          t = v_35;
          t = term_x_35;
          w_61 = t;
        }
    }
    t = not_null(w_61);
    t = ReadFromFile_0_0(t);
    y_61 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_61, y_61);
    t = apply_strategy_1_0(x_104, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(h_12, z_104, i_12, j_12, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,u_19 = NULL,t_19 = NULL,s_19 = NULL,q_19 = NULL;
  n_62 = t;
  if(match_cons(t, sym__2))
    {
      a_62 = ATgetArgument(t, 0);
      b_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  z_61 = t;
  t = b_62;
  if(match_cons(t, sym_Specification_1))
    {
      d_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_62);
  c_62 = t;
  t = d_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_62 = ATgetFirst((ATermList) t);
      h_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_62);
  f_62 = t;
  t = g_62;
  if(match_cons(t, sym_Signature_1))
    {
      l_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_62);
  k_62 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, l_62);
  q_19 = t;
  t = SSLsetAnnotations(q_19, k_62);
  m_62 = t;
  t = h_62;
  t = Cons_2_0(r_12, t_12, t);
  i_62 = t;
  t = (ATerm) ATinsert(CheckATermList(i_62), m_62);
  s_19 = t;
  t = SSLsetAnnotations(s_19, f_62);
  j_62 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, j_62);
  t_19 = t;
  t = SSLsetAnnotations(t_19, c_62);
  e_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_62, e_62);
  u_19 = t;
  t = SSLsetAnnotations(u_19, z_61);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,r_19 = NULL;
  r_62 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_62);
  o_62 = t;
  t = p_62;
  t = map_1_0(u_12, t);
  q_62 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_62);
  r_19 = t;
  t = SSLsetAnnotations(r_19, o_62);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = scope_2_0(v_12, b_13, t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_x_13;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = scope_2_0(d_13, cp_0_0, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(q_12, _fail, default_usage_0_0, t);
  return(t);
}
