#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Undefined_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Path_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_ObsoleteWarning_1;
static Symbol sym_DebugWarning_1;
static Symbol sym_ConstructorWarning_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Str_1;
static Symbol sym_SVar_1;
static Symbol sym_Path_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_SDefT_4;
static Symbol sym_OpDecl_2;
static void init_module_constructors (void)
{
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_ObsoleteWarning_1 = ATmakeSymbol("ObsoleteWarning", 1, ATfalse);
  ATprotectSymbol(sym_ObsoleteWarning_1);
  sym_DebugWarning_1 = ATmakeSymbol("DebugWarning", 1, ATfalse);
  ATprotectSymbol(sym_DebugWarning_1);
  sym_ConstructorWarning_1 = ATmakeSymbol("ConstructorWarning", 1, ATfalse);
  ATprotectSymbol(sym_ConstructorWarning_1);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
}
static ATerm term_u_26;
static ATerm term_t_26;
static ATerm term_s_26;
static ATerm term_u_25;
static ATerm term_t_25;
static ATerm term_s_25;
static ATerm term_l_25;
static ATerm term_k_25;
static ATerm term_z_24;
static ATerm term_y_24;
static ATerm term_x_24;
static ATerm term_w_24;
static ATerm term_v_24;
static ATerm term_h_24;
static ATerm term_b_24;
static ATerm term_x_23;
static ATerm term_v_23;
static ATerm term_r_23;
static ATerm term_p_23;
static ATerm term_o_23;
static ATerm term_n_23;
static ATerm term_k_23;
static ATerm term_j_23;
static ATerm term_d_23;
static ATerm term_c_23;
static ATerm term_z_22;
static ATerm term_h_22;
static ATerm term_e_22;
static ATerm term_c_22;
static ATerm term_y_20;
static ATerm term_x_20;
static ATerm term_p_20;
static ATerm term_o_20;
static ATerm term_n_20;
static ATerm term_m_20;
static ATerm term_j_20;
static ATerm term_i_20;
static ATerm term_h_20;
static ATerm term_e_20;
static ATerm term_d_20;
static ATerm term_c_20;
static ATerm term_b_20;
static ATerm term_a_20;
static ATerm term_w_19;
static ATerm term_c_19;
static ATerm term_v_18;
static ATerm term_t_18;
static ATerm term_s_18;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_f_18;
static ATerm term_d_18;
static ATerm term_c_18;
static ATerm term_v_17;
static ATerm term_u_17;
static ATerm term_r_17;
static ATerm term_q_17;
static ATerm term_p_17;
static ATerm term_o_17;
static ATerm term_c_17;
static ATerm term_b_17;
static ATerm term_a_17;
static ATerm term_z_16;
static ATerm term_y_16;
static ATerm term_r_16;
static ATerm term_p_16;
static ATerm term_k_16;
static ATerm term_j_16;
static ATerm term_i_16;
static ATerm term_h_16;
static ATerm term_b_16;
static ATerm term_q_15;
static ATerm term_p_15;
static ATerm term_c_14;
static ATerm term_b_14;
static ATerm term_y_13;
static ATerm term_x_13;
static ATerm term_w_13;
static ATerm term_t_13;
static ATerm term_p_13;
static ATerm term_n_13;
static ATerm term_m_13;
static ATerm term_l_13;
static ATerm term_d_13;
static ATerm term_s_10;
static ATerm term_q_10;
static ATerm term_o_10;
static ATerm term_a_10;
static ATerm term_z_9;
static ATerm term_v_9;
static ATerm term_u_9;
static ATerm term_t_9;
static ATerm term_r_9;
static ATerm term_q_9;
static ATerm term_p_9;
static ATerm term_o_9;
static ATerm term_k_9;
static ATerm term_i_9;
static ATerm term_h_9;
static ATerm term_g_9;
static ATerm term_f_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: lowercase constructor name found: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: possibly missing build operator in debug strategy in \"", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\n", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  debug(", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")\n", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: obsolete strategy or rule invoked from \"", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\":\n  ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": \"", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" warning(s)\n", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING incorrect parameter passed to -W switch: ", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_m_13);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_w_13);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_b_14);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_b_16);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_j_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_z_16, term_a_17);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_q_17, term_u_9);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_9);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(sym__2, term_d_18, term_p_16);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("                      ", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("        missing build operator", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_a_20);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete strategies", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_c_20, term_d_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound variables", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_i_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case-constructors", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case constructors", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_n_20);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-W,--warning C   Report warnings falling in category C. Categories:\n", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("                      all                      all categories (default) \n", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("                      no-C                     no warnings in category C\n", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": no such warning", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_q_17);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym__2, term_n_23, term_p_16);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_p_16);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym__2, term_v_24, term_p_16);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym__3, term_z_16, term_a_17, (ATerm) ATempty);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_v_24);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_l_13, term_n_23);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_p_16);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm mk_warning_0_0 (ATerm t);
static ATerm d_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
ATerm print_warnings_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm LowerCaseConstructors_1_0 (ATerm i_111 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm sdef_with_property_1_0 (ATerm e_111 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm u_5 (ATerm d_111 (ATerm), ATerm y_23, ATerm w_23, ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm v_5 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm t);
static ATerm t_8 (ATerm j_7, ATerm k_7, ATerm l_7, ATerm t);
ATerm map_apply_1_0 (ATerm f_111 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm strategy_invokation_warning_1_0 (ATerm b_111 (ATerm), ATerm t);
static ATerm w_5 (ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm p_48, ATerm o_48, ATerm t);
static ATerm x_5 (ATerm j_127 (ATerm), ATerm l_48, ATerm k_48, ATerm t);
ATerm foldr_3_0 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
ATerm collect_om_2_0 (ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm strategy_argument_warning_1_0 (ATerm c_111 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm debug_with_incorrect_string_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm Warning_1_0 (ATerm k_111 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm i_124 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm Stratego_warnings_0_0 (ATerm t);
static ATerm b_6 (ATerm e_58, ATerm f_58, ATerm t);
static ATerm c_6 (ATerm i_42, ATerm j_42, ATerm t);
static ATerm e_6 (ATerm s_122 (ATerm), ATerm z_291, ATerm o_42, ATerm t);
static ATerm d_6 (ATerm e_42, ATerm f_42, ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm output_1_0 (ATerm m_143 (ATerm), ATerm t);
static ATerm d_17 (ATerm q_16, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_6 (ATerm k_42, ATerm t);
static ATerm g_6 (ATerm k_56, ATerm l_56, ATerm t);
static ATerm h_6 (ATerm g_58, ATerm h_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm z_18 (ATerm s_17, ATerm t);
static ATerm a_19 (ATerm w_17, ATerm x_17, ATerm y_17, ATerm t);
static ATerm b_19 (ATerm j_18, ATerm k_18, ATerm l_18, ATerm t);
static ATerm i_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm n_143 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_6 (ATerm l_78, ATerm m_78, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm Display_possible_warnings_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm p_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm f_26 (ATerm v_25, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm z_5 (ATerm r_78, ATerm q_78, ATerm t);
static ATerm a_6 (ATerm e_43, ATerm n_303, ATerm t);
ATerm map_1_0 (ATerm a_123 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm b_131 (ATerm), ATerm t);
static ATerm p_6 (ATerm q_63, ATerm r_63, ATerm p_63, ATerm t);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_6 (ATerm z_61, ATerm a_62, ATerm t);
ATerm foldr_2_0 (ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_6 (ATerm f_68, ATerm g_68, ATerm h_68, ATerm t);
ATerm lookup_table_0_1 (ATerm c_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_68, ATerm o_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_6 (ATerm k_68, ATerm l_68, ATerm t);
static ATerm m_6 (ATerm p_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_123 (ATerm), ATerm t);
static ATerm t_6 (ATerm i_68, ATerm j_68, ATerm t);
static ATerm o_6 (ATerm j_65, ATerm k_65, ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_145 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm parse_options_3_0 (ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm mk_warning_0_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym_ConstructorWarning_1))
    {
      v_1 = ATgetArgument(t, 0);
      {
        ATerm u_0 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_9), v_1), term_f_9);
        u_0 = t;
        t = SSL_concat_strings(u_0);
      }
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          v_1 = ATgetArgument(t, 0);
          w_1 = ATgetArgument(t, 1);
          {
            ATerm p_2 = NULL,q_2 = NULL,w_2 = NULL,b_3 = NULL;
            t = w_1;
            if(match_cons(t, sym_DebugWarning_1))
              {
                t_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSL_explode_string(t_1);
            b_3 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_3), term_h_9), (ATerm) ATinsert(ATempty, term_h_9));
            t = conc_0_0(t);
            w_2 = t;
            t = SSL_implode_string(w_2);
            p_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_9), p_2), term_o_9), term_k_9), v_1), term_i_9);
            q_2 = t;
            t = SSL_concat_strings(q_2);
          }
        }
      else
        {
          ATerm m_3 = NULL;
          if(match_cons(t, sym__3))
            {
              v_1 = ATgetArgument(t, 0);
              w_1 = ATgetArgument(t, 1);
              x_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = x_1;
          if(match_cons(t, sym_ObsoleteWarning_1))
            {
              y_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_9), y_1), term_t_9), w_1), term_r_9), v_1), term_q_9);
          m_3 = t;
          t = SSL_concat_strings(m_3);
        }
    }
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_u_9;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      k_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(k_2, l_2, t);
  return(t);
}
static ATerm l_0 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm print_warnings_0_0 (ATerm t)
{
  ATerm e_2 = NULL;
  ATerm w_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 = NULL;
      f_2 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_2;
      LocalPopChoice(y_9);
    }
  else
    {
      t = w_9;
      {
        ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
        t = map_1_0(mk_warning_0_0, t);
        g_2 = t;
        t = foldr_3_0(d_0, j_0, l_0, t);
        e_2 = t;
        t = term_z_9;
        j_2 = t;
        t = SSL_print(j_2, g_2);
        t = term_z_9;
        h_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_10), e_2), term_g_9);
        i_2 = t;
        t = SSL_print(h_2, i_2);
        t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_10), e_2), term_g_9));
      }
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm b_10 = t;
  if((PushChoice() == 0))
    {
      ATerm n_2 = NULL,o_2 = NULL;
      if(match_cons(t, sym__2))
        {
          n_2 = ATgetArgument(t, 0);
          o_2 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, n_2, o_2);
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(n_2, o_2);
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            t = SSL_gtr(n_2, o_2);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, n_2, o_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_10;
    }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm u_2 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      u_2 = ATgetArgument(t, 0);
      {
        ATerm e_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = u_2;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm y_2 = NULL,a_3 = NULL;
  if(match_cons(t, sym__2))
    {
      y_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(s_0, y_2, a_3, t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm d_3 = NULL;
  if(match_cons(t, sym__2))
    {
      d_3 = ATgetArgument(t, 0);
      if((d_3 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm e_3 = NULL,j_3 = NULL,n_3 = NULL;
  n_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_3 = ATgetFirst((ATermList) t);
      j_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 = NULL;
            t = j_3;
            {
              static ATerm v_0 (ATerm t);
              static ATerm v_0 (ATerm t)
              {
                ATerm h_10 = t;
                if((PushChoice() == 0))
                  {
                    if((e_3 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = h_10;
                  }
                return(t);
              }
              t = filter_1_0(v_0, t);
            }
            s_3 = t;
            t = (ATerm) ATinsert(CheckATermList(s_3), e_3);
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            t = n_3;
          }
      }
    }
  else
    {
      t = n_3;
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  w_3 = t;
  t = SSL_explode_string(w_3);
  t = map_1_0(z_0, t);
  a_4 = t;
  t = SSL_implode_string(a_4);
  if((w_3 != t))
    {
      _fail(t);
    }
  {
    ATerm i_10 = t;
    if((PushChoice() == 0))
      {
        ATerm g_4 = NULL;
        g_4 = t;
        if(match_string(t, ""))
          {
            t = g_4;
          }
        else
          {
            if(match_string(t, "stdin"))
              {
                t = g_4;
              }
            else
              {
                if(match_string(t, "stdout"))
                  {
                    t = g_4;
                  }
                else
                  {
                    if(match_string(t, "stderr"))
                      {
                        t = g_4;
                      }
                    else
                      {
                        if(match_string(t, "meta-var"))
                          {
                            t = g_4;
                          }
                        else
                          {
                            if(match_string(t, "meta-listvar"))
                              {
                                t = g_4;
                              }
                            else
                              {
                                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("amb", 0, ATtrue)))
                                  _fail(t);
                                t = g_4;
                              }
                          }
                      }
                  }
              }
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_10;
      }
  }
  t = SSL_explode_string(w_3);
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_3), term_h_9), (ATerm) ATinsert(ATempty, term_h_9));
  t = conc_0_0(t);
  z_3 = t;
  t = SSL_implode_string(z_3);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym_ConstructorWarning_1, x_3);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm j_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 = NULL;
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_o_10, c_4);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, c_4, term_q_10);
      t = leq_0_0(t);
      t = c_4;
      LocalPopChoice(n_10);
      {
        ATerm d_4 = NULL,e_4 = NULL;
        d_4 = t;
        t = term_s_10;
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_4, term_s_10);
        t = j_6(d_4, e_4, t);
      }
    }
  else
    {
      t = j_10;
    }
  return(t);
}
ATerm LowerCaseConstructors_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("lower-case-constructors", 0, ATtrue)))
    _fail(t);
  t = i_111(t);
  t = collect_om_2_0(p_0, r_0, t);
  t = listtd_1_0(t_0, t);
  t = filter_1_0(x_0, t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm v_4 = NULL,y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_4 = ATgetArgument(t, 0);
      y_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(c_1, v_4, y_4, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm z_4 = NULL;
  if(match_cons(t, sym__2))
    {
      z_4 = ATgetArgument(t, 0);
      if((z_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm sdef_with_property_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,k_4 = NULL,m_4 = NULL,n_4 = NULL,r_4 = NULL,u_4 = NULL,a_0 = NULL;
  static ATerm f_1 (ATerm t);
  static ATerm f_1 (ATerm t)
  {
    ATerm d_5 = NULL;
    d_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), d_5);
    return(t);
  }
  u_4 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((k_4 != NULL) && (k_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        k_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
      n_4 = ATgetArgument(t, 2);
      r_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_4);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, k_4, m_4, n_4, r_4);
  a_0 = t;
  t = SSLsetAnnotations(a_0, h_4);
  t = r_4;
  t = collect_om_2_0(e_111, a_1, t);
  {
    ATerm t_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_10;
      }
  }
  t = map_1_0(f_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm y_5 = NULL,k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      y_5 = ATgetArgument(t, 0);
      k_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(k_1, y_5, k_6, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm n_6 = NULL;
  if(match_cons(t, sym__2))
    {
      n_6 = ATgetArgument(t, 0);
      if((n_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm d_111 (ATerm), ATerm y_23, ATerm w_23, ATerm t)
{
  ATerm g_5 = NULL;
  t = d_111(t);
  g_5 = t;
  t = w_23;
  {
    static ATerm g_1 (ATerm t);
    static ATerm g_1 (ATerm t)
    {
      ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,o_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,i_0 = NULL,g_0 = NULL;
      t_5 = t;
      if(match_cons(t, sym_CallT_3))
        {
          i_5 = ATgetArgument(t, 0);
          j_5 = ATgetArgument(t, 1);
          o_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_5);
      h_5 = t;
      t = i_5;
      if(match_cons(t, sym_SVar_1))
        {
          r_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_5);
      p_5 = t;
      t = r_5;
      if((g_5 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_SVar_1, r_5);
      g_0 = t;
      t = SSLsetAnnotations(g_0, p_5);
      s_5 = t;
      t = (ATerm) ATmakeAppl(sym_CallT_3, s_5, j_5, o_5);
      i_0 = t;
      t = SSLsetAnnotations(i_0, h_5);
      t = r_5;
      return(t);
    }
    t = collect_om_2_0(g_1, i_1, t);
  }
  {
    ATerm u_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_10;
      }
  }
  t = y_23;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm c_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(q_1, c_7, e_7, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm f_7 = NULL;
  if(match_cons(t, sym__2))
    {
      f_7 = ATgetArgument(t, 0);
      if((f_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_5 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm t)
{
  static ATerm m_1 (ATerm t);
  static ATerm m_1 (ATerm t)
  {
    ATerm w_6 = NULL,x_6 = NULL,a_7 = NULL;
    if(match_cons(t, sym_SDefT_4))
      {
        x_6 = ATgetArgument(t, 0);
        {
          ATerm y_10 = ATgetArgument(t, 1);
        }
        {
          ATerm z_10 = ATgetArgument(t, 2);
        }
        a_7 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    {
      static ATerm o_1 (ATerm t);
      static ATerm o_1 (ATerm t)
      {
        t = t_23;
        return(t);
      }
      t = u_5(o_1, x_6, a_7, t);
    }
    {
      ATerm d_11 = t;
      if((PushChoice() == 0))
        {
          if((t_23 != t))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_11;
        }
    }
    w_6 = t;
    t = (ATerm) ATmakeAppl(sym__3, w_6, t_23, u_23);
    return(t);
  }
  t = s_23;
  t = collect_om_2_0(m_1, n_1, t);
  return(t);
}
static ATerm t_8 (ATerm j_7, ATerm k_7, ATerm l_7, ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,y_7 = NULL,n_0 = NULL;
  t = SSLgetAnnotations(l_7);
  v_7 = t;
  t = k_7;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_7, k_7);
  n_0 = t;
  t = SSLsetAnnotations(n_0, v_7);
  y_7 = t;
  t = SSL_explode_term(y_7);
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_11 = ATgetArgument(t, 1);
        if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
          {
            u_7 = ATgetFirst((ATermList) g_11);
            {
              ATerm h_11 = (ATerm) ATgetNext((ATermList) g_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_7;
  return(t);
}
ATerm map_apply_1_0 (ATerm f_111 (ATerm), ATerm t)
{
  static ATerm q_8 (ATerm t);
  static ATerm q_8 (ATerm t)
  {
    ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL,i_8 = NULL,l_8 = NULL;
    c_8 = t;
    if(match_cons(t, sym__2))
      {
        d_8 = ATgetArgument(t, 0);
        e_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = e_8;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_8 = ATgetFirst((ATermList) t);
        l_8 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_11 = t;
          int j_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_8(d_8, e_8, c_8, t);
              LocalPopChoice(j_11);
            }
          else
            {
              t = i_11;
              {
                ATerm p_8 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, d_8, i_8);
                t = f_111(t);
                p_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, p_8, l_8);
                t = q_8(t);
              }
            }
        }
      }
    else
      {
        t = t_8(d_8, e_8, c_8, t);
      }
    return(t);
  }
  t = q_8(t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(z_1, o_4, p_4, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm q_4 = NULL;
  if(match_cons(t, sym__2))
    {
      q_4 = ATgetArgument(t, 0);
      if((q_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,w_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      {
        ATerm l_11 = ATgetArgument(t, 1);
        if(match_cons(l_11, sym__2))
          {
            t_4 = ATgetArgument(l_11, 0);
            w_4 = ATgetArgument(l_11, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_5(s_4, t_4, w_4, t);
  return(t);
}
ATerm strategy_invokation_warning_1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm m_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9 = NULL,j_4 = NULL;
      j_9 = t;
      t = collect_om_2_0(b_111, r_1, t);
      t = concat_0_0(t);
      {
        ATerm s_11 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = s_11;
          }
      }
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, j_4);
      t = map_apply_1_0(c_2, t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = m_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm w_5 (ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm p_48, ATerm o_48, ATerm t)
{
  t = n_127(t);
  {
    static ATerm d_2 (ATerm t);
    static ATerm d_2 (ATerm t)
    {
      ATerm l_9 = NULL;
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_48, l_9);
      t = m_127(t);
      return(t);
    }
    t = fetch_1_0(d_2, t);
  }
  t = o_48;
  return(t);
}
static ATerm x_5 (ATerm j_127 (ATerm), ATerm l_48, ATerm k_48, ATerm t)
{
  static ATerm p_10 (ATerm t);
  static ATerm p_10 (ATerm t)
  {
    ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL;
    k_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_48;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_10 = ATgetFirst((ATermList) t);
            m_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_11 = t;
          int z_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_10;
              {
                static ATerm m_2 (ATerm t);
                static ATerm m_2 (ATerm t)
                {
                  t = k_48;
                  return(t);
                }
                t = w_5(j_127, m_2, l_10, m_10, t);
              }
              t = p_10(t);
              LocalPopChoice(z_11);
            }
          else
            {
              t = t_11;
              {
                ATerm e_5 = NULL,l_5 = NULL,q_0 = NULL;
                t = SSLgetAnnotations(k_10);
                e_5 = t;
                t = m_10;
                t = p_10(t);
                l_5 = t;
                t = (ATerm) ATinsert(CheckATermList(l_5), l_10);
                q_0 = t;
                t = SSLsetAnnotations(q_0, e_5);
              }
            }
        }
      }
    return(t);
  }
  t = l_48;
  t = p_10(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_10;
      t = z_129(t);
    }
  else
    {
      ATerm c_11 = NULL,e_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_10 = ATgetFirst((ATermList) t);
          x_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_10;
      t = b_130(t);
      c_11 = t;
      t = x_10;
      t = foldr_3_0(z_129, a_130, b_130, t);
      e_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_11, e_11);
      t = a_130(t);
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_11 = NULL;
      t = r_128(t);
      k_11 = t;
      t = (ATerm) ATinsert(ATempty, k_11);
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      {
        ATerm u_6 = NULL,v_6 = NULL;
        static ATerm s_2 (ATerm t);
        static ATerm s_2 (ATerm t)
        {
          t = collect_om_2_0(r_128, s_128, t);
          return(t);
        }
        v_6 = t;
        t = SSL_explode_term(v_6);
        if(match_cons(t, sym__2))
          {
            ATerm c_12 = ATgetArgument(t, 0);
            u_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_6;
        t = foldr_3_0(r_2, s_128, s_2, t);
      }
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      n_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(v_2, n_11, o_11, t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm p_11 = NULL;
  if(match_cons(t, sym__2))
    {
      p_11 = ATgetArgument(t, 0);
      if((p_11 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm strategy_argument_warning_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  t = collect_om_2_0(c_111, t_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = sdef_with_property_1_0(z_2, t);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,y_0 = NULL,w_0 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      if(match_cons(i_12, sym_SVar_1))
        {
          ATerm n_12 = ATgetArgument(i_12, 0);
          if((ATgetSymbol((ATermAppl) n_12) != ATmakeSymbol("debug", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm j_12 = ATgetArgument(t, 1);
        if(((ATgetType(j_12) == AT_LIST) && !(ATisEmpty(j_12))))
          {
            w_11 = ATgetFirst((ATermList) j_12);
            {
              ATerm o_12 = (ATerm) ATgetNext((ATermList) j_12);
              if(((ATgetType(o_12) != AT_LIST) || !(ATisEmpty(o_12))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm m_12 = ATgetArgument(t, 2);
        if(((ATgetType(m_12) != AT_LIST) || !(ATisEmpty(m_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_11;
  if(match_cons(t, sym_Match_1))
    {
      y_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_11);
  x_11 = t;
  t = y_11;
  if(match_cons(t, sym_Str_1))
    {
      g_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_11);
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym_Str_1, g_12);
  w_0 = t;
  t = SSLsetAnnotations(w_0, f_12);
  h_12 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, h_12);
  y_0 = t;
  t = SSLsetAnnotations(y_0, x_11);
  t = (ATerm) ATmakeAppl(sym_DebugWarning_1, g_12);
  return(t);
}
ATerm debug_with_incorrect_string_0_0 (ATerm t)
{
  t = strategy_argument_warning_1_0(x_2, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = sdef_with_property_1_0(f_3, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm x_12 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm p_12 = ATgetArgument(t, 0);
      if(match_cons(p_12, sym_SVar_1))
        {
          ATerm s_12 = ATgetArgument(p_12, 0);
          if((ATgetSymbol((ATermAppl) s_12) != ATmakeSymbol("obsolete", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm q_12 = ATgetArgument(t, 1);
        if(((ATgetType(q_12) == AT_LIST) && !(ATisEmpty(q_12))))
          {
            ATerm t_12 = ATgetFirst((ATermList) q_12);
            if(match_cons(t_12, sym_Build_1))
              {
                ATerm w_12 = ATgetArgument(t_12, 0);
                if(match_cons(w_12, sym_Str_1))
                  {
                    x_12 = ATgetArgument(w_12, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            {
              ATerm v_12 = (ATerm) ATgetNext((ATermList) q_12);
              if(((ATgetType(v_12) != AT_LIST) || !(ATisEmpty(v_12))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm r_12 = ATgetArgument(t, 2);
        if(((ATgetType(r_12) != AT_LIST) || !(ATisEmpty(r_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_ObsoleteWarning_1, x_12);
  return(t);
}
ATerm Warning_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_12 = NULL;
      u_12 = t;
      if(match_string(t, "debug-arguments"))
        {
          t = u_12;
          t = k_111(t);
          t = debug_with_incorrect_string_0_0(t);
        }
      else
        {
          if(match_string(t, "obsolete-strategy-calls"))
            {
              t = u_12;
              t = k_111(t);
              t = strategy_invokation_warning_1_0(c_3, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("maybe-unbound-variables", 0, ATtrue)))
                _fail(t);
              t = (ATerm) ATempty;
            }
        }
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
            t = LowerCaseConstructors_1_0(k_111, t);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm i_13 = NULL,h_7 = NULL,i_7 = NULL;
              i_13 = t;
              t = term_z_9;
              h_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_13), term_d_13);
              i_7 = t;
              t = SSL_printnl(h_7, i_7);
              t = (ATerm) ATempty;
            }
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm i_124 (ATerm), ATerm t)
{
  static ATerm m_14 (ATerm t);
  static ATerm m_14 (ATerm t)
  {
    ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
    t = i_124(t);
    h_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_14;
      }
    else
      {
        ATerm s_7 = NULL,f_8 = NULL,b_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_14 = ATgetFirst((ATermList) t);
            j_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_14);
        s_7 = t;
        t = j_14;
        t = m_14(t);
        f_8 = t;
        t = (ATerm) ATinsert(CheckATermList(f_8), i_14);
        b_1 = t;
        t = SSLsetAnnotations(b_1, s_7);
      }
    return(t);
  }
  t = m_14(t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
  v_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_14 = ATgetFirst((ATermList) t);
      u_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_14 = NULL;
            t = u_14;
            {
              static ATerm h_3 (ATerm t);
              static ATerm h_3 (ATerm t)
              {
                ATerm g_13 = t;
                if((PushChoice() == 0))
                  {
                    if((t_14 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_13;
                  }
                return(t);
              }
              t = filter_1_0(h_3, t);
            }
            z_14 = t;
            t = (ATerm) ATinsert(CheckATermList(z_14), t_14);
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            t = v_14;
          }
      }
    }
  else
    {
      t = v_14;
    }
  return(t);
}
ATerm Stratego_warnings_0_0 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,s_14 = NULL;
        t = term_l_13;
        r_14 = t;
        t = term_m_13;
        s_14 = t;
        t = term_n_13;
        t = o_6(r_14, s_14, t);
        t = listtd_1_0(g_3, t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        t = (ATerm) ATempty;
      }
  }
  {
    static ATerm i_3 (ATerm t);
    static ATerm i_3 (ATerm t)
    {
      static ATerm k_3 (ATerm t);
      static ATerm k_3 (ATerm t)
      {
        t = q_14;
        return(t);
      }
      t = Warning_1_0(k_3, t);
      return(t);
    }
    t = filter_1_0(i_3, t);
  }
  t = concat_0_0(t);
  t = print_warnings_0_0(t);
  t = q_14;
  return(t);
}
static ATerm b_6 (ATerm e_58, ATerm f_58, ATerm t)
{
  ATerm d_15 = NULL;
  t = SSL_fputc(e_58, f_58);
  d_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_15);
  return(t);
}
static ATerm c_6 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm e_15 = NULL;
  t = SSL_write_term_to_stream_text(i_42, j_42);
  e_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_15);
  return(t);
}
static ATerm e_6 (ATerm s_122 (ATerm), ATerm z_291, ATerm o_42, ATerm t)
{
  ATerm f_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_291, term_p_13);
  t = i_6(t);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_15, o_42);
  t = s_122(t);
  t = fclose_0_0(t);
  t = o_42;
  return(t);
}
static ATerm d_6 (ATerm e_42, ATerm f_42, ATerm t)
{
  ATerm h_15 = NULL;
  t = SSL_write_term_to_stream_baf(e_42, f_42);
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_15);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm s_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if(match_cons(q_13, sym_Stream_1))
        {
          s_15 = ATgetArgument(q_13, 0);
        }
      else
        _fail(t);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_6(s_15, v_15, t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,c_16 = NULL,f_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      if(match_cons(s_13, sym_Stream_1))
        {
          c_16 = ATgetArgument(s_13, 0);
        }
      else
        _fail(t);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(c_16, f_16, t);
  w_15 = t;
  t = term_t_13;
  x_15 = t;
  t = w_15;
  if(match_cons(t, sym_Stream_1))
    {
      y_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_13, w_15);
  t = b_6(x_15, y_15, t);
  return(t);
}
ATerm output_1_0 (ATerm m_143 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  t = m_143(t);
  j_15 = t;
  {
    ATerm u_13 = t;
    int v_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_15 = NULL,l_15 = NULL;
        t = term_l_13;
        k_15 = t;
        t = term_w_13;
        l_15 = t;
        t = term_x_13;
        t = o_6(k_15, l_15, t);
        LocalPopChoice(v_13);
      }
    else
      {
        t = u_13;
        t = term_y_13;
      }
  }
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_15, j_15);
  {
    ATerm z_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL,n_15 = NULL;
        t = term_l_13;
        m_15 = t;
        t = term_b_14;
        n_15 = t;
        t = term_c_14;
        t = o_6(m_15, n_15, t);
        t = (ATerm) ATmakeAppl(sym__2, i_15, j_15);
        LocalPopChoice(a_14);
        if(match_cons(t, sym__2))
          {
            ATerm d_14 = ATgetArgument(t, 0);
            ATerm e_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(l_3, i_15, j_15, t);
      }
    else
      {
        t = z_13;
        if(match_cons(t, sym__2))
          {
            ATerm f_14 = ATgetArgument(t, 0);
            ATerm g_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(o_3, i_15, j_15, t);
      }
  }
  return(t);
}
static ATerm d_17 (ATerm q_16, ATerm t)
{
  t = SSL_fclose(q_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_16 = ATgetArgument(t, 0);
      {
        ATerm l_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_16);
            LocalPopChoice(n_14);
          }
        else
          {
            t = l_14;
            t = d_17(v_16, t);
          }
      }
    }
  else
    {
      t = d_17(v_16, t);
    }
  return(t);
}
static ATerm f_6 (ATerm k_42, ATerm t)
{
  t = SSL_read_term_from_stream(k_42);
  return(t);
}
static ATerm g_6 (ATerm k_56, ATerm l_56, ATerm t)
{
  t = SSL_strcat(k_56, l_56);
  return(t);
}
static ATerm h_6 (ATerm g_58, ATerm h_58, ATerm t)
{
  ATerm e_17 = NULL;
  t = SSL_fopen(g_58, h_58);
  e_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_17 = NULL;
  t = SSL_stdin_stream();
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_17 = NULL;
  t = SSL_stdout_stream();
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_17 = NULL;
  t = SSL_stderr_stream();
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_17);
  return(t);
}
static ATerm z_18 (ATerm s_17, ATerm t)
{
  ATerm t_17 = NULL;
  t = SSL_explode_term(s_17);
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_14 = ATgetArgument(t, 1);
        if(((ATgetType(w_14) == AT_LIST) && !(ATisEmpty(w_14))))
          {
            t_17 = ATgetFirst((ATermList) w_14);
            {
              ATerm x_14 = (ATerm) ATgetNext((ATermList) w_14);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_17;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_17;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_17;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_17;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm a_19 (ATerm w_17, ATerm x_17, ATerm y_17, ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,e_18 = NULL,d_1 = NULL;
  t = SSLgetAnnotations(y_17);
  b_18 = t;
  t = w_17;
  if(match_cons(t, sym_Path_1))
    {
      e_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_18, x_17);
  d_1 = t;
  t = SSLsetAnnotations(d_1, b_18);
  if(match_cons(t, sym__2))
    {
      z_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(z_17, a_18, t);
  return(t);
}
static ATerm b_19 (ATerm j_18, ATerm k_18, ATerm l_18, ATerm t)
{
  ATerm m_18 = NULL,o_18 = NULL,p_18 = NULL,u_18 = NULL,e_1 = NULL;
  t = SSLgetAnnotations(l_18);
  p_18 = t;
  t = SSL_is_string(j_18);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_18, k_18);
  e_1 = t;
  t = SSLsetAnnotations(e_1, p_18);
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(m_18, o_18, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
      {
        ATerm y_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_18(w_18, t);
            LocalPopChoice(a_15);
          }
        else
          {
            t = y_14;
            {
              ATerm b_15 = t;
              int c_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_19(x_18, y_18, w_18, t);
                  LocalPopChoice(c_15);
                }
              else
                {
                  t = b_15;
                  t = b_19(x_18, y_18, w_18, t);
                }
            }
          }
      }
    }
  else
    {
      t = z_18(w_18, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,k_19 = NULL;
  k_19 = t;
  {
    ATerm g_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_19, term_p_15);
        t = i_6(t);
        LocalPopChoice(o_15);
      }
    else
      {
        t = g_15;
        {
          ATerm m_9 = NULL,n_9 = NULL;
          t = term_q_15;
          n_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_15, k_19);
          t = g_6(n_9, k_19, t);
          m_9 = t;
          t = SSL_perror(m_9);
          _fail(t);
        }
      }
  }
  e_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(f_19, t);
  d_19 = t;
  t = e_19;
  t = fclose_0_0(t);
  t = d_19;
  return(t);
}
ATerm input_1_0 (ATerm n_143 (ATerm), ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL,o_19 = NULL;
      t = term_l_13;
      n_19 = t;
      t = term_b_16;
      o_19 = t;
      t = term_h_16;
      t = o_6(n_19, o_19, t);
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      t = term_i_16;
    }
  t = ReadFromFile_0_0(t);
  t = n_143(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_19 = NULL,u_19 = NULL;
  t = term_l_13;
  r_19 = t;
  t = term_j_16;
  u_19 = t;
  t = term_k_16;
  t = o_6(r_19, u_19, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  {
    ATerm l_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_19;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_16 = ATgetFirst((ATermList) t);
                ATerm o_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_19;
          }
        LocalPopChoice(m_16);
      }
    else
      {
        t = l_16;
        t = (ATerm) ATinsert(ATempty, x_19);
      }
  }
  y_19 = t;
  t = term_y_13;
  z_19 = t;
  t = SSL_printnl(z_19, y_19);
  t = x_19;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_20 = ATgetFirst((ATermList) t);
      g_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_20 = NULL,l_20 = NULL;
        static ATerm p_3 (ATerm t);
        static ATerm p_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_20)), not_null(l_20));
          return(t);
        }
        t = g_20;
        t = o_0(t);
        if(((k_20 != NULL) && (k_20 != t)))
          _fail(t);
        else
          k_20 = t;
        t = f_20;
        t = m_0(t);
        if(((l_20 != NULL) && (l_20 != t)))
          _fail(t);
        else
          l_20 = t;
        t = g_20;
        t = reverse_acc_2_0(m_0, p_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_16;
      t = o_0(t);
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,h_1 = NULL;
  w_20 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_20);
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_20);
  h_1 = t;
  t = SSLsetAnnotations(h_1, u_20);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm c_21 = NULL;
  c_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_21), term_r_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm l_145 (ATerm), ATerm m_145 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_20 = NULL,t_20 = NULL;
      t = term_l_13;
      s_20 = t;
      t = term_j_16;
      t_20 = t;
      t = term_k_16;
      t = o_6(s_20, t_20, t);
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      t = fetch_1_0(q_3, t);
    }
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_145(t);
        t = echo_0_0(t);
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
      }
  }
  t = term_y_16;
  t = echo_0_0(t);
  t = term_z_16;
  q_20 = t;
  t = term_a_17;
  r_20 = t;
  t = term_b_17;
  t = o_6(q_20, r_20, t);
  t = reverse_acc_2_0(_id, r_3, t);
  t = map_1_0(t_3, t);
  t = term_c_17;
  t = echo_0_0(t);
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_145(t);
        {
          ATerm k_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_21 = NULL;
              d_21 = t;
              t = SSL_is_string(d_21);
              t = d_21;
              LocalPopChoice(l_17);
              {
                ATerm e_21 = NULL;
                e_21 = t;
                t = (ATerm) ATinsert(ATempty, e_21);
              }
            }
          else
            {
              t = k_17;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL,j_1 = NULL;
  t_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_21);
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_21);
  j_1 = t;
  t = SSLsetAnnotations(j_1, r_21);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm k_21 = NULL;
  k_21 = t;
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,o_21 = NULL;
        t = term_l_13;
        n_21 = t;
        t = term_j_16;
        o_21 = t;
        t = term_k_16;
        t = o_6(n_21, o_21, t);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        t = fetch_1_0(u_3, t);
      }
  }
  t = k_21;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  if(match_string(t, "-k"))
    {
      t = v_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_21;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,d_22 = NULL;
  z_21 = t;
  t = SSL_string_to_int(z_21);
  a_22 = t;
  t = term_o_17;
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_17, a_22);
  t = r_6(d_22, a_22, t);
  t = z_21;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_p_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, b_4, f_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm f_22 = NULL;
  f_22 = t;
  if(match_string(t, "-S"))
    {
      t = f_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_22;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm g_22 = NULL,j_22 = NULL;
  t = term_q_17;
  g_22 = t;
  t = term_u_9;
  j_22 = t;
  t = term_r_17;
  t = r_6(g_22, j_22, t);
  t = term_u_17;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_v_17;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm k_22 = NULL,n_22 = NULL,o_22 = NULL;
  k_22 = t;
  t = SSL_string_to_int(k_22);
  n_22 = t;
  t = term_q_17;
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, n_22);
  t = r_6(o_22, n_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_22);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_c_18;
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  t = term_d_18;
  p_22 = t;
  t = term_p_16;
  q_22 = t;
  t = term_f_18;
  t = r_6(p_22, q_22, t);
  t = term_g_18;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_h_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, l_4, x_4, t);
      LocalPopChoice(n_18);
    }
  else
    {
      t = i_18;
      {
        ATerm q_18 = t;
        int r_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_5, b_5, c_5, t);
            LocalPopChoice(r_18);
          }
        else
          {
            t = q_18;
            t = Option_3_0(f_5, k_5, m_5, t);
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm l_78, ATerm m_78, ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  t = term_l_13;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_13, l_78, m_78);
  t = lookup_table_0_1(r_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(l_78, m_78, s_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_13, l_78, m_78);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
      t = term_p_16;
      t = e_0(t);
      e_23 = t;
      t = term_z_16;
      f_23 = t;
      t = term_a_17;
      g_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_16, term_a_17, e_23);
      t = p_6(f_23, g_23, e_23, t);
      _fail(t);
    }
  else
    {
      ATerm q_23 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_23 = ATgetFirst((ATermList) t);
          b_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_23;
      t = b_0(t);
      t = term_p_16;
      t = c_0(t);
      q_23 = t;
      t = (ATerm) ATinsert(CheckATermList(b_23), q_23);
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm z_23 = NULL;
  z_23 = t;
  if(match_string(t, "-o"))
    {
      t = z_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = z_23;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm a_24 = NULL,g_24 = NULL;
  a_24 = t;
  t = term_w_13;
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_13, a_24);
  t = r_6(g_24, a_24, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_24);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, q_5, q_6, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm i_24 = NULL;
  i_24 = t;
  if(match_string(t, "-i"))
    {
      t = i_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_24;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL;
  k_24 = t;
  t = term_b_16;
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, k_24);
  t = r_6(l_24, k_24, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_24);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_6, d_7, g_7, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_9), n_24), term_c_19), m_24), term_v_18);
  o_24 = t;
  t = SSL_concat_strings(o_24);
  return(t);
}
ATerm Display_possible_warnings_0_0 (ATerm t)
{
  t = map_1_0(m_7, t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  static ATerm r_25 (ATerm t);
  static ATerm r_25 (ATerm t)
  {
    ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
    q_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_25 = ATgetFirst((ATermList) t);
        p_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_9 = NULL,x_9 = NULL,l_1 = NULL;
          t = SSLgetAnnotations(q_25);
          s_9 = t;
          t = p_25;
          t = r_25(t);
          x_9 = t;
          t = (ATerm) ATinsert(CheckATermList(x_9), o_25);
          l_1 = t;
          t = SSLsetAnnotations(l_1, s_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_25;
        t = p_123(t);
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL,u_24 = NULL;
  q_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_24;
    }
  else
    {
      static ATerm n_7 (ATerm t);
      static ATerm n_7 (ATerm t)
      {
        t = not_null(u_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_24 = ATgetFirst((ATermList) t);
          if(((u_24 != NULL) && (u_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_24;
      t = at_end_1_0(n_7, t);
    }
  return(t);
}
static ATerm f_26 (ATerm v_25, ATerm t)
{
  ATerm w_25 = NULL;
  t = SSL_explode_term(v_25);
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  a_26 = t;
  if(match_cons(t, sym__2))
    {
      y_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
      {
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_7 (ATerm t);
            static ATerm o_7 (ATerm t)
            {
              t = z_25;
              return(t);
            }
            t = y_25;
            t = at_end_1_0(o_7, t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            t = f_26(a_26, t);
          }
      }
    }
  else
    {
      t = f_26(a_26, t);
    }
  return(t);
}
static ATerm z_5 (ATerm r_78, ATerm q_78, ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,m_26 = NULL,n_26 = NULL;
  t = r_78;
  {
    ATerm j_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_26 = NULL;
        t = term_l_13;
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_13, r_78);
        t = o_6(p_26, r_78, t);
        LocalPopChoice(l_19);
      }
    else
      {
        t = j_19;
        t = (ATerm) ATempty;
      }
  }
  j_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_78, j_26);
  t = conc_0_0(t);
  i_26 = t;
  t = term_l_13;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_13, r_78, i_26);
  t = lookup_table_0_1(m_26, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(r_78, i_26, n_26, t);
  t = (ATerm) ATmakeAppl(sym__3, term_l_13, r_78, i_26);
  return(t);
}
static ATerm a_6 (ATerm e_43, ATerm n_303, ATerm t)
{
  static ATerm p_7 (ATerm t);
  static ATerm p_7 (ATerm t)
  {
    if((e_43 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = n_303;
  t = fetch_1_0(p_7, t);
  return(t);
}
ATerm map_1_0 (ATerm a_123 (ATerm), ATerm t)
{
  static ATerm t_27 (ATerm t);
  static ATerm t_27 (ATerm t)
  {
    ATerm l_27 = NULL,p_27 = NULL,s_27 = NULL;
    l_27 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_27;
      }
    else
      {
        ATerm r_10 = NULL,a_11 = NULL,b_11 = NULL,p_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_27 = ATgetFirst((ATermList) t);
            s_27 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_27);
        r_10 = t;
        t = p_27;
        t = a_123(t);
        a_11 = t;
        t = s_27;
        t = t_27(t);
        b_11 = t;
        t = (ATerm) ATinsert(CheckATermList(b_11), a_11);
        p_1 = t;
        t = SSLsetAnnotations(p_1, r_10);
      }
    return(t);
  }
  t = t_27(t);
  return(t);
}
ATerm filter_1_0 (ATerm b_131 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
  t_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_28;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_28 = ATgetFirst((ATermList) t);
          v_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL,s_1 = NULL;
            t = SSLgetAnnotations(t_28);
            r_11 = t;
            t = u_28;
            t = b_131(t);
            u_11 = t;
            t = v_28;
            t = filter_1_0(b_131, t);
            v_11 = t;
            t = (ATerm) ATinsert(CheckATermList(v_11), u_11);
            s_1 = t;
            t = SSLsetAnnotations(s_1, r_11);
            LocalPopChoice(p_19);
          }
        else
          {
            t = m_19;
            t = v_28;
            t = filter_1_0(b_131, t);
          }
      }
    }
  return(t);
}
static ATerm p_6 (ATerm q_63, ATerm r_63, ATerm p_63, ATerm t)
{
  ATerm b_29 = NULL,d_29 = NULL,e_29 = NULL,k_29 = NULL,l_29 = NULL;
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_63, r_63);
  {
    ATerm q_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_19 = ATgetArgument(t, 0);
            ATerm v_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_63, r_63);
        t = o_6(q_63, r_63, t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATempty;
      }
  }
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_63, r_63, (ATerm) ATinsert(CheckATermList(d_29), p_63));
  t = lookup_table_0_1(q_63, t);
  l_29 = t;
  t = (ATerm) ATinsert(CheckATermList(d_29), p_63);
  e_29 = t;
  t = l_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(r_63, e_29, k_29, t);
  t = b_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,z_29 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_30 = NULL,b_30 = NULL,e_30 = NULL;
      t = term_p_16;
      t = k_0(t);
      a_30 = t;
      t = term_z_16;
      b_30 = t;
      t = term_a_17;
      e_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_16, term_a_17, a_30);
      t = p_6(b_30, e_30, a_30, t);
      _fail(t);
    }
  else
    {
      ATerm k_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_29 = ATgetFirst((ATermList) t);
          v_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_29;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_29 = ATgetFirst((ATermList) t);
          z_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_29;
      t = f_0(t);
      t = w_29;
      t = h_0(t);
      k_30 = t;
      t = (ATerm) ATinsert(CheckATermList(z_29), k_30);
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  if(match_string(t, "--warning"))
    {
      t = q_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = q_30;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_20), term_j_20), term_e_20), term_b_20);
  t = Display_possible_warnings_0_0(t);
  u_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(u_31), term_y_20), term_x_20), term_p_20);
  v_31 = t;
  t = SSL_concat_strings(v_31);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL;
  u_30 = t;
  t = SSL_explode_term(u_30);
  if(match_cons(t, sym__2))
    {
      ATerm z_20 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_20) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_21 = ATgetArgument(t, 1);
        if(((ATgetType(a_21) == AT_LIST) && !(ATisEmpty(a_21))))
          {
            t_30 = ATgetFirst((ATermList) a_21);
            {
              ATerm b_21 = (ATerm) ATgetNext((ATermList) a_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_30;
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  d_31 = t;
  t = SSL_explode_term(d_31);
  if(match_cons(t, sym__2))
    {
      ATerm f_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_21 = ATgetArgument(t, 1);
        if(((ATgetType(g_21) == AT_LIST) && !(ATisEmpty(g_21))))
          {
            c_31 = ATgetFirst((ATermList) g_21);
            {
              ATerm h_21 = (ATerm) ATgetNext((ATermList) g_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_31;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL;
  static ATerm r_7 (ATerm t);
  static ATerm r_7 (ATerm t)
  {
    if(((p_30 != NULL) && (p_30 != t)))
      _fail(t);
    else
      p_30 = t;
    {
      ATerm i_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_30;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
            _fail(t);
          t = p_30;
          LocalPopChoice(j_21);
          {
            ATerm r_30 = NULL,s_30 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_20), term_j_20), term_e_20), term_b_20);
            t = map_1_0(w_7, t);
            r_30 = t;
            t = term_m_13;
            s_30 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_m_13, r_30);
            t = r_6(s_30, r_30, t);
          }
        }
      else
        {
          t = i_21;
          t = p_30;
          {
            ATerm l_21 = t;
            int m_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_explode_string(p_30);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm p_21 = ATgetFirst((ATermList) t);
                    if(((ATgetType(p_21) != AT_INT) || (ATgetInt((ATermInt) p_21) != 110)))
                      _fail(t);
                    {
                      ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
                      if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
                        {
                          ATerm u_21 = ATgetFirst((ATermList) q_21);
                          if(((ATgetType(u_21) != AT_INT) || (ATgetInt((ATermInt) u_21) != 111)))
                            _fail(t);
                          {
                            ATerm w_21 = (ATerm) ATgetNext((ATermList) q_21);
                            if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
                              {
                                ATerm x_21 = ATgetFirst((ATermList) w_21);
                                if(((ATgetType(x_21) != AT_INT) || (ATgetInt((ATermInt) x_21) != 45)))
                                  _fail(t);
                                if(((n_30 != NULL) && (n_30 != (ATerm) ATgetNext((ATermList) w_21))))
                                  _fail((ATerm) ATgetNext((ATermList) w_21));
                                else
                                  n_30 = (ATerm) ATgetNext((ATermList) w_21);
                              }
                            else
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = p_30;
                LocalPopChoice(m_21);
                {
                  ATerm w_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
                  t = SSL_implode_string(n_30);
                  if(((o_30 != NULL) && (o_30 != t)))
                    _fail(t);
                  else
                    o_30 = t;
                  t = term_l_13;
                  z_30 = t;
                  t = term_m_13;
                  a_31 = t;
                  t = term_n_13;
                  t = o_6(z_30, a_31, t);
                  {
                    static ATerm x_7 (ATerm t);
                    static ATerm x_7 (ATerm t)
                    {
                      if((o_30 != t))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = filter_1_0(x_7, t);
                  }
                  w_30 = t;
                  t = term_m_13;
                  y_30 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_m_13, w_30);
                  t = r_6(y_30, w_30, t);
                }
              }
            else
              {
                t = l_21;
                t = p_30;
                {
                  ATerm y_21 = t;
                  int b_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_31 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_20), term_j_20), term_e_20), term_b_20);
                      t = map_1_0(z_7, t);
                      b_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_30, b_31);
                      t = a_6(p_30, b_31, t);
                      t = p_30;
                      LocalPopChoice(b_22);
                      {
                        ATerm e_31 = NULL,f_31 = NULL;
                        t = term_m_13;
                        e_31 = t;
                        t = (ATerm) ATinsert(ATempty, p_30);
                        f_31 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_m_13, (ATerm) ATinsert(ATempty, p_30));
                        t = z_5(e_31, f_31, t);
                      }
                    }
                  else
                    {
                      t = y_21;
                      {
                        ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,q_31 = NULL,t_31 = NULL;
                        t = term_l_13;
                        q_31 = t;
                        t = term_j_16;
                        t_31 = t;
                        t = term_k_16;
                        t = o_6(q_31, t_31, t);
                        g_31 = t;
                        t = term_z_9;
                        i_31 = t;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_22), p_30), term_c_22), g_31);
                        j_31 = t;
                        t = SSL_printnl(i_31, j_31);
                        t = term_v_9;
                        h_31 = t;
                        t = SSL_exit(h_31);
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_22), p_30), term_c_22), g_31);
                      }
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  t = ArgOption_3_0(q_7, r_7, t_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_16;
  t = whoami_0_0(t);
  w_31 = t;
  t = term_z_9;
  y_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_22), w_31);
  z_31 = t;
  t = SSL_printnl(y_31, z_31);
  t = term_v_9;
  x_31 = t;
  t = SSL_exit(x_31);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  t = term_l_13;
  d_32 = t;
  t = term_j_16;
  e_32 = t;
  t = term_k_16;
  t = o_6(d_32, e_32, t);
  return(t);
}
static ATerm j_6 (ATerm z_61, ATerm a_62, ATerm t)
{
  ATerm i_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_61, a_62);
      LocalPopChoice(l_22);
    }
  else
    {
      t = i_22;
      t = SSL_addr(z_61, a_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t)
{
  ATerm g_32 = NULL,i_32 = NULL,j_32 = NULL;
  g_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_32;
      t = x_129(t);
    }
  else
    {
      ATerm o_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_32 = ATgetFirst((ATermList) t);
          j_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_32;
      t = foldr_2_0(x_129, y_129, t);
      o_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_32, o_32);
      t = y_129(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = term_u_9;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      l_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_6(k_12, l_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_32 = NULL,d_12 = NULL,e_12 = NULL;
  t = times_0_0(t);
  e_12 = t;
  t = SSL_explode_term(e_12);
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12;
  t = foldr_2_0(a_8, b_8, t);
  r_32 = t;
  t = SSL_TicksToSeconds(r_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_33;
        if((g_33 != t))
          {
            _fail(t);
          }
        t = f_33;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
        {
          ATerm v_22 = t;
          int w_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_33, h_33);
              LocalPopChoice(w_22);
            }
          else
            {
              t = v_22;
              t = SSL_gtr(g_33, h_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_33, h_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_140 (ATerm), ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_33 = NULL,s_33 = NULL,v_33 = NULL;
        t = term_l_13;
        s_33 = t;
        t = term_q_17;
        v_33 = t;
        t = term_z_22;
        t = o_6(s_33, v_33, t);
        r_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_33, term_v_9);
        t = geq_0_0(t);
        t = p_33;
        t = i_140(t);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = p_33;
      }
  }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL,c_34 = NULL,f_34 = NULL;
  t = run_time_0_0(t);
  x_33 = t;
  t = term_p_16;
  t = whoami_0_0(t);
  y_33 = t;
  t = term_z_9;
  c_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_23), x_33), term_c_23), y_33);
  f_34 = t;
  t = SSL_printnl(c_34, f_34);
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_23), x_33), term_c_23), y_33));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_9;
  h_34 = t;
  t = SSL_exit(h_34);
  return(t);
}
static ATerm s_6 (ATerm f_68, ATerm g_68, ATerm h_68, ATerm t)
{
  ATerm i_34 = NULL;
  t = SSL_hashtable_put(h_68, f_68, g_68);
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_34);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_65, ATerm t)
{
  ATerm y_34 = NULL;
  t = table_hashtable_0_0(t);
  y_34 = t;
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_13 = NULL;
        t = y_34;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_6(c_65, c_13, t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        {
          ATerm h_13 = NULL;
          t = c_65;
          t = table_create_0_0(t);
          t = y_34;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_6(c_65, h_13, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_68, ATerm o_68, ATerm t)
{
  ATerm f_35 = NULL;
  t = SSL_hashtable_create(n_68, o_68);
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_35);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,m_35 = NULL,o_35 = NULL,p_35 = NULL;
  h_35 = t;
  t = term_j_23;
  o_35 = t;
  t = term_k_23;
  p_35 = t;
  t = h_35;
  t = new_hashtable_0_2(o_35, p_35, t);
  i_35 = t;
  t = h_35;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(h_35, i_35, m_35, t);
  t = h_35;
  return(t);
}
static ATerm l_6 (ATerm k_68, ATerm l_68, ATerm t)
{
  ATerm s_35 = NULL;
  t = SSL_hashtable_remove(l_68, k_68);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_35);
  return(t);
}
static ATerm m_6 (ATerm p_68, ATerm t)
{
  ATerm t_35 = NULL;
  t = SSL_hashtable_destroy(p_68);
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_35);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_35 = NULL;
  t = SSL_table_hashtable();
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_35);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  x_35 = t;
  t = table_hashtable_0_0(t);
  z_35 = t;
  t = lookup_table_0_1(x_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(b_36, t);
  t = z_35;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(x_35, a_36, t);
  t = x_35;
  return(t);
}
ATerm fetch_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  static ATerm b_37 (ATerm t);
  static ATerm b_37 (ATerm t)
  {
    ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL;
    y_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_36 = ATgetFirst((ATermList) t);
        a_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_13 = NULL,r_13 = NULL,a_2 = NULL;
          t = SSLgetAnnotations(y_36);
          o_13 = t;
          t = z_36;
          t = i_123(t);
          r_13 = t;
          t = (ATerm) ATinsert(CheckATermList(a_37), r_13);
          a_2 = t;
          t = SSLsetAnnotations(a_2, o_13);
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
          {
            ATerm k_14 = NULL,p_14 = NULL,b_2 = NULL;
            t = SSLgetAnnotations(y_36);
            k_14 = t;
            t = a_37;
            t = b_37(t);
            p_14 = t;
            t = (ATerm) ATinsert(CheckATermList(p_14), z_36);
            b_2 = t;
            t = SSLsetAnnotations(b_2, k_14);
          }
        }
    }
    return(t);
  }
  t = b_37(t);
  return(t);
}
static ATerm t_6 (ATerm i_68, ATerm j_68, ATerm t)
{
  t = SSL_hashtable_get(j_68, i_68);
  return(t);
}
static ATerm o_6 (ATerm j_65, ATerm k_65, ATerm t)
{
  ATerm e_37 = NULL;
  t = lookup_table_0_1(j_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(k_65, e_37, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL;
  t = term_n_23;
  g_37 = t;
  t = term_p_16;
  h_37 = t;
  t = term_o_23;
  t = r_6(g_37, h_37, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_p_23;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,m_37 = NULL,n_37 = NULL;
  t = term_n_23;
  m_37 = t;
  t = term_p_16;
  n_37 = t;
  t = term_o_23;
  t = r_6(m_37, n_37, t);
  t = term_r_23;
  i_37 = t;
  t = term_p_16;
  j_37 = t;
  t = term_v_23;
  t = r_6(i_37, j_37, t);
  t = term_x_23;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_b_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_24 = t;
  int d_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_8, j_8, k_8, t);
      LocalPopChoice(d_24);
    }
  else
    {
      t = c_24;
      t = Option_3_0(m_8, n_8, o_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,y_6 = NULL;
  t_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_37 = ATgetFirst((ATermList) t);
      q_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_37);
  o_37 = t;
  t = p_37;
  t = t_92(t);
  r_37 = t;
  t = q_37;
  t = u_92(t);
  s_37 = t;
  t = (ATerm) ATinsert(CheckATermList(s_37), r_37);
  y_6 = t;
  t = SSLsetAnnotations(y_6, o_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_145 (ATerm), ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL,d_38 = NULL,e_38 = NULL,b_7 = NULL;
  y_37 = t;
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_24;
        t = g_145(t);
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
      }
  }
  t = y_37;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_38 = ATgetFirst((ATermList) t);
      b_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_37);
  z_37 = t;
  t = term_j_16;
  e_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_16, a_38);
  t = r_6(e_38, a_38, t);
  t = b_38;
  {
    static ATerm o_38 (ATerm t);
    static ATerm o_38 (ATerm t)
    {
      ATerm j_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_38 = NULL;
              h_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_38;
              LocalPopChoice(t_24);
            }
          else
            {
              t = s_24;
              t = g_145(t);
              t = Cons_2_0(_id, o_38, t);
            }
          LocalPopChoice(p_24);
        }
      else
        {
          t = j_24;
          {
            ATerm k_38 = NULL,l_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_38 = ATgetFirst((ATermList) t);
                l_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_38), (ATerm) ATmakeAppl(sym_Undefined_1, k_38));
          }
        }
      return(t);
    }
    t = o_38(t);
  }
  d_38 = t;
  t = (ATerm) ATinsert(CheckATermList(d_38), (ATerm) ATmakeAppl(sym_Program_1, a_38));
  b_7 = t;
  t = SSLsetAnnotations(b_7, z_37);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  if(match_string(t, "--help"))
    {
      t = b_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_39;
        }
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm c_39 = NULL,d_39 = NULL;
  t = term_v_24;
  c_39 = t;
  t = term_p_16;
  d_39 = t;
  t = term_w_24;
  t = r_6(c_39, d_39, t);
  t = term_x_24;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_y_24;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm d_145 (ATerm), ATerm e_145 (ATerm), ATerm f_145 (ATerm), ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  v_38 = t;
  t = term_z_16;
  w_38 = t;
  t = term_z_24;
  t = lookup_table_0_1(w_38, t);
  a_39 = t;
  t = term_a_17;
  x_38 = t;
  t = (ATerm) ATempty;
  y_38 = t;
  t = a_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(x_38, y_38, z_38, t);
  t = v_38;
  {
    static ATerm r_8 (ATerm t);
    static ATerm r_8 (ATerm t)
    {
      ATerm a_25 = t;
      int b_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_145(t);
          LocalPopChoice(b_25);
        }
      else
        {
          t = a_25;
          {
            ATerm c_25 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_8, u_8, v_8, t);
                LocalPopChoice(d_25);
              }
            else
              {
                t = c_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_8, t);
  }
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_39 = NULL;
        o_39 = t;
        {
          ATerm g_25 = t;
          int h_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_15 = NULL;
              t = o_39;
              {
                ATerm i_25 = t;
                int j_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_15 = NULL,u_15 = NULL;
                    t = term_l_13;
                    t_15 = t;
                    t = term_v_24;
                    u_15 = t;
                    t = term_k_25;
                    t = o_6(t_15, u_15, t);
                    LocalPopChoice(j_25);
                  }
                else
                  {
                    t = i_25;
                    t = fetch_1_0(w_8, t);
                  }
              }
              t = o_39;
              t = e_145(t);
              t = term_u_9;
              r_15 = t;
              t = SSL_exit(r_15);
              LocalPopChoice(h_25);
            }
          else
            {
              t = g_25;
              {
                ATerm d_16 = NULL,e_16 = NULL,g_16 = NULL;
                t = term_l_13;
                e_16 = t;
                t = term_n_23;
                g_16 = t;
                t = term_l_25;
                t = o_6(e_16, g_16, t);
                t = o_39;
                t = f_145(t);
                t = term_u_9;
                d_16 = t;
                t = SSL_exit(d_16);
              }
            }
        }
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        {
          ATerm m_25 = t;
          int n_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL;
              static ATerm x_8 (ATerm t);
              static ATerm x_8 (ATerm t)
              {
                ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,z_8 = NULL;
                u_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_39);
                s_39 = t;
                t = t_39;
                if(((t_38 != NULL) && (t_38 != t)))
                  _fail(t);
                else
                  t_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_39);
                z_8 = t;
                t = SSLsetAnnotations(z_8, s_39);
                return(t);
              }
              t = fetch_1_0(x_8, t);
              t = term_z_9;
              q_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_38)), term_s_25);
              r_39 = t;
              t = SSL_printnl(q_39, r_39);
              t = (ATerm) ATmakeAppl(sym__2, term_z_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_38)), term_s_25));
              t = e_145(t);
              t = term_v_9;
              p_39 = t;
              t = SSL_exit(p_39);
              LocalPopChoice(n_25);
            }
          else
            {
              t = m_25;
            }
        }
      }
  }
  u_38 = t;
  t = term_z_16;
  t = table_destroy_0_0(t);
  t = u_38;
  return(t);
}
ATerm option_wrap_5_0 (ATerm g_143 (ATerm), ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL;
  t = parse_options_3_0(g_143, h_143, i_143, t);
  z_39 = t;
  t = term_t_25;
  t = table_create_0_0(t);
  t = term_t_25;
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_25, term_u_25, z_39);
  t = lookup_table_0_1(a_40, t);
  d_40 = t;
  t = term_u_25;
  b_40 = t;
  t = d_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(b_40, z_39, c_40, t);
  t = z_39;
  t = j_143(t);
  {
    ATerm x_25 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(b_26);
      }
    else
      {
        t = x_25;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm c_26 = t;
  int d_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(d_26);
    }
  else
    {
      t = c_26;
      {
        ATerm e_26 = t;
        int g_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(g_26);
          }
        else
          {
            t = e_26;
            {
              ATerm h_26 = t;
              int k_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(k_26);
                }
              else
                {
                  t = h_26;
                  {
                    ATerm l_26 = t;
                    int o_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(b_9, c_9, d_9, t);
                        LocalPopChoice(o_26);
                      }
                    else
                      {
                        t = l_26;
                        {
                          ATerm q_26 = t;
                          int r_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(r_26);
                            }
                          else
                            {
                              t = q_26;
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
static ATerm a_9 (ATerm t)
{
  t = input_1_0(e_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL;
  t = term_b_14;
  f_40 = t;
  t = term_p_16;
  g_40 = t;
  t = term_s_26;
  t = r_6(f_40, g_40, t);
  t = term_t_26;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  t = term_u_26;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = output_1_0(Stratego_warnings_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(y_8, default_system_usage_0_0, default_system_about_0_0, _id, a_9, t);
  return(t);
}
