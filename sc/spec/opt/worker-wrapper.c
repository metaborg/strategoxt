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
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Op_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SVar_1;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_ScopeDefault_1;
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefT_4;
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
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_q_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_f_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_s_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_u_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_b_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_s_12;
ATerm term_o_12;
ATerm term_w_11;
ATerm term_q_11;
ATerm term_n_11;
ATerm term_h_11;
ATerm term_d_11;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
void init_constant_terms (void)
{
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Sort_2, term_m_10, (ATerm) ATempty);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_10);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym__2, term_e_13, term_f_13);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_p_13, term_x_12);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_y_13, term_z_13);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_h_16, term_x_12);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_k_16, term_x_12);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_x_12);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_x_12);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm new_0_0 (ATerm);
ATerm m_4 (ATerm g_96 (ATerm), ATerm v_37, ATerm u_37, ATerm);
ATerm genzip_4_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm);
ATerm e_0 (ATerm);
ATerm l_0 (ATerm);
ATerm n_0 (ATerm);
ATerm q_4 (ATerm h_589, ATerm m_589, ATerm x_64, ATerm);
ATerm while_not_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm c_7 (ATerm m_3, ATerm o_3, ATerm p_3, ATerm);
ATerm x_0 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm tboundin_3_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm c_1 (ATerm);
ATerm d_1 (ATerm);
ATerm f_1 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm n_1 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm w_4 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm b_38, ATerm a_38, ATerm);
ATerm x_4 (ATerm l_96 (ATerm), ATerm x_37, ATerm w_37, ATerm);
ATerm v_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm e_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm free_vars_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm worker_wrapper_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_92 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm f_24 (ATerm x_23, ATerm);
ATerm conc_0_0 (ATerm);
ATerm foldr_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm k_3 (ATerm);
ATerm worker_wrapper_spec_0_0 (ATerm);
ATerm y_4 (ATerm w_50, ATerm x_50, ATerm);
ATerm z_4 (ATerm k_54, ATerm l_54, ATerm);
ATerm b_5 (ATerm y_104 (ATerm), ATerm r_433, ATerm o_54, ATerm);
ATerm a_5 (ATerm g_54, ATerm h_54, ATerm);
ATerm n_3 (ATerm);
ATerm q_3 (ATerm);
ATerm output_1_0 (ATerm h_109 (ATerm), ATerm);
ATerm x_26 (ATerm o_26, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm c_5 (ATerm m_54, ATerm);
ATerm d_5 (ATerm y_50, ATerm z_50, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_29 (ATerm i_27, ATerm);
ATerm f_29 (ATerm m_27, ATerm n_27, ATerm o_27, ATerm);
ATerm g_29 (ATerm f_28, ATerm i_28, ATerm l_28, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm i_109 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm t_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm l_5 (ATerm n_55, ATerm o_55, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm j_5 (ATerm l_60, ATerm m_60, ATerm k_60, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm e_5 (ATerm w_47, ATerm x_47, ATerm);
ATerm foldr_2_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_106 (ATerm), ATerm);
ATerm r_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_5 (ATerm);
ATerm need_help_1_0 (ATerm y_108 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm r_92 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_5 (ATerm m_45, ATerm n_45, ATerm);
ATerm debug_1_0 (ATerm w_104 (ATerm), ATerm);
ATerm map_1_0 (ATerm h_92 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm i_5 (ATerm c_62, ATerm d_62, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm a_6 (ATerm);
ATerm c_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm h_6 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_111 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm parse_options_1_0 (ATerm a_111 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm a_7 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm m_4 (ATerm g_96 (ATerm), ATerm v_37, ATerm u_37, ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm w_0 = NULL,z_0 = NULL,b_1 = NULL;
    w_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_0;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_0 = ATgetFirst((ATermList) t);
            b_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_7 = t;
          int j_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_0;
              {
                ATerm c_0 (ATerm t)
                {
                  t = not_null(u_37);
                  return(t);
                }
                t = w_4(g_96, c_0, not_null(z_0), not_null(b_1), t);
                t = e_1(t);
              }
              ;
              LocalPopChoice(j_7);
            }
          else
            {
              t = g_7;
              {
                ATerm p_0 = NULL,a_1 = NULL,k_0 = NULL;
                t = SSLgetAnnotations(w_0);
                p_0 = t;
                t = b_1;
                t = e_1(t);
                a_1 = t;
                t = (ATerm) ATinsert(CheckATermList(a_1), z_0);
                k_0 = t;
                t = SSLsetAnnotations(k_0, p_0);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(v_37);
  t = e_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm m_94 (ATerm), ATerm n_94 (ATerm), ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    ATerm k_7 = t;
    int m_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_94(t);
        ;
        LocalPopChoice(m_7);
      }
    else
      {
        t = k_7;
        {
          ATerm h_1 = NULL,i_1 = NULL,m_1 = NULL,o_1 = NULL,r_1 = NULL,s_1 = NULL,m_0 = NULL;
          t = l_94(t);
          s_1 = t;
          if(match_cons(t, sym__2))
            {
              i_1 = ATgetArgument(t, 0);
              m_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_1);
          h_1 = t;
          t = i_1;
          t = n_94(t);
          o_1 = t;
          t = m_1;
          t = x_1(t);
          r_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_1, r_1);
          m_0 = t;
          t = SSLsetAnnotations(m_0, h_1);
          t = m_94(t);
        }
      }
    return(t);
  }
  t = x_1(t);
  return(t);
}
ATerm e_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_7 = ATgetArgument(t, 0);
      if(((ATgetType(o_7) != AT_LIST) || !(ATisEmpty(o_7))))
        _fail(t);
      {
        ATerm u_7 = ATgetArgument(t, 1);
        if(((ATgetType(u_7) != AT_LIST) || !(ATisEmpty(u_7))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
        {
          j_2 = ATgetFirst((ATermList) v_7);
          k_2 = (ATerm) ATgetNext((ATermList) v_7);
        }
      else
        _fail(t);
      {
        ATerm w_7 = ATgetArgument(t, 1);
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            l_2 = ATgetFirst((ATermList) w_7);
            m_2 = (ATerm) ATgetNext((ATermList) w_7);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_2, l_2), (ATerm) ATmakeAppl(sym__2, k_2, m_2));
  return(t);
}
ATerm n_0 (ATerm t)
{
  ATerm n_2 = NULL,p_2 = NULL;
  if(match_cons(t, sym__2))
    {
      n_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_2), n_2);
  return(t);
}
ATerm q_4 (ATerm h_589, ATerm m_589, ATerm x_64, ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL;
  t = SSL_explode_term(m_589);
  if(match_cons(t, sym__2))
    {
      c_2 = ATgetArgument(t, 0);
      f_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_589);
  if(match_cons(t, sym__2))
    {
      if((c_2 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_2, f_2);
  t = genzip_4_0(e_0, l_0, n_0, _id, t);
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_2, x_64);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_86 (ATerm), ATerm i_86 (ATerm), ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm z_7 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_86(t);
        ;
        LocalPopChoice(b_8);
      }
    else
      {
        t = z_7;
        t = i_86(t);
        t = s_2(t);
      }
    return(t);
  }
  t = s_2(t);
  return(t);
}
ATerm for_3_0 (ATerm k_86 (ATerm), ATerm l_86 (ATerm), ATerm m_86 (ATerm), ATerm t)
{
  t = k_86(t);
  t = while_not_2_0(l_86, m_86, t);
  return(t);
}
ATerm o_0 (ATerm t)
{
  ATerm e_3 = NULL;
  e_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, e_3);
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,l_3 = NULL,q_0 = NULL;
  l_3 = t;
  if(match_cons(t, sym__2))
    {
      g_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_3);
  f_3 = t;
  t = h_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_3, h_3);
  q_0 = t;
  t = SSLsetAnnotations(q_0, f_3);
  return(t);
}
ATerm t_0 (ATerm t)
{
  ATerm o_4 = NULL,r_4 = NULL,v_4 = NULL,k_5 = NULL,o_5 = NULL;
  o_4 = t;
  if(match_cons(t, sym__2))
    {
      r_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_5 = ATgetFirst((ATermList) t);
      o_5 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm c_8 = t;
        int d_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_7(r_4, v_4, o_4, t);
            ;
            LocalPopChoice(d_8);
          }
        else
          {
            t = c_8;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_4), k_5), o_5);
          }
      }
    }
  else
    {
      t = c_7(r_4, v_4, o_4, t);
    }
  return(t);
}
ATerm c_7 (ATerm m_3, ATerm o_3, ATerm p_3, ATerm t)
{
  ATerm r_3 = NULL,u_3 = NULL,r_0 = NULL,x_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL;
  t = SSLgetAnnotations(p_3);
  r_3 = t;
  t = o_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_3 = ATgetFirst((ATermList) t);
      b_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_3;
  if(match_cons(t, sym__2))
    {
      y_3 = ATgetArgument(t, 0);
      a_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_8 = t;
    int f_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_4;
        if((y_3 != t))
          {
            _fail(t);
          }
        t = b_4;
        ;
        LocalPopChoice(f_8);
      }
    else
      {
        t = e_8;
        t = o_3;
        t = q_4(y_3, a_4, b_4, t);
      }
    u_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_3, u_3);
    r_0 = t;
    t = SSLsetAnnotations(r_0, r_3);
  }
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      if((b_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm g_8 = t;
  int i_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_0, s_0, t_0, t);
      ;
      LocalPopChoice(i_8);
    }
  else
    {
      t = g_8;
      {
        ATerm y_5 = NULL,j_6 = NULL,u_6 = NULL;
        y_5 = t;
        if(match_cons(t, sym__2))
          {
            j_6 = ATgetArgument(t, 0);
            u_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_5;
        t = m_4(x_0, j_6, u_6, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm o_114 (ATerm), ATerm p_114 (ATerm), ATerm q_114 (ATerm), ATerm t)
{
  ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL;
  a_11 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_11 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
      {
        ATerm t_1 = NULL,w_1 = NULL,y_1 = NULL,u_0 = NULL;
        t = SSLgetAnnotations(a_11);
        t_1 = t;
        t = b_11;
        t = q_114(t);
        w_1 = t;
        t = x_10;
        t = o_114(t);
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_1, y_1);
        u_0 = t;
        t = SSLsetAnnotations(u_0, t_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          b_11 = ATgetArgument(t, 0);
          x_10 = ATgetArgument(t, 1);
          y_10 = ATgetArgument(t, 2);
          z_10 = ATgetArgument(t, 3);
          {
            ATerm v_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,v_0 = NULL;
            t = SSLgetAnnotations(a_11);
            v_2 = t;
            t = b_11;
            t = q_114(t);
            a_3 = t;
            t = x_10;
            t = q_114(t);
            b_3 = t;
            t = y_10;
            t = q_114(t);
            c_3 = t;
            t = z_10;
            t = o_114(t);
            d_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_3, b_3, c_3, d_3);
            v_0 = t;
            t = SSLsetAnnotations(v_0, v_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              b_11 = ATgetArgument(t, 0);
              x_10 = ATgetArgument(t, 1);
              y_10 = ATgetArgument(t, 2);
              z_10 = ATgetArgument(t, 3);
              {
                ATerm l_4 = NULL,f_5 = NULL,g_5 = NULL,m_5 = NULL,n_5 = NULL,g_1 = NULL;
                t = SSLgetAnnotations(a_11);
                l_4 = t;
                t = b_11;
                t = q_114(t);
                f_5 = t;
                t = x_10;
                t = q_114(t);
                g_5 = t;
                t = y_10;
                t = q_114(t);
                m_5 = t;
                t = z_10;
                t = o_114(t);
                n_5 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, f_5, g_5, m_5, n_5);
                g_1 = t;
                t = SSLsetAnnotations(g_1, l_4);
              }
            }
          else
            {
              ATerm b_6 = NULL,d_6 = NULL,w_6 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_11 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_11);
              b_6 = t;
              t = b_11;
              t = o_114(t);
              d_6 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, d_6);
              w_6 = t;
              t = SSLsetAnnotations(w_6, b_6);
            }
        }
    }
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm m_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_11);
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm k_8 = t;
  int l_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(l_8);
    }
  else
    {
      t = k_8;
      {
        ATerm o_11 = NULL,r_11 = NULL,t_11 = NULL,u_11 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            o_11 = ATgetArgument(t, 0);
            t = o_11;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                o_11 = ATgetArgument(t, 0);
                r_11 = ATgetArgument(t, 1);
                t_11 = ATgetArgument(t, 2);
                u_11 = ATgetArgument(t, 3);
                t = t_11;
                t = map_1_0(d_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    o_11 = ATgetArgument(t, 0);
                    r_11 = ATgetArgument(t, 1);
                    t_11 = ATgetArgument(t, 2);
                    u_11 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_11;
                t = map_1_0(f_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm d_1 (ATerm t)
{
  ATerm m_12 = NULL;
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_12 = ATgetArgument(t, 0);
          {
            ATerm o_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_8);
      t = m_12;
    }
  else
    {
      t = m_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_12;
    }
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm n_13 = NULL;
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_13 = ATgetArgument(t, 0);
          {
            ATerm t_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_8);
      t = n_13;
    }
  else
    {
      t = p_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_13;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(y_0, c_1, tboundin_3_0, t);
  return(t);
}
ATerm j_1 (ATerm t)
{
  ATerm n_14 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_14);
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm u_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_8);
    }
  else
    {
      t = u_8;
      {
        ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_14 = ATgetArgument(t, 0);
            t = p_14;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_14 = ATgetArgument(t, 0);
                q_14 = ATgetArgument(t, 1);
                r_14 = ATgetArgument(t, 2);
                s_14 = ATgetArgument(t, 3);
                t = r_14;
                t = map_1_0(l_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_14 = ATgetArgument(t, 0);
                    q_14 = ATgetArgument(t, 1);
                    r_14 = ATgetArgument(t, 2);
                    s_14 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_14;
                t = map_1_0(n_1, t);
              }
          }
      }
    }
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm e_15 = NULL;
  ATerm z_8 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_15 = ATgetArgument(t, 0);
          {
            ATerm f_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_9);
      t = e_15;
    }
  else
    {
      t = z_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_15;
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm x_15 = NULL;
  ATerm h_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_15 = ATgetArgument(t, 0);
          {
            ATerm m_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_9);
      t = x_15;
    }
  else
    {
      t = h_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_15;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm a_14 = NULL,e_14 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_14 = ATgetArgument(t, 0);
      t = e_14;
      if(match_cons(t, sym_Rule_3))
        {
          a_14 = ATgetArgument(t, 0);
          {
            ATerm o_9 = ATgetArgument(t, 1);
          }
          {
            ATerm r_9 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_14;
      t = free_vars_3_0(j_1, k_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          e_14 = ATgetArgument(t, 0);
          {
            ATerm u_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_14;
    }
  return(t);
}
ATerm w_4 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm b_38, ATerm a_38, ATerm t)
{
  t = p_96(t);
  {
    ATerm p_1 (ATerm t)
    {
      ATerm e_16 = NULL;
      e_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_38), e_16);
      t = o_96(t);
      return(t);
    }
    t = fetch_1_0(p_1, t);
    t = not_null(a_38);
  }
  return(t);
}
ATerm x_4 (ATerm l_96 (ATerm), ATerm x_37, ATerm w_37, ATerm t)
{
  ATerm e_17 (ATerm t)
  {
    ATerm t_16 = NULL,u_16 = NULL,b_17 = NULL;
    t_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(w_37);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_16 = ATgetFirst((ATermList) t);
            b_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_16;
              {
                ATerm q_1 (ATerm t)
                {
                  t = not_null(w_37);
                  return(t);
                }
                t = w_4(l_96, q_1, not_null(u_16), not_null(b_17), t);
                t = e_17(t);
              }
              ;
              LocalPopChoice(w_9);
            }
          else
            {
              t = v_9;
              {
                ATerm l_6 = NULL,o_6 = NULL,l_7 = NULL;
                t = SSLgetAnnotations(t_16);
                l_6 = t;
                t = b_17;
                t = e_17(t);
                o_6 = t;
                t = (ATerm) ATinsert(CheckATermList(o_6), u_16);
                l_7 = t;
                t = SSLsetAnnotations(l_7, l_6);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(x_37);
  t = e_17(t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm d_7 = NULL,e_7 = NULL;
  if(match_cons(t, sym__2))
    {
      d_7 = ATgetArgument(t, 0);
      e_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(b_2, d_7, e_7, t);
  return(t);
}
ATerm b_2 (ATerm t)
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
ATerm e_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(i_2, r_7, s_7, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      if((a_8 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm m_113 (ATerm), ATerm n_113 (ATerm), ATerm o_113 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_18 (ATerm t)
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_113(t);
        ;
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        {
          ATerm z_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_17 = NULL,k_17 = NULL,t_6 = NULL,v_6 = NULL;
              if(((j_17 != NULL) && (j_17 != t)))
                _fail(t);
              else
                j_17 = t;
              t = n_113(t);
              if(((k_17 != NULL) && (k_17 != t)))
                _fail(t);
              else
                k_17 = t;
              t = not_null(j_17);
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm p_17 = NULL;
                  t = d_18(t);
                  p_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_17, not_null(k_17));
                  t = diff_0_0(t);
                  return(t);
                }
                t = o_113(u_1, d_18, v_1, t);
                if(((v_6 != NULL) && (v_6 != t)))
                  _fail(t);
                else
                  v_6 = t;
                t = SSL_explode_term(not_null(v_6));
                if(match_cons(t, sym__2))
                  {
                    ATerm b_10 = ATgetArgument(t, 0);
                    if(((t_6 != NULL) && (t_6 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      t_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(t_6);
                t = foldr_3_0(z_1, a_2, _id, t);
              }
              ;
              LocalPopChoice(a_10);
            }
          else
            {
              t = z_9;
              {
                ATerm h_7 = NULL,i_7 = NULL;
                i_7 = t;
                t = SSL_explode_term(i_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm c_10 = ATgetArgument(t, 0);
                    h_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_7;
                t = foldr_3_0(e_2, h_2, d_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = d_18(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm n_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_9);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      {
        ATerm p_9 = NULL,q_9 = NULL,s_9 = NULL,t_9 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_9 = ATgetArgument(t, 0);
            t = p_9;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_9 = ATgetArgument(t, 0);
                q_9 = ATgetArgument(t, 1);
                s_9 = ATgetArgument(t, 2);
                t_9 = ATgetArgument(t, 3);
                t = s_9;
                t = map_1_0(r_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_9 = ATgetArgument(t, 0);
                    q_9 = ATgetArgument(t, 1);
                    s_9 = ATgetArgument(t, 2);
                    t_9 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_9;
                t = map_1_0(t_2, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm l_10 = NULL;
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_10 = ATgetArgument(t, 0);
          {
            ATerm h_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_10);
      t = l_10;
    }
  else
    {
      t = f_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_10;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm g_11 = NULL;
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_11 = ATgetArgument(t, 0);
          {
            ATerm k_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_10);
      t = g_11;
    }
  else
    {
      t = i_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_11;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm k_11 = NULL;
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_11, term_o_10);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm l_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_11 = ATgetArgument(t, 0);
      {
        ATerm p_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_11), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm p_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      p_11 = ATgetArgument(t, 0);
      {
        ATerm q_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, p_11);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm h_21 = NULL,j_21 = NULL,m_21 = NULL,o_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,w_21 = NULL,x_21 = NULL,a_22 = NULL,c_22 = NULL;
  j_21 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      m_21 = ATgetArgument(t, 0);
      o_21 = ATgetArgument(t, 1);
      s_21 = ATgetArgument(t, 2);
      t_21 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_21;
  if(match_cons(t, sym_Seq_2))
    {
      u_21 = ATgetArgument(t, 0);
      w_21 = ATgetArgument(t, 1);
      t = u_21;
      if(match_cons(t, sym_Match_1))
        {
          h_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, m_21, o_21, s_21, (ATerm) ATmakeAppl(sym_ScopeDefault_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_21), w_21)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm x_8 = NULL,y_8 = NULL,a_9 = NULL,e_9 = NULL,g_9 = NULL,i_9 = NULL,j_9 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          u_21 = ATgetArgument(t, 0);
          w_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_21;
      if(match_cons(t, sym_Seq_2))
        {
          x_21 = ATgetArgument(t, 0);
          c_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_21;
      if(match_cons(t, sym_Match_1))
        {
          a_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_22;
      if(match_cons(t, sym_Op_2))
        {
          ATerm r_10 = ATgetArgument(t, 0);
          ATerm s_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_22;
      t = free_vars_3_0(o_2, q_2, tboundin_3_0, t);
      y_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_21, y_8);
      t = diff_0_0(t);
      x_8 = t;
      t = y_8;
      t = map_1_0(u_2, t);
      a_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_21, a_9);
      t = conc_0_0(t);
      i_9 = t;
      t = new_0_0(t);
      e_9 = t;
      t = o_21;
      t = map_1_0(w_2, t);
      g_9 = t;
      t = i_9;
      t = map_1_0(x_2, t);
      j_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, e_9, o_21, i_9, (ATerm) ATmakeAppl(sym_Scope_2, x_8, c_22))), (ATerm) ATmakeAppl(sym_SDefT_4, m_21, o_21, s_21, (ATerm) ATmakeAppl(sym_Scope_2, y_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_22), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_9), g_9, j_9)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm x_92 (ATerm), ATerm t)
{
  ATerm q_23 (ATerm t)
  {
    ATerm l_23 = NULL,o_23 = NULL,p_23 = NULL;
    p_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_23 = ATgetFirst((ATermList) t);
        o_23 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_12 = NULL,p_12 = NULL,n_7 = NULL;
          t = SSLgetAnnotations(p_23);
          h_12 = t;
          t = o_23;
          t = q_23(t);
          p_12 = t;
          t = (ATerm) ATinsert(CheckATermList(p_12), l_23);
          n_7 = t;
          t = SSLsetAnnotations(n_7, h_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_23;
        t = x_92(t);
      }
    return(t);
  }
  t = q_23(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL,p_22 = NULL;
  m_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_22;
    }
  else
    {
      ATerm y_2 (ATerm t)
      {
        t = not_null(p_22);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_22 != NULL) && (o_22 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_22 = ATgetFirst((ATermList) t);
          if(((p_22 != NULL) && (p_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(o_22);
      t = at_end_1_0(y_2, t);
    }
  return(t);
}
ATerm f_24 (ATerm x_23, ATerm t)
{
  ATerm y_23 = NULL;
  t = SSL_explode_term(x_23);
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_23;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  if(((c_24 != NULL) && (c_24 != t)))
    _fail(t);
  else
    c_24 = t;
  if(match_cons(t, sym__2))
    {
      a_24 = ATgetArgument(t, 0);
      b_24 = ATgetArgument(t, 1);
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              t = not_null(b_24);
              return(t);
            }
            t = not_null(a_24);
            t = at_end_1_0(z_2, t);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            t = f_24(not_null(c_24), t);
          }
      }
    }
  else
    {
      t = f_24(not_null(c_24), t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  ATerm h_24 = NULL,k_24 = NULL,l_24 = NULL;
  h_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_24;
      t = m_98(t);
    }
  else
    {
      ATerm o_24 = NULL,p_24 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_24 = ATgetFirst((ATermList) t);
          l_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_24;
      t = o_98(t);
      o_24 = t;
      t = l_24;
      t = foldr_3_0(m_98, n_98, o_98, t);
      p_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_24, p_24);
      t = n_98(t);
    }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,p_7 = NULL;
  d_25 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      b_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_25);
  a_25 = t;
  t = b_25;
  t = foldr_3_0(_id, conc_0_0, k_3, t);
  c_25 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, c_25);
  p_7 = t;
  t = SSLsetAnnotations(p_7, a_25);
  return(t);
}
ATerm j_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm w_10 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = w_10;
      {
        ATerm f_25 = NULL;
        f_25 = t;
        t = (ATerm) ATinsert(ATempty, f_25);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,t_7 = NULL,q_7 = NULL;
  y_24 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_24);
  r_24 = t;
  t = s_24;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_24 = ATgetFirst((ATermList) t);
      v_24 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_24);
  t_24 = t;
  t = v_24;
  t = Cons_2_0(i_3, j_3, t);
  w_24 = t;
  t = (ATerm) ATinsert(CheckATermList(w_24), u_24);
  q_7 = t;
  t = SSLsetAnnotations(q_7, t_24);
  x_24 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_24);
  t_7 = t;
  t = SSLsetAnnotations(t_7, r_24);
  return(t);
}
ATerm y_4 (ATerm w_50, ATerm x_50, ATerm t)
{
  ATerm h_25 = NULL;
  t = SSL_fputc(w_50, x_50);
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_25);
  return(t);
}
ATerm z_4 (ATerm k_54, ATerm l_54, ATerm t)
{
  ATerm k_25 = NULL;
  t = SSL_write_term_to_stream_text(k_54, l_54);
  k_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_25);
  return(t);
}
ATerm b_5 (ATerm y_104 (ATerm), ATerm r_433, ATerm o_54, ATerm t)
{
  ATerm l_25 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_433, term_d_11);
  t = open_stream_0_0(t);
  l_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_25, o_54);
  t = y_104(t);
  t = fclose_0_0(t);
  t = o_54;
  return(t);
}
ATerm a_5 (ATerm g_54, ATerm h_54, ATerm t)
{
  ATerm m_25 = NULL;
  t = SSL_write_term_to_stream_baf(g_54, h_54);
  m_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_25);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_11 = ATgetArgument(t, 0);
      if(match_cons(e_11, sym_Stream_1))
        {
          q_25 = ATgetArgument(e_11, 0);
        }
      else
        _fail(t);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(q_25, r_25, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm s_25 = NULL,u_25 = NULL,v_25 = NULL,x_25 = NULL,y_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_11 = ATgetArgument(t, 0);
      if(match_cons(f_11, sym_Stream_1))
        {
          x_25 = ATgetArgument(f_11, 0);
        }
      else
        _fail(t);
      y_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(x_25, y_25, t);
  s_25 = t;
  t = term_h_11;
  u_25 = t;
  t = s_25;
  if(match_cons(t, sym_Stream_1))
    {
      v_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_11, s_25);
  t = y_4(u_25, v_25, t);
  return(t);
}
ATerm output_1_0 (ATerm h_109 (ATerm), ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  t = h_109(t);
  o_25 = t;
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_11;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = term_q_11;
      }
    n_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_25, o_25);
    {
      ATerm s_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_w_11;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, n_25, o_25);
          LocalPopChoice(v_11);
          if(match_cons(t, sym__2))
            {
              ATerm x_11 = ATgetArgument(t, 0);
              ATerm y_11 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_5(n_3, n_25, o_25, t);
        }
      else
        {
          t = s_11;
          if(match_cons(t, sym__2))
            {
              ATerm z_11 = ATgetArgument(t, 0);
              ATerm a_12 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_5(q_3, n_25, o_25, t);
        }
    }
  }
  return(t);
}
ATerm x_26 (ATerm o_26, ATerm t)
{
  t = SSL_fclose(o_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_26 = NULL,t_26 = NULL;
  t_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_26 = ATgetArgument(t, 0);
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_26);
            ;
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            t = x_26(t_26, t);
          }
      }
    }
  else
    {
      t = x_26(t_26, t);
    }
  return(t);
}
ATerm c_5 (ATerm m_54, ATerm t)
{
  t = SSL_read_term_from_stream(m_54);
  return(t);
}
ATerm d_5 (ATerm y_50, ATerm z_50, ATerm t)
{
  ATerm y_26 = NULL;
  t = SSL_fopen(y_50, z_50);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_26 = NULL;
  t = SSL_stdin_stream();
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_27 = NULL;
  t = SSL_stdout_stream();
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_27);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_27 = NULL;
  t = SSL_stderr_stream();
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_27);
  return(t);
}
ATerm e_29 (ATerm i_27, ATerm t)
{
  ATerm j_27 = NULL;
  t = SSL_explode_term(i_27);
  if(match_cons(t, sym__2))
    {
      ATerm d_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_12 = ATgetArgument(t, 1);
        if(((ATgetType(e_12) == AT_LIST) && !(ATisEmpty(e_12))))
          {
            j_27 = ATgetFirst((ATermList) e_12);
            {
              ATerm f_12 = (ATerm) ATgetNext((ATermList) e_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm f_29 (ATerm m_27, ATerm n_27, ATerm o_27, ATerm t)
{
  ATerm p_27 = NULL,s_27 = NULL,v_27 = NULL,y_27 = NULL,x_7 = NULL;
  t = SSLgetAnnotations(o_27);
  v_27 = t;
  t = m_27;
  if(match_cons(t, sym_Path_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_27, n_27);
  x_7 = t;
  t = SSLsetAnnotations(x_7, v_27);
  if(match_cons(t, sym__2))
    {
      p_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(p_27, s_27, t);
  return(t);
}
ATerm g_29 (ATerm f_28, ATerm i_28, ATerm l_28, ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,t_28 = NULL,y_7 = NULL;
  t = SSLgetAnnotations(l_28);
  o_28 = t;
  t = SSL_is_string(f_28);
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_28, i_28);
  y_7 = t;
  t = SSLsetAnnotations(y_7, o_28);
  if(match_cons(t, sym__2))
    {
      m_28 = ATgetArgument(t, 0);
      n_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(m_28, n_28, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_12 = ATgetArgument(t, 0);
      ATerm i_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  b_29 = t;
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      d_29 = ATgetArgument(t, 1);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_29(b_29, t);
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm l_12 = t;
              int n_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_29(c_29, d_29, b_29, t);
                  ;
                  LocalPopChoice(n_12);
                }
              else
                {
                  t = l_12;
                  t = g_29(c_29, d_29, b_29, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_29(b_29, t);
    }
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL;
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_29 = NULL;
      k_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_29, term_s_12);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      t = debug_1_0(s_3, t);
      _fail(t);
    }
  i_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(j_29, t);
  h_29 = t;
  t = i_29;
  t = fclose_0_0(t);
  t = h_29;
  return(t);
}
ATerm input_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_v_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      t = term_w_12;
    }
  t = ReadFromFile_0_0(t);
  t = i_109(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
  m_29 = t;
  t = term_x_12;
  t = whoami_0_0(t);
  n_29 = t;
  t = term_y_12;
  p_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_13), n_29), term_z_12);
  q_29 = t;
  t = SSL_printnl(p_29, q_29);
  t = term_b_13;
  o_29 = t;
  t = SSL_exit(o_29);
  t = m_29;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm s_29 = NULL;
  s_29 = t;
  if(match_string(t, "-k"))
    {
      t = s_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_29;
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
  t_29 = t;
  t = SSL_string_to_int(t_29);
  u_29 = t;
  t = term_c_13;
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, u_29);
  t = l_5(v_29, u_29, t);
  t = t_29;
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = term_d_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_3, v_3, w_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm x_29 = NULL;
  x_29 = t;
  if(match_string(t, "-S"))
    {
      t = x_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_29;
    }
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  t = term_e_13;
  y_29 = t;
  t = term_f_13;
  z_29 = t;
  t = term_i_13;
  t = l_5(y_29, z_29, t);
  t = term_j_13;
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  t = SSL_string_to_int(a_30);
  b_30 = t;
  t = term_e_13;
  c_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, b_30);
  t = l_5(c_30, b_30, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_30);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_o_13;
  return(t);
}
ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL;
  t = term_p_13;
  d_30 = t;
  t = term_x_12;
  e_30 = t;
  t = term_q_13;
  t = l_5(d_30, e_30, t);
  t = term_r_13;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_s_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_3, c_4, d_4, t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm v_13 = t;
        int w_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(e_4, f_4, g_4, t);
            ;
            LocalPopChoice(w_13);
          }
        else
          {
            t = v_13;
            t = Option_3_0(h_4, i_4, j_4, t);
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm n_55, ATerm o_55, ATerm t)
{
  ATerm f_30 = NULL;
  t = term_x_13;
  f_30 = t;
  t = SSL_table_put(f_30, n_55, o_55);
  t = (ATerm) ATmakeAppl(sym__3, term_x_13, n_55, o_55);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,f_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
      t = term_x_12;
      t = d_0(t);
      g_31 = t;
      t = term_y_13;
      h_31 = t;
      t = term_z_13;
      i_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_13, term_z_13, g_31);
      t = j_5(h_31, i_31, g_31, t);
      _fail(t);
    }
  else
    {
      ATerm l_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_30 = ATgetFirst((ATermList) t);
          f_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_30;
      t = a_0(t);
      t = term_x_12;
      t = b_0(t);
      l_31 = t;
      t = (ATerm) ATinsert(CheckATermList(f_31), l_31);
    }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm n_31 = NULL;
  n_31 = t;
  if(match_string(t, "-o"))
    {
      t = n_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_31;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL;
  o_31 = t;
  t = term_n_11;
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, o_31);
  t = l_5(p_31, o_31, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_31);
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_b_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, n_4, p_4, t);
  return(t);
}
ATerm j_5 (ATerm l_60, ATerm m_60, ATerm k_60, ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_60, m_60);
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_14 = ATgetArgument(t, 0);
            ATerm g_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_60, m_60);
        t = i_5(l_60, m_60, t);
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = (ATerm) ATempty;
      }
    s_31 = t;
    t = (ATerm) ATinsert(CheckATermList(s_31), k_60);
    t_31 = t;
    t = SSL_table_put(l_60, m_60, t_31);
    t = r_31;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
      t = term_x_12;
      t = j_0(t);
      e_32 = t;
      t = term_y_13;
      f_32 = t;
      t = term_z_13;
      g_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_13, term_z_13, e_32);
      t = j_5(f_32, g_32, e_32, t);
      _fail(t);
    }
  else
    {
      ATerm k_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_32 = ATgetFirst((ATermList) t);
          b_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_32;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_32 = ATgetFirst((ATermList) t);
          d_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_32;
      t = h_0(t);
      t = c_32;
      t = i_0(t);
      k_32 = t;
      t = (ATerm) ATinsert(CheckATermList(d_32), k_32);
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  if(match_string(t, "-i"))
    {
      t = m_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_32;
    }
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL;
  n_32 = t;
  t = term_v_12;
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_12, n_32);
  t = l_5(o_32, n_32, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_32);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_h_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_12;
  t = whoami_0_0(t);
  p_32 = t;
  t = term_y_12;
  w_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_14), p_32);
  x_32 = t;
  t = SSL_printnl(w_32, x_32);
  t = term_b_13;
  v_32 = t;
  t = SSL_exit(v_32);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_k_14;
  t = get_config_0_0(t);
  return(t);
}
ATerm e_5 (ATerm w_47, ATerm x_47, ATerm t)
{
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_47, x_47);
      ;
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      t = SSL_addr(w_47, x_47);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_32;
      t = k_98(t);
    }
  else
    {
      ATerm e_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_33 = ATgetFirst((ATermList) t);
          b_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_33;
      t = foldr_2_0(k_98, l_98, t);
      e_33 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_33, e_33);
      t = l_98(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL;
  if(match_cons(t, sym__2))
    {
      k_13 = ATgetArgument(t, 0);
      l_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(k_13, l_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_33 = NULL,g_13 = NULL,h_13 = NULL;
  t = times_0_0(t);
  h_13 = t;
  t = SSL_explode_term(h_13);
  if(match_cons(t, sym__2))
    {
      ATerm o_14 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13;
  t = foldr_2_0(p_5, q_5, t);
  h_33 = t;
  t = SSL_TicksToSeconds(h_33);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
  u_33 = t;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_14 = t;
    int u_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_33;
        if((v_33 != t))
          {
            _fail(t);
          }
        t = u_33;
        ;
        LocalPopChoice(u_14);
      }
    else
      {
        t = t_14;
        t = (ATerm) ATmakeAppl(sym__2, v_33, w_33);
        {
          ATerm v_14 = t;
          int w_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_33, w_33);
              ;
              LocalPopChoice(w_14);
            }
          else
            {
              t = v_14;
              t = SSL_gtr(v_33, w_33);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_33, w_33);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_106 (ATerm), ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_34 = NULL;
        t = term_e_13;
        t = get_config_0_0(t);
        c_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_34, term_b_13);
        t = geq_0_0(t);
        t = a_34;
        t = i_106(t);
        ;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = a_34;
      }
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,h_34 = NULL,i_34 = NULL;
  t = run_time_0_0(t);
  e_34 = t;
  t = term_x_12;
  t = whoami_0_0(t);
  f_34 = t;
  t = term_y_12;
  h_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_15), e_34), term_z_14), f_34);
  i_34 = t;
  t = SSL_printnl(h_34, i_34);
  t = (ATerm) ATmakeAppl(sym__2, term_y_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_15), e_34), term_z_14), f_34));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_34 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_13;
  j_34 = t;
  t = SSL_exit(j_34);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL;
  s_34 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_34;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_34 = ATgetArgument(t, 0);
          {
            ATerm i_14 = NULL,h_8 = NULL;
            t = SSLgetAnnotations(s_34);
            i_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_34);
            h_8 = t;
            t = SSLsetAnnotations(h_8, i_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_34;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_108 (ATerm), ATerm t)
{
  ATerm b_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_f_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_15);
    }
  else
    {
      t = b_15;
      t = fetch_1_0(s_5, t);
    }
  t = y_108(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_34 = ATgetFirst((ATermList) t);
      w_34 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_35 = NULL,b_35 = NULL;
        ATerm t_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_35)), not_null(b_35));
          return(t);
        }
        t = not_null(w_34);
        t = g_0(t);
        if(((a_35 != NULL) && (a_35 != t)))
          _fail(t);
        else
          a_35 = t;
        t = not_null(v_34);
        t = f_0(t);
        if(((b_35 != NULL) && (b_35 != t)))
          _fail(t);
        else
          b_35 = t;
        t = not_null(w_34);
        t = reverse_acc_2_0(f_0, t_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_12;
      t = g_0(t);
    }
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL,j_8 = NULL;
  h_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_35);
  f_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_35);
  j_8 = t;
  t = SSLsetAnnotations(j_8, f_35);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_35), term_g_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      t = fetch_1_0(u_5, t);
    }
  t = term_j_15;
  t = echo_0_0(t);
  t = term_y_13;
  d_35 = t;
  t = term_z_13;
  e_35 = t;
  t = term_k_15;
  t = i_5(d_35, e_35, t);
  t = reverse_acc_2_0(_id, v_5, t);
  t = map_1_0(w_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_92 (ATerm), ATerm t)
{
  ATerm g_36 (ATerm t)
  {
    ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
    d_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_36 = ATgetFirst((ATermList) t);
        f_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_15 = t;
      int n_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 = NULL,l_15 = NULL,r_8 = NULL;
          t = SSLgetAnnotations(d_36);
          c_15 = t;
          t = e_36;
          t = r_92(t);
          l_15 = t;
          t = (ATerm) ATinsert(CheckATermList(f_36), l_15);
          r_8 = t;
          t = SSLsetAnnotations(r_8, c_15);
          ;
          LocalPopChoice(n_15);
        }
      else
        {
          t = m_15;
          {
            ATerm y_15 = NULL,f_16 = NULL,s_8 = NULL;
            t = SSLgetAnnotations(d_36);
            y_15 = t;
            t = f_36;
            t = g_36(t);
            f_16 = t;
            t = (ATerm) ATinsert(CheckATermList(f_16), e_36);
            s_8 = t;
            t = SSLsetAnnotations(s_8, y_15);
          }
        }
    }
    return(t);
  }
  t = g_36(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_15 = ATgetFirst((ATermList) t);
                ATerm r_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_36;
          }
        ;
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = (ATerm) ATinsert(ATempty, k_36);
      }
    l_36 = t;
    t = term_q_11;
    m_36 = t;
    t = SSL_printnl(m_36, l_36);
    t = k_36;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_k_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm h_5 (ATerm m_45, ATerm n_45, ATerm t)
{
  t = SSL_strcat(m_45, n_45);
  return(t);
}
ATerm debug_1_0 (ATerm w_104 (ATerm), ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL;
  q_36 = t;
  t = w_104(t);
  r_36 = t;
  t = term_y_12;
  s_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_36), r_36);
  t_36 = t;
  t = SSL_printnl(s_36, t_36);
  t = q_36;
  return(t);
}
ATerm map_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  ATerm i_37 (ATerm t)
  {
    ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
    f_37 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_37;
      }
    else
      {
        ATerm x_16 = NULL,a_17 = NULL,i_17 = NULL,v_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_37 = ATgetFirst((ATermList) t);
            h_37 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_37);
        x_16 = t;
        t = g_37;
        t = h_92(t);
        a_17 = t;
        t = h_37;
        t = i_37(t);
        i_17 = t;
        t = (ATerm) ATinsert(CheckATermList(i_17), a_17);
        v_8 = t;
        t = SSLsetAnnotations(v_8, x_16);
      }
    return(t);
  }
  t = i_37(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm s_15 = t;
  int t_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_15);
    }
  else
    {
      t = s_15;
    }
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_u_15;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_37 = NULL;
      q_37 = t;
      t = SSL_is_string(q_37);
      ;
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
      {
        ATerm z_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_5, t);
            ;
            LocalPopChoice(a_16);
          }
        else
          {
            t = z_15;
            {
              ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
              d_38 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_38 = ATgetArgument(t, 0);
                  t = e_38;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_38 = ATgetArgument(t, 0);
                      t = e_38;
                      {
                        ATerm b_16 = t;
                        int c_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(c_16);
                          }
                        else
                          {
                            t = b_16;
                            t = debug_1_0(z_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_38 = NULL,k_38 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_38 = ATgetArgument(t, 0);
                          f_38 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_38;
                      t = eval_config_0_0(t);
                      j_38 = t;
                      t = f_38;
                      t = eval_config_0_0(t);
                      k_38 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_38, k_38);
                      t = h_5(j_38, k_38, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm i_5 (ATerm c_62, ATerm d_62, ATerm t)
{
  t = SSL_table_get(c_62, d_62);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL;
  o_38 = t;
  t = term_x_13;
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_13, o_38);
  t = i_5(p_38, o_38, t);
  {
    ATerm d_16 = t;
    int g_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_38 = NULL,r_38 = NULL;
        t = eval_config_0_0(t);
        q_38 = t;
        t = term_x_13;
        r_38 = t;
        t = SSL_table_put(r_38, o_38, q_38);
        t = q_38;
        ;
        LocalPopChoice(g_16);
      }
    else
      {
        t = d_16;
      }
  }
  return(t);
}
ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm u_38 = NULL,v_38 = NULL;
  t = term_h_16;
  u_38 = t;
  t = term_x_12;
  v_38 = t;
  t = term_i_16;
  t = l_5(u_38, v_38, t);
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm w_38 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  t = term_h_16;
  c_39 = t;
  t = term_x_12;
  d_39 = t;
  t = term_i_16;
  t = l_5(c_39, d_39, t);
  t = term_k_16;
  w_38 = t;
  t = term_x_12;
  b_39 = t;
  t = term_l_16;
  t = l_5(w_38, b_39, t);
  t = term_m_16;
  return(t);
}
ATerm h_6 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_6, c_6, e_6, t);
      ;
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      t = Option_3_0(f_6, g_6, h_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_71 (ATerm), ATerm u_71 (ATerm), ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,b_9 = NULL;
  j_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_39 = ATgetFirst((ATermList) t);
      g_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_39);
  e_39 = t;
  t = f_39;
  t = t_71(t);
  h_39 = t;
  t = g_39;
  t = u_71(t);
  i_39 = t;
  t = (ATerm) ATinsert(CheckATermList(i_39), h_39);
  b_9 = t;
  t = SSLsetAnnotations(b_9, e_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,t_39 = NULL,u_39 = NULL,d_9 = NULL;
  if(((o_39 != NULL) && (o_39 != t)))
    _fail(t);
  else
    o_39 = t;
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_16;
        t = b_111(t);
        ;
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
      }
    t = not_null(o_39);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((q_39 != NULL) && (q_39 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          q_39 = ATgetFirst((ATermList) t);
        if(((r_39 != NULL) && (r_39 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          r_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(o_39));
    if(((p_39 != NULL) && (p_39 != t)))
      _fail(t);
    else
      p_39 = t;
    t = term_k_14;
    if(((u_39 != NULL) && (u_39 != t)))
      _fail(t);
    else
      u_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_k_14, not_null(q_39));
    t = l_5(not_null(u_39), not_null(q_39), t);
    t = not_null(r_39);
    {
      ATerm e_40 (ATerm t)
      {
        ATerm v_16 = t;
        int w_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_16 = t;
            int z_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_39 = NULL;
                x_39 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_39;
                ;
                LocalPopChoice(z_16);
              }
            else
              {
                t = y_16;
                t = b_111(t);
                t = Cons_2_0(_id, e_40, t);
              }
            ;
            LocalPopChoice(w_16);
          }
        else
          {
            t = v_16;
            {
              ATerm a_40 = NULL,b_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_40 = ATgetFirst((ATermList) t);
                  b_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(b_40), (ATerm) ATmakeAppl(sym_Undefined_1, a_40));
            }
          }
        return(t);
      }
      t = e_40(t);
      if(((t_39 != NULL) && (t_39 != t)))
        _fail(t);
      else
        t_39 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(t_39)), (ATerm) ATmakeAppl(sym_Program_1, not_null(q_39)));
      if(((d_9 != NULL) && (d_9 != t)))
        _fail(t);
      else
        d_9 = t;
      t = SSLsetAnnotations(not_null(d_9), not_null(p_39));
    }
  }
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  if(match_string(t, "--help"))
    {
      t = q_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_40;
        }
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL;
  t = term_f_15;
  r_40 = t;
  t = term_x_12;
  s_40 = t;
  t = term_c_17;
  t = l_5(r_40, s_40, t);
  t = term_d_17;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm p_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_111 (ATerm), ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  if(((l_40 != NULL) && (l_40 != t)))
    _fail(t);
  else
    l_40 = t;
  t = term_y_13;
  if(((n_40 != NULL) && (n_40 != t)))
    _fail(t);
  else
    n_40 = t;
  t = term_z_13;
  if(((o_40 != NULL) && (o_40 != t)))
    _fail(t);
  else
    o_40 = t;
  t = (ATerm) ATempty;
  if(((p_40 != NULL) && (p_40 != t)))
    _fail(t);
  else
    p_40 = t;
  t = SSL_table_put(not_null(n_40), not_null(o_40), not_null(p_40));
  t = not_null(l_40);
  {
    ATerm i_6 (ATerm t)
    {
      ATerm g_17 = t;
      int h_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_111(t);
          ;
          LocalPopChoice(h_17);
        }
      else
        {
          t = g_17;
          {
            ATerm l_17 = t;
            int m_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(k_6, m_6, n_6, t);
                ;
                LocalPopChoice(m_17);
              }
            else
              {
                t = l_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_6, t);
    {
      ATerm n_17 = t;
      int o_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_40 = NULL;
          z_40 = t;
          {
            ATerm q_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_18 = NULL;
                t = z_40;
                {
                  ATerm s_17 = t;
                  int t_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_f_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(t_17);
                    }
                  else
                    {
                      t = s_17;
                      t = fetch_1_0(p_6, t);
                    }
                  t = z_40;
                  t = default_system_usage_0_0(t);
                  t = term_f_13;
                  k_18 = t;
                  t = SSL_exit(k_18);
                }
                ;
                LocalPopChoice(r_17);
              }
            else
              {
                t = q_17;
                {
                  ATerm o_18 = NULL;
                  t = term_h_16;
                  t = get_config_0_0(t);
                  t = z_40;
                  t = default_system_about_0_0(t);
                  t = term_f_13;
                  o_18 = t;
                  t = SSL_exit(o_18);
                }
              }
          }
          ;
          LocalPopChoice(o_17);
        }
      else
        {
          t = n_17;
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL;
                ATerm q_6 (ATerm t)
                {
                  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL,k_9 = NULL;
                  f_41 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      e_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(f_41);
                  d_41 = t;
                  t = e_41;
                  if(((j_40 != NULL) && (j_40 != t)))
                    _fail(t);
                  else
                    j_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, e_41);
                  k_9 = t;
                  t = SSLsetAnnotations(k_9, d_41);
                  return(t);
                }
                t = fetch_1_0(q_6, t);
                t = term_y_12;
                if(((b_41 != NULL) && (b_41 != t)))
                  _fail(t);
                else
                  b_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_40)), term_w_17);
                if(((c_41 != NULL) && (c_41 != t)))
                  _fail(t);
                else
                  c_41 = t;
                t = SSL_printnl(not_null(b_41), not_null(c_41));
                t = (ATerm) ATmakeAppl(sym__2, term_y_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_40)), term_w_17));
                t = default_system_usage_0_0(t);
                t = term_b_13;
                if(((a_41 != NULL) && (a_41 != t)))
                  _fail(t);
                else
                  a_41 = t;
                t = SSL_exit(not_null(a_41));
                ;
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
              }
          }
        }
      if(((k_40 != NULL) && (k_40 != t)))
        _fail(t);
      else
        k_40 = t;
      t = term_y_13;
      if(((m_40 != NULL) && (m_40 != t)))
        _fail(t);
      else
        m_40 = t;
      t = SSL_table_destroy(not_null(m_40));
      t = not_null(k_40);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm d_109 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  t = parse_options_1_0(a_109, t);
  k_41 = t;
  t = term_x_17;
  n_41 = t;
  t = SSL_table_create(n_41);
  t = term_x_17;
  l_41 = t;
  t = term_y_17;
  m_41 = t;
  t = SSL_table_put(l_41, m_41, k_41);
  t = k_41;
  t = c_109(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_109, t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm b_18 = t;
          int c_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_109(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(c_18);
            }
          else
            {
              t = b_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
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
            t = output_option_0_0(t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            {
              ATerm i_18 = t;
              int j_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_6, y_6, z_6, t);
                  ;
                  LocalPopChoice(j_18);
                }
              else
                {
                  t = i_18;
                  {
                    ATerm l_18 = t;
                    int m_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(m_18);
                      }
                    else
                      {
                        t = l_18;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = input_1_0(a_7, t);
  return(t);
}
ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL;
  t = term_w_11;
  p_41 = t;
  t = term_x_12;
  q_41 = t;
  t = term_n_18;
  t = l_5(p_41, q_41, t);
  t = term_p_18;
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_6, default_usage_0_0, _id, s_6, t);
  return(t);
}
