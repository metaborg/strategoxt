#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Undefined_0;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Hashtable_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_ObsoleteWarning_1;
Symbol sym_DebugWarning_1;
Symbol sym_ConstructorWarning_1;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Str_1;
Symbol sym_SVar_1;
Symbol sym_Path_2;
Symbol sym_Build_1;
Symbol sym_CallT_3;
Symbol sym_SDefT_4;
Symbol sym_OpDecl_2;
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
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
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
}
ATerm term_y_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_e_25;
ATerm term_c_25;
ATerm term_a_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_k_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_h_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_r_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_j_16;
ATerm term_f_16;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_p_13;
ATerm term_a_11;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_z_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_j_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: lowercase constructor name found: ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: possibly missing build operator in debug strategy in \"", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\n", 0, ATtrue));
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
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" warning(s)\n", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING incorrect parameter passed to -W switch: ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_z_13);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_h_14);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_r_14);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_r_16);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_u_16);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__2, term_i_17, term_j_17);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym__2, term_y_17, term_x_9);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_9);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_a_17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("                      ", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("  ", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("        missing build operator", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_b_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete strategies", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym__2, term_h_20, term_l_20);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("unbound variables", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_n_20, term_o_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case-constructors", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case constructors", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_t_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-W,--warning C   Report warnings falling in category C. Categories:\n", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("                      all                      all categories (default) \n", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("                      no-C                     no warnings in category C\n", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": no such warning", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_y_17);
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_a_17);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_a_17);
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__2, term_x_24, term_a_17);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__3, term_i_17, term_j_17, (ATerm) ATempty);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_x_24);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_p_23);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym__2, term_r_14, term_a_17);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm mk_warning_0_0 (ATerm t);
static ATerm d_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm l_0 (ATerm t);
ATerm print_warnings_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
ATerm LowerCaseConstructors_1_0 (ATerm g_109 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm sdef_with_property_1_0 (ATerm c_109 (ATerm), ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm t_5 (ATerm b_109 (ATerm), ATerm y_23, ATerm w_23, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm u_5 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm t);
static ATerm t_8 (ATerm j_7, ATerm k_7, ATerm p_7, ATerm t);
ATerm map_apply_1_0 (ATerm d_109 (ATerm), ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm strategy_invokation_warning_1_0 (ATerm z_108 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm r_115 (ATerm), ATerm t);
static ATerm v_5 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm r_48, ATerm q_48, ATerm t);
static ATerm w_5 (ATerm j_125 (ATerm), ATerm n_48, ATerm m_48, ATerm t);
ATerm foldr_3_0 (ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm t);
static ATerm q_2 (ATerm t);
ATerm collect_om_2_0 (ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm strategy_argument_warning_1_0 (ATerm a_109 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm debug_with_incorrect_string_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm Warning_1_0 (ATerm i_109 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm i_122 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm Stratego_warnings_0_0 (ATerm t);
static ATerm a_6 (ATerm d_58, ATerm e_58, ATerm t);
static ATerm b_6 (ATerm k_42, ATerm l_42, ATerm t);
static ATerm d_6 (ATerm q_120 (ATerm), ATerm z_288, ATerm q_42, ATerm t);
static ATerm c_6 (ATerm g_42, ATerm h_42, ATerm t);
static ATerm n_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm output_1_0 (ATerm q_140 (ATerm), ATerm t);
static ATerm s_17 (ATerm h_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm e_6 (ATerm m_42, ATerm t);
static ATerm f_6 (ATerm j_56, ATerm k_56, ATerm t);
static ATerm g_6 (ATerm f_58, ATerm g_58, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_19 (ATerm c_18, ATerm t);
static ATerm k_19 (ATerm j_18, ATerm k_18, ATerm l_18, ATerm t);
static ATerm l_19 (ATerm w_18, ATerm x_18, ATerm y_18, ATerm t);
static ATerm h_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm r_140 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm default_system_usage_2_0 (ATerm p_142 (ATerm), ATerm q_142 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_6 (ATerm z_76, ATerm a_77, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm Display_possible_warnings_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm p_121 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_26 (ATerm g_26, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm y_5 (ATerm f_77, ATerm e_77, ATerm t);
static ATerm z_5 (ATerm g_43, ATerm n_300, ATerm t);
ATerm map_1_0 (ATerm y_120 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm b_129 (ATerm), ATerm t);
static ATerm o_6 (ATerm p_63, ATerm q_63, ATerm o_63, ATerm t);
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_6 (ATerm y_61, ATerm z_61, ATerm t);
ATerm foldr_2_0 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_137 (ATerm), ATerm t);
static ATerm g_8 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_6 (ATerm a_68, ATerm b_68, ATerm c_68, ATerm t);
ATerm lookup_table_0_1 (ATerm b_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm i_68, ATerm j_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm k_6 (ATerm f_68, ATerm g_68, ATerm t);
static ATerm l_6 (ATerm k_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_121 (ATerm), ATerm t);
static ATerm s_6 (ATerm d_68, ATerm e_68, ATerm t);
static ATerm n_6 (ATerm i_65, ATerm j_65, ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_142 (ATerm), ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm parse_options_3_0 (ATerm h_142 (ATerm), ATerm i_142 (ATerm), ATerm j_142 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
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
        ATerm t_0 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_9), v_1), term_j_9);
        t_0 = t;
        t = SSL_concat_strings(t_0);
      }
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          v_1 = ATgetArgument(t, 0);
          w_1 = ATgetArgument(t, 1);
          {
            ATerm m_2 = NULL,p_2 = NULL,u_2 = NULL,y_2 = NULL;
            t = w_1;
            if(match_cons(t, sym_DebugWarning_1))
              {
                t_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSL_explode_string(t_1);
            y_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_2), term_m_9), (ATerm) ATinsert(ATempty, term_m_9));
            t = conc_0_0(t);
            u_2 = t;
            t = SSL_implode_string(u_2);
            m_2 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_9), m_2), term_r_9), term_o_9), v_1), term_n_9);
            p_2 = t;
            t = SSL_concat_strings(p_2);
          }
        }
      else
        {
          ATerm k_3 = NULL;
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_9), y_1), term_w_9), w_1), term_v_9), v_1), term_u_9);
          k_3 = t;
          t = SSL_concat_strings(k_3);
        }
    }
  return(t);
}
static ATerm d_0 (ATerm t)
{
  t = term_x_9;
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
  t = i_6(k_2, l_2, t);
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), e_2), term_l_9);
        i_2 = t;
        t = SSL_print(h_2, i_2);
        t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_10), e_2), term_l_9));
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
  ATerm x_2 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      x_2 = ATgetArgument(t, 0);
      {
        ATerm h_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_2;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm z_2 = NULL,c_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      c_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(r_0, z_2, c_3, t);
  return(t);
}
static ATerm r_0 (ATerm t)
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
static ATerm s_0 (ATerm t)
{
  ATerm i_3 = NULL,m_3 = NULL,o_3 = NULL;
  o_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_3 = ATgetFirst((ATermList) t);
      m_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 = NULL;
            t = m_3;
            {
              static ATerm u_0 (ATerm t);
              static ATerm u_0 (ATerm t)
              {
                ATerm m_10 = t;
                if((PushChoice() == 0))
                  {
                    if((i_3 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_10;
                  }
                return(t);
              }
              t = filter_1_0(u_0, t);
            }
            s_3 = t;
            t = (ATerm) ATinsert(CheckATermList(s_3), i_3);
            LocalPopChoice(k_10);
          }
        else
          {
            t = i_10;
            t = o_3;
          }
      }
    }
  else
    {
      t = o_3;
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL;
  w_3 = t;
  t = SSL_explode_string(w_3);
  t = map_1_0(x_0, t);
  b_4 = t;
  t = SSL_implode_string(b_4);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_3), term_m_9), (ATerm) ATinsert(ATempty, term_m_9));
  t = conc_0_0(t);
  z_3 = t;
  t = SSL_implode_string(z_3);
  x_3 = t;
  t = (ATerm) ATmakeAppl(sym_ConstructorWarning_1, x_3);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm p_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_4 = NULL;
      c_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_t_10, c_4);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, c_4, term_v_10);
      t = leq_0_0(t);
      t = c_4;
      LocalPopChoice(s_10);
      {
        ATerm d_4 = NULL,e_4 = NULL;
        d_4 = t;
        t = term_a_11;
        e_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_4, term_a_11);
        t = i_6(d_4, e_4, t);
      }
    }
  else
    {
      t = p_10;
    }
  return(t);
}
ATerm LowerCaseConstructors_1_0 (ATerm g_109 (ATerm), ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("lower-case-constructors", 0, ATtrue)))
    _fail(t);
  t = g_109(t);
  t = collect_om_2_0(p_0, q_0, t);
  t = listtd_1_0(s_0, t);
  t = filter_1_0(w_0, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm u_4 = NULL,x_4 = NULL;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      x_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(c_1, u_4, x_4, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm y_4 = NULL;
  if(match_cons(t, sym__2))
    {
      y_4 = ATgetArgument(t, 0);
      if((y_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm sdef_with_property_1_0 (ATerm c_109 (ATerm), ATerm t)
{
  ATerm h_4 = NULL,l_4 = NULL,m_4 = NULL,q_4 = NULL,r_4 = NULL,t_4 = NULL,a_0 = NULL;
  static ATerm d_1 (ATerm t);
  static ATerm d_1 (ATerm t)
  {
    ATerm f_5 = NULL;
    f_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), f_5);
    return(t);
  }
  t_4 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((l_4 != NULL) && (l_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        l_4 = ATgetArgument(t, 0);
      m_4 = ATgetArgument(t, 1);
      q_4 = ATgetArgument(t, 2);
      r_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_4);
  h_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_4, m_4, q_4, r_4);
  a_0 = t;
  t = SSLsetAnnotations(a_0, h_4);
  t = r_4;
  t = collect_om_2_0(c_109, b_1, t);
  {
    ATerm b_11 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_11;
      }
  }
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm j_6 = NULL,m_6 = NULL;
  if(match_cons(t, sym__2))
    {
      j_6 = ATgetArgument(t, 0);
      m_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(j_1, j_6, m_6, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm p_6 = NULL;
  if(match_cons(t, sym__2))
    {
      p_6 = ATgetArgument(t, 0);
      if((p_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_5 (ATerm b_109 (ATerm), ATerm y_23, ATerm w_23, ATerm t)
{
  ATerm g_5 = NULL;
  t = b_109(t);
  g_5 = t;
  t = w_23;
  {
    static ATerm f_1 (ATerm t);
    static ATerm f_1 (ATerm t)
    {
      ATerm h_5 = NULL,i_5 = NULL,l_5 = NULL,o_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,x_5 = NULL,i_0 = NULL,g_0 = NULL;
      x_5 = t;
      if(match_cons(t, sym_CallT_3))
        {
          i_5 = ATgetArgument(t, 0);
          l_5 = ATgetArgument(t, 1);
          o_5 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_5);
      h_5 = t;
      t = i_5;
      if(match_cons(t, sym_SVar_1))
        {
          r_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_5);
      q_5 = t;
      t = r_5;
      if((g_5 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_SVar_1, r_5);
      g_0 = t;
      t = SSLsetAnnotations(g_0, q_5);
      s_5 = t;
      t = (ATerm) ATmakeAppl(sym_CallT_3, s_5, l_5, o_5);
      i_0 = t;
      t = SSLsetAnnotations(i_0, h_5);
      t = r_5;
      return(t);
    }
    t = collect_om_2_0(f_1, i_1, t);
  }
  {
    ATerm c_11 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_11;
      }
  }
  t = y_23;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(p_1, d_7, e_7, t);
  return(t);
}
static ATerm p_1 (ATerm t)
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
static ATerm u_5 (ATerm s_23, ATerm t_23, ATerm u_23, ATerm t)
{
  static ATerm l_1 (ATerm t);
  static ATerm l_1 (ATerm t)
  {
    ATerm w_6 = NULL,x_6 = NULL,b_7 = NULL;
    if(match_cons(t, sym_SDefT_4))
      {
        x_6 = ATgetArgument(t, 0);
        {
          ATerm d_11 = ATgetArgument(t, 1);
        }
        {
          ATerm e_11 = ATgetArgument(t, 2);
        }
        b_7 = ATgetArgument(t, 3);
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
      t = t_5(o_1, x_6, b_7, t);
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
  t = collect_om_2_0(l_1, m_1, t);
  return(t);
}
static ATerm t_8 (ATerm j_7, ATerm k_7, ATerm p_7, ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,a_8 = NULL,n_0 = NULL;
  t = SSLgetAnnotations(p_7);
  v_7 = t;
  t = k_7;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_7, k_7);
  n_0 = t;
  t = SSLsetAnnotations(n_0, v_7);
  a_8 = t;
  t = SSL_explode_term(a_8);
  if(match_cons(t, sym__2))
    {
      ATerm i_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_11 = ATgetArgument(t, 1);
        if(((ATgetType(k_11) == AT_LIST) && !(ATisEmpty(k_11))))
          {
            u_7 = ATgetFirst((ATermList) k_11);
            {
              ATerm l_11 = (ATerm) ATgetNext((ATermList) k_11);
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
ATerm map_apply_1_0 (ATerm d_109 (ATerm), ATerm t)
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
          ATerm n_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_8(d_8, e_8, c_8, t);
              LocalPopChoice(r_11);
            }
          else
            {
              t = n_11;
              {
                ATerm p_8 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, d_8, i_8);
                t = d_109(t);
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
  ATerm k_4 = NULL,n_4 = NULL;
  if(match_cons(t, sym__2))
    {
      k_4 = ATgetArgument(t, 0);
      n_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(s_1, k_4, n_4, t);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm o_4 = NULL;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      if((o_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm p_4 = NULL,s_4 = NULL,v_4 = NULL;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      {
        ATerm t_11 = ATgetArgument(t, 1);
        if(match_cons(t_11, sym__2))
          {
            s_4 = ATgetArgument(t_11, 0);
            v_4 = ATgetArgument(t_11, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_5(p_4, s_4, v_4, t);
  return(t);
}
ATerm strategy_invokation_warning_1_0 (ATerm z_108 (ATerm), ATerm t)
{
  ATerm v_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_9 = NULL,i_4 = NULL;
      k_9 = t;
      t = collect_om_2_0(z_108, r_1, t);
      t = concat_0_0(t);
      {
        ATerm c_12 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_12;
          }
      }
      i_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_9, i_4);
      t = map_apply_1_0(a_2, t);
      LocalPopChoice(b_12);
    }
  else
    {
      t = v_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  static ATerm p_9 (ATerm t);
  static ATerm p_9 (ATerm t)
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_115(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = SRTS_one(p_9, t);
      }
    return(t);
  }
  t = p_9(t);
  return(t);
}
static ATerm v_5 (ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm r_48, ATerm q_48, ATerm t)
{
  t = n_125(t);
  {
    static ATerm c_2 (ATerm t);
    static ATerm c_2 (ATerm t)
    {
      ATerm q_9 = NULL;
      q_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_48, q_9);
      t = m_125(t);
      return(t);
    }
    t = fetch_1_0(c_2, t);
  }
  t = q_48;
  return(t);
}
static ATerm w_5 (ATerm j_125 (ATerm), ATerm n_48, ATerm m_48, ATerm t)
{
  static ATerm u_10 (ATerm t);
  static ATerm u_10 (ATerm t)
  {
    ATerm j_10 = NULL,l_10 = NULL,q_10 = NULL;
    j_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_48;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_10 = ATgetFirst((ATermList) t);
            q_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm i_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_10;
              {
                static ATerm d_2 (ATerm t);
                static ATerm d_2 (ATerm t)
                {
                  t = m_48;
                  return(t);
                }
                t = v_5(j_125, d_2, l_10, q_10, t);
              }
              t = u_10(t);
              LocalPopChoice(l_12);
            }
          else
            {
              t = i_12;
              {
                ATerm c_5 = NULL,j_5 = NULL,v_0 = NULL;
                t = SSLgetAnnotations(j_10);
                c_5 = t;
                t = q_10;
                t = u_10(t);
                j_5 = t;
                t = (ATerm) ATinsert(CheckATermList(j_5), l_10);
                v_0 = t;
                t = SSLsetAnnotations(v_0, c_5);
              }
            }
        }
      }
    return(t);
  }
  t = n_48;
  t = u_10(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_127 (ATerm), ATerm a_128 (ATerm), ATerm b_128 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
  x_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_10;
      t = z_127(t);
    }
  else
    {
      ATerm f_11 = NULL,g_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_10 = ATgetFirst((ATermList) t);
          z_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_10;
      t = b_128(t);
      f_11 = t;
      t = z_10;
      t = foldr_3_0(z_127, a_128, b_128, t);
      g_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_11, g_11);
      t = a_128(t);
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm r_126 (ATerm), ATerm s_126 (ATerm), ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_11 = NULL;
      t = r_126(t);
      j_11 = t;
      t = (ATerm) ATinsert(ATempty, j_11);
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm t_6 = NULL,u_6 = NULL;
        static ATerm r_2 (ATerm t);
        static ATerm r_2 (ATerm t)
        {
          t = collect_om_2_0(r_126, s_126, t);
          return(t);
        }
        u_6 = t;
        t = SSL_explode_term(u_6);
        if(match_cons(t, sym__2))
          {
            ATerm q_12 = ATgetArgument(t, 0);
            t_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_6;
        t = foldr_3_0(q_2, s_126, r_2, t);
      }
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm m_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      m_11 = ATgetArgument(t, 0);
      o_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5(t_2, m_11, o_11, t);
  return(t);
}
static ATerm t_2 (ATerm t)
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
ATerm strategy_argument_warning_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  t = collect_om_2_0(a_109, s_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  t = sdef_with_property_1_0(a_3, t);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm q_11 = NULL,u_11 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm u_12 = ATgetArgument(t, 0);
      if(match_cons(u_12, sym_SVar_1))
        {
          ATerm x_12 = ATgetArgument(u_12, 0);
          if((ATgetSymbol((ATermAppl) x_12) != ATmakeSymbol("debug", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm v_12 = ATgetArgument(t, 1);
        if(((ATgetType(v_12) == AT_LIST) && !(ATisEmpty(v_12))))
          {
            u_11 = ATgetFirst((ATermList) v_12);
            {
              ATerm y_12 = (ATerm) ATgetNext((ATermList) v_12);
              if(((ATgetType(y_12) != AT_LIST) || !(ATisEmpty(y_12))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm w_12 = ATgetArgument(t, 2);
        if(((ATgetType(w_12) != AT_LIST) || !(ATisEmpty(w_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_11;
  {
    ATerm z_12 = t;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,g_12 = NULL,j_12 = NULL,k_12 = NULL,z_0 = NULL,y_0 = NULL;
        k_12 = t;
        if(match_cons(t, sym_Build_1))
          {
            y_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_12);
        x_11 = t;
        t = y_11;
        if(match_cons(t, sym_Str_1))
          {
            g_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_11);
        z_11 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, g_12);
        y_0 = t;
        t = SSLsetAnnotations(y_0, z_11);
        j_12 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, j_12);
        z_0 = t;
        t = SSLsetAnnotations(z_0, x_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_12;
      }
  }
  {
    static ATerm b_3 (ATerm t);
    static ATerm b_3 (ATerm t)
    {
      ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL,a_1 = NULL;
      t_12 = t;
      if(match_cons(t, sym_Str_1))
        {
          s_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_12);
      r_12 = t;
      t = s_12;
      if(((q_11 != NULL) && (q_11 != t)))
        _fail(t);
      else
        q_11 = t;
      t = (ATerm) ATmakeAppl(sym_Str_1, s_12);
      a_1 = t;
      t = SSLsetAnnotations(a_1, r_12);
      return(t);
    }
    t = oncetd_1_0(b_3, t);
  }
  t = (ATerm) ATmakeAppl(sym_DebugWarning_1, not_null(q_11));
  return(t);
}
ATerm debug_with_incorrect_string_0_0 (ATerm t)
{
  t = strategy_argument_warning_1_0(v_2, t);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = sdef_with_property_1_0(f_3, t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm h_13 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm a_13 = ATgetArgument(t, 0);
      if(match_cons(a_13, sym_SVar_1))
        {
          ATerm f_13 = ATgetArgument(a_13, 0);
          if((ATgetSymbol((ATermAppl) f_13) != ATmakeSymbol("obsolete", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm c_13 = ATgetArgument(t, 1);
        if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
          {
            ATerm g_13 = ATgetFirst((ATermList) c_13);
            if(match_cons(g_13, sym_Build_1))
              {
                ATerm j_13 = ATgetArgument(g_13, 0);
                if(match_cons(j_13, sym_Str_1))
                  {
                    h_13 = ATgetArgument(j_13, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            {
              ATerm i_13 = (ATerm) ATgetNext((ATermList) c_13);
              if(((ATgetType(i_13) != AT_LIST) || !(ATisEmpty(i_13))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm d_13 = ATgetArgument(t, 2);
        if(((ATgetType(d_13) != AT_LIST) || !(ATisEmpty(d_13))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_ObsoleteWarning_1, h_13);
  return(t);
}
ATerm Warning_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_13 = NULL;
      e_13 = t;
      if(match_string(t, "debug-arguments"))
        {
          t = e_13;
          t = i_109(t);
          t = debug_with_incorrect_string_0_0(t);
        }
      else
        {
          if(match_string(t, "obsolete-strategy-calls"))
            {
              t = e_13;
              t = i_109(t);
              t = strategy_invokation_warning_1_0(e_3, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("maybe-unbound-variables", 0, ATtrue)))
                _fail(t);
              t = (ATerm) ATempty;
            }
        }
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LowerCaseConstructors_1_0(i_109, t);
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            {
              ATerm s_13 = NULL,g_7 = NULL,h_7 = NULL;
              s_13 = t;
              t = term_c_10;
              g_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, s_13), term_p_13);
              h_7 = t;
              t = SSL_printnl(g_7, h_7);
              t = (ATerm) ATempty;
            }
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm i_122 (ATerm), ATerm t)
{
  static ATerm o_14 (ATerm t);
  static ATerm o_14 (ATerm t)
  {
    ATerm l_14 = NULL,m_14 = NULL,n_14 = NULL;
    t = i_122(t);
    l_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_14;
      }
    else
      {
        ATerm o_7 = NULL,z_7 = NULL,e_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_14 = ATgetFirst((ATermList) t);
            n_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_14);
        o_7 = t;
        t = n_14;
        t = o_14(t);
        z_7 = t;
        t = (ATerm) ATinsert(CheckATermList(z_7), m_14);
        e_1 = t;
        t = SSLsetAnnotations(e_1, o_7);
      }
    return(t);
  }
  t = o_14(t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm z_14 = NULL,b_15 = NULL,c_15 = NULL;
  c_15 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_14 = ATgetFirst((ATermList) t);
      b_15 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_15 = NULL;
            t = b_15;
            {
              static ATerm h_3 (ATerm t);
              static ATerm h_3 (ATerm t)
              {
                ATerm u_13 = t;
                if((PushChoice() == 0))
                  {
                    if((z_14 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = u_13;
                  }
                return(t);
              }
              t = filter_1_0(h_3, t);
            }
            g_15 = t;
            t = (ATerm) ATinsert(CheckATermList(g_15), z_14);
            LocalPopChoice(t_13);
          }
        else
          {
            t = q_13;
            t = c_15;
          }
      }
    }
  else
    {
      t = c_15;
    }
  return(t);
}
ATerm Stratego_warnings_0_0 (ATerm t)
{
  ATerm u_14 = NULL;
  u_14 = t;
  {
    ATerm v_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_14 = NULL,x_14 = NULL;
        t = term_y_13;
        w_14 = t;
        t = term_z_13;
        x_14 = t;
        t = term_a_14;
        t = n_6(w_14, x_14, t);
        t = listtd_1_0(g_3, t);
        LocalPopChoice(x_13);
      }
    else
      {
        t = v_13;
        t = (ATerm) ATempty;
      }
  }
  {
    static ATerm j_3 (ATerm t);
    static ATerm j_3 (ATerm t)
    {
      static ATerm l_3 (ATerm t);
      static ATerm l_3 (ATerm t)
      {
        t = u_14;
        return(t);
      }
      t = Warning_1_0(l_3, t);
      return(t);
    }
    t = filter_1_0(j_3, t);
  }
  t = concat_0_0(t);
  t = print_warnings_0_0(t);
  t = u_14;
  return(t);
}
static ATerm a_6 (ATerm d_58, ATerm e_58, ATerm t)
{
  ATerm j_15 = NULL;
  t = SSL_fputc(d_58, e_58);
  j_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_15);
  return(t);
}
static ATerm b_6 (ATerm k_42, ATerm l_42, ATerm t)
{
  ATerm k_15 = NULL;
  t = SSL_write_term_to_stream_text(k_42, l_42);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_15);
  return(t);
}
static ATerm d_6 (ATerm q_120 (ATerm), ATerm z_288, ATerm q_42, ATerm t)
{
  ATerm l_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_288, term_b_14);
  t = h_6(t);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, q_42);
  t = q_120(t);
  t = fclose_0_0(t);
  t = q_42;
  return(t);
}
static ATerm c_6 (ATerm g_42, ATerm h_42, ATerm t)
{
  ATerm u_15 = NULL;
  t = SSL_write_term_to_stream_baf(g_42, h_42);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_15);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_14 = ATgetArgument(t, 0);
      if(match_cons(c_14, sym_Stream_1))
        {
          h_16 = ATgetArgument(c_14, 0);
        }
      else
        _fail(t);
      i_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_6(h_16, i_16, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_14 = ATgetArgument(t, 0);
      if(match_cons(d_14, sym_Stream_1))
        {
          n_16 = ATgetArgument(d_14, 0);
        }
      else
        _fail(t);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_6(n_16, p_16, t);
  k_16 = t;
  t = term_e_14;
  l_16 = t;
  t = k_16;
  if(match_cons(t, sym_Stream_1))
    {
      m_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_14, k_16);
  t = a_6(l_16, m_16, t);
  return(t);
}
ATerm output_1_0 (ATerm q_140 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  t = q_140(t);
  w_15 = t;
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_15 = NULL,b_16 = NULL;
        t = term_y_13;
        x_15 = t;
        t = term_h_14;
        b_16 = t;
        t = term_i_14;
        t = n_6(x_15, b_16, t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        t = term_j_14;
      }
  }
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_15, w_15);
  {
    ATerm k_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_16 = NULL,g_16 = NULL;
        t = term_y_13;
        e_16 = t;
        t = term_r_14;
        g_16 = t;
        t = term_s_14;
        t = n_6(e_16, g_16, t);
        t = (ATerm) ATmakeAppl(sym__2, v_15, w_15);
        LocalPopChoice(p_14);
        if(match_cons(t, sym__2))
          {
            ATerm t_14 = ATgetArgument(t, 0);
            ATerm y_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_6(n_3, v_15, w_15, t);
      }
    else
      {
        t = k_14;
        if(match_cons(t, sym__2))
          {
            ATerm a_15 = ATgetArgument(t, 0);
            ATerm d_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_6(p_3, v_15, w_15, t);
      }
  }
  return(t);
}
static ATerm s_17 (ATerm h_17, ATerm t)
{
  t = SSL_fclose(h_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_17 = ATgetArgument(t, 0);
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_17);
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            t = s_17(q_17, t);
          }
      }
    }
  else
    {
      t = s_17(q_17, t);
    }
  return(t);
}
static ATerm e_6 (ATerm m_42, ATerm t)
{
  t = SSL_read_term_from_stream(m_42);
  return(t);
}
static ATerm f_6 (ATerm j_56, ATerm k_56, ATerm t)
{
  t = SSL_strcat(j_56, k_56);
  return(t);
}
static ATerm g_6 (ATerm f_58, ATerm g_58, ATerm t)
{
  ATerm t_17 = NULL;
  t = SSL_fopen(f_58, g_58);
  t_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_17 = NULL;
  t = SSL_stdin_stream();
  u_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_17 = NULL;
  t = SSL_stdout_stream();
  v_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_17 = NULL;
  t = SSL_stderr_stream();
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_17);
  return(t);
}
static ATerm j_19 (ATerm c_18, ATerm t)
{
  ATerm d_18 = NULL;
  t = SSL_explode_term(c_18);
  if(match_cons(t, sym__2))
    {
      ATerm h_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_15 = ATgetArgument(t, 1);
        if(((ATgetType(i_15) == AT_LIST) && !(ATisEmpty(i_15))))
          {
            d_18 = ATgetFirst((ATermList) i_15);
            {
              ATerm m_15 = (ATerm) ATgetNext((ATermList) i_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_19 (ATerm j_18, ATerm k_18, ATerm l_18, ATerm t)
{
  ATerm m_18 = NULL,o_18 = NULL,p_18 = NULL,u_18 = NULL,g_1 = NULL;
  t = SSLgetAnnotations(l_18);
  p_18 = t;
  t = j_18;
  if(match_cons(t, sym_Path_1))
    {
      u_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_18, k_18);
  g_1 = t;
  t = SSLsetAnnotations(g_1, p_18);
  if(match_cons(t, sym__2))
    {
      m_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(m_18, o_18, t);
  return(t);
}
static ATerm l_19 (ATerm w_18, ATerm x_18, ATerm y_18, ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL,e_19 = NULL,h_1 = NULL;
  t = SSLgetAnnotations(y_18);
  b_19 = t;
  t = SSL_is_string(w_18);
  e_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_19, x_18);
  h_1 = t;
  t = SSLsetAnnotations(h_1, b_19);
  if(match_cons(t, sym__2))
    {
      z_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(z_18, a_19, t);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_19(g_19, t);
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            {
              ATerm s_15 = t;
              int t_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_19(h_19, i_19, g_19, t);
                  LocalPopChoice(t_15);
                }
              else
                {
                  t = s_15;
                  t = l_19(h_19, i_19, g_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_19(g_19, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,r_19 = NULL,z_19 = NULL;
  z_19 = t;
  {
    ATerm y_15 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, z_19, term_f_16);
        t = h_6(t);
        LocalPopChoice(d_16);
      }
    else
      {
        t = y_15;
        {
          ATerm b_9 = NULL,c_9 = NULL;
          t = term_j_16;
          c_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_j_16, z_19);
          t = f_6(c_9, z_19, t);
          b_9 = t;
          t = SSL_perror(b_9);
          _fail(t);
        }
      }
  }
  o_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_6(r_19, t);
  n_19 = t;
  t = o_19;
  t = fclose_0_0(t);
  t = n_19;
  return(t);
}
ATerm input_1_0 (ATerm r_140 (ATerm), ATerm t)
{
  ATerm o_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_20 = NULL,e_20 = NULL;
      t = term_y_13;
      d_20 = t;
      t = term_r_16;
      e_20 = t;
      t = term_s_16;
      t = n_6(d_20, e_20, t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = o_16;
      t = term_t_16;
    }
  t = ReadFromFile_0_0(t);
  t = r_140(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL;
  t = term_y_13;
  f_20 = t;
  t = term_u_16;
  g_20 = t;
  t = term_v_16;
  t = n_6(f_20, g_20, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL;
  i_20 = t;
  {
    ATerm w_16 = t;
    int x_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = i_20;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm y_16 = ATgetFirst((ATermList) t);
                ATerm z_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_20;
          }
        LocalPopChoice(x_16);
      }
    else
      {
        t = w_16;
        t = (ATerm) ATinsert(ATempty, i_20);
      }
  }
  j_20 = t;
  t = term_j_14;
  k_20 = t;
  t = SSL_printnl(k_20, j_20);
  t = i_20;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_20 = ATgetFirst((ATermList) t);
      q_20 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_20 = NULL,v_20 = NULL;
        static ATerm q_3 (ATerm t);
        static ATerm q_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_20)), not_null(v_20));
          return(t);
        }
        t = q_20;
        t = o_0(t);
        if(((u_20 != NULL) && (u_20 != t)))
          _fail(t);
        else
          u_20 = t;
        t = p_20;
        t = m_0(t);
        if(((v_20 != NULL) && (v_20 != t)))
          _fail(t);
        else
          v_20 = t;
        t = q_20;
        t = reverse_acc_2_0(m_0, q_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_17;
      t = o_0(t);
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_1 = NULL;
  j_21 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_21);
  h_21 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_21);
  k_1 = t;
  t = SSLsetAnnotations(k_1, h_21);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_21), term_b_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm p_142 (ATerm), ATerm q_142 (ATerm), ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL;
  ATerm c_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_21 = NULL,e_21 = NULL;
      t = term_y_13;
      d_21 = t;
      t = term_u_16;
      e_21 = t;
      t = term_v_16;
      t = n_6(d_21, e_21, t);
      LocalPopChoice(d_17);
    }
  else
    {
      t = c_17;
      t = fetch_1_0(r_3, t);
    }
  {
    ATerm e_17 = t;
    int f_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_142(t);
        t = echo_0_0(t);
        LocalPopChoice(f_17);
      }
    else
      {
        t = e_17;
      }
  }
  t = term_g_17;
  t = echo_0_0(t);
  t = term_i_17;
  b_21 = t;
  t = term_j_17;
  c_21 = t;
  t = term_k_17;
  t = n_6(b_21, c_21, t);
  t = reverse_acc_2_0(_id, t_3, t);
  t = map_1_0(u_3, t);
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_21 = NULL;
        t = q_142(t);
        s_21 = t;
        t = (ATerm) ATinsert(CheckATermList(s_21), term_l_9);
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
static ATerm v_3 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,n_1 = NULL;
  f_22 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_22);
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_22);
  n_1 = t;
  t = SSLsetAnnotations(n_1, d_22);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_21 = NULL,a_22 = NULL;
        t = term_y_13;
        z_21 = t;
        t = term_u_16;
        a_22 = t;
        t = term_v_16;
        t = n_6(z_21, a_22, t);
        LocalPopChoice(o_17);
      }
    else
      {
        t = n_17;
        t = fetch_1_0(v_3, t);
      }
  }
  t = v_21;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm j_22 = NULL;
  j_22 = t;
  if(match_string(t, "-k"))
    {
      t = j_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_22;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm k_22 = NULL,n_22 = NULL,o_22 = NULL;
  k_22 = t;
  t = SSL_string_to_int(k_22);
  n_22 = t;
  t = term_r_17;
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_17, n_22);
  t = q_6(o_22, n_22, t);
  t = k_22;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_x_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_4, f_4, j_4, t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  if(match_string(t, "-S"))
    {
      t = q_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_22;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  t = term_y_17;
  r_22 = t;
  t = term_x_9;
  s_22 = t;
  t = term_z_17;
  t = q_6(r_22, s_22, t);
  t = term_a_18;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_b_18;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  t = SSL_string_to_int(v_22);
  w_22 = t;
  t = term_y_17;
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_17, w_22);
  t = q_6(x_22, w_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_22);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_e_18;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL;
  t = term_f_18;
  a_23 = t;
  t = term_a_17;
  b_23 = t;
  t = term_g_18;
  t = q_6(a_23, b_23, t);
  t = term_h_18;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_i_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm n_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_4, z_4, a_5, t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = n_18;
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(b_5, d_5, e_5, t);
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            t = Option_3_0(k_5, m_5, n_5, t);
          }
      }
    }
  return(t);
}
static ATerm q_6 (ATerm z_76, ATerm a_77, ATerm t)
{
  ATerm e_23 = NULL,f_23 = NULL;
  t = term_y_13;
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_13, z_76, a_77);
  t = lookup_table_0_1(e_23, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(z_76, a_77, f_23, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_13, z_76, a_77);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_23 = NULL,z_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_24 = NULL,g_24 = NULL,h_24 = NULL;
      t = term_a_17;
      t = e_0(t);
      a_24 = t;
      t = term_i_17;
      g_24 = t;
      t = term_j_17;
      h_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_17, term_j_17, a_24);
      t = o_6(g_24, h_24, a_24, t);
      _fail(t);
    }
  else
    {
      ATerm l_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_23 = ATgetFirst((ATermList) t);
          z_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_23;
      t = b_0(t);
      t = term_a_17;
      t = c_0(t);
      l_24 = t;
      t = (ATerm) ATinsert(CheckATermList(z_23), l_24);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm n_24 = NULL;
  n_24 = t;
  if(match_string(t, "-o"))
    {
      t = n_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_24;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm o_24 = NULL,p_24 = NULL;
  o_24 = t;
  t = term_h_14;
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_14, o_24);
  t = q_6(p_24, o_24, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_24);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = term_t_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, y_6, z_6, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  if(match_string(t, "-i"))
    {
      t = r_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_24;
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  u_24 = t;
  t = term_r_16;
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_16, u_24);
  t = q_6(v_24, u_24, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_24);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_v_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_7, c_7, i_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm w_24 = NULL,z_24 = NULL,b_25 = NULL;
  if(match_cons(t, sym__2))
    {
      w_24 = ATgetArgument(t, 0);
      z_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_9), z_24), term_d_19), w_24), term_c_19);
  b_25 = t;
  t = SSL_concat_strings(b_25);
  return(t);
}
ATerm Display_possible_warnings_0_0 (ATerm t)
{
  t = map_1_0(l_7, t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_121 (ATerm), ATerm t)
{
  static ATerm y_25 (ATerm t);
  static ATerm y_25 (ATerm t)
  {
    ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
    x_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_25 = ATgetFirst((ATermList) t);
        w_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_9 = NULL,y_9 = NULL,q_1 = NULL;
          t = SSLgetAnnotations(x_25);
          s_9 = t;
          t = w_25;
          t = y_25(t);
          y_9 = t;
          t = (ATerm) ATinsert(CheckATermList(y_9), v_25);
          q_1 = t;
          t = SSLsetAnnotations(q_1, s_9);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_25;
        t = p_121(t);
      }
    return(t);
  }
  t = y_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_25 = NULL,g_25 = NULL,h_25 = NULL;
  d_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_25;
    }
  else
    {
      static ATerm m_7 (ATerm t);
      static ATerm m_7 (ATerm t)
      {
        t = not_null(h_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_25 = ATgetFirst((ATermList) t);
          if(((h_25 != NULL) && (h_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_25;
      t = at_end_1_0(m_7, t);
    }
  return(t);
}
static ATerm v_26 (ATerm g_26, ATerm t)
{
  ATerm h_26 = NULL;
  t = SSL_explode_term(g_26);
  if(match_cons(t, sym__2))
    {
      ATerm f_19 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_19) != ATmakeSymbol("", 0, ATtrue)))
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
  ATerm l_26 = NULL,m_26 = NULL,n_26 = NULL;
  n_26 = t;
  if(match_cons(t, sym__2))
    {
      l_26 = ATgetArgument(t, 0);
      m_26 = ATgetArgument(t, 1);
      {
        ATerm m_19 = t;
        int p_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_7 (ATerm t);
            static ATerm n_7 (ATerm t)
            {
              t = m_26;
              return(t);
            }
            t = l_26;
            t = at_end_1_0(n_7, t);
            LocalPopChoice(p_19);
          }
        else
          {
            t = m_19;
            t = v_26(n_26, t);
          }
      }
    }
  else
    {
      t = v_26(n_26, t);
    }
  return(t);
}
static ATerm y_5 (ATerm f_77, ATerm e_77, ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,a_27 = NULL,b_27 = NULL;
  t = f_77;
  {
    ATerm q_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_27 = NULL;
        t = term_y_13;
        d_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_13, f_77);
        t = n_6(d_27, f_77, t);
        LocalPopChoice(s_19);
      }
    else
      {
        t = q_19;
        t = (ATerm) ATempty;
      }
  }
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_77, x_26);
  t = conc_0_0(t);
  w_26 = t;
  t = term_y_13;
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_13, f_77, w_26);
  t = lookup_table_0_1(a_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(f_77, w_26, b_27, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_13, f_77, w_26);
  return(t);
}
static ATerm z_5 (ATerm g_43, ATerm n_300, ATerm t)
{
  static ATerm q_7 (ATerm t);
  static ATerm q_7 (ATerm t)
  {
    if((g_43 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = n_300;
  t = fetch_1_0(q_7, t);
  return(t);
}
ATerm map_1_0 (ATerm y_120 (ATerm), ATerm t)
{
  static ATerm k_28 (ATerm t);
  static ATerm k_28 (ATerm t)
  {
    ATerm g_28 = NULL,h_28 = NULL,j_28 = NULL;
    g_28 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_28;
      }
    else
      {
        ATerm n_10 = NULL,r_10 = NULL,w_10 = NULL,z_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_28 = ATgetFirst((ATermList) t);
            j_28 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_28);
        n_10 = t;
        t = h_28;
        t = y_120(t);
        r_10 = t;
        t = j_28;
        t = k_28(t);
        w_10 = t;
        t = (ATerm) ATinsert(CheckATermList(w_10), r_10);
        z_1 = t;
        t = SSLsetAnnotations(z_1, n_10);
      }
    return(t);
  }
  t = k_28(t);
  return(t);
}
ATerm filter_1_0 (ATerm b_129 (ATerm), ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  i_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_29;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_29 = ATgetFirst((ATermList) t);
          k_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_11 = NULL,w_11 = NULL,a_12 = NULL,b_2 = NULL;
            t = SSLgetAnnotations(i_29);
            s_11 = t;
            t = j_29;
            t = b_129(t);
            w_11 = t;
            t = k_29;
            t = filter_1_0(b_129, t);
            a_12 = t;
            t = (ATerm) ATinsert(CheckATermList(a_12), w_11);
            b_2 = t;
            t = SSLsetAnnotations(b_2, s_11);
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            t = k_29;
            t = filter_1_0(b_129, t);
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm p_63, ATerm q_63, ATerm o_63, ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL;
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_63, q_63);
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_19 = ATgetArgument(t, 0);
            ATerm y_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_63, q_63);
        t = n_6(p_63, q_63, t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = (ATerm) ATempty;
      }
  }
  r_29 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_63, q_63, (ATerm) ATinsert(CheckATermList(r_29), o_63));
  t = lookup_table_0_1(p_63, t);
  u_29 = t;
  t = (ATerm) ATinsert(CheckATermList(r_29), o_63);
  s_29 = t;
  t = u_29;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(q_63, s_29, t_29, t);
  t = q_29;
  return(t);
}
ATerm ArgOption_3_0 (ATerm f_0 (ATerm), ATerm h_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,k_30 = NULL,l_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
      t = term_a_17;
      t = k_0(t);
      m_30 = t;
      t = term_i_17;
      n_30 = t;
      t = term_j_17;
      o_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_17, term_j_17, m_30);
      t = o_6(n_30, o_30, m_30, t);
      _fail(t);
    }
  else
    {
      ATerm s_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_30 = ATgetFirst((ATermList) t);
          i_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_30 = ATgetFirst((ATermList) t);
          l_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_30;
      t = f_0(t);
      t = k_30;
      t = h_0(t);
      s_30 = t;
      t = (ATerm) ATinsert(CheckATermList(l_30), s_30);
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  if(match_string(t, "--warning"))
    {
      t = z_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = z_30;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm e_32 = NULL,g_32 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_20), term_r_20), term_m_20), term_c_20);
  t = Display_possible_warnings_0_0(t);
  e_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(e_32), term_z_20), term_y_20), term_x_20);
  g_32 = t;
  t = SSL_concat_strings(g_32);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  d_31 = t;
  t = SSL_explode_term(d_31);
  if(match_cons(t, sym__2))
    {
      ATerm a_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_21 = ATgetArgument(t, 1);
        if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
          {
            c_31 = ATgetFirst((ATermList) f_21);
            {
              ATerm g_21 = (ATerm) ATgetNext((ATermList) f_21);
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
static ATerm y_7 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  s_31 = t;
  t = SSL_explode_term(s_31);
  if(match_cons(t, sym__2))
    {
      ATerm k_21 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_21) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_21 = ATgetArgument(t, 1);
        if(((ATgetType(l_21) == AT_LIST) && !(ATisEmpty(l_21))))
          {
            r_31 = ATgetFirst((ATermList) l_21);
            {
              ATerm m_21 = (ATerm) ATgetNext((ATermList) l_21);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_31;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  static ATerm s_7 (ATerm t);
  static ATerm s_7 (ATerm t)
  {
    if(((y_30 != NULL) && (y_30 != t)))
      _fail(t);
    else
      y_30 = t;
    {
      ATerm n_21 = t;
      int o_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_30;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
            _fail(t);
          t = y_30;
          LocalPopChoice(o_21);
          {
            ATerm a_31 = NULL,b_31 = NULL;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_20), term_r_20), term_m_20), term_c_20);
            t = map_1_0(w_7, t);
            a_31 = t;
            t = term_z_13;
            b_31 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_z_13, a_31);
            t = q_6(b_31, a_31, t);
          }
        }
      else
        {
          t = n_21;
          t = y_30;
          {
            ATerm p_21 = t;
            int q_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = SSL_explode_string(y_30);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm t_21 = ATgetFirst((ATermList) t);
                    if(((ATgetType(t_21) != AT_INT) || (ATgetInt((ATermInt) t_21) != 110)))
                      _fail(t);
                    {
                      ATerm u_21 = (ATerm) ATgetNext((ATermList) t);
                      if(((ATgetType(u_21) == AT_LIST) && !(ATisEmpty(u_21))))
                        {
                          ATerm w_21 = ATgetFirst((ATermList) u_21);
                          if(((ATgetType(w_21) != AT_INT) || (ATgetInt((ATermInt) w_21) != 111)))
                            _fail(t);
                          {
                            ATerm x_21 = (ATerm) ATgetNext((ATermList) u_21);
                            if(((ATgetType(x_21) == AT_LIST) && !(ATisEmpty(x_21))))
                              {
                                ATerm y_21 = ATgetFirst((ATermList) x_21);
                                if(((ATgetType(y_21) != AT_INT) || (ATgetInt((ATermInt) y_21) != 45)))
                                  _fail(t);
                                if(((w_30 != NULL) && (w_30 != (ATerm) ATgetNext((ATermList) x_21))))
                                  _fail((ATerm) ATgetNext((ATermList) x_21));
                                else
                                  w_30 = (ATerm) ATgetNext((ATermList) x_21);
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
                t = y_30;
                LocalPopChoice(q_21);
                {
                  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL;
                  t = SSL_implode_string(w_30);
                  if(((x_30 != NULL) && (x_30 != t)))
                    _fail(t);
                  else
                    x_30 = t;
                  t = term_y_13;
                  g_31 = t;
                  t = term_z_13;
                  h_31 = t;
                  t = term_a_14;
                  t = n_6(g_31, h_31, t);
                  {
                    static ATerm x_7 (ATerm t);
                    static ATerm x_7 (ATerm t)
                    {
                      if((x_30 != t))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = filter_1_0(x_7, t);
                  }
                  e_31 = t;
                  t = term_z_13;
                  f_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_z_13, e_31);
                  t = q_6(f_31, e_31, t);
                }
              }
            else
              {
                t = p_21;
                t = y_30;
                {
                  ATerm b_22 = t;
                  int c_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_31 = NULL;
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_20), term_r_20), term_m_20), term_c_20);
                      t = map_1_0(y_7, t);
                      o_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_30, o_31);
                      t = z_5(y_30, o_31, t);
                      t = y_30;
                      LocalPopChoice(c_22);
                      {
                        ATerm t_31 = NULL,u_31 = NULL;
                        t = term_z_13;
                        t_31 = t;
                        t = (ATerm) ATinsert(ATempty, y_30);
                        u_31 = t;
                        t = (ATerm) ATmakeAppl(sym__2, term_z_13, (ATerm) ATinsert(ATempty, y_30));
                        t = y_5(t_31, u_31, t);
                      }
                    }
                  else
                    {
                      t = b_22;
                      {
                        ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
                        t = term_y_13;
                        c_32 = t;
                        t = term_u_16;
                        d_32 = t;
                        t = term_v_16;
                        t = n_6(c_32, d_32, t);
                        v_31 = t;
                        t = term_c_10;
                        x_31 = t;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_22), y_30), term_g_22), v_31);
                        b_32 = t;
                        t = SSL_printnl(x_31, b_32);
                        t = term_z_9;
                        w_31 = t;
                        t = SSL_exit(w_31);
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_22), y_30), term_g_22), v_31);
                      }
                    }
                }
              }
          }
        }
    }
    return(t);
  }
  t = ArgOption_3_0(r_7, s_7, t_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm h_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_17;
  t = whoami_0_0(t);
  h_32 = t;
  t = term_c_10;
  l_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_22), h_32);
  m_32 = t;
  t = SSL_printnl(l_32, m_32);
  t = term_z_9;
  k_32 = t;
  t = SSL_exit(k_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  t = term_y_13;
  n_32 = t;
  t = term_u_16;
  o_32 = t;
  t = term_v_16;
  t = n_6(n_32, o_32, t);
  return(t);
}
static ATerm i_6 (ATerm y_61, ATerm z_61, ATerm t)
{
  ATerm l_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_61, z_61);
      LocalPopChoice(m_22);
    }
  else
    {
      t = l_22;
      t = SSL_addr(y_61, z_61);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_127 (ATerm), ATerm y_127 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,s_32 = NULL,t_32 = NULL;
  q_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_32;
      t = x_127(t);
    }
  else
    {
      ATerm w_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_32 = ATgetFirst((ATermList) t);
          t_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_32;
      t = foldr_2_0(x_127, y_127, t);
      w_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_32, w_32);
      t = y_127(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_x_9;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL;
  if(match_cons(t, sym__2))
    {
      m_12 = ATgetArgument(t, 0);
      n_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(m_12, n_12, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_33 = NULL,f_12 = NULL,h_12 = NULL;
  t = times_0_0(t);
  h_12 = t;
  t = SSL_explode_term(h_12);
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      f_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12;
  t = foldr_2_0(b_8, f_8, t);
  b_33 = t;
  t = SSL_TicksToSeconds(b_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_33 = NULL,t_33 = NULL,u_33 = NULL;
  q_33 = t;
  if(match_cons(t, sym__2))
    {
      t_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_22 = t;
    int u_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_33;
        if((t_33 != t))
          {
            _fail(t);
          }
        t = q_33;
        LocalPopChoice(u_22);
      }
    else
      {
        t = t_22;
        t = (ATerm) ATmakeAppl(sym__2, t_33, u_33);
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_33, u_33);
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              t = SSL_gtr(t_33, u_33);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_33, u_33);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_137 (ATerm), ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  {
    ATerm c_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
        t = term_y_13;
        g_34 = t;
        t = term_y_17;
        h_34 = t;
        t = term_g_23;
        t = n_6(g_34, h_34, t);
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_34, term_z_9);
        t = geq_0_0(t);
        t = a_34;
        t = m_137(t);
        LocalPopChoice(d_23);
      }
    else
      {
        t = c_23;
        t = a_34;
      }
  }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,n_34 = NULL,o_34 = NULL;
  t = run_time_0_0(t);
  j_34 = t;
  t = term_a_17;
  t = whoami_0_0(t);
  k_34 = t;
  t = term_c_10;
  n_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_23), j_34), term_h_23), k_34);
  o_34 = t;
  t = SSL_printnl(n_34, o_34);
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_23), j_34), term_h_23), k_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_8, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_9;
  t_34 = t;
  t = SSL_exit(t_34);
  return(t);
}
static ATerm r_6 (ATerm a_68, ATerm b_68, ATerm c_68, ATerm t)
{
  ATerm w_34 = NULL;
  t = SSL_hashtable_put(c_68, a_68, b_68);
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_34);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_65, ATerm t)
{
  ATerm n_35 = NULL;
  t = table_hashtable_0_0(t);
  n_35 = t;
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_13 = NULL;
        t = n_35;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_13 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_6(b_65, b_13, t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        {
          ATerm k_13 = NULL;
          t = b_65;
          t = table_create_0_0(t);
          t = n_35;
          if(match_cons(t, sym_Hashtable_1))
            {
              k_13 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_6(b_65, k_13, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm i_68, ATerm j_68, ATerm t)
{
  ATerm s_35 = NULL;
  t = SSL_hashtable_create(i_68, j_68);
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_35);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_35 = NULL,x_35 = NULL,y_35 = NULL,b_36 = NULL,e_36 = NULL;
  v_35 = t;
  t = term_l_23;
  b_36 = t;
  t = term_m_23;
  e_36 = t;
  t = v_35;
  t = new_hashtable_0_2(b_36, e_36, t);
  x_35 = t;
  t = v_35;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(v_35, x_35, y_35, t);
  t = v_35;
  return(t);
}
static ATerm k_6 (ATerm f_68, ATerm g_68, ATerm t)
{
  ATerm f_36 = NULL;
  t = SSL_hashtable_remove(g_68, f_68);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_36);
  return(t);
}
static ATerm l_6 (ATerm k_68, ATerm t)
{
  ATerm g_36 = NULL;
  t = SSL_hashtable_destroy(k_68);
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_36);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_36 = NULL;
  t = SSL_table_hashtable();
  h_36 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_36);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
  i_36 = t;
  t = table_hashtable_0_0(t);
  j_36 = t;
  t = lookup_table_0_1(i_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_6(l_36, t);
  t = j_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_6(i_36, k_36, t);
  t = i_36;
  return(t);
}
ATerm fetch_1_0 (ATerm i_121 (ATerm), ATerm t)
{
  static ATerm k_37 (ATerm t);
  static ATerm k_37 (ATerm t)
  {
    ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
    f_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_37 = ATgetFirst((ATermList) t);
        h_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_13 = NULL,w_13 = NULL,w_2 = NULL;
          t = SSLgetAnnotations(f_37);
          r_13 = t;
          t = g_37;
          t = i_121(t);
          w_13 = t;
          t = (ATerm) ATinsert(CheckATermList(h_37), w_13);
          w_2 = t;
          t = SSLsetAnnotations(w_2, r_13);
          LocalPopChoice(o_23);
        }
      else
        {
          t = n_23;
          {
            ATerm q_14 = NULL,v_14 = NULL,v_6 = NULL;
            t = SSLgetAnnotations(f_37);
            q_14 = t;
            t = h_37;
            t = k_37(t);
            v_14 = t;
            t = (ATerm) ATinsert(CheckATermList(v_14), g_37);
            v_6 = t;
            t = SSLsetAnnotations(v_6, q_14);
          }
        }
    }
    return(t);
  }
  t = k_37(t);
  return(t);
}
static ATerm s_6 (ATerm d_68, ATerm e_68, ATerm t)
{
  t = SSL_hashtable_get(e_68, d_68);
  return(t);
}
static ATerm n_6 (ATerm i_65, ATerm j_65, ATerm t)
{
  ATerm n_37 = NULL;
  t = lookup_table_0_1(i_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_6(j_65, n_37, t);
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
  ATerm p_37 = NULL,q_37 = NULL;
  t = term_p_23;
  p_37 = t;
  t = term_a_17;
  q_37 = t;
  t = term_q_23;
  t = q_6(p_37, q_37, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_r_23;
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
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
  t = term_p_23;
  t_37 = t;
  t = term_a_17;
  u_37 = t;
  t = term_q_23;
  t = q_6(t_37, u_37, t);
  t = term_x_23;
  r_37 = t;
  t = term_a_17;
  s_37 = t;
  t = term_b_24;
  t = q_6(r_37, s_37, t);
  t = term_c_24;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_d_24;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_8, j_8, k_8, t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      t = Option_3_0(m_8, n_8, o_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_90 (ATerm), ATerm s_90 (ATerm), ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,y_8 = NULL;
  a_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_37 = ATgetFirst((ATermList) t);
      x_37 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_38);
  v_37 = t;
  t = w_37;
  t = r_90(t);
  y_37 = t;
  t = x_37;
  t = s_90(t);
  z_37 = t;
  t = (ATerm) ATinsert(CheckATermList(z_37), y_37);
  y_8 = t;
  t = SSLsetAnnotations(y_8, v_37);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_142 (ATerm), ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,k_38 = NULL,l_38 = NULL,d_9 = NULL;
  f_38 = t;
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_24;
        t = k_142(t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
      }
  }
  t = f_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_38 = ATgetFirst((ATermList) t);
      i_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_38);
  g_38 = t;
  t = term_u_16;
  l_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_16, h_38);
  t = q_6(l_38, h_38, t);
  t = i_38;
  {
    static ATerm v_38 (ATerm t);
    static ATerm v_38 (ATerm t)
    {
      ATerm m_24 = t;
      int q_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_24 = t;
          int t_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_38 = NULL;
              o_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_38;
              LocalPopChoice(t_24);
            }
          else
            {
              t = s_24;
              t = k_142(t);
              t = Cons_2_0(_id, v_38, t);
            }
          LocalPopChoice(q_24);
        }
      else
        {
          t = m_24;
          {
            ATerm r_38 = NULL,s_38 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_38 = ATgetFirst((ATermList) t);
                s_38 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_38), (ATerm) ATmakeAppl(sym_Undefined_1, r_38));
          }
        }
      return(t);
    }
    t = v_38(t);
  }
  k_38 = t;
  t = (ATerm) ATinsert(CheckATermList(k_38), (ATerm) ATmakeAppl(sym_Program_1, h_38));
  d_9 = t;
  t = SSLsetAnnotations(d_9, g_38);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm i_39 = NULL;
  i_39 = t;
  if(match_string(t, "--help"))
    {
      t = i_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_39;
        }
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL;
  t = term_x_24;
  j_39 = t;
  t = term_a_17;
  k_39 = t;
  t = term_y_24;
  t = q_6(j_39, k_39, t);
  t = term_a_25;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = term_c_25;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm h_142 (ATerm), ATerm i_142 (ATerm), ATerm j_142 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  c_39 = t;
  t = term_i_17;
  d_39 = t;
  t = term_e_25;
  t = lookup_table_0_1(d_39, t);
  h_39 = t;
  t = term_j_17;
  e_39 = t;
  t = (ATerm) ATempty;
  f_39 = t;
  t = h_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(e_39, f_39, g_39, t);
  t = c_39;
  {
    static ATerm r_8 (ATerm t);
    static ATerm r_8 (ATerm t)
    {
      ATerm f_25 = t;
      int i_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_142(t);
          LocalPopChoice(i_25);
        }
      else
        {
          t = f_25;
          {
            ATerm j_25 = t;
            int k_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_8, u_8, v_8, t);
                LocalPopChoice(k_25);
              }
            else
              {
                t = j_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_8, t);
  }
  {
    ATerm l_25 = t;
    int m_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_39 = NULL;
        v_39 = t;
        {
          ATerm n_25 = t;
          int o_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_15 = NULL;
              t = v_39;
              {
                ATerm p_25 = t;
                int q_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_15 = NULL,r_15 = NULL;
                    t = term_y_13;
                    q_15 = t;
                    t = term_x_24;
                    r_15 = t;
                    t = term_r_25;
                    t = n_6(q_15, r_15, t);
                    LocalPopChoice(q_25);
                  }
                else
                  {
                    t = p_25;
                    t = fetch_1_0(w_8, t);
                  }
              }
              t = v_39;
              t = i_142(t);
              t = term_x_9;
              p_15 = t;
              t = SSL_exit(p_15);
              LocalPopChoice(o_25);
            }
          else
            {
              t = n_25;
              {
                ATerm z_15 = NULL,a_16 = NULL,c_16 = NULL;
                t = term_y_13;
                a_16 = t;
                t = term_p_23;
                c_16 = t;
                t = term_s_25;
                t = n_6(a_16, c_16, t);
                t = v_39;
                t = j_142(t);
                t = term_x_9;
                z_15 = t;
                t = SSL_exit(z_15);
              }
            }
        }
        LocalPopChoice(m_25);
      }
    else
      {
        t = l_25;
        {
          ATerm t_25 = t;
          int u_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
              static ATerm x_8 (ATerm t);
              static ATerm x_8 (ATerm t)
              {
                ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,f_9 = NULL;
                b_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_40);
                z_39 = t;
                t = a_40;
                if(((a_39 != NULL) && (a_39 != t)))
                  _fail(t);
                else
                  a_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_40);
                f_9 = t;
                t = SSLsetAnnotations(f_9, z_39);
                return(t);
              }
              t = fetch_1_0(x_8, t);
              t = term_c_10;
              x_39 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_39)), term_z_25);
              y_39 = t;
              t = SSL_printnl(x_39, y_39);
              t = (ATerm) ATmakeAppl(sym__2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_39)), term_z_25));
              t = i_142(t);
              t = term_z_9;
              w_39 = t;
              t = SSL_exit(w_39);
              LocalPopChoice(u_25);
            }
          else
            {
              t = t_25;
            }
        }
      }
  }
  b_39 = t;
  t = term_i_17;
  t = table_destroy_0_0(t);
  t = b_39;
  return(t);
}
ATerm option_wrap_5_0 (ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm o_140 (ATerm), ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL;
  t = parse_options_3_0(k_140, l_140, m_140, t);
  g_40 = t;
  t = term_a_26;
  t = table_create_0_0(t);
  t = term_a_26;
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_26, term_b_26, g_40);
  t = lookup_table_0_1(h_40, t);
  k_40 = t;
  t = term_b_26;
  i_40 = t;
  t = k_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_6(i_40, g_40, j_40, t);
  t = g_40;
  t = n_140(t);
  {
    ATerm c_26 = t;
    int d_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_140(t);
        t = report_success_0_0(t);
        LocalPopChoice(d_26);
      }
    else
      {
        t = c_26;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            {
              ATerm k_26 = t;
              int o_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(o_26);
                }
              else
                {
                  t = k_26;
                  {
                    ATerm p_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(e_9, g_9, h_9, t);
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = p_26;
                        {
                          ATerm r_26 = t;
                          int s_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(s_26);
                            }
                          else
                            {
                              t = r_26;
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
  t = input_1_0(i_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL;
  t = term_r_14;
  m_40 = t;
  t = term_a_17;
  n_40 = t;
  t = term_t_26;
  t = q_6(m_40, n_40, t);
  t = term_u_26;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_y_26;
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = output_1_0(Stratego_warnings_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(z_8, default_system_usage_0_0, default_system_about_0_0, _id, a_9, t);
  return(t);
}
