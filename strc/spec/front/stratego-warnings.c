#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_ObsoleteWarning_1;
Symbol sym_DebugWarning_1;
Symbol sym_ConstructorWarning_1;
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
Symbol sym_Undefined_0;
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
Symbol sym_Hashtable_1;
Symbol sym_SVar_1;
Symbol sym_SDefT_4;
Symbol sym_Path_2;
Symbol sym_Build_1;
Symbol sym_CallT_3;
Symbol sym_Str_1;
Symbol sym_OpDecl_2;
static void init_module_constructors (void)
{
  sym_ObsoleteWarning_1 = ATmakeSymbol("ObsoleteWarning", 1, ATfalse);
  ATprotectSymbol(sym_ObsoleteWarning_1);
  sym_DebugWarning_1 = ATmakeSymbol("DebugWarning", 1, ATfalse);
  ATprotectSymbol(sym_DebugWarning_1);
  sym_ConstructorWarning_1 = ATmakeSymbol("ConstructorWarning", 1, ATfalse);
  ATprotectSymbol(sym_ConstructorWarning_1);
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
}
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_u_23;
ATerm term_e_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_m_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_h_20;
ATerm term_q_19;
ATerm term_n_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_q_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_m_13;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_g_9;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: lower-constructor name found: ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: possibly missing build operator in debug strategy in \"", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\n", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("  debug(", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")\n", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: obsolete strategy or rule invoked from \"", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\":\n  ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol(": \"", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" warning(s)\n", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING incorrect parameter passed to -W switch: ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_a_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Warns for missing build operator", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_e_14, term_f_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Warns for obsolete strategies", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_m_14);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Warns for unbound variables", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym__2, term_o_14, term_p_14);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("lower-case-constructors", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Warns for lower-case constructors", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_t_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_c_15);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_i_15);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_t_16);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_w_9);
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_9);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_x_16);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("                     ", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol(": ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning   Set warning level (-W all to switch all warnings on):\n", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_n_19);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_d_17);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_p_20);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_j_18);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_x_16);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_c_22, term_x_16);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_p_20, term_x_16);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__3, term_i_18, term_j_18, (ATerm) ATempty);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_z_13, term_y_21);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_x_16);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm mk_warning_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm print_warnings_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm LowerCaseConstructors_1_0 (ATerm v_93 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
ATerm sdef_with_property_1_0 (ATerm r_93 (ATerm), ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_5 (ATerm q_93 (ATerm), ATerm v_22, ATerm t_22, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm k_5 (ATerm p_22, ATerm q_22, ATerm r_22, ATerm t);
static ATerm v_8 (ATerm j_7, ATerm k_7, ATerm l_7, ATerm t);
ATerm map_apply_1_0 (ATerm s_93 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm strategy_invokation_warning_1_0 (ATerm o_93 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm z_96 (ATerm), ATerm t);
static ATerm l_5 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm b_31, ATerm a_31, ATerm t);
static ATerm m_5 (ATerm s_106 (ATerm), ATerm x_30, ATerm w_30, ATerm t);
ATerm foldr_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
ATerm collect_om_2_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm j_2 (ATerm t);
ATerm strategy_argument_warning_1_0 (ATerm p_93 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm debug_with_incorrect_string_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm Warning_1_0 (ATerm x_93 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm k_110 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm t_102 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm r_103 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm Stratego_warnings_0_0 (ATerm t);
static ATerm p_5 (ATerm y_39, ATerm z_39, ATerm t);
static ATerm q_5 (ATerm t_24, ATerm u_24, ATerm t);
static ATerm s_5 (ATerm y_101 (ATerm), ATerm n_172, ATerm z_24, ATerm t);
static ATerm r_5 (ATerm p_24, ATerm q_24, ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm output_1_0 (ATerm d_122 (ATerm), ATerm t);
static ATerm r_18 (ATerm l_18, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_5 (ATerm v_24, ATerm t);
static ATerm u_5 (ATerm r_38, ATerm s_38, ATerm t);
static ATerm v_5 (ATerm a_40, ATerm b_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_20 (ATerm b_19, ATerm t);
static ATerm t_20 (ATerm f_19, ATerm i_19, ATerm l_19, ATerm t);
static ATerm u_20 (ATerm w_19, ATerm z_19, ATerm a_20, ATerm t);
static ATerm w_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm e_122 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_6 (ATerm g_58, ATerm h_58, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm m_6 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm Display_possible_warnings_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm y_102 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm p_27 (ATerm f_27, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm o_5 (ATerm m_58, ATerm l_58, ATerm t);
static ATerm d_6 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_5 (ATerm u_42, ATerm v_42, ATerm t);
ATerm foldr_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_119 (ATerm), ATerm t);
static ATerm v_7 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
ATerm need_help_1_0 (ATerm u_121 (ATerm), ATerm t);
static ATerm g_6 (ATerm t_67, ATerm u_67, ATerm v_67, ATerm t);
ATerm lookup_table_0_1 (ATerm n_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_68, ATerm c_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_5 (ATerm y_67, ATerm z_67, ATerm t);
static ATerm a_6 (ATerm d_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm h_102 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_102 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_6 (ATerm w_67, ATerm x_67, ATerm t);
static ATerm c_6 (ATerm u_64, ATerm v_64, ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_123 (ATerm), ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm w_8 (ATerm t);
ATerm parse_options_1_0 (ATerm w_123 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm mk_warning_0_0 (ATerm t)
{
  ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,y_1 = NULL;
  t_1 = t;
  if(match_cons(t, sym_ConstructorWarning_1))
    {
      u_1 = ATgetArgument(t, 0);
      {
        ATerm r_0 = NULL;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_9), u_1), term_g_9);
        r_0 = t;
        t = SSL_concat_strings(r_0);
      }
    }
  else
    {
      if(match_cons(t, sym__2))
        {
          u_1 = ATgetArgument(t, 0);
          v_1 = ATgetArgument(t, 1);
          {
            ATerm z_1 = NULL,a_2 = NULL,i_2 = NULL,l_2 = NULL;
            t = v_1;
            if(match_cons(t, sym_DebugWarning_1))
              {
                s_1 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSL_explode_string(s_1);
            l_2 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_2), term_j_9), (ATerm) ATinsert(ATempty, term_j_9));
            t = conc_0_0(t);
            i_2 = t;
            t = SSL_implode_string(i_2);
            z_1 = t;
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_9), z_1), term_p_9), term_o_9), u_1), term_l_9);
            a_2 = t;
            t = SSL_concat_strings(a_2);
          }
        }
      else
        {
          ATerm d_3 = NULL;
          if(match_cons(t, sym__3))
            {
              u_1 = ATgetArgument(t, 0);
              v_1 = ATgetArgument(t, 1);
              w_1 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = w_1;
          if(match_cons(t, sym_ObsoleteWarning_1))
            {
              y_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_9), y_1), term_t_9), v_1), term_s_9), u_1), term_r_9);
          d_3 = t;
          t = SSL_concat_strings(d_3);
        }
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  t = term_w_9;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(z_2, a_3, t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_x_9;
  return(t);
}
ATerm print_warnings_0_0 (ATerm t)
{
  ATerm q_2 = NULL;
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 = NULL;
      s_2 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_2;
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      {
        ATerm t_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
        t = map_1_0(mk_warning_0_0, t);
        t_2 = t;
        t = foldr_3_0(b_0, f_0, i_0, t);
        q_2 = t;
        t = term_a_10;
        x_2 = t;
        t = SSL_print(x_2, t_2);
        t = term_a_10;
        v_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_10), q_2), term_i_9);
        w_2 = t;
        t = SSL_print(v_2, w_2);
        t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_10), q_2), term_i_9));
      }
    }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm d_10 = t;
  if((PushChoice() == 0))
    {
      ATerm b_3 = NULL,c_3 = NULL;
      if(match_cons(t, sym__2))
        {
          b_3 = ATgetArgument(t, 0);
          c_3 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, b_3, c_3);
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(b_3, c_3);
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = SSL_gtr(b_3, c_3);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, b_3, c_3);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_10;
    }
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm i_3 = NULL;
  if(match_cons(t, sym_OpDecl_2))
    {
      i_3 = ATgetArgument(t, 0);
      {
        ATerm g_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_3;
  return(t);
}
static ATerm n_0 (ATerm t)
{
  ATerm j_3 = NULL,k_3 = NULL;
  if(match_cons(t, sym__2))
    {
      j_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(q_0, j_3, k_3, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm l_3 = NULL;
  if(match_cons(t, sym__2))
    {
      l_3 = ATgetArgument(t, 0);
      if((l_3 != ATgetArgument(t, 1)))
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
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL;
  o_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_3 = ATgetFirst((ATermList) t);
      n_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 = NULL;
            t = n_3;
            {
              static ATerm t_0 (ATerm t)
              {
                ATerm k_10 = t;
                if((PushChoice() == 0))
                  {
                    if((m_3 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = k_10;
                  }
                return(t);
              }
              t = filter_1_0(t_0, t);
            }
            s_3 = t;
            t = (ATerm) ATinsert(CheckATermList(s_3), m_3);
            LocalPopChoice(j_10);
          }
        else
          {
            t = h_10;
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
static ATerm u_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL,b_4 = NULL,d_4 = NULL;
  y_3 = t;
  t = SSL_explode_string(y_3);
  t = map_1_0(w_0, t);
  d_4 = t;
  t = SSL_implode_string(d_4);
  if((y_3 != t))
    {
      _fail(t);
    }
  t = SSL_explode_string(y_3);
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_4), term_j_9), (ATerm) ATinsert(ATempty, term_j_9));
  t = conc_0_0(t);
  b_4 = t;
  t = SSL_implode_string(b_4);
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym_ConstructorWarning_1, z_3);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_4 = NULL;
      f_4 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_n_10, f_4);
      t = leq_0_0(t);
      t = (ATerm) ATmakeAppl(sym__2, f_4, term_o_10);
      t = leq_0_0(t);
      t = f_4;
      LocalPopChoice(m_10);
      {
        ATerm g_4 = NULL,j_4 = NULL;
        g_4 = t;
        t = term_p_10;
        j_4 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_4, term_p_10);
        t = x_5(g_4, j_4, t);
      }
    }
  else
    {
      t = l_10;
    }
  return(t);
}
ATerm LowerCaseConstructors_1_0 (ATerm v_93 (ATerm), ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("lower-case-constructors", 0, ATtrue)))
    _fail(t);
  t = v_93(t);
  t = collect_om_2_0(k_0, n_0, t);
  t = listtd_1_0(s_0, t);
  t = filter_1_0(u_0, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL;
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      e_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(z_0, d_5, e_5, t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      g_5 = ATgetArgument(t, 0);
      if((g_5 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm sdef_with_property_1_0 (ATerm r_93 (ATerm), ATerm t)
{
  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,q_4 = NULL,x_4 = NULL,y_4 = NULL,a_0 = NULL;
  static ATerm d_1 (ATerm t)
  {
    ATerm i_5 = NULL;
    i_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), i_5);
    return(t);
  }
  y_4 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      if(((n_4 != NULL) && (n_4 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_4 = ATgetArgument(t, 0);
      o_4 = ATgetArgument(t, 1);
      q_4 = ATgetArgument(t, 2);
      x_4 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_4);
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_4, o_4, q_4, x_4);
  a_0 = t;
  t = SSLsetAnnotations(a_0, m_4);
  t = x_4;
  t = collect_om_2_0(r_93, x_0, t);
  {
    ATerm v_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_10;
      }
  }
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm s_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym__2))
    {
      s_6 = ATgetArgument(t, 0);
      t_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(h_1, s_6, t_6, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm u_6 = NULL;
  if(match_cons(t, sym__2))
    {
      u_6 = ATgetArgument(t, 0);
      if((u_6 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm q_93 (ATerm), ATerm v_22, ATerm t_22, ATerm t)
{
  ATerm n_5 = NULL;
  t = q_93(t);
  n_5 = t;
  t = t_22;
  {
    static ATerm e_1 (ATerm t)
    {
      ATerm y_5 = NULL,b_6 = NULL,e_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL,o_6 = NULL,q_6 = NULL,e_0 = NULL,c_0 = NULL;
      q_6 = t;
      if(match_cons(t, sym_CallT_3))
        {
          b_6 = ATgetArgument(t, 0);
          e_6 = ATgetArgument(t, 1);
          i_6 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_6);
      y_5 = t;
      t = b_6;
      if(match_cons(t, sym_SVar_1))
        {
          k_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_6);
      j_6 = t;
      t = k_6;
      if((n_5 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_SVar_1, k_6);
      c_0 = t;
      t = SSLsetAnnotations(c_0, j_6);
      o_6 = t;
      t = (ATerm) ATmakeAppl(sym_CallT_3, o_6, e_6, i_6);
      e_0 = t;
      t = SSLsetAnnotations(e_0, y_5);
      t = k_6;
      return(t);
    }
    t = collect_om_2_0(e_1, f_1, t);
  }
  {
    ATerm w_10 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_10;
      }
  }
  t = v_22;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      y_6 = ATgetArgument(t, 0);
      z_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(o_1, y_6, z_6, t);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      e_7 = ATgetArgument(t, 0);
      if((e_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm p_22, ATerm q_22, ATerm r_22, ATerm t)
{
  static ATerm j_1 (ATerm t)
  {
    ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
    if(match_cons(t, sym_SDefT_4))
      {
        w_6 = ATgetArgument(t, 0);
        {
          ATerm y_10 = ATgetArgument(t, 1);
        }
        {
          ATerm z_10 = ATgetArgument(t, 2);
        }
        x_6 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    {
      static ATerm n_1 (ATerm t)
      {
        t = q_22;
        return(t);
      }
      t = j_5(n_1, w_6, x_6, t);
    }
    {
      ATerm b_11 = t;
      if((PushChoice() == 0))
        {
          if((q_22 != t))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_11;
        }
    }
    v_6 = t;
    t = (ATerm) ATmakeAppl(sym__3, v_6, q_22, r_22);
    return(t);
  }
  t = p_22;
  t = collect_om_2_0(j_1, m_1, t);
  return(t);
}
static ATerm v_8 (ATerm j_7, ATerm k_7, ATerm l_7, ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,a_8 = NULL,v_0 = NULL;
  t = SSLgetAnnotations(l_7);
  s_7 = t;
  t = k_7;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_7, k_7);
  v_0 = t;
  t = SSLsetAnnotations(v_0, s_7);
  a_8 = t;
  t = SSL_explode_term(a_8);
  if(match_cons(t, sym__2))
    {
      ATerm d_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_11 = ATgetArgument(t, 1);
        if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
          {
            r_7 = ATgetFirst((ATermList) e_11);
            {
              ATerm i_11 = (ATerm) ATgetNext((ATermList) e_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_7;
  return(t);
}
ATerm map_apply_1_0 (ATerm s_93 (ATerm), ATerm t)
{
  static ATerm u_8 (ATerm t)
  {
    ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL;
    e_8 = t;
    if(match_cons(t, sym__2))
      {
        f_8 = ATgetArgument(t, 0);
        g_8 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = g_8;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_8 = ATgetFirst((ATermList) t);
        i_8 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_8(f_8, g_8, e_8, t);
              LocalPopChoice(k_11);
            }
          else
            {
              t = j_11;
              {
                ATerm t_8 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, f_8, h_8);
                t = s_93(t);
                t_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, t_8, i_8);
                t = u_8(t);
              }
            }
        }
      }
    else
      {
        t = v_8(f_8, g_8, e_8, t);
      }
    return(t);
  }
  t = u_8(t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm v_3 = NULL,c_4 = NULL;
  if(match_cons(t, sym__2))
    {
      v_3 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(r_1, v_3, c_4, t);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm e_4 = NULL;
  if(match_cons(t, sym__2))
    {
      e_4 = ATgetArgument(t, 0);
      if((e_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL,l_4 = NULL;
  if(match_cons(t, sym__2))
    {
      h_4 = ATgetArgument(t, 0);
      {
        ATerm l_11 = ATgetArgument(t, 1);
        if(match_cons(l_11, sym__2))
          {
            i_4 = ATgetArgument(l_11, 0);
            l_4 = ATgetArgument(l_11, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_5(h_4, i_4, l_4, t);
  return(t);
}
ATerm strategy_invokation_warning_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm n_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_9 = NULL,t_3 = NULL;
      k_9 = t;
      t = collect_om_2_0(o_93, p_1, t);
      t = concat_0_0(t);
      {
        ATerm q_11 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_11;
          }
      }
      t_3 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_9, t_3);
      t = map_apply_1_0(x_1, t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = n_11;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  static ATerm m_9 (ATerm t)
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_96(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = SRTS_one(m_9, t);
      }
    return(t);
  }
  t = m_9(t);
  return(t);
}
static ATerm l_5 (ATerm v_106 (ATerm), ATerm w_106 (ATerm), ATerm b_31, ATerm a_31, ATerm t)
{
  t = w_106(t);
  {
    static ATerm c_2 (ATerm t)
    {
      ATerm n_9 = NULL;
      n_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_31, n_9);
      t = v_106(t);
      return(t);
    }
    t = fetch_1_0(c_2, t);
  }
  t = a_31;
  return(t);
}
static ATerm m_5 (ATerm s_106 (ATerm), ATerm x_30, ATerm w_30, ATerm t)
{
  static ATerm x_10 (ATerm t)
  {
    ATerm r_10 = NULL,t_10 = NULL,u_10 = NULL;
    r_10 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_10 = ATgetFirst((ATermList) t);
            u_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_11 = t;
          int u_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_10;
              {
                static ATerm e_2 (ATerm t)
                {
                  t = w_30;
                  return(t);
                }
                t = l_5(s_106, e_2, t_10, u_10, t);
              }
              t = x_10(t);
              LocalPopChoice(u_11);
            }
          else
            {
              t = t_11;
              {
                ATerm u_4 = NULL,z_4 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(r_10);
                u_4 = t;
                t = u_10;
                t = x_10(t);
                z_4 = t;
                t = (ATerm) ATinsert(CheckATermList(z_4), t_10);
                y_0 = t;
                t = SSLsetAnnotations(y_0, u_4);
              }
            }
        }
      }
    return(t);
  }
  t = x_30;
  t = x_10(t);
  return(t);
}
ATerm foldr_3_0 (ATerm i_109 (ATerm), ATerm j_109 (ATerm), ATerm k_109 (ATerm), ATerm t)
{
  ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
  f_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_11;
      t = i_109(t);
    }
  else
    {
      ATerm m_11 = NULL,o_11 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_11 = ATgetFirst((ATermList) t);
          h_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_11;
      t = k_109(t);
      m_11 = t;
      t = h_11;
      t = foldr_3_0(i_109, j_109, k_109, t);
      o_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_11, o_11);
      t = j_109(t);
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm t)
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL;
      t = a_108(t);
      z_11 = t;
      t = (ATerm) ATinsert(ATempty, z_11);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm h_5 = NULL,l_6 = NULL;
        static ATerm g_2 (ATerm t)
        {
          t = collect_om_2_0(a_108, b_108, t);
          return(t);
        }
        l_6 = t;
        t = SSL_explode_term(l_6);
        if(match_cons(t, sym__2))
          {
            ATerm y_11 = ATgetArgument(t, 0);
            h_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_5;
        t = foldr_3_0(f_2, b_108, g_2, t);
      }
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(j_2, a_12, b_12, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm c_12 = NULL;
  if(match_cons(t, sym__2))
    {
      c_12 = ATgetArgument(t, 0);
      if((c_12 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm strategy_argument_warning_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  t = collect_om_2_0(p_93, h_2, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = sdef_with_property_1_0(n_2, t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      if(match_cons(f_12, sym_SVar_1))
        {
          ATerm m_12 = ATgetArgument(f_12, 0);
          if((ATgetSymbol((ATermAppl) m_12) != ATmakeSymbol("debug", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm g_12 = ATgetArgument(t, 1);
        if(((ATgetType(g_12) == AT_LIST) && !(ATisEmpty(g_12))))
          {
            e_12 = ATgetFirst((ATermList) g_12);
            {
              ATerm o_12 = (ATerm) ATgetNext((ATermList) g_12);
              if(((ATgetType(o_12) != AT_LIST) || !(ATisEmpty(o_12))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm i_12 = ATgetArgument(t, 2);
        if(((ATgetType(i_12) != AT_LIST) || !(ATisEmpty(i_12))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_12;
  {
    ATerm p_12 = t;
    if((PushChoice() == 0))
      {
        ATerm h_12 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,q_12 = NULL,s_12 = NULL,b_1 = NULL,a_1 = NULL;
        s_12 = t;
        if(match_cons(t, sym_Build_1))
          {
            j_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_12);
        h_12 = t;
        t = j_12;
        if(match_cons(t, sym_Str_1))
          {
            l_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_12);
        k_12 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, l_12);
        a_1 = t;
        t = SSLsetAnnotations(a_1, k_12);
        q_12 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, q_12);
        b_1 = t;
        t = SSLsetAnnotations(b_1, h_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_12;
      }
  }
  {
    static ATerm o_2 (ATerm t)
    {
      ATerm w_12 = NULL,c_13 = NULL,e_13 = NULL,c_1 = NULL;
      e_13 = t;
      if(match_cons(t, sym_Str_1))
        {
          c_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_13);
      w_12 = t;
      t = c_13;
      if(((d_12 != NULL) && (d_12 != t)))
        _fail(t);
      else
        d_12 = t;
      t = (ATerm) ATmakeAppl(sym_Str_1, c_13);
      c_1 = t;
      t = SSLsetAnnotations(c_1, w_12);
      return(t);
    }
    t = oncetd_1_0(o_2, t);
  }
  t = (ATerm) ATmakeAppl(sym_DebugWarning_1, not_null(d_12));
  return(t);
}
ATerm debug_with_incorrect_string_0_0 (ATerm t)
{
  t = strategy_argument_warning_1_0(m_2, t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = sdef_with_property_1_0(r_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm l_13 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm r_12 = ATgetArgument(t, 0);
      if(match_cons(r_12, sym_SVar_1))
        {
          ATerm x_12 = ATgetArgument(r_12, 0);
          if((ATgetSymbol((ATermAppl) x_12) != ATmakeSymbol("obsolete", 0, ATtrue)))
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
                ATerm b_13 = ATgetArgument(y_12, 0);
                if(match_cons(b_13, sym_Str_1))
                  {
                    l_13 = ATgetArgument(b_13, 0);
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
  t = (ATerm) ATmakeAppl(sym_ObsoleteWarning_1, l_13);
  return(t);
}
ATerm Warning_1_0 (ATerm x_93 (ATerm), ATerm t)
{
  ATerm d_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_13 = NULL;
      k_13 = t;
      if(match_string(t, "debug-arguments"))
        {
          t = k_13;
          t = x_93(t);
          t = debug_with_incorrect_string_0_0(t);
        }
      else
        {
          if(match_string(t, "obsolete-strategy-calls"))
            {
              t = k_13;
              t = x_93(t);
              t = strategy_invokation_warning_1_0(p_2, t);
            }
          else
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("maybe-unbound-variables", 0, ATtrue)))
                _fail(t);
              t = (ATerm) ATempty;
            }
        }
      LocalPopChoice(h_13);
    }
  else
    {
      t = d_13;
      {
        ATerm i_13 = t;
        int j_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LowerCaseConstructors_1_0(x_93, t);
            LocalPopChoice(j_13);
          }
        else
          {
            t = i_13;
            {
              ATerm t_13 = NULL,b_7 = NULL,c_7 = NULL;
              t_13 = t;
              t = term_a_10;
              b_7 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, t_13), term_m_13);
              c_7 = t;
              t = SSL_printnl(b_7, c_7);
              t = (ATerm) ATempty;
            }
          }
      }
    }
  return(t);
}
ATerm filter_1_0 (ATerm k_110 (ATerm), ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,l_14 = NULL;
  i_14 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_14;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_14 = ATgetFirst((ATermList) t);
          l_14 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_7 = NULL,t_7 = NULL,u_7 = NULL,g_1 = NULL;
            t = SSLgetAnnotations(i_14);
            i_7 = t;
            t = j_14;
            t = k_110(t);
            t_7 = t;
            t = l_14;
            t = filter_1_0(k_110, t);
            u_7 = t;
            t = (ATerm) ATinsert(CheckATermList(u_7), t_7);
            g_1 = t;
            t = SSLsetAnnotations(g_1, i_7);
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            t = l_14;
            t = filter_1_0(k_110, t);
          }
      }
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm t_102 (ATerm), ATerm t)
{
  ATerm q_14 = NULL;
  static ATerm u_2 (ATerm t)
  {
    t = t_102(t);
    if(((q_14 != NULL) && (q_14 != t)))
      _fail(t);
    else
      q_14 = t;
    return(t);
  }
  t = fetch_1_0(u_2, t);
  t = not_null(q_14);
  return(t);
}
ATerm listtd_1_0 (ATerm r_103 (ATerm), ATerm t)
{
  static ATerm w_15 (ATerm t)
  {
    ATerm q_15 = NULL,t_15 = NULL,v_15 = NULL;
    t = r_103(t);
    q_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_15;
      }
    else
      {
        ATerm n_8 = NULL,q_8 = NULL,i_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_15 = ATgetFirst((ATermList) t);
            v_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_15);
        n_8 = t;
        t = v_15;
        t = w_15(t);
        q_8 = t;
        t = (ATerm) ATinsert(CheckATermList(q_8), t_15);
        i_1 = t;
        t = SSLsetAnnotations(i_1, n_8);
      }
    return(t);
  }
  t = w_15(t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,r_16 = NULL;
  r_16 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_16 = ATgetFirst((ATermList) t);
      i_16 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_16 = NULL;
            t = i_16;
            {
              static ATerm e_3 (ATerm t)
              {
                ATerm r_13 = t;
                if((PushChoice() == 0))
                  {
                    if((h_16 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_13;
                  }
                return(t);
              }
              t = filter_1_0(e_3, t);
            }
            v_16 = t;
            t = (ATerm) ATinsert(CheckATermList(v_16), h_16);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            t = r_16;
          }
      }
    }
  else
    {
      t = r_16;
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm a_17 = NULL,e_17 = NULL;
  e_17 = t;
  t = SSL_explode_term(e_17);
  if(match_cons(t, sym__2))
    {
      ATerm s_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_13 = ATgetArgument(t, 1);
        if(((ATgetType(u_13) == AT_LIST) && !(ATisEmpty(u_13))))
          {
            a_17 = ATgetFirst((ATermList) u_13);
            {
              ATerm v_13 = (ATerm) ATgetNext((ATermList) u_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_17;
  return(t);
}
ATerm Stratego_warnings_0_0 (ATerm t)
{
  ATerm c_16 = NULL;
  c_16 = t;
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_16 = NULL,g_16 = NULL;
        t = term_z_13;
        e_16 = t;
        t = term_a_14;
        g_16 = t;
        t = term_b_14;
        t = c_6(e_16, g_16, t);
        t = listtd_1_0(y_2, t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = (ATerm) ATempty;
      }
  }
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = fetch_elem_1_0(f_3, t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_14), term_r_14), term_n_14), term_g_14);
        t = map_1_0(g_3, t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
      }
  }
  {
    static ATerm h_3 (ATerm t)
    {
      static ATerm p_3 (ATerm t)
      {
        t = c_16;
        return(t);
      }
      t = Warning_1_0(p_3, t);
      return(t);
    }
    t = filter_1_0(h_3, t);
  }
  t = concat_0_0(t);
  t = print_warnings_0_0(t);
  t = c_16;
  return(t);
}
static ATerm p_5 (ATerm y_39, ATerm z_39, ATerm t)
{
  ATerm h_17 = NULL;
  t = SSL_fputc(y_39, z_39);
  h_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_17);
  return(t);
}
static ATerm q_5 (ATerm t_24, ATerm u_24, ATerm t)
{
  ATerm i_17 = NULL;
  t = SSL_write_term_to_stream_text(t_24, u_24);
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_17);
  return(t);
}
static ATerm s_5 (ATerm y_101 (ATerm), ATerm n_172, ATerm z_24, ATerm t)
{
  ATerm j_17 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_172, term_v_14);
  t = w_5(t);
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_17, z_24);
  t = y_101(t);
  t = fclose_0_0(t);
  t = z_24;
  return(t);
}
static ATerm r_5 (ATerm p_24, ATerm q_24, ATerm t)
{
  ATerm k_17 = NULL;
  t = SSL_write_term_to_stream_baf(p_24, q_24);
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_17);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      if(match_cons(w_14, sym_Stream_1))
        {
          r_17 = ATgetArgument(w_14, 0);
        }
      else
        _fail(t);
      s_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(r_17, s_17, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_14 = ATgetArgument(t, 0);
      if(match_cons(x_14, sym_Stream_1))
        {
          z_17 = ATgetArgument(x_14, 0);
        }
      else
        _fail(t);
      a_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(z_17, a_18, t);
  w_17 = t;
  t = term_y_14;
  x_17 = t;
  t = w_17;
  if(match_cons(t, sym_Stream_1))
    {
      y_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, w_17);
  t = p_5(x_17, y_17, t);
  return(t);
}
ATerm output_1_0 (ATerm d_122 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  t = d_122(t);
  m_17 = t;
  {
    ATerm z_14 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_17 = NULL,o_17 = NULL;
        t = term_z_13;
        n_17 = t;
        t = term_c_15;
        o_17 = t;
        t = term_d_15;
        t = c_6(n_17, o_17, t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = z_14;
        t = term_e_15;
      }
  }
  l_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_17, m_17);
  {
    ATerm f_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_17 = NULL,q_17 = NULL;
        t = term_z_13;
        p_17 = t;
        t = term_i_15;
        q_17 = t;
        t = term_j_15;
        t = c_6(p_17, q_17, t);
        t = (ATerm) ATmakeAppl(sym__2, l_17, m_17);
        LocalPopChoice(h_15);
        if(match_cons(t, sym__2))
          {
            ATerm k_15 = ATgetArgument(t, 0);
            ATerm l_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_5(q_3, l_17, m_17, t);
      }
    else
      {
        t = f_15;
        if(match_cons(t, sym__2))
          {
            ATerm m_15 = ATgetArgument(t, 0);
            ATerm n_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_5(r_3, l_17, m_17, t);
      }
  }
  return(t);
}
static ATerm r_18 (ATerm l_18, ATerm t)
{
  t = SSL_fclose(l_18);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL;
  p_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_18 = ATgetArgument(t, 0);
      {
        ATerm s_15 = t;
        int u_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_18);
            LocalPopChoice(u_15);
          }
        else
          {
            t = s_15;
            t = r_18(p_18, t);
          }
      }
    }
  else
    {
      t = r_18(p_18, t);
    }
  return(t);
}
static ATerm t_5 (ATerm v_24, ATerm t)
{
  t = SSL_read_term_from_stream(v_24);
  return(t);
}
static ATerm u_5 (ATerm r_38, ATerm s_38, ATerm t)
{
  t = SSL_strcat(r_38, s_38);
  return(t);
}
static ATerm v_5 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm s_18 = NULL;
  t = SSL_fopen(a_40, b_40);
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_18 = NULL;
  t = SSL_stdin_stream();
  t_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_18 = NULL;
  t = SSL_stdout_stream();
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_18 = NULL;
  t = SSL_stderr_stream();
  v_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_18);
  return(t);
}
static ATerm s_20 (ATerm b_19, ATerm t)
{
  ATerm c_19 = NULL;
  t = SSL_explode_term(b_19);
  if(match_cons(t, sym__2))
    {
      ATerm x_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_15 = ATgetArgument(t, 1);
        if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
          {
            c_19 = ATgetFirst((ATermList) y_15);
            {
              ATerm d_16 = (ATerm) ATgetNext((ATermList) y_15);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_19;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_19;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_19;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_19;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_20 (ATerm f_19, ATerm i_19, ATerm l_19, ATerm t)
{
  ATerm m_19 = NULL,o_19 = NULL,p_19 = NULL,s_19 = NULL,k_1 = NULL;
  t = SSLgetAnnotations(l_19);
  p_19 = t;
  t = f_19;
  if(match_cons(t, sym_Path_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_19, i_19);
  k_1 = t;
  t = SSLsetAnnotations(k_1, p_19);
  if(match_cons(t, sym__2))
    {
      m_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(m_19, o_19, t);
  return(t);
}
static ATerm u_20 (ATerm w_19, ATerm z_19, ATerm a_20, ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL,e_20 = NULL,i_20 = NULL,l_1 = NULL;
  t = SSLgetAnnotations(a_20);
  e_20 = t;
  t = SSL_is_string(w_19);
  i_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_20, z_19);
  l_1 = t;
  t = SSLsetAnnotations(l_1, e_20);
  if(match_cons(t, sym__2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_5(b_20, c_20, t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm k_20 = NULL,n_20 = NULL,r_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym__2))
    {
      n_20 = ATgetArgument(t, 0);
      r_20 = ATgetArgument(t, 1);
      {
        ATerm f_16 = t;
        int j_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_20(k_20, t);
            LocalPopChoice(j_16);
          }
        else
          {
            t = f_16;
            {
              ATerm k_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_20(n_20, r_20, k_20, t);
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = k_16;
                  t = u_20(n_20, r_20, k_20, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_20(k_20, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,d_21 = NULL;
  d_21 = t;
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_21, term_o_16);
        t = w_5(t);
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm u_9 = NULL,v_9 = NULL;
          t = term_p_16;
          v_9 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_p_16, d_21);
          t = u_5(v_9, d_21, t);
          u_9 = t;
          t = SSL_perror(u_9);
          _fail(t);
        }
      }
  }
  x_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_5(y_20, t);
  w_20 = t;
  t = x_20;
  t = fclose_0_0(t);
  t = w_20;
  return(t);
}
ATerm input_1_0 (ATerm e_122 (ATerm), ATerm t)
{
  ATerm q_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_21 = NULL,j_21 = NULL;
      t = term_z_13;
      g_21 = t;
      t = term_t_16;
      j_21 = t;
      t = term_u_16;
      t = c_6(g_21, j_21, t);
      LocalPopChoice(s_16);
    }
  else
    {
      t = q_16;
      t = term_w_16;
    }
  t = ReadFromFile_0_0(t);
  t = e_122(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_21 = NULL,n_21 = NULL,o_21 = NULL,s_21 = NULL,t_21 = NULL;
  k_21 = t;
  t = term_x_16;
  t = whoami_0_0(t);
  n_21 = t;
  t = term_a_10;
  s_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_16), n_21), term_y_16);
  t_21 = t;
  t = SSL_printnl(s_21, t_21);
  t = term_x_9;
  o_21 = t;
  t = SSL_exit(o_21);
  t = k_21;
  return(t);
}
static ATerm u_3 (ATerm t)
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
static ATerm w_3 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,b_22 = NULL;
  w_21 = t;
  t = SSL_string_to_int(w_21);
  x_21 = t;
  t = term_b_17;
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_17, x_21);
  t = f_6(b_22, x_21, t);
  t = w_21;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_c_17;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_3, w_3, x_3, t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm i_22 = NULL;
  i_22 = t;
  if(match_string(t, "-S"))
    {
      t = i_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_22;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm l_22 = NULL,n_22 = NULL;
  t = term_d_17;
  l_22 = t;
  t = term_w_9;
  n_22 = t;
  t = term_f_17;
  t = f_6(l_22, n_22, t);
  t = term_g_17;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_t_17;
  return(t);
}
static ATerm s_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm s_22 = NULL,w_22 = NULL,x_22 = NULL;
  s_22 = t;
  t = SSL_string_to_int(s_22);
  w_22 = t;
  t = term_d_17;
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_17, w_22);
  t = f_6(x_22, w_22, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_22);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_u_17;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm d_23 = NULL,h_23 = NULL;
  t = term_v_17;
  d_23 = t;
  t = term_x_16;
  h_23 = t;
  t = term_b_18;
  t = f_6(d_23, h_23, t);
  t = term_c_18;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_d_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_4, p_4, r_4, t);
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_4, t_4, v_4, t);
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            t = Option_3_0(w_4, a_5, b_5, t);
          }
      }
    }
  return(t);
}
static ATerm f_6 (ATerm g_58, ATerm h_58, ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  t = term_z_13;
  j_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_13, g_58, h_58);
  t = lookup_table_0_1(j_23, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(g_58, h_58, k_23, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_13, g_58, h_58);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm q_23 = NULL,r_23 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_23 = NULL,w_23 = NULL,x_23 = NULL;
      t = term_x_16;
      t = h_0(t);
      v_23 = t;
      t = term_i_18;
      w_23 = t;
      t = term_j_18;
      x_23 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_18, term_j_18, v_23);
      t = d_6(w_23, x_23, v_23, t);
      _fail(t);
    }
  else
    {
      ATerm f_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_23 = ATgetFirst((ATermList) t);
          r_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_23;
      t = d_0(t);
      t = term_x_16;
      t = g_0(t);
      f_24 = t;
      t = (ATerm) ATinsert(CheckATermList(r_23), f_24);
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  if(match_string(t, "-o"))
    {
      t = k_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_24;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  l_24 = t;
  t = term_c_15;
  m_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_15, l_24);
  t = f_6(m_24, l_24, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_24);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_5, f_5, m_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm o_24 = NULL;
  o_24 = t;
  if(match_string(t, "-i"))
    {
      t = o_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_24;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm w_24 = NULL,a_25 = NULL;
  w_24 = t;
  t = term_t_16;
  a_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_16, w_24);
  t = f_6(a_25, w_24, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_24);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_m_18;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_6, a_7, d_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,n_25 = NULL;
  if(match_cons(t, sym__2))
    {
      f_25 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), g_25), term_q_18), f_25), term_n_18);
  n_25 = t;
  t = SSL_concat_strings(n_25);
  return(t);
}
ATerm Display_possible_warnings_0_0 (ATerm t)
{
  ATerm e_25 = NULL;
  t = map_1_0(f_7, t);
  e_25 = t;
  t = SSL_concat_strings(e_25);
  return(t);
}
ATerm at_end_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  static ATerm z_26 (ATerm t)
  {
    ATerm r_26 = NULL,s_26 = NULL,y_26 = NULL;
    y_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_26 = ATgetFirst((ATermList) t);
        s_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_10 = NULL,i_10 = NULL,q_1 = NULL;
          t = SSLgetAnnotations(y_26);
          c_10 = t;
          t = s_26;
          t = z_26(t);
          i_10 = t;
          t = (ATerm) ATinsert(CheckATermList(i_10), r_26);
          q_1 = t;
          t = SSLsetAnnotations(q_1, c_10);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_26;
        t = y_102(t);
      }
    return(t);
  }
  t = z_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_25 = NULL,u_25 = NULL,v_25 = NULL;
  r_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_25;
    }
  else
    {
      static ATerm g_7 (ATerm t)
      {
        t = not_null(v_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_25 = ATgetFirst((ATermList) t);
          if(((v_25 != NULL) && (v_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_25;
      t = at_end_1_0(g_7, t);
    }
  return(t);
}
static ATerm p_27 (ATerm f_27, ATerm t)
{
  ATerm g_27 = NULL;
  t = SSL_explode_term(f_27);
  if(match_cons(t, sym__2))
    {
      ATerm w_18 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_18) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_27;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  k_27 = t;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_7 (ATerm t)
            {
              t = j_27;
              return(t);
            }
            t = i_27;
            t = at_end_1_0(h_7, t);
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            t = p_27(k_27, t);
          }
      }
    }
  else
    {
      t = p_27(k_27, t);
    }
  return(t);
}
static ATerm o_5 (ATerm m_58, ATerm l_58, ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,w_27 = NULL,x_27 = NULL;
  t = m_58;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_28 = NULL;
        t = term_z_13;
        a_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_z_13, m_58);
        t = c_6(a_28, m_58, t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = (ATerm) ATempty;
      }
  }
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_58, t_27);
  t = conc_0_0(t);
  s_27 = t;
  t = term_z_13;
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_13, m_58, s_27);
  t = lookup_table_0_1(w_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(m_58, s_27, x_27, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_13, m_58, s_27);
  return(t);
}
static ATerm d_6 (ATerm b_63, ATerm c_63, ATerm a_63, ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
  {
    ATerm d_19 = t;
    int e_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_19 = ATgetArgument(t, 0);
            ATerm h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_63, c_63);
        t = c_6(b_63, c_63, t);
        LocalPopChoice(e_19);
      }
    else
      {
        t = d_19;
        t = (ATerm) ATempty;
      }
  }
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_63, c_63, (ATerm) ATinsert(CheckATermList(f_28), a_63));
  t = lookup_table_0_1(b_63, t);
  i_28 = t;
  t = (ATerm) ATinsert(CheckATermList(f_28), a_63);
  g_28 = t;
  t = i_28;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(c_63, g_28, h_28, t);
  t = e_28;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm q_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_28 = NULL,w_28 = NULL,z_28 = NULL;
      t = term_x_16;
      t = p_0(t);
      v_28 = t;
      t = term_i_18;
      w_28 = t;
      t = term_j_18;
      z_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_18, term_j_18, v_28);
      t = d_6(w_28, z_28, v_28, t);
      _fail(t);
    }
  else
    {
      ATerm f_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_28 = ATgetFirst((ATermList) t);
          s_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_28 = ATgetFirst((ATermList) t);
          u_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_28;
      t = m_0(t);
      t = t_28;
      t = o_0(t);
      f_29 = t;
      t = (ATerm) ATinsert(CheckATermList(u_28), f_29);
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm h_29 = NULL;
  h_29 = t;
  if(match_string(t, "--warning"))
    {
      t = h_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = h_29;
    }
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  i_29 = t;
  t = term_a_14;
  j_29 = t;
  t = (ATerm) ATinsert(ATempty, i_29);
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_14, (ATerm) ATinsert(ATempty, i_29));
  t = o_5(j_29, k_29, t);
  t = term_x_16;
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_14), term_r_14), term_n_14), term_g_14);
  t = Display_possible_warnings_0_0(t);
  l_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_29), term_j_19);
  m_29 = t;
  t = SSL_concat_strings(m_29);
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_7, n_7, o_7, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_16;
  t = whoami_0_0(t);
  n_29 = t;
  t = term_a_10;
  p_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_19), n_29);
  q_29 = t;
  t = SSL_printnl(p_29, q_29);
  t = term_x_9;
  o_29 = t;
  t = SSL_exit(o_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  t = term_z_13;
  r_29 = t;
  t = term_n_19;
  s_29 = t;
  t = term_q_19;
  t = c_6(r_29, s_29, t);
  return(t);
}
static ATerm x_5 (ATerm u_42, ATerm v_42, ATerm t)
{
  ATerm r_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_42, v_42);
      LocalPopChoice(t_19);
    }
  else
    {
      t = r_19;
      t = SSL_addr(u_42, v_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_29;
      t = g_109(t);
    }
  else
    {
      ATerm a_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_29 = ATgetFirst((ATermList) t);
          x_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_29;
      t = foldr_2_0(g_109, h_109, t);
      a_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_29, a_30);
      t = h_109(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_w_9;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm a_11 = NULL,c_11 = NULL;
  if(match_cons(t, sym__2))
    {
      a_11 = ATgetArgument(t, 0);
      c_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_5(a_11, c_11, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_30 = NULL,q_10 = NULL,s_10 = NULL;
  t = times_0_0(t);
  s_10 = t;
  t = SSL_explode_term(s_10);
  if(match_cons(t, sym__2))
    {
      ATerm u_19 = ATgetArgument(t, 0);
      q_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_10;
  t = foldr_2_0(p_7, q_7, t);
  f_30 = t;
  t = SSL_TicksToSeconds(f_30);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
  g_31 = t;
  if(match_cons(t, sym__2))
    {
      h_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_31;
        if((h_31 != t))
          {
            _fail(t);
          }
        t = g_31;
        LocalPopChoice(x_19);
      }
    else
      {
        t = v_19;
        t = (ATerm) ATmakeAppl(sym__2, h_31, i_31);
        {
          ATerm y_19 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_31, i_31);
              LocalPopChoice(d_20);
            }
          else
            {
              t = y_19;
              t = SSL_gtr(h_31, i_31);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_31, i_31);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_119 (ATerm), ATerm t)
{
  ATerm p_31 = NULL;
  p_31 = t;
  {
    ATerm f_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
        t = term_z_13;
        s_31 = t;
        t = term_d_17;
        t_31 = t;
        t = term_h_20;
        t = c_6(s_31, t_31, t);
        r_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_31, term_x_9);
        t = geq_0_0(t);
        t = p_31;
        t = e_119(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = f_20;
        t = p_31;
      }
  }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm v_31 = NULL,b_32 = NULL,d_32 = NULL,e_32 = NULL;
  t = run_time_0_0(t);
  v_31 = t;
  t = term_x_16;
  t = whoami_0_0(t);
  b_32 = t;
  t = term_a_10;
  d_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_20), v_31), term_j_20), b_32);
  e_32 = t;
  t = SSL_printnl(d_32, e_32);
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_20), v_31), term_j_20), b_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_7, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_9;
  f_32 = t;
  t = SSL_exit(f_32);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm t_32 = NULL,w_32 = NULL;
  w_32 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_32;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_32 = ATgetArgument(t, 0);
          {
            ATerm x_11 = NULL,b_2 = NULL;
            t = SSLgetAnnotations(w_32);
            x_11 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_32);
            b_2 = t;
            t = SSLsetAnnotations(b_2, x_11);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_32;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_121 (ATerm), ATerm t)
{
  ATerm m_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_32 = NULL,l_32 = NULL;
      t = term_z_13;
      k_32 = t;
      t = term_p_20;
      l_32 = t;
      t = term_q_20;
      t = c_6(k_32, l_32, t);
      LocalPopChoice(o_20);
    }
  else
    {
      t = m_20;
      t = fetch_1_0(w_7, t);
    }
  t = u_121(t);
  return(t);
}
static ATerm g_6 (ATerm t_67, ATerm u_67, ATerm v_67, ATerm t)
{
  ATerm y_32 = NULL;
  t = SSL_hashtable_put(v_67, t_67, u_67);
  y_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_32);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_64, ATerm t)
{
  ATerm o_33 = NULL;
  t = table_hashtable_0_0(t);
  o_33 = t;
  {
    ATerm v_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL;
        t = o_33;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_12 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_6(n_64, n_12, t);
        LocalPopChoice(z_20);
      }
    else
      {
        t = v_20;
        {
          ATerm u_12 = NULL;
          t = n_64;
          t = table_create_0_0(t);
          t = o_33;
          if(match_cons(t, sym_Hashtable_1))
            {
              u_12 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_6(n_64, u_12, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_68, ATerm c_68, ATerm t)
{
  ATerm r_33 = NULL;
  t = SSL_hashtable_create(b_68, c_68);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_33);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,x_33 = NULL,y_33 = NULL;
  s_33 = t;
  t = term_a_21;
  x_33 = t;
  t = term_b_21;
  y_33 = t;
  t = s_33;
  t = new_hashtable_0_2(x_33, y_33, t);
  t_33 = t;
  t = s_33;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(s_33, t_33, u_33, t);
  t = s_33;
  return(t);
}
static ATerm z_5 (ATerm y_67, ATerm z_67, ATerm t)
{
  ATerm z_33 = NULL;
  t = SSL_hashtable_remove(z_67, y_67);
  z_33 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_33);
  return(t);
}
static ATerm a_6 (ATerm d_68, ATerm t)
{
  ATerm e_34 = NULL;
  t = SSL_hashtable_destroy(d_68);
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_34);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_34 = NULL;
  t = SSL_table_hashtable();
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_34);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,o_34 = NULL,q_34 = NULL;
  k_34 = t;
  t = table_hashtable_0_0(t);
  l_34 = t;
  t = lookup_table_0_1(k_34, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(q_34, t);
  t = l_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_5(k_34, o_34, t);
  t = k_34;
  return(t);
}
ATerm map_1_0 (ATerm h_102 (ATerm), ATerm t)
{
  static ATerm q_35 (ATerm t)
  {
    ATerm k_35 = NULL,m_35 = NULL,p_35 = NULL;
    k_35 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_35;
      }
    else
      {
        ATerm a_13 = NULL,f_13 = NULL,g_13 = NULL,d_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_35 = ATgetFirst((ATermList) t);
            p_35 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_35);
        a_13 = t;
        t = m_35;
        t = h_102(t);
        f_13 = t;
        t = p_35;
        t = q_35(t);
        g_13 = t;
        t = (ATerm) ATinsert(CheckATermList(g_13), f_13);
        d_2 = t;
        t = SSLsetAnnotations(d_2, a_13);
      }
    return(t);
  }
  t = q_35(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_35 = ATgetFirst((ATermList) t);
      u_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_35 = NULL,z_35 = NULL;
        static ATerm x_7 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_35)), not_null(z_35));
          return(t);
        }
        t = u_35;
        t = l_0(t);
        if(((y_35 != NULL) && (y_35 != t)))
          _fail(t);
        else
          y_35 = t;
        t = t_35;
        t = j_0(t);
        if(((z_35 != NULL) && (z_35 != t)))
          _fail(t);
        else
          z_35 = t;
        t = u_35;
        t = reverse_acc_2_0(j_0, x_7, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_16;
      t = l_0(t);
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,k_2 = NULL;
  h_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_36);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_36);
  k_2 = t;
  t = SSLsetAnnotations(k_2, f_36);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_36), term_c_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_36 = NULL,e_36 = NULL;
      t = term_z_13;
      d_36 = t;
      t = term_n_19;
      e_36 = t;
      t = term_q_19;
      t = c_6(d_36, e_36, t);
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      t = fetch_1_0(y_7, t);
    }
  t = term_h_21;
  t = echo_0_0(t);
  t = term_i_18;
  b_36 = t;
  t = term_j_18;
  c_36 = t;
  t = term_i_21;
  t = c_6(b_36, c_36, t);
  t = reverse_acc_2_0(_id, z_7, t);
  t = map_1_0(b_8, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  static ATerm i_37 (ATerm t)
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
      ATerm l_21 = t;
      int m_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_13 = NULL,k_14 = NULL,n_6 = NULL;
          t = SSLgetAnnotations(f_37);
          w_13 = t;
          t = g_37;
          t = r_102(t);
          k_14 = t;
          t = (ATerm) ATinsert(CheckATermList(h_37), k_14);
          n_6 = t;
          t = SSLsetAnnotations(n_6, w_13);
          LocalPopChoice(m_21);
        }
      else
        {
          t = l_21;
          {
            ATerm a_15 = NULL,g_15 = NULL,p_6 = NULL;
            t = SSLgetAnnotations(f_37);
            a_15 = t;
            t = h_37;
            t = i_37(t);
            g_15 = t;
            t = (ATerm) ATinsert(CheckATermList(g_15), g_37);
            p_6 = t;
            t = SSLsetAnnotations(p_6, a_15);
          }
        }
    }
    return(t);
  }
  t = i_37(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_21 = ATgetFirst((ATermList) t);
                ATerm u_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_37;
          }
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = (ATerm) ATinsert(ATempty, m_37);
      }
  }
  n_37 = t;
  t = term_e_15;
  o_37 = t;
  t = SSL_printnl(o_37, n_37);
  t = m_37;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL;
  t = term_z_13;
  s_37 = t;
  t = term_n_19;
  t_37 = t;
  t = term_q_19;
  t = c_6(s_37, t_37, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_6 (ATerm w_67, ATerm x_67, ATerm t)
{
  t = SSL_hashtable_get(x_67, w_67);
  return(t);
}
static ATerm c_6 (ATerm u_64, ATerm v_64, ATerm t)
{
  ATerm u_37 = NULL;
  t = lookup_table_0_1(u_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(v_64, u_37, t);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL;
  t = term_y_21;
  w_37 = t;
  t = term_x_16;
  x_37 = t;
  t = term_z_21;
  t = f_6(w_37, x_37, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  t = term_a_22;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  t = term_y_21;
  a_38 = t;
  t = term_x_16;
  b_38 = t;
  t = term_z_21;
  t = f_6(a_38, b_38, t);
  t = term_c_22;
  y_37 = t;
  t = term_x_16;
  z_37 = t;
  t = term_d_22;
  t = f_6(y_37, z_37, t);
  t = term_e_22;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_8, d_8, j_8, t);
      LocalPopChoice(h_22);
    }
  else
    {
      t = g_22;
      t = Option_3_0(k_8, l_8, m_8, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,a_9 = NULL;
  h_38 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_38 = ATgetFirst((ATermList) t);
      e_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_38);
  c_38 = t;
  t = d_38;
  t = u_71(t);
  f_38 = t;
  t = e_38;
  t = v_71(t);
  g_38 = t;
  t = (ATerm) ATinsert(CheckATermList(g_38), f_38);
  a_9 = t;
  t = SSLsetAnnotations(a_9, c_38);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_123 (ATerm), ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL,t_38 = NULL,u_38 = NULL,c_9 = NULL;
  m_38 = t;
  {
    ATerm j_22 = t;
    int k_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_22;
        t = x_123(t);
        LocalPopChoice(k_22);
      }
    else
      {
        t = j_22;
      }
  }
  t = m_38;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_38 = ATgetFirst((ATermList) t);
      p_38 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_38);
  n_38 = t;
  t = term_n_19;
  u_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, o_38);
  t = f_6(u_38, o_38, t);
  t = p_38;
  {
    static ATerm e_39 (ATerm t)
    {
      ATerm o_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_38 = NULL;
              x_38 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_38;
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              t = x_123(t);
              t = Cons_2_0(_id, e_39, t);
            }
          LocalPopChoice(u_22);
        }
      else
        {
          t = o_22;
          {
            ATerm a_39 = NULL,b_39 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_39 = ATgetFirst((ATermList) t);
                b_39 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_39), (ATerm) ATmakeAppl(sym_Undefined_1, a_39));
          }
        }
      return(t);
    }
    t = e_39(t);
  }
  t_38 = t;
  t = (ATerm) ATinsert(CheckATermList(t_38), (ATerm) ATmakeAppl(sym_Program_1, o_38));
  c_9 = t;
  t = SSLsetAnnotations(c_9, n_38);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm r_39 = NULL;
  r_39 = t;
  if(match_string(t, "--help"))
    {
      t = r_39;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_39;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_39;
        }
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  t = term_p_20;
  s_39 = t;
  t = term_x_16;
  t_39 = t;
  t = term_a_23;
  t = f_6(s_39, t_39, t);
  t = term_b_23;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_c_23;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_123 (ATerm), ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  l_39 = t;
  t = term_i_18;
  m_39 = t;
  t = term_e_23;
  t = lookup_table_0_1(m_39, t);
  q_39 = t;
  t = term_j_18;
  n_39 = t;
  t = (ATerm) ATempty;
  o_39 = t;
  t = q_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(n_39, o_39, p_39, t);
  t = l_39;
  {
    static ATerm o_8 (ATerm t)
    {
      ATerm f_23 = t;
      int g_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_123(t);
          LocalPopChoice(g_23);
        }
      else
        {
          t = f_23;
          {
            ATerm i_23 = t;
            int l_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_8, r_8, s_8, t);
                LocalPopChoice(l_23);
              }
            else
              {
                t = i_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_8, t);
  }
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = NULL;
        m_40 = t;
        {
          ATerm o_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_15 = NULL;
              t = m_40;
              {
                ATerm s_23 = t;
                int t_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_15 = NULL,r_15 = NULL;
                    t = term_z_13;
                    p_15 = t;
                    t = term_p_20;
                    r_15 = t;
                    t = term_q_20;
                    t = c_6(p_15, r_15, t);
                    LocalPopChoice(t_23);
                  }
                else
                  {
                    t = s_23;
                    t = fetch_1_0(w_8, t);
                  }
              }
              t = m_40;
              t = default_system_usage_0_0(t);
              t = term_w_9;
              o_15 = t;
              t = SSL_exit(o_15);
              LocalPopChoice(p_23);
            }
          else
            {
              t = o_23;
              {
                ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL;
                t = term_z_13;
                a_16 = t;
                t = term_y_21;
                b_16 = t;
                t = term_u_23;
                t = c_6(a_16, b_16, t);
                t = m_40;
                t = default_system_about_0_0(t);
                t = term_w_9;
                z_15 = t;
                t = SSL_exit(z_15);
              }
            }
        }
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        {
          ATerm y_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
              static ATerm x_8 (ATerm t)
              {
                ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,h_9 = NULL;
                s_40 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_40 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_40);
                q_40 = t;
                t = r_40;
                if(((j_39 != NULL) && (j_39 != t)))
                  _fail(t);
                else
                  j_39 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_40);
                h_9 = t;
                t = SSLsetAnnotations(h_9, q_40);
                return(t);
              }
              t = fetch_1_0(x_8, t);
              t = term_a_10;
              o_40 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_39)), term_a_24);
              p_40 = t;
              t = SSL_printnl(o_40, p_40);
              t = (ATerm) ATmakeAppl(sym__2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_39)), term_a_24));
              t = default_system_usage_0_0(t);
              t = term_x_9;
              n_40 = t;
              t = SSL_exit(n_40);
              LocalPopChoice(z_23);
            }
          else
            {
              t = y_23;
            }
        }
      }
  }
  k_39 = t;
  t = term_i_18;
  t = table_destroy_0_0(t);
  t = k_39;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_121 (ATerm), ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
  t = parse_options_1_0(w_121, t);
  x_40 = t;
  t = term_b_24;
  t = table_create_0_0(t);
  t = term_b_24;
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_b_24, term_c_24, x_40);
  t = lookup_table_0_1(y_40, t);
  b_41 = t;
  t = term_c_24;
  z_40 = t;
  t = b_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(z_40, x_40, a_41, t);
  t = x_40;
  t = y_121(t);
  {
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_121, t);
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
          ATerm g_24 = t;
          int h_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_121(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_24);
            }
          else
            {
              t = g_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm n_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(r_24);
          }
        else
          {
            t = n_24;
            {
              ATerm s_24 = t;
              int x_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(x_24);
                }
              else
                {
                  t = s_24;
                  {
                    ATerm y_24 = t;
                    int b_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(b_9, d_9, e_9, t);
                        LocalPopChoice(b_25);
                      }
                    else
                      {
                        t = y_24;
                        {
                          ATerm c_25 = t;
                          int d_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(d_25);
                            }
                          else
                            {
                              t = c_25;
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
static ATerm z_8 (ATerm t)
{
  t = input_1_0(f_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL;
  t = term_i_15;
  d_41 = t;
  t = term_x_16;
  e_41 = t;
  t = term_h_25;
  t = f_6(d_41, e_41, t);
  t = term_i_25;
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = term_j_25;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = output_1_0(Stratego_warnings_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_8, default_usage_0_0, _id, z_8, t);
  return(t);
}
