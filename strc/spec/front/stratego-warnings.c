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
static ATerm term_l_27;
static ATerm term_k_27;
static ATerm term_j_27;
static ATerm term_v_26;
static ATerm term_u_26;
static ATerm term_t_26;
static ATerm term_l_26;
static ATerm term_k_26;
static ATerm term_o_25;
static ATerm term_n_25;
static ATerm term_m_25;
static ATerm term_l_25;
static ATerm term_k_25;
static ATerm term_f_25;
static ATerm term_a_25;
static ATerm term_z_24;
static ATerm term_y_24;
static ATerm term_x_24;
static ATerm term_w_24;
static ATerm term_t_24;
static ATerm term_s_24;
static ATerm term_h_24;
static ATerm term_f_24;
static ATerm term_c_24;
static ATerm term_b_24;
static ATerm term_x_23;
static ATerm term_i_23;
static ATerm term_h_23;
static ATerm term_d_23;
static ATerm term_v_21;
static ATerm term_u_21;
static ATerm term_r_21;
static ATerm term_z_20;
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
static ATerm term_l_19;
static ATerm term_j_19;
static ATerm term_i_19;
static ATerm term_h_19;
static ATerm term_g_19;
static ATerm term_c_19;
static ATerm term_q_18;
static ATerm term_n_18;
static ATerm term_i_18;
static ATerm term_h_18;
static ATerm term_g_18;
static ATerm term_f_18;
static ATerm term_d_18;
static ATerm term_c_18;
static ATerm term_v_17;
static ATerm term_u_17;
static ATerm term_r_17;
static ATerm term_k_17;
static ATerm term_j_17;
static ATerm term_i_17;
static ATerm term_c_17;
static ATerm term_b_17;
static ATerm term_w_16;
static ATerm term_t_16;
static ATerm term_n_16;
static ATerm term_m_16;
static ATerm term_l_16;
static ATerm term_k_16;
static ATerm term_j_16;
static ATerm term_b_16;
static ATerm term_a_16;
static ATerm term_f_14;
static ATerm term_e_14;
static ATerm term_b_14;
static ATerm term_a_14;
static ATerm term_z_13;
static ATerm term_w_13;
static ATerm term_t_13;
static ATerm term_s_13;
static ATerm term_q_13;
static ATerm term_p_13;
static ATerm term_g_13;
static ATerm term_y_10;
static ATerm term_u_10;
static ATerm term_t_10;
static ATerm term_d_10;
static ATerm term_c_10;
static ATerm term_z_9;
static ATerm term_y_9;
static ATerm term_w_9;
static ATerm term_v_9;
static ATerm term_u_9;
static ATerm term_t_9;
static ATerm term_r_9;
static ATerm term_q_9;
static ATerm term_p_9;
static ATerm term_o_9;
static ATerm term_k_9;
static ATerm term_i_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: lowercase constructor name found: ", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: possibly missing build operator in debug strategy in \"", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  debug(", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")\n", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: obsolete strategy or rule invoked from \"", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\":\n  ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": \"", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" warning(s)\n", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING incorrect parameter passed to -W switch: ", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_q_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_e_14);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_j_16);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_m_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_i_17);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_y_9);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_9);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_t_16);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("                      ", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [ ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" ]\n", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("        missing build operator", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("on", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, term_d_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete strategies", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym__3, term_h_20, term_i_20, term_d_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound variables", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("off", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym__3, term_m_20, term_n_20, term_o_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case-constructors", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case constructors", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__3, term_x_20, term_y_20, term_d_20);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-W,--warning C   Report warnings falling in category C. Categories:\n", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("                      all                      all categories \n", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("                      no-C                     no warnings in category C\n", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": no such warning", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_v_17);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_s_24, term_t_16);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_t_16);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_t_16);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym__3, term_c_17, term_i_17, (ATerm) ATempty);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_k_25);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_s_24);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_t_16);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm LowerCaseConstructors_1_0 (ATerm l_111 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm sdef_with_property_1_0 (ATerm h_111 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm u_5 (ATerm g_111 (ATerm), ATerm y_23, ATerm w_23, ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm v_5 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm t);
static ATerm t_8 (ATerm j_7, ATerm k_7, ATerm l_7, ATerm t);
ATerm map_apply_1_0 (ATerm i_111 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm strategy_invokation_warning_1_0 (ATerm e_111 (ATerm), ATerm t);
static ATerm w_5 (ATerm p_127 (ATerm), ATerm q_127 (ATerm), ATerm p_48, ATerm o_48, ATerm t);
static ATerm x_5 (ATerm m_127 (ATerm), ATerm l_48, ATerm k_48, ATerm t);
ATerm foldr_3_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
ATerm collect_om_2_0 (ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
ATerm strategy_argument_warning_1_0 (ATerm f_111 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm debug_with_incorrect_string_0_0 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm Warning_1_0 (ATerm n_111 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm l_124 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm Stratego_warnings_0_0 (ATerm t);
static ATerm b_6 (ATerm e_58, ATerm f_58, ATerm t);
static ATerm c_6 (ATerm i_42, ATerm j_42, ATerm t);
static ATerm e_6 (ATerm v_122 (ATerm), ATerm w_292, ATerm o_42, ATerm t);
static ATerm d_6 (ATerm e_42, ATerm f_42, ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm output_1_0 (ATerm p_143 (ATerm), ATerm t);
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
ATerm input_1_0 (ATerm q_143 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm o_145 (ATerm), ATerm p_145 (ATerm), ATerm t);
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
ATerm at_end_1_0 (ATerm s_123 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_26 (ATerm w_25, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm z_5 (ATerm r_78, ATerm q_78, ATerm t);
static ATerm a_6 (ATerm e_43, ATerm k_304, ATerm t);
static ATerm q_7 (ATerm t);
ATerm get_all_warnings_0_0 (ATerm t);
ATerm filter_1_0 (ATerm e_131 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
ATerm get_default_warnings_0_0 (ATerm t);
ATerm fetch_elem_1_0 (ATerm n_123 (ATerm), ATerm t);
ATerm warning_exists_0_0 (ATerm t);
ATerm map_1_0 (ATerm d_123 (ATerm), ATerm t);
static ATerm p_6 (ATerm q_63, ATerm r_63, ATerm p_63, ATerm t);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm x_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_6 (ATerm z_61, ATerm a_62, ATerm t);
ATerm foldr_2_0 (ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_140 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
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
ATerm fetch_1_0 (ATerm l_123 (ATerm), ATerm t);
static ATerm t_6 (ATerm i_68, ATerm j_68, ATerm t);
static ATerm o_6 (ATerm j_65, ATerm k_65, ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_145 (ATerm), ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm parse_options_3_0 (ATerm g_145 (ATerm), ATerm h_145 (ATerm), ATerm i_145 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm l_143 (ATerm), ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), v_1), term_i_9);
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
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_3), term_o_9), (ATerm) ATinsert(ATempty, term_o_9));
            t = conc_0_0(t);
            w_2 = t;
            t = SSL_implode_string(w_2);
            p_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_9), p_2), term_r_9), term_q_9), v_1), term_p_9);
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_9), y_1), term_w_9), w_1), term_v_9), v_1), term_u_9);
          m_3 = t;
          t = SSL_concat_strings(m_3);
        }
    }
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_y_9;
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
  t = term_z_9;
  return(t);
}
ATerm print_warnings_0_0 (ATerm t)
{
  ATerm e_2 = NULL;
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 = NULL;
      f_2 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_2;
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
        t = map_1_0(mk_warning_0_0, t);
        g_2 = t;
        t = foldr_3_0(d_0, j_0, l_0, t);
        e_2 = t;
        t = term_c_10;
        j_2 = t;
        t = SSL_print(j_2, g_2);
        t = term_c_10;
        h_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), e_2), term_k_9);
        i_2 = t;
        t = SSL_print(h_2, i_2);
        t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), e_2), term_k_9));
      }
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm e_10 = t;
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
        ATerm f_10 = t;
        int g_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(n_2, o_2);
            LocalPopChoice(g_10);
          }
        else
          {
            t = f_10;
            t = SSL_gtr(n_2, o_2);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, n_2, o_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_10;
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
        ATerm h_10 = ATgetArgument(t, 1);
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
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 = NULL;
            t = j_3;
            {
              static ATerm v_0 (ATerm t);
              static ATerm v_0 (ATerm t)
              {
                ATerm n_10 = t;
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
                    t = n_10;
                  }
                return(t);
              }
              t = filter_1_0(v_0, t);
            }
            s_3 = t;
            t = (ATerm) ATinsert(CheckATermList(s_3), e_3);
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
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
    ATerm o_10 = t;
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
        t = o_10;
      }
  }
  t = SSL_explode_string(w_3);
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_3), term_o_9), (ATerm) ATinsert(ATempty, term_o_9));
  t = conc_0_0(t);
  z_3 = t;
  t = SSL_implode_string(z_3);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym_ConstructorWarning_1, x_3);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm q_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 = NULL;
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_10, c_4);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, c_4, term_u_10);
      t = leq_0_0(t);
      t = c_4;
      LocalPopChoice(s_10);
      {
        ATerm d_4 = NULL,e_4 = NULL;
        d_4 = t;
        t = term_y_10;
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_4, term_y_10);
        t = j_6(d_4, e_4, t);
      }
    }
  else
    {
      t = q_10;
    }
  return(t);
}
ATerm LowerCaseConstructors_1_0 (ATerm l_111 (ATerm), ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("lower-case-constructors", 0, ATtrue)))
    _fail(t);
  t = l_111(t);
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
ATerm sdef_with_property_1_0 (ATerm h_111 (ATerm), ATerm t)
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
  t = collect_om_2_0(h_111, a_1, t);
  {
    ATerm z_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_10;
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
static ATerm u_5 (ATerm g_111 (ATerm), ATerm y_23, ATerm w_23, ATerm t)
{
  ATerm g_5 = NULL;
  t = g_111(t);
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
    ATerm d_11 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_11;
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
          ATerm f_11 = ATgetArgument(t, 1);
        }
        {
          ATerm g_11 = ATgetArgument(t, 2);
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
      ATerm h_11 = t;
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
          t = h_11;
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
      ATerm i_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_11 = ATgetArgument(t, 1);
        if(((ATgetType(j_11) == AT_LIST) && !(ATisEmpty(j_11))))
          {
            u_7 = ATgetFirst((ATermList) j_11);
            {
              ATerm l_11 = (ATerm) ATgetNext((ATermList) j_11);
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
ATerm map_apply_1_0 (ATerm i_111 (ATerm), ATerm t)
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
          ATerm m_11 = t;
          int q_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_8(d_8, e_8, c_8, t);
              LocalPopChoice(q_11);
            }
          else
            {
              t = m_11;
              {
                ATerm p_8 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, d_8, i_8);
                t = i_111(t);
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
        ATerm s_11 = ATgetArgument(t, 1);
        if(match_cons(s_11, sym__2))
          {
            t_4 = ATgetArgument(s_11, 0);
            w_4 = ATgetArgument(s_11, 1);
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
ATerm strategy_invokation_warning_1_0 (ATerm e_111 (ATerm), ATerm t)
{
  ATerm t_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_9 = NULL,j_4 = NULL;
      j_9 = t;
      t = collect_om_2_0(e_111, r_1, t);
      t = concat_0_0(t);
      {
        ATerm a_12 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_12;
          }
      }
      j_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_9, j_4);
      t = map_apply_1_0(c_2, t);
      LocalPopChoice(z_11);
    }
  else
    {
      t = t_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
static ATerm w_5 (ATerm p_127 (ATerm), ATerm q_127 (ATerm), ATerm p_48, ATerm o_48, ATerm t)
{
  t = q_127(t);
  {
    static ATerm d_2 (ATerm t);
    static ATerm d_2 (ATerm t)
    {
      ATerm l_9 = NULL;
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_48, l_9);
      t = p_127(t);
      return(t);
    }
    t = fetch_1_0(d_2, t);
  }
  t = o_48;
  return(t);
}
static ATerm x_5 (ATerm m_127 (ATerm), ATerm l_48, ATerm k_48, ATerm t)
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
          ATerm b_12 = t;
          int c_12 = stack_ptr;
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
                t = w_5(m_127, m_2, l_10, m_10, t);
              }
              t = p_10(t);
              LocalPopChoice(c_12);
            }
          else
            {
              t = b_12;
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
ATerm foldr_3_0 (ATerm c_130 (ATerm), ATerm d_130 (ATerm), ATerm e_130 (ATerm), ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_10;
      t = c_130(t);
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
      t = e_130(t);
      c_11 = t;
      t = x_10;
      t = foldr_3_0(c_130, d_130, e_130, t);
      e_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_11, e_11);
      t = d_130(t);
    }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_11 = NULL;
      t = u_128(t);
      k_11 = t;
      t = (ATerm) ATinsert(ATempty, k_11);
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm u_6 = NULL,v_6 = NULL;
        static ATerm s_2 (ATerm t);
        static ATerm s_2 (ATerm t)
        {
          t = collect_om_2_0(u_128, v_128, t);
          return(t);
        }
        v_6 = t;
        t = SSL_explode_term(v_6);
        if(match_cons(t, sym__2))
          {
            ATerm m_12 = ATgetArgument(t, 0);
            u_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_6;
        t = foldr_3_0(r_2, v_128, s_2, t);
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
ATerm strategy_argument_warning_1_0 (ATerm f_111 (ATerm), ATerm t)
{
  t = collect_om_2_0(f_111, t_2, t);
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
      ATerm n_12 = ATgetArgument(t, 0);
      if(match_cons(n_12, sym_SVar_1))
        {
          ATerm q_12 = ATgetArgument(n_12, 0);
          if((ATgetSymbol((ATermAppl) q_12) != ATmakeSymbol("debug", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm o_12 = ATgetArgument(t, 1);
        if(((ATgetType(o_12) == AT_LIST) && !(ATisEmpty(o_12))))
          {
            w_11 = ATgetFirst((ATermList) o_12);
            {
              ATerm r_12 = (ATerm) ATgetNext((ATermList) o_12);
              if(((ATgetType(r_12) != AT_LIST) || !(ATisEmpty(r_12))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm p_12 = ATgetArgument(t, 2);
        if(((ATgetType(p_12) != AT_LIST) || !(ATisEmpty(p_12))))
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
      ATerm s_12 = ATgetArgument(t, 0);
      if(match_cons(s_12, sym_SVar_1))
        {
          ATerm w_12 = ATgetArgument(s_12, 0);
          if((ATgetSymbol((ATermAppl) w_12) != ATmakeSymbol("obsolete", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm t_12 = ATgetArgument(t, 1);
        if(((ATgetType(t_12) == AT_LIST) && !(ATisEmpty(t_12))))
          {
            ATerm y_12 = ATgetFirst((ATermList) t_12);
            if(match_cons(y_12, sym_Build_1))
              {
                ATerm a_13 = ATgetArgument(y_12, 0);
                if(match_cons(a_13, sym_Str_1))
                  {
                    x_12 = ATgetArgument(a_13, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            {
              ATerm z_12 = (ATerm) ATgetNext((ATermList) t_12);
              if(((ATgetType(z_12) != AT_LIST) || !(ATisEmpty(z_12))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm v_12 = ATgetArgument(t, 2);
        if(((ATgetType(v_12) != AT_LIST) || !(ATisEmpty(v_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_ObsoleteWarning_1, x_12);
  return(t);
}
ATerm Warning_1_0 (ATerm n_111 (ATerm), ATerm t)
{
  ATerm b_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_12 = NULL;
      u_12 = t;
      if(match_string(t, "debug-arguments"))
        {
          t = u_12;
          t = n_111(t);
          t = debug_with_incorrect_string_0_0(t);
        }
      else
        {
          if(match_string(t, "obsolete-strategy-calls"))
            {
              t = u_12;
              t = n_111(t);
              t = strategy_invokation_warning_1_0(c_3, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("maybe-unbound-variables", 0, ATtrue)))
                _fail(t);
              t = (ATerm) ATempty;
            }
        }
      LocalPopChoice(d_13);
    }
  else
    {
      t = b_13;
      {
        ATerm e_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LowerCaseConstructors_1_0(n_111, t);
            LocalPopChoice(f_13);
          }
        else
          {
            t = e_13;
            {
              ATerm i_13 = NULL,h_7 = NULL,i_7 = NULL;
              i_13 = t;
              t = term_c_10;
              h_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, i_13), term_g_13);
              i_7 = t;
              t = SSL_printnl(h_7, i_7);
              t = (ATerm) ATempty;
            }
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm l_124 (ATerm), ATerm t)
{
  static ATerm m_14 (ATerm t);
  static ATerm m_14 (ATerm t)
  {
    ATerm h_14 = NULL,i_14 = NULL,j_14 = NULL;
    t = l_124(t);
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
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_14 = NULL;
            t = u_14;
            {
              static ATerm h_3 (ATerm t);
              static ATerm h_3 (ATerm t)
              {
                ATerm l_13 = t;
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
                    t = l_13;
                  }
                return(t);
              }
              t = filter_1_0(h_3, t);
            }
            z_14 = t;
            t = (ATerm) ATinsert(CheckATermList(z_14), t_14);
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
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
    ATerm m_13 = t;
    int n_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,s_14 = NULL;
        t = term_p_13;
        r_14 = t;
        t = term_q_13;
        s_14 = t;
        t = term_s_13;
        t = o_6(r_14, s_14, t);
        t = listtd_1_0(g_3, t);
        LocalPopChoice(n_13);
      }
    else
      {
        t = m_13;
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
static ATerm e_6 (ATerm v_122 (ATerm), ATerm w_292, ATerm o_42, ATerm t)
{
  ATerm f_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_292, term_t_13);
  t = i_6(t);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_15, o_42);
  t = v_122(t);
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
      ATerm u_13 = ATgetArgument(t, 0);
      if(match_cons(u_13, sym_Stream_1))
        {
          s_15 = ATgetArgument(u_13, 0);
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
      ATerm v_13 = ATgetArgument(t, 0);
      if(match_cons(v_13, sym_Stream_1))
        {
          c_16 = ATgetArgument(v_13, 0);
        }
      else
        _fail(t);
      f_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(c_16, f_16, t);
  w_15 = t;
  t = term_w_13;
  x_15 = t;
  t = w_15;
  if(match_cons(t, sym_Stream_1))
    {
      y_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_13, w_15);
  t = b_6(x_15, y_15, t);
  return(t);
}
ATerm output_1_0 (ATerm p_143 (ATerm), ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  t = p_143(t);
  j_15 = t;
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_15 = NULL,l_15 = NULL;
        t = term_p_13;
        k_15 = t;
        t = term_z_13;
        l_15 = t;
        t = term_a_14;
        t = o_6(k_15, l_15, t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = term_b_14;
      }
  }
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_15, j_15);
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL,n_15 = NULL;
        t = term_p_13;
        m_15 = t;
        t = term_e_14;
        n_15 = t;
        t = term_f_14;
        t = o_6(m_15, n_15, t);
        t = (ATerm) ATmakeAppl(sym__2, i_15, j_15);
        LocalPopChoice(d_14);
        if(match_cons(t, sym__2))
          {
            ATerm g_14 = ATgetArgument(t, 0);
            ATerm l_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_6(l_3, i_15, j_15, t);
      }
    else
      {
        t = c_14;
        if(match_cons(t, sym__2))
          {
            ATerm n_14 = ATgetArgument(t, 0);
            ATerm o_14 = ATgetArgument(t, 1);
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
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_16);
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
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
      ATerm y_14 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_14) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_15 = ATgetArgument(t, 1);
        if(((ATgetType(a_15) == AT_LIST) && !(ATisEmpty(a_15))))
          {
            t_17 = ATgetFirst((ATermList) a_15);
            {
              ATerm b_15 = (ATerm) ATgetNext((ATermList) a_15);
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
        ATerm c_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_18(w_18, t);
            LocalPopChoice(g_15);
          }
        else
          {
            t = c_15;
            {
              ATerm o_15 = t;
              int p_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_19(x_18, y_18, w_18, t);
                  LocalPopChoice(p_15);
                }
              else
                {
                  t = o_15;
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
    ATerm q_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_19, term_a_16);
        t = i_6(t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = q_15;
        {
          ATerm m_9 = NULL,n_9 = NULL;
          t = term_b_16;
          n_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_16, k_19);
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
ATerm input_1_0 (ATerm q_143 (ATerm), ATerm t)
{
  ATerm h_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_19 = NULL,o_19 = NULL;
      t = term_p_13;
      n_19 = t;
      t = term_j_16;
      o_19 = t;
      t = term_k_16;
      t = o_6(n_19, o_19, t);
      LocalPopChoice(i_16);
    }
  else
    {
      t = h_16;
      t = term_l_16;
    }
  t = ReadFromFile_0_0(t);
  t = q_143(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm r_19 = NULL,u_19 = NULL;
  t = term_p_13;
  r_19 = t;
  t = term_m_16;
  u_19 = t;
  t = term_n_16;
  t = o_6(r_19, u_19, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
  x_19 = t;
  {
    ATerm o_16 = t;
    int p_16 = stack_ptr;
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
                ATerm r_16 = ATgetFirst((ATermList) t);
                ATerm s_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_19;
          }
        LocalPopChoice(p_16);
      }
    else
      {
        t = o_16;
        t = (ATerm) ATinsert(ATempty, x_19);
      }
  }
  y_19 = t;
  t = term_b_14;
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
      t = term_t_16;
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
  t = (ATerm) ATinsert(ATinsert(ATempty, c_21), term_w_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm o_145 (ATerm), ATerm p_145 (ATerm), ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL;
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_20 = NULL,t_20 = NULL;
      t = term_p_13;
      s_20 = t;
      t = term_m_16;
      t_20 = t;
      t = term_n_16;
      t = o_6(s_20, t_20, t);
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      t = fetch_1_0(q_3, t);
    }
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_145(t);
        t = echo_0_0(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
      }
  }
  t = term_b_17;
  t = echo_0_0(t);
  t = term_c_17;
  q_20 = t;
  t = term_i_17;
  r_20 = t;
  t = term_j_17;
  t = o_6(q_20, r_20, t);
  t = reverse_acc_2_0(_id, r_3, t);
  t = map_1_0(t_3, t);
  t = term_k_17;
  t = echo_0_0(t);
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_145(t);
        {
          ATerm n_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_21 = NULL;
              d_21 = t;
              t = SSL_is_string(d_21);
              t = d_21;
              LocalPopChoice(o_17);
              {
                ATerm e_21 = NULL;
                e_21 = t;
                t = (ATerm) ATinsert(ATempty, e_21);
              }
            }
          else
            {
              t = n_17;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
      }
  }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm p_21 = NULL,s_21 = NULL,t_21 = NULL,j_1 = NULL;
  t_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_21);
  p_21 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_21);
  j_1 = t;
  t = SSLsetAnnotations(j_1, p_21);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_21 = NULL;
  m_21 = t;
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_21 = NULL,o_21 = NULL;
        t = term_p_13;
        n_21 = t;
        t = term_m_16;
        o_21 = t;
        t = term_n_16;
        t = o_6(n_21, o_21, t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        t = fetch_1_0(u_3, t);
      }
  }
  t = m_21;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm w_21 = NULL;
  w_21 = t;
  if(match_string(t, "-k"))
    {
      t = w_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_21;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  t = SSL_string_to_int(x_21);
  y_21 = t;
  t = term_r_17;
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_17, y_21);
  t = r_6(z_21, y_21, t);
  t = x_21;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_3, b_4, f_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm e_22 = NULL;
  e_22 = t;
  if(match_string(t, "-S"))
    {
      t = e_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_22;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm f_22 = NULL,i_22 = NULL;
  t = term_v_17;
  f_22 = t;
  t = term_y_9;
  i_22 = t;
  t = term_c_18;
  t = r_6(f_22, i_22, t);
  t = term_d_18;
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_f_18;
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
  ATerm j_22 = NULL,n_22 = NULL,o_22 = NULL;
  j_22 = t;
  t = SSL_string_to_int(j_22);
  n_22 = t;
  t = term_v_17;
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_17, n_22);
  t = r_6(o_22, n_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_22);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_g_18;
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
  t = term_h_18;
  p_22 = t;
  t = term_t_16;
  q_22 = t;
  t = term_i_18;
  t = r_6(p_22, q_22, t);
  t = term_n_18;
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_4, l_4, x_4, t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      {
        ATerm t_18 = t;
        int v_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_5, b_5, c_5, t);
            LocalPopChoice(v_18);
          }
        else
          {
            t = t_18;
            t = Option_3_0(f_5, k_5, m_5, t);
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm l_78, ATerm m_78, ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  t = term_p_13;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_13, l_78, m_78);
  t = lookup_table_0_1(r_22, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(l_78, m_78, s_22, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_13, l_78, m_78);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
      t = term_t_16;
      t = e_0(t);
      e_23 = t;
      t = term_c_17;
      f_23 = t;
      t = term_i_17;
      g_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_17, term_i_17, e_23);
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
      t = term_t_16;
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
  t = term_z_13;
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_13, a_24);
  t = r_6(g_24, a_24, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, a_24);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_c_19;
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
  t = term_j_16;
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_16, k_24);
  t = r_6(l_24, k_24, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_24);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_g_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_6, d_7, g_7, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  if(match_cons(t, sym__3))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
      o_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_19), o_24), term_j_19), n_24), term_i_19), m_24), term_h_19);
  p_24 = t;
  t = SSL_concat_strings(p_24);
  return(t);
}
ATerm Display_possible_warnings_0_0 (ATerm t)
{
  t = map_1_0(m_7, t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  static ATerm s_25 (ATerm t);
  static ATerm s_25 (ATerm t)
  {
    ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
    r_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_25 = ATgetFirst((ATermList) t);
        q_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_9 = NULL,x_9 = NULL,l_1 = NULL;
          t = SSLgetAnnotations(r_25);
          s_9 = t;
          t = q_25;
          t = s_25(t);
          x_9 = t;
          t = (ATerm) ATinsert(CheckATermList(x_9), p_25);
          l_1 = t;
          t = SSLsetAnnotations(l_1, s_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_25;
        t = s_123(t);
      }
    return(t);
  }
  t = s_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_24 = NULL,u_24 = NULL,v_24 = NULL;
  r_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_24;
    }
  else
    {
      static ATerm n_7 (ATerm t);
      static ATerm n_7 (ATerm t)
      {
        t = not_null(v_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_24 = ATgetFirst((ATermList) t);
          if(((v_24 != NULL) && (v_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_24;
      t = at_end_1_0(n_7, t);
    }
  return(t);
}
static ATerm i_26 (ATerm w_25, ATerm t)
{
  ATerm x_25 = NULL;
  t = SSL_explode_term(w_25);
  if(match_cons(t, sym__2))
    {
      ATerm m_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
  b_26 = t;
  if(match_cons(t, sym__2))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm o_7 (ATerm t);
            static ATerm o_7 (ATerm t)
            {
              t = a_26;
              return(t);
            }
            t = z_25;
            t = at_end_1_0(o_7, t);
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            t = i_26(b_26, t);
          }
      }
    }
  else
    {
      t = i_26(b_26, t);
    }
  return(t);
}
static ATerm z_5 (ATerm r_78, ATerm q_78, ATerm t)
{
  ATerm j_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL;
  t = r_78;
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_26 = NULL;
        t = term_p_13;
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, r_78);
        t = o_6(q_26, r_78, t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = (ATerm) ATempty;
      }
  }
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_78, m_26);
  t = conc_0_0(t);
  j_26 = t;
  t = term_p_13;
  n_26 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_13, r_78, j_26);
  t = lookup_table_0_1(n_26, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(r_78, j_26, o_26, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_13, r_78, j_26);
  return(t);
}
static ATerm a_6 (ATerm e_43, ATerm k_304, ATerm t)
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
  t = k_304;
  t = fetch_1_0(p_7, t);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm r_26 = NULL,x_26 = NULL;
  x_26 = t;
  t = SSL_explode_term(x_26);
  if(match_cons(t, sym__2))
    {
      ATerm v_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_19) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_19 = ATgetArgument(t, 1);
        if(((ATgetType(w_19) == AT_LIST) && !(ATisEmpty(w_19))))
          {
            r_26 = ATgetFirst((ATermList) w_19);
            {
              ATerm a_20 = (ATerm) ATgetNext((ATermList) w_19);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_26;
  return(t);
}
ATerm get_all_warnings_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), term_p_20), term_j_20), term_e_20);
  t = map_1_0(q_7, t);
  return(t);
}
ATerm filter_1_0 (ATerm e_131 (ATerm), ATerm t)
{
  ATerm t_27 = NULL,w_27 = NULL,y_27 = NULL;
  t_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_27;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_27 = ATgetFirst((ATermList) t);
          y_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_10 = NULL,a_11 = NULL,b_11 = NULL,p_1 = NULL;
            t = SSLgetAnnotations(t_27);
            r_10 = t;
            t = w_27;
            t = e_131(t);
            a_11 = t;
            t = y_27;
            t = filter_1_0(e_131, t);
            b_11 = t;
            t = (ATerm) ATinsert(CheckATermList(b_11), a_11);
            p_1 = t;
            t = SSLsetAnnotations(p_1, r_10);
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            t = y_27;
            t = filter_1_0(e_131, t);
          }
      }
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm h_28 = NULL;
  if(match_cons(t, sym__3))
    {
      h_28 = ATgetArgument(t, 0);
      {
        ATerm f_21 = ATgetArgument(t, 1);
      }
      {
        ATerm g_21 = ATgetArgument(t, 2);
        if((ATgetSymbol((ATermAppl) g_21) != ATmakeSymbol("on", 0, ATtrue)))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_28;
  return(t);
}
ATerm get_default_warnings_0_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), term_p_20), term_j_20), term_e_20);
  t = filter_1_0(r_7, t);
  return(t);
}
ATerm fetch_elem_1_0 (ATerm n_123 (ATerm), ATerm t)
{
  ATerm i_28 = NULL;
  static ATerm t_7 (ATerm t);
  static ATerm t_7 (ATerm t)
  {
    t = n_123(t);
    if(((i_28 != NULL) && (i_28 != t)))
      _fail(t);
    else
      i_28 = t;
    return(t);
  }
  t = fetch_1_0(t_7, t);
  t = not_null(i_28);
  return(t);
}
ATerm warning_exists_0_0 (ATerm t)
{
  ATerm j_28 = NULL;
  static ATerm w_7 (ATerm t);
  static ATerm w_7 (ATerm t)
  {
    if(match_cons(t, sym__3))
      {
        if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          j_28 = ATgetArgument(t, 0);
        {
          ATerm h_21 = ATgetArgument(t, 1);
        }
        {
          ATerm i_21 = ATgetArgument(t, 2);
        }
      }
    else
      _fail(t);
    return(t);
  }
  if(((j_28 != NULL) && (j_28 != t)))
    _fail(t);
  else
    j_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), term_p_20), term_j_20), term_e_20);
  t = fetch_elem_1_0(w_7, t);
  return(t);
}
ATerm map_1_0 (ATerm d_123 (ATerm), ATerm t)
{
  static ATerm k_29 (ATerm t);
  static ATerm k_29 (ATerm t)
  {
    ATerm b_29 = NULL,d_29 = NULL,e_29 = NULL;
    b_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_29;
      }
    else
      {
        ATerm r_11 = NULL,u_11 = NULL,v_11 = NULL,s_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_29 = ATgetFirst((ATermList) t);
            e_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_29);
        r_11 = t;
        t = d_29;
        t = d_123(t);
        u_11 = t;
        t = e_29;
        t = k_29(t);
        v_11 = t;
        t = (ATerm) ATinsert(CheckATermList(v_11), u_11);
        s_1 = t;
        t = SSLsetAnnotations(s_1, r_11);
      }
    return(t);
  }
  t = k_29(t);
  return(t);
}
static ATerm p_6 (ATerm q_63, ATerm r_63, ATerm p_63, ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL;
  n_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_63, r_63);
  {
    ATerm j_21 = t;
    int k_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            ATerm q_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_63, r_63);
        t = o_6(q_63, r_63, t);
        LocalPopChoice(k_21);
      }
    else
      {
        t = j_21;
        t = (ATerm) ATempty;
      }
  }
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_63, r_63, (ATerm) ATinsert(CheckATermList(o_29), p_63));
  t = lookup_table_0_1(q_63, t);
  t_29 = t;
  t = (ATerm) ATinsert(CheckATermList(o_29), p_63);
  r_29 = t;
  t = t_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(r_63, r_29, s_29, t);
  t = n_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL,i_30 = NULL,j_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_30 = NULL,m_30 = NULL,n_30 = NULL;
      t = term_t_16;
      t = k_0(t);
      k_30 = t;
      t = term_c_17;
      m_30 = t;
      t = term_i_17;
      n_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_17, term_i_17, k_30);
      t = p_6(m_30, n_30, k_30, t);
      _fail(t);
    }
  else
    {
      ATerm r_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_30 = ATgetFirst((ATermList) t);
          f_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_30 = ATgetFirst((ATermList) t);
          j_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_30;
      t = f_0(t);
      t = i_30;
      t = h_0(t);
      r_30 = t;
      t = (ATerm) ATinsert(CheckATermList(j_30), r_30);
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  if(match_string(t, "--warning"))
    {
      t = y_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = y_30;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), term_p_20), term_j_20), term_e_20);
  t = Display_possible_warnings_0_0(t);
  y_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(y_31), term_v_21), term_u_21), term_r_21);
  z_31 = t;
  t = SSL_concat_strings(z_31);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  c_31 = t;
  t = SSL_explode_term(c_31);
  if(match_cons(t, sym__2))
    {
      ATerm a_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_22 = ATgetArgument(t, 1);
        if(((ATgetType(b_22) == AT_LIST) && !(ATisEmpty(b_22))))
          {
            b_31 = ATgetFirst((ATermList) b_22);
            {
              ATerm c_22 = (ATerm) ATgetNext((ATermList) b_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_31;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,w_30 = NULL;
  static ATerm z_7 (ATerm t);
  static ATerm z_7 (ATerm t)
  {
    if(((w_30 != NULL) && (w_30 != t)))
      _fail(t);
    else
      w_30 = t;
    {
      ATerm d_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_30;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
            _fail(t);
          t = w_30;
          LocalPopChoice(g_22);
          {
            ATerm z_30 = NULL,a_31 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_20), term_p_20), term_j_20), term_e_20);
            t = map_1_0(b_8, t);
            z_30 = t;
            t = term_q_13;
            a_31 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_q_13, z_30);
            t = r_6(a_31, z_30, t);
          }
        }
      else
        {
          t = d_22;
          t = w_30;
          {
            ATerm h_22 = t;
            int k_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_explode_string(w_30);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm l_22 = ATgetFirst((ATermList) t);
                    if(((ATgetType(l_22) != AT_INT) || (ATgetInt((ATermInt) l_22) != 110)))
                      _fail(t);
                    {
                      ATerm m_22 = (ATerm) ATgetNext((ATermList) t);
                      if(((ATgetType(m_22) == AT_LIST) && !(ATisEmpty(m_22))))
                        {
                          ATerm t_22 = ATgetFirst((ATermList) m_22);
                          if(((ATgetType(t_22) != AT_INT) || (ATgetInt((ATermInt) t_22) != 111)))
                            _fail(t);
                          {
                            ATerm u_22 = (ATerm) ATgetNext((ATermList) m_22);
                            if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
                              {
                                ATerm v_22 = ATgetFirst((ATermList) u_22);
                                if(((ATgetType(v_22) != AT_INT) || (ATgetInt((ATermInt) v_22) != 45)))
                                  _fail(t);
                                if(((t_30 != NULL) && (t_30 != (ATerm) ATgetNext((ATermList) u_22))))
                                  _fail((ATerm) ATgetNext((ATermList) u_22));
                                else
                                  t_30 = (ATerm) ATgetNext((ATermList) u_22);
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
                t = w_30;
                LocalPopChoice(k_22);
                {
                  ATerm d_31 = NULL,e_31 = NULL;
                  t = SSL_implode_string(t_30);
                  if(((u_30 != NULL) && (u_30 != t)))
                    _fail(t);
                  else
                    u_30 = t;
                  t = warning_exists_0_0(t);
                  t = term_q_13;
                  {
                    ATerm w_22 = t;
                    int x_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm f_31 = NULL,g_31 = NULL;
                        t = term_p_13;
                        f_31 = t;
                        t = term_q_13;
                        g_31 = t;
                        t = term_s_13;
                        t = o_6(f_31, g_31, t);
                        LocalPopChoice(x_22);
                      }
                    else
                      {
                        t = w_22;
                        t = get_default_warnings_0_0(t);
                      }
                  }
                  {
                    static ATerm g_8 (ATerm t);
                    static ATerm g_8 (ATerm t)
                    {
                      ATerm y_22 = t;
                      if((PushChoice() == 0))
                        {
                          if((u_30 != t))
                            {
                              _fail(t);
                            }
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = y_22;
                        }
                      return(t);
                    }
                    t = filter_1_0(g_8, t);
                  }
                  d_31 = t;
                  t = term_q_13;
                  e_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_q_13, d_31);
                  t = r_6(e_31, d_31, t);
                }
              }
            else
              {
                t = h_22;
                t = w_30;
                {
                  ATerm z_22 = t;
                  int c_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm h_31 = NULL;
                      t = w_30;
                      t = get_all_warnings_0_0(t);
                      h_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_30, h_31);
                      t = a_6(w_30, h_31, t);
                      t = w_30;
                      LocalPopChoice(c_23);
                      {
                        ATerm i_31 = NULL,j_31 = NULL;
                        t = term_q_13;
                        i_31 = t;
                        t = (ATerm) ATinsert(ATempty, w_30);
                        j_31 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_q_13, (ATerm) ATinsert(ATempty, w_30));
                        t = z_5(i_31, j_31, t);
                      }
                    }
                  else
                    {
                      t = z_22;
                      {
                        ATerm q_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
                        t = term_p_13;
                        w_31 = t;
                        t = term_m_16;
                        x_31 = t;
                        t = term_n_16;
                        t = o_6(w_31, x_31, t);
                        q_31 = t;
                        t = term_c_10;
                        u_31 = t;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), w_30), term_d_23), q_31);
                        v_31 = t;
                        t = SSL_printnl(u_31, v_31);
                        t = term_z_9;
                        t_31 = t;
                        t = SSL_exit(t_31);
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_23), w_30), term_d_23), q_31);
                      }
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  t = ArgOption_3_0(x_7, z_7, a_8, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_16;
  t = whoami_0_0(t);
  d_32 = t;
  t = term_c_10;
  f_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_23), d_32);
  g_32 = t;
  t = SSL_printnl(f_32, g_32);
  t = term_z_9;
  e_32 = t;
  t = SSL_exit(e_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  t = term_p_13;
  i_32 = t;
  t = term_m_16;
  j_32 = t;
  t = term_n_16;
  t = o_6(i_32, j_32, t);
  return(t);
}
static ATerm j_6 (ATerm z_61, ATerm a_62, ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_61, a_62);
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      t = SSL_addr(z_61, a_62);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_32;
      t = a_130(t);
    }
  else
    {
      ATerm s_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_32 = ATgetFirst((ATermList) t);
          p_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_32;
      t = foldr_2_0(a_130, b_130, t);
      s_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_32, s_32);
      t = b_130(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_y_9;
  return(t);
}
static ATerm j_8 (ATerm t)
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
  ATerm w_32 = NULL,d_12 = NULL,e_12 = NULL;
  t = times_0_0(t);
  e_12 = t;
  t = SSL_explode_term(e_12);
  if(match_cons(t, sym__2))
    {
      ATerm l_23 = ATgetArgument(t, 0);
      d_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12;
  t = foldr_2_0(h_8, j_8, t);
  w_32 = t;
  t = SSL_TicksToSeconds(w_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_33 = NULL,m_33 = NULL,p_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym__2))
    {
      m_33 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_33;
        if((m_33 != t))
          {
            _fail(t);
          }
        t = j_33;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATmakeAppl(sym__2, m_33, p_33);
        {
          ATerm o_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_33, p_33);
              LocalPopChoice(p_23);
            }
          else
            {
              t = o_23;
              t = SSL_gtr(m_33, p_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_33, p_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_140 (ATerm), ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  {
    ATerm r_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_33 = NULL,y_33 = NULL,b_34 = NULL;
        t = term_p_13;
        y_33 = t;
        t = term_v_17;
        b_34 = t;
        t = term_x_23;
        t = o_6(y_33, b_34, t);
        x_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_33, term_z_9);
        t = geq_0_0(t);
        t = v_33;
        t = l_140(t);
        LocalPopChoice(v_23);
      }
    else
      {
        t = r_23;
        t = v_33;
      }
  }
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm f_34 = NULL,h_34 = NULL,j_34 = NULL,k_34 = NULL;
  t = run_time_0_0(t);
  f_34 = t;
  t = term_t_16;
  t = whoami_0_0(t);
  h_34 = t;
  t = term_c_10;
  j_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_24), f_34), term_b_24), h_34);
  k_34 = t;
  t = SSL_printnl(j_34, k_34);
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_24), f_34), term_b_24), h_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_9;
  l_34 = t;
  t = SSL_exit(l_34);
  return(t);
}
static ATerm s_6 (ATerm f_68, ATerm g_68, ATerm h_68, ATerm t)
{
  ATerm m_34 = NULL;
  t = SSL_hashtable_put(h_68, f_68, g_68);
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_34);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_65, ATerm t)
{
  ATerm h_35 = NULL;
  t = table_hashtable_0_0(t);
  h_35 = t;
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_13 = NULL;
        t = h_35;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_6(c_65, c_13, t);
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
          ATerm h_13 = NULL;
          t = c_65;
          t = table_create_0_0(t);
          t = h_35;
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
  ATerm n_35 = NULL;
  t = SSL_hashtable_create(n_68, o_68);
  n_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_35);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,s_35 = NULL,u_35 = NULL,x_35 = NULL;
  o_35 = t;
  t = term_f_24;
  u_35 = t;
  t = term_h_24;
  x_35 = t;
  t = o_35;
  t = new_hashtable_0_2(u_35, x_35, t);
  p_35 = t;
  t = o_35;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(o_35, p_35, s_35, t);
  t = o_35;
  return(t);
}
static ATerm l_6 (ATerm k_68, ATerm l_68, ATerm t)
{
  ATerm z_35 = NULL;
  t = SSL_hashtable_remove(l_68, k_68);
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_35);
  return(t);
}
static ATerm m_6 (ATerm p_68, ATerm t)
{
  ATerm a_36 = NULL;
  t = SSL_hashtable_destroy(p_68);
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_36);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_36 = NULL;
  t = SSL_table_hashtable();
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_36);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm d_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL;
  d_36 = t;
  t = table_hashtable_0_0(t);
  g_36 = t;
  t = lookup_table_0_1(d_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_6(i_36, t);
  t = g_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(d_36, h_36, t);
  t = d_36;
  return(t);
}
ATerm fetch_1_0 (ATerm l_123 (ATerm), ATerm t)
{
  static ATerm f_37 (ATerm t);
  static ATerm f_37 (ATerm t)
  {
    ATerm c_37 = NULL,d_37 = NULL,e_37 = NULL;
    c_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_37 = ATgetFirst((ATermList) t);
        e_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_13 = NULL,r_13 = NULL,a_2 = NULL;
          t = SSLgetAnnotations(c_37);
          o_13 = t;
          t = d_37;
          t = l_123(t);
          r_13 = t;
          t = (ATerm) ATinsert(CheckATermList(e_37), r_13);
          a_2 = t;
          t = SSLsetAnnotations(a_2, o_13);
          LocalPopChoice(q_24);
        }
      else
        {
          t = j_24;
          {
            ATerm k_14 = NULL,p_14 = NULL,b_2 = NULL;
            t = SSLgetAnnotations(c_37);
            k_14 = t;
            t = e_37;
            t = f_37(t);
            p_14 = t;
            t = (ATerm) ATinsert(CheckATermList(p_14), d_37);
            b_2 = t;
            t = SSLsetAnnotations(b_2, k_14);
          }
        }
    }
    return(t);
  }
  t = f_37(t);
  return(t);
}
static ATerm t_6 (ATerm i_68, ATerm j_68, ATerm t)
{
  t = SSL_hashtable_get(j_68, i_68);
  return(t);
}
static ATerm o_6 (ATerm j_65, ATerm k_65, ATerm t)
{
  ATerm i_37 = NULL;
  t = lookup_table_0_1(j_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_6(k_65, i_37, t);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  t = term_s_24;
  m_37 = t;
  t = term_t_16;
  n_37 = t;
  t = term_t_24;
  t = r_6(m_37, n_37, t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL;
  t = term_s_24;
  q_37 = t;
  t = term_t_16;
  r_37 = t;
  t = term_t_24;
  t = r_6(q_37, r_37, t);
  t = term_x_24;
  o_37 = t;
  t = term_t_16;
  p_37 = t;
  t = term_y_24;
  t = r_6(o_37, p_37, t);
  t = term_z_24;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  t = term_a_25;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_8, n_8, o_8, t);
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      t = Option_3_0(r_8, s_8, u_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_92 (ATerm), ATerm x_92 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_6 = NULL;
  x_37 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_37 = ATgetFirst((ATermList) t);
      u_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_37);
  s_37 = t;
  t = t_37;
  t = w_92(t);
  v_37 = t;
  t = u_37;
  t = x_92(t);
  w_37 = t;
  t = (ATerm) ATinsert(CheckATermList(w_37), v_37);
  y_6 = t;
  t = SSLsetAnnotations(y_6, s_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_145 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,h_38 = NULL,i_38 = NULL,b_7 = NULL;
  c_38 = t;
  {
    ATerm d_25 = t;
    int e_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_25;
        t = j_145(t);
        LocalPopChoice(e_25);
      }
    else
      {
        t = d_25;
      }
  }
  t = c_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_38 = ATgetFirst((ATermList) t);
      f_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_38);
  d_38 = t;
  t = term_m_16;
  i_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_16, e_38);
  t = r_6(i_38, e_38, t);
  t = f_38;
  {
    static ATerm s_38 (ATerm t);
    static ATerm s_38 (ATerm t)
    {
      ATerm g_25 = t;
      int h_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_25 = t;
          int j_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_38 = NULL;
              l_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_38;
              LocalPopChoice(j_25);
            }
          else
            {
              t = i_25;
              t = j_145(t);
              t = Cons_2_0(_id, s_38, t);
            }
          LocalPopChoice(h_25);
        }
      else
        {
          t = g_25;
          {
            ATerm o_38 = NULL,p_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_38 = ATgetFirst((ATermList) t);
                p_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_38), (ATerm) ATmakeAppl(sym_Undefined_1, o_38));
          }
        }
      return(t);
    }
    t = s_38(t);
  }
  h_38 = t;
  t = (ATerm) ATinsert(CheckATermList(h_38), (ATerm) ATmakeAppl(sym_Program_1, e_38));
  b_7 = t;
  t = SSLsetAnnotations(b_7, d_38);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  if(match_string(t, "--help"))
    {
      t = f_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_39;
        }
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm g_39 = NULL,h_39 = NULL;
  t = term_k_25;
  g_39 = t;
  t = term_t_16;
  h_39 = t;
  t = term_l_25;
  t = r_6(g_39, h_39, t);
  t = term_m_25;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_n_25;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm g_145 (ATerm), ATerm h_145 (ATerm), ATerm i_145 (ATerm), ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  z_38 = t;
  t = term_c_17;
  a_39 = t;
  t = term_o_25;
  t = lookup_table_0_1(a_39, t);
  e_39 = t;
  t = term_i_17;
  b_39 = t;
  t = (ATerm) ATempty;
  c_39 = t;
  t = e_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(b_39, c_39, d_39, t);
  t = z_38;
  {
    static ATerm v_8 (ATerm t);
    static ATerm v_8 (ATerm t)
    {
      ATerm t_25 = t;
      int u_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_145(t);
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
                t = Option_3_0(w_8, x_8, y_8, t);
                LocalPopChoice(y_25);
              }
            else
              {
                t = v_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_8, t);
  }
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_39 = NULL;
        s_39 = t;
        {
          ATerm e_26 = t;
          int f_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_15 = NULL;
              t = s_39;
              {
                ATerm g_26 = t;
                int h_26 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_15 = NULL,u_15 = NULL;
                    t = term_p_13;
                    t_15 = t;
                    t = term_k_25;
                    u_15 = t;
                    t = term_k_26;
                    t = o_6(t_15, u_15, t);
                    LocalPopChoice(h_26);
                  }
                else
                  {
                    t = g_26;
                    t = fetch_1_0(a_9, t);
                  }
              }
              t = s_39;
              t = h_145(t);
              t = term_y_9;
              r_15 = t;
              t = SSL_exit(r_15);
              LocalPopChoice(f_26);
            }
          else
            {
              t = e_26;
              {
                ATerm d_16 = NULL,e_16 = NULL,g_16 = NULL;
                t = term_p_13;
                e_16 = t;
                t = term_s_24;
                g_16 = t;
                t = term_l_26;
                t = o_6(e_16, g_16, t);
                t = s_39;
                t = i_145(t);
                t = term_y_9;
                d_16 = t;
                t = SSL_exit(d_16);
              }
            }
        }
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        {
          ATerm p_26 = t;
          int s_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL;
              static ATerm b_9 (ATerm t);
              static ATerm b_9 (ATerm t)
              {
                ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_8 = NULL;
                y_39 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_39 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_39);
                w_39 = t;
                t = x_39;
                if(((x_38 != NULL) && (x_38 != t)))
                  _fail(t);
                else
                  x_38 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_39);
                z_8 = t;
                t = SSLsetAnnotations(z_8, w_39);
                return(t);
              }
              t = fetch_1_0(b_9, t);
              t = term_c_10;
              u_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_38)), term_t_26);
              v_39 = t;
              t = SSL_printnl(u_39, v_39);
              t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_38)), term_t_26));
              t = h_145(t);
              t = term_z_9;
              t_39 = t;
              t = SSL_exit(t_39);
              LocalPopChoice(s_26);
            }
          else
            {
              t = p_26;
            }
        }
      }
  }
  y_38 = t;
  t = term_c_17;
  t = table_destroy_0_0(t);
  t = y_38;
  return(t);
}
ATerm option_wrap_5_0 (ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm l_143 (ATerm), ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  t = parse_options_3_0(j_143, k_143, l_143, t);
  d_40 = t;
  t = term_u_26;
  t = table_create_0_0(t);
  t = term_u_26;
  e_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_26, term_v_26, d_40);
  t = lookup_table_0_1(e_40, t);
  h_40 = t;
  t = term_v_26;
  f_40 = t;
  t = h_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(f_40, d_40, g_40, t);
  t = d_40;
  t = m_143(t);
  {
    ATerm w_26 = t;
    int y_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_143(t);
        t = report_success_0_0(t);
        LocalPopChoice(y_26);
      }
    else
      {
        t = w_26;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            {
              ATerm d_27 = t;
              int e_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(e_27);
                }
              else
                {
                  t = d_27;
                  {
                    ATerm f_27 = t;
                    int g_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(e_9, f_9, g_9, t);
                        LocalPopChoice(g_27);
                      }
                    else
                      {
                        t = f_27;
                        {
                          ATerm h_27 = t;
                          int i_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(i_27);
                            }
                          else
                            {
                              t = h_27;
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
static ATerm d_9 (ATerm t)
{
  t = input_1_0(h_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  t = term_e_14;
  j_40 = t;
  t = term_t_16;
  k_40 = t;
  t = term_j_27;
  t = r_6(j_40, k_40, t);
  t = term_k_27;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_l_27;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = output_1_0(Stratego_warnings_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(c_9, default_system_usage_0_0, default_system_about_0_0, _id, d_9, t);
  return(t);
}
