#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_ObsoleteWarning_1;
Symbol sym_DebugWarning_1;
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
Symbol sym_Str_1;
Symbol sym_SVar_1;
Symbol sym_CallT_3;
Symbol sym_Build_1;
Symbol sym_Path_2;
Symbol sym_SDef_3;
static void init_module_constructors (void)
{
  sym_ObsoleteWarning_1 = ATmakeSymbol("ObsoleteWarning", 1, ATfalse);
  ATprotectSymbol(sym_ObsoleteWarning_1);
  sym_DebugWarning_1 = ATmakeSymbol("DebugWarning", 1, ATfalse);
  ATprotectSymbol(sym_DebugWarning_1);
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
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
}
ATerm term_f_21;
ATerm term_e_21;
ATerm term_a_21;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_t_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_c_18;
ATerm term_u_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_b_17;
ATerm term_n_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_i_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_n_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_y_10;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_e_8;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: possibly missing build operator in debug strategy in \"", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\n", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  debug(", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")\n", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: obsolete strategy or rule invoked from \"", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\":\n  ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol(": \"", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" warning(s)\n", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING incorrect parameter passed to -W switch: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_i_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_a_13);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_g_13);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_n_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_a_15, term_t_8);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_8);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_s_14);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_l_16);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_a_15);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_j_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_p_15);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym__2, term_c_18, term_s_14);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_s_14);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_s_14);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__3, term_n_15, term_p_15, (ATerm) ATempty);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_c_18);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_s_14);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm mk_warning_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm print_warnings_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm j_0 (ATerm t);
ATerm sdef_with_property_1_0 (ATerm d_80 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_4 (ATerm c_80 (ATerm), ATerm b_21, ATerm z_20, ATerm t);
static ATerm b_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm a_5 (ATerm v_20, ATerm w_20, ATerm x_20, ATerm t);
static ATerm x_6 (ATerm o_4, ATerm p_4, ATerm x_4, ATerm t);
ATerm map_apply_1_0 (ATerm e_80 (ATerm), ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm strategy_invokation_warning_1_0 (ATerm a_80 (ATerm), ATerm t);
ATerm oncetd_1_0 (ATerm g_83 (ATerm), ATerm t);
static ATerm b_5 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_29, ATerm d_29, ATerm t);
static ATerm c_5 (ATerm z_92 (ATerm), ATerm a_29, ATerm z_28, ATerm t);
ATerm foldr_3_0 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
ATerm collect_om_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm strategy_argument_warning_1_0 (ATerm b_80 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm debug_with_incorrect_string_0_0 (ATerm t);
static ATerm z_11 (ATerm r_11, ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm Warning_1_0 (ATerm i_80 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm j_96 (ATerm), ATerm t);
ATerm fetch_elem_1_0 (ATerm a_89 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm y_89 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm Stratego_warnings_0_0 (ATerm t);
static ATerm f_5 (ATerm b_38, ATerm c_38, ATerm t);
static ATerm g_5 (ATerm w_22, ATerm x_22, ATerm t);
static ATerm i_5 (ATerm f_88 (ATerm), ATerm h_154, ATerm c_23, ATerm t);
static ATerm h_5 (ATerm s_22, ATerm t_22, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm output_1_0 (ATerm v_106 (ATerm), ATerm t);
static ATerm f_18 (ATerm t_17, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_5 (ATerm y_22, ATerm t);
static ATerm k_5 (ATerm u_36, ATerm v_36, ATerm t);
static ATerm l_5 (ATerm d_38, ATerm e_38, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_21 (ATerm u_18, ATerm t);
static ATerm l_21 (ATerm c_19, ATerm d_19, ATerm f_19, ATerm t);
static ATerm m_21 (ATerm b_20, ATerm e_20, ATerm f_20, ATerm t);
static ATerm m_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm w_106 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_5 (ATerm u_47, ATerm v_47, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm d_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm f_89 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_27 (ATerm k_26, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm e_5 (ATerm a_48, ATerm z_47, ATerm t);
static ATerm t_5 (ATerm p_52, ATerm q_52, ATerm o_52, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm n_6 (ATerm t);
ATerm stratego_warnings_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_5 (ATerm x_40, ATerm y_40, ATerm t);
ATerm foldr_2_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_103 (ATerm), ATerm t);
static ATerm r_6 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm need_help_1_0 (ATerm m_106 (ATerm), ATerm t);
static ATerm w_5 (ATerm w_55, ATerm x_55, ATerm y_55, ATerm t);
ATerm lookup_table_0_1 (ATerm b_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_56, ATerm f_56, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm p_5 (ATerm b_56, ATerm c_56, ATerm t);
static ATerm q_5 (ATerm g_56, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_88 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm x_5 (ATerm z_55, ATerm a_56, ATerm t);
static ATerm s_5 (ATerm i_54, ATerm j_54, ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_108 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm parse_options_1_0 (ATerm o_108 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm mk_warning_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,o_1 = NULL,s_1 = NULL,u_1 = NULL,x_1 = NULL;
  n_1 = t;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      s_1 = ATgetArgument(t, 1);
      {
        ATerm m_0 = NULL,o_0 = NULL,q_0 = NULL,t_0 = NULL;
        t = s_1;
        if(match_cons(t, sym_DebugWarning_1))
          {
            m_1 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSL_explode_string(m_1);
        q_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_0), term_e_8), (ATerm) ATinsert(ATempty, term_e_8));
        t = conc_0_0(t);
        t_0 = t;
        t = SSL_implode_string(t_0);
        m_0 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_8), m_0), term_j_8), term_i_8), o_1), term_g_8);
        o_0 = t;
        t = SSL_concat_strings(o_0);
      }
    }
  else
    {
      ATerm z_1 = NULL;
      if(match_cons(t, sym__3))
        {
          o_1 = ATgetArgument(t, 0);
          s_1 = ATgetArgument(t, 1);
          u_1 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_1;
      if(match_cons(t, sym_ObsoleteWarning_1))
        {
          x_1 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_8), x_1), term_q_8), s_1), term_p_8), o_1), term_o_8);
      z_1 = t;
      t = SSL_concat_strings(z_1);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_t_8;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL;
  if(match_cons(t, sym__2))
    {
      r_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(r_2, s_2, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  t = term_u_8;
  return(t);
}
ATerm print_warnings_0_0 (ATerm t)
{
  ATerm j_2 = NULL;
  ATerm w_8 = t;
  int y_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 = NULL;
      k_2 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_2;
      LocalPopChoice(y_8);
    }
  else
    {
      t = w_8;
      {
        ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL,q_2 = NULL;
        t = map_1_0(mk_warning_0_0, t);
        m_2 = t;
        t = foldr_3_0(a_0, b_0, f_0, t);
        j_2 = t;
        t = term_c_9;
        q_2 = t;
        t = SSL_print(q_2, m_2);
        t = term_c_9;
        n_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_9), j_2), term_d_9);
        o_2 = t;
        t = SSL_print(n_2, o_2);
        t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_9), j_2), term_d_9));
      }
    }
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      a_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(j_0, a_3, b_3, t);
  return(t);
}
static ATerm j_0 (ATerm t)
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
  return(t);
}
ATerm sdef_with_property_1_0 (ATerm d_80 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,w_2 = NULL,x_2 = NULL,z_2 = NULL,p_0 = NULL;
  static ATerm r_0 (ATerm t)
  {
    ATerm d_3 = NULL;
    d_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_2), d_3);
    return(t);
  }
  z_2 = t;
  if(match_cons(t, sym_SDef_3))
    {
      if(((u_2 != NULL) && (u_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        u_2 = ATgetArgument(t, 0);
      w_2 = ATgetArgument(t, 1);
      x_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_2);
  t_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, u_2, w_2, x_2);
  p_0 = t;
  t = SSLsetAnnotations(p_0, t_2);
  t = x_2;
  t = collect_om_2_0(d_80, h_0, t);
  {
    ATerm h_9 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_9;
      }
  }
  t = map_1_0(r_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      u_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(x_0, s_3, u_3, t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      v_3 = ATgetArgument(t, 0);
      if((v_3 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_4 (ATerm c_80 (ATerm), ATerm b_21, ATerm z_20, ATerm t)
{
  ATerm f_3 = NULL;
  t = c_80(t);
  f_3 = t;
  t = z_20;
  {
    static ATerm u_0 (ATerm t)
    {
      ATerm g_3 = NULL,i_3 = NULL,j_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,v_0 = NULL,s_0 = NULL;
      r_3 = t;
      if(match_cons(t, sym_CallT_3))
        {
          i_3 = ATgetArgument(t, 0);
          j_3 = ATgetArgument(t, 1);
          n_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_3);
      g_3 = t;
      t = i_3;
      if(match_cons(t, sym_SVar_1))
        {
          p_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_3);
      o_3 = t;
      t = p_3;
      if((f_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_SVar_1, p_3);
      s_0 = t;
      t = SSLsetAnnotations(s_0, o_3);
      q_3 = t;
      t = (ATerm) ATmakeAppl(sym_CallT_3, q_3, j_3, n_3);
      v_0 = t;
      t = SSLsetAnnotations(v_0, g_3);
      t = p_3;
      return(t);
    }
    t = collect_om_2_0(u_0, w_0, t);
  }
  {
    ATerm i_9 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_9;
      }
  }
  t = b_21;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm a_4 = NULL,b_4 = NULL;
  if(match_cons(t, sym__2))
    {
      a_4 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(g_1, a_4, b_4, t);
  return(t);
}
static ATerm g_1 (ATerm t)
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
static ATerm a_5 (ATerm v_20, ATerm w_20, ATerm x_20, ATerm t)
{
  static ATerm z_0 (ATerm t)
  {
    ATerm w_3 = NULL,x_3 = NULL,z_3 = NULL;
    if(match_cons(t, sym_SDef_3))
      {
        x_3 = ATgetArgument(t, 0);
        {
          ATerm j_9 = ATgetArgument(t, 1);
        }
        z_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    {
      static ATerm f_1 (ATerm t)
      {
        t = w_20;
        return(t);
      }
      t = z_4(f_1, x_3, z_3, t);
    }
    {
      ATerm o_9 = t;
      if((PushChoice() == 0))
        {
          if((w_20 != t))
            {
              _fail(t);
            }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = o_9;
        }
    }
    w_3 = t;
    t = (ATerm) ATmakeAppl(sym__3, w_3, w_20, x_20);
    return(t);
  }
  t = v_20;
  t = collect_om_2_0(z_0, b_1, t);
  return(t);
}
static ATerm x_6 (ATerm o_4, ATerm p_4, ATerm x_4, ATerm t)
{
  ATerm u_5 = NULL,y_5 = NULL,b_6 = NULL,y_0 = NULL;
  t = SSLgetAnnotations(x_4);
  y_5 = t;
  t = p_4;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_4, p_4);
  y_0 = t;
  t = SSLsetAnnotations(y_0, y_5);
  b_6 = t;
  t = SSL_explode_term(b_6);
  if(match_cons(t, sym__2))
    {
      ATerm p_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_9 = ATgetArgument(t, 1);
        if(((ATgetType(s_9) == AT_LIST) && !(ATisEmpty(s_9))))
          {
            u_5 = ATgetFirst((ATermList) s_9);
            {
              ATerm u_9 = (ATerm) ATgetNext((ATermList) s_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_5;
  return(t);
}
ATerm map_apply_1_0 (ATerm e_80 (ATerm), ATerm t)
{
  static ATerm w_6 (ATerm t)
  {
    ATerm d_6 = NULL,h_6 = NULL,i_6 = NULL,l_6 = NULL,m_6 = NULL;
    d_6 = t;
    if(match_cons(t, sym__2))
      {
        h_6 = ATgetArgument(t, 0);
        i_6 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = i_6;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_6 = ATgetFirst((ATermList) t);
        m_6 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_6(h_6, i_6, d_6, t);
              LocalPopChoice(w_9);
            }
          else
            {
              t = v_9;
              {
                ATerm v_6 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, h_6, l_6);
                t = e_80(t);
                v_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_6, m_6);
                t = w_6(t);
              }
            }
        }
      }
    else
      {
        t = x_6(h_6, i_6, d_6, t);
      }
    return(t);
  }
  t = w_6(t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm i_2 = NULL,l_2 = NULL;
  if(match_cons(t, sym__2))
    {
      i_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(i_1, i_2, l_2, t);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm p_2 = NULL;
  if(match_cons(t, sym__2))
    {
      p_2 = ATgetArgument(t, 0);
      if((p_2 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm v_2 = NULL,y_2 = NULL,e_3 = NULL;
  if(match_cons(t, sym__2))
    {
      v_2 = ATgetArgument(t, 0);
      {
        ATerm x_9 = ATgetArgument(t, 1);
        if(match_cons(x_9, sym__2))
          {
            y_2 = ATgetArgument(x_9, 0);
            e_3 = ATgetArgument(x_9, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_5(v_2, y_2, e_3, t);
  return(t);
}
ATerm strategy_invokation_warning_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_7 = NULL,g_2 = NULL;
      p_7 = t;
      t = collect_om_2_0(a_80, h_1, t);
      t = concat_0_0(t);
      {
        ATerm a_10 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_10;
          }
      }
      g_2 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_7, g_2);
      t = map_apply_1_0(j_1, t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_83 (ATerm), ATerm t)
{
  static ATerm s_7 (ATerm t)
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_83(t);
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        t = SRTS_one(s_7, t);
      }
    return(t);
  }
  t = s_7(t);
  return(t);
}
static ATerm b_5 (ATerm c_93 (ATerm), ATerm d_93 (ATerm), ATerm e_29, ATerm d_29, ATerm t)
{
  t = d_93(t);
  {
    static ATerm k_1 (ATerm t)
    {
      ATerm t_7 = NULL;
      t_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_29, t_7);
      t = c_93(t);
      return(t);
    }
    t = fetch_1_0(k_1, t);
  }
  t = d_29;
  return(t);
}
static ATerm c_5 (ATerm z_92 (ATerm), ATerm a_29, ATerm z_28, ATerm t)
{
  static ATerm s_8 (ATerm t)
  {
    ATerm l_8 = NULL,m_8 = NULL,n_8 = NULL;
    l_8 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_8 = ATgetFirst((ATermList) t);
            n_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm d_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_8;
              {
                static ATerm p_1 (ATerm t)
                {
                  t = z_28;
                  return(t);
                }
                t = b_5(z_92, p_1, m_8, n_8, t);
              }
              t = s_8(t);
              LocalPopChoice(f_10);
            }
          else
            {
              t = d_10;
              {
                ATerm t_3 = NULL,d_4 = NULL,a_1 = NULL;
                t = SSLgetAnnotations(l_8);
                t_3 = t;
                t = n_8;
                t = s_8(t);
                d_4 = t;
                t = (ATerm) ATinsert(CheckATermList(d_4), m_8);
                a_1 = t;
                t = SSLsetAnnotations(a_1, t_3);
              }
            }
        }
      }
    return(t);
  }
  t = a_29;
  t = s_8(t);
  return(t);
}
ATerm foldr_3_0 (ATerm h_95 (ATerm), ATerm i_95 (ATerm), ATerm j_95 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL;
  z_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_8;
      t = h_95(t);
    }
  else
    {
      ATerm k_9 = NULL,m_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_9 = ATgetFirst((ATermList) t);
          b_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_9;
      t = j_95(t);
      k_9 = t;
      t = b_9;
      t = foldr_3_0(h_95, i_95, j_95, t);
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_9, m_9);
      t = i_95(t);
    }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm e_94 (ATerm), ATerm f_94 (ATerm), ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_9 = NULL;
      t = e_94(t);
      q_9 = t;
      t = (ATerm) ATinsert(ATempty, q_9);
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      {
        ATerm j_4 = NULL,k_4 = NULL;
        static ATerm r_1 (ATerm t)
        {
          t = collect_om_2_0(e_94, f_94, t);
          return(t);
        }
        k_4 = t;
        t = SSL_explode_term(k_4);
        if(match_cons(t, sym__2))
          {
            ATerm l_10 = ATgetArgument(t, 0);
            j_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_4;
        t = foldr_3_0(q_1, f_94, r_1, t);
      }
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm r_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      r_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(v_1, r_9, t_9, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      g_10 = ATgetArgument(t, 0);
      if((g_10 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm strategy_argument_warning_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  t = collect_om_2_0(b_80, t_1, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  t = sdef_with_property_1_0(y_1, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(match_cons(m_10, sym_SVar_1))
        {
          ATerm r_10 = ATgetArgument(m_10, 0);
          if((ATgetSymbol((ATermAppl) r_10) != ATmakeSymbol("debug", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm p_10 = ATgetArgument(t, 1);
        if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
          {
            i_10 = ATgetFirst((ATermList) p_10);
            {
              ATerm s_10 = (ATerm) ATgetNext((ATermList) p_10);
              if(((ATgetType(s_10) != AT_LIST) || !(ATisEmpty(s_10))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm q_10 = ATgetArgument(t, 2);
        if(((ATgetType(q_10) != AT_LIST) || !(ATisEmpty(q_10))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_10;
  {
    ATerm x_10 = t;
    if((PushChoice() == 0))
      {
        ATerm o_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,a_11 = NULL,b_11 = NULL,d_1 = NULL,c_1 = NULL;
        b_11 = t;
        if(match_cons(t, sym_Build_1))
          {
            u_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_11);
        o_10 = t;
        t = u_10;
        if(match_cons(t, sym_Str_1))
          {
            w_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_10);
        v_10 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, w_10);
        c_1 = t;
        t = SSLsetAnnotations(c_1, v_10);
        a_11 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, a_11);
        d_1 = t;
        t = SSLsetAnnotations(d_1, o_10);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_10;
      }
  }
  {
    static ATerm a_2 (ATerm t)
    {
      ATerm d_11 = NULL,l_11 = NULL,n_11 = NULL,e_1 = NULL;
      n_11 = t;
      if(match_cons(t, sym_Str_1))
        {
          l_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_11);
      d_11 = t;
      t = l_11;
      if(((h_10 != NULL) && (h_10 != t)))
        _fail(t);
      else
        h_10 = t;
      t = (ATerm) ATmakeAppl(sym_Str_1, l_11);
      e_1 = t;
      t = SSLsetAnnotations(e_1, d_11);
      return(t);
    }
    t = oncetd_1_0(a_2, t);
  }
  t = (ATerm) ATmakeAppl(sym_DebugWarning_1, not_null(h_10));
  return(t);
}
ATerm debug_with_incorrect_string_0_0 (ATerm t)
{
  t = strategy_argument_warning_1_0(w_1, t);
  return(t);
}
static ATerm z_11 (ATerm r_11, ATerm t)
{
  ATerm t_11 = NULL,w_11 = NULL;
  t = term_c_9;
  t_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_11), term_y_10);
  w_11 = t;
  t = SSL_printnl(t_11, w_11);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = sdef_with_property_1_0(c_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm y_11 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm z_10 = ATgetArgument(t, 0);
      if(match_cons(z_10, sym_SVar_1))
        {
          ATerm g_11 = ATgetArgument(z_10, 0);
          if((ATgetSymbol((ATermAppl) g_11) != ATmakeSymbol("obsolete", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm c_11 = ATgetArgument(t, 1);
        if(((ATgetType(c_11) == AT_LIST) && !(ATisEmpty(c_11))))
          {
            ATerm j_11 = ATgetFirst((ATermList) c_11);
            if(match_cons(j_11, sym_Build_1))
              {
                ATerm m_11 = ATgetArgument(j_11, 0);
                if(match_cons(m_11, sym_Str_1))
                  {
                    y_11 = ATgetArgument(m_11, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            {
              ATerm k_11 = (ATerm) ATgetNext((ATermList) c_11);
              if(((ATgetType(k_11) != AT_LIST) || !(ATisEmpty(k_11))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm f_11 = ATgetArgument(t, 2);
        if(((ATgetType(f_11) != AT_LIST) || !(ATisEmpty(f_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_ObsoleteWarning_1, y_11);
  return(t);
}
ATerm Warning_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm x_11 = NULL;
  x_11 = t;
  if(match_string(t, "debug-arguments"))
    {
      ATerm o_11 = t;
      int p_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_11;
          t = i_80(t);
          t = debug_with_incorrect_string_0_0(t);
          LocalPopChoice(p_11);
        }
      else
        {
          t = o_11;
          t = z_11(x_11, t);
        }
    }
  else
    {
      if(match_string(t, "obsolete-strategy-calls"))
        {
          ATerm q_11 = t;
          int s_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_11;
              t = i_80(t);
              t = strategy_invokation_warning_1_0(b_2, t);
              LocalPopChoice(s_11);
            }
          else
            {
              t = q_11;
              t = z_11(x_11, t);
            }
        }
      else
        {
          if(match_string(t, "maybe-unbound-variables"))
            {
              t = (ATerm) ATempty;
            }
          else
            {
              t = z_11(x_11, t);
            }
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm t_12 = NULL,w_12 = NULL,z_12 = NULL;
  t_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_12;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_12 = ATgetFirst((ATermList) t);
          z_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm u_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 = NULL,w_4 = NULL,o_5 = NULL,l_1 = NULL;
            t = SSLgetAnnotations(t_12);
            t_4 = t;
            t = w_12;
            t = j_96(t);
            w_4 = t;
            t = z_12;
            t = filter_1_0(j_96, t);
            o_5 = t;
            t = (ATerm) ATinsert(CheckATermList(o_5), w_4);
            l_1 = t;
            t = SSLsetAnnotations(l_1, t_4);
            LocalPopChoice(a_12);
          }
        else
          {
            t = u_11;
            t = z_12;
            t = filter_1_0(j_96, t);
          }
      }
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm a_89 (ATerm), ATerm t)
{
  ATerm d_13 = NULL;
  static ATerm e_2 (ATerm t)
  {
    t = a_89(t);
    if(((d_13 != NULL) && (d_13 != t)))
      _fail(t);
    else
      d_13 = t;
    return(t);
  }
  t = fetch_1_0(e_2, t);
  t = not_null(d_13);
  return(t);
}
ATerm listtd_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  static ATerm d_14 (ATerm t)
  {
    ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL;
    t = y_89(t);
    a_14 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_14;
      }
    else
      {
        ATerm p_6 = NULL,y_6 = NULL,d_2 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_14 = ATgetFirst((ATermList) t);
            c_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_14);
        p_6 = t;
        t = c_14;
        t = d_14(t);
        y_6 = t;
        t = (ATerm) ATinsert(CheckATermList(y_6), b_14);
        d_2 = t;
        t = SSLsetAnnotations(d_2, p_6);
      }
    return(t);
  }
  t = d_14(t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm q_14 = NULL,t_14 = NULL,u_14 = NULL;
  u_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_14 = ATgetFirst((ATermList) t);
      t_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_14 = NULL;
            t = t_14;
            {
              static ATerm h_2 (ATerm t)
              {
                ATerm e_12 = t;
                if((PushChoice() == 0))
                  {
                    if((q_14 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = e_12;
                  }
                return(t);
              }
              t = filter_1_0(h_2, t);
            }
            z_14 = t;
            t = (ATerm) ATinsert(CheckATermList(z_14), q_14);
            LocalPopChoice(d_12);
          }
        else
          {
            t = b_12;
            t = u_14;
          }
      }
    }
  else
    {
      t = u_14;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm Stratego_warnings_0_0 (ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_14 = NULL,p_14 = NULL;
        t = term_h_12;
        m_14 = t;
        t = term_i_12;
        p_14 = t;
        t = term_j_12;
        t = s_5(m_14, p_14, t);
        t = listtd_1_0(f_2, t);
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = (ATerm) ATempty;
      }
  }
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = fetch_elem_1_0(h_3, t);
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_12), term_n_12), term_m_12);
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
      }
  }
  {
    static ATerm k_3 (ATerm t)
    {
      static ATerm l_3 (ATerm t)
      {
        t = l_14;
        return(t);
      }
      t = Warning_1_0(l_3, t);
      return(t);
    }
    t = filter_1_0(k_3, t);
  }
  t = concat_0_0(t);
  t = print_warnings_0_0(t);
  t = l_14;
  return(t);
}
static ATerm f_5 (ATerm b_38, ATerm c_38, ATerm t)
{
  ATerm o_15 = NULL;
  t = SSL_fputc(b_38, c_38);
  o_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_15);
  return(t);
}
static ATerm g_5 (ATerm w_22, ATerm x_22, ATerm t)
{
  ATerm q_15 = NULL;
  t = SSL_write_term_to_stream_text(w_22, x_22);
  q_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_15);
  return(t);
}
static ATerm i_5 (ATerm f_88 (ATerm), ATerm h_154, ATerm c_23, ATerm t)
{
  ATerm v_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_154, term_p_12);
  t = m_5(t);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_15, c_23);
  t = f_88(t);
  t = fclose_0_0(t);
  t = c_23;
  return(t);
}
static ATerm h_5 (ATerm s_22, ATerm t_22, ATerm t)
{
  ATerm w_15 = NULL;
  t = SSL_write_term_to_stream_baf(s_22, t_22);
  w_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_15);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm o_16 = NULL,s_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_12 = ATgetArgument(t, 0);
      if(match_cons(q_12, sym_Stream_1))
        {
          o_16 = ATgetArgument(q_12, 0);
        }
      else
        _fail(t);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(o_16, s_16, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm w_16 = NULL,a_17 = NULL,c_17 = NULL,d_17 = NULL,g_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_12 = ATgetArgument(t, 0);
      if(match_cons(r_12, sym_Stream_1))
        {
          d_17 = ATgetArgument(r_12, 0);
        }
      else
        _fail(t);
      g_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(d_17, g_17, t);
  w_16 = t;
  t = term_s_12;
  a_17 = t;
  t = w_16;
  if(match_cons(t, sym_Stream_1))
    {
      c_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_12, w_16);
  t = f_5(a_17, c_17, t);
  return(t);
}
ATerm output_1_0 (ATerm v_106 (ATerm), ATerm t)
{
  ATerm a_16 = NULL,d_16 = NULL;
  t = v_106(t);
  d_16 = t;
  {
    ATerm v_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_16 = NULL,h_16 = NULL;
        t = term_h_12;
        e_16 = t;
        t = term_a_13;
        h_16 = t;
        t = term_b_13;
        t = s_5(e_16, h_16, t);
        LocalPopChoice(x_12);
      }
    else
      {
        t = v_12;
        t = term_c_13;
      }
  }
  a_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_16, d_16);
  {
    ATerm e_13 = t;
    int f_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_16 = NULL,m_16 = NULL;
        t = term_h_12;
        j_16 = t;
        t = term_g_13;
        m_16 = t;
        t = term_h_13;
        t = s_5(j_16, m_16, t);
        t = (ATerm) ATmakeAppl(sym__2, a_16, d_16);
        LocalPopChoice(f_13);
        if(match_cons(t, sym__2))
          {
            ATerm i_13 = ATgetArgument(t, 0);
            ATerm j_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_5(m_3, a_16, d_16, t);
      }
    else
      {
        t = e_13;
        if(match_cons(t, sym__2))
          {
            ATerm l_13 = ATgetArgument(t, 0);
            ATerm n_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_5(y_3, a_16, d_16, t);
      }
  }
  return(t);
}
static ATerm f_18 (ATerm t_17, ATerm t)
{
  t = SSL_fclose(t_17);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_17 = NULL,d_18 = NULL;
  d_18 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_17 = ATgetArgument(t, 0);
      {
        ATerm o_13 = t;
        int p_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_17);
            LocalPopChoice(p_13);
          }
        else
          {
            t = o_13;
            t = f_18(d_18, t);
          }
      }
    }
  else
    {
      t = f_18(d_18, t);
    }
  return(t);
}
static ATerm j_5 (ATerm y_22, ATerm t)
{
  t = SSL_read_term_from_stream(y_22);
  return(t);
}
static ATerm k_5 (ATerm u_36, ATerm v_36, ATerm t)
{
  t = SSL_strcat(u_36, v_36);
  return(t);
}
static ATerm l_5 (ATerm d_38, ATerm e_38, ATerm t)
{
  ATerm g_18 = NULL;
  t = SSL_fopen(d_38, e_38);
  g_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_18);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_18 = NULL;
  t = SSL_stdin_stream();
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_18);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_18 = NULL;
  t = SSL_stdout_stream();
  k_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_18);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_18 = NULL;
  t = SSL_stderr_stream();
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_18);
  return(t);
}
static ATerm k_21 (ATerm u_18, ATerm t)
{
  ATerm x_18 = NULL;
  t = SSL_explode_term(u_18);
  if(match_cons(t, sym__2))
    {
      ATerm q_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_13 = ATgetArgument(t, 1);
        if(((ATgetType(r_13) == AT_LIST) && !(ATisEmpty(r_13))))
          {
            x_18 = ATgetFirst((ATermList) r_13);
            {
              ATerm t_13 = (ATerm) ATgetNext((ATermList) r_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_21 (ATerm c_19, ATerm d_19, ATerm f_19, ATerm t)
{
  ATerm g_19 = NULL,o_19 = NULL,p_19 = NULL,x_19 = NULL,m_4 = NULL;
  t = SSLgetAnnotations(f_19);
  p_19 = t;
  t = c_19;
  if(match_cons(t, sym_Path_1))
    {
      x_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_19, d_19);
  m_4 = t;
  t = SSLsetAnnotations(m_4, p_19);
  if(match_cons(t, sym__2))
    {
      g_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(g_19, o_19, t);
  return(t);
}
static ATerm m_21 (ATerm b_20, ATerm e_20, ATerm f_20, ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,j_20 = NULL,t_20 = NULL,n_4 = NULL;
  t = SSLgetAnnotations(f_20);
  j_20 = t;
  t = SSL_is_string(b_20);
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_20, e_20);
  n_4 = t;
  t = SSLsetAnnotations(n_4, j_20);
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(g_20, h_20, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm c_21 = NULL,d_21 = NULL,i_21 = NULL;
  c_21 = t;
  if(match_cons(t, sym__2))
    {
      d_21 = ATgetArgument(t, 0);
      i_21 = ATgetArgument(t, 1);
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_21(c_21, t);
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm w_13 = t;
              int e_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_21(d_21, i_21, c_21, t);
                  LocalPopChoice(e_14);
                }
              else
                {
                  t = w_13;
                  t = m_21(d_21, i_21, c_21, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_21(c_21, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_21 = NULL,s_21 = NULL,t_21 = NULL,y_21 = NULL;
  y_21 = t;
  {
    ATerm f_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_21, term_h_14);
        t = m_5(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = f_14;
        {
          ATerm y_7 = NULL,z_7 = NULL;
          t = term_i_14;
          z_7 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_14, y_21);
          t = k_5(z_7, y_21, t);
          y_7 = t;
          t = SSL_perror(y_7);
          _fail(t);
        }
      }
  }
  s_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5(t_21, t);
  q_21 = t;
  t = s_21;
  t = fclose_0_0(t);
  t = q_21;
  return(t);
}
ATerm input_1_0 (ATerm w_106 (ATerm), ATerm t)
{
  ATerm j_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_22 = NULL,d_22 = NULL;
      t = term_h_12;
      c_22 = t;
      t = term_n_14;
      d_22 = t;
      t = term_o_14;
      t = s_5(c_22, d_22, t);
      LocalPopChoice(k_14);
    }
  else
    {
      t = j_14;
      t = term_r_14;
    }
  t = ReadFromFile_0_0(t);
  t = w_106(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL,j_22 = NULL,k_22 = NULL;
  e_22 = t;
  t = term_s_14;
  t = whoami_0_0(t);
  f_22 = t;
  t = term_c_9;
  j_22 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_14), f_22), term_v_14);
  k_22 = t;
  t = SSL_printnl(j_22, k_22);
  t = term_u_8;
  g_22 = t;
  t = SSL_exit(g_22);
  t = e_22;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm p_22 = NULL;
  p_22 = t;
  if(match_string(t, "-k"))
    {
      t = p_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_22;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,a_23 = NULL;
  q_22 = t;
  t = SSL_string_to_int(q_22);
  r_22 = t;
  t = term_x_14;
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, r_22);
  t = v_5(a_23, r_22, t);
  t = q_22;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_y_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_4, f_4, g_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm g_23 = NULL;
  g_23 = t;
  if(match_string(t, "-S"))
    {
      t = g_23;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = g_23;
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL;
  t = term_a_15;
  h_23 = t;
  t = term_t_8;
  i_23 = t;
  t = term_b_15;
  t = v_5(h_23, i_23, t);
  t = term_c_15;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_d_15;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm j_23 = NULL,p_23 = NULL,q_23 = NULL;
  j_23 = t;
  t = SSL_string_to_int(j_23);
  p_23 = t;
  t = term_a_15;
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_15, p_23);
  t = v_5(q_23, p_23, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, j_23);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_e_15;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm u_23 = NULL,w_23 = NULL;
  t = term_f_15;
  u_23 = t;
  t = term_s_14;
  w_23 = t;
  t = term_g_15;
  t = v_5(u_23, w_23, t);
  t = term_h_15;
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = term_i_15;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_4, i_4, l_4, t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(q_4, r_4, s_4, t);
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
            t = Option_3_0(u_4, v_4, y_4, t);
          }
      }
    }
  return(t);
}
static ATerm v_5 (ATerm u_47, ATerm v_47, ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL;
  t = term_h_12;
  x_23 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_12, u_47, v_47);
  t = lookup_table_0_1(x_23, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(u_47, v_47, y_23, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_12, u_47, v_47);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,i_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_24 = NULL,k_24 = NULL,l_24 = NULL;
      t = term_s_14;
      t = e_0(t);
      j_24 = t;
      t = term_n_15;
      k_24 = t;
      t = term_p_15;
      l_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_15, term_p_15, j_24);
      t = t_5(k_24, l_24, j_24, t);
      _fail(t);
    }
  else
    {
      ATerm p_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_24 = ATgetFirst((ATermList) t);
          i_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_24;
      t = c_0(t);
      t = term_s_14;
      t = d_0(t);
      p_24 = t;
      t = (ATerm) ATinsert(CheckATermList(i_24), p_24);
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  if(match_string(t, "-o"))
    {
      t = r_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_24;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm s_24 = NULL,t_24 = NULL;
  s_24 = t;
  t = term_a_13;
  t_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, s_24);
  t = v_5(t_24, s_24, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_24);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_r_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_5, r_5, z_5, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  if(match_string(t, "-i"))
    {
      t = x_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_24;
    }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  y_24 = t;
  t = term_n_14;
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_14, y_24);
  t = v_5(z_24, y_24, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_24);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_6, c_6, e_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_89 (ATerm), ATerm t)
{
  static ATerm f_26 (ATerm t)
  {
    ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
    e_26 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_26 = ATgetFirst((ATermList) t);
        d_26 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_8 = NULL,v_8 = NULL,g_7 = NULL;
          t = SSLgetAnnotations(e_26);
          r_8 = t;
          t = d_26;
          t = f_26(t);
          v_8 = t;
          t = (ATerm) ATinsert(CheckATermList(v_8), c_26);
          g_7 = t;
          t = SSLsetAnnotations(g_7, r_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_26;
        t = f_89(t);
      }
    return(t);
  }
  t = f_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_25;
    }
  else
    {
      static ATerm f_6 (ATerm t)
      {
        t = not_null(d_25);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_25 = ATgetFirst((ATermList) t);
          if(((d_25 != NULL) && (d_25 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_25;
      t = at_end_1_0(f_6, t);
    }
  return(t);
}
static ATerm d_27 (ATerm k_26, ATerm t)
{
  ATerm l_26 = NULL;
  t = SSL_explode_term(k_26);
  if(match_cons(t, sym__2))
    {
      ATerm t_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      l_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_26 = NULL,w_26 = NULL,x_26 = NULL;
  x_26 = t;
  if(match_cons(t, sym__2))
    {
      t_26 = ATgetArgument(t, 0);
      w_26 = ATgetArgument(t, 1);
      {
        ATerm u_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_6 (ATerm t)
            {
              t = w_26;
              return(t);
            }
            t = t_26;
            t = at_end_1_0(g_6, t);
            LocalPopChoice(x_15);
          }
        else
          {
            t = u_15;
            t = d_27(x_26, t);
          }
      }
    }
  else
    {
      t = d_27(x_26, t);
    }
  return(t);
}
static ATerm e_5 (ATerm a_48, ATerm z_47, ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  t = a_48;
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_27 = NULL;
        t = term_h_12;
        o_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, a_48);
        t = s_5(o_27, a_48, t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = (ATerm) ATempty;
      }
  }
  i_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_47, i_27);
  t = conc_0_0(t);
  h_27 = t;
  t = term_h_12;
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_12, a_48, h_27);
  t = lookup_table_0_1(j_27, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(a_48, h_27, k_27, t);
  t = (ATerm) ATmakeAppl(sym__3, term_h_12, a_48, h_27);
  return(t);
}
static ATerm t_5 (ATerm p_52, ATerm q_52, ATerm o_52, ATerm t)
{
  ATerm s_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,y_27 = NULL;
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
  {
    ATerm b_16 = t;
    int c_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_16 = ATgetArgument(t, 0);
            ATerm g_16 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_52, q_52);
        t = s_5(p_52, q_52, t);
        LocalPopChoice(c_16);
      }
    else
      {
        t = b_16;
        t = (ATerm) ATempty;
      }
  }
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_52, q_52, (ATerm) ATinsert(CheckATermList(u_27), o_52));
  t = lookup_table_0_1(p_52, t);
  y_27 = t;
  t = (ATerm) ATinsert(CheckATermList(u_27), o_52);
  v_27 = t;
  t = y_27;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(q_52, v_27, w_27, t);
  t = s_27;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
      t = term_s_14;
      t = n_0(t);
      l_28 = t;
      t = term_n_15;
      m_28 = t;
      t = term_p_15;
      n_28 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_15, term_p_15, l_28);
      t = t_5(m_28, n_28, l_28, t);
      _fail(t);
    }
  else
    {
      ATerm r_28 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_28 = ATgetFirst((ATermList) t);
          i_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_28;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_28 = ATgetFirst((ATermList) t);
          k_28 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_28;
      t = k_0(t);
      t = j_28;
      t = l_0(t);
      r_28 = t;
      t = (ATerm) ATinsert(CheckATermList(k_28), r_28);
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm t_28 = NULL;
  t_28 = t;
  if(match_string(t, "--warning"))
    {
      t = t_28;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = t_28;
    }
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  t = term_i_12;
  v_28 = t;
  t = (ATerm) ATinsert(ATempty, u_28);
  w_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_12, (ATerm) ATinsert(ATempty, u_28));
  t = e_5(v_28, w_28, t);
  t = term_s_14;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_i_16;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, k_6, n_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_28 = NULL,c_29 = NULL,g_29 = NULL,h_29 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_14;
  t = whoami_0_0(t);
  x_28 = t;
  t = term_c_9;
  g_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_16), x_28);
  h_29 = t;
  t = SSL_printnl(g_29, h_29);
  t = term_u_8;
  c_29 = t;
  t = SSL_exit(c_29);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL;
  t = term_h_12;
  i_29 = t;
  t = term_l_16;
  j_29 = t;
  t = term_n_16;
  t = s_5(i_29, j_29, t);
  return(t);
}
static ATerm n_5 (ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_40, y_40);
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      t = SSL_addr(x_40, y_40);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm f_95 (ATerm), ATerm g_95 (ATerm), ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_29;
      t = f_95(t);
    }
  else
    {
      ATerm q_29 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_29 = ATgetFirst((ATermList) t);
          n_29 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_29;
      t = foldr_2_0(f_95, g_95, t);
      q_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_29, q_29);
      t = g_95(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_t_8;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm l_9 = NULL,n_9 = NULL;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(l_9, n_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_29 = NULL,e_9 = NULL,g_9 = NULL;
  t = times_0_0(t);
  g_9 = t;
  t = SSL_explode_term(g_9);
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_9;
  t = foldr_2_0(o_6, q_6, t);
  t_29 = t;
  t = SSL_TicksToSeconds(t_29);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  if(match_cons(t, sym__2))
    {
      j_30 = ATgetArgument(t, 0);
      k_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_30;
        if((j_30 != t))
          {
            _fail(t);
          }
        t = i_30;
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        t = (ATerm) ATmakeAppl(sym__2, j_30, k_30);
        {
          ATerm v_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(j_30, k_30);
              LocalPopChoice(x_16);
            }
          else
            {
              t = v_16;
              t = SSL_gtr(j_30, k_30);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, j_30, k_30);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  ATerm o_30 = NULL;
  o_30 = t;
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
        t = term_h_12;
        r_30 = t;
        t = term_a_15;
        s_30 = t;
        t = term_b_17;
        t = s_5(r_30, s_30, t);
        q_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_30, term_u_8);
        t = geq_0_0(t);
        t = o_30;
        t = w_103(t);
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        t = o_30;
      }
  }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,x_30 = NULL,y_30 = NULL;
  t = run_time_0_0(t);
  u_30 = t;
  t = term_s_14;
  t = whoami_0_0(t);
  v_30 = t;
  t = term_c_9;
  x_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), u_30), term_e_17), v_30);
  y_30 = t;
  t = SSL_printnl(x_30, y_30);
  t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_17), u_30), term_e_17), v_30));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_8;
  z_30 = t;
  t = SSL_exit(z_30);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL;
  k_31 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_31;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_31 = ATgetArgument(t, 0);
          {
            ATerm e_10 = NULL,j_7 = NULL;
            t = SSLgetAnnotations(k_31);
            e_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_31);
            j_7 = t;
            t = SSLsetAnnotations(j_7, e_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_31;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  ATerm h_17 = t;
  int i_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_31 = NULL,d_31 = NULL;
      t = term_h_12;
      c_31 = t;
      t = term_j_17;
      d_31 = t;
      t = term_k_17;
      t = s_5(c_31, d_31, t);
      LocalPopChoice(i_17);
    }
  else
    {
      t = h_17;
      t = fetch_1_0(s_6, t);
    }
  t = m_106(t);
  return(t);
}
static ATerm w_5 (ATerm w_55, ATerm x_55, ATerm y_55, ATerm t)
{
  ATerm m_31 = NULL;
  t = SSL_hashtable_put(y_55, w_55, x_55);
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_31);
  return(t);
}
ATerm lookup_table_0_1 (ATerm b_54, ATerm t)
{
  ATerm v_31 = NULL;
  t = table_hashtable_0_0(t);
  v_31 = t;
  {
    ATerm l_17 = t;
    int m_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL;
        t = v_31;
        if(match_cons(t, sym_Hashtable_1))
          {
            n_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_5(b_54, n_10, t);
        LocalPopChoice(m_17);
      }
    else
      {
        t = l_17;
        {
          ATerm t_10 = NULL;
          t = b_54;
          t = table_create_0_0(t);
          t = v_31;
          if(match_cons(t, sym_Hashtable_1))
            {
              t_10 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_5(b_54, t_10, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_56, ATerm f_56, ATerm t)
{
  ATerm y_31 = NULL;
  t = SSL_hashtable_create(e_56, f_56);
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_31);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,d_32 = NULL,e_32 = NULL;
  z_31 = t;
  t = term_n_17;
  d_32 = t;
  t = term_o_17;
  e_32 = t;
  t = z_31;
  t = new_hashtable_0_2(d_32, e_32, t);
  a_32 = t;
  t = z_31;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(z_31, a_32, b_32, t);
  t = z_31;
  return(t);
}
static ATerm p_5 (ATerm b_56, ATerm c_56, ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_hashtable_remove(c_56, b_56);
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_32);
  return(t);
}
static ATerm q_5 (ATerm g_56, ATerm t)
{
  ATerm g_32 = NULL;
  t = SSL_hashtable_destroy(g_56);
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_32);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm h_32 = NULL;
  t = SSL_table_hashtable();
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_32);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  i_32 = t;
  t = table_hashtable_0_0(t);
  j_32 = t;
  t = lookup_table_0_1(i_32, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_5(l_32, t);
  t = j_32;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(i_32, k_32, t);
  t = i_32;
  return(t);
}
ATerm map_1_0 (ATerm o_88 (ATerm), ATerm t)
{
  static ATerm a_33 (ATerm t)
  {
    ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
    x_32 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_32;
      }
    else
      {
        ATerm e_11 = NULL,h_11 = NULL,i_11 = NULL,l_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_32 = ATgetFirst((ATermList) t);
            z_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_32);
        e_11 = t;
        t = y_32;
        t = o_88(t);
        h_11 = t;
        t = z_32;
        t = a_33(t);
        i_11 = t;
        t = (ATerm) ATinsert(CheckATermList(i_11), h_11);
        l_7 = t;
        t = SSLsetAnnotations(l_7, e_11);
      }
    return(t);
  }
  t = a_33(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_33 = ATgetFirst((ATermList) t);
      e_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_33 = NULL,j_33 = NULL;
        static ATerm t_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_33)), not_null(j_33));
          return(t);
        }
        t = e_33;
        t = i_0(t);
        if(((i_33 != NULL) && (i_33 != t)))
          _fail(t);
        else
          i_33 = t;
        t = d_33;
        t = g_0(t);
        if(((j_33 != NULL) && (j_33 != t)))
          _fail(t);
        else
          j_33 = t;
        t = e_33;
        t = reverse_acc_2_0(g_0, t_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_14;
      t = i_0(t);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,o_7 = NULL;
  r_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_33);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_33);
  o_7 = t;
  t = SSLsetAnnotations(o_7, p_33);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm t_33 = NULL;
  t_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_33), term_p_17);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_33 = NULL,o_33 = NULL;
      t = term_h_12;
      n_33 = t;
      t = term_l_16;
      o_33 = t;
      t = term_n_16;
      t = s_5(n_33, o_33, t);
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      t = fetch_1_0(u_6, t);
    }
  t = term_s_17;
  t = echo_0_0(t);
  t = term_n_15;
  l_33 = t;
  t = term_p_15;
  m_33 = t;
  t = term_u_17;
  t = s_5(l_33, m_33, t);
  t = reverse_acc_2_0(_id, z_6, t);
  t = map_1_0(a_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  static ATerm q_34 (ATerm t)
  {
    ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
    n_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_34 = ATgetFirst((ATermList) t);
        p_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_17 = t;
      int w_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_11 = NULL,c_12 = NULL,a_8 = NULL;
          t = SSLgetAnnotations(n_34);
          v_11 = t;
          t = o_34;
          t = y_88(t);
          c_12 = t;
          t = (ATerm) ATinsert(CheckATermList(p_34), c_12);
          a_8 = t;
          t = SSLsetAnnotations(a_8, v_11);
          LocalPopChoice(w_17);
        }
      else
        {
          t = v_17;
          {
            ATerm u_12 = NULL,y_12 = NULL,c_8 = NULL;
            t = SSLgetAnnotations(n_34);
            u_12 = t;
            t = p_34;
            t = q_34(t);
            y_12 = t;
            t = (ATerm) ATinsert(CheckATermList(y_12), o_34);
            c_8 = t;
            t = SSLsetAnnotations(c_8, u_12);
          }
        }
    }
    return(t);
  }
  t = q_34(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
  u_34 = t;
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = u_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_18 = ATgetFirst((ATermList) t);
                ATerm b_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_34;
          }
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        t = (ATerm) ATinsert(ATempty, u_34);
      }
  }
  v_34 = t;
  t = term_c_13;
  w_34 = t;
  t = SSL_printnl(w_34, v_34);
  t = u_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  t = term_h_12;
  a_35 = t;
  t = term_l_16;
  b_35 = t;
  t = term_n_16;
  t = s_5(a_35, b_35, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm x_5 (ATerm z_55, ATerm a_56, ATerm t)
{
  t = SSL_hashtable_get(a_56, z_55);
  return(t);
}
static ATerm s_5 (ATerm i_54, ATerm j_54, ATerm t)
{
  ATerm c_35 = NULL;
  t = lookup_table_0_1(i_54, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_5(j_54, c_35, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL;
  t = term_c_18;
  e_35 = t;
  t = term_s_14;
  f_35 = t;
  t = term_e_18;
  t = v_5(e_35, f_35, t);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = term_i_18;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
  t = term_c_18;
  i_35 = t;
  t = term_s_14;
  j_35 = t;
  t = term_e_18;
  t = v_5(i_35, j_35, t);
  t = term_j_18;
  g_35 = t;
  t = term_s_14;
  h_35 = t;
  t = term_m_18;
  t = v_5(g_35, h_35, t);
  t = term_n_18;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_7, c_7, d_7, t);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      t = Option_3_0(e_7, f_7, h_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,f_8 = NULL;
  p_35 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_35 = ATgetFirst((ATermList) t);
      m_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_35);
  k_35 = t;
  t = l_35;
  t = w_59(t);
  n_35 = t;
  t = m_35;
  t = x_59(t);
  o_35 = t;
  t = (ATerm) ATinsert(CheckATermList(o_35), n_35);
  f_8 = t;
  t = SSLsetAnnotations(f_8, k_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,z_35 = NULL,a_36 = NULL,h_8 = NULL;
  u_35 = t;
  {
    ATerm r_18 = t;
    int s_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_18;
        t = p_108(t);
        LocalPopChoice(s_18);
      }
    else
      {
        t = r_18;
      }
  }
  t = u_35;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_35 = ATgetFirst((ATermList) t);
      x_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_35);
  v_35 = t;
  t = term_l_16;
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_16, w_35);
  t = v_5(a_36, w_35, t);
  t = x_35;
  {
    static ATerm k_36 (ATerm t)
    {
      ATerm v_18 = t;
      int w_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_36 = NULL;
              d_36 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_36;
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              t = p_108(t);
              t = Cons_2_0(_id, k_36, t);
            }
          LocalPopChoice(w_18);
        }
      else
        {
          t = v_18;
          {
            ATerm g_36 = NULL,h_36 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                g_36 = ATgetFirst((ATermList) t);
                h_36 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(h_36), (ATerm) ATmakeAppl(sym_Undefined_1, g_36));
          }
        }
      return(t);
    }
    t = k_36(t);
  }
  z_35 = t;
  t = (ATerm) ATinsert(CheckATermList(z_35), (ATerm) ATmakeAppl(sym_Program_1, w_35));
  h_8 = t;
  t = SSLsetAnnotations(h_8, v_35);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm z_36 = NULL;
  z_36 = t;
  if(match_string(t, "--help"))
    {
      t = z_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_36;
        }
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL;
  t = term_j_17;
  a_37 = t;
  t = term_s_14;
  b_37 = t;
  t = term_a_19;
  t = v_5(a_37, b_37, t);
  t = term_b_19;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_e_19;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
  r_36 = t;
  t = term_n_15;
  s_36 = t;
  t = term_h_19;
  t = lookup_table_0_1(s_36, t);
  y_36 = t;
  t = term_p_15;
  t_36 = t;
  t = (ATerm) ATempty;
  w_36 = t;
  t = y_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(t_36, w_36, x_36, t);
  t = r_36;
  {
    static ATerm i_7 (ATerm t)
    {
      ATerm i_19 = t;
      int j_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_108(t);
          LocalPopChoice(j_19);
        }
      else
        {
          t = i_19;
          {
            ATerm k_19 = t;
            int l_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_7, m_7, n_7, t);
                LocalPopChoice(l_19);
              }
            else
              {
                t = k_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_7, t);
  }
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_37 = NULL;
        m_37 = t;
        {
          ATerm q_19 = t;
          int r_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_13 = NULL;
              t = m_37;
              {
                ATerm s_19 = t;
                int t_19 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_13 = NULL,s_13 = NULL;
                    t = term_h_12;
                    m_13 = t;
                    t = term_j_17;
                    s_13 = t;
                    t = term_k_17;
                    t = s_5(m_13, s_13, t);
                    LocalPopChoice(t_19);
                  }
                else
                  {
                    t = s_19;
                    t = fetch_1_0(q_7, t);
                  }
              }
              t = m_37;
              t = default_system_usage_0_0(t);
              t = term_t_8;
              k_13 = t;
              t = SSL_exit(k_13);
              LocalPopChoice(r_19);
            }
          else
            {
              t = q_19;
              {
                ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL;
                t = term_h_12;
                y_13 = t;
                t = term_c_18;
                z_13 = t;
                t = term_u_19;
                t = s_5(y_13, z_13, t);
                t = m_37;
                t = default_system_about_0_0(t);
                t = term_t_8;
                x_13 = t;
                t = SSL_exit(x_13);
              }
            }
        }
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
              static ATerm r_7 (ATerm t)
              {
                ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,x_8 = NULL;
                s_37 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_37 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_37);
                q_37 = t;
                t = r_37;
                if(((p_36 != NULL) && (p_36 != t)))
                  _fail(t);
                else
                  p_36 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_37);
                x_8 = t;
                t = SSLsetAnnotations(x_8, q_37);
                return(t);
              }
              t = fetch_1_0(r_7, t);
              t = term_c_9;
              o_37 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(p_36)), term_y_19);
              p_37 = t;
              t = SSL_printnl(o_37, p_37);
              t = (ATerm) ATmakeAppl(sym__2, term_c_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_36)), term_y_19));
              t = default_system_usage_0_0(t);
              t = term_u_8;
              n_37 = t;
              t = SSL_exit(n_37);
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
            }
        }
      }
  }
  q_36 = t;
  t = term_n_15;
  t = table_destroy_0_0(t);
  t = q_36;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_106 (ATerm), ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL,h_38 = NULL;
  t = parse_options_1_0(o_106, t);
  x_37 = t;
  t = term_z_19;
  t = table_create_0_0(t);
  t = term_z_19;
  y_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_19, term_a_20, x_37);
  t = lookup_table_0_1(y_37, t);
  h_38 = t;
  t = term_a_20;
  z_37 = t;
  t = h_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(z_37, x_37, a_38, t);
  t = x_37;
  t = q_106(t);
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_106, t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        {
          ATerm i_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_106(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_20);
            }
          else
            {
              t = i_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm n_20 = t;
        int o_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(o_20);
          }
        else
          {
            t = n_20;
            {
              ATerm p_20 = t;
              int q_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(q_20);
                }
              else
                {
                  t = p_20;
                  {
                    ATerm r_20 = t;
                    int s_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(w_7, x_7, b_8, t);
                        LocalPopChoice(s_20);
                      }
                    else
                      {
                        t = r_20;
                        {
                          ATerm u_20 = t;
                          int y_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(y_20);
                            }
                          else
                            {
                              t = u_20;
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
static ATerm v_7 (ATerm t)
{
  t = input_1_0(d_8, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  t = term_g_13;
  j_38 = t;
  t = term_s_14;
  k_38 = t;
  t = term_a_21;
  t = v_5(j_38, k_38, t);
  t = term_e_21;
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = term_f_21;
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = output_1_0(Stratego_warnings_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_7, default_usage_0_0, _id, v_7, t);
  return(t);
}
