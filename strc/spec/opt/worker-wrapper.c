#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Scope_2;
Symbol sym_Seq_2;
Symbol sym_Path_2;
Symbol sym_DefaultVarDec_1;
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
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Undefined_0;
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
static void init_module_constructors (void)
{
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
}
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_z_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_z_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_g_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_s_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_v_11;
ATerm term_j_11;
ATerm term_u_10;
ATerm term_s_10;
ATerm term_r_10;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Sort_2, term_r_10, (ATerm) ATempty);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_10);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_m_13);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_13);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_t_13, term_b_13);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__2, term_d_14, term_e_14);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_l_16, term_b_13);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym__2, term_o_16, term_b_13);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_b_13);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_b_13);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm new_0_0 (ATerm t);
static ATerm o_4 (ATerm z_89 (ATerm), ATerm c_28, ATerm b_28, ATerm t);
ATerm genzip_4_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm t_4 (ATerm f_584, ATerm k_584, ATerm l_55, ATerm t);
ATerm while_not_2_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t);
ATerm for_3_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm t);
static ATerm o_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm d_7 (ATerm j_3, ATerm n_3, ATerm o_3, ATerm t);
static ATerm v_0 (ATerm t);
ATerm diff_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm tvars_0_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm z_4 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm i_28, ATerm h_28, ATerm t);
static ATerm a_5 (ATerm e_90 (ATerm), ATerm e_28, ATerm d_28, ATerm t);
static ATerm u_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm free_vars_3_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm h_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm worker_wrapper_0_0 (ATerm t);
ATerm at_end_1_0 (ATerm q_86 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_25 (ATerm l_25, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm t);
static ATerm e_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm worker_wrapper_spec_0_0 (ATerm t);
static ATerm b_5 (ATerm d_37, ATerm e_37, ATerm t);
static ATerm c_5 (ATerm l_22, ATerm m_22, ATerm t);
static ATerm e_5 (ATerm r_85 (ATerm), ATerm d_146, ATerm p_22, ATerm t);
static ATerm d_5 (ATerm h_22, ATerm i_22, ATerm t);
static ATerm m_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm output_1_0 (ATerm o_103 (ATerm), ATerm t);
static ATerm p_28 (ATerm v_27, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_5 (ATerm n_22, ATerm t);
static ATerm g_5 (ATerm f_37, ATerm g_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_30 (ATerm d_29, ATerm t);
static ATerm x_30 (ATerm l_29, ATerm n_29, ATerm o_29, ATerm t);
static ATerm y_30 (ATerm w_29, ATerm x_29, ATerm a_30, ATerm t);
static ATerm h_5 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm p_103 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm p_5 (ATerm z_45, ATerm a_46, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_5 (ATerm z_50, ATerm a_51, ATerm y_50, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm i_5 (ATerm y_39, ATerm z_39, ATerm t);
ATerm foldr_2_0 (ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm p_100 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm need_help_1_0 (ATerm f_103 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_86 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_5 (ATerm w_35, ATerm x_35, ATerm t);
ATerm debug_1_0 (ATerm p_85 (ATerm), ATerm t);
ATerm map_1_0 (ATerm a_86 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm m_5 (ATerm q_52, ATerm r_52, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm i_105 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
ATerm parse_options_1_0 (ATerm h_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm o_4 (ATerm z_89 (ATerm), ATerm c_28, ATerm b_28, ATerm t)
{
  static ATerm f_1 (ATerm t)
  {
    ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL;
    z_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_0;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_1 = ATgetFirst((ATermList) t);
            b_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm k_7 = t;
          int n_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_0;
              {
                static ATerm a_0 (ATerm t)
                {
                  t = b_28;
                  return(t);
                }
                t = z_4(z_89, a_0, a_1, b_1, t);
              }
              t = f_1(t);
              LocalPopChoice(n_7);
            }
          else
            {
              t = k_7;
              {
                ATerm h_0 = NULL,p_0 = NULL,j_0 = NULL;
                t = SSLgetAnnotations(z_0);
                h_0 = t;
                t = b_1;
                t = f_1(t);
                p_0 = t;
                t = (ATerm) ATinsert(CheckATermList(p_0), a_1);
                j_0 = t;
                t = SSLsetAnnotations(j_0, h_0);
              }
            }
        }
      }
    return(t);
  }
  t = c_28;
  t = f_1(t);
  return(t);
}
ATerm genzip_4_0 (ATerm d_88 (ATerm), ATerm e_88 (ATerm), ATerm f_88 (ATerm), ATerm g_88 (ATerm), ATerm t)
{
  static ATerm t_1 (ATerm t)
  {
    ATerm p_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_88(t);
        LocalPopChoice(r_7);
      }
    else
      {
        t = p_7;
        {
          ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL,o_1 = NULL,q_1 = NULL,r_0 = NULL;
          t = e_88(t);
          q_1 = t;
          if(match_cons(t, sym__2))
            {
              i_1 = ATgetArgument(t, 0);
              j_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_1);
          h_1 = t;
          t = i_1;
          t = g_88(t);
          k_1 = t;
          t = j_1;
          t = t_1(t);
          o_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_1, o_1);
          r_0 = t;
          t = SSLsetAnnotations(r_0, h_1);
          t = f_88(t);
        }
      }
    return(t);
  }
  t = t_1(t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_7 = ATgetArgument(t, 0);
      if(((ATgetType(w_7) != AT_LIST) || !(ATisEmpty(w_7))))
        _fail(t);
      {
        ATerm x_7 = ATgetArgument(t, 1);
        if(((ATgetType(x_7) != AT_LIST) || !(ATisEmpty(x_7))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm i_2 = NULL,j_2 = NULL,l_2 = NULL,m_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
        {
          i_2 = ATgetFirst((ATermList) y_7);
          j_2 = (ATerm) ATgetNext((ATermList) y_7);
        }
      else
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            l_2 = ATgetFirst((ATermList) z_7);
            m_2 = (ATerm) ATgetNext((ATermList) z_7);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_2, l_2), (ATerm) ATmakeAppl(sym__2, j_2, m_2));
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL;
  if(match_cons(t, sym__2))
    {
      n_2 = ATgetArgument(t, 0);
      o_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_2), n_2);
  return(t);
}
static ATerm t_4 (ATerm f_584, ATerm k_584, ATerm l_55, ATerm t)
{
  ATerm z_1 = NULL,c_2 = NULL,e_2 = NULL,f_2 = NULL;
  t = SSL_explode_term(k_584);
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_584);
  if(match_cons(t, sym__2))
    {
      if((z_1 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_2, e_2);
  t = genzip_4_0(b_0, f_0, m_0, _id, t);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, l_55);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm t)
{
  static ATerm r_2 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_79(t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = g_79(t);
        t = r_2(t);
      }
    return(t);
  }
  t = r_2(t);
  return(t);
}
ATerm for_3_0 (ATerm i_79 (ATerm), ATerm j_79 (ATerm), ATerm k_79 (ATerm), ATerm t)
{
  t = i_79(t);
  t = while_not_2_0(j_79, k_79, t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm d_3 = NULL;
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_3);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,t_0 = NULL;
  i_3 = t;
  if(match_cons(t, sym__2))
    {
      g_3 = ATgetArgument(t, 0);
      h_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_3);
  f_3 = t;
  t = h_3;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_3, h_3);
  t_0 = t;
  t = SSLsetAnnotations(t_0, f_3);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm i_4 = NULL,p_4 = NULL,q_4 = NULL,s_4 = NULL,x_4 = NULL;
  i_4 = t;
  if(match_cons(t, sym__2))
    {
      p_4 = ATgetArgument(t, 0);
      q_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_4;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_4 = ATgetFirst((ATermList) t);
      x_4 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_8 = t;
        int f_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_7(p_4, q_4, i_4, t);
            LocalPopChoice(f_8);
          }
        else
          {
            t = e_8;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_4), s_4), x_4);
          }
      }
    }
  else
    {
      t = d_7(p_4, q_4, i_4, t);
    }
  return(t);
}
static ATerm d_7 (ATerm j_3, ATerm n_3, ATerm o_3, ATerm t)
{
  ATerm q_3 = NULL,u_3 = NULL,u_0 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL,a_4 = NULL;
  t = SSLgetAnnotations(o_3);
  q_3 = t;
  t = n_3;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_3 = ATgetFirst((ATermList) t);
      a_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_3;
  if(match_cons(t, sym__2))
    {
      y_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_8 = t;
    int h_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_3;
        if((y_3 != t))
          {
            _fail(t);
          }
        t = a_4;
        LocalPopChoice(h_8);
      }
    else
      {
        t = g_8;
        t = n_3;
        t = t_4(y_3, z_3, a_4, t);
      }
  }
  u_3 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_3, u_3);
  u_0 = t;
  t = SSLsetAnnotations(u_0, q_3);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      if((c_7 != ATgetArgument(t, 1)))
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
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_0, q_0, s_0, t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm t_5 = NULL,u_5 = NULL,b_6 = NULL;
        t_5 = t;
        if(match_cons(t, sym__2))
          {
            u_5 = ATgetArgument(t, 0);
            b_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_5;
        t = o_4(v_0, u_5, b_6, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm t)
{
  ATerm t_10 = NULL,y_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  b_11 = t;
  if(match_cons(t, sym_Scope_2))
    {
      c_11 = ATgetArgument(t, 0);
      t_10 = ATgetArgument(t, 1);
      {
        ATerm r_1 = NULL,v_1 = NULL,w_1 = NULL,g_1 = NULL;
        t = SSLgetAnnotations(b_11);
        r_1 = t;
        t = c_11;
        t = y_109(t);
        v_1 = t;
        t = t_10;
        t = w_109(t);
        w_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, v_1, w_1);
        g_1 = t;
        t = SSLsetAnnotations(g_1, r_1);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          c_11 = ATgetArgument(t, 0);
          t_10 = ATgetArgument(t, 1);
          y_10 = ATgetArgument(t, 2);
          a_11 = ATgetArgument(t, 3);
          {
            ATerm t_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,w_6 = NULL;
            t = SSLgetAnnotations(b_11);
            t_2 = t;
            t = c_11;
            t = y_109(t);
            y_2 = t;
            t = t_10;
            t = y_109(t);
            z_2 = t;
            t = y_10;
            t = y_109(t);
            a_3 = t;
            t = a_11;
            t = w_109(t);
            b_3 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, y_2, z_2, a_3, b_3);
            w_6 = t;
            t = SSLsetAnnotations(w_6, t_2);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              c_11 = ATgetArgument(t, 0);
              t_10 = ATgetArgument(t, 1);
              y_10 = ATgetArgument(t, 2);
              a_11 = ATgetArgument(t, 3);
              {
                ATerm l_4 = NULL,v_4 = NULL,w_4 = NULL,y_4 = NULL,j_5 = NULL,y_6 = NULL;
                t = SSLgetAnnotations(b_11);
                l_4 = t;
                t = c_11;
                t = y_109(t);
                v_4 = t;
                t = t_10;
                t = y_109(t);
                w_4 = t;
                t = y_10;
                t = y_109(t);
                y_4 = t;
                t = a_11;
                t = w_109(t);
                j_5 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, v_4, w_4, y_4, j_5);
                y_6 = t;
                t = SSLsetAnnotations(y_6, l_4);
              }
            }
          else
            {
              ATerm c_6 = NULL,e_6 = NULL,z_6 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  c_11 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_11);
              c_6 = t;
              t = c_11;
              t = w_109(t);
              e_6 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, e_6);
              z_6 = t;
              t = SSLsetAnnotations(z_6, c_6);
            }
        }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm n_11 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_11);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm k_8 = t;
  int m_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_8);
    }
  else
    {
      t = k_8;
      {
        ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,u_11 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_11 = ATgetArgument(t, 0);
            t = p_11;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_11 = ATgetArgument(t, 0);
                q_11 = ATgetArgument(t, 1);
                r_11 = ATgetArgument(t, 2);
                u_11 = ATgetArgument(t, 3);
                t = r_11;
                t = map_1_0(y_0, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_11 = ATgetArgument(t, 0);
                    q_11 = ATgetArgument(t, 1);
                    r_11 = ATgetArgument(t, 2);
                    u_11 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_11;
                t = map_1_0(c_1, t);
              }
          }
      }
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm n_12 = NULL;
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_12 = ATgetArgument(t, 0);
          {
            ATerm q_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_8);
      t = n_12;
    }
  else
    {
      t = o_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_12;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm i_13 = NULL;
  ATerm r_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_13 = ATgetArgument(t, 0);
          {
            ATerm x_8 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_8);
      t = i_13;
    }
  else
    {
      t = r_8;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_13;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(w_0, x_0, tboundin_3_0, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm k_14 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_14);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm y_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_9);
    }
  else
    {
      t = y_8;
      {
        ATerm m_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_14 = ATgetArgument(t, 0);
            t = m_14;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_14 = ATgetArgument(t, 0);
                r_14 = ATgetArgument(t, 1);
                s_14 = ATgetArgument(t, 2);
                t_14 = ATgetArgument(t, 3);
                t = s_14;
                t = map_1_0(l_1, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_14 = ATgetArgument(t, 0);
                    r_14 = ATgetArgument(t, 1);
                    s_14 = ATgetArgument(t, 2);
                    t_14 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_14;
                t = map_1_0(m_1, t);
              }
          }
      }
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm d_15 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_15 = ATgetArgument(t, 0);
          {
            ATerm k_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_9);
      t = d_15;
    }
  else
    {
      t = e_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_15;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm t_15 = NULL;
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_15 = ATgetArgument(t, 0);
          {
            ATerm r_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_9);
      t = t_15;
    }
  else
    {
      t = o_9;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_15;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm b_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      f_14 = ATgetArgument(t, 0);
      t = f_14;
      if(match_cons(t, sym_Rule_3))
        {
          b_14 = ATgetArgument(t, 0);
          {
            ATerm u_9 = ATgetArgument(t, 1);
          }
          {
            ATerm x_9 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = b_14;
      t = free_vars_3_0(d_1, e_1, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          f_14 = ATgetArgument(t, 0);
          {
            ATerm y_9 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_14;
    }
  return(t);
}
static ATerm z_4 (ATerm h_90 (ATerm), ATerm i_90 (ATerm), ATerm i_28, ATerm h_28, ATerm t)
{
  t = i_90(t);
  {
    static ATerm n_1 (ATerm t)
    {
      ATerm f_16 = NULL;
      f_16 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_28, f_16);
      t = h_90(t);
      return(t);
    }
    t = fetch_1_0(n_1, t);
  }
  t = h_28;
  return(t);
}
static ATerm a_5 (ATerm e_90 (ATerm), ATerm e_28, ATerm d_28, ATerm t)
{
  static ATerm f_17 (ATerm t)
  {
    ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
    w_16 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_28;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_16 = ATgetFirst((ATermList) t);
            y_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_9 = t;
          int a_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_16;
              {
                static ATerm p_1 (ATerm t)
                {
                  t = d_28;
                  return(t);
                }
                t = z_4(e_90, p_1, x_16, y_16, t);
              }
              t = f_17(t);
              LocalPopChoice(a_10);
            }
          else
            {
              t = z_9;
              {
                ATerm l_6 = NULL,p_6 = NULL,o_7 = NULL;
                t = SSLgetAnnotations(w_16);
                l_6 = t;
                t = y_16;
                t = f_17(t);
                p_6 = t;
                t = (ATerm) ATinsert(CheckATermList(p_6), x_16);
                o_7 = t;
                t = SSLsetAnnotations(o_7, l_6);
              }
            }
        }
      }
    return(t);
  }
  t = e_28;
  t = f_17(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm a_7 = NULL,b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      a_7 = ATgetArgument(t, 0);
      b_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(a_2, a_7, b_7, t);
  return(t);
}
static ATerm a_2 (ATerm t)
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
static ATerm b_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      l_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(g_2, l_7, m_7, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm v_7 = NULL;
  if(match_cons(t, sym__2))
    {
      v_7 = ATgetArgument(t, 0);
      if((v_7 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm v_107 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm e_18 (ATerm t)
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_107(t);
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        {
          ATerm d_10 = t;
          int e_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_17 = NULL,n_17 = NULL,u_6 = NULL,v_6 = NULL;
              m_17 = t;
              t = u_107(t);
              n_17 = t;
              t = m_17;
              {
                static ATerm s_1 (ATerm t)
                {
                  ATerm q_17 = NULL;
                  t = e_18(t);
                  q_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_17, n_17);
                  t = diff_0_0(t);
                  return(t);
                }
                t = v_107(s_1, e_18, u_1, t);
              }
              v_6 = t;
              t = SSL_explode_term(v_6);
              if(match_cons(t, sym__2))
                {
                  ATerm f_10 = ATgetArgument(t, 0);
                  u_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_6;
              t = foldr_3_0(x_1, y_1, _id, t);
              LocalPopChoice(e_10);
            }
          else
            {
              t = d_10;
              {
                ATerm g_7 = NULL,h_7 = NULL;
                h_7 = t;
                t = SSL_explode_term(h_7);
                if(match_cons(t, sym__2))
                  {
                    ATerm g_10 = ATgetArgument(t, 0);
                    g_7 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_7;
                t = foldr_3_0(b_2, d_2, e_18, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_18(t);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm q_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_9);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm s_9 = NULL,t_9 = NULL,v_9 = NULL,w_9 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            s_9 = ATgetArgument(t, 0);
            t = s_9;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                s_9 = ATgetArgument(t, 0);
                t_9 = ATgetArgument(t, 1);
                v_9 = ATgetArgument(t, 2);
                w_9 = ATgetArgument(t, 3);
                t = v_9;
                t = map_1_0(p_2, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    s_9 = ATgetArgument(t, 0);
                    t_9 = ATgetArgument(t, 1);
                    v_9 = ATgetArgument(t, 2);
                    w_9 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_9;
                t = map_1_0(q_2, t);
              }
          }
      }
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm o_10 = NULL;
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_10 = ATgetArgument(t, 0);
          {
            ATerm l_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_10);
      t = o_10;
    }
  else
    {
      t = j_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_10;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm i_11 = NULL;
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_11 = ATgetArgument(t, 0);
          {
            ATerm p_10 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_10);
      t = i_11;
    }
  else
    {
      t = m_10;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_11;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm l_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      l_11 = ATgetArgument(t, 0);
      {
        ATerm q_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_11;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm m_11 = NULL;
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, m_11, term_u_10);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm s_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      s_11 = ATgetArgument(t, 0);
      {
        ATerm v_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_11), (ATerm)ATempty, (ATerm) ATempty);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm t_11 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_11 = ATgetArgument(t, 0);
      {
        ATerm w_10 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, t_11);
  return(t);
}
ATerm worker_wrapper_0_0 (ATerm t)
{
  ATerm g_22 = NULL,q_22 = NULL,s_22 = NULL,v_22 = NULL,c_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,k_23 = NULL,l_23 = NULL,o_23 = NULL;
  q_22 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      s_22 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
      c_23 = ATgetArgument(t, 2);
      g_23 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_23;
  if(match_cons(t, sym_Seq_2))
    {
      h_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
      t = h_23;
      if(match_cons(t, sym_Match_1))
        {
          g_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_SDefT_4, s_22, v_22, c_23, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_22), i_23)));
      t = worker_wrapper_0_0(t);
    }
  else
    {
      ATerm s_8 = NULL,t_8 = NULL,b_9 = NULL,c_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,l_9 = NULL,m_9 = NULL;
      if(match_cons(t, sym_Scope_2))
        {
          h_23 = ATgetArgument(t, 0);
          i_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_23;
      if(match_cons(t, sym_Seq_2))
        {
          k_23 = ATgetArgument(t, 0);
          o_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_23;
      if(match_cons(t, sym_Match_1))
        {
          l_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_23;
      if(match_cons(t, sym_Op_2))
        {
          ATerm x_10 = ATgetArgument(t, 0);
          ATerm z_10 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_23;
      t = free_vars_3_0(h_2, k_2, tboundin_3_0, t);
      l_9 = t;
      t = c_23;
      t = map_1_0(s_2, t);
      m_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_9, m_9);
      t = diff_0_0(t);
      t_8 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_23, t_8);
      t = diff_0_0(t);
      s_8 = t;
      t = t_8;
      t = map_1_0(u_2, t);
      b_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_23, b_9);
      t = conc_0_0(t);
      i_9 = t;
      t = new_0_0(t);
      c_9 = t;
      t = v_22;
      t = map_1_0(v_2, t);
      h_9 = t;
      t = i_9;
      t = map_1_0(w_2, t);
      j_9 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, c_9, v_22, i_9, (ATerm) ATmakeAppl(sym_Scope_2, s_8, o_23))), (ATerm) ATmakeAppl(sym_SDefT_4, s_22, v_22, c_23, (ATerm) ATmakeAppl(sym_Scope_2, t_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_23), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_9), h_9, j_9)))));
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_86 (ATerm), ATerm t)
{
  static ATerm f_25 (ATerm t)
  {
    ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
    c_25 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_25 = ATgetFirst((ATermList) t);
        b_25 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_12 = NULL,t_12 = NULL,q_7 = NULL;
          t = SSLgetAnnotations(c_25);
          l_12 = t;
          t = b_25;
          t = f_25(t);
          t_12 = t;
          t = (ATerm) ATinsert(CheckATermList(t_12), a_25);
          q_7 = t;
          t = SSLsetAnnotations(q_7, l_12);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_25;
        t = q_86(t);
      }
    return(t);
  }
  t = f_25(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL;
  b_24 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_24;
    }
  else
    {
      static ATerm x_2 (ATerm t)
      {
        t = not_null(d_24);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_24 = ATgetFirst((ATermList) t);
          if(((d_24 != NULL) && (d_24 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_24;
      t = at_end_1_0(x_2, t);
    }
  return(t);
}
static ATerm u_25 (ATerm l_25, ATerm t)
{
  ATerm m_25 = NULL;
  t = SSL_explode_term(l_25);
  if(match_cons(t, sym__2))
    {
      ATerm d_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_25;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  r_25 = t;
  if(match_cons(t, sym__2))
    {
      p_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_3 (ATerm t)
            {
              t = q_25;
              return(t);
            }
            t = p_25;
            t = at_end_1_0(c_3, t);
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            t = u_25(r_25, t);
          }
      }
    }
  else
    {
      t = u_25(r_25, t);
    }
  return(t);
}
ATerm foldr_3_0 (ATerm f_92 (ATerm), ATerm g_92 (ATerm), ATerm h_92 (ATerm), ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
  w_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_25;
      t = f_92(t);
    }
  else
    {
      ATerm b_26 = NULL,c_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_25 = ATgetFirst((ATermList) t);
          y_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_25;
      t = h_92(t);
      b_26 = t;
      t = y_25;
      t = foldr_3_0(f_92, g_92, h_92, t);
      c_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_26, c_26);
      t = g_92(t);
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_7 = NULL;
  r_26 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_26);
  o_26 = t;
  t = p_26;
  t = foldr_3_0(_id, conc_0_0, l_3, t);
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_26);
  s_7 = t;
  t = SSLsetAnnotations(s_7, o_26);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = worker_wrapper_0_0(t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      {
        ATerm t_26 = NULL;
        t_26 = t;
        t = (ATerm) ATinsert(ATempty, t_26);
      }
    }
  return(t);
}
ATerm worker_wrapper_spec_0_0 (ATerm t)
{
  ATerm e_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,u_7 = NULL,t_7 = NULL;
  n_26 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_26);
  e_26 = t;
  t = h_26;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_26 = ATgetFirst((ATermList) t);
      k_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_26);
  i_26 = t;
  t = k_26;
  t = Cons_2_0(e_3, k_3, t);
  l_26 = t;
  t = (ATerm) ATinsert(CheckATermList(l_26), j_26);
  t_7 = t;
  t = SSLsetAnnotations(t_7, i_26);
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, m_26);
  u_7 = t;
  t = SSLsetAnnotations(u_7, e_26);
  return(t);
}
static ATerm b_5 (ATerm d_37, ATerm e_37, ATerm t)
{
  ATerm v_26 = NULL;
  t = SSL_fputc(d_37, e_37);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_26);
  return(t);
}
static ATerm c_5 (ATerm l_22, ATerm m_22, ATerm t)
{
  ATerm x_26 = NULL;
  t = SSL_write_term_to_stream_text(l_22, m_22);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_26);
  return(t);
}
static ATerm e_5 (ATerm r_85 (ATerm), ATerm d_146, ATerm p_22, ATerm t)
{
  ATerm y_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_146, term_j_11);
  t = h_5(t);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_26, p_22);
  t = r_85(t);
  t = fclose_0_0(t);
  t = p_22;
  return(t);
}
static ATerm d_5 (ATerm h_22, ATerm i_22, ATerm t)
{
  ATerm z_26 = NULL;
  t = SSL_write_term_to_stream_baf(h_22, i_22);
  z_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_26);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm c_27 = NULL,d_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if(match_cons(k_11, sym_Stream_1))
        {
          c_27 = ATgetArgument(k_11, 0);
        }
      else
        _fail(t);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(c_27, d_27, t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm e_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_11 = ATgetArgument(t, 0);
      if(match_cons(o_11, sym_Stream_1))
        {
          j_27 = ATgetArgument(o_11, 0);
        }
      else
        _fail(t);
      k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(j_27, k_27, t);
  e_27 = t;
  t = term_v_11;
  h_27 = t;
  t = e_27;
  if(match_cons(t, sym_Stream_1))
    {
      i_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, e_27);
  t = b_5(h_27, i_27, t);
  return(t);
}
ATerm output_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL;
  t = o_103(t);
  b_27 = t;
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_11;
        t = get_config_0_0(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = term_z_11;
      }
  }
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_27, b_27);
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_12;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, a_27, b_27);
        LocalPopChoice(b_12);
        if(match_cons(t, sym__2))
          {
            ATerm d_12 = ATgetArgument(t, 0);
            ATerm e_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_5(m_3, a_27, b_27, t);
      }
    else
      {
        t = a_12;
        if(match_cons(t, sym__2))
          {
            ATerm f_12 = ATgetArgument(t, 0);
            ATerm g_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_5(p_3, a_27, b_27, t);
      }
  }
  return(t);
}
static ATerm p_28 (ATerm v_27, ATerm t)
{
  t = SSL_fclose(v_27);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_27 = NULL,n_28 = NULL;
  n_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_27 = ATgetArgument(t, 0);
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_27);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            t = p_28(n_28, t);
          }
      }
    }
  else
    {
      t = p_28(n_28, t);
    }
  return(t);
}
static ATerm f_5 (ATerm n_22, ATerm t)
{
  t = SSL_read_term_from_stream(n_22);
  return(t);
}
static ATerm g_5 (ATerm f_37, ATerm g_37, ATerm t)
{
  ATerm q_28 = NULL;
  t = SSL_fopen(f_37, g_37);
  q_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_28 = NULL;
  t = SSL_stdin_stream();
  s_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_28);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_28 = NULL;
  t = SSL_stdout_stream();
  t_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_28);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_28 = NULL;
  t = SSL_stderr_stream();
  u_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_28);
  return(t);
}
static ATerm w_30 (ATerm d_29, ATerm t)
{
  ATerm i_29 = NULL;
  t = SSL_explode_term(d_29);
  if(match_cons(t, sym__2))
    {
      ATerm j_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_12 = ATgetArgument(t, 1);
        if(((ATgetType(k_12) == AT_LIST) && !(ATisEmpty(k_12))))
          {
            i_29 = ATgetFirst((ATermList) k_12);
            {
              ATerm m_12 = (ATerm) ATgetNext((ATermList) k_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_30 (ATerm l_29, ATerm n_29, ATerm o_29, ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,u_29 = NULL,a_8 = NULL;
  t = SSLgetAnnotations(o_29);
  r_29 = t;
  t = l_29;
  if(match_cons(t, sym_Path_1))
    {
      u_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_29, n_29);
  a_8 = t;
  t = SSLsetAnnotations(a_8, r_29);
  if(match_cons(t, sym__2))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(p_29, q_29, t);
  return(t);
}
static ATerm y_30 (ATerm w_29, ATerm x_29, ATerm a_30, ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,n_30 = NULL,b_8 = NULL;
  t = SSLgetAnnotations(a_30);
  f_30 = t;
  t = SSL_is_string(w_29);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, x_29);
  b_8 = t;
  t = SSLsetAnnotations(b_8, f_30);
  if(match_cons(t, sym__2))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(d_30, e_30, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  if(match_cons(t, sym__2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_30(t_30, t);
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm q_12 = t;
              int r_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_30(u_30, v_30, t_30, t);
                  LocalPopChoice(r_12);
                }
              else
                {
                  t = q_12;
                  t = y_30(u_30, v_30, t_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_30(t_30, t);
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_31 = NULL;
      h_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_31, term_w_12);
      t = h_5(t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = debug_1_0(r_3, t);
      _fail(t);
    }
  c_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(d_31, t);
  b_31 = t;
  t = c_31;
  t = fclose_0_0(t);
  t = b_31;
  return(t);
}
ATerm input_1_0 (ATerm p_103 (ATerm), ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_12;
      t = get_config_0_0(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      t = term_a_13;
    }
  t = ReadFromFile_0_0(t);
  t = p_103(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  m_31 = t;
  t = term_b_13;
  t = whoami_0_0(t);
  n_31 = t;
  t = term_c_13;
  p_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_13), n_31), term_d_13);
  q_31 = t;
  t = SSL_printnl(p_31, q_31);
  t = term_f_13;
  o_31 = t;
  t = SSL_exit(o_31);
  t = m_31;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm s_31 = NULL;
  s_31 = t;
  if(match_string(t, "-k"))
    {
      t = s_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_31;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  t_31 = t;
  t = SSL_string_to_int(t_31);
  u_31 = t;
  t = term_g_13;
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_13, u_31);
  t = p_5(v_31, u_31, t);
  t = t_31;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_h_13;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_3, t_3, v_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm x_31 = NULL;
  x_31 = t;
  if(match_string(t, "-S"))
    {
      t = x_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_31;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm y_31 = NULL,z_31 = NULL;
  t = term_j_13;
  y_31 = t;
  t = term_m_13;
  z_31 = t;
  t = term_n_13;
  t = p_5(y_31, z_31, t);
  t = term_o_13;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_q_13;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  t = SSL_string_to_int(a_32);
  b_32 = t;
  t = term_j_13;
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_13, b_32);
  t = p_5(c_32, b_32, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_32);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_s_13;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  t = term_t_13;
  d_32 = t;
  t = term_b_13;
  e_32 = t;
  t = term_u_13;
  t = p_5(d_32, e_32, t);
  t = term_v_13;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_w_13;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_13 = t;
  int y_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_3, b_4, c_4, t);
      LocalPopChoice(y_13);
    }
  else
    {
      t = x_13;
      {
        ATerm z_13 = t;
        int a_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_4, e_4, f_4, t);
            LocalPopChoice(a_14);
          }
        else
          {
            t = z_13;
            t = Option_3_0(g_4, h_4, j_4, t);
          }
      }
    }
  return(t);
}
static ATerm p_5 (ATerm z_45, ATerm a_46, ATerm t)
{
  ATerm f_32 = NULL;
  t = term_c_14;
  f_32 = t;
  t = SSL_table_put(f_32, z_45, a_46);
  t = (ATerm) ATmakeAppl(sym__3, term_c_14, z_45, a_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
      t = term_b_13;
      t = e_0(t);
      k_32 = t;
      t = term_d_14;
      l_32 = t;
      t = term_e_14;
      m_32 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_14, term_e_14, k_32);
      t = n_5(l_32, m_32, k_32, t);
      _fail(t);
    }
  else
    {
      ATerm p_32 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_32 = ATgetFirst((ATermList) t);
          j_32 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_32;
      t = c_0(t);
      t = term_b_13;
      t = d_0(t);
      p_32 = t;
      t = (ATerm) ATinsert(CheckATermList(j_32), p_32);
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  if(match_string(t, "-o"))
    {
      t = t_32;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_32;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL;
  u_32 = t;
  t = term_y_11;
  v_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_11, u_32);
  t = p_5(v_32, u_32, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_32);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_g_14;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_4, m_4, n_4, t);
  return(t);
}
static ATerm n_5 (ATerm z_50, ATerm a_51, ATerm y_50, ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_50, a_51);
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_14 = ATgetArgument(t, 0);
            ATerm l_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_50, a_51);
        t = m_5(z_50, a_51, t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        t = (ATerm) ATempty;
      }
  }
  y_32 = t;
  t = (ATerm) ATinsert(CheckATermList(y_32), y_50);
  z_32 = t;
  t = SSL_table_put(z_50, a_51, z_32);
  t = x_32;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
      t = term_b_13;
      t = n_0(t);
      k_33 = t;
      t = term_d_14;
      l_33 = t;
      t = term_e_14;
      m_33 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_14, term_e_14, k_33);
      t = n_5(l_33, m_33, k_33, t);
      _fail(t);
    }
  else
    {
      ATerm q_33 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_33 = ATgetFirst((ATermList) t);
          h_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_33;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_33 = ATgetFirst((ATermList) t);
          j_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_33;
      t = k_0(t);
      t = i_33;
      t = l_0(t);
      q_33 = t;
      t = (ATerm) ATinsert(CheckATermList(j_33), q_33);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  if(match_string(t, "-i"))
    {
      t = s_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_33;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  t_33 = t;
  t = term_z_12;
  u_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_12, t_33);
  t = p_5(u_33, t_33, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_33);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_o_14;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, u_4, k_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_13;
  t = whoami_0_0(t);
  v_33 = t;
  t = term_c_13;
  x_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_14), v_33);
  y_33 = t;
  t = SSL_printnl(x_33, y_33);
  t = term_f_13;
  w_33 = t;
  t = SSL_exit(w_33);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_14;
  t = get_config_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm y_39, ATerm z_39, ATerm t)
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_39, z_39);
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      t = SSL_addr(y_39, z_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  a_34 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_34;
      t = d_92(t);
    }
  else
    {
      ATerm f_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_34 = ATgetFirst((ATermList) t);
          c_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_34;
      t = foldr_2_0(d_92, e_92, t);
      f_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_34, f_34);
      t = e_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm p_13 = NULL,r_13 = NULL;
  if(match_cons(t, sym__2))
    {
      p_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(p_13, r_13, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_34 = NULL,k_13 = NULL,l_13 = NULL;
  t = times_0_0(t);
  l_13 = t;
  t = SSL_explode_term(l_13);
  if(match_cons(t, sym__2))
    {
      ATerm w_14 = ATgetArgument(t, 0);
      k_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_13;
  t = foldr_2_0(o_5, q_5, t);
  i_34 = t;
  t = SSL_TicksToSeconds(i_34);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  if(match_cons(t, sym__2))
    {
      u_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_34;
        if((u_34 != t))
          {
            _fail(t);
          }
        t = t_34;
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = (ATerm) ATmakeAppl(sym__2, u_34, v_34);
        {
          ATerm z_14 = t;
          int a_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_34, v_34);
              LocalPopChoice(a_15);
            }
          else
            {
              t = z_14;
              t = SSL_gtr(u_34, v_34);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_34, v_34);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_100 (ATerm), ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_35 = NULL;
        t = term_j_13;
        t = get_config_0_0(t);
        b_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_35, term_f_13);
        t = geq_0_0(t);
        t = z_34;
        t = p_100(t);
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = z_34;
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,g_35 = NULL,h_35 = NULL;
  t = run_time_0_0(t);
  d_35 = t;
  t = term_b_13;
  t = whoami_0_0(t);
  e_35 = t;
  t = term_c_13;
  g_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_15), d_35), term_e_15), e_35);
  h_35 = t;
  t = SSL_printnl(g_35, h_35);
  t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_15), d_35), term_e_15), e_35));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_13;
  i_35 = t;
  t = SSL_exit(i_35);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  r_35 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_35;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_35 = ATgetArgument(t, 0);
          {
            ATerm n_14 = NULL,l_8 = NULL;
            t = SSLgetAnnotations(r_35);
            n_14 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_35);
            l_8 = t;
            t = SSLsetAnnotations(l_8, n_14);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_35;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm f_103 (ATerm), ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_15;
      t = get_config_0_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      t = fetch_1_0(s_5, t);
    }
  t = f_103(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_35 = ATgetFirst((ATermList) t);
      v_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_36 = NULL,c_36 = NULL;
        static ATerm v_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_36)), not_null(c_36));
          return(t);
        }
        t = v_35;
        t = i_0(t);
        if(((b_36 != NULL) && (b_36 != t)))
          _fail(t);
        else
          b_36 = t;
        t = u_35;
        t = g_0(t);
        if(((c_36 != NULL) && (c_36 != t)))
          _fail(t);
        else
          c_36 = t;
        t = v_35;
        t = reverse_acc_2_0(g_0, v_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_b_13;
      t = i_0(t);
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL,i_36 = NULL,n_8 = NULL;
  i_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_36);
  g_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_36);
  n_8 = t;
  t = SSLsetAnnotations(n_8, g_36);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_36), term_j_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL;
  ATerm k_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_14;
      t = get_config_0_0(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = k_15;
      t = fetch_1_0(w_5, t);
    }
  t = term_n_15;
  t = echo_0_0(t);
  t = term_d_14;
  e_36 = t;
  t = term_e_14;
  f_36 = t;
  t = term_o_15;
  t = m_5(e_36, f_36, t);
  t = reverse_acc_2_0(_id, x_5, t);
  t = map_1_0(y_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm k_86 (ATerm), ATerm t)
{
  static ATerm p_37 (ATerm t)
  {
    ATerm k_37 = NULL,l_37 = NULL,o_37 = NULL;
    k_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_37 = ATgetFirst((ATermList) t);
        o_37 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_15 = t;
      int r_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_15 = NULL,p_15 = NULL,v_8 = NULL;
          t = SSLgetAnnotations(k_37);
          l_15 = t;
          t = l_37;
          t = k_86(t);
          p_15 = t;
          t = (ATerm) ATinsert(CheckATermList(o_37), p_15);
          v_8 = t;
          t = SSLsetAnnotations(v_8, l_15);
          LocalPopChoice(r_15);
        }
      else
        {
          t = q_15;
          {
            ATerm b_16 = NULL,h_16 = NULL,w_8 = NULL;
            t = SSLgetAnnotations(k_37);
            b_16 = t;
            t = o_37;
            t = p_37(t);
            h_16 = t;
            t = (ATerm) ATinsert(CheckATermList(h_16), l_37);
            w_8 = t;
            t = SSLsetAnnotations(w_8, b_16);
          }
        }
    }
    return(t);
  }
  t = p_37(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  {
    ATerm s_15 = t;
    int u_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_37;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_15 = ATgetFirst((ATermList) t);
                ATerm w_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_37;
          }
        LocalPopChoice(u_15);
      }
    else
      {
        t = s_15;
        t = (ATerm) ATinsert(ATempty, t_37);
      }
  }
  u_37 = t;
  t = term_z_11;
  v_37 = t;
  t = SSL_printnl(v_37, u_37);
  t = t_37;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_14;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_5 (ATerm w_35, ATerm x_35, ATerm t)
{
  t = SSL_strcat(w_35, x_35);
  return(t);
}
ATerm debug_1_0 (ATerm p_85 (ATerm), ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  z_37 = t;
  t = p_85(t);
  a_38 = t;
  t = term_c_13;
  b_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_37), a_38);
  c_38 = t;
  t = SSL_printnl(b_38, c_38);
  t = z_37;
  return(t);
}
ATerm map_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  static ATerm r_38 (ATerm t)
  {
    ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
    o_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_38;
      }
    else
      {
        ATerm a_17 = NULL,j_17 = NULL,k_17 = NULL,z_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_38 = ATgetFirst((ATermList) t);
            q_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_38);
        a_17 = t;
        t = p_38;
        t = a_86(t);
        j_17 = t;
        t = q_38;
        t = r_38(t);
        k_17 = t;
        t = (ATerm) ATinsert(CheckATermList(k_17), j_17);
        z_8 = t;
        t = SSLsetAnnotations(z_8, a_17);
      }
    return(t);
  }
  t = r_38(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm x_15 = t;
  int y_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(y_15);
    }
  else
    {
      t = x_15;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_z_15;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm a_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_38 = NULL;
      z_38 = t;
      t = SSL_is_string(z_38);
      LocalPopChoice(c_16);
    }
  else
    {
      t = a_16;
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_5, t);
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            {
              ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
              f_39 = t;
              if(match_cons(t, sym_Path_1))
                {
                  g_39 = ATgetArgument(t, 0);
                  t = g_39;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      g_39 = ATgetArgument(t, 0);
                      t = g_39;
                      {
                        ATerm g_16 = t;
                        int i_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(i_16);
                          }
                        else
                          {
                            t = g_16;
                            t = debug_1_0(a_6, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm l_39 = NULL,m_39 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          g_39 = ATgetArgument(t, 0);
                          h_39 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = g_39;
                      t = eval_config_0_0(t);
                      l_39 = t;
                      t = h_39;
                      t = eval_config_0_0(t);
                      m_39 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_39, m_39);
                      t = l_5(l_39, m_39, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_5 (ATerm q_52, ATerm r_52, ATerm t)
{
  t = SSL_table_get(q_52, r_52);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL;
  q_39 = t;
  t = term_c_14;
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_14, q_39);
  t = m_5(r_39, q_39, t);
  {
    ATerm j_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_39 = NULL,t_39 = NULL;
        t = eval_config_0_0(t);
        s_39 = t;
        t = term_c_14;
        t_39 = t;
        t = SSL_table_put(t_39, q_39, s_39);
        t = s_39;
        LocalPopChoice(k_16);
      }
    else
      {
        t = j_16;
      }
  }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  t = term_l_16;
  w_39 = t;
  t = term_b_13;
  x_39 = t;
  t = term_m_16;
  t = p_5(w_39, x_39, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_n_16;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL;
  t = term_l_16;
  c_40 = t;
  t = term_b_13;
  d_40 = t;
  t = term_m_16;
  t = p_5(c_40, d_40, t);
  t = term_o_16;
  a_40 = t;
  t = term_b_13;
  b_40 = t;
  t = term_p_16;
  t = p_5(a_40, b_40, t);
  t = term_q_16;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_r_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_6, f_6, g_6, t);
      LocalPopChoice(t_16);
    }
  else
    {
      t = s_16;
      t = Option_3_0(h_6, i_6, j_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,d_9 = NULL;
  j_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_40 = ATgetFirst((ATermList) t);
      g_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_40);
  e_40 = t;
  t = f_40;
  t = n_65(t);
  h_40 = t;
  t = g_40;
  t = o_65(t);
  i_40 = t;
  t = (ATerm) ATinsert(CheckATermList(i_40), h_40);
  d_9 = t;
  t = SSLsetAnnotations(d_9, e_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_105 (ATerm), ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,t_40 = NULL,u_40 = NULL,g_9 = NULL;
  o_40 = t;
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_16;
        t = i_105(t);
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
      }
  }
  t = o_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_40 = ATgetFirst((ATermList) t);
      r_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_40);
  p_40 = t;
  t = term_q_14;
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, q_40);
  t = p_5(u_40, q_40, t);
  t = r_40;
  {
    static ATerm f_41 (ATerm t)
    {
      ATerm b_17 = t;
      int c_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_40 = NULL;
              x_40 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_40;
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              t = i_105(t);
              t = Cons_2_0(_id, f_41, t);
            }
          LocalPopChoice(c_17);
        }
      else
        {
          t = b_17;
          {
            ATerm a_41 = NULL,b_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                a_41 = ATgetFirst((ATermList) t);
                b_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(b_41), (ATerm) ATmakeAppl(sym_Undefined_1, a_41));
          }
        }
      return(t);
    }
    t = f_41(t);
  }
  t_40 = t;
  t = (ATerm) ATinsert(CheckATermList(t_40), (ATerm) ATmakeAppl(sym_Program_1, q_40));
  g_9 = t;
  t = SSLsetAnnotations(g_9, p_40);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm r_41 = NULL;
  r_41 = t;
  if(match_string(t, "--help"))
    {
      t = r_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = r_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = r_41;
        }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  t = term_i_15;
  s_41 = t;
  t = term_b_13;
  t_41 = t;
  t = term_g_17;
  t = p_5(s_41, t_41, t);
  t = term_h_17;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_i_17;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  m_41 = t;
  t = term_d_14;
  o_41 = t;
  t = term_e_14;
  p_41 = t;
  t = (ATerm) ATempty;
  q_41 = t;
  t = SSL_table_put(o_41, p_41, q_41);
  t = m_41;
  {
    static ATerm k_6 (ATerm t)
    {
      ATerm l_17 = t;
      int o_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_105(t);
          LocalPopChoice(o_17);
        }
      else
        {
          t = l_17;
          {
            ATerm p_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_6, n_6, o_6, t);
                LocalPopChoice(r_17);
              }
            else
              {
                t = p_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_6, t);
  }
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_42 = NULL;
        a_42 = t;
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_18 = NULL;
              t = a_42;
              {
                ATerm w_17 = t;
                int x_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_15;
                    t = get_config_0_0(t);
                    LocalPopChoice(x_17);
                  }
                else
                  {
                    t = w_17;
                    t = fetch_1_0(q_6, t);
                  }
              }
              t = a_42;
              t = default_system_usage_0_0(t);
              t = term_m_13;
              m_18 = t;
              t = SSL_exit(m_18);
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
              {
                ATerm q_18 = NULL;
                t = term_l_16;
                t = get_config_0_0(t);
                t = a_42;
                t = default_system_about_0_0(t);
                t = term_m_13;
                q_18 = t;
                t = SSL_exit(q_18);
              }
            }
        }
        LocalPopChoice(t_17);
      }
    else
      {
        t = s_17;
        {
          ATerm y_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
              static ATerm r_6 (ATerm t)
              {
                ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,n_9 = NULL;
                g_42 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    f_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(g_42);
                e_42 = t;
                t = f_42;
                if(((k_41 != NULL) && (k_41 != t)))
                  _fail(t);
                else
                  k_41 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, f_42);
                n_9 = t;
                t = SSLsetAnnotations(n_9, e_42);
                return(t);
              }
              t = fetch_1_0(r_6, t);
              t = term_c_13;
              c_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_41)), term_a_18);
              d_42 = t;
              t = SSL_printnl(c_42, d_42);
              t = (ATerm) ATmakeAppl(sym__2, term_c_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_41)), term_a_18));
              t = default_system_usage_0_0(t);
              t = term_f_13;
              b_42 = t;
              t = SSL_exit(b_42);
              LocalPopChoice(z_17);
            }
          else
            {
              t = y_17;
            }
        }
      }
  }
  l_41 = t;
  t = term_d_14;
  n_41 = t;
  t = SSL_table_destroy(n_41);
  t = l_41;
  return(t);
}
ATerm option_wrap_4_0 (ATerm h_103 (ATerm), ATerm i_103 (ATerm), ATerm j_103 (ATerm), ATerm k_103 (ATerm), ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  t = parse_options_1_0(h_103, t);
  l_42 = t;
  t = term_b_18;
  o_42 = t;
  t = SSL_table_create(o_42);
  t = term_b_18;
  m_42 = t;
  t = term_c_18;
  n_42 = t;
  t = SSL_table_put(m_42, n_42, l_42);
  t = l_42;
  t = j_103(t);
  {
    ATerm d_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(i_103, t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = d_18;
        {
          ATerm g_18 = t;
          int h_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_18);
            }
          else
            {
              t = g_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm n_18 = t;
              int o_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_6, f_7, i_7, t);
                  LocalPopChoice(o_18);
                }
              else
                {
                  t = n_18;
                  {
                    ATerm p_18 = t;
                    int r_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(r_18);
                      }
                    else
                      {
                        t = p_18;
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
static ATerm t_6 (ATerm t)
{
  t = input_1_0(j_7, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL;
  t = term_c_12;
  q_42 = t;
  t = term_b_13;
  r_42 = t;
  t = term_s_18;
  t = p_5(q_42, r_42, t);
  t = term_t_18;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_u_18;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = output_1_0(worker_wrapper_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_6, default_usage_0_0, _id, t_6, t);
  return(t);
}
