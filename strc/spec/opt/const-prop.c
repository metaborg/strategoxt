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
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_m_34;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_s_33;
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
ATerm term_k_32;
ATerm term_i_32;
ATerm term_d_32;
ATerm term_b_32;
ATerm term_n_31;
ATerm term_m_31;
ATerm term_k_31;
ATerm term_i_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
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
ATerm term_c_30;
ATerm term_x_29;
ATerm term_l_29;
ATerm term_f_29;
ATerm term_b_29;
ATerm term_p_28;
ATerm term_m_28;
ATerm term_j_28;
ATerm term_s_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_f_25;
ATerm term_k_24;
ATerm term_i_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_j_13;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_a_14);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_b_14, (ATerm) ATempty);
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
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(2);
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
  term_p_30 = (ATerm) ATmakeAppl(sym__2, term_o_30, term_j_13);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_31));
  term_m_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym__2, term_w_30, term_z_30);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym__2, term_t_32, term_j_13);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym__2, term_w_32, term_j_13);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym__2, term_i_32, term_j_13);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym__2, term_w_34, term_j_13);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm i_6 (ATerm z_80 (ATerm), ATerm e_21, ATerm f_21, ATerm t);
static ATerm u_0 (ATerm t);
static ATerm j_6 (ATerm x_80 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm exec_maybe_1_0 (ATerm q_80 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm l_6 (ATerm a_81 (ATerm), ATerm t);
static ATerm l_2 (ATerm t);
static ATerm x_6 (ATerm w_4, ATerm x_4, ATerm y_4, ATerm t);
ATerm isect_CurrentTerm_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm k_11 (ATerm d_9, ATerm g_9, ATerm h_9, ATerm t);
ATerm isect_Binding_0_0 (ATerm t);
static ATerm m_6 (ATerm q_54, ATerm p_54, ATerm t);
ATerm save_CurrentTerm_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_Binding_0_0 (ATerm t);
ATerm prop_abstract_choice_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t);
ATerm prop_choice_1_0 (ATerm d_81 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm prop_traversal_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm i_5 (ATerm t);
ATerm prop_call_1_0 (ATerm t_0 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm n_6 (ATerm y_80 (ATerm), ATerm z_20, ATerm t);
static ATerm c_6 (ATerm t);
ATerm prop_build_0_0 (ATerm t);
static ATerm o_6 (ATerm y_101 (ATerm), ATerm e_43, ATerm c_43, ATerm t);
ATerm oncetd_1_0 (ATerm d_84 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm h_104 (ATerm), ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm p_6 (ATerm s_21, ATerm t_21, ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t);
static ATerm a_7 (ATerm p_113 (ATerm), ATerm j_59, ATerm k_59, ATerm m_59, ATerm l_59, ATerm t);
ATerm at_end_1_0 (ATerm b_90 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm x_26 (ATerm i_26, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm o_91 (ATerm), ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm t);
static ATerm c_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm t_6 (ATerm s_636, ATerm x_636, ATerm l_60, ATerm t);
ATerm while_not_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t);
static ATerm s_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm q_38 (ATerm g_33, ATerm k_33, ATerm l_33, ATerm t);
static ATerm r_38 (ATerm c_34, ATerm d_34, ATerm h_34, ATerm t);
static ATerm u_38 (ATerm u_34, ATerm b_35, ATerm c_35, ATerm t);
static ATerm b_39 (ATerm q_35, ATerm r_35, ATerm s_35, ATerm t);
static ATerm f_39 (ATerm d_36, ATerm e_36, ATerm f_36, ATerm t);
static ATerm y_7 (ATerm t);
ATerm prop_pattern_match_0_0 (ATerm t);
ATerm CurrentTerm_0_0 (ATerm t);
static ATerm d_7 (ATerm y_53, ATerm z_53, ATerm t);
ATerm Binding_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm r_84 (ATerm), ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm prop_match_0_0 (ATerm t);
ATerm cp_0_0 (ATerm t);
static ATerm e_7 (ATerm s_53, ATerm t_53, ATerm t);
ATerm end_scope_1_0 (ATerm v_101 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm u_101 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm t);
ATerm map_1_0 (ATerm l_89 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm t);
static ATerm h_7 (ATerm v_38, ATerm w_38, ATerm t);
static ATerm i_7 (ATerm c_24, ATerm d_24, ATerm t);
static ATerm k_7 (ATerm c_89 (ATerm), ATerm l_166, ATerm g_24, ATerm t);
static ATerm j_7 (ATerm y_23, ATerm z_23, ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm x_105 (ATerm), ATerm t);
static ATerm s_48 (ATerm k_48, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm l_7 (ATerm e_24, ATerm t);
static ATerm m_7 (ATerm x_38, ATerm y_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_50 (ATerm h_49, ATerm t);
static ATerm n_50 (ATerm l_49, ATerm m_49, ATerm n_49, ATerm t);
static ATerm o_50 (ATerm v_49, ATerm w_49, ATerm x_49, ATerm t);
static ATerm n_7 (ATerm t);
static ATerm n_8 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_89 (ATerm), ATerm t);
static ATerm g_7 (ATerm p_37, ATerm q_37, ATerm t);
ATerm debug_1_0 (ATerm a_89 (ATerm), ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm g_104 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm t_7 (ATerm n_48, ATerm o_48, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_7 (ATerm n_53, ATerm o_53, ATerm m_53, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm a_10 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm o_7 (ATerm q_41, ATerm r_41, ATerm t);
ATerm foldr_2_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm f_104 (ATerm), ATerm t);
static ATerm g_10 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
ATerm need_help_1_0 (ATerm v_106 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm q_7 (ATerm e_55, ATerm f_55, ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm y_108 (ATerm), ATerm t);
static ATerm b_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
ATerm parse_options_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t);
static ATerm m_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm iowrap_3_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
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
  t = term_j_13;
  t = whoami_0_0(t);
  z_0 = t;
  t = term_l_13;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_13), z_0), term_m_13);
  f_1 = t;
  t = SSL_printnl(d_1, f_1);
  t = term_s_13;
  c_1 = t;
  t = SSL_exit(c_1);
  t = y_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm z_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
  v_1 = t;
  t = term_a_14;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_1), term_a_14);
  t = o_6(p_0, v_1, w_1, t);
  t = u_1;
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm i_6 (ATerm z_80 (ATerm), ATerm e_21, ATerm f_21, ATerm t)
{
  static ATerm b_0 (ATerm t)
  {
    ATerm g_1 = NULL,i_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,s_1 = NULL,n_0 = NULL;
    g_1 = t;
    t = f_21;
    t = map_1_0(m_0, t);
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
    t = term_a_14;
    s_1 = t;
    t = term_d_14;
    t = o_6(q_0, q_1, s_1, t);
    t = o_1;
    t = z_80(t);
    p_1 = t;
    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_1, m_1, n_1, p_1);
    n_0 = t;
    t = SSLsetAnnotations(n_0, i_1);
    return(t);
  }
  t = scope_2_0(a_0, b_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm j_6 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm x_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,c_5 = NULL;
  x_1 = t;
  t = (ATerm) ATempty;
  y_1 = t;
  t = term_a_14;
  z_1 = t;
  t = term_d_14;
  t = o_6(u_0, y_1, z_1, t);
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
  t = exec_maybe_1_0(x_80, t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, c_2);
  c_5 = t;
  t = SSLsetAnnotations(c_5, a_2);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,m_2 = NULL,o_2 = NULL;
  g_2 = t;
  t = (ATerm) ATempty;
  m_2 = t;
  t = term_a_14;
  o_2 = t;
  t = term_d_14;
  t = o_6(w_0, m_2, o_2, t);
  t = g_2;
  t = save_Binding_0_0(t);
  d_2 = t;
  t = g_2;
  t = q_80(t);
  e_2 = t;
  t = (ATerm) ATempty;
  j_2 = t;
  t = term_a_14;
  k_2 = t;
  t = term_d_14;
  t = o_6(x_0, j_2, k_2, t);
  t = term_t_13;
  i_2 = t;
  t = SSL_table_destroy(i_2);
  t = term_t_13;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, d_2);
  t = m_6(h_2, d_2, t);
  t = e_2;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm l_6 (ATerm a_81 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,t_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,f_5 = NULL;
  v_2 = t;
  t = save_Binding_0_0(t);
  t_2 = t;
  t = save_CurrentTerm_0_0(t);
  p_2 = t;
  t = v_2;
  if(match_cons(t, sym_Let_2))
    {
      z_2 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_2);
  x_2 = t;
  t = z_2;
  {
    static ATerm r_1 (ATerm t)
    {
      ATerm o_3 = NULL,t_3 = NULL,u_3 = NULL,e_4 = NULL,f_4 = NULL;
      o_3 = t;
      t = (ATerm) ATempty;
      e_4 = t;
      t = term_a_14;
      f_4 = t;
      t = term_d_14;
      t = o_6(f_2, e_4, f_4, t);
      t = term_t_13;
      u_3 = t;
      t = SSL_table_destroy(u_3);
      t = term_t_13;
      t_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_13, t_2);
      t = m_6(t_3, t_2, t);
      t = o_3;
      t = a_81(t);
      return(t);
    }
    t = map_1_0(r_1, t);
  }
  c_3 = t;
  t = term_b_14;
  h_3 = t;
  t = SSL_table_destroy(h_3);
  t = term_b_14;
  g_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, p_2);
  t = m_6(g_3, p_2, t);
  t = term_t_13;
  f_3 = t;
  t = SSL_table_destroy(f_3);
  t = term_t_13;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, t_2);
  t = m_6(e_3, t_2, t);
  t = b_3;
  t = a_81(t);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, c_3, d_3);
  f_5 = t;
  t = SSLsetAnnotations(f_5, x_2);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,p_5 = NULL,s_5 = NULL;
  s_5 = t;
  if(match_cons(t, sym__2))
    {
      j_5 = ATgetArgument(t, 0);
      k_5 = ATgetArgument(t, 1);
      t = k_5;
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_5 = ATgetFirst((ATermList) t);
                {
                  ATerm k_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_14);
            t = l_5;
            {
              ATerm n_14 = t;
              int p_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm r_14 = ATgetArgument(t, 0);
                      p_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_14);
                  t = j_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = s_5;
                    }
                  else
                    {
                      ATerm t_14 = t;
                      int u_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = x_6(j_5, p_5, s_5, t);
                          LocalPopChoice(u_14);
                        }
                      else
                        {
                          t = t_14;
                          t = s_5;
                        }
                    }
                }
              else
                {
                  t = n_14;
                  t = j_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = s_5;
                    }
                  else
                    {
                      t = s_5;
                    }
                }
            }
          }
        else
          {
            t = e_14;
            t = j_5;
            if(match_cons(t, sym_Scopes_0))
              {
                t = s_5;
              }
            else
              {
                t = s_5;
              }
          }
      }
    }
  else
    {
      t = s_5;
    }
  return(t);
}
static ATerm x_6 (ATerm w_4, ATerm x_4, ATerm y_4, ATerm t)
{
  t = y_4;
  {
    ATerm w_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_0 = NULL;
        t = term_b_14;
        f_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_14, w_4);
        t = q_7(f_0, w_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_14 = ATgetFirst((ATermList) t);
            if(match_cons(z_14, sym_Defined_2))
              {
                ATerm b_15 = ATgetArgument(z_14, 0);
                if((x_4 != ATgetArgument(z_14, 1)))
                  {
                    _fail(ATgetArgument(z_14, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm a_15 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = y_4;
        LocalPopChoice(y_14);
      }
    else
      {
        t = w_14;
        t = (ATerm) ATmakeAppl(sym__2, w_4, (ATerm) ATinsert(ATempty, term_a_14));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,v_4 = NULL;
  t = map_1_0(l_2, t);
  s_4 = t;
  t = term_b_14;
  v_4 = t;
  t = SSL_table_destroy(v_4);
  t = term_b_14;
  t_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, s_4);
  t = m_6(t_4, s_4, t);
  t = s_4;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm e_10 = NULL,h_10 = NULL,j_10 = NULL,l_10 = NULL,p_10 = NULL;
  p_10 = t;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      t = h_10;
      {
        ATerm d_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_10 = ATgetFirst((ATermList) t);
                {
                  ATerm k_15 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_15);
            t = j_10;
            {
              ATerm l_15 = t;
              int q_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm r_15 = ATgetArgument(t, 0);
                      l_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_15);
                  t = e_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = p_10;
                    }
                  else
                    {
                      ATerm u_15 = t;
                      int v_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = k_11(e_10, l_10, p_10, t);
                          LocalPopChoice(v_15);
                        }
                      else
                        {
                          t = u_15;
                          t = p_10;
                        }
                    }
                }
              else
                {
                  t = l_15;
                  t = e_10;
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
            t = d_15;
            t = e_10;
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
static ATerm k_11 (ATerm d_9, ATerm g_9, ATerm h_9, ATerm t)
{
  t = h_9;
  {
    ATerm w_15 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_0 = NULL;
        t = term_t_13;
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_13, d_9);
        t = q_7(s_0, d_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm g_16 = ATgetFirst((ATermList) t);
            if(match_cons(g_16, sym_Defined_2))
              {
                ATerm n_16 = ATgetArgument(g_16, 0);
                if((g_9 != ATgetArgument(g_16, 1)))
                  {
                    _fail(ATgetArgument(g_16, 1));
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
        t = h_9;
        LocalPopChoice(f_16);
      }
    else
      {
        t = w_15;
        t = (ATerm) ATmakeAppl(sym__2, d_9, (ATerm) ATinsert(ATempty, term_a_14));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm y_8 = NULL,b_9 = NULL,c_9 = NULL;
  t = map_1_0(l_3, t);
  y_8 = t;
  t = term_t_13;
  c_9 = t;
  t = SSL_table_destroy(c_9);
  t = term_t_13;
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, y_8);
  t = m_6(b_9, y_8, t);
  t = y_8;
  return(t);
}
static ATerm m_6 (ATerm q_54, ATerm p_54, ATerm t)
{
  static ATerm m_3 (ATerm t)
  {
    ATerm o_11 = NULL,p_11 = NULL;
    if(match_cons(t, sym__2))
      {
        o_11 = ATgetArgument(t, 0);
        p_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(q_54, o_11, p_11);
    t = (ATerm) ATmakeAppl(sym__3, q_54, o_11, p_11);
    return(t);
  }
  t = p_54;
  t = map_1_0(m_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_b_14;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm q_11 = NULL;
  static ATerm n_3 (ATerm t)
  {
    ATerm r_11 = NULL,v_11 = NULL;
    r_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), r_11);
    t = q_7(not_null(q_11), r_11, t);
    v_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_11, v_11);
    return(t);
  }
  if(((q_11 != NULL) && (q_11 != t)))
    _fail(t);
  else
    q_11 = t;
  t = SSL_table_keys(q_11);
  t = map_1_0(n_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_t_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm e_81 (ATerm), ATerm f_81 (ATerm), ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,j_12 = NULL;
  f_12 = t;
  t = save_Binding_0_0(t);
  w_11 = t;
  t = save_CurrentTerm_0_0(t);
  x_11 = t;
  t = f_12;
  t = e_81(t);
  e_12 = t;
  t = save_Binding_0_0(t);
  b_12 = t;
  t = term_t_13;
  j_12 = t;
  t = SSL_table_destroy(j_12);
  t = term_t_13;
  i_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, w_11);
  t = m_6(i_12, w_11, t);
  t = w_11;
  t = save_CurrentTerm_0_0(t);
  c_12 = t;
  t = term_b_14;
  h_12 = t;
  t = SSL_table_destroy(h_12);
  t = term_b_14;
  g_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_14, x_11);
  t = m_6(g_12, x_11, t);
  t = e_12;
  t = f_81(t);
  d_12 = t;
  t = b_12;
  t = isect_Binding_0_0(t);
  t = c_12;
  t = isect_CurrentTerm_0_0(t);
  t = d_12;
  return(t);
}
ATerm prop_choice_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  ATerm l_12 = NULL;
  l_12 = t;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm q_16 = ATgetArgument(t, 0);
            ATerm r_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(p_16);
        {
          static ATerm c_4 (ATerm t)
          {
            ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL,y_12 = NULL,c_13 = NULL,m_5 = NULL;
            c_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                u_12 = ATgetArgument(t, 0);
                v_12 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_13);
            t_12 = t;
            t = u_12;
            t = d_81(t);
            y_12 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, y_12, v_12);
            m_5 = t;
            t = SSLsetAnnotations(m_5, t_12);
            return(t);
          }
          static ATerm d_4 (ATerm t)
          {
            ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,k_13 = NULL,t_5 = NULL;
            k_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                e_13 = ATgetArgument(t, 0);
                f_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_13);
            d_13 = t;
            t = f_13;
            t = d_81(t);
            g_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, e_13, g_13);
            t_5 = t;
            t = SSLsetAnnotations(t_5, d_13);
            return(t);
          }
          t = l_12;
          t = prop_abstract_choice_2_0(c_4, d_4, t);
        }
      }
    else
      {
        t = o_16;
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm w_16 = ATgetArgument(t, 0);
                  ATerm x_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(t_16);
              {
                static ATerm g_4 (ATerm t)
                {
                  ATerm o_13 = NULL,q_13 = NULL,r_13 = NULL,u_13 = NULL,v_13 = NULL,x_5 = NULL;
                  v_13 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      q_13 = ATgetArgument(t, 0);
                      r_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(v_13);
                  o_13 = t;
                  t = q_13;
                  t = d_81(t);
                  u_13 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, u_13, r_13);
                  x_5 = t;
                  t = SSLsetAnnotations(x_5, o_13);
                  return(t);
                }
                static ATerm h_4 (ATerm t)
                {
                  ATerm w_13 = NULL,x_13 = NULL,c_14 = NULL,g_14 = NULL,h_14 = NULL,y_5 = NULL;
                  h_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      x_13 = ATgetArgument(t, 0);
                      c_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_14);
                  w_13 = t;
                  t = c_14;
                  t = d_81(t);
                  g_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, x_13, g_14);
                  y_5 = t;
                  t = SSLsetAnnotations(y_5, w_13);
                  return(t);
                }
                t = l_12;
                t = prop_abstract_choice_2_0(g_4, h_4, t);
              }
            }
          else
            {
              t = s_16;
              {
                ATerm z_16 = t;
                int a_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm b_17 = ATgetArgument(t, 0);
                        ATerm d_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_17);
                    {
                      static ATerm j_4 (ATerm t)
                      {
                        ATerm i_14 = NULL,j_14 = NULL,l_14 = NULL,o_14 = NULL,s_14 = NULL,a_6 = NULL;
                        s_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            j_14 = ATgetArgument(t, 0);
                            l_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(s_14);
                        i_14 = t;
                        t = j_14;
                        t = d_81(t);
                        o_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, o_14, l_14);
                        a_6 = t;
                        t = SSLsetAnnotations(a_6, i_14);
                        return(t);
                      }
                      static ATerm k_4 (ATerm t)
                      {
                        ATerm v_14 = NULL,x_14 = NULL,c_15 = NULL,f_15 = NULL,g_15 = NULL,h_6 = NULL;
                        g_15 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            x_14 = ATgetArgument(t, 0);
                            c_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(g_15);
                        v_14 = t;
                        t = c_15;
                        t = d_81(t);
                        f_15 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, x_14, f_15);
                        h_6 = t;
                        t = SSLsetAnnotations(h_6, v_14);
                        return(t);
                      }
                      t = l_12;
                      t = prop_abstract_choice_2_0(j_4, k_4, t);
                    }
                  }
                else
                  {
                    t = z_16;
                    {
                      static ATerm m_4 (ATerm t)
                      {
                        ATerm h_15 = NULL,i_15 = NULL,j_15 = NULL,m_15 = NULL,o_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,r_6 = NULL,q_6 = NULL;
                        d_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            y_15 = ATgetArgument(t, 0);
                            z_15 = ATgetArgument(t, 1);
                            a_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_16);
                        x_15 = t;
                        t = y_15;
                        t = d_81(t);
                        b_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, b_16, z_15, a_16);
                        q_6 = t;
                        t = SSLsetAnnotations(q_6, x_15);
                        c_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            i_15 = ATgetArgument(t, 0);
                            j_15 = ATgetArgument(t, 1);
                            m_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(c_16);
                        h_15 = t;
                        t = j_15;
                        t = d_81(t);
                        o_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, i_15, o_15, m_15);
                        r_6 = t;
                        t = SSLsetAnnotations(r_6, h_15);
                        return(t);
                      }
                      static ATerm n_4 (ATerm t)
                      {
                        ATerm e_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,s_6 = NULL;
                        l_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            h_16 = ATgetArgument(t, 0);
                            i_16 = ATgetArgument(t, 1);
                            j_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(l_16);
                        e_16 = t;
                        t = j_16;
                        t = d_81(t);
                        k_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, h_16, i_16, k_16);
                        s_6 = t;
                        t = SSLsetAnnotations(s_6, e_16);
                        return(t);
                      }
                      if(match_cons(t, sym_GuardedLChoice_3))
                        {
                          ATerm e_17 = ATgetArgument(t, 0);
                          ATerm g_17 = ATgetArgument(t, 1);
                          ATerm h_17 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = l_12;
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
  t = term_b_14;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_17 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,h_1 = NULL,j_1 = NULL,k_1 = NULL,m_8 = NULL;
      f_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm o_17 = ATgetArgument(t, 0);
          ATerm q_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      a_1 = t;
      t = term_a_14;
      b_1 = t;
      t = term_d_14;
      t = o_6(o_4, a_1, b_1, t);
      t = f_17;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          j_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_17);
      e_1 = t;
      t = j_1;
      {
        static ATerm p_4 (ATerm t)
        {
          t = exec_maybe_1_0(v_0, t);
          return(t);
        }
        t = map_1_0(p_4, t);
      }
      k_1 = t;
      t = (ATerm) ATmakeAppl(sym_Cong_2, h_1, k_1);
      m_8 = t;
      t = SSLsetAnnotations(m_8, e_1);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm i_17 = NULL,j_17 = NULL,n_17 = NULL;
        static ATerm u_4 (ATerm t)
        {
          t = exec_maybe_1_0(v_0, t);
          return(t);
        }
        ATerm r_17 = t;
        int t_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm v_17 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(t_17);
          }
        else
          {
            t = r_17;
            {
              ATerm p_17 = NULL;
              p_17 = t;
              {
                ATerm w_17 = t;
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
                    t = p_17;
                  }
                else
                  {
                    t = w_17;
                    {
                      ATerm h_18 = t;
                      int i_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm j_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(i_18);
                          t = p_17;
                        }
                      else
                        {
                          t = h_18;
                          {
                            ATerm k_18 = t;
                            int l_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm m_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(l_18);
                                t = p_17;
                              }
                            else
                              {
                                t = k_18;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm o_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = p_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        i_17 = t;
        t = (ATerm) ATempty;
        j_17 = t;
        t = term_a_14;
        n_17 = t;
        t = term_d_14;
        t = o_6(q_4, j_17, n_17, t);
        t = i_17;
        t = SRTS_one(u_4, t);
      }
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm i_3 = NULL,j_3 = NULL,k_3 = NULL,r_9 = NULL;
  t = Binding_0_0(t);
  k_3 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  i_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_3);
  r_9 = t;
  t = SSLsetAnnotations(r_9, i_3);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL,b_4 = NULL,w_9 = NULL;
  t = Binding_0_0(t);
  b_4 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_4);
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_4);
  w_9 = t;
  t = SSLsetAnnotations(w_9, z_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm u_18 = ATgetArgument(t, 0);
            ATerm w_18 = ATgetArgument(t, 1);
            ATerm b_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(s_18);
        {
          ATerm n_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL,u_2 = NULL,w_2 = NULL,y_2 = NULL,a_3 = NULL,t_9 = NULL;
          t = (ATerm) ATempty;
          n_2 = t;
          t = term_a_14;
          q_2 = t;
          t = term_d_14;
          t = o_6(z_4, n_2, q_2, t);
          t = a_20;
          if(match_cons(t, sym_PrimT_3))
            {
              s_2 = ATgetArgument(t, 0);
              u_2 = ATgetArgument(t, 1);
              w_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_20);
          r_2 = t;
          t = u_2;
          {
            static ATerm a_5 (ATerm t)
            {
              t = exec_maybe_1_0(t_0, t);
              return(t);
            }
            t = map_1_0(a_5, t);
          }
          y_2 = t;
          t = w_2;
          t = alltd_1_0(b_5, t);
          a_3 = t;
          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_2, y_2, a_3);
          t_9 = t;
          t = SSLsetAnnotations(t_9, r_2);
        }
      }
    else
      {
        t = r_18;
        {
          ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,l_11 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm c_19 = ATgetArgument(t, 0);
              ATerm d_19 = ATgetArgument(t, 1);
              ATerm e_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          p_3 = t;
          t = term_a_14;
          q_3 = t;
          t = term_d_14;
          t = o_6(d_5, p_3, q_3, t);
          t = a_20;
          if(match_cons(t, sym_CallT_3))
            {
              s_3 = ATgetArgument(t, 0);
              v_3 = ATgetArgument(t, 1);
              w_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_20);
          r_3 = t;
          t = v_3;
          {
            static ATerm h_5 (ATerm t)
            {
              t = exec_maybe_1_0(t_0, t);
              return(t);
            }
            t = map_1_0(h_5, t);
          }
          x_3 = t;
          t = w_3;
          t = alltd_1_0(i_5, t);
          y_3 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, s_3, x_3, y_3);
          l_11 = t;
          t = SSLsetAnnotations(l_11, r_3);
        }
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm q_21 = NULL,u_21 = NULL,c_22 = NULL;
  q_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_21);
  u_21 = t;
  t = term_a_14;
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, q_21), term_a_14);
  t = o_6(v_5, u_21, c_22, t);
  t = q_21;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm n_6 (ATerm y_80 (ATerm), ATerm z_20, ATerm t)
{
  static ATerm r_5 (ATerm t)
  {
    ATerm r_20 = NULL,t_20 = NULL,u_20 = NULL,c_21 = NULL,h_21 = NULL,m_21 = NULL,v_16 = NULL;
    r_20 = t;
    t = z_20;
    t = map_1_0(u_5, t);
    t = r_20;
    if(match_cons(t, sym_Scope_2))
      {
        u_20 = ATgetArgument(t, 0);
        c_21 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_20);
    t_20 = t;
    t = c_21;
    t = y_80(t);
    h_21 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, u_20, h_21);
    v_16 = t;
    t = SSLsetAnnotations(v_16, t_20);
    m_21 = t;
    {
      ATerm h_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_22 = NULL,j_22 = NULL,p_22 = NULL;
          t = CurrentTerm_0_0(t);
          {
            static ATerm w_5 (ATerm t)
            {
              ATerm q_22 = NULL;
              static ATerm z_5 (ATerm t)
              {
                if(((q_22 != NULL) && (q_22 != t)))
                  _fail(t);
                else
                  q_22 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((q_22 != NULL) && (q_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_20;
              t = fetch_1_0(z_5, t);
              return(t);
            }
            t = oncetd_1_0(w_5, t);
          }
          e_22 = t;
          t = (ATerm) ATempty;
          j_22 = t;
          t = term_a_14;
          p_22 = t;
          t = term_d_14;
          t = o_6(b_6, j_22, p_22, t);
          t = e_22;
          LocalPopChoice(i_19);
        }
      else
        {
          t = h_19;
        }
    }
    t = m_21;
    return(t);
  }
  t = scope_2_0(o_5, r_5, t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,y_16 = NULL;
  f_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_23);
  w_22 = t;
  t = x_22;
  t = alltd_1_0(Binding_0_0, t);
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, d_23);
  y_16 = t;
  t = SSLsetAnnotations(y_16, w_22);
  e_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      t_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_19, t_22);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_l_19, t_22));
  t = o_6(c_6, u_22, v_22, t);
  t = e_23;
  return(t);
}
static ATerm o_6 (ATerm y_101 (ATerm), ATerm e_43, ATerm c_43, ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  n_23 = t;
  t = y_101(t);
  g_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_23, e_43, c_43);
  t = r_7(g_23, e_43, c_43, t);
  {
    ATerm m_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_23 = NULL;
        t = term_q_19;
        q_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_23, term_q_19);
        t = q_7(g_23, q_23, t);
        LocalPopChoice(o_19);
      }
    else
      {
        t = m_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_23 = ATgetFirst((ATermList) t);
      i_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_q_19;
  o_23 = t;
  t = (ATerm) ATinsert(CheckATermList(i_23), (ATerm) ATinsert(CheckATermList(h_23), e_43));
  p_23 = t;
  t = SSL_table_put(g_23, o_23, p_23);
  t = n_23;
  return(t);
}
ATerm oncetd_1_0 (ATerm d_84 (ATerm), ATerm t)
{
  static ATerm r_23 (ATerm t)
  {
    ATerm s_19 = t;
    int u_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_84(t);
        LocalPopChoice(u_19);
      }
    else
      {
        t = s_19;
        t = SRTS_one(r_23, t);
      }
    return(t);
  }
  t = r_23(t);
  return(t);
}
ATerm if_verbose3_1_0 (ATerm h_104 (ATerm), ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_23 = NULL;
        t = term_d_20;
        t = get_config_0_0(t);
        v_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_23, term_e_20);
        t = geq_0_0(t);
        t = t_23;
        t = h_104(t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = t_23;
      }
  }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm l_24 = NULL;
  l_24 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = l_24;
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
      t = l_24;
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_t_13;
  return(t);
}
static ATerm p_6 (ATerm s_21, ATerm t_21, ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL,j_24 = NULL;
  h_24 = t;
  t = t_21;
  {
    ATerm h_20 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(d_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, s_21);
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_20, t_21);
  j_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, s_21), (ATerm) ATmakeAppl(sym_Defined_2, term_i_20, t_21));
  t = o_6(e_6, i_24, j_24, t);
  t = h_24;
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  w_27 = t;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_27;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_28 = ATgetFirst((ATermList) t);
      b_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_28;
  if(match_cons(t, sym__2))
    {
      u_27 = ATgetArgument(t, 0);
      v_27 = ATgetArgument(t, 1);
      {
        ATerm j_20 = t;
        int k_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_27;
            if((x_27 != t))
              {
                _fail(t);
              }
            t = v_27;
            LocalPopChoice(k_20);
          }
        else
          {
            t = j_20;
            t = (ATerm) ATmakeAppl(sym__2, x_27, b_28);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_27, b_28);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm k_6 (ATerm t)
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
static ATerm u_6 (ATerm t)
{
  ATerm y_30 = NULL,c_31 = NULL,d_31 = NULL,j_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_20 = ATgetArgument(t, 0);
      if(((ATgetType(n_20) == AT_LIST) && !(ATisEmpty(n_20))))
        {
          y_30 = ATgetFirst((ATermList) n_20);
          c_31 = (ATerm) ATgetNext((ATermList) n_20);
        }
      else
        _fail(t);
      {
        ATerm o_20 = ATgetArgument(t, 1);
        if(((ATgetType(o_20) == AT_LIST) && !(ATisEmpty(o_20))))
          {
            d_31 = ATgetFirst((ATermList) o_20);
            j_31 = (ATerm) ATgetNext((ATermList) o_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_30, d_31), (ATerm) ATmakeAppl(sym__2, c_31, j_31));
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm l_31 = NULL,o_31 = NULL;
  if(match_cons(t, sym__2))
    {
      l_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_31), l_31);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  d_30 = t;
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_20 = ATgetArgument(t, 0);
            ATerm v_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(q_20);
        t = d_30;
      }
    else
      {
        t = p_20;
        {
          ATerm x_30 = NULL;
          if(match_cons(t, sym__3))
            {
              e_30 = ATgetArgument(t, 0);
              f_30 = ATgetArgument(t, 1);
              g_30 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, e_30, f_30);
          t = genzip_4_0(k_6, u_6, v_6, _id, t);
          x_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_30, g_30);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t)
{
  ATerm u_31 = NULL,w_31 = NULL;
  static ATerm w_6 (ATerm t)
  {
    ATerm r_4 = NULL;
    t = c_109(t);
    r_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_4, not_null(w_31));
    t = lookup_0_0(t);
    t = d_109(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((w_31 != NULL) && (w_31 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        w_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_31;
  t = alltd_1_0(w_6, t);
  return(t);
}
static ATerm a_7 (ATerm p_113 (ATerm), ATerm j_59, ATerm k_59, ATerm m_59, ATerm l_59, ATerm t)
{
  ATerm z_31 = NULL,c_32 = NULL;
  t = j_59;
  t = p_113(t);
  t = (ATerm) ATmakeAppl(sym__2, j_59, k_59);
  {
    ATerm w_20 = t;
    if((PushChoice() == 0))
      {
        ATerm e_32 = NULL,f_32 = NULL;
        if(match_cons(t, sym__2))
          {
            e_32 = ATgetArgument(t, 0);
            f_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_32;
        {
          static ATerm y_6 (ATerm t)
          {
            if((e_32 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(y_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, e_32, f_32);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, j_59, k_59)), (ATerm) ATmakeAppl(sym__2, l_59, m_59));
  t = substitute_2_0(p_113, _id, t);
  if(match_cons(t, sym__2))
    {
      z_31 = ATgetArgument(t, 0);
      c_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_32, (ATerm) ATinsert(CheckATermList(z_31), (ATerm) ATmakeAppl(sym__2, j_59, k_59)));
  return(t);
}
ATerm at_end_1_0 (ATerm b_90 (ATerm), ATerm t)
{
  static ATerm c_26 (ATerm t)
  {
    ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
    b_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_25 = ATgetFirst((ATermList) t);
        a_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_4 = NULL,l_4 = NULL,c_17 = NULL;
          t = SSLgetAnnotations(b_26);
          i_4 = t;
          t = a_26;
          t = c_26(t);
          l_4 = t;
          t = (ATerm) ATinsert(CheckATermList(l_4), z_25);
          c_17 = t;
          t = SSLsetAnnotations(c_17, i_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_26;
        t = b_90(t);
      }
    return(t);
  }
  t = c_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_24;
    }
  else
    {
      static ATerm z_6 (ATerm t)
      {
        t = not_null(a_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_24 = ATgetFirst((ATermList) t);
          if(((a_25 != NULL) && (a_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            a_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_24;
      t = at_end_1_0(z_6, t);
    }
  return(t);
}
static ATerm x_26 (ATerm i_26, ATerm t)
{
  ATerm j_26 = NULL;
  t = SSL_explode_term(i_26);
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_26 = NULL,n_26 = NULL,q_26 = NULL;
  q_26 = t;
  if(match_cons(t, sym__2))
    {
      l_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
      {
        ATerm y_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_7 (ATerm t)
            {
              t = n_26;
              return(t);
            }
            t = l_26;
            t = at_end_1_0(b_7, t);
            LocalPopChoice(a_21);
          }
        else
          {
            t = y_20;
            t = x_26(q_26, t);
          }
      }
    }
  else
    {
      t = x_26(q_26, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm o_91 (ATerm), ATerm p_91 (ATerm), ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm t)
{
  static ATerm t_29 (ATerm t)
  {
    ATerm b_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_91(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = b_21;
        {
          ATerm c_29 = NULL,g_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,s_29 = NULL,s_17 = NULL;
          t = p_91(t);
          s_29 = t;
          if(match_cons(t, sym__2))
            {
              g_29 = ATgetArgument(t, 0);
              n_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_29);
          c_29 = t;
          t = g_29;
          t = r_91(t);
          o_29 = t;
          t = n_29;
          t = t_29(t);
          p_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
          s_17 = t;
          t = SSLsetAnnotations(s_17, c_29);
          t = q_91(t);
        }
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_21 = ATgetArgument(t, 0);
      if(((ATgetType(g_21) != AT_LIST) || !(ATisEmpty(g_21))))
        _fail(t);
      {
        ATerm i_21 = ATgetArgument(t, 1);
        if(((ATgetType(i_21) != AT_LIST) || !(ATisEmpty(i_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm h_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_21 = ATgetArgument(t, 0);
      if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
        {
          h_27 = ATgetFirst((ATermList) j_21);
          j_27 = (ATerm) ATgetNext((ATermList) j_21);
        }
      else
        _fail(t);
      {
        ATerm k_21 = ATgetArgument(t, 1);
        if(((ATgetType(k_21) == AT_LIST) && !(ATisEmpty(k_21))))
          {
            k_27 = ATgetFirst((ATermList) k_21);
            l_27 = (ATerm) ATgetNext((ATermList) k_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_27, k_27), (ATerm) ATmakeAppl(sym__2, j_27, l_27));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL;
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_27), m_27);
  return(t);
}
static ATerm t_6 (ATerm s_636, ATerm x_636, ATerm l_60, ATerm t)
{
  ATerm z_26 = NULL,c_27 = NULL,d_27 = NULL,f_27 = NULL;
  t = SSL_explode_term(x_636);
  if(match_cons(t, sym__2))
    {
      z_26 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(s_636);
  if(match_cons(t, sym__2))
    {
      if((z_26 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_27, d_27);
  t = genzip_4_0(c_7, f_7, p_7, _id, t);
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_27, l_60);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm t)
{
  static ATerm j_32 (ATerm t)
  {
    ATerm l_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_82(t);
        LocalPopChoice(n_21);
      }
    else
      {
        t = l_21;
        t = r_82(t);
        t = j_32(t);
      }
    return(t);
  }
  t = j_32(t);
  return(t);
}
ATerm for_3_0 (ATerm t_82 (ATerm), ATerm u_82 (ATerm), ATerm v_82 (ATerm), ATerm t)
{
  t = t_82(t);
  t = while_not_2_0(u_82, v_82, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_33, (ATerm) ATempty);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm f_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_21 = ATgetArgument(t, 0);
      if(((ATgetType(o_21) != AT_LIST) || !(ATisEmpty(o_21))))
        _fail(t);
      f_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_33;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL,r_37 = NULL,w_37 = NULL,x_37 = NULL,a_38 = NULL;
  w_37 = t;
  if(match_cons(t, sym__2))
    {
      x_37 = ATgetArgument(t, 0);
      a_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_37 = ATgetFirst((ATermList) t);
      r_37 = (ATerm) ATgetNext((ATermList) t);
      t = j_37;
      if(match_cons(t, sym__2))
        {
          k_37 = ATgetArgument(t, 0);
          l_37 = ATgetArgument(t, 1);
          {
            ATerm p_21 = t;
            int r_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = q_38(x_37, a_38, w_37, t);
                LocalPopChoice(r_21);
              }
            else
              {
                t = p_21;
                {
                  ATerm v_21 = t;
                  int w_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_37;
                      t = a_7(y_7, k_37, l_37, r_37, a_38, t);
                      LocalPopChoice(w_21);
                    }
                  else
                    {
                      t = v_21;
                      {
                        ATerm x_21 = t;
                        int y_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = r_38(x_37, a_38, w_37, t);
                            LocalPopChoice(y_21);
                          }
                        else
                          {
                            t = x_21;
                            {
                              ATerm z_21 = t;
                              int a_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = u_38(x_37, a_38, w_37, t);
                                  LocalPopChoice(a_22);
                                }
                              else
                                {
                                  t = z_21;
                                  {
                                    ATerm b_22 = t;
                                    int d_22 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = b_39(x_37, a_38, w_37, t);
                                        LocalPopChoice(d_22);
                                      }
                                    else
                                      {
                                        t = b_22;
                                        t = f_39(x_37, a_38, w_37, t);
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
          ATerm f_22 = t;
          int g_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_38(x_37, a_38, w_37, t);
              LocalPopChoice(g_22);
            }
          else
            {
              t = f_22;
              {
                ATerm h_22 = t;
                int i_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = r_38(x_37, a_38, w_37, t);
                    LocalPopChoice(i_22);
                  }
                else
                  {
                    t = h_22;
                    {
                      ATerm k_22 = t;
                      int l_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = u_38(x_37, a_38, w_37, t);
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
                                t = b_39(x_37, a_38, w_37, t);
                                LocalPopChoice(n_22);
                              }
                            else
                              {
                                t = m_22;
                                t = f_39(x_37, a_38, w_37, t);
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
      ATerm o_22 = t;
      int r_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_38(x_37, a_38, w_37, t);
          LocalPopChoice(r_22);
        }
      else
        {
          t = o_22;
          {
            ATerm s_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = r_38(x_37, a_38, w_37, t);
                LocalPopChoice(y_22);
              }
            else
              {
                t = s_22;
                {
                  ATerm z_22 = t;
                  int a_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = u_38(x_37, a_38, w_37, t);
                      LocalPopChoice(a_23);
                    }
                  else
                    {
                      t = z_22;
                      {
                        ATerm b_23 = t;
                        int c_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = b_39(x_37, a_38, w_37, t);
                            LocalPopChoice(c_23);
                          }
                        else
                          {
                            t = b_23;
                            t = f_39(x_37, a_38, w_37, t);
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
static ATerm q_38 (ATerm g_33, ATerm k_33, ATerm l_33, ATerm t)
{
  ATerm m_33 = NULL,r_33 = NULL,t_33 = NULL,x_17 = NULL;
  t = SSLgetAnnotations(l_33);
  m_33 = t;
  t = g_33;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm j_23 = ATgetFirst((ATermList) t);
      if(match_cons(j_23, sym__2))
        {
          r_33 = ATgetArgument(j_23, 0);
          if((r_33 != ATgetArgument(j_23, 1)))
            {
              _fail(ATgetArgument(j_23, 1));
            }
        }
      else
        _fail(t);
      t_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_33, k_33);
  x_17 = t;
  t = SSLsetAnnotations(x_17, m_33);
  return(t);
}
static ATerm r_38 (ATerm c_34, ATerm d_34, ATerm h_34, ATerm t)
{
  ATerm i_34 = NULL,o_34 = NULL,p_34 = NULL,r_34 = NULL,s_34 = NULL,y_17 = NULL;
  t = SSLgetAnnotations(h_34);
  i_34 = t;
  t = c_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_23 = ATgetFirst((ATermList) t);
      if(match_cons(k_23, sym__2))
        {
          p_34 = ATgetArgument(k_23, 0);
          r_34 = ATgetArgument(k_23, 1);
        }
      else
        _fail(t);
      s_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_6(p_34, r_34, s_34, t);
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_34, d_34);
  y_17 = t;
  t = SSLsetAnnotations(y_17, i_34);
  return(t);
}
static ATerm u_38 (ATerm u_34, ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm d_35 = NULL,i_35 = NULL,j_35 = NULL,l_35 = NULL,m_35 = NULL,z_17 = NULL;
  t = SSLgetAnnotations(c_35);
  d_35 = t;
  t = u_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_23 = ATgetFirst((ATermList) t);
      if(match_cons(l_23, sym__2))
        {
          ATerm m_23 = ATgetArgument(l_23, 0);
          if(match_cons(m_23, sym_As_2))
            {
              i_35 = ATgetArgument(m_23, 0);
              j_35 = ATgetArgument(m_23, 1);
            }
          else
            _fail(t);
          l_35 = ATgetArgument(l_23, 1);
        }
      else
        _fail(t);
      m_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(m_35), (ATerm) ATmakeAppl(sym__2, j_35, l_35)), (ATerm) ATmakeAppl(sym__2, i_35, l_35)), b_35);
  z_17 = t;
  t = SSLsetAnnotations(z_17, d_35);
  return(t);
}
static ATerm b_39 (ATerm q_35, ATerm r_35, ATerm s_35, ATerm t)
{
  ATerm t_35 = NULL,z_35 = NULL,a_18 = NULL;
  t = SSLgetAnnotations(s_35);
  t_35 = t;
  t = q_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_23 = ATgetFirst((ATermList) t);
      if(match_cons(s_23, sym__2))
        {
          ATerm u_23 = ATgetArgument(s_23, 0);
          if(!(match_cons(u_23, sym_Wld_0)))
            _fail(t);
          {
            ATerm w_23 = ATgetArgument(s_23, 1);
          }
        }
      else
        _fail(t);
      z_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_35, r_35);
  a_18 = t;
  t = SSLsetAnnotations(a_18, t_35);
  return(t);
}
static ATerm f_39 (ATerm d_36, ATerm e_36, ATerm f_36, ATerm t)
{
  ATerm g_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,u_36 = NULL,d_18 = NULL,c_18 = NULL;
  t = SSLgetAnnotations(f_36);
  g_36 = t;
  t = d_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_23 = ATgetFirst((ATermList) t);
      if(match_cons(x_23, sym__2))
        {
          n_36 = ATgetArgument(x_23, 0);
          o_36 = ATgetArgument(x_23, 1);
        }
      else
        _fail(t);
      p_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_36;
  {
    ATerm a_24 = t;
    if((PushChoice() == 0))
      {
        ATerm d_37 = NULL,f_37 = NULL,g_37 = NULL,b_18 = NULL;
        g_37 = t;
        if(match_cons(t, sym_Var_1))
          {
            f_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_37);
        d_37 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, f_37);
        b_18 = t;
        t = SSLsetAnnotations(b_18, d_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = a_24;
      }
  }
  t = o_36;
  if(match_cons(t, sym_Var_1))
    {
      u_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_36);
  q_36 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_36);
  c_18 = t;
  t = SSLsetAnnotations(c_18, q_36);
  t = (ATerm) ATmakeAppl(sym__2, p_36, e_36);
  d_18 = t;
  t = SSLsetAnnotations(d_18, g_36);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm g_38 = NULL,l_38 = NULL,n_38 = NULL,e_18 = NULL;
  n_38 = t;
  if(match_cons(t, sym_Var_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_38);
  g_38 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_38);
  e_18 = t;
  t = SSLsetAnnotations(e_18, g_38);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(s_7, v_7, w_7, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm b_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_39 = NULL,e_5 = NULL,g_5 = NULL;
      t = (ATerm) ATempty;
      e_5 = t;
      t = term_b_14;
      g_5 = t;
      t = term_k_24;
      t = d_7(g_5, e_5, t);
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
      LocalPopChoice(f_24);
    }
  else
    {
      t = b_24;
      {
        ATerm n_24 = t;
        int o_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_39 = NULL,n_5 = NULL,q_5 = NULL;
            t = (ATerm) ATempty;
            n_5 = t;
            t = term_b_14;
            q_5 = t;
            t = term_k_24;
            t = d_7(q_5, n_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm p_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_24) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                l_39 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_39;
            LocalPopChoice(o_24);
          }
        else
          {
            t = n_24;
            {
              ATerm r_39 = NULL,f_6 = NULL,g_6 = NULL;
              r_39 = t;
              t = (ATerm) ATempty;
              f_6 = t;
              t = term_b_14;
              g_6 = t;
              t = term_k_24;
              t = d_7(g_6, f_6, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = r_39;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
static ATerm d_7 (ATerm y_53, ATerm z_53, ATerm t)
{
  ATerm v_39 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
  t = q_7(y_53, z_53, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_39 = ATgetFirst((ATermList) t);
      {
        ATerm q_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_39;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm r_40 = NULL;
  r_40 = t;
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
        ATerm u_7 = NULL,x_7 = NULL;
        t = term_t_13;
        x_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_13, r_40);
        t = d_7(x_7, r_40, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_24 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_24) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            u_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_7;
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_8 = NULL;
              t = term_t_13;
              e_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_t_13, r_40);
              t = d_7(e_8, r_40, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = r_40;
              _fail(t);
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              {
                ATerm l_8 = NULL;
                t = term_t_13;
                l_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_t_13, r_40);
                t = d_7(l_8, r_40, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                t = r_40;
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm r_84 (ATerm), ATerm t)
{
  static ATerm b_41 (ATerm t)
  {
    ATerm x_24 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_84(t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = x_24;
        t = SRTS_all(b_41, t);
      }
    return(t);
  }
  t = b_41(t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_8 = NULL,r_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm e_25 = ATgetArgument(t, 0);
          if(match_cons(e_25, sym_Var_1))
            {
              q_8 = ATgetArgument(e_25, 0);
            }
          else
            _fail(t);
          r_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_6(q_8, r_8, t);
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = debug_1_0(b_8, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_f_25;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm e_42 = NULL;
  e_42 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = e_42;
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
      t = e_42;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm e_41 = NULL,h_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,n_18 = NULL;
  n_41 = t;
  if(match_cons(t, sym_Match_1))
    {
      k_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_41);
  j_41 = t;
  t = k_41;
  t = alltd_1_0(Binding_0_0, t);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_41);
  n_18 = t;
  t = SSLsetAnnotations(n_18, j_41);
  m_41 = t;
  if(match_cons(t, sym_Match_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        e_41 = t;
        t = m_41;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, h_41, e_41));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(z_7, t);
              t = m_41;
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              t = (ATerm) ATmakeAppl(sym__4, term_m_25, m_41, term_n_25, e_41);
              t = if_verbose3_1_0(a_8, t);
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
              ATerm u_41 = NULL,a_42 = NULL;
              t = h_41;
              {
                ATerm r_25 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(c_8, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_25;
                  }
              }
              t = (ATerm) ATempty;
              u_41 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_s_25, h_41);
              a_42 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_s_25, h_41));
              t = o_6(d_8, u_41, a_42, t);
              t = m_41;
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
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = prop_build_0_0(t);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_43 = NULL,j_43 = NULL;
                  i_43 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      j_43 = ATgetArgument(t, 0);
                      {
                        ATerm d_26 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = i_43;
                  t = n_6(cp_0_0, j_43, t);
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  {
                    ATerm e_26 = t;
                    int f_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        LocalPopChoice(f_26);
                      }
                    else
                      {
                        t = e_26;
                        {
                          ATerm g_26 = t;
                          int h_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              LocalPopChoice(h_26);
                            }
                          else
                            {
                              t = g_26;
                              {
                                ATerm k_26 = t;
                                int m_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,v_8 = NULL,z_8 = NULL,a_9 = NULL,p_18 = NULL;
                                    w_43 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        x_43 = ATgetArgument(t, 0);
                                        y_43 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(w_43);
                                    v_8 = t;
                                    t = x_43;
                                    t = cp_0_0(t);
                                    z_8 = t;
                                    t = y_43;
                                    t = cp_0_0(t);
                                    a_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, z_8, a_9);
                                    p_18 = t;
                                    t = SSLsetAnnotations(p_18, v_8);
                                    LocalPopChoice(m_26);
                                  }
                                else
                                  {
                                    t = k_26;
                                    {
                                      ATerm o_26 = t;
                                      int p_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          LocalPopChoice(p_26);
                                        }
                                      else
                                        {
                                          t = o_26;
                                          {
                                            ATerm r_26 = t;
                                            int s_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm f_44 = NULL,g_44 = NULL,i_44 = NULL;
                                                f_44 = t;
                                                {
                                                  ATerm t_26 = t;
                                                  int u_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm v_26 = ATgetArgument(t, 0);
                                                          ATerm w_26 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(u_26);
                                                      t = f_44;
                                                      t = l_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = t_26;
                                                      {
                                                        ATerm y_26 = t;
                                                        int a_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm b_27 = ATgetArgument(t, 0);
                                                                ATerm e_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(a_27);
                                                            {
                                                              ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,q_18 = NULL;
                                                              t = f_44;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  o_9 = ATgetArgument(t, 0);
                                                                  p_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(f_44);
                                                              n_9 = t;
                                                              t = p_9;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              q_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, o_9, q_9);
                                                              q_18 = t;
                                                              t = SSLsetAnnotations(q_18, n_9);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = y_26;
                                                            {
                                                              ATerm g_27 = t;
                                                              int i_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm o_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(i_27);
                                                                  t = f_44;
                                                                  t = j_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = g_27;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      g_44 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm p_27 = ATgetArgument(t, 1);
                                                                      }
                                                                      i_44 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm q_27 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = f_44;
                                                                  t = i_6(cp_0_0, g_44, i_44, t);
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
                                                t = r_26;
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
static ATerm e_7 (ATerm s_53, ATerm t_53, ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  p_44 = t;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_53, t_53);
        t = q_7(s_53, t_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_27 = ATgetFirst((ATermList) t);
            o_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(s_27);
        t = SSL_table_put(s_53, t_53, o_44);
        t = (ATerm) ATmakeAppl(sym__3, s_53, t_53, o_44);
      }
    else
      {
        t = r_27;
        t = SSL_table_remove(s_53, t_53);
        t = (ATerm) ATmakeAppl(sym__2, s_53, t_53);
      }
  }
  t = p_44;
  return(t);
}
ATerm end_scope_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL;
  t_44 = t;
  t = v_101(t);
  s_44 = t;
  {
    ATerm y_27 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_44 = NULL;
        t = term_q_19;
        v_44 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_44, term_q_19);
        t = q_7(s_44, v_44, t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_44 = ATgetFirst((ATermList) t);
      q_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_q_19;
  u_44 = t;
  t = SSL_table_put(s_44, u_44, q_44);
  t = r_44;
  {
    static ATerm f_8 (ATerm t)
    {
      ATerm w_44 = NULL;
      w_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_44, w_44);
      t = e_7(s_44, w_44, t);
      return(t);
    }
    t = map_1_0(f_8, t);
  }
  t = t_44;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_81(t);
      t = w_81(t);
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      t = w_81(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm u_101 (ATerm), ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
  z_44 = t;
  t = u_101(t);
  y_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_44, term_q_19);
  {
    ATerm f_28 = t;
    int g_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_28 = ATgetArgument(t, 0);
            ATerm i_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_q_19;
        g_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_44, term_q_19);
        t = q_7(y_44, g_45, t);
        LocalPopChoice(g_28);
      }
    else
      {
        t = f_28;
        t = (ATerm) ATempty;
      }
  }
  a_45 = t;
  t = term_q_19;
  b_45 = t;
  t = (ATerm) ATinsert(CheckATermList(a_45), (ATerm) ATempty);
  c_45 = t;
  t = SSL_table_put(y_44, b_45, c_45);
  t = z_44;
  return(t);
}
ATerm scope_2_0 (ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm t)
{
  static ATerm g_8 (ATerm t)
  {
    t = end_scope_1_0(w_101, t);
    return(t);
  }
  t = begin_scope_1_0(w_101, t);
  t = restore_always_2_0(x_101, g_8, t);
  return(t);
}
ATerm map_1_0 (ATerm l_89 (ATerm), ATerm t)
{
  static ATerm v_45 (ATerm t)
  {
    ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL;
    s_45 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_45;
      }
    else
      {
        ATerm z_9 = NULL,d_10 = NULL,f_10 = NULL,t_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_45 = ATgetFirst((ATermList) t);
            u_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_45);
        z_9 = t;
        t = t_45;
        t = l_89(t);
        d_10 = t;
        t = u_45;
        t = v_45(t);
        f_10 = t;
        t = (ATerm) ATinsert(CheckATermList(f_10), d_10);
        t_18 = t;
        t = SSLsetAnnotations(t_18, z_9);
      }
    return(t);
  }
  t = v_45(t);
  return(t);
}
ATerm Cons_2_0 (ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,v_18 = NULL;
  c_46 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_45 = ATgetFirst((ATermList) t);
      z_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_46);
  x_45 = t;
  t = y_45;
  t = i_68(t);
  a_46 = t;
  t = z_45;
  t = j_68(t);
  b_46 = t;
  t = (ATerm) ATinsert(CheckATermList(b_46), a_46);
  v_18 = t;
  t = SSLsetAnnotations(v_18, x_45);
  return(t);
}
static ATerm h_7 (ATerm v_38, ATerm w_38, ATerm t)
{
  ATerm d_46 = NULL;
  t = SSL_fputc(v_38, w_38);
  d_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_46);
  return(t);
}
static ATerm i_7 (ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm e_46 = NULL;
  t = SSL_write_term_to_stream_text(c_24, d_24);
  e_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_46);
  return(t);
}
static ATerm k_7 (ATerm c_89 (ATerm), ATerm l_166, ATerm g_24, ATerm t)
{
  ATerm f_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_166, term_j_28);
  t = n_7(t);
  f_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_46, g_24);
  t = c_89(t);
  t = fclose_0_0(t);
  t = g_24;
  return(t);
}
static ATerm j_7 (ATerm y_23, ATerm z_23, ATerm t)
{
  ATerm g_46 = NULL;
  t = SSL_write_term_to_stream_baf(y_23, z_23);
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_46);
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
  ATerm g_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_28 = ATgetArgument(t, 0);
      if(match_cons(k_28, sym_Stream_1))
        {
          g_11 = ATgetArgument(k_28, 0);
        }
      else
        _fail(t);
      h_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_7(g_11, h_11, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm k_12 = NULL,n_12 = NULL,o_12 = NULL,r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_28 = ATgetArgument(t, 0);
      if(match_cons(l_28, sym_Stream_1))
        {
          r_12 = ATgetArgument(l_28, 0);
        }
      else
        _fail(t);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(r_12, s_12, t);
  k_12 = t;
  t = term_m_28;
  n_12 = t;
  t = k_12;
  if(match_cons(t, sym_Stream_1))
    {
      o_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_28, k_12);
  t = h_7(n_12, o_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,u_47 = NULL,v_47 = NULL,y_18 = NULL,x_18 = NULL;
  l_46 = t;
  if(match_cons(t, sym__2))
    {
      s_46 = ATgetArgument(t, 0);
      t_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_46);
  r_46 = t;
  t = s_46;
  {
    ATerm n_28 = t;
    int o_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_8 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_46 != NULL) && (k_46 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_46 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_8, t);
        LocalPopChoice(o_28);
      }
    else
      {
        t = n_28;
        t = term_p_28;
        k_46 = t;
      }
  }
  u_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_46, t_46);
  x_18 = t;
  t = SSLsetAnnotations(x_18, r_46);
  t = l_46;
  if(match_cons(t, sym__2))
    {
      n_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_46);
  m_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, (ATerm) ATmakeAppl(sym__2, not_null(k_46), o_46));
  y_18 = t;
  t = SSLsetAnnotations(y_18, m_46);
  q_46 = t;
  if(match_cons(t, sym__2))
    {
      u_47 = ATgetArgument(t, 0);
      v_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_28 = t;
    int r_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,c_11 = NULL,z_18 = NULL;
        t = SSLgetAnnotations(q_46);
        v_10 = t;
        t = u_47;
        t = fetch_1_0(i_8, t);
        y_10 = t;
        t = v_47;
        if(match_cons(t, sym__2))
          {
            a_11 = ATgetArgument(t, 0);
            c_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_7(j_8, a_11, c_11, t);
        z_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_10, z_10);
        z_18 = t;
        t = SSLsetAnnotations(z_18, v_10);
        LocalPopChoice(r_28);
      }
    else
      {
        t = q_28;
        {
          ATerm s_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,a_19 = NULL;
          t = SSLgetAnnotations(q_46);
          s_11 = t;
          t = v_47;
          if(match_cons(t, sym__2))
            {
              z_11 = ATgetArgument(t, 0);
              a_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_7(k_8, z_11, a_12, t);
          y_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_47, y_11);
          a_19 = t;
          t = SSLsetAnnotations(a_19, s_11);
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
ATerm apply_strategy_1_0 (ATerm x_105 (ATerm), ATerm t)
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
  c_48 = t;
  t = dtime_0_0(t);
  t = c_48;
  t = x_105(t);
  b_48 = t;
  t = dtime_0_0(t);
  y_47 = t;
  t = b_48;
  if(match_cons(t, sym__2))
    {
      z_47 = ATgetArgument(t, 0);
      a_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_47), (ATerm) ATmakeAppl(sym_Runtime_1, y_47)), a_48);
  return(t);
}
static ATerm s_48 (ATerm k_48, ATerm t)
{
  t = SSL_fclose(k_48);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  q_48 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_48 = ATgetArgument(t, 0);
      {
        ATerm s_28 = t;
        int t_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_48);
            LocalPopChoice(t_28);
          }
        else
          {
            t = s_28;
            t = s_48(q_48, t);
          }
      }
    }
  else
    {
      t = s_48(q_48, t);
    }
  return(t);
}
static ATerm l_7 (ATerm e_24, ATerm t)
{
  t = SSL_read_term_from_stream(e_24);
  return(t);
}
static ATerm m_7 (ATerm x_38, ATerm y_38, ATerm t)
{
  ATerm t_48 = NULL;
  t = SSL_fopen(x_38, y_38);
  t_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_48);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_48 = NULL;
  t = SSL_stdin_stream();
  u_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_48);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_48 = NULL;
  t = SSL_stdout_stream();
  v_48 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_48);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_49 = NULL;
  t = SSL_stderr_stream();
  b_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_49);
  return(t);
}
static ATerm m_50 (ATerm h_49, ATerm t)
{
  ATerm i_49 = NULL;
  t = SSL_explode_term(h_49);
  if(match_cons(t, sym__2))
    {
      ATerm u_28 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_28) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_28 = ATgetArgument(t, 1);
        if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
          {
            i_49 = ATgetFirst((ATermList) v_28);
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
  t = i_49;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_49;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_49;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_49;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_50 (ATerm l_49, ATerm m_49, ATerm n_49, ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,q_49 = NULL,t_49 = NULL,f_19 = NULL;
  t = SSLgetAnnotations(n_49);
  q_49 = t;
  t = l_49;
  if(match_cons(t, sym_Path_1))
    {
      t_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_49, m_49);
  f_19 = t;
  t = SSLsetAnnotations(f_19, q_49);
  if(match_cons(t, sym__2))
    {
      o_49 = ATgetArgument(t, 0);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(o_49, p_49, t);
  return(t);
}
static ATerm o_50 (ATerm v_49, ATerm w_49, ATerm x_49, ATerm t)
{
  ATerm y_49 = NULL,z_49 = NULL,a_50 = NULL,d_50 = NULL,g_19 = NULL;
  t = SSLgetAnnotations(x_49);
  a_50 = t;
  t = SSL_is_string(v_49);
  d_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_50, w_49);
  g_19 = t;
  t = SSLsetAnnotations(g_19, a_50);
  if(match_cons(t, sym__2))
    {
      y_49 = ATgetArgument(t, 0);
      z_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_7(y_49, z_49, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm f_50 = NULL,k_50 = NULL,l_50 = NULL;
  f_50 = t;
  if(match_cons(t, sym__2))
    {
      k_50 = ATgetArgument(t, 0);
      l_50 = ATgetArgument(t, 1);
      {
        ATerm x_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_50(f_50, t);
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
                  t = n_50(k_50, l_50, f_50, t);
                  LocalPopChoice(a_29);
                }
              else
                {
                  t = z_28;
                  t = o_50(k_50, l_50, f_50, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_50(f_50, t);
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_b_29;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  ATerm d_29 = t;
  int e_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_50 = NULL;
      s_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_50, term_f_29);
      t = n_7(t);
      LocalPopChoice(e_29);
    }
  else
    {
      t = d_29;
      t = debug_1_0(n_8, t);
      _fail(t);
    }
  q_50 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_7(r_50, t);
  p_50 = t;
  t = q_50;
  t = fclose_0_0(t);
  t = p_50;
  return(t);
}
ATerm fetch_1_0 (ATerm v_89 (ATerm), ATerm t)
{
  static ATerm q_51 (ATerm t)
  {
    ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
    n_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_51 = ATgetFirst((ATermList) t);
        p_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_29 = t;
      int i_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_13 = NULL,y_13 = NULL,j_19 = NULL;
          t = SSLgetAnnotations(n_51);
          p_13 = t;
          t = o_51;
          t = v_89(t);
          y_13 = t;
          t = (ATerm) ATinsert(CheckATermList(p_51), y_13);
          j_19 = t;
          t = SSLsetAnnotations(j_19, p_13);
          LocalPopChoice(i_29);
        }
      else
        {
          t = h_29;
          {
            ATerm m_14 = NULL,q_14 = NULL,k_19 = NULL;
            t = SSLgetAnnotations(n_51);
            m_14 = t;
            t = p_51;
            t = q_51(t);
            q_14 = t;
            t = (ATerm) ATinsert(CheckATermList(q_14), o_51);
            k_19 = t;
            t = SSLsetAnnotations(k_19, m_14);
          }
        }
    }
    return(t);
  }
  t = q_51(t);
  return(t);
}
static ATerm g_7 (ATerm p_37, ATerm q_37, ATerm t)
{
  t = SSL_strcat(p_37, q_37);
  return(t);
}
ATerm debug_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
  t_51 = t;
  t = a_89(t);
  u_51 = t;
  t = term_l_13;
  v_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_51), u_51);
  w_51 = t;
  t = SSL_printnl(v_51, w_51);
  t = t_51;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
    }
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_l_29;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_29 = t;
  int q_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_52 = NULL;
      d_52 = t;
      t = SSL_is_string(d_52);
      LocalPopChoice(q_29);
    }
  else
    {
      t = m_29;
      {
        ATerm r_29 = t;
        int u_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(o_8, t);
            LocalPopChoice(u_29);
          }
        else
          {
            t = r_29;
            {
              ATerm j_52 = NULL,k_52 = NULL,l_52 = NULL;
              j_52 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_52 = ATgetArgument(t, 0);
                  t = k_52;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_52 = ATgetArgument(t, 0);
                      t = k_52;
                      {
                        ATerm v_29 = t;
                        int w_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(w_29);
                          }
                        else
                          {
                            t = v_29;
                            t = debug_1_0(p_8, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_52 = NULL,q_52 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_52 = ATgetArgument(t, 0);
                          l_52 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_52;
                      t = eval_config_0_0(t);
                      p_52 = t;
                      t = l_52;
                      t = eval_config_0_0(t);
                      q_52 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
                      t = g_7(p_52, q_52, t);
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
  ATerm u_52 = NULL,a_53 = NULL;
  u_52 = t;
  t = term_x_29;
  a_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_29, u_52);
  t = q_7(a_53, u_52, t);
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_53 = NULL,c_53 = NULL;
        t = eval_config_0_0(t);
        b_53 = t;
        t = term_x_29;
        c_53 = t;
        t = SSL_table_put(c_53, u_52, b_53);
        t = b_53;
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_104 (ATerm), ATerm t)
{
  ATerm g_53 = NULL;
  g_53 = t;
  {
    ATerm a_30 = t;
    int b_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_53 = NULL;
        t = term_d_20;
        t = get_config_0_0(t);
        i_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_53, term_c_30);
        t = geq_0_0(t);
        t = g_53;
        t = g_104(t);
        LocalPopChoice(b_30);
      }
    else
      {
        t = a_30;
        t = g_53;
      }
  }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm p_53 = NULL;
  p_53 = t;
  if(match_string(t, "-k"))
    {
      t = p_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_53;
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm q_53 = NULL,u_53 = NULL,v_53 = NULL;
  q_53 = t;
  t = SSL_string_to_int(q_53);
  u_53 = t;
  t = term_h_30;
  v_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_30, u_53);
  t = t_7(v_53, u_53, t);
  t = q_53;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_i_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_8, t_8, u_8, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm x_53 = NULL;
  x_53 = t;
  if(match_string(t, "-S"))
    {
      t = x_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_53;
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  t = term_d_20;
  a_54 = t;
  t = term_j_30;
  b_54 = t;
  t = term_k_30;
  t = t_7(a_54, b_54, t);
  t = term_l_30;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_m_30;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  t = SSL_string_to_int(c_54);
  d_54 = t;
  t = term_d_20;
  e_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_20, d_54);
  t = t_7(e_54, d_54, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_54);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  t = term_n_30;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL;
  t = term_o_30;
  f_54 = t;
  t = term_j_13;
  g_54 = t;
  t = term_p_30;
  t = t_7(f_54, g_54, t);
  t = term_q_30;
  return(t);
}
static ATerm m_9 (ATerm t)
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
      t = Option_3_0(w_8, x_8, e_9, t);
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
            t = ArgOption_3_0(f_9, i_9, j_9, t);
            LocalPopChoice(v_30);
          }
        else
          {
            t = u_30;
            t = Option_3_0(k_9, l_9, m_9, t);
          }
      }
    }
  return(t);
}
static ATerm t_7 (ATerm n_48, ATerm o_48, ATerm t)
{
  ATerm h_54 = NULL;
  t = term_x_29;
  h_54 = t;
  t = SSL_table_put(h_54, n_48, o_48);
  t = (ATerm) ATmakeAppl(sym__3, term_x_29, n_48, o_48);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_54 = NULL,t_54 = NULL,u_54 = NULL;
      t = term_j_13;
      t = e_0(t);
      m_54 = t;
      t = term_w_30;
      t_54 = t;
      t = term_z_30;
      u_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_30, term_z_30, m_54);
      t = r_7(t_54, u_54, m_54, t);
      _fail(t);
    }
  else
    {
      ATerm x_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_54 = ATgetFirst((ATermList) t);
          l_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_54;
      t = c_0(t);
      t = term_j_13;
      t = d_0(t);
      x_54 = t;
      t = (ATerm) ATinsert(CheckATermList(l_54), x_54);
    }
  return(t);
}
static ATerm s_9 (ATerm t)
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
  t = term_a_31;
  b_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_31, a_55);
  t = t_7(b_55, a_55, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_55);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_b_31;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_9, u_9, v_9, t);
  return(t);
}
static ATerm r_7 (ATerm n_53, ATerm o_53, ATerm m_53, ATerm t)
{
  ATerm d_55 = NULL,g_55 = NULL,h_55 = NULL;
  d_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_53, o_53);
  {
    ATerm e_31 = t;
    int f_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_31 = ATgetArgument(t, 0);
            ATerm h_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_53, o_53);
        t = q_7(n_53, o_53, t);
        LocalPopChoice(f_31);
      }
    else
      {
        t = e_31;
        t = (ATerm) ATempty;
      }
  }
  g_55 = t;
  t = (ATerm) ATinsert(CheckATermList(g_55), m_53);
  h_55 = t;
  t = SSL_table_put(n_53, o_53, h_55);
  t = d_55;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,x_55 = NULL,y_55 = NULL,z_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
      t = term_j_13;
      t = r_0(t);
      a_56 = t;
      t = term_w_30;
      b_56 = t;
      t = term_z_30;
      c_56 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_30, term_z_30, a_56);
      t = r_7(b_56, c_56, a_56, t);
      _fail(t);
    }
  else
    {
      ATerm g_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_55 = ATgetFirst((ATermList) t);
          x_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_55 = ATgetFirst((ATermList) t);
          z_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_55;
      t = l_0(t);
      t = y_55;
      t = o_0(t);
      g_56 = t;
      t = (ATerm) ATinsert(CheckATermList(z_55), g_56);
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm i_56 = NULL;
  i_56 = t;
  if(match_string(t, "-i"))
    {
      t = i_56;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_56;
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm j_56 = NULL,k_56 = NULL;
  j_56 = t;
  t = term_i_31;
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_31, j_56);
  t = t_7(k_56, j_56, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_56);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  t = term_k_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_9, y_9, a_10, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL,n_56 = NULL,o_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_13;
  t = whoami_0_0(t);
  l_56 = t;
  t = term_l_13;
  n_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_31), l_56);
  o_56 = t;
  t = SSL_printnl(n_56, o_56);
  t = term_s_13;
  m_56 = t;
  t = SSL_exit(m_56);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_31;
  t = get_config_0_0(t);
  return(t);
}
static ATerm o_7 (ATerm q_41, ATerm r_41, ATerm t)
{
  ATerm p_31 = t;
  int q_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(q_41, r_41);
      LocalPopChoice(q_31);
    }
  else
    {
      t = p_31;
      t = SSL_addr(q_41, r_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_95 (ATerm), ATerm p_95 (ATerm), ATerm t)
{
  ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL;
  q_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_56;
      t = o_95(t);
    }
  else
    {
      ATerm v_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_56 = ATgetFirst((ATermList) t);
          s_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_56;
      t = foldr_2_0(o_95, p_95, t);
      v_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_56, v_56);
      t = p_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = term_j_30;
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      s_15 = ATgetArgument(t, 0);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_7(s_15, t_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_56 = NULL,n_15 = NULL,p_15 = NULL;
  t = times_0_0(t);
  p_15 = t;
  t = SSL_explode_term(p_15);
  if(match_cons(t, sym__2))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15;
  t = foldr_2_0(b_10, c_10, t);
  y_56 = t;
  t = SSL_TicksToSeconds(y_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL;
  j_57 = t;
  if(match_cons(t, sym__2))
    {
      k_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_57;
        if((k_57 != t))
          {
            _fail(t);
          }
        t = j_57;
        LocalPopChoice(t_31);
      }
    else
      {
        t = s_31;
        t = (ATerm) ATmakeAppl(sym__2, k_57, l_57);
        {
          ATerm v_31 = t;
          int x_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_57, l_57);
              LocalPopChoice(x_31);
            }
          else
            {
              t = v_31;
              t = SSL_gtr(k_57, l_57);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_57, l_57);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm p_57 = NULL;
  p_57 = t;
  {
    ATerm y_31 = t;
    int a_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_57 = NULL;
        t = term_d_20;
        t = get_config_0_0(t);
        r_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_57, term_s_13);
        t = geq_0_0(t);
        t = p_57;
        t = f_104(t);
        LocalPopChoice(a_32);
      }
    else
      {
        t = y_31;
        t = p_57;
      }
  }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL,w_57 = NULL,x_57 = NULL;
  t = run_time_0_0(t);
  t_57 = t;
  t = term_j_13;
  t = whoami_0_0(t);
  u_57 = t;
  t = term_l_13;
  w_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_32), t_57), term_b_32), u_57);
  x_57 = t;
  t = SSL_printnl(w_57, x_57);
  t = (ATerm) ATmakeAppl(sym__2, term_l_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_32), t_57), term_b_32), u_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_10, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_30;
  y_57 = t;
  t = SSL_exit(y_57);
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm g_58 = NULL,h_58 = NULL;
  h_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_58 = ATgetArgument(t, 0);
          {
            ATerm u_16 = NULL,n_19 = NULL;
            t = SSLgetAnnotations(h_58);
            u_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_58);
            n_19 = t;
            t = SSLsetAnnotations(n_19, u_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm g_32 = t;
  int h_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_32;
      t = get_config_0_0(t);
      LocalPopChoice(h_32);
    }
  else
    {
      t = g_32;
      t = fetch_1_0(i_10, t);
    }
  t = v_106(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_58 = ATgetFirst((ATermList) t);
      l_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_58 = NULL,q_58 = NULL;
        static ATerm k_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_58)), not_null(q_58));
          return(t);
        }
        t = l_58;
        t = j_0(t);
        if(((p_58 != NULL) && (p_58 != t)))
          _fail(t);
        else
          p_58 = t;
        t = k_58;
        t = h_0(t);
        if(((q_58 != NULL) && (q_58 != t)))
          _fail(t);
        else
          q_58 = t;
        t = l_58;
        t = reverse_acc_2_0(h_0, k_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_13;
      t = j_0(t);
    }
  return(t);
}
static ATerm q_7 (ATerm e_55, ATerm f_55, ATerm t)
{
  t = SSL_table_get(e_55, f_55);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,p_19 = NULL;
  w_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_58);
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_58);
  p_19 = t;
  t = SSLsetAnnotations(p_19, u_58);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_58), term_k_32);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL;
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_31;
      t = get_config_0_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      t = fetch_1_0(m_10, t);
    }
  t = term_n_32;
  t = echo_0_0(t);
  t = term_w_30;
  s_58 = t;
  t = term_z_30;
  t_58 = t;
  t = term_o_32;
  t = q_7(s_58, t_58, t);
  t = reverse_acc_2_0(_id, n_10, t);
  t = map_1_0(o_10, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL,c_59 = NULL;
  a_59 = t;
  {
    ATerm p_32 = t;
    int q_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_59;
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
            t = a_59;
          }
        LocalPopChoice(q_32);
      }
    else
      {
        t = p_32;
        t = (ATerm) ATinsert(ATempty, a_59);
      }
  }
  b_59 = t;
  t = term_p_28;
  c_59 = t;
  t = SSL_printnl(c_59, b_59);
  t = a_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_31;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm g_59 = NULL,h_59 = NULL;
  t = term_t_32;
  g_59 = t;
  t = term_j_13;
  h_59 = t;
  t = term_u_32;
  t = t_7(g_59, h_59, t);
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_v_32;
  return(t);
}
static ATerm t_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm i_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL;
  t = term_t_32;
  q_59 = t;
  t = term_j_13;
  r_59 = t;
  t = term_u_32;
  t = t_7(q_59, r_59, t);
  t = term_w_32;
  i_59 = t;
  t = term_j_13;
  p_59 = t;
  t = term_x_32;
  t = t_7(i_59, p_59, t);
  t = term_y_32;
  return(t);
}
static ATerm w_10 (ATerm t)
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
      t = Option_3_0(q_10, r_10, s_10, t);
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      t = Option_3_0(t_10, u_10, w_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,b_60 = NULL,c_60 = NULL,r_19 = NULL;
  w_59 = t;
  {
    ATerm c_33 = t;
    int d_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_33;
        t = y_108(t);
        LocalPopChoice(d_33);
      }
    else
      {
        t = c_33;
      }
  }
  t = w_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_59 = ATgetFirst((ATermList) t);
      z_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_59);
  x_59 = t;
  t = term_n_31;
  c_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_31, y_59);
  t = t_7(c_60, y_59, t);
  t = z_59;
  {
    static ATerm q_60 (ATerm t)
    {
      ATerm i_33 = t;
      int j_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_33 = t;
          int o_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_60 = NULL;
              f_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_60;
              LocalPopChoice(o_33);
            }
          else
            {
              t = n_33;
              t = y_108(t);
              t = Cons_2_0(_id, q_60, t);
            }
          LocalPopChoice(j_33);
        }
      else
        {
          t = i_33;
          {
            ATerm m_60 = NULL,n_60 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_60 = ATgetFirst((ATermList) t);
                n_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_60), (ATerm) ATmakeAppl(sym_Undefined_1, m_60));
          }
        }
      return(t);
    }
    t = q_60(t);
  }
  b_60 = t;
  t = (ATerm) ATinsert(CheckATermList(b_60), (ATerm) ATmakeAppl(sym_Program_1, y_59));
  r_19 = t;
  t = SSLsetAnnotations(r_19, x_59);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm c_61 = NULL;
  c_61 = t;
  if(match_string(t, "--help"))
    {
      t = c_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_61;
        }
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL;
  t = term_i_32;
  d_61 = t;
  t = term_j_13;
  e_61 = t;
  t = term_p_33;
  t = t_7(d_61, e_61, t);
  t = term_q_33;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  t = term_s_33;
  return(t);
}
static ATerm f_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL;
  x_60 = t;
  t = term_w_30;
  z_60 = t;
  t = term_z_30;
  a_61 = t;
  t = (ATerm) ATempty;
  b_61 = t;
  t = SSL_table_put(z_60, a_61, b_61);
  t = x_60;
  {
    static ATerm x_10 (ATerm t)
    {
      ATerm u_33 = t;
      int v_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_108(t);
          LocalPopChoice(v_33);
        }
      else
        {
          t = u_33;
          {
            ATerm w_33 = t;
            int x_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_11, d_11, e_11, t);
                LocalPopChoice(x_33);
              }
            else
              {
                t = w_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_10, t);
  }
  {
    ATerm y_33 = t;
    int z_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_61 = NULL;
        l_61 = t;
        {
          ATerm a_34 = t;
          int b_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_17 = NULL;
              t = l_61;
              {
                ATerm e_34 = t;
                int f_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_32;
                    t = get_config_0_0(t);
                    LocalPopChoice(f_34);
                  }
                else
                  {
                    t = e_34;
                    t = fetch_1_0(f_11, t);
                  }
              }
              t = l_61;
              t = default_system_usage_0_0(t);
              t = term_j_30;
              m_17 = t;
              t = SSL_exit(m_17);
              LocalPopChoice(b_34);
            }
          else
            {
              t = a_34;
              {
                ATerm u_17 = NULL;
                t = term_t_32;
                t = get_config_0_0(t);
                t = l_61;
                t = default_system_about_0_0(t);
                t = term_j_30;
                u_17 = t;
                t = SSL_exit(u_17);
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
              ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL;
              static ATerm i_11 (ATerm t)
              {
                ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,t_19 = NULL;
                r_61 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    q_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(r_61);
                p_61 = t;
                t = q_61;
                if(((v_60 != NULL) && (v_60 != t)))
                  _fail(t);
                else
                  v_60 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, q_61);
                t_19 = t;
                t = SSLsetAnnotations(t_19, p_61);
                return(t);
              }
              t = fetch_1_0(i_11, t);
              t = term_l_13;
              n_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_60)), term_k_34);
              o_61 = t;
              t = SSL_printnl(n_61, o_61);
              t = (ATerm) ATmakeAppl(sym__2, term_l_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_60)), term_k_34));
              t = default_system_usage_0_0(t);
              t = term_s_13;
              m_61 = t;
              t = SSL_exit(m_61);
              LocalPopChoice(j_34);
            }
          else
            {
              t = g_34;
            }
        }
      }
  }
  w_60 = t;
  t = term_w_30;
  y_60 = t;
  t = SSL_table_destroy(y_60);
  t = w_60;
  return(t);
}
ATerm option_wrap_4_0 (ATerm x_106 (ATerm), ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t)
{
  ATerm w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL;
  t = parse_options_1_0(x_106, t);
  w_61 = t;
  t = term_l_34;
  z_61 = t;
  t = SSL_table_create(z_61);
  t = term_l_34;
  x_61 = t;
  t = term_m_34;
  y_61 = t;
  t = SSL_table_put(x_61, y_61, w_61);
  t = w_61;
  t = z_106(t);
  {
    ATerm n_34 = t;
    int q_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(y_106, t);
        LocalPopChoice(q_34);
      }
    else
      {
        t = n_34;
        {
          ATerm t_34 = t;
          int v_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_34);
            }
          else
            {
              t = t_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = if_verbose2_1_0(p_12, t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm a_62 = NULL,b_62 = NULL;
  t = term_w_34;
  a_62 = t;
  t = term_j_13;
  b_62 = t;
  t = term_x_34;
  t = t_7(a_62, b_62, t);
  t = term_y_34;
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = term_z_34;
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL;
  c_62 = t;
  t = term_n_31;
  t = get_config_0_0(t);
  d_62 = t;
  t = term_l_13;
  e_62 = t;
  t = (ATerm) ATinsert(ATempty, d_62);
  f_62 = t;
  t = SSL_printnl(e_62, f_62);
  t = c_62;
  return(t);
}
ATerm iowrap_3_0 (ATerm g_106 (ATerm), ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t)
{
  static ATerm j_11 (ATerm t)
  {
    ATerm a_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_106(t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = a_35;
        {
          ATerm f_35 = t;
          int g_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(g_35);
            }
          else
            {
              t = f_35;
              {
                ATerm h_35 = t;
                int k_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(k_35);
                  }
                else
                  {
                    t = h_35;
                    {
                      ATerm n_35 = t;
                      int o_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_11, u_11, m_12, t);
                          LocalPopChoice(o_35);
                        }
                      else
                        {
                          t = n_35;
                          {
                            ATerm p_35 = t;
                            int u_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(u_35);
                              }
                            else
                              {
                                t = p_35;
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
  static ATerm n_11 (ATerm t)
  {
    ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL;
    h_62 = t;
    {
      ATerm v_35 = t;
      int w_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm q_12 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_62 != NULL) && (g_62 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_12, t);
          LocalPopChoice(w_35);
        }
      else
        {
          t = v_35;
          t = term_x_35;
          g_62 = t;
        }
    }
    t = not_null(g_62);
    t = ReadFromFile_0_0(t);
    i_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_62, i_62);
    t = apply_strategy_1_0(g_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(j_11, i_106, m_11, n_11, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,z_19 = NULL,y_19 = NULL,x_19 = NULL,v_19 = NULL;
  x_62 = t;
  if(match_cons(t, sym__2))
    {
      k_62 = ATgetArgument(t, 0);
      l_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_62);
  j_62 = t;
  t = l_62;
  if(match_cons(t, sym_Specification_1))
    {
      n_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_62);
  m_62 = t;
  t = n_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_62 = ATgetFirst((ATermList) t);
      r_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_62);
  p_62 = t;
  t = q_62;
  if(match_cons(t, sym_Signature_1))
    {
      v_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_62);
  u_62 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, v_62);
  v_19 = t;
  t = SSLsetAnnotations(v_19, u_62);
  w_62 = t;
  t = r_62;
  t = Cons_2_0(x_12, z_12, t);
  s_62 = t;
  t = (ATerm) ATinsert(CheckATermList(s_62), w_62);
  x_19 = t;
  t = SSLsetAnnotations(x_19, p_62);
  t_62 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_62);
  y_19 = t;
  t = SSLsetAnnotations(y_19, m_62);
  o_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_62, o_62);
  z_19 = t;
  t = SSLsetAnnotations(z_19, j_62);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,w_19 = NULL;
  b_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_63);
  y_62 = t;
  t = z_62;
  t = map_1_0(a_13, t);
  a_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_63);
  w_19 = t;
  t = SSLsetAnnotations(w_19, y_62);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  t = scope_2_0(b_13, h_13, t);
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = term_b_14;
  return(t);
}
static ATerm h_13 (ATerm t)
{
  t = scope_2_0(i_13, cp_0_0, t);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = term_t_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(w_12, _fail, default_usage_0_0, t);
  return(t);
}
