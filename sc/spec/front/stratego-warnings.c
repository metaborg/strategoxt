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
Symbol sym_ObsoleteWarning_1;
Symbol sym_DebugWarning_1;
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
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Str_1;
Symbol sym_SVar_1;
Symbol sym_CallT_3;
Symbol sym_Build_1;
Symbol sym_Path_2;
Symbol sym_SDef_3;
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
  sym_ObsoleteWarning_1 = ATmakeSymbol("ObsoleteWarning", 1, ATfalse);
  ATprotectSymbol(sym_ObsoleteWarning_1);
  sym_DebugWarning_1 = ATmakeSymbol("DebugWarning", 1, ATfalse);
  ATprotectSymbol(sym_DebugWarning_1);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_x_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_y_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_g_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_h_17;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_t_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_t_13;
ATerm term_p_13;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_x_10;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: possibly missing build operator in debug strategy in \"", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"\n", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("  debug(", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol(")\n", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("warning: obsolete strategy or rule invoked from \"", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\":\n  ", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol(": \"", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" warning(s)\n", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING incorrect parameter passed to -W switch: ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_p_8);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_8);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_o_14, term_z_13);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_y_14, term_z_14);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_z_13);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_z_13);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_z_13);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_z_13);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm mk_warning_0_0 (ATerm);
ATerm f_0 (ATerm);
ATerm m_0 (ATerm);
ATerm n_0 (ATerm);
ATerm print_warnings_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm sdef_with_property_1_0 (ATerm v_82 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm y_0 (ATerm);
ATerm u_4 (ATerm u_82 (ATerm), ATerm n_30, ATerm l_30, ATerm);
ATerm a_1 (ATerm);
ATerm e_1 (ATerm);
ATerm v_4 (ATerm h_30, ATerm i_30, ATerm j_30, ATerm);
ATerm n_6 (ATerm e_4, ATerm h_4, ATerm i_4, ATerm);
ATerm map_apply_1_0 (ATerm w_82 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm g_1 (ATerm);
ATerm k_1 (ATerm);
ATerm strategy_invokation_warning_1_0 (ATerm s_82 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm y_85 (ATerm), ATerm);
ATerm w_4 (ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm r_37, ATerm q_37, ATerm);
ATerm x_4 (ATerm p_94 (ATerm), ATerm n_37, ATerm m_37, ATerm);
ATerm foldr_3_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm collect_om_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm strategy_argument_warning_1_0 (ATerm t_82 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm debug_with_incorrect_string_0_0 (ATerm);
ATerm o_11 (ATerm g_11, ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm Warning_1_0 (ATerm z_82 (ATerm), ATerm);
ATerm filter_1_0 (ATerm r_97 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm x_90 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm x_2 (ATerm);
ATerm Stratego_warnings_0_0 (ATerm);
ATerm a_5 (ATerm o_50, ATerm p_50, ATerm);
ATerm b_5 (ATerm c_54, ATerm d_54, ATerm);
ATerm d_5 (ATerm h_103 (ATerm), ATerm m_437, ATerm g_54, ATerm);
ATerm c_5 (ATerm y_53, ATerm z_53, ATerm);
ATerm o_3 (ATerm);
ATerm t_3 (ATerm);
ATerm output_1_0 (ATerm q_107 (ATerm), ATerm);
ATerm e_17 (ATerm t_16, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm e_5 (ATerm e_54, ATerm);
ATerm f_5 (ATerm q_50, ATerm r_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_19 (ATerm d_18, ATerm);
ATerm u_19 (ATerm h_18, ATerm i_18, ATerm k_18, ATerm);
ATerm v_19 (ATerm u_18, ATerm v_18, ATerm w_18, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm r_107 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm n_5 (ATerm f_55, ATerm g_55, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm b_91 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm w_23 (ATerm o_23, ATerm);
ATerm conc_0_0 (ATerm);
ATerm z_4 (ATerm l_55, ATerm k_55, ATerm);
ATerm l_5 (ATerm d_60, ATerm e_60, ATerm c_60, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm stratego_warnings_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_5 (ATerm o_47, ATerm p_47, ATerm);
ATerm foldr_2_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_104 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_6 (ATerm);
ATerm need_help_1_0 (ATerm h_107 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm y_6 (ATerm);
ATerm a_7 (ATerm);
ATerm g_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm v_90 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_5 (ATerm e_45, ATerm f_45, ATerm);
ATerm debug_1_0 (ATerm f_103 (ATerm), ATerm);
ATerm map_1_0 (ATerm l_90 (ATerm), ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm k_5 (ATerm u_61, ATerm v_61, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_69 (ATerm), ATerm l_69 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm k_109 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm parse_options_1_0 (ATerm j_109 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
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
        ATerm h_1 = NULL,p_1 = NULL,w_1 = NULL,b_2 = NULL;
        t = s_1;
        if(match_cons(t, sym_DebugWarning_1))
          {
            m_1 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSL_explode_string(m_1);
        b_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_2), term_g_8), (ATerm) ATinsert(ATempty, term_g_8));
        t = conc_0_0(t);
        w_1 = t;
        t = SSL_implode_string(w_1);
        h_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_8), h_1), term_k_8), term_j_8), o_1), term_h_8);
        p_1 = t;
        t = SSL_concat_strings(p_1);
      }
    }
  else
    {
      ATerm u_2 = NULL;
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_8), x_1), term_o_8), s_1), term_n_8), o_1), term_m_8);
      u_2 = t;
      t = SSL_concat_strings(u_2);
    }
  return(t);
}
ATerm f_0 (ATerm t)
{
  t = term_p_8;
  return(t);
}
ATerm m_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym__2))
    {
      q_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(q_2, r_2, t);
  return(t);
}
ATerm n_0 (ATerm t)
{
  t = term_q_8;
  return(t);
}
ATerm print_warnings_0_0 (ATerm t)
{
  ATerm i_2 = NULL;
  ATerm r_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 = NULL;
      j_2 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_2;
      ;
      LocalPopChoice(t_8);
    }
  else
    {
      t = r_8;
      {
        ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,p_2 = NULL;
        t = map_1_0(mk_warning_0_0, t);
        l_2 = t;
        t = foldr_3_0(f_0, m_0, n_0, t);
        i_2 = t;
        t = term_x_8;
        p_2 = t;
        t = SSL_print(p_2, l_2);
        t = term_x_8;
        m_2 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_8), i_2), term_y_8);
        n_2 = t;
        t = SSL_print(m_2, n_2);
        t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_8), i_2), term_y_8));
      }
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(q_0, z_2, a_3, t);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm b_3 = NULL;
  if(match_cons(t, sym__2))
    {
      b_3 = ATgetArgument(t, 0);
      if((b_3 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm sdef_with_property_1_0 (ATerm v_82 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL,y_2 = NULL,b_0 = NULL;
  ATerm s_0 (ATerm t)
  {
    ATerm c_3 = NULL;
    c_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(t_2), c_3);
    return(t);
  }
  if(((y_2 != NULL) && (y_2 != t)))
    _fail(t);
  else
    y_2 = t;
  if(match_cons(t, sym_SDef_3))
    {
      if(((t_2 != NULL) && (t_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        t_2 = ATgetArgument(t, 0);
      if(((v_2 != NULL) && (v_2 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        v_2 = ATgetArgument(t, 1);
      if(((w_2 != NULL) && (w_2 != ATgetArgument(t, 2))))
        _fail(ATgetArgument(t, 2));
      else
        w_2 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(y_2));
  if(((s_2 != NULL) && (s_2 != t)))
    _fail(t);
  else
    s_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(t_2), not_null(v_2), not_null(w_2));
  if(((b_0 != NULL) && (b_0 != t)))
    _fail(t);
  else
    b_0 = t;
  t = SSLsetAnnotations(not_null(b_0), not_null(s_2));
  t = not_null(w_2);
  t = collect_om_2_0(v_82, p_0, t);
  {
    ATerm c_9 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_9;
      }
    t = map_1_0(s_0, t);
  }
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm p_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(y_0, p_3, q_3, t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      r_3 = ATgetArgument(t, 0);
      if((r_3 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_4 (ATerm u_82 (ATerm), ATerm n_30, ATerm l_30, ATerm t)
{
  ATerm e_3 = NULL;
  t = u_82(t);
  if(((e_3 != NULL) && (e_3 != t)))
    _fail(t);
  else
    e_3 = t;
  t = not_null(l_30);
  {
    ATerm t_0 (ATerm t)
    {
      ATerm f_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,l_0 = NULL,k_0 = NULL;
      n_3 = t;
      if(match_cons(t, sym_CallT_3))
        {
          h_3 = ATgetArgument(t, 0);
          i_3 = ATgetArgument(t, 1);
          j_3 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_3);
      f_3 = t;
      t = h_3;
      if(match_cons(t, sym_SVar_1))
        {
          l_3 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_3);
      k_3 = t;
      t = l_3;
      if(((e_3 != NULL) && (e_3 != t)))
        _fail(t);
      else
        e_3 = t;
      t = (ATerm) ATmakeAppl(sym_SVar_1, l_3);
      k_0 = t;
      t = SSLsetAnnotations(k_0, k_3);
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym_CallT_3, m_3, i_3, j_3);
      l_0 = t;
      t = SSLsetAnnotations(l_0, f_3);
      t = l_3;
      return(t);
    }
    t = collect_om_2_0(t_0, u_0, t);
    {
      ATerm d_9 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_9;
        }
      t = not_null(n_30);
    }
  }
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL;
  if(match_cons(t, sym__2))
    {
      x_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(e_1, x_3, y_3, t);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm z_3 = NULL;
  if(match_cons(t, sym__2))
    {
      z_3 = ATgetArgument(t, 0);
      if((z_3 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_4 (ATerm h_30, ATerm i_30, ATerm j_30, ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm s_3 = NULL,u_3 = NULL,v_3 = NULL;
    if(match_cons(t, sym_SDef_3))
      {
        if(((u_3 != NULL) && (u_3 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          u_3 = ATgetArgument(t, 0);
        {
          ATerm f_9 = ATgetArgument(t, 1);
        }
        if(((v_3 != NULL) && (v_3 != ATgetArgument(t, 2))))
          _fail(ATgetArgument(t, 2));
        else
          v_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    {
      ATerm c_1 (ATerm t)
      {
        t = not_null(i_30);
        return(t);
      }
      t = u_4(c_1, not_null(u_3), not_null(v_3), t);
      {
        ATerm j_9 = t;
        if((PushChoice() == 0))
          {
            if(((i_30 != NULL) && (i_30 != t)))
              _fail(t);
            else
              i_30 = t;
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_9;
          }
        if(((s_3 != NULL) && (s_3 != t)))
          _fail(t);
        else
          s_3 = t;
        t = (ATerm) ATmakeAppl(sym__3, not_null(s_3), not_null(i_30), not_null(j_30));
      }
    }
    return(t);
  }
  t = not_null(h_30);
  t = collect_om_2_0(z_0, a_1, t);
  return(t);
}
ATerm n_6 (ATerm e_4, ATerm h_4, ATerm i_4, ATerm t)
{
  ATerm y_4 = NULL,h_5 = NULL,p_5 = NULL,o_0 = NULL;
  t = SSLgetAnnotations(i_4);
  h_5 = t;
  t = h_4;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_4, h_4);
  o_0 = t;
  t = SSLsetAnnotations(o_0, h_5);
  p_5 = t;
  t = SSL_explode_term(p_5);
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_9 = ATgetArgument(t, 1);
        if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
          {
            y_4 = ATgetFirst((ATermList) m_9);
            {
              ATerm n_9 = (ATerm) ATgetNext((ATermList) m_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_4;
  return(t);
}
ATerm map_apply_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,y_5 = NULL;
    r_5 = t;
    if(match_cons(t, sym__2))
      {
        s_5 = ATgetArgument(t, 0);
        t_5 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = t_5;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_5 = ATgetFirst((ATermList) t);
        y_5 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_9 = t;
          int s_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_6(s_5, t_5, r_5, t);
              ;
              LocalPopChoice(s_9);
            }
          else
            {
              t = r_9;
              {
                ATerm h_6 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, s_5, u_5);
                t = w_82(t);
                h_6 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_6, y_5);
                t = m_6(t);
              }
            }
        }
      }
    else
      {
        t = n_6(s_5, t_5, r_5, t);
      }
    return(t);
  }
  t = m_6(t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  if(match_cons(t, sym__2))
    {
      b_4 = ATgetArgument(t, 0);
      c_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(g_1, b_4, c_4, t);
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm d_4 = NULL;
  if(match_cons(t, sym__2))
    {
      d_4 = ATgetArgument(t, 0);
      if((d_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      f_4 = ATgetArgument(t, 0);
      {
        ATerm v_9 = ATgetArgument(t, 1);
        if(match_cons(v_9, sym__2))
          {
            g_4 = ATgetArgument(v_9, 0);
            j_4 = ATgetArgument(v_9, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_4(f_4, g_4, j_4, t);
  return(t);
}
ATerm strategy_invokation_warning_1_0 (ATerm s_82 (ATerm), ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 = NULL,w_3 = NULL;
      b_7 = t;
      t = collect_om_2_0(s_82, f_1, t);
      t = concat_0_0(t);
      {
        ATerm y_9 = t;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = y_9;
          }
        w_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_7, w_3);
        t = map_apply_1_0(k_1, t);
      }
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm y_85 (ATerm), ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_85(t);
        ;
        LocalPopChoice(a_10);
      }
    else
      {
        t = z_9;
        t = SRTS_one(d_7, t);
      }
    return(t);
  }
  t = d_7(t);
  return(t);
}
ATerm w_4 (ATerm s_94 (ATerm), ATerm t_94 (ATerm), ATerm r_37, ATerm q_37, ATerm t)
{
  t = t_94(t);
  {
    ATerm l_1 (ATerm t)
    {
      ATerm e_7 = NULL;
      e_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_37), e_7);
      t = s_94(t);
      return(t);
    }
    t = fetch_1_0(l_1, t);
    t = not_null(q_37);
  }
  return(t);
}
ATerm x_4 (ATerm p_94 (ATerm), ATerm n_37, ATerm m_37, ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm w_7 = NULL,x_7 = NULL,b_8 = NULL;
    w_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(m_37);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_7 = ATgetFirst((ATermList) t);
            b_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_10 = t;
          int f_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_7;
              {
                ATerm r_1 (ATerm t)
                {
                  t = not_null(m_37);
                  return(t);
                }
                t = w_4(p_94, r_1, not_null(x_7), not_null(b_8), t);
                t = i_8(t);
              }
              ;
              LocalPopChoice(f_10);
            }
          else
            {
              t = b_10;
              {
                ATerm q_4 = NULL,i_5 = NULL,r_0 = NULL;
                t = SSLgetAnnotations(w_7);
                q_4 = t;
                t = b_8;
                t = i_8(t);
                i_5 = t;
                t = (ATerm) ATinsert(CheckATermList(i_5), x_7);
                r_0 = t;
                t = SSLsetAnnotations(r_0, q_4);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(n_37);
  t = i_8(t);
  return(t);
}
ATerm foldr_3_0 (ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,v_8 = NULL,w_8 = NULL;
  s_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_8;
      t = q_96(t);
    }
  else
    {
      ATerm a_9 = NULL,b_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_8 = ATgetFirst((ATermList) t);
          w_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_8;
      t = s_96(t);
      a_9 = t;
      t = w_8;
      t = foldr_3_0(q_96, r_96, s_96, t);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
      t = r_96(t);
    }
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm u_95 (ATerm), ATerm v_95 (ATerm), ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL;
      t = u_95(t);
      g_9 = t;
      t = (ATerm) ATinsert(ATempty, g_9);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm b_6 = NULL,e_6 = NULL;
        ATerm v_1 (ATerm t)
        {
          t = collect_om_2_0(u_95, v_95, t);
          return(t);
        }
        if(((e_6 != NULL) && (e_6 != t)))
          _fail(t);
        else
          e_6 = t;
        t = SSL_explode_term(not_null(e_6));
        if(match_cons(t, sym__2))
          {
            ATerm j_10 = ATgetArgument(t, 0);
            if(((b_6 != NULL) && (b_6 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              b_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = not_null(b_6);
        t = foldr_3_0(t_1, v_95, v_1, t);
      }
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL;
  if(match_cons(t, sym__2))
    {
      h_9 = ATgetArgument(t, 0);
      i_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(z_1, h_9, i_9, t);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      l_9 = ATgetArgument(t, 0);
      if((l_9 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm strategy_argument_warning_1_0 (ATerm t_82 (ATerm), ATerm t)
{
  t = collect_om_2_0(t_82, y_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = sdef_with_property_1_0(d_2, t);
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm q_9 = NULL,c_10 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if(match_cons(o_10, sym_SVar_1))
        {
          ATerm t_10 = ATgetArgument(o_10, 0);
          if((ATgetSymbol((ATermAppl) t_10) != ATmakeSymbol("debug", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm p_10 = ATgetArgument(t, 1);
        if(((ATgetType(p_10) == AT_LIST) && !(ATisEmpty(p_10))))
          {
            if(((c_10 != NULL) && (c_10 != ATgetFirst((ATermList) p_10))))
              _fail(ATgetFirst((ATermList) p_10));
            else
              c_10 = ATgetFirst((ATermList) p_10);
            {
              ATerm v_10 = (ATerm) ATgetNext((ATermList) p_10);
              if(((ATgetType(v_10) != AT_LIST) || !(ATisEmpty(v_10))))
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
  t = not_null(c_10);
  {
    ATerm w_10 = t;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL,e_10 = NULL,i_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,w_0 = NULL,v_0 = NULL;
        n_10 = t;
        if(match_cons(t, sym_Build_1))
          {
            e_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_10);
        d_10 = t;
        t = e_10;
        if(match_cons(t, sym_Str_1))
          {
            l_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_10);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, l_10);
        v_0 = t;
        t = SSLsetAnnotations(v_0, i_10);
        m_10 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
        w_0 = t;
        t = SSLsetAnnotations(w_0, d_10);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_10;
      }
    {
      ATerm e_2 (ATerm t)
      {
        ATerm r_10 = NULL,s_10 = NULL,u_10 = NULL,x_0 = NULL;
        u_10 = t;
        if(match_cons(t, sym_Str_1))
          {
            s_10 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_10);
        r_10 = t;
        t = s_10;
        if(((q_9 != NULL) && (q_9 != t)))
          _fail(t);
        else
          q_9 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, s_10);
        x_0 = t;
        t = SSLsetAnnotations(x_0, r_10);
        return(t);
      }
      t = oncetd_1_0(e_2, t);
      t = (ATerm) ATmakeAppl(sym_DebugWarning_1, not_null(q_9));
    }
  }
  return(t);
}
ATerm debug_with_incorrect_string_0_0 (ATerm t)
{
  t = strategy_argument_warning_1_0(c_2, t);
  return(t);
}
ATerm o_11 (ATerm g_11, ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  t = term_x_8;
  k_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_11), term_x_10);
  l_11 = t;
  t = SSL_printnl(k_11, l_11);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = sdef_with_property_1_0(g_2, t);
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm n_11 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm z_10 = ATgetArgument(t, 0);
      if(match_cons(z_10, sym_SVar_1))
        {
          ATerm d_11 = ATgetArgument(z_10, 0);
          if((ATgetSymbol((ATermAppl) d_11) != ATmakeSymbol("obsolete", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm a_11 = ATgetArgument(t, 1);
        if(((ATgetType(a_11) == AT_LIST) && !(ATisEmpty(a_11))))
          {
            ATerm e_11 = ATgetFirst((ATermList) a_11);
            if(match_cons(e_11, sym_Build_1))
              {
                ATerm h_11 = ATgetArgument(e_11, 0);
                if(match_cons(h_11, sym_Str_1))
                  {
                    n_11 = ATgetArgument(h_11, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            {
              ATerm f_11 = (ATerm) ATgetNext((ATermList) a_11);
              if(((ATgetType(f_11) != AT_LIST) || !(ATisEmpty(f_11))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm c_11 = ATgetArgument(t, 2);
        if(((ATgetType(c_11) != AT_LIST) || !(ATisEmpty(c_11))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_ObsoleteWarning_1, n_11);
  return(t);
}
ATerm Warning_1_0 (ATerm z_82 (ATerm), ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  if(match_string(t, "debug-arguments"))
    {
      ATerm i_11 = t;
      int j_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_11;
          t = z_82(t);
          t = debug_with_incorrect_string_0_0(t);
          ;
          LocalPopChoice(j_11);
        }
      else
        {
          t = i_11;
          t = o_11(m_11, t);
        }
    }
  else
    {
      if(match_string(t, "obsolete-strategy-calls"))
        {
          ATerm p_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_11;
              t = z_82(t);
              t = strategy_invokation_warning_1_0(f_2, t);
              ;
              LocalPopChoice(r_11);
            }
          else
            {
              t = p_11;
              t = o_11(m_11, t);
            }
        }
      else
        {
          t = o_11(m_11, t);
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm j_12 = NULL,l_12 = NULL,m_12 = NULL;
  j_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_12;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_12 = ATgetFirst((ATermList) t);
          m_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_6 = NULL,w_6 = NULL,f_7 = NULL,b_1 = NULL;
            t = SSLgetAnnotations(j_12);
            o_6 = t;
            t = l_12;
            t = r_97(t);
            w_6 = t;
            t = m_12;
            t = filter_1_0(r_97, t);
            f_7 = t;
            t = (ATerm) ATinsert(CheckATermList(f_7), w_6);
            b_1 = t;
            t = SSLsetAnnotations(b_1, o_6);
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = s_11;
            t = m_12;
            t = filter_1_0(r_97, t);
          }
      }
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm x_90 (ATerm), ATerm t)
{
  ATerm q_12 = NULL;
  ATerm h_2 (ATerm t)
  {
    t = x_90(t);
    if(((q_12 != NULL) && (q_12 != t)))
      _fail(t);
    else
      q_12 = t;
    return(t);
  }
  t = fetch_1_0(h_2, t);
  t = not_null(q_12);
  return(t);
}
ATerm listtd_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    ATerm h_13 = NULL,l_13 = NULL,m_13 = NULL;
    t = u_91(t);
    h_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_13;
      }
    else
      {
        ATerm t_7 = NULL,a_8 = NULL,d_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_13 = ATgetFirst((ATermList) t);
            m_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_13);
        t_7 = t;
        t = m_13;
        t = q_13(t);
        a_8 = t;
        t = (ATerm) ATinsert(CheckATermList(a_8), l_13);
        d_1 = t;
        t = SSLsetAnnotations(d_1, t_7);
      }
    return(t);
  }
  t = q_13(t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,m_14 = NULL;
  if(((m_14 != NULL) && (m_14 != t)))
    _fail(t);
  else
    m_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_14 = ATgetFirst((ATermList) t);
      f_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_14 = NULL;
            t = not_null(f_14);
            {
              ATerm o_2 (ATerm t)
              {
                ATerm x_11 = t;
                if((PushChoice() == 0))
                  {
                    if(((e_14 != NULL) && (e_14 != t)))
                      _fail(t);
                    else
                      e_14 = t;
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_11;
                  }
                return(t);
              }
              t = filter_1_0(o_2, t);
              if(((t_14 != NULL) && (t_14 != t)))
                _fail(t);
              else
                t_14 = t;
              t = (ATerm) ATinsert(CheckATermList(not_null(t_14)), not_null(e_14));
            }
            ;
            LocalPopChoice(w_11);
          }
        else
          {
            t = v_11;
            t = not_null(m_14);
          }
      }
    }
  else
    {
      t = not_null(m_14);
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("all", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm Stratego_warnings_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  if(((b_14 != NULL) && (b_14 != t)))
    _fail(t);
  else
    b_14 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_12;
        t = get_config_0_0(t);
        t = listtd_1_0(k_2, t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = (ATerm) ATempty;
      }
    {
      ATerm b_12 = t;
      int c_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = fetch_elem_1_0(x_2, t);
          t = (ATerm) ATinsert(ATinsert(ATempty, term_e_12), term_d_12);
          ;
          LocalPopChoice(c_12);
        }
      else
        {
          t = b_12;
        }
      {
        ATerm d_3 (ATerm t)
        {
          ATerm g_3 (ATerm t)
          {
            t = not_null(b_14);
            return(t);
          }
          t = Warning_1_0(g_3, t);
          return(t);
        }
        t = filter_1_0(d_3, t);
        t = concat_0_0(t);
        t = print_warnings_0_0(t);
        t = not_null(b_14);
      }
    }
  }
  return(t);
}
ATerm a_5 (ATerm o_50, ATerm p_50, ATerm t)
{
  ATerm h_15 = NULL;
  t = SSL_fputc(o_50, p_50);
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_15);
  return(t);
}
ATerm b_5 (ATerm c_54, ATerm d_54, ATerm t)
{
  ATerm k_15 = NULL;
  t = SSL_write_term_to_stream_text(c_54, d_54);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_15);
  return(t);
}
ATerm d_5 (ATerm h_103 (ATerm), ATerm m_437, ATerm g_54, ATerm t)
{
  ATerm m_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_437, term_f_12);
  t = open_stream_0_0(t);
  m_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_15, g_54);
  t = h_103(t);
  t = fclose_0_0(t);
  t = g_54;
  return(t);
}
ATerm c_5 (ATerm y_53, ATerm z_53, ATerm t)
{
  ATerm n_15 = NULL;
  t = SSL_write_term_to_stream_baf(y_53, z_53);
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_15);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      if(match_cons(g_12, sym_Stream_1))
        {
          q_15 = ATgetArgument(g_12, 0);
        }
      else
        _fail(t);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(q_15, r_15, t);
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,y_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      if(match_cons(h_12, sym_Stream_1))
        {
          y_15 = ATgetArgument(h_12, 0);
        }
      else
        _fail(t);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(y_15, z_15, t);
  u_15 = t;
  t = term_i_12;
  v_15 = t;
  t = u_15;
  if(match_cons(t, sym_Stream_1))
    {
      w_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_12, u_15);
  t = a_5(v_15, w_15, t);
  return(t);
}
ATerm output_1_0 (ATerm q_107 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  t = q_107(t);
  p_15 = t;
  {
    ATerm k_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_12;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(n_12);
      }
    else
      {
        t = k_12;
        t = term_r_12;
      }
    o_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
    {
      ATerm s_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_w_12;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
          LocalPopChoice(u_12);
          if(match_cons(t, sym__2))
            {
              ATerm x_12 = ATgetArgument(t, 0);
              ATerm y_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_5(o_3, o_15, p_15, t);
        }
      else
        {
          t = s_12;
          if(match_cons(t, sym__2))
            {
              ATerm z_12 = ATgetArgument(t, 0);
              ATerm a_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_5(t_3, o_15, p_15, t);
        }
    }
  }
  return(t);
}
ATerm e_17 (ATerm t_16, ATerm t)
{
  t = SSL_fclose(t_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL;
  a_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_16 = ATgetArgument(t, 0);
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_16);
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            t = e_17(a_17, t);
          }
      }
    }
  else
    {
      t = e_17(a_17, t);
    }
  return(t);
}
ATerm e_5 (ATerm e_54, ATerm t)
{
  t = SSL_read_term_from_stream(e_54);
  return(t);
}
ATerm f_5 (ATerm q_50, ATerm r_50, ATerm t)
{
  ATerm f_17 = NULL;
  t = SSL_fopen(q_50, r_50);
  f_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_17);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_17 = NULL;
  t = SSL_stdin_stream();
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_17);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_17 = NULL;
  t = SSL_stdout_stream();
  j_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_17);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_17 = NULL;
  t = SSL_stderr_stream();
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_17);
  return(t);
}
ATerm t_19 (ATerm d_18, ATerm t)
{
  ATerm e_18 = NULL;
  t = SSL_explode_term(d_18);
  if(match_cons(t, sym__2))
    {
      ATerm d_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_13 = ATgetArgument(t, 1);
        if(((ATgetType(e_13) == AT_LIST) && !(ATisEmpty(e_13))))
          {
            e_18 = ATgetFirst((ATermList) e_13);
            {
              ATerm f_13 = (ATerm) ATgetNext((ATermList) e_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm u_19 (ATerm h_18, ATerm i_18, ATerm k_18, ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,q_18 = NULL,i_1 = NULL;
  t = SSLgetAnnotations(k_18);
  n_18 = t;
  t = h_18;
  if(match_cons(t, sym_Path_1))
    {
      q_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_18, i_18);
  i_1 = t;
  t = SSLsetAnnotations(i_1, n_18);
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      m_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(l_18, m_18, t);
  return(t);
}
ATerm v_19 (ATerm u_18, ATerm v_18, ATerm w_18, ATerm t)
{
  ATerm x_18 = NULL,b_19 = NULL,c_19 = NULL,h_19 = NULL,j_1 = NULL;
  t = SSLgetAnnotations(w_18);
  c_19 = t;
  t = SSL_is_string(u_18);
  h_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_19, v_18);
  j_1 = t;
  t = SSLsetAnnotations(j_1, c_19);
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(x_18, b_19, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_13 = ATgetArgument(t, 0);
      ATerm i_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  k_19 = t;
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_19(k_19, t);
            ;
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
              ATerm n_13 = t;
              int o_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_19(l_19, m_19, k_19, t);
                  ;
                  LocalPopChoice(o_13);
                }
              else
                {
                  t = n_13;
                  t = v_19(l_19, m_19, k_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_19(k_19, t);
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = term_p_13;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_19 = NULL,y_19 = NULL,a_20 = NULL;
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_20 = NULL;
      b_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_20, term_t_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      t = debug_1_0(a_4, t);
      _fail(t);
    }
  y_19 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_5(a_20, t);
  w_19 = t;
  t = y_19;
  t = fclose_0_0(t);
  t = w_19;
  return(t);
}
ATerm input_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      t = term_y_13;
    }
  t = ReadFromFile_0_0(t);
  t = r_107(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm e_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  e_20 = t;
  t = term_z_13;
  t = whoami_0_0(t);
  h_20 = t;
  t = term_x_8;
  j_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_14), h_20), term_c_14);
  k_20 = t;
  t = SSL_printnl(j_20, k_20);
  t = term_q_8;
  i_20 = t;
  t = SSL_exit(i_20);
  t = e_20;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm m_20 = NULL;
  m_20 = t;
  if(match_string(t, "-k"))
    {
      t = m_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_20;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm n_20 = NULL,p_20 = NULL,q_20 = NULL;
  n_20 = t;
  t = SSL_string_to_int(n_20);
  p_20 = t;
  t = term_g_14;
  q_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_14, p_20);
  t = n_5(q_20, p_20, t);
  t = n_20;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_h_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, m_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm s_20 = NULL;
  s_20 = t;
  if(match_string(t, "-S"))
    {
      t = s_20;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_20;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  t = term_i_14;
  t_20 = t;
  t = term_p_8;
  u_20 = t;
  t = term_j_14;
  t = n_5(t_20, u_20, t);
  t = term_k_14;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_l_14;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL;
  v_20 = t;
  t = SSL_string_to_int(v_20);
  w_20 = t;
  t = term_i_14;
  x_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_14, w_20);
  t = n_5(x_20, w_20, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_20);
  return(t);
}
ATerm t_4 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm m_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL;
  t = term_o_14;
  y_20 = t;
  t = term_z_13;
  z_20 = t;
  t = term_p_14;
  t = n_5(y_20, z_20, t);
  t = term_q_14;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_r_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_4, o_4, p_4, t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = s_14;
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_4, s_4, t_4, t);
            ;
            LocalPopChoice(w_14);
          }
        else
          {
            t = v_14;
            t = Option_3_0(m_5, o_5, q_5, t);
          }
      }
    }
  return(t);
}
ATerm n_5 (ATerm f_55, ATerm g_55, ATerm t)
{
  ATerm c_21 = NULL;
  t = term_x_14;
  c_21 = t;
  t = SSL_table_put(c_21, f_55, g_55);
  t = (ATerm) ATmakeAppl(sym__3, term_x_14, f_55, g_55);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_21 = NULL,p_21 = NULL,s_21 = NULL;
      t = term_z_13;
      t = d_0(t);
      m_21 = t;
      t = term_y_14;
      p_21 = t;
      t = term_z_14;
      s_21 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, m_21);
      t = l_5(p_21, s_21, m_21, t);
      _fail(t);
    }
  else
    {
      ATerm x_21 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_21 = ATgetFirst((ATermList) t);
          i_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_21;
      t = a_0(t);
      t = term_z_13;
      t = c_0(t);
      x_21 = t;
      t = (ATerm) ATinsert(CheckATermList(i_21), x_21);
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  if(match_string(t, "-o"))
    {
      t = b_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_22;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  c_22 = t;
  t = term_p_12;
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_12, c_22);
  t = n_5(d_22, c_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_22);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_a_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_5, w_5, x_5, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  if(match_string(t, "-i"))
    {
      t = l_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_22;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  t = term_x_13;
  n_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, m_22);
  t = n_5(n_22, m_22, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_22);
  return(t);
}
ATerm c_6 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, a_6, c_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  ATerm k_23 (ATerm t)
  {
    ATerm f_23 = NULL,i_23 = NULL,j_23 = NULL;
    j_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_23 = ATgetFirst((ATermList) t);
        i_23 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm u_8 = NULL,e_9 = NULL,q_1 = NULL;
          t = SSLgetAnnotations(j_23);
          u_8 = t;
          t = i_23;
          t = k_23(t);
          e_9 = t;
          t = (ATerm) ATinsert(CheckATermList(e_9), f_23);
          q_1 = t;
          t = SSLsetAnnotations(q_1, u_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_23;
        t = b_91(t);
      }
    return(t);
  }
  t = k_23(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL;
  p_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_22;
    }
  else
    {
      ATerm d_6 (ATerm t)
      {
        t = not_null(r_22);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_22 != NULL) && (q_22 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_22 = ATgetFirst((ATermList) t);
          if(((r_22 != NULL) && (r_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(q_22);
      t = at_end_1_0(d_6, t);
    }
  return(t);
}
ATerm w_23 (ATerm o_23, ATerm t)
{
  ATerm p_23 = NULL;
  t = SSL_explode_term(o_23);
  if(match_cons(t, sym__2))
    {
      ATerm c_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      p_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_23;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  if(((t_23 != NULL) && (t_23 != t)))
    _fail(t);
  else
    t_23 = t;
  if(match_cons(t, sym__2))
    {
      r_23 = ATgetArgument(t, 0);
      s_23 = ATgetArgument(t, 1);
      {
        ATerm d_15 = t;
        int e_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 (ATerm t)
            {
              t = not_null(s_23);
              return(t);
            }
            t = not_null(r_23);
            t = at_end_1_0(g_6, t);
            ;
            LocalPopChoice(e_15);
          }
        else
          {
            t = d_15;
            t = w_23(not_null(t_23), t);
          }
      }
    }
  else
    {
      t = w_23(not_null(t_23), t);
    }
  return(t);
}
ATerm z_4 (ATerm l_55, ATerm k_55, ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
  t = l_55;
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        t = (ATerm) ATempty;
      }
    y_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_55, y_23);
    t = conc_0_0(t);
    x_23 = t;
    t = term_x_14;
    z_23 = t;
    t = SSL_table_put(z_23, l_55, x_23);
    t = (ATerm) ATmakeAppl(sym__3, term_x_14, l_55, x_23);
  }
  return(t);
}
ATerm l_5 (ATerm d_60, ATerm e_60, ATerm c_60, ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_60, e_60);
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_15 = ATgetArgument(t, 0);
            ATerm s_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_60, e_60);
        t = k_5(d_60, e_60, t);
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        t = (ATerm) ATempty;
      }
    c_24 = t;
    t = (ATerm) ATinsert(CheckATermList(c_24), c_60);
    d_24 = t;
    t = SSL_table_put(d_60, e_60, d_24);
    t = b_24;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL;
      t = term_z_13;
      t = j_0(t);
      o_24 = t;
      t = term_y_14;
      p_24 = t;
      t = term_z_14;
      q_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_14, term_z_14, o_24);
      t = l_5(p_24, q_24, o_24, t);
      _fail(t);
    }
  else
    {
      ATerm u_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_24 = ATgetFirst((ATermList) t);
          l_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_24;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_24 = ATgetFirst((ATermList) t);
          n_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_24;
      t = h_0(t);
      t = m_24;
      t = i_0(t);
      u_24 = t;
      t = (ATerm) ATinsert(CheckATermList(n_24), u_24);
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm w_24 = NULL;
  w_24 = t;
  if(match_string(t, "--warning"))
    {
      t = w_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = w_24;
    }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  t = term_a_12;
  y_24 = t;
  t = (ATerm) ATinsert(ATempty, x_24);
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_12, (ATerm) ATinsert(ATempty, x_24));
  t = z_4(y_24, z_24, t);
  t = term_z_13;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_t_15;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_6, k_6, l_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_13;
  t = whoami_0_0(t);
  a_25 = t;
  t = term_x_8;
  c_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_x_15), a_25);
  d_25 = t;
  t = SSL_printnl(c_25, d_25);
  t = term_q_8;
  b_25 = t;
  t = SSL_exit(b_25);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_a_16;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_5 (ATerm o_47, ATerm p_47, ATerm t)
{
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(o_47, p_47);
      ;
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      t = SSL_addr(o_47, p_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
  f_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_25;
      t = o_96(t);
    }
  else
    {
      ATerm k_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_25 = ATgetFirst((ATermList) t);
          h_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_25;
      t = foldr_2_0(o_96, p_96, t);
      k_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_25, k_25);
      t = p_96(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_p_8;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm t_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      t_9 = ATgetArgument(t, 0);
      u_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(t_9, u_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_25 = NULL,o_9 = NULL,p_9 = NULL;
  t = times_0_0(t);
  p_9 = t;
  t = SSL_explode_term(p_9);
  if(match_cons(t, sym__2))
    {
      ATerm d_16 = ATgetArgument(t, 0);
      o_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_9;
  t = foldr_2_0(q_6, r_6, t);
  n_25 = t;
  t = SSL_TicksToSeconds(n_25);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL;
  y_25 = t;
  if(match_cons(t, sym__2))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_16 = t;
    int f_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_26;
        if((z_25 != t))
          {
            _fail(t);
          }
        t = y_25;
        ;
        LocalPopChoice(f_16);
      }
    else
      {
        t = e_16;
        t = (ATerm) ATmakeAppl(sym__2, z_25, a_26);
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_25, a_26);
              ;
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
              t = SSL_gtr(z_25, a_26);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_25, a_26);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_26 = NULL;
        t = term_i_14;
        t = get_config_0_0(t);
        g_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_26, term_q_8);
        t = geq_0_0(t);
        t = e_26;
        t = r_104(t);
        ;
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        t = e_26;
      }
  }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm i_26 = NULL,j_26 = NULL,l_26 = NULL,m_26 = NULL;
  t = run_time_0_0(t);
  i_26 = t;
  t = term_z_13;
  t = whoami_0_0(t);
  j_26 = t;
  t = term_x_8;
  l_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_16), i_26), term_k_16), j_26);
  m_26 = t;
  t = SSL_printnl(l_26, m_26);
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_16), i_26), term_k_16), j_26));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_8;
  n_26 = t;
  t = SSL_exit(n_26);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL;
  w_26 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_26;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_26 = ATgetArgument(t, 0);
          {
            ATerm k_10 = NULL,a_2 = NULL;
            t = SSLgetAnnotations(w_26);
            k_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_26);
            a_2 = t;
            t = SSLsetAnnotations(a_2, k_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_26;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_107 (ATerm), ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      t = fetch_1_0(t_6, t);
    }
  t = h_107(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_26 = ATgetFirst((ATermList) t);
      a_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_27 = NULL,f_27 = NULL;
        ATerm v_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_27)), not_null(f_27));
          return(t);
        }
        t = not_null(a_27);
        t = g_0(t);
        if(((e_27 != NULL) && (e_27 != t)))
          _fail(t);
        else
          e_27 = t;
        t = not_null(z_26);
        t = e_0(t);
        if(((f_27 != NULL) && (f_27 != t)))
          _fail(t);
        else
          f_27 = t;
        t = not_null(a_27);
        t = reverse_acc_2_0(e_0, v_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_13;
      t = g_0(t);
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL,f_6 = NULL;
  l_27 = t;
  if(match_cons(t, sym_Program_1))
    {
      k_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_27);
  j_27 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, k_27);
  f_6 = t;
  t = SSLsetAnnotations(f_6, j_27);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_27), term_p_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
      t = fetch_1_0(y_6, t);
    }
  t = term_s_16;
  t = echo_0_0(t);
  t = term_y_14;
  h_27 = t;
  t = term_z_14;
  i_27 = t;
  t = term_u_16;
  t = k_5(h_27, i_27, t);
  t = reverse_acc_2_0(_id, a_7, t);
  t = map_1_0(g_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_90 (ATerm), ATerm t)
{
  ATerm k_28 (ATerm t)
  {
    ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
    h_28 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_28 = ATgetFirst((ATermList) t);
        j_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_10 = NULL,b_11 = NULL,i_6 = NULL;
          t = SSLgetAnnotations(h_28);
          y_10 = t;
          t = i_28;
          t = v_90(t);
          b_11 = t;
          t = (ATerm) ATinsert(CheckATermList(j_28), b_11);
          i_6 = t;
          t = SSLsetAnnotations(i_6, y_10);
          ;
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          {
            ATerm q_11 = NULL,t_11 = NULL,p_6 = NULL;
            t = SSLgetAnnotations(h_28);
            q_11 = t;
            t = j_28;
            t = k_28(t);
            t_11 = t;
            t = (ATerm) ATinsert(CheckATermList(t_11), i_28);
            p_6 = t;
            t = SSLsetAnnotations(p_6, q_11);
          }
        }
    }
    return(t);
  }
  t = k_28(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL;
  o_28 = t;
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_17 = ATgetFirst((ATermList) t);
                ATerm c_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_28;
          }
        ;
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        t = (ATerm) ATinsert(ATempty, o_28);
      }
    p_28 = t;
    t = term_r_12;
    q_28 = t;
    t = SSL_printnl(q_28, p_28);
    t = o_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_a_16;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_5 (ATerm e_45, ATerm f_45, ATerm t)
{
  t = SSL_strcat(e_45, f_45);
  return(t);
}
ATerm debug_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  u_28 = t;
  t = f_103(t);
  v_28 = t;
  t = term_x_8;
  w_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_28), v_28);
  x_28 = t;
  t = SSL_printnl(w_28, x_28);
  t = u_28;
  return(t);
}
ATerm map_1_0 (ATerm l_90 (ATerm), ATerm t)
{
  ATerm m_29 (ATerm t)
  {
    ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
    j_29 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_29;
      }
    else
      {
        ATerm o_12 = NULL,t_12 = NULL,v_12 = NULL,u_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_29 = ATgetFirst((ATermList) t);
            l_29 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_29);
        o_12 = t;
        t = k_29;
        t = l_90(t);
        t_12 = t;
        t = l_29;
        t = m_29(t);
        v_12 = t;
        t = (ATerm) ATinsert(CheckATermList(v_12), t_12);
        u_6 = t;
        t = SSLsetAnnotations(u_6, o_12);
      }
    return(t);
  }
  t = m_29(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm d_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = d_17;
    }
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_h_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_17 = t;
  int m_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_29 = NULL;
      u_29 = t;
      t = SSL_is_string(u_29);
      ;
      LocalPopChoice(m_17);
    }
  else
    {
      t = l_17;
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_7, t);
            ;
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            {
              ATerm o_30 = NULL,p_30 = NULL,u_30 = NULL;
              o_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_30 = ATgetArgument(t, 0);
                  t = p_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_30 = ATgetArgument(t, 0);
                      t = p_30;
                      {
                        ATerm p_17 = t;
                        int q_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(q_17);
                          }
                        else
                          {
                            t = p_17;
                            t = debug_1_0(i_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm y_30 = NULL,z_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_30 = ATgetArgument(t, 0);
                          u_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_30;
                      t = eval_config_0_0(t);
                      y_30 = t;
                      t = u_30;
                      t = eval_config_0_0(t);
                      z_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, y_30, z_30);
                      t = j_5(y_30, z_30, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm k_5 (ATerm u_61, ATerm v_61, ATerm t)
{
  t = SSL_table_get(u_61, v_61);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  d_31 = t;
  t = term_x_14;
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_14, d_31);
  t = k_5(e_31, d_31, t);
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_31 = NULL,g_31 = NULL;
        t = eval_config_0_0(t);
        f_31 = t;
        t = term_x_14;
        g_31 = t;
        t = SSL_table_put(g_31, d_31, f_31);
        t = f_31;
        ;
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
      }
  }
  return(t);
}
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL;
  t = term_t_17;
  j_31 = t;
  t = term_z_13;
  k_31 = t;
  t = term_u_17;
  t = n_5(j_31, k_31, t);
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_v_17;
  return(t);
}
ATerm m_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  t = term_t_17;
  n_31 = t;
  t = term_z_13;
  o_31 = t;
  t = term_u_17;
  t = n_5(n_31, o_31, t);
  t = term_w_17;
  l_31 = t;
  t = term_z_13;
  m_31 = t;
  t = term_x_17;
  t = n_5(l_31, m_31, t);
  t = term_y_17;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_z_17;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_7, k_7, l_7, t);
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      t = Option_3_0(m_7, n_7, o_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_69 (ATerm), ATerm l_69 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,x_6 = NULL;
  u_31 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_31 = ATgetFirst((ATermList) t);
      r_31 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_31);
  p_31 = t;
  t = q_31;
  t = k_69(t);
  s_31 = t;
  t = r_31;
  t = l_69(t);
  t_31 = t;
  t = (ATerm) ATinsert(CheckATermList(t_31), s_31);
  x_6 = t;
  t = SSLsetAnnotations(x_6, p_31);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_109 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,e_32 = NULL,f_32 = NULL,z_6 = NULL;
  if(((z_31 != NULL) && (z_31 != t)))
    _fail(t);
  else
    z_31 = t;
  {
    ATerm c_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_18;
        t = k_109(t);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = c_18;
      }
    t = not_null(z_31);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((b_32 != NULL) && (b_32 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          b_32 = ATgetFirst((ATermList) t);
        if(((c_32 != NULL) && (c_32 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          c_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(z_31));
    if(((a_32 != NULL) && (a_32 != t)))
      _fail(t);
    else
      a_32 = t;
    t = term_a_16;
    if(((f_32 != NULL) && (f_32 != t)))
      _fail(t);
    else
      f_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_a_16, not_null(b_32));
    t = n_5(not_null(f_32), not_null(b_32), t);
    t = not_null(c_32);
    {
      ATerm v_32 (ATerm t)
      {
        ATerm j_18 = t;
        int o_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_18 = t;
            int r_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_32 = NULL;
                n_32 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_32;
                ;
                LocalPopChoice(r_18);
              }
            else
              {
                t = p_18;
                t = k_109(t);
                t = Cons_2_0(_id, v_32, t);
              }
            ;
            LocalPopChoice(o_18);
          }
        else
          {
            t = j_18;
            {
              ATerm q_32 = NULL,s_32 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_32 = ATgetFirst((ATermList) t);
                  s_32 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_32), (ATerm) ATmakeAppl(sym_Undefined_1, q_32));
            }
          }
        return(t);
      }
      t = v_32(t);
      if(((e_32 != NULL) && (e_32 != t)))
        _fail(t);
      else
        e_32 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(e_32)), (ATerm) ATmakeAppl(sym_Program_1, not_null(b_32)));
      if(((z_6 != NULL) && (z_6 != t)))
        _fail(t);
      else
        z_6 = t;
      t = SSLsetAnnotations(not_null(z_6), not_null(a_32));
    }
  }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm j_33 = NULL;
  j_33 = t;
  if(match_string(t, "--help"))
    {
      t = j_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_33;
        }
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  t = term_o_16;
  k_33 = t;
  t = term_z_13;
  l_33 = t;
  t = term_s_18;
  t = n_5(k_33, l_33, t);
  t = term_t_18;
  return(t);
}
ATerm s_7 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
  if(((e_33 != NULL) && (e_33 != t)))
    _fail(t);
  else
    e_33 = t;
  t = term_y_14;
  if(((g_33 != NULL) && (g_33 != t)))
    _fail(t);
  else
    g_33 = t;
  t = term_z_14;
  if(((h_33 != NULL) && (h_33 != t)))
    _fail(t);
  else
    h_33 = t;
  t = (ATerm) ATempty;
  if(((i_33 != NULL) && (i_33 != t)))
    _fail(t);
  else
    i_33 = t;
  t = SSL_table_put(not_null(g_33), not_null(h_33), not_null(i_33));
  t = not_null(e_33);
  {
    ATerm p_7 (ATerm t)
    {
      ATerm z_18 = t;
      int a_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_109(t);
          ;
          LocalPopChoice(a_19);
        }
      else
        {
          t = z_18;
          {
            ATerm d_19 = t;
            int e_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_7, r_7, s_7, t);
                ;
                LocalPopChoice(e_19);
              }
            else
              {
                t = d_19;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_7, t);
    {
      ATerm f_19 = t;
      int g_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_33 = NULL;
          s_33 = t;
          {
            ATerm i_19 = t;
            int j_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_13 = NULL;
                t = s_33;
                {
                  ATerm n_19 = t;
                  int o_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_16;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(o_19);
                    }
                  else
                    {
                      t = n_19;
                      t = fetch_1_0(u_7, t);
                    }
                  t = s_33;
                  t = default_system_usage_0_0(t);
                  t = term_p_8;
                  w_13 = t;
                  t = SSL_exit(w_13);
                }
                ;
                LocalPopChoice(j_19);
              }
            else
              {
                t = i_19;
                {
                  ATerm a_14 = NULL;
                  t = term_t_17;
                  t = get_config_0_0(t);
                  t = s_33;
                  t = default_system_about_0_0(t);
                  t = term_p_8;
                  a_14 = t;
                  t = SSL_exit(a_14);
                }
              }
          }
          ;
          LocalPopChoice(g_19);
        }
      else
        {
          t = f_19;
          {
            ATerm p_19 = t;
            int q_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
                ATerm v_7 (ATerm t)
                {
                  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,c_7 = NULL;
                  y_33 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      x_33 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(y_33);
                  w_33 = t;
                  t = x_33;
                  if(((c_33 != NULL) && (c_33 != t)))
                    _fail(t);
                  else
                    c_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, x_33);
                  c_7 = t;
                  t = SSLsetAnnotations(c_7, w_33);
                  return(t);
                }
                t = fetch_1_0(v_7, t);
                t = term_x_8;
                if(((u_33 != NULL) && (u_33 != t)))
                  _fail(t);
                else
                  u_33 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_33)), term_r_19);
                if(((v_33 != NULL) && (v_33 != t)))
                  _fail(t);
                else
                  v_33 = t;
                t = SSL_printnl(not_null(u_33), not_null(v_33));
                t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_33)), term_r_19));
                t = default_system_usage_0_0(t);
                t = term_q_8;
                if(((t_33 != NULL) && (t_33 != t)))
                  _fail(t);
                else
                  t_33 = t;
                t = SSL_exit(not_null(t_33));
                ;
                LocalPopChoice(q_19);
              }
            else
              {
                t = p_19;
              }
          }
        }
      if(((d_33 != NULL) && (d_33 != t)))
        _fail(t);
      else
        d_33 = t;
      t = term_y_14;
      if(((f_33 != NULL) && (f_33 != t)))
        _fail(t);
      else
        f_33 = t;
      t = SSL_table_destroy(not_null(f_33));
      t = not_null(d_33);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm m_107 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
  t = parse_options_1_0(j_107, t);
  d_34 = t;
  t = term_s_19;
  g_34 = t;
  t = SSL_table_create(g_34);
  t = term_s_19;
  e_34 = t;
  t = term_x_19;
  f_34 = t;
  t = SSL_table_put(e_34, f_34, d_34);
  t = d_34;
  t = l_107(t);
  {
    ATerm z_19 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_107, t);
        ;
        LocalPopChoice(c_20);
      }
    else
      {
        t = z_19;
        {
          ATerm d_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_107(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_20);
            }
          else
            {
              t = d_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm g_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = g_20;
      {
        ATerm o_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = o_20;
            {
              ATerm a_21 = t;
              int b_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(b_21);
                }
              else
                {
                  t = a_21;
                  {
                    ATerm d_21 = t;
                    int e_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(c_8, d_8, e_8, t);
                        ;
                        LocalPopChoice(e_21);
                      }
                    else
                      {
                        t = d_21;
                        {
                          ATerm f_21 = t;
                          int g_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(g_21);
                            }
                          else
                            {
                              t = f_21;
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
ATerm z_7 (ATerm t)
{
  t = input_1_0(f_8, t);
  return(t);
}
ATerm c_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm i_34 = NULL,j_34 = NULL;
  t = term_w_12;
  i_34 = t;
  t = term_z_13;
  j_34 = t;
  t = term_j_21;
  t = n_5(i_34, j_34, t);
  t = term_k_21;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = output_1_0(Stratego_warnings_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_7, default_usage_0_0, _id, z_7, t);
  return(t);
}
