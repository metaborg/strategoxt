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
}
ATerm term_l_35;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_g_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_z_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_e_33;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_f_32;
ATerm term_c_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_d_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_z_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_a_30;
ATerm term_z_29;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_p_29;
ATerm term_o_29;
ATerm term_a_29;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_d_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_n_25;
ATerm term_s_24;
ATerm term_n_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_v_19;
ATerm term_p_19;
ATerm term_u_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_y_12;
ATerm term_x_12;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Binding", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("CurrentTerm", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_o_13);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_h_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym__2, term_p_13, (ATerm) ATempty);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("no match with current term: ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("strat: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("current: ", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_29));
  term_o_29 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_x_29);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_29);
  ATprotect(&(term_a_30));
  term_a_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym__2, term_c_30, term_x_12);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_c_31);
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_v_31);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym__2, term_n_30, term_p_30);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym__2, term_o_32, term_x_12);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(sym__2, term_r_32, term_x_12);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(sym__2, term_v_31, term_x_12);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_g_20, term_o_32);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym__2, term_n_34, term_x_12);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm e_6 (ATerm k_82 (ATerm), ATerm f_21, ATerm g_21, ATerm t);
static ATerm v_0 (ATerm t);
static ATerm f_6 (ATerm i_82 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm exec_maybe_1_0 (ATerm b_82 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
static ATerm h_6 (ATerm l_82 (ATerm), ATerm t);
static ATerm i_2 (ATerm t);
static ATerm a_8 (ATerm x_4, ATerm y_4, ATerm b_5, ATerm t);
ATerm isect_CurrentTerm_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm n_11 (ATerm h_9, ATerm n_9, ATerm p_9, ATerm t);
ATerm isect_Binding_0_0 (ATerm t);
static ATerm i_6 (ATerm z_54, ATerm y_54, ATerm t);
ATerm save_CurrentTerm_0_0 (ATerm t);
ATerm table_getlist_0_0 (ATerm t);
ATerm save_Binding_0_0 (ATerm t);
ATerm prop_abstract_choice_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t);
ATerm prop_choice_1_0 (ATerm o_82 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm prop_traversal_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm prop_call_1_0 (ATerm m_0 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm j_6 (ATerm j_82 (ATerm), ATerm a_21, ATerm t);
static ATerm q_6 (ATerm t);
ATerm prop_build_0_0 (ATerm t);
static ATerm k_6 (ATerm x_103 (ATerm), ATerm s_43, ATerm q_43, ATerm t);
ATerm oncetd_1_0 (ATerm o_85 (ATerm), ATerm t);
ATerm debug_1_0 (ATerm l_90 (ATerm), ATerm t);
ATerm if_verbose3_1_0 (ATerm g_106 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm l_6 (ATerm t_21, ATerm u_21, ATerm t);
ATerm lookup_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm t);
static ATerm w_6 (ATerm v_115 (ATerm), ATerm t_60, ATerm u_60, ATerm w_60, ATerm v_60, ATerm t);
ATerm at_end_1_0 (ATerm n_91 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm k_27 (ATerm u_26, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm p_6 (ATerm c_647, ATerm h_647, ATerm v_61, ATerm t);
ATerm while_not_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t);
ATerm for_3_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t);
static ATerm t_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm u_39 (ATerm b_34, ATerm d_34, ATerm h_34, ATerm t);
static ATerm v_39 (ATerm z_34, ATerm a_35, ATerm c_35, ATerm t);
static ATerm y_39 (ATerm t_35, ATerm v_35, ATerm w_35, ATerm t);
static ATerm z_39 (ATerm j_36, ATerm k_36, ATerm m_36, ATerm t);
static ATerm c_40 (ATerm w_36, ATerm z_36, ATerm c_37, ATerm t);
static ATerm x_7 (ATerm t);
ATerm prop_pattern_match_0_0 (ATerm t);
ATerm CurrentTerm_0_0 (ATerm t);
static ATerm z_6 (ATerm h_54, ATerm i_54, ATerm t);
ATerm Binding_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm c_86 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
ATerm prop_match_0_0 (ATerm t);
ATerm cp_0_0 (ATerm t);
static ATerm a_7 (ATerm b_54, ATerm c_54, ATerm t);
ATerm end_scope_1_0 (ATerm u_103 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_90 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t);
static ATerm c_7 (ATerm i_39, ATerm j_39, ATerm t);
static ATerm d_7 (ATerm d_24, ATerm e_24, ATerm t);
static ATerm f_7 (ATerm n_90 (ATerm), ATerm d_169, ATerm j_24, ATerm t);
static ATerm e_7 (ATerm z_23, ATerm a_24, ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm w_107 (ATerm), ATerm t);
static ATerm r_49 (ATerm l_49, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_7 (ATerm f_24, ATerm t);
static ATerm h_7 (ATerm b_38, ATerm c_38, ATerm t);
static ATerm i_7 (ATerm k_39, ATerm l_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_51 (ATerm b_50, ATerm t);
static ATerm h_51 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t);
static ATerm i_51 (ATerm t_50, ATerm u_50, ATerm v_50, ATerm t);
static ATerm j_7 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_91 (ATerm), ATerm t);
static ATerm m_7 (ATerm n_55, ATerm o_55, ATerm t);
ATerm if_verbose2_1_0 (ATerm f_106 (ATerm), ATerm t);
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
static ATerm b_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_7 (ATerm b_49, ATerm c_49, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t);
static ATerm i_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_7 (ATerm w_53, ATerm x_53, ATerm v_53, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_7 (ATerm e_42, ATerm f_42, ATerm t);
ATerm foldr_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_106 (ATerm), ATerm t);
static ATerm x_9 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm need_help_1_0 (ATerm u_108 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm h_10 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm x_110 (ATerm), ATerm t);
static ATerm a_11 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm parse_options_1_0 (ATerm w_110 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t);
static ATerm h_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm o_11 (ATerm t);
ATerm iowrap_3_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm t);
static ATerm p_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
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
  t = term_x_12;
  t = whoami_0_0(t);
  z_0 = t;
  t = term_y_12;
  d_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_13), z_0), term_d_13);
  f_1 = t;
  t = SSL_printnl(d_1, f_1);
  t = term_f_13;
  c_1 = t;
  t = SSL_exit(c_1);
  t = y_0;
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_i_13;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm t_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_1 = ATgetArgument(t, 0);
      {
        ATerm m_13 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
  w_1 = t;
  t = term_o_13;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_1), term_o_13);
  t = k_6(s_0, w_1, x_1, t);
  t = v_1;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = term_i_13;
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm e_6 (ATerm k_82 (ATerm), ATerm f_21, ATerm g_21, ATerm t)
{
  static ATerm p_0 (ATerm t)
  {
    ATerm g_1 = NULL,i_1 = NULL,j_1 = NULL,l_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,n_0 = NULL;
    g_1 = t;
    t = g_21;
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
    t = term_o_13;
    s_1 = t;
    t = term_u_13;
    t = k_6(t_0, r_1, s_1, t);
    t = p_1;
    t = k_82(t);
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
  t = term_p_13;
  return(t);
}
static ATerm f_6 (ATerm i_82 (ATerm), ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL,z_4 = NULL;
  y_1 = t;
  t = (ATerm) ATempty;
  z_1 = t;
  t = term_o_13;
  a_2 = t;
  t = term_u_13;
  t = k_6(v_0, z_1, a_2, t);
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
  t = exec_maybe_1_0(i_82, t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Not_1, d_2);
  z_4 = t;
  t = SSLsetAnnotations(z_4, b_2);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm exec_maybe_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL,n_2 = NULL;
  g_2 = t;
  t = (ATerm) ATempty;
  m_2 = t;
  t = term_o_13;
  n_2 = t;
  t = term_u_13;
  t = k_6(w_0, m_2, n_2, t);
  t = g_2;
  t = save_Binding_0_0(t);
  e_2 = t;
  t = g_2;
  t = b_82(t);
  f_2 = t;
  t = (ATerm) ATempty;
  k_2 = t;
  t = term_o_13;
  l_2 = t;
  t = term_u_13;
  t = k_6(x_0, k_2, l_2, t);
  t = term_i_13;
  j_2 = t;
  t = SSL_table_destroy(j_2);
  t = term_i_13;
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, e_2);
  t = i_6(h_2, e_2, t);
  t = f_2;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm h_6 (ATerm l_82 (ATerm), ATerm t)
{
  ATerm p_2 = NULL,r_2 = NULL,s_2 = NULL,w_2 = NULL,y_2 = NULL,a_3 = NULL,c_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,m_3 = NULL,b_4 = NULL,g_5 = NULL;
  s_2 = t;
  t = save_Binding_0_0(t);
  r_2 = t;
  t = save_CurrentTerm_0_0(t);
  p_2 = t;
  t = s_2;
  if(match_cons(t, sym_Let_2))
    {
      y_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_2);
  w_2 = t;
  t = y_2;
  {
    static ATerm n_1 (ATerm t)
    {
      ATerm c_4 = NULL,e_4 = NULL,f_4 = NULL,h_4 = NULL,i_4 = NULL;
      c_4 = t;
      t = (ATerm) ATempty;
      h_4 = t;
      t = term_o_13;
      i_4 = t;
      t = term_u_13;
      t = k_6(u_1, h_4, i_4, t);
      t = term_i_13;
      f_4 = t;
      t = SSL_table_destroy(f_4);
      t = term_i_13;
      e_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_i_13, r_2);
      t = i_6(e_4, r_2, t);
      t = c_4;
      t = l_82(t);
      return(t);
    }
    t = map_1_0(n_1, t);
  }
  c_3 = t;
  t = term_p_13;
  b_4 = t;
  t = SSL_table_destroy(b_4);
  t = term_p_13;
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, p_2);
  t = i_6(m_3, p_2, t);
  t = term_i_13;
  g_3 = t;
  t = SSL_table_destroy(g_3);
  t = term_i_13;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, r_2);
  t = i_6(f_3, r_2, t);
  t = a_3;
  t = l_82(t);
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, c_3, e_3);
  g_5 = t;
  t = SSLsetAnnotations(g_5, w_2);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm l_5 = NULL,n_5 = NULL,o_5 = NULL,s_5 = NULL,w_5 = NULL;
  w_5 = t;
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
      t = n_5;
      {
        ATerm w_13 = t;
        int x_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_5 = ATgetFirst((ATermList) t);
                {
                  ATerm a_14 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_13);
            t = o_5;
            {
              ATerm g_14 = t;
              int i_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm j_14 = ATgetArgument(t, 0);
                      s_5 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_14);
                  t = l_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = w_5;
                    }
                  else
                    {
                      ATerm n_14 = t;
                      int o_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_8(l_5, s_5, w_5, t);
                          LocalPopChoice(o_14);
                        }
                      else
                        {
                          t = n_14;
                          t = w_5;
                        }
                    }
                }
              else
                {
                  t = g_14;
                  t = l_5;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = w_5;
                    }
                  else
                    {
                      t = w_5;
                    }
                }
            }
          }
        else
          {
            t = w_13;
            t = l_5;
            if(match_cons(t, sym_Scopes_0))
              {
                t = w_5;
              }
            else
              {
                t = w_5;
              }
          }
      }
    }
  else
    {
      t = w_5;
    }
  return(t);
}
static ATerm a_8 (ATerm x_4, ATerm y_4, ATerm b_5, ATerm t)
{
  t = b_5;
  {
    ATerm s_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_0 = NULL;
        t = term_p_13;
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, x_4);
        t = m_7(q_0, x_4, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_14 = ATgetFirst((ATermList) t);
            if(match_cons(y_14, sym_Defined_2))
              {
                ATerm b_15 = ATgetArgument(y_14, 0);
                if((y_4 != ATgetArgument(y_14, 1)))
                  {
                    _fail(ATgetArgument(y_14, 1));
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
        t = b_5;
        LocalPopChoice(u_14);
      }
    else
      {
        t = s_14;
        t = (ATerm) ATmakeAppl(sym__2, x_4, (ATerm) ATinsert(ATempty, term_o_13));
      }
  }
  return(t);
}
ATerm isect_CurrentTerm_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  t = map_1_0(i_2, t);
  u_4 = t;
  t = term_p_13;
  w_4 = t;
  t = SSL_table_destroy(w_4);
  t = term_p_13;
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, u_4);
  t = i_6(v_4, u_4, t);
  t = u_4;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm i_10 = NULL,l_10 = NULL,m_10 = NULL,q_10 = NULL,y_10 = NULL;
  y_10 = t;
  if(match_cons(t, sym__2))
    {
      i_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
      t = l_10;
      {
        ATerm c_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_10 = ATgetFirst((ATermList) t);
                {
                  ATerm i_15 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            LocalPopChoice(e_15);
            t = m_10;
            {
              ATerm j_15 = t;
              int s_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Defined_2))
                    {
                      ATerm t_15 = ATgetArgument(t, 0);
                      q_10 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(s_15);
                  t = i_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = y_10;
                    }
                  else
                    {
                      ATerm v_15 = t;
                      int x_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = n_11(i_10, q_10, y_10, t);
                          LocalPopChoice(x_15);
                        }
                      else
                        {
                          t = v_15;
                          t = y_10;
                        }
                    }
                }
              else
                {
                  t = j_15;
                  t = i_10;
                  if(match_cons(t, sym_Scopes_0))
                    {
                      t = y_10;
                    }
                  else
                    {
                      t = y_10;
                    }
                }
            }
          }
        else
          {
            t = c_15;
            t = i_10;
            if(match_cons(t, sym_Scopes_0))
              {
                t = y_10;
              }
            else
              {
                t = y_10;
              }
          }
      }
    }
  else
    {
      t = y_10;
    }
  return(t);
}
static ATerm n_11 (ATerm h_9, ATerm n_9, ATerm p_9, ATerm t)
{
  t = p_9;
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_0 = NULL;
        t = term_i_13;
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_13, h_9);
        t = m_7(u_0, h_9, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_16 = ATgetFirst((ATermList) t);
            if(match_cons(a_16, sym_Defined_2))
              {
                ATerm c_16 = ATgetArgument(a_16, 0);
                if((n_9 != ATgetArgument(a_16, 1)))
                  {
                    _fail(ATgetArgument(a_16, 1));
                  }
              }
            else
              _fail(t);
            {
              ATerm b_16 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = p_9;
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = (ATerm) ATmakeAppl(sym__2, h_9, (ATerm) ATinsert(ATempty, term_o_13));
      }
  }
  return(t);
}
ATerm isect_Binding_0_0 (ATerm t)
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  t = map_1_0(j_3, t);
  c_9 = t;
  t = term_i_13;
  e_9 = t;
  t = SSL_table_destroy(e_9);
  t = term_i_13;
  d_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, c_9);
  t = i_6(d_9, c_9, t);
  t = c_9;
  return(t);
}
static ATerm i_6 (ATerm z_54, ATerm y_54, ATerm t)
{
  static ATerm k_3 (ATerm t)
  {
    ATerm s_11 = NULL,t_11 = NULL;
    if(match_cons(t, sym__2))
      {
        s_11 = ATgetArgument(t, 0);
        t_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_table_put(z_54, s_11, t_11);
    t = (ATerm) ATmakeAppl(sym__3, z_54, s_11, t_11);
    return(t);
  }
  t = y_54;
  t = map_1_0(k_3, t);
  return(t);
}
ATerm save_CurrentTerm_0_0 (ATerm t)
{
  t = term_p_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm table_getlist_0_0 (ATerm t)
{
  ATerm x_11 = NULL;
  static ATerm l_3 (ATerm t)
  {
    ATerm y_11 = NULL,z_11 = NULL;
    y_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_11), y_11);
    t = m_7(not_null(x_11), y_11, t);
    z_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_11, z_11);
    return(t);
  }
  if(((x_11 != NULL) && (x_11 != t)))
    _fail(t);
  else
    x_11 = t;
  t = SSL_table_keys(x_11);
  t = map_1_0(l_3, t);
  return(t);
}
ATerm save_Binding_0_0 (ATerm t)
{
  t = term_i_13;
  t = table_getlist_0_0(t);
  return(t);
}
ATerm prop_abstract_choice_2_0 (ATerm p_82 (ATerm), ATerm q_82 (ATerm), ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL,l_12 = NULL,m_12 = NULL;
  g_12 = t;
  t = save_Binding_0_0(t);
  a_12 = t;
  t = save_CurrentTerm_0_0(t);
  b_12 = t;
  t = g_12;
  t = p_82(t);
  f_12 = t;
  t = save_Binding_0_0(t);
  c_12 = t;
  t = term_i_13;
  m_12 = t;
  t = SSL_table_destroy(m_12);
  t = term_i_13;
  l_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, a_12);
  t = i_6(l_12, a_12, t);
  t = a_12;
  t = save_CurrentTerm_0_0(t);
  d_12 = t;
  t = term_p_13;
  i_12 = t;
  t = SSL_table_destroy(i_12);
  t = term_p_13;
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, b_12);
  t = i_6(h_12, b_12, t);
  t = f_12;
  t = q_82(t);
  e_12 = t;
  t = c_12;
  t = isect_Binding_0_0(t);
  t = d_12;
  t = isect_CurrentTerm_0_0(t);
  t = e_12;
  return(t);
}
ATerm prop_choice_1_0 (ATerm o_82 (ATerm), ATerm t)
{
  ATerm q_12 = NULL;
  q_12 = t;
  {
    ATerm d_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Choice_2))
          {
            ATerm q_16 = ATgetArgument(t, 0);
            ATerm r_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(m_16);
        {
          static ATerm y_3 (ATerm t)
          {
            ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,g_13 = NULL,i_5 = NULL;
            g_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                a_13 = ATgetArgument(t, 0);
                b_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_13);
            z_12 = t;
            t = a_13;
            t = o_82(t);
            c_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, c_13, b_13);
            i_5 = t;
            t = SSLsetAnnotations(i_5, z_12);
            return(t);
          }
          static ATerm z_3 (ATerm t)
          {
            ATerm h_13 = NULL,l_13 = NULL,n_13 = NULL,q_13 = NULL,r_13 = NULL,p_5 = NULL;
            r_13 = t;
            if(match_cons(t, sym_Choice_2))
              {
                l_13 = ATgetArgument(t, 0);
                n_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_13);
            h_13 = t;
            t = n_13;
            t = o_82(t);
            q_13 = t;
            t = (ATerm) ATmakeAppl(sym_Choice_2, l_13, q_13);
            p_5 = t;
            t = SSLsetAnnotations(p_5, h_13);
            return(t);
          }
          t = q_12;
          t = prop_abstract_choice_2_0(y_3, z_3, t);
        }
      }
    else
      {
        t = d_16;
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_GChoice_2))
                {
                  ATerm u_16 = ATgetArgument(t, 0);
                  ATerm v_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(t_16);
              {
                static ATerm a_4 (ATerm t)
                {
                  ATerm s_13 = NULL,t_13 = NULL,y_13 = NULL,b_14 = NULL,c_14 = NULL,q_5 = NULL;
                  c_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      t_13 = ATgetArgument(t, 0);
                      y_13 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_14);
                  s_13 = t;
                  t = t_13;
                  t = o_82(t);
                  b_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, b_14, y_13);
                  q_5 = t;
                  t = SSLsetAnnotations(q_5, s_13);
                  return(t);
                }
                static ATerm d_4 (ATerm t)
                {
                  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,h_14 = NULL,k_14 = NULL,t_5 = NULL;
                  k_14 = t;
                  if(match_cons(t, sym_GChoice_2))
                    {
                      e_14 = ATgetArgument(t, 0);
                      f_14 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_14);
                  d_14 = t;
                  t = f_14;
                  t = o_82(t);
                  h_14 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, e_14, h_14);
                  t_5 = t;
                  t = SSLsetAnnotations(t_5, d_14);
                  return(t);
                }
                t = q_12;
                t = prop_abstract_choice_2_0(a_4, d_4, t);
              }
            }
          else
            {
              t = s_16;
              {
                ATerm w_16 = t;
                int x_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        ATerm z_16 = ATgetArgument(t, 0);
                        ATerm d_17 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_16);
                    {
                      static ATerm j_4 (ATerm t)
                      {
                        ATerm l_14 = NULL,m_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,v_5 = NULL;
                        r_14 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            m_14 = ATgetArgument(t, 0);
                            p_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_14);
                        l_14 = t;
                        t = m_14;
                        t = o_82(t);
                        q_14 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, q_14, p_14);
                        v_5 = t;
                        t = SSLsetAnnotations(v_5, l_14);
                        return(t);
                      }
                      static ATerm k_4 (ATerm t)
                      {
                        ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,d_15 = NULL,f_15 = NULL,d_6 = NULL;
                        f_15 = t;
                        if(match_cons(t, sym_LChoice_2))
                          {
                            w_14 = ATgetArgument(t, 0);
                            x_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_15);
                        v_14 = t;
                        t = x_14;
                        t = o_82(t);
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_LChoice_2, w_14, d_15);
                        d_6 = t;
                        t = SSLsetAnnotations(d_6, v_14);
                        return(t);
                      }
                      t = q_12;
                      t = prop_abstract_choice_2_0(j_4, k_4, t);
                    }
                  }
                else
                  {
                    t = w_16;
                    {
                      static ATerm m_4 (ATerm t)
                      {
                        ATerm k_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,u_15 = NULL,w_15 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,n_6 = NULL,g_6 = NULL;
                        h_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            u_15 = ATgetArgument(t, 0);
                            w_15 = ATgetArgument(t, 1);
                            e_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(h_16);
                        r_15 = t;
                        t = u_15;
                        t = o_82(t);
                        f_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_16, w_15, e_16);
                        g_6 = t;
                        t = SSLsetAnnotations(g_6, r_15);
                        g_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            n_15 = ATgetArgument(t, 0);
                            o_15 = ATgetArgument(t, 1);
                            p_15 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(g_16);
                        k_15 = t;
                        t = o_15;
                        t = o_82(t);
                        q_15 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, n_15, q_15, p_15);
                        n_6 = t;
                        t = SSLsetAnnotations(n_6, k_15);
                        return(t);
                      }
                      static ATerm n_4 (ATerm t)
                      {
                        ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,o_16 = NULL,p_16 = NULL,o_6 = NULL;
                        p_16 = t;
                        if(match_cons(t, sym_GuardedLChoice_3))
                          {
                            j_16 = ATgetArgument(t, 0);
                            k_16 = ATgetArgument(t, 1);
                            l_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(p_16);
                        i_16 = t;
                        t = l_16;
                        t = o_82(t);
                        o_16 = t;
                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, j_16, k_16, o_16);
                        o_6 = t;
                        t = SSLsetAnnotations(o_6, i_16);
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
                      t = q_12;
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
  t = term_p_13;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm prop_traversal_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_17 = NULL,a_1 = NULL,b_1 = NULL,e_1 = NULL,h_1 = NULL,k_1 = NULL,m_1 = NULL,m_8 = NULL;
      j_17 = t;
      if(match_cons(t, sym_Cong_2))
        {
          ATerm m_17 = ATgetArgument(t, 0);
          ATerm r_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      a_1 = t;
      t = term_o_13;
      b_1 = t;
      t = term_u_13;
      t = k_6(o_4, a_1, b_1, t);
      t = j_17;
      if(match_cons(t, sym_Cong_2))
        {
          h_1 = ATgetArgument(t, 0);
          k_1 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_17);
      e_1 = t;
      t = k_1;
      {
        static ATerm p_4 (ATerm t)
        {
          t = exec_maybe_1_0(o_0, t);
          return(t);
        }
        t = map_1_0(p_4, t);
      }
      m_1 = t;
      t = (ATerm) ATmakeAppl(sym_Cong_2, h_1, m_1);
      m_8 = t;
      t = SSLsetAnnotations(m_8, e_1);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
        static ATerm s_4 (ATerm t)
        {
          t = exec_maybe_1_0(o_0, t);
          return(t);
        }
        ATerm w_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_All_1))
              {
                ATerm g_18 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            LocalPopChoice(x_17);
          }
        else
          {
            t = w_17;
            {
              ATerm q_17 = NULL;
              q_17 = t;
              {
                ATerm h_18 = t;
                int i_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_One_1))
                      {
                        ATerm j_18 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_18);
                    t = q_17;
                  }
                else
                  {
                    t = h_18;
                    {
                      ATerm k_18 = t;
                      int l_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Some_1))
                            {
                              ATerm m_18 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(l_18);
                          t = q_17;
                        }
                      else
                        {
                          t = k_18;
                          {
                            ATerm n_18 = t;
                            int p_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_Thread_1))
                                  {
                                    ATerm s_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(p_18);
                                t = q_17;
                              }
                            else
                              {
                                t = n_18;
                                if(match_cons(t, sym_Bagof_1))
                                  {
                                    ATerm t_18 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = q_17;
                              }
                          }
                        }
                    }
                  }
              }
            }
          }
        n_17 = t;
        t = (ATerm) ATempty;
        o_17 = t;
        t = term_o_13;
        p_17 = t;
        t = term_u_13;
        t = k_6(q_4, o_17, p_17, t);
        t = n_17;
        t = SRTS_one(s_4, t);
      }
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm d_3 = NULL,h_3 = NULL,i_3 = NULL,a_10 = NULL;
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
  a_10 = t;
  t = SSLsetAnnotations(a_10, d_3);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,g_10 = NULL;
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
  g_10 = t;
  t = SSLsetAnnotations(g_10, v_3);
  return(t);
}
ATerm prop_call_1_0 (ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_20 = NULL;
  c_20 = t;
  {
    ATerm v_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_PrimT_3))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            ATerm d_19 = ATgetArgument(t, 1);
            ATerm e_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(x_18);
        {
          ATerm o_2 = NULL,q_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,x_2 = NULL,z_2 = NULL,b_3 = NULL,d_10 = NULL;
          t = (ATerm) ATempty;
          o_2 = t;
          t = term_o_13;
          q_2 = t;
          t = term_u_13;
          t = k_6(t_4, o_2, q_2, t);
          t = c_20;
          if(match_cons(t, sym_PrimT_3))
            {
              u_2 = ATgetArgument(t, 0);
              v_2 = ATgetArgument(t, 1);
              x_2 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_20);
          t_2 = t;
          t = v_2;
          {
            static ATerm d_5 (ATerm t)
            {
              t = exec_maybe_1_0(m_0, t);
              return(t);
            }
            t = map_1_0(d_5, t);
          }
          z_2 = t;
          t = x_2;
          t = alltd_1_0(e_5, t);
          b_3 = t;
          t = (ATerm) ATmakeAppl(sym_PrimT_3, u_2, z_2, b_3);
          d_10 = t;
          t = SSLsetAnnotations(d_10, t_2);
        }
      }
    else
      {
        t = v_18;
        {
          ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,r_11 = NULL;
          if(match_cons(t, sym_CallT_3))
            {
              ATerm f_19 = ATgetArgument(t, 0);
              ATerm i_19 = ATgetArgument(t, 1);
              ATerm j_19 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATempty;
          n_3 = t;
          t = term_o_13;
          o_3 = t;
          t = term_u_13;
          t = k_6(f_5, n_3, o_3, t);
          t = c_20;
          if(match_cons(t, sym_CallT_3))
            {
              q_3 = ATgetArgument(t, 0);
              r_3 = ATgetArgument(t, 1);
              s_3 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_20);
          p_3 = t;
          t = r_3;
          {
            static ATerm h_5 (ATerm t)
            {
              t = exec_maybe_1_0(m_0, t);
              return(t);
            }
            t = map_1_0(h_5, t);
          }
          t_3 = t;
          t = s_3;
          t = alltd_1_0(k_5, t);
          u_3 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, q_3, t_3, u_3);
          r_11 = t;
          t = SSLsetAnnotations(r_11, p_3);
        }
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_i_13;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm d_21 = NULL,i_21 = NULL,n_21 = NULL;
  d_21 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_21);
  i_21 = t;
  t = term_o_13;
  n_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, d_21), term_o_13);
  t = k_6(y_5, i_21, n_21, t);
  t = d_21;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_i_13;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm j_6 (ATerm j_82 (ATerm), ATerm a_21, ATerm t)
{
  static ATerm u_5 (ATerm t)
  {
    ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,v_20 = NULL,w_20 = NULL,y_20 = NULL,y_16 = NULL;
    q_20 = t;
    t = a_21;
    t = map_1_0(x_5, t);
    t = q_20;
    if(match_cons(t, sym_Scope_2))
      {
        s_20 = ATgetArgument(t, 0);
        v_20 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_20);
    r_20 = t;
    t = v_20;
    t = j_82(t);
    w_20 = t;
    t = (ATerm) ATmakeAppl(sym_Scope_2, s_20, w_20);
    y_16 = t;
    t = SSLsetAnnotations(y_16, r_20);
    y_20 = t;
    {
      ATerm m_19 = t;
      int n_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_21 = NULL,v_21 = NULL,g_22 = NULL;
          t = CurrentTerm_0_0(t);
          {
            static ATerm z_5 (ATerm t)
            {
              ATerm i_22 = NULL;
              static ATerm c_6 (ATerm t)
              {
                if(((i_22 != NULL) && (i_22 != t)))
                  _fail(t);
                else
                  i_22 = t;
                return(t);
              }
              if(match_cons(t, sym_Var_1))
                {
                  if(((i_22 != NULL) && (i_22 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    i_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = a_21;
              t = fetch_1_0(c_6, t);
              return(t);
            }
            t = oncetd_1_0(z_5, t);
          }
          r_21 = t;
          t = (ATerm) ATempty;
          v_21 = t;
          t = term_o_13;
          g_22 = t;
          t = term_u_13;
          t = k_6(m_6, v_21, g_22, t);
          t = r_21;
          LocalPopChoice(n_19);
        }
      else
        {
          t = m_19;
        }
    }
    t = y_20;
    return(t);
  }
  t = scope_2_0(r_5, u_5, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm prop_build_0_0 (ATerm t)
{
  ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL,c_17 = NULL;
  f_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      c_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_23);
  a_23 = t;
  t = c_23;
  t = alltd_1_0(Binding_0_0, t);
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, d_23);
  c_17 = t;
  t = SSLsetAnnotations(c_17, a_23);
  e_23 = t;
  if(match_cons(t, sym_Build_1))
    {
      x_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_19, x_22);
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_p_19, x_22));
  t = k_6(q_6, y_22, z_22, t);
  t = e_23;
  return(t);
}
static ATerm k_6 (ATerm x_103 (ATerm), ATerm s_43, ATerm q_43, ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,p_23 = NULL,t_23 = NULL;
  n_23 = t;
  t = x_103(t);
  k_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_23, s_43, q_43);
  t = n_7(k_23, s_43, q_43, t);
  {
    ATerm r_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL;
        t = term_v_19;
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_23, term_v_19);
        t = m_7(k_23, u_23, t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = r_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_23 = ATgetFirst((ATermList) t);
      m_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_19;
  p_23 = t;
  t = (ATerm) ATinsert(CheckATermList(m_23), (ATerm) ATinsert(CheckATermList(l_23), s_43));
  t_23 = t;
  t = SSL_table_put(k_23, p_23, t_23);
  t = n_23;
  return(t);
}
ATerm oncetd_1_0 (ATerm o_85 (ATerm), ATerm t)
{
  static ATerm v_23 (ATerm t)
  {
    ATerm b_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_85(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = b_20;
        t = SRTS_one(v_23, t);
      }
    return(t);
  }
  t = v_23(t);
  return(t);
}
ATerm debug_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm w_23 = NULL,y_23 = NULL,b_24 = NULL,c_24 = NULL;
  w_23 = t;
  t = l_90(t);
  y_23 = t;
  t = term_y_12;
  b_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_23), y_23);
  c_24 = t;
  t = SSL_printnl(b_24, c_24);
  t = w_23;
  return(t);
}
ATerm if_verbose3_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm h_24 = NULL;
  h_24 = t;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_24 = NULL,m_24 = NULL,p_24 = NULL;
        t = term_g_20;
        m_24 = t;
        t = term_h_20;
        p_24 = t;
        t = term_i_20;
        t = m_7(m_24, p_24, t);
        l_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_24, term_j_20);
        t = geq_0_0(t);
        t = h_24;
        t = g_106(t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        t = h_24;
      }
  }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm b_25 = NULL;
  b_25 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = b_25;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm k_20 = ATgetArgument(t, 0);
          ATerm l_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_25;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_i_13;
  return(t);
}
static ATerm l_6 (ATerm t_21, ATerm u_21, ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL,a_25 = NULL;
  y_24 = t;
  t = u_21;
  {
    ATerm m_20 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(r_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_20;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, t_21);
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_20, u_21);
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_21), (ATerm) ATmakeAppl(sym_Defined_2, term_n_20, u_21));
  t = k_6(s_6, z_24, a_25, t);
  t = y_24;
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,q_28 = NULL,r_28 = NULL;
  i_28 = t;
  if(match_cons(t, sym__2))
    {
      j_28 = ATgetArgument(t, 0);
      k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_28;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_28 = ATgetFirst((ATermList) t);
      r_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_28;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_28;
            if((j_28 != t))
              {
                _fail(t);
              }
            t = h_28;
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = (ATerm) ATmakeAppl(sym__2, j_28, r_28);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_28, r_28);
      t = lookup_0_0(t);
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(((ATgetType(t_20) != AT_LIST) || !(ATisEmpty(t_20))))
        _fail(t);
      {
        ATerm u_20 = ATgetArgument(t, 1);
        if(((ATgetType(u_20) != AT_LIST) || !(ATisEmpty(u_20))))
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
  ATerm b_32 = NULL,d_32 = NULL,e_32 = NULL,h_32 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_20 = ATgetArgument(t, 0);
      if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
        {
          b_32 = ATgetFirst((ATermList) x_20);
          d_32 = (ATerm) ATgetNext((ATermList) x_20);
        }
      else
        _fail(t);
      {
        ATerm z_20 = ATgetArgument(t, 1);
        if(((ATgetType(z_20) == AT_LIST) && !(ATisEmpty(z_20))))
          {
            e_32 = ATgetFirst((ATermList) z_20);
            h_32 = (ATerm) ATgetNext((ATermList) z_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_32, e_32), (ATerm) ATmakeAppl(sym__2, d_32, h_32));
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  if(match_cons(t, sym__2))
    {
      i_32 = ATgetArgument(t, 0);
      j_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_32), i_32);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm j_31 = NULL,l_31 = NULL,p_31 = NULL,t_31 = NULL;
  j_31 = t;
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_21 = ATgetArgument(t, 0);
            ATerm h_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(c_21);
        t = j_31;
      }
    else
      {
        t = b_21;
        {
          ATerm a_32 = NULL;
          if(match_cons(t, sym__3))
            {
              l_31 = ATgetArgument(t, 0);
              p_31 = ATgetArgument(t, 1);
              t_31 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, l_31, p_31);
          t = genzip_4_0(t_6, u_6, v_6, _id, t);
          a_32 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_32, t_31);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm b_111 (ATerm), ATerm c_111 (ATerm), ATerm t)
{
  ATerm m_32 = NULL,v_32 = NULL;
  static ATerm x_6 (ATerm t)
  {
    ATerm r_4 = NULL;
    t = b_111(t);
    r_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_4, not_null(v_32));
    t = lookup_0_0(t);
    t = c_111(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((v_32 != NULL) && (v_32 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_32;
  t = alltd_1_0(x_6, t);
  return(t);
}
static ATerm w_6 (ATerm v_115 (ATerm), ATerm t_60, ATerm u_60, ATerm w_60, ATerm v_60, ATerm t)
{
  ATerm y_32 = NULL,b_33 = NULL;
  t = t_60;
  t = v_115(t);
  t = (ATerm) ATmakeAppl(sym__2, t_60, u_60);
  {
    ATerm j_21 = t;
    if((PushChoice() == 0))
      {
        ATerm c_33 = NULL,d_33 = NULL;
        if(match_cons(t, sym__2))
          {
            c_33 = ATgetArgument(t, 0);
            d_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_33;
        {
          static ATerm y_6 (ATerm t)
          {
            if((c_33 != t))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1_0(y_6, t);
        }
        t = (ATerm) ATmakeAppl(sym__2, c_33, d_33);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, t_60, u_60)), (ATerm) ATmakeAppl(sym__2, v_60, w_60));
  t = substitute_2_0(v_115, _id, t);
  if(match_cons(t, sym__2))
    {
      y_32 = ATgetArgument(t, 0);
      b_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_33, (ATerm) ATinsert(CheckATermList(y_32), (ATerm) ATmakeAppl(sym__2, t_60, u_60)));
  return(t);
}
ATerm at_end_1_0 (ATerm n_91 (ATerm), ATerm t)
{
  static ATerm p_26 (ATerm t)
  {
    ATerm k_26 = NULL,m_26 = NULL,o_26 = NULL;
    o_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_26 = ATgetFirst((ATermList) t);
        m_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_4 = NULL,l_4 = NULL,f_17 = NULL;
          t = SSLgetAnnotations(o_26);
          g_4 = t;
          t = m_26;
          t = p_26(t);
          l_4 = t;
          t = (ATerm) ATinsert(CheckATermList(l_4), k_26);
          f_17 = t;
          t = SSLsetAnnotations(f_17, g_4);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_26;
        t = n_91(t);
      }
    return(t);
  }
  t = p_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL,r_25 = NULL;
  o_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_25;
    }
  else
    {
      static ATerm b_7 (ATerm t)
      {
        t = not_null(r_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_25 = ATgetFirst((ATermList) t);
          if(((r_25 != NULL) && (r_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_25;
      t = at_end_1_0(b_7, t);
    }
  return(t);
}
static ATerm k_27 (ATerm u_26, ATerm t)
{
  ATerm x_26 = NULL;
  t = SSL_explode_term(u_26);
  if(match_cons(t, sym__2))
    {
      ATerm k_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,e_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym__2))
    {
      a_27 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
      {
        ATerm l_21 = t;
        int m_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_7 (ATerm t)
            {
              t = b_27;
              return(t);
            }
            t = a_27;
            t = at_end_1_0(l_7, t);
            LocalPopChoice(m_21);
          }
        else
          {
            t = l_21;
            t = k_27(e_27, t);
          }
      }
    }
  else
    {
      t = k_27(e_27, t);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm a_93 (ATerm), ATerm b_93 (ATerm), ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm t)
{
  static ATerm x_30 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_93(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
          ATerm d_30 = NULL,e_30 = NULL,k_30 = NULL,o_30 = NULL,v_30 = NULL,w_30 = NULL,v_17 = NULL;
          t = b_93(t);
          w_30 = t;
          if(match_cons(t, sym__2))
            {
              e_30 = ATgetArgument(t, 0);
              k_30 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_30);
          d_30 = t;
          t = e_30;
          t = d_93(t);
          o_30 = t;
          t = k_30;
          t = x_30(t);
          v_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_30, v_30);
          v_17 = t;
          t = SSLsetAnnotations(v_17, d_30);
          t = c_93(t);
        }
      }
    return(t);
  }
  t = x_30(t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_21 = ATgetArgument(t, 0);
      if(((ATgetType(q_21) != AT_LIST) || !(ATisEmpty(q_21))))
        _fail(t);
      {
        ATerm s_21 = ATgetArgument(t, 1);
        if(((ATgetType(s_21) != AT_LIST) || !(ATisEmpty(s_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,w_27 = NULL,x_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_21 = ATgetArgument(t, 0);
      if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
        {
          s_27 = ATgetFirst((ATermList) w_21);
          t_27 = (ATerm) ATgetNext((ATermList) w_21);
        }
      else
        _fail(t);
      {
        ATerm x_21 = ATgetArgument(t, 1);
        if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
          {
            w_27 = ATgetFirst((ATermList) x_21);
            x_27 = (ATerm) ATgetNext((ATermList) x_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_27, w_27), (ATerm) ATmakeAppl(sym__2, t_27, x_27));
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm y_27 = NULL,z_27 = NULL;
  if(match_cons(t, sym__2))
    {
      y_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_27), y_27);
  return(t);
}
static ATerm p_6 (ATerm c_647, ATerm h_647, ATerm v_61, ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  t = SSL_explode_term(h_647);
  if(match_cons(t, sym__2))
    {
      n_27 = ATgetArgument(t, 0);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_647);
  if(match_cons(t, sym__2))
    {
      if((n_27 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_27, p_27);
  t = genzip_4_0(o_7, r_7, s_7, _id, t);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_27, v_61);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t)
{
  static ATerm f_33 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_84(t);
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = c_84(t);
        t = f_33(t);
      }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm for_3_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm g_84 (ATerm), ATerm t)
{
  t = e_84(t);
  t = while_not_2_0(f_84, g_84, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_33, (ATerm) ATempty);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm x_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      if(((ATgetType(a_22) != AT_LIST) || !(ATisEmpty(a_22))))
        _fail(t);
      x_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_33;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm g_38 = NULL,j_38 = NULL,k_38 = NULL,l_38 = NULL,p_38 = NULL,t_38 = NULL,u_38 = NULL;
  p_38 = t;
  if(match_cons(t, sym__2))
    {
      t_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_38 = ATgetFirst((ATermList) t);
      l_38 = (ATerm) ATgetNext((ATermList) t);
      t = g_38;
      if(match_cons(t, sym__2))
        {
          j_38 = ATgetArgument(t, 0);
          k_38 = ATgetArgument(t, 1);
          {
            ATerm b_22 = t;
            int c_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_39(t_38, u_38, p_38, t);
                LocalPopChoice(c_22);
              }
            else
              {
                t = b_22;
                {
                  ATerm d_22 = t;
                  int e_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_38;
                      t = w_6(x_7, j_38, k_38, l_38, u_38, t);
                      LocalPopChoice(e_22);
                    }
                  else
                    {
                      t = d_22;
                      {
                        ATerm f_22 = t;
                        int h_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = v_39(t_38, u_38, p_38, t);
                            LocalPopChoice(h_22);
                          }
                        else
                          {
                            t = f_22;
                            {
                              ATerm j_22 = t;
                              int k_22 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = y_39(t_38, u_38, p_38, t);
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
                                        t = z_39(t_38, u_38, p_38, t);
                                        LocalPopChoice(m_22);
                                      }
                                    else
                                      {
                                        t = l_22;
                                        t = c_40(t_38, u_38, p_38, t);
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
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_39(t_38, u_38, p_38, t);
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              {
                ATerm p_22 = t;
                int q_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = v_39(t_38, u_38, p_38, t);
                    LocalPopChoice(q_22);
                  }
                else
                  {
                    t = p_22;
                    {
                      ATerm r_22 = t;
                      int s_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_39(t_38, u_38, p_38, t);
                          LocalPopChoice(s_22);
                        }
                      else
                        {
                          t = r_22;
                          {
                            ATerm t_22 = t;
                            int u_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = z_39(t_38, u_38, p_38, t);
                                LocalPopChoice(u_22);
                              }
                            else
                              {
                                t = t_22;
                                t = c_40(t_38, u_38, p_38, t);
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
      ATerm v_22 = t;
      int w_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_39(t_38, u_38, p_38, t);
          LocalPopChoice(w_22);
        }
      else
        {
          t = v_22;
          {
            ATerm b_23 = t;
            int g_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = v_39(t_38, u_38, p_38, t);
                LocalPopChoice(g_23);
              }
            else
              {
                t = b_23;
                {
                  ATerm h_23 = t;
                  int i_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = y_39(t_38, u_38, p_38, t);
                      LocalPopChoice(i_23);
                    }
                  else
                    {
                      t = h_23;
                      {
                        ATerm j_23 = t;
                        int o_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = z_39(t_38, u_38, p_38, t);
                            LocalPopChoice(o_23);
                          }
                        else
                          {
                            t = j_23;
                            t = c_40(t_38, u_38, p_38, t);
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
static ATerm u_39 (ATerm b_34, ATerm d_34, ATerm h_34, ATerm t)
{
  ATerm i_34 = NULL,s_34 = NULL,t_34 = NULL,y_17 = NULL;
  t = SSLgetAnnotations(h_34);
  i_34 = t;
  t = b_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_23 = ATgetFirst((ATermList) t);
      if(match_cons(q_23, sym__2))
        {
          s_34 = ATgetArgument(q_23, 0);
          if((s_34 != ATgetArgument(q_23, 1)))
            {
              _fail(ATgetArgument(q_23, 1));
            }
        }
      else
        _fail(t);
      t_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_34, d_34);
  y_17 = t;
  t = SSLsetAnnotations(y_17, i_34);
  return(t);
}
static ATerm v_39 (ATerm z_34, ATerm a_35, ATerm c_35, ATerm t)
{
  ATerm d_35 = NULL,g_35 = NULL,h_35 = NULL,q_35 = NULL,r_35 = NULL,z_17 = NULL;
  t = SSLgetAnnotations(c_35);
  d_35 = t;
  t = z_34;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_23 = ATgetFirst((ATermList) t);
      if(match_cons(r_23, sym__2))
        {
          h_35 = ATgetArgument(r_23, 0);
          q_35 = ATgetArgument(r_23, 1);
        }
      else
        _fail(t);
      r_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_6(h_35, q_35, r_35, t);
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_35, a_35);
  z_17 = t;
  t = SSLsetAnnotations(z_17, d_35);
  return(t);
}
static ATerm y_39 (ATerm t_35, ATerm v_35, ATerm w_35, ATerm t)
{
  ATerm x_35 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,a_18 = NULL;
  t = SSLgetAnnotations(w_35);
  x_35 = t;
  t = t_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_23 = ATgetFirst((ATermList) t);
      if(match_cons(s_23, sym__2))
        {
          ATerm x_23 = ATgetArgument(s_23, 0);
          if(match_cons(x_23, sym_As_2))
            {
              e_36 = ATgetArgument(x_23, 0);
              f_36 = ATgetArgument(x_23, 1);
            }
          else
            _fail(t);
          g_36 = ATgetArgument(s_23, 1);
        }
      else
        _fail(t);
      h_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(h_36), (ATerm) ATmakeAppl(sym__2, f_36, g_36)), (ATerm) ATmakeAppl(sym__2, e_36, g_36)), v_35);
  a_18 = t;
  t = SSLsetAnnotations(a_18, x_35);
  return(t);
}
static ATerm z_39 (ATerm j_36, ATerm k_36, ATerm m_36, ATerm t)
{
  ATerm n_36 = NULL,u_36 = NULL,b_18 = NULL;
  t = SSLgetAnnotations(m_36);
  n_36 = t;
  t = j_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm g_24 = ATgetFirst((ATermList) t);
      if(match_cons(g_24, sym__2))
        {
          ATerm i_24 = ATgetArgument(g_24, 0);
          if(!(match_cons(i_24, sym_Wld_0)))
            _fail(t);
          {
            ATerm k_24 = ATgetArgument(g_24, 1);
          }
        }
      else
        _fail(t);
      u_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_36, k_36);
  b_18 = t;
  t = SSLsetAnnotations(b_18, n_36);
  return(t);
}
static ATerm c_40 (ATerm w_36, ATerm z_36, ATerm c_37, ATerm t)
{
  ATerm d_37 = NULL,j_37 = NULL,m_37 = NULL,p_37 = NULL,q_37 = NULL,t_37 = NULL,e_18 = NULL,d_18 = NULL;
  t = SSLgetAnnotations(c_37);
  d_37 = t;
  t = w_36;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_24 = ATgetFirst((ATermList) t);
      if(match_cons(n_24, sym__2))
        {
          j_37 = ATgetArgument(n_24, 0);
          m_37 = ATgetArgument(n_24, 1);
        }
      else
        _fail(t);
      p_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_37;
  {
    ATerm o_24 = t;
    if((PushChoice() == 0))
      {
        ATerm w_37 = NULL,d_38 = NULL,f_38 = NULL,c_18 = NULL;
        f_38 = t;
        if(match_cons(t, sym_Var_1))
          {
            d_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_38);
        w_37 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, d_38);
        c_18 = t;
        t = SSLsetAnnotations(c_18, w_37);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_24;
      }
  }
  t = m_37;
  if(match_cons(t, sym_Var_1))
    {
      t_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_37);
  q_37 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_37);
  d_18 = t;
  t = SSLsetAnnotations(d_18, q_37);
  t = (ATerm) ATmakeAppl(sym__2, p_37, z_36);
  e_18 = t;
  t = SSLsetAnnotations(e_18, d_37);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,p_39 = NULL,f_18 = NULL;
  p_39 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_39);
  d_39 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_39);
  f_18 = t;
  t = SSLsetAnnotations(f_18, d_39);
  return(t);
}
ATerm prop_pattern_match_0_0 (ATerm t)
{
  t = for_3_0(t_7, v_7, w_7, t);
  return(t);
}
ATerm CurrentTerm_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_40 = NULL,a_5 = NULL,c_5 = NULL;
      t = (ATerm) ATempty;
      a_5 = t;
      t = term_p_13;
      c_5 = t;
      t = term_s_24;
      t = z_6(c_5, a_5, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm t_24 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) t_24) != ATmakeSymbol("i_0", 0, ATtrue)))
            _fail(t);
          g_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_40;
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_40 = NULL,j_5 = NULL,m_5 = NULL;
            t = (ATerm) ATempty;
            j_5 = t;
            t = term_p_13;
            m_5 = t;
            t = term_s_24;
            t = z_6(m_5, j_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm w_24 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) w_24) != ATmakeSymbol("g_0", 0, ATtrue)))
                  _fail(t);
                h_40 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_40;
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            {
              ATerm m_40 = NULL,a_6 = NULL,b_6 = NULL;
              m_40 = t;
              t = (ATerm) ATempty;
              a_6 = t;
              t = term_p_13;
              b_6 = t;
              t = term_s_24;
              t = z_6(b_6, a_6, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = m_40;
              _fail(t);
            }
          }
      }
    }
  return(t);
}
static ATerm z_6 (ATerm h_54, ATerm i_54, ATerm t)
{
  ATerm p_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_54, i_54);
  t = m_7(h_54, i_54, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_40 = ATgetFirst((ATermList) t);
      {
        ATerm x_24 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_40;
  return(t);
}
ATerm Binding_0_0 (ATerm t)
{
  ATerm n_41 = NULL;
  n_41 = t;
  if(match_cons(t, sym_Var_1))
    {
      ATerm c_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL,u_7 = NULL;
        t = term_i_13;
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_i_13, n_41);
        t = z_6(u_7, n_41, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_25 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_25) != ATmakeSymbol("k_0", 0, ATtrue)))
              _fail(t);
            q_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_7;
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_8 = NULL;
              t = term_i_13;
              d_8 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_i_13, n_41);
              t = z_6(d_8, n_41, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = n_41;
              _fail(t);
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                ATerm l_8 = NULL;
                t = term_i_13;
                l_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_i_13, n_41);
                t = z_6(l_8, n_41, t);
                if(!(match_cons(t, sym_Undefined_0)))
                  _fail(t);
                t = n_41;
                _fail(t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  static ATerm a_42 (ATerm t)
  {
    ATerm i_25 = t;
    int j_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_86(t);
        LocalPopChoice(j_25);
      }
    else
      {
        t = i_25;
        t = SRTS_all(a_42, t);
      }
    return(t);
  }
  t = a_42(t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_8 = NULL,r_8 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm m_25 = ATgetArgument(t, 0);
          if(match_cons(m_25, sym_Var_1))
            {
              q_8 = ATgetArgument(m_25, 0);
            }
          else
            _fail(t);
          r_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_6(q_8, r_8, t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = debug_1_0(b_8, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm v_42 = NULL;
  v_42 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = v_42;
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          ATerm q_25 = ATgetArgument(t, 0);
          ATerm s_25 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_42;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm prop_match_0_0 (ATerm t)
{
  ATerm d_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,l_42 = NULL,n_42 = NULL,o_42 = NULL,o_18 = NULL;
  o_42 = t;
  if(match_cons(t, sym_Match_1))
    {
      i_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_42);
  h_42 = t;
  t = i_42;
  t = alltd_1_0(Binding_0_0, t);
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, l_42);
  o_18 = t;
  t = SSLsetAnnotations(o_18, h_42);
  n_42 = t;
  if(match_cons(t, sym_Match_1))
    {
      g_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CurrentTerm_0_0(t);
        d_42 = t;
        t = n_42;
        {
          ATerm v_25 = t;
          int w_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, g_42, d_42));
              t = prop_pattern_match_0_0(t);
              t = map_1_0(y_7, t);
              t = n_42;
              LocalPopChoice(w_25);
            }
          else
            {
              t = v_25;
              t = (ATerm) ATmakeAppl(sym__4, term_x_25, n_42, term_y_25, d_42);
              t = if_verbose3_1_0(z_7, t);
              t = term_z_25;
            }
        }
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        {
          ATerm a_26 = t;
          int b_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_42 = NULL,s_42 = NULL;
              t = g_42;
              {
                ATerm c_26 = t;
                if((PushChoice() == 0))
                  {
                    t = oncetd_1_0(c_8, t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_26;
                  }
              }
              t = (ATerm) ATempty;
              r_42 = t;
              t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_26, g_42);
              s_42 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Defined_2, term_d_26, g_42));
              t = k_6(e_8, r_42, s_42, t);
              t = n_42;
              LocalPopChoice(b_26);
            }
          else
            {
              t = a_26;
            }
        }
      }
  }
  return(t);
}
ATerm cp_0_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = prop_match_0_0(t);
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
            t = prop_build_0_0(t);
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            {
              ATerm i_26 = t;
              int j_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_44 = NULL,j_44 = NULL;
                  i_44 = t;
                  if(match_cons(t, sym_Scope_2))
                    {
                      j_44 = ATgetArgument(t, 0);
                      {
                        ATerm l_26 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  t = i_44;
                  t = j_6(cp_0_0, j_44, t);
                  LocalPopChoice(j_26);
                }
              else
                {
                  t = i_26;
                  {
                    ATerm n_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = prop_call_1_0(cp_0_0, t);
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = n_26;
                        {
                          ATerm r_26 = t;
                          int s_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = prop_traversal_1_0(cp_0_0, t);
                              LocalPopChoice(s_26);
                            }
                          else
                            {
                              t = r_26;
                              {
                                ATerm t_26 = t;
                                int v_26 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL,v_8 = NULL,y_8 = NULL,z_8 = NULL,q_18 = NULL;
                                    v_44 = t;
                                    if(match_cons(t, sym_Seq_2))
                                      {
                                        w_44 = ATgetArgument(t, 0);
                                        x_44 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(v_44);
                                    v_8 = t;
                                    t = w_44;
                                    t = cp_0_0(t);
                                    y_8 = t;
                                    t = x_44;
                                    t = cp_0_0(t);
                                    z_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_8, z_8);
                                    q_18 = t;
                                    t = SSLsetAnnotations(q_18, v_8);
                                    LocalPopChoice(v_26);
                                  }
                                else
                                  {
                                    t = t_26;
                                    {
                                      ATerm w_26 = t;
                                      int y_26 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = prop_choice_1_0(cp_0_0, t);
                                          LocalPopChoice(y_26);
                                        }
                                      else
                                        {
                                          t = w_26;
                                          {
                                            ATerm z_26 = t;
                                            int c_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm e_45 = NULL,f_45 = NULL,h_45 = NULL;
                                                e_45 = t;
                                                {
                                                  ATerm d_27 = t;
                                                  int f_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      if(match_cons(t, sym_Let_2))
                                                        {
                                                          ATerm g_27 = ATgetArgument(t, 0);
                                                          ATerm h_27 = ATgetArgument(t, 1);
                                                        }
                                                      else
                                                        _fail(t);
                                                      LocalPopChoice(f_27);
                                                      t = e_45;
                                                      t = h_6(cp_0_0, t);
                                                    }
                                                  else
                                                    {
                                                      t = d_27;
                                                      {
                                                        ATerm i_27 = t;
                                                        int j_27 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            if(match_cons(t, sym_Rec_2))
                                                              {
                                                                ATerm l_27 = ATgetArgument(t, 0);
                                                                ATerm m_27 = ATgetArgument(t, 1);
                                                              }
                                                            else
                                                              _fail(t);
                                                            LocalPopChoice(j_27);
                                                            {
                                                              ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,r_18 = NULL;
                                                              t = e_45;
                                                              if(match_cons(t, sym_Rec_2))
                                                                {
                                                                  k_9 = ATgetArgument(t, 0);
                                                                  l_9 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(e_45);
                                                              j_9 = t;
                                                              t = l_9;
                                                              t = exec_maybe_1_0(cp_0_0, t);
                                                              m_9 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Rec_2, k_9, m_9);
                                                              r_18 = t;
                                                              t = SSLsetAnnotations(r_18, j_9);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = i_27;
                                                            {
                                                              ATerm r_27 = t;
                                                              int u_27 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  if(match_cons(t, sym_Not_1))
                                                                    {
                                                                      ATerm v_27 = ATgetArgument(t, 0);
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  LocalPopChoice(u_27);
                                                                  t = e_45;
                                                                  t = f_6(cp_0_0, t);
                                                                }
                                                              else
                                                                {
                                                                  t = r_27;
                                                                  if(match_cons(t, sym_SDefT_4))
                                                                    {
                                                                      f_45 = ATgetArgument(t, 0);
                                                                      {
                                                                        ATerm a_28 = ATgetArgument(t, 1);
                                                                      }
                                                                      h_45 = ATgetArgument(t, 2);
                                                                      {
                                                                        ATerm b_28 = ATgetArgument(t, 3);
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
                                                                  t = e_45;
                                                                  t = e_6(cp_0_0, f_45, h_45, t);
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                                LocalPopChoice(c_27);
                                              }
                                            else
                                              {
                                                t = z_26;
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
static ATerm a_7 (ATerm b_54, ATerm c_54, ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  o_45 = t;
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_54, c_54);
        t = m_7(b_54, c_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm e_28 = ATgetFirst((ATermList) t);
            n_45 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(d_28);
        t = SSL_table_put(b_54, c_54, n_45);
        t = (ATerm) ATmakeAppl(sym__3, b_54, c_54, n_45);
      }
    else
      {
        t = c_28;
        t = SSL_table_remove(b_54, c_54);
        t = (ATerm) ATmakeAppl(sym__2, b_54, c_54);
      }
  }
  t = o_45;
  return(t);
}
ATerm end_scope_1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  s_45 = t;
  t = u_103(t);
  r_45 = t;
  {
    ATerm f_28 = t;
    int l_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_45 = NULL;
        t = term_v_19;
        u_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_45, term_v_19);
        t = m_7(r_45, u_45, t);
        LocalPopChoice(l_28);
      }
    else
      {
        t = f_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_45 = ATgetFirst((ATermList) t);
      p_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_v_19;
  t_45 = t;
  t = SSL_table_put(r_45, t_45, p_45);
  t = q_45;
  {
    static ATerm f_8 (ATerm t)
    {
      ATerm v_45 = NULL;
      v_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_45, v_45);
      t = a_7(r_45, v_45, t);
      return(t);
    }
    t = map_1_0(f_8, t);
  }
  t = s_45;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_83 (ATerm), ATerm h_83 (ATerm), ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_83(t);
      t = h_83(t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      t = h_83(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  y_45 = t;
  t = t_103(t);
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_45, term_v_19);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_46 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm s_28 = ATgetArgument(t, 0);
            ATerm t_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_v_19;
        f_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_45, term_v_19);
        t = m_7(x_45, f_46, t);
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
  }
  z_45 = t;
  t = term_v_19;
  a_46 = t;
  t = (ATerm) ATinsert(CheckATermList(z_45), (ATerm) ATempty);
  b_46 = t;
  t = SSL_table_put(x_45, a_46, b_46);
  t = y_45;
  return(t);
}
ATerm scope_2_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm t)
{
  static ATerm g_8 (ATerm t)
  {
    t = end_scope_1_0(v_103, t);
    return(t);
  }
  t = begin_scope_1_0(v_103, t);
  t = restore_always_2_0(w_103, g_8, t);
  return(t);
}
ATerm map_1_0 (ATerm w_90 (ATerm), ATerm t)
{
  static ATerm u_46 (ATerm t)
  {
    ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
    r_46 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_46;
      }
    else
      {
        ATerm v_9 = NULL,z_9 = NULL,b_10 = NULL,u_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_46 = ATgetFirst((ATermList) t);
            t_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_46);
        v_9 = t;
        t = s_46;
        t = w_90(t);
        z_9 = t;
        t = t_46;
        t = u_46(t);
        b_10 = t;
        t = (ATerm) ATinsert(CheckATermList(b_10), z_9);
        u_18 = t;
        t = SSLsetAnnotations(u_18, v_9);
      }
    return(t);
  }
  t = u_46(t);
  return(t);
}
ATerm Cons_2_0 (ATerm s_69 (ATerm), ATerm t_69 (ATerm), ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,w_18 = NULL;
  b_47 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_46 = ATgetFirst((ATermList) t);
      y_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_47);
  w_46 = t;
  t = x_46;
  t = s_69(t);
  z_46 = t;
  t = y_46;
  t = t_69(t);
  a_47 = t;
  t = (ATerm) ATinsert(CheckATermList(a_47), z_46);
  w_18 = t;
  t = SSLsetAnnotations(w_18, w_46);
  return(t);
}
static ATerm c_7 (ATerm i_39, ATerm j_39, ATerm t)
{
  ATerm c_47 = NULL;
  t = SSL_fputc(i_39, j_39);
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_47);
  return(t);
}
static ATerm d_7 (ATerm d_24, ATerm e_24, ATerm t)
{
  ATerm d_47 = NULL;
  t = SSL_write_term_to_stream_text(d_24, e_24);
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_47);
  return(t);
}
static ATerm f_7 (ATerm n_90 (ATerm), ATerm d_169, ATerm j_24, ATerm t)
{
  ATerm e_47 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_169, term_u_28);
  t = j_7(t);
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_47, j_24);
  t = n_90(t);
  t = fclose_0_0(t);
  t = j_24;
  return(t);
}
static ATerm e_7 (ATerm z_23, ATerm a_24, ATerm t)
{
  ATerm f_47 = NULL;
  t = SSL_write_term_to_stream_baf(z_23, a_24);
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_47);
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
  ATerm z_10 = NULL,d_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_28 = ATgetArgument(t, 0);
      if(match_cons(v_28, sym_Stream_1))
        {
          z_10 = ATgetArgument(v_28, 0);
        }
      else
        _fail(t);
      d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_7(z_10, d_11, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm w_11 = NULL,j_12 = NULL,k_12 = NULL,n_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_28 = ATgetArgument(t, 0);
      if(match_cons(w_28, sym_Stream_1))
        {
          n_12 = ATgetArgument(w_28, 0);
        }
      else
        _fail(t);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_7(n_12, o_12, t);
  w_11 = t;
  t = term_x_28;
  j_12 = t;
  t = w_11;
  if(match_cons(t, sym_Stream_1))
    {
      k_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_28, w_11);
  t = c_7(j_12, k_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,t_48 = NULL,u_48 = NULL,z_18 = NULL,y_18 = NULL;
  k_47 = t;
  if(match_cons(t, sym__2))
    {
      r_47 = ATgetArgument(t, 0);
      s_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_47);
  q_47 = t;
  t = r_47;
  {
    ATerm y_28 = t;
    int z_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm h_8 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((j_47 != NULL) && (j_47 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                j_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_8, t);
        LocalPopChoice(z_28);
      }
    else
      {
        t = y_28;
        t = term_a_29;
        j_47 = t;
      }
  }
  t_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_47, s_47);
  y_18 = t;
  t = SSLsetAnnotations(y_18, q_47);
  t = k_47;
  if(match_cons(t, sym__2))
    {
      m_47 = ATgetArgument(t, 0);
      n_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_47);
  l_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_47, (ATerm) ATmakeAppl(sym__2, not_null(j_47), n_47));
  z_18 = t;
  t = SSLsetAnnotations(z_18, l_47);
  p_47 = t;
  if(match_cons(t, sym__2))
    {
      t_48 = ATgetArgument(t, 0);
      u_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_29 = t;
    int c_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,a_19 = NULL;
        t = SSLgetAnnotations(p_47);
        p_10 = t;
        t = t_48;
        t = fetch_1_0(i_8, t);
        u_10 = t;
        t = u_48;
        if(match_cons(t, sym__2))
          {
            w_10 = ATgetArgument(t, 0);
            x_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_7(j_8, w_10, x_10, t);
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_10, v_10);
        a_19 = t;
        t = SSLsetAnnotations(a_19, p_10);
        LocalPopChoice(c_29);
      }
    else
      {
        t = b_29;
        {
          ATerm k_11 = NULL,q_11 = NULL,u_11 = NULL,v_11 = NULL,b_19 = NULL;
          t = SSLgetAnnotations(p_47);
          k_11 = t;
          t = u_48;
          if(match_cons(t, sym__2))
            {
              u_11 = ATgetArgument(t, 0);
              v_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_7(k_8, u_11, v_11, t);
          q_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_48, q_11);
          b_19 = t;
          t = SSLsetAnnotations(b_19, k_11);
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
ATerm apply_strategy_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,d_49 = NULL;
  d_49 = t;
  t = dtime_0_0(t);
  t = d_49;
  t = w_107(t);
  a_49 = t;
  t = dtime_0_0(t);
  x_48 = t;
  t = a_49;
  if(match_cons(t, sym__2))
    {
      y_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_48), (ATerm) ATmakeAppl(sym_Runtime_1, x_48)), z_48);
  return(t);
}
static ATerm r_49 (ATerm l_49, ATerm t)
{
  t = SSL_fclose(l_49);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL;
  p_49 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_49 = ATgetArgument(t, 0);
      {
        ATerm d_29 = t;
        int e_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_49);
            LocalPopChoice(e_29);
          }
        else
          {
            t = d_29;
            t = r_49(p_49, t);
          }
      }
    }
  else
    {
      t = r_49(p_49, t);
    }
  return(t);
}
static ATerm g_7 (ATerm f_24, ATerm t)
{
  t = SSL_read_term_from_stream(f_24);
  return(t);
}
static ATerm h_7 (ATerm b_38, ATerm c_38, ATerm t)
{
  t = SSL_strcat(b_38, c_38);
  return(t);
}
static ATerm i_7 (ATerm k_39, ATerm l_39, ATerm t)
{
  ATerm s_49 = NULL;
  t = SSL_fopen(k_39, l_39);
  s_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_49);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_49 = NULL;
  t = SSL_stdin_stream();
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_49);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_49 = NULL;
  t = SSL_stdout_stream();
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_49);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_49 = NULL;
  t = SSL_stderr_stream();
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_49);
  return(t);
}
static ATerm g_51 (ATerm b_50, ATerm t)
{
  ATerm c_50 = NULL;
  t = SSL_explode_term(b_50);
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_29) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_29 = ATgetArgument(t, 1);
        if(((ATgetType(g_29) == AT_LIST) && !(ATisEmpty(g_29))))
          {
            c_50 = ATgetFirst((ATermList) g_29);
            {
              ATerm h_29 = (ATerm) ATgetNext((ATermList) g_29);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_50;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_50;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_50;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_50;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_51 (ATerm f_50, ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,n_50 = NULL,g_19 = NULL;
  t = SSLgetAnnotations(h_50);
  k_50 = t;
  t = f_50;
  if(match_cons(t, sym_Path_1))
    {
      n_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_50, g_50);
  g_19 = t;
  t = SSLsetAnnotations(g_19, k_50);
  if(match_cons(t, sym__2))
    {
      i_50 = ATgetArgument(t, 0);
      j_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(i_50, j_50, t);
  return(t);
}
static ATerm i_51 (ATerm t_50, ATerm u_50, ATerm v_50, ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,b_51 = NULL,h_19 = NULL;
  t = SSLgetAnnotations(v_50);
  y_50 = t;
  t = SSL_is_string(t_50);
  b_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_51, u_50);
  h_19 = t;
  t = SSLsetAnnotations(h_19, y_50);
  if(match_cons(t, sym__2))
    {
      w_50 = ATgetArgument(t, 0);
      x_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_7(w_50, x_50, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm d_51 = NULL,e_51 = NULL,f_51 = NULL;
  d_51 = t;
  if(match_cons(t, sym__2))
    {
      e_51 = ATgetArgument(t, 0);
      f_51 = ATgetArgument(t, 1);
      {
        ATerm i_29 = t;
        int j_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_51(d_51, t);
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
                  t = h_51(e_51, f_51, d_51, t);
                  LocalPopChoice(l_29);
                }
              else
                {
                  t = k_29;
                  t = i_51(e_51, f_51, d_51, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_51(d_51, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,r_51 = NULL;
  r_51 = t;
  {
    ATerm m_29 = t;
    int n_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_51, term_o_29);
        t = j_7(t);
        LocalPopChoice(n_29);
      }
    else
      {
        t = m_29;
        {
          ATerm j_13 = NULL,k_13 = NULL;
          t = term_p_29;
          k_13 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_29, r_51);
          t = h_7(k_13, r_51, t);
          j_13 = t;
          t = SSL_perror(j_13);
          _fail(t);
        }
      }
  }
  l_51 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_7(m_51, t);
  k_51 = t;
  t = l_51;
  t = fclose_0_0(t);
  t = k_51;
  return(t);
}
ATerm fetch_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  static ATerm q_52 (ATerm t)
  {
    ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
    n_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_52 = ATgetFirst((ATermList) t);
        p_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_29 = t;
      int r_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_13 = NULL,z_13 = NULL,k_19 = NULL;
          t = SSLgetAnnotations(n_52);
          v_13 = t;
          t = o_52;
          t = g_91(t);
          z_13 = t;
          t = (ATerm) ATinsert(CheckATermList(p_52), z_13);
          k_19 = t;
          t = SSLsetAnnotations(k_19, v_13);
          LocalPopChoice(r_29);
        }
      else
        {
          t = q_29;
          {
            ATerm t_14 = NULL,z_14 = NULL,l_19 = NULL;
            t = SSLgetAnnotations(n_52);
            t_14 = t;
            t = p_52;
            t = q_52(t);
            z_14 = t;
            t = (ATerm) ATinsert(CheckATermList(z_14), o_52);
            l_19 = t;
            t = SSLsetAnnotations(l_19, t_14);
          }
        }
    }
    return(t);
  }
  t = q_52(t);
  return(t);
}
static ATerm m_7 (ATerm n_55, ATerm o_55, ATerm t)
{
  t = SSL_table_get(n_55, o_55);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  ATerm u_52 = NULL;
  u_52 = t;
  {
    ATerm s_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
        t = term_g_20;
        x_52 = t;
        t = term_h_20;
        y_52 = t;
        t = term_i_20;
        t = m_7(x_52, y_52, t);
        w_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_52, term_u_29);
        t = geq_0_0(t);
        t = u_52;
        t = f_106(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = s_29;
        t = u_52;
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm b_53 = NULL;
  b_53 = t;
  if(match_string(t, "-k"))
    {
      t = b_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = b_53;
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,j_53 = NULL;
  c_53 = t;
  t = SSL_string_to_int(c_53);
  d_53 = t;
  t = term_v_29;
  j_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_29, d_53);
  t = p_7(j_53, d_53, t);
  t = c_53;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_w_29;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_8, o_8, p_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm l_53 = NULL;
  l_53 = t;
  if(match_string(t, "-S"))
    {
      t = l_53;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_53;
    }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm m_53 = NULL,n_53 = NULL;
  t = term_h_20;
  m_53 = t;
  t = term_x_29;
  n_53 = t;
  t = term_y_29;
  t = p_7(m_53, n_53, t);
  t = term_z_29;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_a_30;
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
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL;
  o_53 = t;
  t = SSL_string_to_int(o_53);
  p_53 = t;
  t = term_h_20;
  q_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, p_53);
  t = p_7(q_53, p_53, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_53);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_b_30;
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm r_53 = NULL,s_53 = NULL;
  t = term_c_30;
  r_53 = t;
  t = term_x_12;
  s_53 = t;
  t = term_f_30;
  t = p_7(r_53, s_53, t);
  t = term_g_30;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_h_30;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_8, t_8, u_8, t);
      LocalPopChoice(j_30);
    }
  else
    {
      t = i_30;
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_8, x_8, a_9, t);
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            t = Option_3_0(b_9, f_9, g_9, t);
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm b_49, ATerm c_49, ATerm t)
{
  ATerm u_53 = NULL;
  t = term_g_20;
  u_53 = t;
  t = SSL_table_put(u_53, b_49, c_49);
  t = (ATerm) ATmakeAppl(sym__3, term_g_20, b_49, c_49);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_54 = NULL,g_54 = NULL,j_54 = NULL;
      t = term_x_12;
      t = d_0(t);
      f_54 = t;
      t = term_n_30;
      g_54 = t;
      t = term_p_30;
      j_54 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_30, term_p_30, f_54);
      t = n_7(g_54, j_54, f_54, t);
      _fail(t);
    }
  else
    {
      ATerm m_54 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_54 = ATgetFirst((ATermList) t);
          e_54 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_54;
      t = b_0(t);
      t = term_x_12;
      t = c_0(t);
      m_54 = t;
      t = (ATerm) ATinsert(CheckATermList(e_54), m_54);
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm o_54 = NULL;
  o_54 = t;
  if(match_string(t, "-o"))
    {
      t = o_54;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_54;
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL;
  p_54 = t;
  t = term_q_30;
  q_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_30, p_54);
  t = p_7(q_54, p_54, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_54);
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_r_30;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_9, o_9, q_9, t);
  return(t);
}
static ATerm n_7 (ATerm w_53, ATerm x_53, ATerm v_53, ATerm t)
{
  ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL;
  s_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_53, x_53);
  {
    ATerm s_30 = t;
    int t_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_30 = ATgetArgument(t, 0);
            ATerm y_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_53, x_53);
        t = m_7(w_53, x_53, t);
        LocalPopChoice(t_30);
      }
    else
      {
        t = s_30;
        t = (ATerm) ATempty;
      }
  }
  t_54 = t;
  t = (ATerm) ATinsert(CheckATermList(t_54), v_53);
  u_54 = t;
  t = SSL_table_put(w_53, x_53, u_54);
  t = s_54;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_55 = NULL,m_55 = NULL,p_55 = NULL;
      t = term_x_12;
      t = l_0(t);
      l_55 = t;
      t = term_n_30;
      m_55 = t;
      t = term_p_30;
      p_55 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_30, term_p_30, l_55);
      t = n_7(m_55, p_55, l_55, t);
      _fail(t);
    }
  else
    {
      ATerm t_55 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_55 = ATgetFirst((ATermList) t);
          i_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_55;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_55 = ATgetFirst((ATermList) t);
          k_55 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_55;
      t = h_0(t);
      t = j_55;
      t = j_0(t);
      t_55 = t;
      t = (ATerm) ATinsert(CheckATermList(k_55), t_55);
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm v_55 = NULL;
  v_55 = t;
  if(match_string(t, "-i"))
    {
      t = v_55;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_55;
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL;
  w_55 = t;
  t = term_z_30;
  x_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_30, w_55);
  t = p_7(x_55, w_55, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_55);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = term_a_31;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_9, s_9, t_9, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_12;
  t = whoami_0_0(t);
  y_55 = t;
  t = term_y_12;
  a_56 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_31), y_55);
  b_56 = t;
  t = SSL_printnl(a_56, b_56);
  t = term_f_13;
  z_55 = t;
  t = SSL_exit(z_55);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_56 = NULL,d_56 = NULL;
  t = term_g_20;
  c_56 = t;
  t = term_c_31;
  d_56 = t;
  t = term_d_31;
  t = m_7(c_56, d_56, t);
  return(t);
}
static ATerm k_7 (ATerm e_42, ATerm f_42, ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_42, f_42);
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      t = SSL_addr(e_42, f_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL,m_56 = NULL;
  h_56 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_56;
      t = n_97(t);
    }
  else
    {
      ATerm s_56 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_56 = ATgetFirst((ATermList) t);
          m_56 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_56;
      t = foldr_2_0(n_97, o_97, t);
      s_56 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_56, s_56);
      t = o_97(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_x_29;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      l_15 = ATgetArgument(t, 0);
      m_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_7(l_15, m_15, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_56 = NULL,g_15 = NULL,h_15 = NULL;
  t = times_0_0(t);
  h_15 = t;
  t = SSL_explode_term(h_15);
  if(match_cons(t, sym__2))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15;
  t = foldr_2_0(u_9, w_9, t);
  v_56 = t;
  t = SSL_TicksToSeconds(v_56);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
  g_57 = t;
  if(match_cons(t, sym__2))
    {
      h_57 = ATgetArgument(t, 0);
      i_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_57;
        if((h_57 != t))
          {
            _fail(t);
          }
        t = g_57;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
        {
          ATerm k_31 = t;
          int m_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_57, i_57);
              LocalPopChoice(m_31);
            }
          else
            {
              t = k_31;
              t = SSL_gtr(h_57, i_57);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_106 (ATerm), ATerm t)
{
  ATerm m_57 = NULL;
  m_57 = t;
  {
    ATerm n_31 = t;
    int o_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
        t = term_g_20;
        p_57 = t;
        t = term_h_20;
        q_57 = t;
        t = term_i_20;
        t = m_7(p_57, q_57, t);
        o_57 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_57, term_f_13);
        t = geq_0_0(t);
        t = m_57;
        t = e_106(t);
        LocalPopChoice(o_31);
      }
    else
      {
        t = n_31;
        t = m_57;
      }
  }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm s_57 = NULL,t_57 = NULL,v_57 = NULL,w_57 = NULL;
  t = run_time_0_0(t);
  s_57 = t;
  t = term_x_12;
  t = whoami_0_0(t);
  t_57 = t;
  t = term_y_12;
  v_57 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_31), s_57), term_q_31), t_57);
  w_57 = t;
  t = SSL_printnl(v_57, w_57);
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_31), s_57), term_q_31), t_57));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_9, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_57 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_29;
  x_57 = t;
  t = SSL_exit(x_57);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  i_58 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_58;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_58 = ATgetArgument(t, 0);
          {
            ATerm n_16 = NULL,o_19 = NULL;
            t = SSLgetAnnotations(i_58);
            n_16 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_58);
            o_19 = t;
            t = SSLsetAnnotations(o_19, n_16);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_58;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm s_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_58 = NULL,b_58 = NULL;
      t = term_g_20;
      a_58 = t;
      t = term_v_31;
      b_58 = t;
      t = term_w_31;
      t = m_7(a_58, b_58, t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = s_31;
      t = fetch_1_0(y_9, t);
    }
  t = u_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_58 = ATgetFirst((ATermList) t);
      m_58 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_58 = NULL,r_58 = NULL;
        static ATerm c_10 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_58)), not_null(r_58));
          return(t);
        }
        t = m_58;
        t = f_0(t);
        if(((q_58 != NULL) && (q_58 != t)))
          _fail(t);
        else
          q_58 = t;
        t = l_58;
        t = e_0(t);
        if(((r_58 != NULL) && (r_58 != t)))
          _fail(t);
        else
          r_58 = t;
        t = m_58;
        t = reverse_acc_2_0(e_0, c_10, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_12;
      t = f_0(t);
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,q_19 = NULL;
  z_58 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_58);
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_58);
  q_19 = t;
  t = SSLsetAnnotations(q_19, x_58);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm b_59 = NULL;
  b_59 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_59), term_x_31);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  ATerm y_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_58 = NULL,w_58 = NULL;
      t = term_g_20;
      v_58 = t;
      t = term_c_31;
      w_58 = t;
      t = term_d_31;
      t = m_7(v_58, w_58, t);
      LocalPopChoice(z_31);
    }
  else
    {
      t = y_31;
      t = fetch_1_0(e_10, t);
    }
  t = term_c_32;
  t = echo_0_0(t);
  t = term_n_30;
  t_58 = t;
  t = term_p_30;
  u_58 = t;
  t = term_f_32;
  t = m_7(t_58, u_58, t);
  t = reverse_acc_2_0(_id, f_10, t);
  t = map_1_0(h_10, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
  d_59 = t;
  {
    ATerm g_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_59;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_32 = ATgetFirst((ATermList) t);
                ATerm n_32 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_59;
          }
        LocalPopChoice(k_32);
      }
    else
      {
        t = g_32;
        t = (ATerm) ATinsert(ATempty, d_59);
      }
  }
  e_59 = t;
  t = term_a_29;
  f_59 = t;
  t = SSL_printnl(f_59, e_59);
  t = d_59;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  t = term_g_20;
  j_59 = t;
  t = term_c_31;
  k_59 = t;
  t = term_d_31;
  t = m_7(j_59, k_59, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  t = term_o_32;
  l_59 = t;
  t = term_x_12;
  m_59 = t;
  t = term_p_32;
  t = p_7(l_59, m_59, t);
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_q_32;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
  t = term_o_32;
  p_59 = t;
  t = term_x_12;
  q_59 = t;
  t = term_p_32;
  t = p_7(p_59, q_59, t);
  t = term_r_32;
  n_59 = t;
  t = term_x_12;
  o_59 = t;
  t = term_s_32;
  t = p_7(n_59, o_59, t);
  t = term_t_32;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  t = term_u_32;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_10, k_10, n_10, t);
      LocalPopChoice(x_32);
    }
  else
    {
      t = w_32;
      t = Option_3_0(o_10, r_10, s_10, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,a_60 = NULL,b_60 = NULL,s_19 = NULL;
  v_59 = t;
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_33;
        t = x_110(t);
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
      }
  }
  t = v_59;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_59 = ATgetFirst((ATermList) t);
      y_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_59);
  w_59 = t;
  t = term_c_31;
  b_60 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_31, x_59);
  t = p_7(b_60, x_59, t);
  t = y_59;
  {
    static ATerm l_60 (ATerm t)
    {
      ATerm g_33 = t;
      int h_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_33 = t;
          int j_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_60 = NULL;
              e_60 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_60;
              LocalPopChoice(j_33);
            }
          else
            {
              t = i_33;
              t = x_110(t);
              t = Cons_2_0(_id, l_60, t);
            }
          LocalPopChoice(h_33);
        }
      else
        {
          t = g_33;
          {
            ATerm h_60 = NULL,i_60 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_60 = ATgetFirst((ATermList) t);
                i_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_60), (ATerm) ATmakeAppl(sym_Undefined_1, h_60));
          }
        }
      return(t);
    }
    t = l_60(t);
  }
  a_60 = t;
  t = (ATerm) ATinsert(CheckATermList(a_60), (ATerm) ATmakeAppl(sym_Program_1, x_59));
  s_19 = t;
  t = SSLsetAnnotations(s_19, w_59);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm d_61 = NULL;
  d_61 = t;
  if(match_string(t, "--help"))
    {
      t = d_61;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_61;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_61;
        }
    }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL;
  t = term_v_31;
  e_61 = t;
  t = term_x_12;
  f_61 = t;
  t = term_k_33;
  t = p_7(e_61, f_61, t);
  t = term_l_33;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  t = term_m_33;
  return(t);
}
static ATerm e_11 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  ATerm q_60 = NULL,r_60 = NULL,s_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL;
  s_60 = t;
  t = term_n_30;
  a_61 = t;
  t = term_p_30;
  b_61 = t;
  t = (ATerm) ATempty;
  c_61 = t;
  t = SSL_table_put(a_61, b_61, c_61);
  t = s_60;
  {
    static ATerm t_10 (ATerm t)
    {
      ATerm n_33 = t;
      int o_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_110(t);
          LocalPopChoice(o_33);
        }
      else
        {
          t = n_33;
          {
            ATerm p_33 = t;
            int q_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(a_11, b_11, c_11, t);
                LocalPopChoice(q_33);
              }
            else
              {
                t = p_33;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(t_10, t);
  }
  {
    ATerm r_33 = t;
    int s_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_61 = NULL;
        q_61 = t;
        {
          ATerm t_33 = t;
          int u_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_17 = NULL;
              t = q_61;
              {
                ATerm v_33 = t;
                int y_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_17 = NULL,e_17 = NULL;
                    t = term_g_20;
                    b_17 = t;
                    t = term_v_31;
                    e_17 = t;
                    t = term_w_31;
                    t = m_7(b_17, e_17, t);
                    LocalPopChoice(y_33);
                  }
                else
                  {
                    t = v_33;
                    t = fetch_1_0(e_11, t);
                  }
              }
              t = q_61;
              t = default_system_usage_0_0(t);
              t = term_x_29;
              a_17 = t;
              t = SSL_exit(a_17);
              LocalPopChoice(u_33);
            }
          else
            {
              t = t_33;
              {
                ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
                t = term_g_20;
                t_17 = t;
                t = term_o_32;
                u_17 = t;
                t = term_z_33;
                t = m_7(t_17, u_17, t);
                t = q_61;
                t = default_system_about_0_0(t);
                t = term_x_29;
                s_17 = t;
                t = SSL_exit(s_17);
              }
            }
        }
        LocalPopChoice(s_33);
      }
    else
      {
        t = r_33;
        {
          ATerm a_34 = t;
          int c_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_61 = NULL,w_61 = NULL,x_61 = NULL;
              static ATerm f_11 (ATerm t)
              {
                ATerm y_61 = NULL,z_61 = NULL,a_62 = NULL,u_19 = NULL;
                a_62 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_61 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_62);
                y_61 = t;
                t = z_61;
                if(((q_60 != NULL) && (q_60 != t)))
                  _fail(t);
                else
                  q_60 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_61);
                u_19 = t;
                t = SSLsetAnnotations(u_19, y_61);
                return(t);
              }
              t = fetch_1_0(f_11, t);
              t = term_y_12;
              w_61 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_60)), term_e_34);
              x_61 = t;
              t = SSL_printnl(w_61, x_61);
              t = (ATerm) ATmakeAppl(sym__2, term_y_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_60)), term_e_34));
              t = default_system_usage_0_0(t);
              t = term_f_13;
              r_61 = t;
              t = SSL_exit(r_61);
              LocalPopChoice(c_34);
            }
          else
            {
              t = a_34;
            }
        }
      }
  }
  r_60 = t;
  t = term_n_30;
  z_60 = t;
  t = SSL_table_destroy(z_60);
  t = r_60;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_108 (ATerm), ATerm x_108 (ATerm), ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL;
  t = parse_options_1_0(w_108, t);
  f_62 = t;
  t = term_f_34;
  i_62 = t;
  t = SSL_table_create(i_62);
  t = term_f_34;
  g_62 = t;
  t = term_g_34;
  h_62 = t;
  t = SSL_table_put(g_62, h_62, f_62);
  t = f_62;
  t = y_108(t);
  {
    ATerm j_34 = t;
    int k_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_108, t);
        LocalPopChoice(k_34);
      }
    else
      {
        t = j_34;
        {
          ATerm l_34 = t;
          int m_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_108(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_34);
            }
          else
            {
              t = l_34;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = if_verbose2_1_0(o_11, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  t = term_n_34;
  j_62 = t;
  t = term_x_12;
  k_62 = t;
  t = term_o_34;
  t = p_7(j_62, k_62, t);
  t = term_p_34;
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_q_34;
  return(t);
}
static ATerm o_11 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL;
  l_62 = t;
  t = term_g_20;
  p_62 = t;
  t = term_c_31;
  q_62 = t;
  t = term_d_31;
  t = m_7(p_62, q_62, t);
  m_62 = t;
  t = term_y_12;
  n_62 = t;
  t = (ATerm) ATinsert(ATempty, m_62);
  o_62 = t;
  t = SSL_printnl(n_62, o_62);
  t = l_62;
  return(t);
}
ATerm iowrap_3_0 (ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm h_108 (ATerm), ATerm t)
{
  static ATerm g_11 (ATerm t)
  {
    ATerm r_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_108(t);
        LocalPopChoice(u_34);
      }
    else
      {
        t = r_34;
        {
          ATerm v_34 = t;
          int w_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(w_34);
            }
          else
            {
              t = v_34;
              {
                ATerm x_34 = t;
                int y_34 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(y_34);
                  }
                else
                  {
                    t = x_34;
                    {
                      ATerm b_35 = t;
                      int e_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(j_11, l_11, m_11, t);
                          LocalPopChoice(e_35);
                        }
                      else
                        {
                          t = b_35;
                          {
                            ATerm f_35 = t;
                            int i_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(i_35);
                              }
                            else
                              {
                                t = f_35;
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
  static ATerm i_11 (ATerm t)
  {
    ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
    s_62 = t;
    {
      ATerm j_35 = t;
      int k_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm p_11 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_62 != NULL) && (r_62 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(p_11, t);
          LocalPopChoice(k_35);
        }
      else
        {
          t = j_35;
          t = term_l_35;
          r_62 = t;
        }
    }
    t = not_null(r_62);
    t = ReadFromFile_0_0(t);
    t_62 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_62, t_62);
    t = apply_strategy_1_0(f_108, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(g_11, h_108, h_11, i_11, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,a_20 = NULL,z_19 = NULL,y_19 = NULL,w_19 = NULL;
  i_63 = t;
  if(match_cons(t, sym__2))
    {
      v_62 = ATgetArgument(t, 0);
      w_62 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_63);
  u_62 = t;
  t = w_62;
  if(match_cons(t, sym_Specification_1))
    {
      y_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_62);
  x_62 = t;
  t = y_62;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_63 = ATgetFirst((ATermList) t);
      c_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_62);
  a_63 = t;
  t = b_63;
  if(match_cons(t, sym_Signature_1))
    {
      g_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_63);
  f_63 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, g_63);
  w_19 = t;
  t = SSLsetAnnotations(w_19, f_63);
  h_63 = t;
  t = c_63;
  t = Cons_2_0(r_12, s_12, t);
  d_63 = t;
  t = (ATerm) ATinsert(CheckATermList(d_63), h_63);
  y_19 = t;
  t = SSLsetAnnotations(y_19, a_63);
  e_63 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_63);
  z_19 = t;
  t = SSLsetAnnotations(z_19, x_62);
  z_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_62, z_62);
  a_20 = t;
  t = SSLsetAnnotations(a_20, u_62);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL,x_19 = NULL;
  m_63 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_63);
  j_63 = t;
  t = k_63;
  t = map_1_0(t_12, t);
  l_63 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_63);
  x_19 = t;
  t = SSLsetAnnotations(x_19, j_63);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  t = scope_2_0(u_12, v_12, t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_p_13;
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = scope_2_0(w_12, cp_0_0, t);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(p_12, _fail, default_usage_0_0, t);
  return(t);
}
