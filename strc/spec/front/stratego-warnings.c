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
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_g_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_l_17;
ATerm term_v_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_y_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_s_14;
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
ATerm term_e_14;
ATerm term_d_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_y_10;
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
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING incorrect parameter passed to -W switch: ", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--warning", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("debug-arguments", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete-strategy-calls", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("maybe-unbound-variables", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_p_8);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_8);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym__2, term_p_14, term_b_14);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-W | --warning     Set warning level (-W all to switch all warnings on)", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym__2, term_z_14, term_a_15);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_u_17, term_b_14);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym__2, term_x_17, term_b_14);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_p_16, term_b_14);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_b_14);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm mk_warning_0_0 (ATerm);
ATerm b_0 (ATerm);
ATerm f_0 (ATerm);
ATerm n_0 (ATerm);
ATerm print_warnings_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm sdef_with_property_1_0 (ATerm b_71 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm u_4 (ATerm a_71 (ATerm), ATerm t_18, ATerm r_18, ATerm);
ATerm a_1 (ATerm);
ATerm d_1 (ATerm);
ATerm v_4 (ATerm n_18, ATerm o_18, ATerm p_18, ATerm);
ATerm n_6 (ATerm e_4, ATerm h_4, ATerm i_4, ATerm);
ATerm map_apply_1_0 (ATerm c_71 (ATerm), ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm l_1 (ATerm);
ATerm strategy_invokation_warning_1_0 (ATerm y_70 (ATerm), ATerm);
ATerm oncetd_1_0 (ATerm f_74 (ATerm), ATerm);
ATerm w_4 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm x_25, ATerm w_25, ATerm);
ATerm x_4 (ATerm w_82 (ATerm), ATerm t_25, ATerm s_25, ATerm);
ATerm foldr_3_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm);
ATerm r_1 (ATerm);
ATerm collect_om_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm);
ATerm w_1 (ATerm);
ATerm z_1 (ATerm);
ATerm strategy_argument_warning_1_0 (ATerm z_70 (ATerm), ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm debug_with_incorrect_string_0_0 (ATerm);
ATerm o_11 (ATerm g_11, ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm Warning_1_0 (ATerm g_71 (ATerm), ATerm);
ATerm filter_1_0 (ATerm z_85 (ATerm), ATerm);
ATerm fetch_elem_1_0 (ATerm e_79 (ATerm), ATerm);
ATerm listtd_1_0 (ATerm b_80 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm x_2 (ATerm);
ATerm Stratego_warnings_0_0 (ATerm);
ATerm a_5 (ATerm u_38, ATerm v_38, ATerm);
ATerm b_5 (ATerm i_42, ATerm j_42, ATerm);
ATerm d_5 (ATerm p_91 (ATerm), ATerm n_408, ATerm m_42, ATerm);
ATerm c_5 (ATerm e_42, ATerm f_42, ATerm);
ATerm o_3 (ATerm);
ATerm w_3 (ATerm);
ATerm output_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm f_17 (ATerm u_16, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm e_5 (ATerm k_42, ATerm);
ATerm f_5 (ATerm w_38, ATerm x_38, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_20 (ATerm c_18, ATerm);
ATerm e_20 (ATerm u_18, ATerm v_18, ATerm a_19, ATerm);
ATerm g_20 (ATerm j_19, ATerm k_19, ATerm m_19, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm z_95 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm i_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm n_5 (ATerm l_43, ATerm m_43, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm z_5 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm at_end_1_0 (ATerm i_79 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm w_24 (ATerm m_24, ATerm);
ATerm conc_0_0 (ATerm);
ATerm z_4 (ATerm r_43, ATerm q_43, ATerm);
ATerm l_5 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm stratego_warnings_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm g_5 (ATerm u_35, ATerm v_35, ATerm);
ATerm foldr_2_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm r_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_92 (ATerm), ATerm);
ATerm s_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm u_6 (ATerm);
ATerm need_help_1_0 (ATerm p_95 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm z_6 (ATerm);
ATerm c_7 (ATerm);
ATerm f_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm j_5 (ATerm k_33, ATerm l_33, ATerm);
ATerm debug_1_0 (ATerm n_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm s_78 (ATerm), ATerm);
ATerm g_7 (ATerm);
ATerm h_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm k_5 (ATerm a_50, ATerm b_50, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm o_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm q_57 (ATerm), ATerm r_57 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm s_97 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm parse_options_1_0 (ATerm r_97 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
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
        ATerm g_1 = NULL,h_1 = NULL,v_1 = NULL,a_2 = NULL;
        t = s_1;
        if(match_cons(t, sym_DebugWarning_1))
          {
            m_1 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSL_explode_string(m_1);
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_2), term_g_8), (ATerm) ATinsert(ATempty, term_g_8));
        t = conc_0_0(t);
        v_1 = t;
        t = SSL_implode_string(v_1);
        g_1 = t;
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_8), g_1), term_k_8), term_j_8), o_1), term_h_8);
        h_1 = t;
        t = SSL_concat_strings(h_1);
      }
    }
  else
    {
      ATerm o_2 = NULL;
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
      o_2 = t;
      t = SSL_concat_strings(o_2);
    }
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_p_8;
  return(t);
}
ATerm f_0 (ATerm t)
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
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 = NULL;
      j_2 = t;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_2;
      ;
      LocalPopChoice(u_8);
    }
  else
    {
      t = r_8;
      {
        ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,p_2 = NULL;
        t = map_1_0(mk_warning_0_0, t);
        l_2 = t;
        t = foldr_3_0(b_0, f_0, n_0, t);
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
ATerm sdef_with_property_1_0 (ATerm b_71 (ATerm), ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,v_2 = NULL,w_2 = NULL,y_2 = NULL,a_0 = NULL;
  ATerm r_0 (ATerm t)
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
  t = SSLgetAnnotations(y_2);
  if(((s_2 != NULL) && (s_2 != t)))
    _fail(t);
  else
    s_2 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, t_2, v_2, w_2);
  if(((a_0 != NULL) && (a_0 != t)))
    _fail(t);
  else
    a_0 = t;
  t = SSLsetAnnotations(a_0, s_2);
  t = w_2;
  t = collect_om_2_0(b_71, p_0, t);
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
    t = map_1_0(r_0, t);
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
  t = x_4(v_0, p_3, q_3, t);
  return(t);
}
ATerm v_0 (ATerm t)
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
ATerm u_4 (ATerm a_71 (ATerm), ATerm t_18, ATerm r_18, ATerm t)
{
  ATerm e_3 = NULL;
  t = a_71(t);
  e_3 = t;
  t = r_18;
  {
    ATerm t_0 (ATerm t)
    {
      ATerm f_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,e_0 = NULL,c_0 = NULL;
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
      if((e_3 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_SVar_1, l_3);
      c_0 = t;
      t = SSLsetAnnotations(c_0, k_3);
      m_3 = t;
      t = (ATerm) ATmakeAppl(sym_CallT_3, m_3, i_3, j_3);
      e_0 = t;
      t = SSLsetAnnotations(e_0, f_3);
      t = l_3;
      return(t);
    }
    t = collect_om_2_0(t_0, u_0, t);
    {
      ATerm e_9 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = e_9;
        }
      t = t_18;
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
  t = x_4(d_1, x_3, y_3, t);
  return(t);
}
ATerm d_1 (ATerm t)
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
ATerm v_4 (ATerm n_18, ATerm o_18, ATerm p_18, ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    ATerm s_3 = NULL,u_3 = NULL,v_3 = NULL;
    if(match_cons(t, sym_SDef_3))
      {
        u_3 = ATgetArgument(t, 0);
        {
          ATerm f_9 = ATgetArgument(t, 1);
        }
        v_3 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    {
      ATerm b_1 (ATerm t)
      {
        t = o_18;
        return(t);
      }
      t = u_4(b_1, u_3, v_3, t);
      {
        ATerm j_9 = t;
        if((PushChoice() == 0))
          {
            if((o_18 != t))
              {
                _fail(t);
              }
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
        t = (ATerm) ATmakeAppl(sym__3, s_3, o_18, p_18);
      }
    }
    return(t);
  }
  t = n_18;
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
              ATerm p_9 = (ATerm) ATgetNext((ATermList) m_9);
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
ATerm map_apply_1_0 (ATerm c_71 (ATerm), ATerm t)
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
          int u_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_6(s_5, t_5, r_5, t);
              ;
              LocalPopChoice(u_9);
            }
          else
            {
              t = r_9;
              {
                ATerm h_6 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, s_5, u_5);
                t = c_71(t);
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
  ATerm a_4 = NULL,b_4 = NULL;
  if(match_cons(t, sym__2))
    {
      a_4 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(i_1, a_4, b_4, t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  ATerm c_4 = NULL;
  if(match_cons(t, sym__2))
    {
      c_4 = ATgetArgument(t, 0);
      if((c_4 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm d_4 = NULL,f_4 = NULL,g_4 = NULL;
  if(match_cons(t, sym__2))
    {
      d_4 = ATgetArgument(t, 0);
      {
        ATerm v_9 = ATgetArgument(t, 1);
        if(match_cons(v_9, sym__2))
          {
            f_4 = ATgetArgument(v_9, 0);
            g_4 = ATgetArgument(v_9, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_4(d_4, f_4, g_4, t);
  return(t);
}
ATerm strategy_invokation_warning_1_0 (ATerm y_70 (ATerm), ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 = NULL,t_3 = NULL;
      b_7 = t;
      t = collect_om_2_0(y_70, f_1, t);
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
        t_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_7, t_3);
        t = map_apply_1_0(l_1, t);
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
ATerm oncetd_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm z_9 = t;
    int a_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_74(t);
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
ATerm w_4 (ATerm z_82 (ATerm), ATerm a_83 (ATerm), ATerm x_25, ATerm w_25, ATerm t)
{
  t = a_83(t);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm e_7 = NULL;
      e_7 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_25, e_7);
      t = z_82(t);
      return(t);
    }
    t = fetch_1_0(p_1, t);
    t = w_25;
  }
  return(t);
}
ATerm x_4 (ATerm w_82 (ATerm), ATerm t_25, ATerm s_25, ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm w_7 = NULL,x_7 = NULL,b_8 = NULL;
    w_7 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_25;
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
                ATerm q_1 (ATerm t)
                {
                  t = s_25;
                  return(t);
                }
                t = w_4(w_82, q_1, x_7, b_8, t);
                t = i_8(t);
              }
              ;
              LocalPopChoice(f_10);
            }
          else
            {
              t = b_10;
              {
                ATerm p_4 = NULL,s_4 = NULL,s_0 = NULL;
                t = SSLgetAnnotations(w_7);
                p_4 = t;
                t = b_8;
                t = i_8(t);
                s_4 = t;
                t = (ATerm) ATinsert(CheckATermList(s_4), x_7);
                s_0 = t;
                t = SSLsetAnnotations(s_0, p_4);
              }
            }
        }
      }
    return(t);
  }
  t = t_25;
  t = i_8(t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_84 (ATerm), ATerm y_84 (ATerm), ATerm z_84 (ATerm), ATerm t)
{
  ATerm s_8 = NULL,v_8 = NULL,w_8 = NULL;
  s_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_8;
      t = x_84(t);
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
      t = z_84(t);
      a_9 = t;
      t = w_8;
      t = foldr_3_0(x_84, y_84, z_84, t);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
      t = y_84(t);
    }
  return(t);
}
ATerm r_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm b_84 (ATerm), ATerm c_84 (ATerm), ATerm t)
{
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_9 = NULL;
      t = b_84(t);
      g_9 = t;
      t = (ATerm) ATinsert(ATempty, g_9);
      ;
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm a_6 = NULL,b_6 = NULL;
        ATerm t_1 (ATerm t)
        {
          t = collect_om_2_0(b_84, c_84, t);
          return(t);
        }
        if(((b_6 != NULL) && (b_6 != t)))
          _fail(t);
        else
          b_6 = t;
        t = SSL_explode_term(b_6);
        if(match_cons(t, sym__2))
          {
            ATerm k_10 = ATgetArgument(t, 0);
            if(((a_6 != NULL) && (a_6 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              a_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_6;
        t = foldr_3_0(r_1, c_84, t_1, t);
      }
    }
  return(t);
}
ATerm w_1 (ATerm t)
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
ATerm strategy_argument_warning_1_0 (ATerm z_70 (ATerm), ATerm t)
{
  t = collect_om_2_0(z_70, w_1, t);
  t = concat_0_0(t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = sdef_with_property_1_0(c_2, t);
  return(t);
}
ATerm c_2 (ATerm t)
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
  t = c_10;
  {
    ATerm w_10 = t;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL,e_10 = NULL,i_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,x_0 = NULL,w_0 = NULL;
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
        w_0 = t;
        t = SSLsetAnnotations(w_0, i_10);
        m_10 = t;
        t = (ATerm) ATmakeAppl(sym_Build_1, m_10);
        x_0 = t;
        t = SSLsetAnnotations(x_0, d_10);
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
        ATerm r_10 = NULL,s_10 = NULL,u_10 = NULL,y_0 = NULL;
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
        y_0 = t;
        t = SSLsetAnnotations(y_0, r_10);
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
  t = strategy_argument_warning_1_0(b_2, t);
  return(t);
}
ATerm o_11 (ATerm g_11, ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  t = term_x_8;
  k_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_11), term_y_10);
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
        ATerm b_11 = ATgetArgument(t, 1);
        if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
          {
            ATerm e_11 = ATgetFirst((ATermList) b_11);
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
              ATerm f_11 = (ATerm) ATgetNext((ATermList) b_11);
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
ATerm Warning_1_0 (ATerm g_71 (ATerm), ATerm t)
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
          t = g_71(t);
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
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_11;
              t = g_71(t);
              t = strategy_invokation_warning_1_0(f_2, t);
              ;
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
              t = o_11(m_11, t);
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
              t = o_11(m_11, t);
            }
        }
    }
  return(t);
}
ATerm filter_1_0 (ATerm z_85 (ATerm), ATerm t)
{
  ATerm k_12 = NULL,m_12 = NULL,n_12 = NULL;
  k_12 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_12;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_12 = ATgetFirst((ATermList) t);
          n_12 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_6 = NULL,t_6 = NULL,w_6 = NULL,c_1 = NULL;
            t = SSLgetAnnotations(k_12);
            l_6 = t;
            t = m_12;
            t = z_85(t);
            t_6 = t;
            t = n_12;
            t = filter_1_0(z_85, t);
            w_6 = t;
            t = (ATerm) ATinsert(CheckATermList(w_6), t_6);
            c_1 = t;
            t = SSLsetAnnotations(c_1, l_6);
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            t = n_12;
            t = filter_1_0(z_85, t);
          }
      }
    }
  return(t);
}
ATerm fetch_elem_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  ATerm q_12 = NULL;
  ATerm h_2 (ATerm t)
  {
    t = e_79(t);
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
ATerm listtd_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm o_13 (ATerm t)
  {
    ATerm h_13 = NULL,m_13 = NULL,n_13 = NULL;
    t = b_80(t);
    h_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_13;
      }
    else
      {
        ATerm s_7 = NULL,z_7 = NULL,e_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_13 = ATgetFirst((ATermList) t);
            n_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_13);
        s_7 = t;
        t = n_13;
        t = o_13(t);
        z_7 = t;
        t = (ATerm) ATinsert(CheckATermList(z_7), m_13);
        e_1 = t;
        t = SSLsetAnnotations(e_1, s_7);
      }
    return(t);
  }
  t = o_13(t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,m_14 = NULL;
  m_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_14 = ATgetFirst((ATermList) t);
      g_14 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_11 = t;
        int w_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_14 = NULL;
            t = g_14;
            {
              ATerm u_2 (ATerm t)
              {
                ATerm x_11 = t;
                if((PushChoice() == 0))
                  {
                    if((f_14 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_11;
                  }
                return(t);
              }
              t = filter_1_0(u_2, t);
              if(((u_14 != NULL) && (u_14 != t)))
                _fail(t);
              else
                u_14 = t;
              t = (ATerm) ATinsert(CheckATermList(u_14), f_14);
            }
            ;
            LocalPopChoice(w_11);
          }
        else
          {
            t = v_11;
            t = m_14;
          }
      }
    }
  else
    {
      t = m_14;
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
  ATerm c_14 = NULL;
  c_14 = t;
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
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_12), term_e_12), term_d_12);
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
            t = c_14;
            return(t);
          }
          t = Warning_1_0(g_3, t);
          return(t);
        }
        t = filter_1_0(d_3, t);
        t = concat_0_0(t);
        t = print_warnings_0_0(t);
        t = c_14;
      }
    }
  }
  return(t);
}
ATerm a_5 (ATerm u_38, ATerm v_38, ATerm t)
{
  ATerm h_15 = NULL;
  t = SSL_fputc(u_38, v_38);
  h_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_15);
  return(t);
}
ATerm b_5 (ATerm i_42, ATerm j_42, ATerm t)
{
  ATerm i_15 = NULL;
  t = SSL_write_term_to_stream_text(i_42, j_42);
  i_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_15);
  return(t);
}
ATerm d_5 (ATerm p_91 (ATerm), ATerm n_408, ATerm m_42, ATerm t)
{
  ATerm l_15 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_408, term_g_12);
  t = open_stream_0_0(t);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_15, m_42);
  t = p_91(t);
  t = fclose_0_0(t);
  t = m_42;
  return(t);
}
ATerm c_5 (ATerm e_42, ATerm f_42, ATerm t)
{
  ATerm n_15 = NULL;
  t = SSL_write_term_to_stream_baf(e_42, f_42);
  n_15 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_15);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      if(match_cons(h_12, sym_Stream_1))
        {
          q_15 = ATgetArgument(h_12, 0);
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
ATerm w_3 (ATerm t)
{
  ATerm s_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_12 = ATgetArgument(t, 0);
      if(match_cons(j_12, sym_Stream_1))
        {
          x_15 = ATgetArgument(j_12, 0);
        }
      else
        _fail(t);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(x_15, z_15, t);
  s_15 = t;
  t = term_l_12;
  v_15 = t;
  t = s_15;
  if(match_cons(t, sym_Stream_1))
    {
      w_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_12, s_15);
  t = a_5(v_15, w_15, t);
  return(t);
}
ATerm output_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL;
  t = y_95(t);
  p_15 = t;
  {
    ATerm o_12 = t;
    int p_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_12;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_12);
      }
    else
      {
        t = o_12;
        t = term_u_12;
      }
    o_15 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
    {
      ATerm v_12 = t;
      int w_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_12;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, o_15, p_15);
          LocalPopChoice(w_12);
          if(match_cons(t, sym__2))
            {
              ATerm y_12 = ATgetArgument(t, 0);
              ATerm z_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_5(o_3, o_15, p_15, t);
        }
      else
        {
          t = v_12;
          if(match_cons(t, sym__2))
            {
              ATerm a_13 = ATgetArgument(t, 0);
              ATerm b_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_5(w_3, o_15, p_15, t);
        }
    }
  }
  return(t);
}
ATerm f_17 (ATerm u_16, ATerm t)
{
  t = SSL_fclose(u_16);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  b_17 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_17 = ATgetArgument(t, 0);
      {
        ATerm c_13 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(a_17);
            ;
            LocalPopChoice(d_13);
          }
        else
          {
            t = c_13;
            t = f_17(b_17, t);
          }
      }
    }
  else
    {
      t = f_17(b_17, t);
    }
  return(t);
}
ATerm e_5 (ATerm k_42, ATerm t)
{
  t = SSL_read_term_from_stream(k_42);
  return(t);
}
ATerm f_5 (ATerm w_38, ATerm x_38, ATerm t)
{
  ATerm g_17 = NULL;
  t = SSL_fopen(w_38, x_38);
  g_17 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_17);
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
ATerm d_20 (ATerm c_18, ATerm t)
{
  ATerm i_18 = NULL;
  t = SSL_explode_term(c_18);
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_13) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_13 = ATgetArgument(t, 1);
        if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
          {
            i_18 = ATgetFirst((ATermList) f_13);
            {
              ATerm g_13 = (ATerm) ATgetNext((ATermList) f_13);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_18;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_18;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_18;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_18;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm e_20 (ATerm u_18, ATerm v_18, ATerm a_19, ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,h_19 = NULL,j_1 = NULL;
  t = SSLgetAnnotations(a_19);
  e_19 = t;
  t = u_18;
  if(match_cons(t, sym_Path_1))
    {
      h_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_19, v_18);
  j_1 = t;
  t = SSLsetAnnotations(j_1, e_19);
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(c_19, d_19, t);
  return(t);
}
ATerm g_20 (ATerm j_19, ATerm k_19, ATerm m_19, ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,w_19 = NULL,k_1 = NULL;
  t = SSLgetAnnotations(m_19);
  p_19 = t;
  t = SSL_is_string(j_19);
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_19, k_19);
  k_1 = t;
  t = SSLsetAnnotations(k_1, p_19);
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(n_19, o_19, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,c_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      ATerm j_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  y_19 = t;
  if(match_cons(t, sym__2))
    {
      z_19 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_20(y_19, t);
            ;
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            {
              ATerm p_13 = t;
              int q_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_20(z_19, c_20, y_19, t);
                  ;
                  LocalPopChoice(q_13);
                }
              else
                {
                  t = p_13;
                  t = g_20(z_19, c_20, y_19, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_20(y_19, t);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_r_13;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_20 = NULL,j_20 = NULL,k_20 = NULL;
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_20 = NULL;
      r_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_20, term_u_13);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      t = debug_1_0(j_4, t);
      _fail(t);
    }
  j_20 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_5(k_20, t);
  h_20 = t;
  t = j_20;
  t = fclose_0_0(t);
  t = h_20;
  return(t);
}
ATerm input_1_0 (ATerm z_95 (ATerm), ATerm t)
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_y_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      t = term_a_14;
    }
  t = ReadFromFile_0_0(t);
  t = z_95(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm t_20 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL,e_21 = NULL;
  t_20 = t;
  t = term_b_14;
  t = whoami_0_0(t);
  b_21 = t;
  t = term_x_8;
  d_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_14), b_21), term_d_14);
  e_21 = t;
  t = SSL_printnl(d_21, e_21);
  t = term_q_8;
  c_21 = t;
  t = SSL_exit(c_21);
  t = t_20;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm j_21 = NULL;
  j_21 = t;
  if(match_string(t, "-k"))
    {
      t = j_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_21;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  t = SSL_string_to_int(k_21);
  l_21 = t;
  t = term_h_14;
  m_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_14, l_21);
  t = n_5(m_21, l_21, t);
  t = k_21;
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_i_14;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, l_4, m_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm p_21 = NULL;
  p_21 = t;
  if(match_string(t, "-S"))
    {
      t = p_21;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_21;
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  t = term_j_14;
  s_21 = t;
  t = term_p_8;
  t_21 = t;
  t = term_k_14;
  t = n_5(s_21, t_21, t);
  t = term_l_14;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  u_21 = t;
  t = SSL_string_to_int(u_21);
  v_21 = t;
  t = term_j_14;
  w_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_14, v_21);
  t = n_5(w_21, v_21, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_21);
  return(t);
}
ATerm i_5 (ATerm t)
{
  t = term_o_14;
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
  ATerm x_21 = NULL,y_21 = NULL;
  t = term_p_14;
  x_21 = t;
  t = term_b_14;
  y_21 = t;
  t = term_q_14;
  t = n_5(x_21, y_21, t);
  t = term_r_14;
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = term_s_14;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_4, o_4, q_4, t);
      ;
      LocalPopChoice(v_14);
    }
  else
    {
      t = t_14;
      {
        ATerm w_14 = t;
        int x_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_4, t_4, i_5, t);
            ;
            LocalPopChoice(x_14);
          }
        else
          {
            t = w_14;
            t = Option_3_0(m_5, o_5, q_5, t);
          }
      }
    }
  return(t);
}
ATerm n_5 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm a_22 = NULL;
  t = term_y_14;
  a_22 = t;
  t = SSL_table_put(a_22, l_43, m_43);
  t = (ATerm) ATmakeAppl(sym__3, term_y_14, l_43, m_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
      t = term_b_14;
      t = h_0(t);
      f_22 = t;
      t = term_z_14;
      g_22 = t;
      t = term_a_15;
      h_22 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, f_22);
      t = l_5(g_22, h_22, f_22, t);
      _fail(t);
    }
  else
    {
      ATerm k_22 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_22 = ATgetFirst((ATermList) t);
          e_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_22;
      t = d_0(t);
      t = term_b_14;
      t = g_0(t);
      k_22 = t;
      t = (ATerm) ATinsert(CheckATermList(e_22), k_22);
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  if(match_string(t, "-o"))
    {
      t = q_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_22;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL;
  r_22 = t;
  t = term_r_12;
  s_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_12, r_22);
  t = n_5(s_22, r_22, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_22);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_b_15;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_5, w_5, x_5, t);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm x_22 = NULL;
  x_22 = t;
  if(match_string(t, "-i"))
    {
      t = x_22;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_22;
    }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm a_23 = NULL,d_23 = NULL;
  a_23 = t;
  t = term_y_13;
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_13, a_23);
  t = n_5(d_23, a_23, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_23);
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_5, c_6, d_6, t);
  return(t);
}
ATerm at_end_1_0 (ATerm i_79 (ATerm), ATerm t)
{
  ATerm i_24 (ATerm t)
  {
    ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
    h_24 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_24 = ATgetFirst((ATermList) t);
        g_24 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm t_8 = NULL,c_9 = NULL,y_1 = NULL;
          t = SSLgetAnnotations(h_24);
          t_8 = t;
          t = g_24;
          t = i_24(t);
          c_9 = t;
          t = (ATerm) ATinsert(CheckATermList(c_9), f_24);
          y_1 = t;
          t = SSLsetAnnotations(y_1, t_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_24;
        t = i_79(t);
      }
    return(t);
  }
  t = i_24(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
  h_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_23;
    }
  else
    {
      ATerm e_6 (ATerm t)
      {
        t = not_null(j_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((i_23 != NULL) && (i_23 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            i_23 = ATgetFirst((ATermList) t);
          if(((j_23 != NULL) && (j_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_23;
      t = at_end_1_0(e_6, t);
    }
  return(t);
}
ATerm w_24 (ATerm m_24, ATerm t)
{
  ATerm n_24 = NULL;
  t = SSL_explode_term(m_24);
  if(match_cons(t, sym__2))
    {
      ATerm d_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_24;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_24 = NULL,q_24 = NULL,t_24 = NULL;
  t_24 = t;
  if(match_cons(t, sym__2))
    {
      p_24 = ATgetArgument(t, 0);
      q_24 = ATgetArgument(t, 1);
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_6 (ATerm t)
            {
              t = q_24;
              return(t);
            }
            t = p_24;
            t = at_end_1_0(g_6, t);
            ;
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            t = w_24(t_24, t);
          }
      }
    }
  else
    {
      t = w_24(t_24, t);
    }
  return(t);
}
ATerm z_4 (ATerm r_43, ATerm q_43, ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  t = r_43;
  {
    ATerm g_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0_0(t);
        ;
        LocalPopChoice(j_15);
      }
    else
      {
        t = g_15;
        t = (ATerm) ATempty;
      }
    y_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_43, y_24);
    t = conc_0_0(t);
    x_24 = t;
    t = term_y_14;
    z_24 = t;
    t = SSL_table_put(z_24, r_43, x_24);
    t = (ATerm) ATmakeAppl(sym__3, term_y_14, r_43, x_24);
  }
  return(t);
}
ATerm l_5 (ATerm j_48, ATerm k_48, ATerm i_48, ATerm t)
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
  {
    ATerm k_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_15 = ATgetArgument(t, 0);
            ATerm u_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_48, k_48);
        t = k_5(j_48, k_48, t);
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = k_15;
        t = (ATerm) ATempty;
      }
    c_25 = t;
    t = (ATerm) ATinsert(CheckATermList(c_25), i_48);
    d_25 = t;
    t = SSL_table_put(j_48, k_48, d_25);
    t = b_25;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL;
      t = term_b_14;
      t = m_0(t);
      o_25 = t;
      t = term_z_14;
      p_25 = t;
      t = term_a_15;
      q_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, o_25);
      t = l_5(p_25, q_25, o_25, t);
      _fail(t);
    }
  else
    {
      ATerm z_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_25 = ATgetFirst((ATermList) t);
          l_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_25 = ATgetFirst((ATermList) t);
          n_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_25;
      t = k_0(t);
      t = m_25;
      t = l_0(t);
      z_25 = t;
      t = (ATerm) ATinsert(CheckATermList(n_25), z_25);
    }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  if(match_string(t, "--warning"))
    {
      t = b_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-W", 0, ATtrue)))
        _fail(t);
      t = b_26;
    }
  return(t);
}
ATerm j_6 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  t = term_a_12;
  d_26 = t;
  t = (ATerm) ATinsert(ATempty, c_26);
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_12, (ATerm) ATinsert(ATempty, c_26));
  t = z_4(d_26, e_26, t);
  t = term_b_14;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_y_15;
  return(t);
}
ATerm stratego_warnings_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_6, j_6, k_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_14;
  t = whoami_0_0(t);
  f_26 = t;
  t = term_x_8;
  h_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_16), f_26);
  i_26 = t;
  t = SSL_printnl(h_26, i_26);
  t = term_q_8;
  g_26 = t;
  t = SSL_exit(g_26);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_16;
  t = get_config_0_0(t);
  return(t);
}
ATerm g_5 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_35, v_35);
      ;
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      t = SSL_addr(u_35, v_35);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm t)
{
  ATerm k_26 = NULL,l_26 = NULL,m_26 = NULL;
  k_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_26;
      t = v_84(t);
    }
  else
    {
      ATerm p_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_26 = ATgetFirst((ATermList) t);
          m_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_26;
      t = foldr_2_0(v_84, w_84, t);
      p_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_26, p_26);
      t = w_84(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_p_8;
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL;
  if(match_cons(t, sym__2))
    {
      s_9 = ATgetArgument(t, 0);
      t_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(s_9, t_9, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_26 = NULL,n_9 = NULL,o_9 = NULL;
  t = times_0_0(t);
  o_9 = t;
  t = SSL_explode_term(o_9);
  if(match_cons(t, sym__2))
    {
      ATerm e_16 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_9;
  t = foldr_2_0(o_6, r_6, t);
  s_26 = t;
  t = SSL_TicksToSeconds(s_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_27;
        if((i_27 != t))
          {
            _fail(t);
          }
        t = h_27;
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = f_16;
        t = (ATerm) ATmakeAppl(sym__2, i_27, j_27);
        {
          ATerm h_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_27, j_27);
              ;
              LocalPopChoice(i_16);
            }
          else
            {
              t = h_16;
              t = SSL_gtr(i_27, j_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_27, j_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm n_27 = NULL;
  n_27 = t;
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_27 = NULL;
        t = term_j_14;
        t = get_config_0_0(t);
        p_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_27, term_q_8);
        t = geq_0_0(t);
        t = n_27;
        t = z_92(t);
        ;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
        t = n_27;
      }
  }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,u_27 = NULL,v_27 = NULL;
  t = run_time_0_0(t);
  r_27 = t;
  t = term_b_14;
  t = whoami_0_0(t);
  s_27 = t;
  t = term_x_8;
  u_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_16), r_27), term_l_16), s_27);
  v_27 = t;
  t = SSL_printnl(u_27, v_27);
  t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_16), r_27), term_l_16), s_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_8;
  w_27 = t;
  t = SSL_exit(w_27);
  return(t);
}
ATerm u_6 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  f_28 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_28;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_28 = ATgetArgument(t, 0);
          {
            ATerm j_10 = NULL,d_2 = NULL;
            t = SSLgetAnnotations(f_28);
            j_10 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_28);
            d_2 = t;
            t = SSLsetAnnotations(d_2, j_10);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_28;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_95 (ATerm), ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
      t = fetch_1_0(u_6, t);
    }
  t = p_95(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_28 = ATgetFirst((ATermList) t);
      j_28 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_28 = NULL,o_28 = NULL;
        ATerm x_6 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_28)), not_null(o_28));
          return(t);
        }
        t = j_28;
        t = j_0(t);
        if(((n_28 != NULL) && (n_28 != t)))
          _fail(t);
        else
          n_28 = t;
        t = i_28;
        t = i_0(t);
        if(((o_28 != NULL) && (o_28 != t)))
          _fail(t);
        else
          o_28 = t;
        t = j_28;
        t = reverse_acc_2_0(i_0, x_6, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_14;
      t = j_0(t);
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,f_6 = NULL;
  u_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_28);
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_28);
  f_6 = t;
  t = SSLsetAnnotations(f_6, s_28);
  return(t);
}
ATerm c_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_7 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_28), term_q_16);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  ATerm r_16 = t;
  int s_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_16;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_16);
    }
  else
    {
      t = r_16;
      t = fetch_1_0(z_6, t);
    }
  t = term_t_16;
  t = echo_0_0(t);
  t = term_z_14;
  q_28 = t;
  t = term_a_15;
  r_28 = t;
  t = term_v_16;
  t = k_5(q_28, r_28, t);
  t = reverse_acc_2_0(_id, c_7, t);
  t = map_1_0(f_7, t);
  return(t);
}
ATerm fetch_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm t_29 (ATerm t)
  {
    ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL;
    q_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_29 = ATgetFirst((ATermList) t);
        s_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_16 = t;
      int x_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_10 = NULL,a_11 = NULL,p_6 = NULL;
          t = SSLgetAnnotations(q_29);
          x_10 = t;
          t = r_29;
          t = c_79(t);
          a_11 = t;
          t = (ATerm) ATinsert(CheckATermList(s_29), a_11);
          p_6 = t;
          t = SSLsetAnnotations(p_6, x_10);
          ;
          LocalPopChoice(x_16);
        }
      else
        {
          t = w_16;
          {
            ATerm p_11 = NULL,s_11 = NULL,q_6 = NULL;
            t = SSLgetAnnotations(q_29);
            p_11 = t;
            t = s_29;
            t = t_29(t);
            s_11 = t;
            t = (ATerm) ATinsert(CheckATermList(s_11), r_29);
            q_6 = t;
            t = SSLsetAnnotations(q_6, p_11);
          }
        }
    }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_29;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_17 = ATgetFirst((ATermList) t);
                ATerm d_17 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_29;
          }
        ;
        LocalPopChoice(z_16);
      }
    else
      {
        t = y_16;
        t = (ATerm) ATinsert(ATempty, x_29);
      }
    y_29 = t;
    t = term_u_12;
    z_29 = t;
    t = SSL_printnl(z_29, y_29);
    t = x_29;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_16;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm j_5 (ATerm k_33, ATerm l_33, ATerm t)
{
  t = SSL_strcat(k_33, l_33);
  return(t);
}
ATerm debug_1_0 (ATerm n_91 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  d_30 = t;
  t = n_91(t);
  e_30 = t;
  t = term_x_8;
  f_30 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_30), e_30);
  g_30 = t;
  t = SSL_printnl(f_30, g_30);
  t = d_30;
  return(t);
}
ATerm map_1_0 (ATerm s_78 (ATerm), ATerm t)
{
  ATerm v_30 (ATerm t)
  {
    ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL;
    s_30 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_30;
      }
    else
      {
        ATerm i_12 = NULL,s_12 = NULL,t_12 = NULL,v_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_30 = ATgetFirst((ATermList) t);
            u_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_30);
        i_12 = t;
        t = t_30;
        t = s_78(t);
        s_12 = t;
        t = u_30;
        t = v_30(t);
        t_12 = t;
        t = (ATerm) ATinsert(CheckATermList(t_12), s_12);
        v_6 = t;
        t = SSLsetAnnotations(v_6, i_12);
      }
    return(t);
  }
  t = v_30(t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm e_17 = t;
  int h_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(h_17);
    }
  else
    {
      t = e_17;
    }
  return(t);
}
ATerm h_7 (ATerm t)
{
  t = term_l_17;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_31 = NULL;
      d_31 = t;
      t = SSL_is_string(d_31);
      ;
      LocalPopChoice(n_17);
    }
  else
    {
      t = m_17;
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(g_7, t);
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            {
              ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL;
              j_31 = t;
              if(match_cons(t, sym_Path_1))
                {
                  k_31 = ATgetArgument(t, 0);
                  t = k_31;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      k_31 = ATgetArgument(t, 0);
                      t = k_31;
                      {
                        ATerm q_17 = t;
                        int r_17 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(r_17);
                          }
                        else
                          {
                            t = q_17;
                            t = debug_1_0(h_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm p_31 = NULL,q_31 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          k_31 = ATgetArgument(t, 0);
                          l_31 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = k_31;
                      t = eval_config_0_0(t);
                      p_31 = t;
                      t = l_31;
                      t = eval_config_0_0(t);
                      q_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, p_31, q_31);
                      t = j_5(p_31, q_31, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm k_5 (ATerm a_50, ATerm b_50, ATerm t)
{
  t = SSL_table_get(a_50, b_50);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  u_31 = t;
  t = term_y_14;
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_14, u_31);
  t = k_5(v_31, u_31, t);
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_31 = NULL,x_31 = NULL;
        t = eval_config_0_0(t);
        w_31 = t;
        t = term_y_14;
        x_31 = t;
        t = SSL_table_put(x_31, u_31, w_31);
        t = w_31;
        ;
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
      }
  }
  return(t);
}
ATerm i_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_7 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  t = term_u_17;
  a_32 = t;
  t = term_b_14;
  b_32 = t;
  t = term_v_17;
  t = n_5(a_32, b_32, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_w_17;
  return(t);
}
ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  t = term_u_17;
  e_32 = t;
  t = term_b_14;
  f_32 = t;
  t = term_v_17;
  t = n_5(e_32, f_32, t);
  t = term_x_17;
  c_32 = t;
  t = term_b_14;
  d_32 = t;
  t = term_y_17;
  t = n_5(c_32, d_32, t);
  t = term_z_17;
  return(t);
}
ATerm o_7 (ATerm t)
{
  t = term_a_18;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_7, j_7, k_7, t);
      ;
      LocalPopChoice(d_18);
    }
  else
    {
      t = b_18;
      t = Option_3_0(l_7, n_7, o_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm q_57 (ATerm), ATerm r_57 (ATerm), ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,y_6 = NULL;
  l_32 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_32 = ATgetFirst((ATermList) t);
      i_32 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_32);
  g_32 = t;
  t = h_32;
  t = q_57(t);
  j_32 = t;
  t = i_32;
  t = r_57(t);
  k_32 = t;
  t = (ATerm) ATinsert(CheckATermList(k_32), j_32);
  y_6 = t;
  t = SSLsetAnnotations(y_6, g_32);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_97 (ATerm), ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,v_32 = NULL,w_32 = NULL,a_7 = NULL;
  q_32 = t;
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_18;
        t = s_97(t);
        ;
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
      }
    t = q_32;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_32 = ATgetFirst((ATermList) t);
        t_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(q_32);
    r_32 = t;
    t = term_b_16;
    w_32 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_16, s_32);
    t = n_5(w_32, s_32, t);
    t = t_32;
    {
      ATerm g_33 (ATerm t)
      {
        ATerm h_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_18 = t;
            int l_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_32 = NULL;
                z_32 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_32;
                ;
                LocalPopChoice(l_18);
              }
            else
              {
                t = k_18;
                t = s_97(t);
                t = Cons_2_0(_id, g_33, t);
              }
            ;
            LocalPopChoice(j_18);
          }
        else
          {
            t = h_18;
            {
              ATerm c_33 = NULL,d_33 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_33 = ATgetFirst((ATermList) t);
                  d_33 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_33), (ATerm) ATmakeAppl(sym_Undefined_1, c_33));
            }
          }
        return(t);
      }
      t = g_33(t);
      if(((v_32 != NULL) && (v_32 != t)))
        _fail(t);
      else
        v_32 = t;
      t = (ATerm) ATinsert(CheckATermList(v_32), (ATerm) ATmakeAppl(sym_Program_1, s_32));
      if(((a_7 != NULL) && (a_7 != t)))
        _fail(t);
      else
        a_7 = t;
      t = SSLsetAnnotations(a_7, r_32);
    }
  }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm w_33 = NULL;
  w_33 = t;
  if(match_string(t, "--help"))
    {
      t = w_33;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_33;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_33;
        }
    }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  t = term_p_16;
  x_33 = t;
  t = term_b_14;
  y_33 = t;
  t = term_m_18;
  t = n_5(x_33, y_33, t);
  t = term_q_18;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_s_18;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL;
  p_33 = t;
  t = term_z_14;
  t_33 = t;
  t = term_a_15;
  u_33 = t;
  t = (ATerm) ATempty;
  v_33 = t;
  t = SSL_table_put(t_33, u_33, v_33);
  t = p_33;
  {
    ATerm p_7 (ATerm t)
    {
      ATerm w_18 = t;
      int x_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_97(t);
          ;
          LocalPopChoice(x_18);
        }
      else
        {
          t = w_18;
          {
            ATerm y_18 = t;
            int z_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(q_7, r_7, t_7, t);
                ;
                LocalPopChoice(z_18);
              }
            else
              {
                t = y_18;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_7, t);
    {
      ATerm b_19 = t;
      int f_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_34 = NULL;
          f_34 = t;
          {
            ATerm g_19 = t;
            int i_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_13 = NULL;
                t = f_34;
                {
                  ATerm l_19 = t;
                  int q_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_p_16;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_19);
                    }
                  else
                    {
                      t = l_19;
                      t = fetch_1_0(u_7, t);
                    }
                  t = f_34;
                  t = default_system_usage_0_0(t);
                  t = term_p_8;
                  v_13 = t;
                  t = SSL_exit(v_13);
                }
                ;
                LocalPopChoice(i_19);
              }
            else
              {
                t = g_19;
                {
                  ATerm z_13 = NULL;
                  t = term_u_17;
                  t = get_config_0_0(t);
                  t = f_34;
                  t = default_system_about_0_0(t);
                  t = term_p_8;
                  z_13 = t;
                  t = SSL_exit(z_13);
                }
              }
          }
          ;
          LocalPopChoice(f_19);
        }
      else
        {
          t = b_19;
          {
            ATerm r_19 = t;
            int s_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL;
                ATerm v_7 (ATerm t)
                {
                  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_7 = NULL;
                  l_34 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      k_34 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(l_34);
                  j_34 = t;
                  t = k_34;
                  if(((n_33 != NULL) && (n_33 != t)))
                    _fail(t);
                  else
                    n_33 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, k_34);
                  m_7 = t;
                  t = SSLsetAnnotations(m_7, j_34);
                  return(t);
                }
                t = fetch_1_0(v_7, t);
                t = term_x_8;
                if(((h_34 != NULL) && (h_34 != t)))
                  _fail(t);
                else
                  h_34 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_33)), term_t_19);
                if(((i_34 != NULL) && (i_34 != t)))
                  _fail(t);
                else
                  i_34 = t;
                t = SSL_printnl(h_34, i_34);
                t = (ATerm) ATmakeAppl(sym__2, term_x_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_33)), term_t_19));
                t = default_system_usage_0_0(t);
                t = term_q_8;
                if(((g_34 != NULL) && (g_34 != t)))
                  _fail(t);
                else
                  g_34 = t;
                t = SSL_exit(g_34);
                ;
                LocalPopChoice(s_19);
              }
            else
              {
                t = r_19;
              }
          }
        }
      if(((o_33 != NULL) && (o_33 != t)))
        _fail(t);
      else
        o_33 = t;
      t = term_z_14;
      if(((q_33 != NULL) && (q_33 != t)))
        _fail(t);
      else
        q_33 = t;
      t = SSL_table_destroy(q_33);
      t = o_33;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
  t = parse_options_1_0(r_95, t);
  q_34 = t;
  t = term_u_19;
  t_34 = t;
  t = SSL_table_create(t_34);
  t = term_u_19;
  r_34 = t;
  t = term_v_19;
  s_34 = t;
  t = SSL_table_put(r_34, s_34, q_34);
  t = q_34;
  t = t_95(t);
  {
    ATerm x_19 = t;
    int a_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_95, t);
        ;
        LocalPopChoice(a_20);
      }
    else
      {
        t = x_19;
        {
          ATerm b_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_95(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_20);
            }
          else
            {
              t = b_20;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm i_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = stratego_warnings_options_0_0(t);
      ;
      LocalPopChoice(l_20);
    }
  else
    {
      t = i_20;
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            ;
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
            {
              ATerm o_20 = t;
              int p_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  ;
                  LocalPopChoice(p_20);
                }
              else
                {
                  t = o_20;
                  {
                    ATerm q_20 = t;
                    int s_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(c_8, d_8, e_8, t);
                        ;
                        LocalPopChoice(s_20);
                      }
                    else
                      {
                        t = q_20;
                        {
                          ATerm u_20 = t;
                          int v_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              ;
                              LocalPopChoice(v_20);
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
ATerm a_8 (ATerm t)
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
  ATerm v_34 = NULL,w_34 = NULL;
  t = term_x_12;
  v_34 = t;
  t = term_b_14;
  w_34 = t;
  t = term_w_20;
  t = n_5(v_34, w_34, t);
  t = term_x_20;
  return(t);
}
ATerm e_8 (ATerm t)
{
  t = term_y_20;
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = output_1_0(Stratego_warnings_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_7, default_usage_0_0, _id, a_8, t);
  return(t);
}
